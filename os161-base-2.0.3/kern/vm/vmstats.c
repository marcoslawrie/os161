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
            i += allocSize[i];
        }
    }
    kprintf("Total number of frames: %d\n",nRamFrames);
    kprintf("Number of frames occupied: %d\n",nRamFrames_occupied);
}