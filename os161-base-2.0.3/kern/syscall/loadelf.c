/*
 * Copyright (c) 2000, 2001, 2002, 2003, 2004, 2005, 2008, 2009
 *	The President and Fellows of Harvard College.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE UNIVERSITY AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE UNIVERSITY OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */


/*
 * Code to load an ELF-format executable into the current address space.
 *
 * It makes the following address space calls:
 *    - first, as_define_region once for each segment of the program;
 *    - then, as_prepare_load;
 *    - then it loads each chunk of the program;
 *    - finally, as_complete_load.
 *
 * This gives the VM code enough flexibility to deal with even grossly
 * mis-linked executables if that proves desirable. Under normal
 * circumstances, as_prepare_load and as_complete_load probably don't
 * need to do anything.
 *
 * If you wanted to support memory-mapped executables you would need
 * to rearrange this to map each segment.
 *
 * To support dynamically linked executables with shared libraries
 * you'd need to change this to load the "ELF interpreter" (dynamic
 * linker). And you'd have to write a dynamic linker...
 */

#include <types.h>
#include <kern/errno.h>
#include <lib.h>
#include <uio.h>
#include <proc.h>
#include <current.h>
#include <addrspace.h>
#include <vnode.h>
#include <elf.h>
#include <vfs.h>
#include <kern/fcntl.h>
#include "vm_tlb.h"
#include "pt.h"
#include <vmstats.h>
/*
 * Load a segment at virtual address VADDR. The segment in memory
 * extends from VADDR up to (but not including) VADDR+MEMSIZE. The
 * segment on disk is located at file offset OFFSET and has length
 * FILESIZE.
 *
 * FILESIZE may be less than MEMSIZE; if so the remaining portion of
 * the in-memory segment should be zero-filled.
 *
 * Note that uiomove will catch it if someone tries to load an
 * executable whose load address is in kernel space. If you should
 * change this code to not use uiomove, be sure to check for this case
 * explicitly.
 */
