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
 * @brief Read the page which virtual address is vaddr from swapfile and write it into memory at 'vaddr' virtual address
 * 
 * @param 'vaddr': virtual address of the page to be written into memory
 * 
 * @return panic on error.
*/
void swap_in(vaddr_t vaddr);

/**
 * @brief gets a free entry in the swapfile
 * 
 * @param 'vaddr': virtual address of the page that will be saved in the entry
 * 
 * @return entry index or -1 in error
*/
int find_free_swapfile_entry(vaddr_t vaddr);

/**
 * @brief gets the swapfile entry related to the page which virtual address is vaddr
 * 
 * @param 'vaddr': virtual address of the page which entry in the swapfile is required
 * 
 * @return entry index or -1 in error
*/
int find_swapfile_index(vaddr_t vaddr);

/**
 * @brief frees the specified swapfile entry
 * 
 * @param 'entry_index': entry that is required to free
 * 
 * @return entry index or -1 in error
*/
int free_swapfile_entry(int entry_index);

/**
 * @brief prints the coremap status of the swapfile
 *
 * 
 * @return void
*/
void print_swapfile_coremap_status(void);

/**
 * @brief resets the swapfile coremap structure
 * 
 * 
 * @return void
*/
void reset_swapfile_coremap(void);



#endif 