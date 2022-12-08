#include <types.h>
#include <kern/errno.h>
#include <lib.h>
#include <uio.h>
#include <spl.h>
#include <cpu.h>
#include <spinlock.h>
#include <proc.h>
#include <vnode.h>
#include <vfs.h>
#include <elf.h>
#include <kern/fcntl.h>
#include <current.h>
#include <mips/tlb.h>
#include <addrspace.h>
#include <vm.h>
#include <coremap.h>
#include "pt.h"
#include <swapfile.h>
#include <vmstats.h>

static struct swapfile_coremap swapfile_cm;

void swapfile_init() {
    
    struct vnode *v;
    int result;
    char * swapfile_name = (char*) SWAPFILE_NAME;
    result = vfs_open(swapfile_name,O_RDWR|O_TRUNC|O_CREAT,0,&v);

    if(result){
        panic("ERROR: swapfile_init failed\n");
    }
    vfs_close(v);

    swapfile_cm.entry_state = kmalloc(N_PAGES_SWAPFILE*sizeof(char));
    swapfile_cm.entry_vaddr = kmalloc(N_PAGES_SWAPFILE*sizeof(vaddr_t));
    if((swapfile_cm.entry_state == NULL) | (swapfile_cm.entry_state == NULL)){
        panic("Error initialiazing swapfile coremap");
    }
    for(int i = 0 ; i<N_PAGES_SWAPFILE ; i++){
        swapfile_cm.entry_vaddr[i] = 0;
        swapfile_cm.entry_state[i] = SF_FREE_ENTRY;
    }

    
}
int swap_out(vaddr_t vaddr){
    increment_page_fault_swapfile_write();
    struct addrspace *as;
    struct iovec iov;
	struct uio u;
    struct vnode *v;
    //kprintf("Swap_out function strats!\n");
    int result;
    char * swapfile_name = (char*) SWAPFILE_NAME;
    result = vfs_open(swapfile_name,O_RDWR|O_CREAT|O_APPEND,0,&v);
    if(result){
        panic("ERROR when opening swapfile");
    }
    int entry_index = find_free_swapfile_entry(vaddr);
    if(entry_index < 0){
        panic("Out of swap space");
    }

    as = proc_getas();

    iov.iov_ubase = (userptr_t)(vaddr & PAGE_FRAME);
    iov.iov_len = PAGE_SIZE;
    u.uio_iov = &iov;
    u.uio_iovcnt = 1;
    u.uio_resid = PAGE_SIZE;
    u.uio_offset = entry_index*PAGE_SIZE;
    u.uio_segflg = UIO_USERSPACE;
	u.uio_rw = UIO_WRITE;
	u.uio_space = as;
    result = VOP_WRITE(v, &u);
    
    if(result){
        vfs_close(v);
        panic("ERROR while writting in SWAPFILE");
    }
    if(u.uio_resid != 0){
        vfs_close(v);
        kprintf("WARNING - SWAPFILE: short write\n");
        panic("SWAPFILE write failed\n");
    }
    vfs_close(v);

    //kprintf("Swap_out function ends!\n");
    return 0;
}
void swap_in(vaddr_t vaddr){
    
    struct addrspace *as;
    struct iovec iov;
	struct uio u;
    struct vnode *v;

    
    int result;
    char * swapfile_name = (char*) SWAPFILE_NAME;
    result = vfs_open(swapfile_name,O_RDWR|O_CREAT|O_APPEND,0,&v);
    if(result){
        panic("SWAP_IN: ERROR when opening swapfile");
    }
    int entry_index = find_swapfile_index(vaddr);
    if(entry_index < 0){
        panic("SWAP_IN : specified entry was no swapped out");
    }

    as = proc_getas();
    
    iov.iov_ubase = (userptr_t)(vaddr & PAGE_FRAME);
    iov.iov_len = PAGE_SIZE;
    u.uio_iov = &iov;
    u.uio_resid = PAGE_SIZE;
    u.uio_iovcnt = 1;
    u.uio_offset = entry_index*PAGE_SIZE;
    u.uio_segflg = UIO_USERSPACE;
	u.uio_rw = UIO_READ;
	u.uio_space = as;
    result = VOP_READ(v, &u);
    if(result){
        vfs_close(v);
        panic("ERROR while writting in SWAPFILE");
    }
    if(u.uio_resid != 0){
        vfs_close(v);
        kprintf("WARNING - SWAPFILE: short write\n");
        panic("SWAPFILE write failed\n");
    }
    vfs_close(v);
    free_swapfile_entry(entry_index);
    
    
}
int find_free_swapfile_entry(vaddr_t vaddr){
    int entry_index = -1;
    if(vaddr == 0){
        panic("Incorrect virtual address");
    }
    for(int i = 0 ; i<N_PAGES_SWAPFILE ; i++){
        if(swapfile_cm.entry_state[i] == SF_FREE_ENTRY){
            entry_index = i;
            swapfile_cm.entry_state[i] = SF_OCCUPIED_ENTRY;
            swapfile_cm.entry_vaddr[i] = vaddr & PAGE_FRAME;
            break;
        }
    }
    return entry_index;
}
int find_swapfile_index(vaddr_t vaddr){
    
    int entry_index = -1;
    for(int i = 0 ; i<N_PAGES_SWAPFILE ; i++){
        if((swapfile_cm.entry_vaddr[i] == (vaddr & PAGE_FRAME)) & (swapfile_cm.entry_state[i] = SF_OCCUPIED_ENTRY)){
            entry_index = i;
            break;
        }
    }
    return entry_index;
}
int free_swapfile_entry(int entry_index){
    if((entry_index>=0) & (entry_index<N_PAGES_SWAPFILE)){
        swapfile_cm.entry_state[entry_index] = SF_FREE_ENTRY;
        return 0;
    }else{
        
        kprintf("WARNING: free_swapfile_entry invalid entry index");
        return 1;
    }
}
void print_swapfile_coremap_status(){
    kprintf("SF_FREE_ENTRY = %d, SF_OCCUPIED_ENTRY = %d\n",(int)SF_FREE_ENTRY,(int)SF_OCCUPIED_ENTRY);
    for(int i = 0 ; i<120 ; i++){
        kprintf("swapfile_cm.entry_vaddr[%d] = %u, entry_state[%d] = %d\n",i,swapfile_cm.entry_vaddr[i],i,(int)swapfile_cm.entry_state[i]);
    }
}

void reset_swapfile_coremap(){
    for(int i = 0 ; i<N_PAGES_SWAPFILE ; i++){
        swapfile_cm.entry_state[i] = SF_FREE_ENTRY;
        swapfile_cm.entry_vaddr[i] = 0;
    }
}