int load_page(vaddr_t faultaddress){
	
	struct vnode *v;
	int result;
	struct iovec iov;
	struct uio u;
	struct addrspace *as;
	char * progname;
	int is_executable;
	off_t offset;
	size_t memsize;
	size_t filesize;
	vaddr_t vaddr;

	as = proc_getas();
	Elf_Phdr ph;   /* "Program header" */
	int pt = identify_PT(as,faultaddress);
	switch (pt){
		case IS_CODE_PT:
			ph = proc_get_phcode();
		break;
		case IS_DATA_PT:
			ph = proc_get_phdata();
		break;
	}


	// MEM SIZE COMPUTING
	int npage_from_start = ((faultaddress & PAGE_FRAME) - (ph.p_vaddr & PAGE_FRAME))/PAGE_SIZE;
	if(npage_from_start == 0){
		/* first page - write from vaddr to end of page */
		memsize = PAGE_SIZE - ph.p_vaddr % PAGE_SIZE;
		
	}else{
		/* intermidiate page ( saturate at 1 page ) */
		memsize = PAGE_SIZE;
	}
	

	//offset computing
	if(npage_from_start == 0){
		/* first page of the segment */
		offset = ph.p_offset;
		
	}else if(((faultaddress - ph.p_vaddr)&PAGE_FRAME) > ph.p_filesz){
		/* above the end of the segment - page should only be zero filled */
		offset = ph.p_offset + ph.p_filesz;
		
	}else{
		/* intermidiate page */
		offset = ph.p_offset + (PAGE_SIZE - ph.p_offset % PAGE_SIZE) + (npage_from_start-1)*PAGE_SIZE;
		
	}




	//FILE SIZE COMPUTING: amount of bytes to be read from the elf file.
	if(npage_from_start == 0){
		// first page from segment 
		if(  ph.p_filesz < (PAGE_SIZE - ph.p_offset % PAGE_SIZE)){
			// segment size smaller than a page 
			filesize = ph.p_filesz;
		}else{
			/* read until the end of the first page */
			filesize = (PAGE_SIZE - ph.p_offset % PAGE_SIZE);
		}
	}else{
		/* intermidiate page */
		filesize = (ph.p_filesz - (offset-ph.p_offset));
		/* saturation at one page, we load only one page at most */
		if( filesize > PAGE_SIZE ){
			filesize = PAGE_SIZE;
		}
	}

	//vaddr computing
	if(npage_from_start == 0){
		/* first page */
		vaddr =  ph.p_vaddr;
	}else{
		/* intermidiate page */
		vaddr =  faultaddress & PAGE_FRAME;
	}
	
	
	progname = proc_getprogname();

	(void) u;
	(void) result;
	//We have one PT for each segment, identifying the PT that the faultaddress belongs to, tell us which segment it belongs to
		
	
	//Open ELF file
	result = vfs_open(progname, O_RDONLY, 0, &v);
	if (result) {
		panic("[LOAD_PAGE]: vfs_open failed while opening elf file");
	}


	is_executable = ph.p_flags & PF_X;


	iov.iov_ubase = (userptr_t)vaddr;
	iov.iov_len = memsize;		 // length of the memory space
	u.uio_iov = &iov;
	u.uio_iovcnt = 1;
	u.uio_resid = filesize;          // amount to read from the file
	u.uio_offset = offset;
	u.uio_segflg = is_executable ? UIO_USERISPACE : UIO_USERSPACE;
	u.uio_rw = UIO_READ;
	u.uio_space = as;

	result = VOP_READ(v, &u);
	if (result) {
		panic("[LOAD_PAGE]: VOP_READ failed while reading elf file");
	}

	if (u.uio_resid != 0) {
		/* short read; problem with executable? */
		kprintf("ELF: short read on segment - file truncated?\n");
		return ENOEXEC;
	}
	vfs_close(v);

	return 0;
	

}
static
int
load_segment(struct addrspace *as, struct vnode *v,
	     off_t offset, vaddr_t vaddr,
	     size_t memsize, size_t filesize,
	     int is_executable)
{
	struct iovec iov;
	struct uio u;
	int result;

	if (filesize > memsize) {
		kprintf("ELF: warning: segment filesize > segment memsize\n");
		filesize = memsize;
	}

	DEBUG(DB_EXEC, "ELF: Loading %lu bytes to 0x%lx\n",
	      (unsigned long) filesize, (unsigned long) vaddr);

	iov.iov_ubase = (userptr_t)vaddr;
	iov.iov_len = memsize;		 // length of the memory space
	u.uio_iov = &iov;
	u.uio_iovcnt = 1;
	u.uio_resid = filesize;          // amount to read from the file
	u.uio_offset = offset;
	u.uio_segflg = is_executable ? UIO_USERISPACE : UIO_USERSPACE;
	u.uio_rw = UIO_READ;
	u.uio_space = as;

	result = VOP_READ(v, &u);
	if (result) {
		return result;
	}

	if (u.uio_resid != 0) {
		/* short read; problem with executable? */
		kprintf("ELF: short read on segment - file truncated?\n");
		return ENOEXEC;
	}

	/*
	 * If memsize > filesize, the remaining space should be
	 * zero-filled. There is no need to do this explicitly,
	 * because the VM system should provide pages that do not
	 * contain other processes' data, i.e., are already zeroed.
	 *
	 * During development of your VM system, it may have bugs that
	 * cause it to (maybe only sometimes) not provide zero-filled
	 * pages, which can cause user programs to fail in strange
	 * ways. Explicitly zeroing program BSS may help identify such
	 * bugs, so the following disabled code is provided as a
	 * diagnostic tool. Note that it must be disabled again before
	 * you submit your code for grading.
	 */
#if 0
	{
		size_t fillamt;

		fillamt = memsize - filesize;
		if (fillamt > 0) {
			DEBUG(DB_EXEC, "ELF: Zero-filling %lu more bytes\n",
			      (unsigned long) fillamt);
			u.uio_resid += fillamt;
			result = uiomovezeros(fillamt, &u);
		}
	}
#endif

	return result;
}

/*
 * Load an ELF executable user program into the current address space.
 *
 * Returns the entry point (initial PC) for the program in ENTRYPOINT.
 */
