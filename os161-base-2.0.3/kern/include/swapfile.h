#ifndef _SWAPFILE_H
#define _SWAPFILE_H

#define SWAPFILE_SIZE 9*1024*1024  /*==9Mb*/
#define N_PAGES_SWAPFILE (SWAPFILE_SIZE/PAGE_SIZE)
#define SWAPFILE_NAME "SWAPFILE"
#define SF_FREE_ENTRY 0
#define SF_OCCUPIED_ENTRY 1

struct swapfile_coremap{
    char * entry_state;
    vaddr_t * entry_vaddr;
};

/**
 *  @brief Creates the swapfile of the system of size SWAPFILE_SIZE and initialize its coremap
 *  
 *  @return void, panic on error
 * 
*/
void swapfile_init(void);

/**
 * @brief Save a page from memory at address "vaddr" into the swapfile
 * 
 * @param 'vaddr': virtual address of the page to move into the swapfile
 * 
 * @return 0 on sucess, panic on error
*/
int swap_out(vaddr_t vaddr);

/**
 * @brief Read the page from swapfile at address 'swapfile_offset' and write it into memory at 'vaddr' virtual address
 * 
 * @param 'swapfile_offset': offset inside the swapfile where to read page
 * @param 'vaddr': virtual address where to write page in memory
 * 
 * @return panic on error.
*/
void swap_in(uint32_t swapfile_offset,vaddr_t vaddr);

/**
 * @brief gets a free entry in the swapfile
 * 
 * @param 'vaddr': virtual address of the page that will be saved in the entry
 * 
 * @return entry index or -1 in error
*/
int find_swapfile_entry(vaddr_t vaddr);




#endif 