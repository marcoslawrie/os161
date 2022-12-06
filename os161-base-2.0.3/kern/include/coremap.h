#ifndef _COREMAP_H_
#define _COREMAP_H_
#endif


#define U_PAGE (unsigned char)0
#define K_PAGE (unsigned char)2
#define FREE_PAGE (unsigned char)1

/**
 * @brief
 * 
 * @param
 * 
 * @return
*/
int get_nRamFrames(void);

/**
 * @brief
 * 
 * @param
 * 
 * @return
*/
int get_total_ram_size(void);

/**
 * @brief
 * 
 * @param
 * 
 * @return
*/
int get_available_ram_size(void);

/**
 * @brief
 * 
 * @param
 * 
 * @return
*/
unsigned char * get_freeRamFrames(void);

/**
 * @brief
 * 
 * @param
 * 
 * @return
*/
unsigned long * get_allocSize(void);

/**
 * @brief
 * 
 * @param
 * 
 * @return
*/
paddr_t getfreeppages(unsigned long npages,unsigned char type_of_page, int pt);

/**
 * @brief
 * 
 * @param
 * 
 * @return
*/
paddr_t getppages(unsigned long npages, unsigned char type_of_page, int pt, int *swap_needed);

/**
 * @brief
 * 
 * @param
 * 
 * @return
*/
int freeppages(paddr_t addr, unsigned long npages);

/**
 * @brief
 * 
 * @param
 * 
 * @return
*/
paddr_t get_swapvictim(void);

/**
 * @brief Debugging function, prints all the fields related to the state of the coremap
*/
void print_coremap_status(void);