int
load_elf(struct vnode *v, vaddr_t *entrypoint)
{
	Elf_Ehdr eh;   /* Executable header */
	Elf_Phdr ph;   /* "Program header" = segment header */
	int result, i;
	struct iovec iov;
	struct uio ku;
	struct addrspace *as;

	as = proc_getas();

	/*
	 * Read the executable header from offset 0 in the file.
	 */

	uio_kinit(&iov, &ku, &eh, sizeof(eh), 0, UIO_READ);
	result = VOP_READ(v, &ku);
	if (result) {
		return result;
	}

	if (ku.uio_resid != 0) {
		/* short read; problem with executable? */
		kprintf("ELF: short read on header - file truncated?\n");
		return ENOEXEC;
	}

	/*
	 * Check to make sure it's a 32-bit ELF-version-1 executable
	 * for our processor type. If it's not, we can't run it.
	 *
	 * Ignore EI_OSABI and EI_ABIVERSION - properly, we should
	 * define our own, but that would require tinkering with the
	 * linker to have it emit our magic numbers instead of the
	 * default ones. (If the linker even supports these fields,
	 * which were not in the original elf spec.)
	 */

	if (eh.e_ident[EI_MAG0] != ELFMAG0 ||
	    eh.e_ident[EI_MAG1] != ELFMAG1 ||
	    eh.e_ident[EI_MAG2] != ELFMAG2 ||
	    eh.e_ident[EI_MAG3] != ELFMAG3 ||
	    eh.e_ident[EI_CLASS] != ELFCLASS32 ||
	    eh.e_ident[EI_DATA] != ELFDATA2MSB ||
	    eh.e_ident[EI_VERSION] != EV_CURRENT ||
	    eh.e_version != EV_CURRENT ||
	    eh.e_type!=ET_EXEC ||
	    eh.e_machine!=EM_MACHINE) {
		return ENOEXEC;
	}

	/*
	 * Go through the list of segments and set up the address space.
	 *
	 * Ordinarily there will be one code segment, one read-only
	 * data segment, and one data/bss segment, but there might
	 * conceivably be more. You don't need to support such files
	 * if it's unduly awkward to do so.
	 *
	 * Note that the expression eh.e_phoff + i*eh.e_phentsize is
	 * mandated by the ELF standard - we use sizeof(ph) to load,
	 * because that's the structure we know, but the file on disk
	 * might have a larger structure, so we must use e_phentsize
	 * to find where the phdr starts.
	 */

	for (i=0; i<eh.e_phnum; i++) {
		off_t offset = eh.e_phoff + i*eh.e_phentsize;
		uio_kinit(&iov, &ku, &ph, sizeof(ph), offset, UIO_READ);

		result = VOP_READ(v, &ku);
		if (result) {
			return result;
		}

		if (ku.uio_resid != 0) {
			/* short read; problem with executable? */
			kprintf("ELF: short read on phdr - file truncated?\n");
			return ENOEXEC;
		}

		switch (ph.p_type) {
		    case PT_NULL: /* skip */ continue;
		    case PT_PHDR: /* skip */ continue;
		    case PT_MIPS_REGINFO: /* skip */ continue;
		    case PT_LOAD: break;
		    default:
			kprintf("loadelf: unknown segment type %d\n",
				ph.p_type);
			return ENOEXEC;
		}
		/*Save program headers to then use them in load page*/

		if(ph.p_flags & PF_X) { //Segment is executable so it is code segment
			proc_set_phcode(ph);
		} else { //data segment
			proc_set_phdata(ph);
		}
		result = as_define_region(as,
					  ph.p_vaddr, ph.p_memsz,
					  ph.p_flags & PF_R,
					  ph.p_flags & PF_W,
					  ph.p_flags & PF_X);
		if (result) {
			return result;
		}
	}
	

	if(0){
		load_segment(as, v, ph.p_offset, ph.p_vaddr,
				      ph.p_memsz, ph.p_filesz,
				      ph.p_flags & PF_X);
	}

	*entrypoint = eh.e_entry;

	return 0;
}
