#ifndef _COREMAP_H_
#define _COREMAP_H_
#endif


#define U_PAGE (unsigned char)0
#define K_PAGE (unsigned char)2
#define FREE_PAGE (unsigned char)1


int get_nRamFrames(void);
int get_total_ram_size(void);
int get_available_ram_size(void);
unsigned char * get_freeRamFrames(void);
unsigned long * get_allocSize(void);
paddr_t getfreeppages(unsigned long npages,unsigned char type_of_page, int pt);
paddr_t getppages(unsigned long npages, unsigned char type_of_page, int pt, int *swap_needed);
int freeppages(paddr_t addr, unsigned long npages);
paddr_t get_swapvictim(void);

/**
 * @brief Debugging function, prints all the fields related to the state of the coremap
*/
void print_coremap_status(void);