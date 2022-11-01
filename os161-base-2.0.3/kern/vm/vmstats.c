#include <types.h>
#include <kern/errno.h>
#include <lib.h>
#include <spl.h>
#include <cpu.h>
#include <spinlock.h>
#include <proc.h>
#include <current.h>
#include <mips/tlb.h>
#include <addrspace.h>
#include <vmstats.h>
#include <coremap.h>

static uint32_t TLB_faults = 0;
static uint32_t TLB_faults_with_free = 0;
static uint32_t TLB_faults_with_replace = 0;
static uint32_t TLB_invalidations = 0;
static uint32_t TLB_reloads = 0;
static uint32_t page_fault_zeroed = 0;
static uint32_t page_fault_disk = 0;
static uint32_t page_fault_ELF = 0;
static uint32_t page_fault_swapfile_get = 0;
static uint32_t page_fault_swapfile_write = 0;

void increment_TLB_faults(){
    TLB_faults++;
}
void increment_TLB_faults_with_free(){
    TLB_faults_with_free++;
}
void increment_TLB_faults_with_repalce(){
    TLB_faults_with_replace++;
}
void increment_TLB_invalidations(){
    TLB_invalidations++;
} 
void increment_TLB_reloads(){
    TLB_reloads++;
}
void increment_page_fault_zeroed(){
    page_fault_zeroed++;
}
void increment_page_fault_disk(){
    page_fault_disk++;
}
void increment_page_fault_ELF(){
    page_fault_ELF++;
}
void increment_page_fault_swapfile_get(){
    page_fault_swapfile_get++;
}
void increment_page_fault_swapfile_write(){
    page_fault_swapfile_write++;
}
void print_vm_status(){
    kprintf("################### VM STATS ###################\n");
    kprintf("TLB faults: %d\n",TLB_faults);
    kprintf("TLB faults with free: %d\n",TLB_faults_with_free);
    kprintf("TLB faults with replace: %d\n",TLB_faults_with_replace);
    kprintf("TLB invalidations: %d\n",TLB_invalidations);
    kprintf("TLB reloads: %d\n",TLB_reloads);
    kprintf("Page faults (zeroed): %d\n",page_fault_zeroed);
    kprintf("Page faults (Disk): %d\n",page_fault_disk);
    kprintf("Page faults get page from ELF: %d\n",page_fault_ELF);
    kprintf("Page faults get page from Swapfile: %d\n",page_fault_swapfile_get);
    kprintf("Page faults write page to Swapfile: %d\n",page_fault_swapfile_write);
    kprintf("################################################\n"); 


}



void print_mem_stats(){
    kprintf("Total ram size: %d\n",get_total_ram_size());
    kprintf("Total available ram: %d\n",get_available_ram_size());
    kprintf("Page size: %d\n",PAGE_SIZE);
    int nRamFrames = get_nRamFrames();
    int nRamFrames_occupied = 0;
    unsigned long * allocSize = (unsigned long *) get_allocSize();
    unsigned char *freeRamFrames = get_freeRamFrames();
    for(int i = 0 ; i < nRamFrames ; i ++){
        if(!freeRamFrames[i]) {
            nRamFrames_occupied += allocSize[i];
            i += allocSize[i]-1;
        }
    }
    kprintf("Total number of frames: %d\n",nRamFrames);
    kprintf("Number of frames occupied: %d\n",nRamFrames_occupied);
}