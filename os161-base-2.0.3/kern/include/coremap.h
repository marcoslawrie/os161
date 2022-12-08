#ifndef _COREMAP_H_
#define _COREMAP_H_
#endif


#define U_PAGE (unsigned char)0
#define K_PAGE (unsigned char)2
#define FREE_PAGE (unsigned char)1

/**
 * @brief gets the number of frames of the ram memory
 * 
 * 
 * @return nRamFrames: number of frames of the memory
*/
int get_nRamFrames(void);

/**
 * @brief gets the total size of the ram memory
 * 
 * 
 * @return total_ram_size: size of the ram memory
*/
int get_total_ram_size(void);

/**
 * @brief gets the available space in the ram memory after loading the kernel
 * 
*/
int get_available_ram_size(void);

/**
 * @brief gets the array freeRamFrames which contains the informatiion about the kind of page, if occupied, of each RAM page
 * 
 * 
 * @return pointer to the array freeRamFrames 
*/
unsigned char * get_freeRamFrames(void);

/**
 * @brief gets the array allocSize which contains the number of pages allocated to a continuous subset of pages of the ram memory
 * 
 * 
 * @return pointer to the array allocSize
*/
unsigned long * get_allocSize(void);

/**
 * @brief Tries to find npages free in the RAM, it also updates the structures needed to track the order in which pages are allocated
 * 
 * @param npages number of pages to allocate
 * @param type_of_page can be kernel page (K_PAGE) or user page(U_PAGE)
 * @param pt page table of the pages that will be allocated
 * 
 * @return first physical address of the free pages that was required, 0 if the requiered number of free pages is not available
*/
paddr_t getfreeppages(unsigned long npages,unsigned char type_of_page, int pt);

/**
 * @brief Tries to first find npages free in the RAM memory calling getfreeppages, if not possible, tries to steal memory from ram. If both possibilities failed, it changes the value
 * of the variable swap_needed to tell that the caller that swapping is required
 * 
 * @param npages number of pages to allocate
 * @param type_of_page can be kernel page (K_PAGE) or user page(U_PAGE)
 * @param pt page table of the pages that will be allocated
 * @param swap_needed pointer to the flag that tells when swapping is needed
 * 
 * @return first physical address of the free pages that was required, 0 if the requiered number of free pages is not available
*/
paddr_t getppages(unsigned long npages, unsigned char type_of_page, int pt, int *swap_needed);

/**
 * @brief frees a number of pages starting from the given physical address
 * 
 * @param addr starting physical address
 * @param npages Number of pages to free
 * 
 * @return 0 on success, 1 on error
*/
int freeppages(paddr_t addr, unsigned long npages);

/**
 * @brief gets the next page to be swapped out and updates the structures that keep track of the order in which pages were allocated
 *  
 * @return physical address of the page to be swapped out
*/
paddr_t get_swapvictim(void);

/**
 * @brief Debugging function, prints all the fields related to the state of the coremap
 * 
 * @return void
*/
void print_coremap_status(void);

/**
 * @brief resets the variables next_victim and last_allocated to their initial state
 * 
 * @return void
*/
void reset_coremap_vars(void);