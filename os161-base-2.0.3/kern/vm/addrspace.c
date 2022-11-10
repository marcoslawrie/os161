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

#include <types.h>
#include <kern/errno.h>
#include <lib.h>
#include <addrspace.h>
#include "vm.h"
#include <spl.h>
#include <cpu.h>
#include <spinlock.h>
#include <proc.h>
#include <current.h>
#include <mips/tlb.h>

#include "coremap.h"
#include <vmstats.h>
#include "pt.h"
/*
 * Note! If OPT_DUMBVM is set, as is the case until you start the VM
 * assignment, this file is not compiled or linked or in any way
 * used. The cheesy hack versions in dumbvm.c are used instead.
 */


struct addrspace * as_create(void)
{
	struct addrspace *as = kmalloc(sizeof(struct addrspace));
	if (as==NULL) {
		return NULL;
	}

	as->code_vbase = 0;
	as->code_pt = NULL; //Null pointer
	as->npages_code = 0;
	
	as->data_vbase = 0;
	as->data_pt = NULL;
	as->npages_data = 0;
	
	as->stack_pt = NULL;
	

	return as;
}
void dumbvm_can_sleep(void)
{
	if (CURCPU_EXISTS()) {
		/* must not hold spinlocks */
		KASSERT(curcpu->c_spinlocks == 0);

		/* must not be in an interrupt handler */
		KASSERT(curthread->t_in_interrupt == 0);
	}
}
#if 0
int as_copy(struct addrspace *old, struct addrspace **ret)
{
	struct addrspace *new;

	dumbvm_can_sleep();

	new = as_create();
	if (new==NULL) {
		return ENOMEM;
	}

	new->as_vbase1 = old->as_vbase1;
	new->as_npages1 = old->as_npages1;
	new->as_vbase2 = old->as_vbase2;
	new->as_npages2 = old->as_npages2;

	/* (Mis)use as_prepare_load to allocate some physical memory. */
	if (as_prepare_load(new)) {
		as_destroy(new);
		return ENOMEM;
	}

	KASSERT(new->as_pbase1 != 0);
	KASSERT(new->as_pbase2 != 0);
	KASSERT(new->as_stackpbase != 0);

	memmove((void *)PADDR_TO_KVADDR(new->as_pbase1),
		(const void *)PADDR_TO_KVADDR(old->as_pbase1),
		old->as_npages1*PAGE_SIZE);

	memmove((void *)PADDR_TO_KVADDR(new->as_pbase2),
		(const void *)PADDR_TO_KVADDR(old->as_pbase2),
		old->as_npages2*PAGE_SIZE);

	memmove((void *)PADDR_TO_KVADDR(new->as_stackpbase),
		(const void *)PADDR_TO_KVADDR(old->as_stackpbase),
		VM_STACKPAGES*PAGE_SIZE);

	*ret = new;
	return 0;
}
#endif

void as_destroy(struct addrspace *as){
  dumbvm_can_sleep();
	for(unsigned int i = 0; i < as->npages_code; i++ ) {
		if(as->code_pt[i] & VALID_BIT){
			freeppages(as->code_pt[i], 1);
		}
		
	}
	
	for(unsigned int i = 0; i < as->npages_data; i++ ) {
		if(as->data_pt[i] & VALID_BIT){
		freeppages(as->data_pt[i],1);
		}
	}
	for(unsigned int i = 0; i< VM_STACKPAGES; i++) {
		if(as->stack_pt[i] & VALID_BIT){
		freeppages(as->stack_pt[i], 1);
		}
	}

  kfree(as);
}

void as_activate(void)
{
	int i, spl;
	struct addrspace *as;

	as = proc_getas();
	if (as == NULL) {
		return;
	}
	
	/* Disable interrupts on this CPU while frobbing the TLB. */
	spl = splhigh();

	for (i=0; i<NUM_TLB; i++) {
		tlb_write(TLBHI_INVALID(i), TLBLO_INVALID(), i);
	}
	increment_TLB_invalidations();
	splx(spl);

	
}

void
as_deactivate(void)
{
	/*
	 * Write this. For many designs it won't need to actually do
	 * anything. See proc.c for an explanation of why it (might)
	 * be needed.
	 */
}

/*
 * Set up a segment at virtual address VADDR of size MEMSIZE. The
 * segment in memory extends from VADDR up to (but not including)
 * VADDR+MEMSIZE.
 *
 * The READABLE, WRITEABLE, and EXECUTABLE flags are set if read,
 * write, or execute permission should be set on the segment. At the
 * moment, these are ignored. When you write the VM system, you may
 * want to implement them.
 */
