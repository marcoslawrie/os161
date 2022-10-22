#ifndef _COREMAP_H_
#define _COREMAP_H_
#endif

int get_nRamFrames(void);
int get_total_ram_size(void);
int get_available_ram_size(void);
unsigned char * get_freeRamFrames(void);
unsigned long * get_allocSize(void);
paddr_t getfreeppages(unsigned long npages);
paddr_t getppages(unsigned long npages);
int freeppages(paddr_t addr, unsigned long npages);