int as_define_region(struct addrspace *as, vaddr_t vaddr, size_t sz,
		 int readable, int writeable, int executable)
{
	size_t npages;

	dumbvm_can_sleep();

	/* Align the region. First, the base... */
	sz += vaddr & ~(vaddr_t)PAGE_FRAME;
	vaddr &= PAGE_FRAME;

	/* ...and now the length. */
	sz = (sz + PAGE_SIZE - 1) & PAGE_FRAME;

	npages = sz / PAGE_SIZE;

	/* We don't use these - all pages are read-write */
	(void)readable;
	(void)writeable;
	(void)executable;

	if (as->code_vbase == 0) {
		as->code_vbase = vaddr;
		as->npages_code = npages;
		as->code_pt = kmalloc(npages*sizeof(uint32_t));
		for(unsigned int i = 0; i < as->npages_code; i++ ) {
			as->code_pt[i] = 0;
		}
		
		return 0;
	}

	if (as->data_vbase == 0) {
		as->data_vbase = vaddr;
		as->npages_data = npages;
		as->data_pt = kmalloc(npages*sizeof(uint32_t));
		for(unsigned int i = 0; i < as->npages_data; i++ ) {
			as->data_pt[i] = 0;
		}
		return 0;
	}
	

	/*
	 * Support for more than two regions is not available.
	 */
	kprintf("dumbvm: Warning: too many regions\n");
	return ENOSYS;
}

/*static void as_zero_region(paddr_t paddr, unsigned npages)
{
	bzero((void *)PADDR_TO_KVADDR(paddr), npages * PAGE_SIZE);
}*/



int as_prepare_load(struct addrspace *as, vaddr_t vaddr, int pt)
{
	/* ONLY WHEN DEMANDING PAGE IS NOT IMPLEMENTED
	for(unsigned int i = 0; i < as->npages_code; i++ ) {
		KASSERT(as->code_pt[i] == 0);
	}
	for(unsigned int i = 0; i < as->npages_data; i++ ) {
		KASSERT(as->data_pt[i] == 0);
	}

	for(unsigned int i = 0; i< VM_STACKPAGES; i++) {
		KASSERT(as->stack_pt[i] == 0);
	}*/
	
	int stackbase;
	paddr_t paddr = getppages(1);
	if(paddr == 0){
		kprintf("Out of memory");
		panic("OUT OF MEMORY");
		return -1;
	}
	int index;
	switch (pt)
	{
		case IS_CODE_PT:
			index = (vaddr-as->code_vbase)/PAGE_SIZE;
			as->code_pt[index] = paddr|VALID_BIT;
			//as_zero_region(as->code_pt[index] & PAGE_FRAME,1);
			break;
		case IS_DATA_PT:
			index = (vaddr-as->data_vbase)/PAGE_SIZE;
			as->data_pt[index] = paddr|VALID_BIT;
			//as_zero_region(as->data_pt[index] & PAGE_FRAME, 1);
			break;
		case IS_STACK_PT:	
			stackbase = USERSTACK - VM_STACKPAGES * PAGE_SIZE;
			index = (vaddr - stackbase)/PAGE_SIZE;
			as->stack_pt[index] = paddr|VALID_BIT;
			
			//as_zero_region(as->stack_pt[index] & PAGE_FRAME,1);

			break;
		default:
			return -1;
			//Finish the program if the pt does not belong to any of the PT
			break;
	}
	
	dumbvm_can_sleep();
	//ONLY WHEN DEMANDING PAGE IS NOT IMPLEMENTED
	/*Allocating all code pages*/
	//Left commented for later implementation
    /*for(unsigned int i = 0; i < as->npages_code; i++ ) {
		as->code_pt[i] = getppages(1);
		as_zero_region(as->code_pt[i],1);
	}
	
	for(unsigned int i = 0; i < as->npages_data; i++ ) {
		as->data_pt[i] = getppages(1);
		as_zero_region(as->data_pt[i], 1);
	}
	for(unsigned int i = 0; i< VM_STACKPAGES; i++) {
		as->stack_pt[i] = getppages(1);
		as_zero_region(as->stack_pt[i], 1);
	}*/


	return 0;
}

int as_complete_load(struct addrspace *as)
{
	dumbvm_can_sleep();
	(void)as;
	return 0;
}

int as_define_stack(struct addrspace *as, vaddr_t *stackptr)
{
	as->stack_pt    = kmalloc(sizeof(uint32_t));
	for(unsigned int i = 0; i< VM_STACKPAGES; i++) {
		as->stack_pt[i] = 0;
	}
	KASSERT(as->stack_pt != 0);

	*stackptr = USERSTACK;
	return 0;
}


