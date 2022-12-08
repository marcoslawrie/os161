#ifndef _VMSTATS_H_
#define _VMSTATS_H_

/**
 * @brief prints the status of the memory
 * 
 * 
 * @return void
*/
void print_mem_stats(void);

/**
 * @brief increments the counter of the TLB faults
 * 
 * 
 * @return void
*/
void increment_TLB_faults(void);

/**
 * @brief increments the counter of the TLB faults that didn't require to replace an entry in the TLB
 * 
 * 
 * @return void
*/
void increment_TLB_faults_with_free(void);

/**
 * @brief increments the counter of the TLB faults that required to replace an entry in the TLB
 * 
 * 
 * @return void
*/
void increment_TLB_faults_with_repalce(void);

/**
 * @brief increments the counter of the times the entire TLB was invalidated (reseted)
 * 
 * 
 * @return void
*/
void increment_TLB_invalidations(void);

/**
 * @brief increments the counter of the number of TLB misses for pages that were already in memory
 * 
 * 
 * @return void
*/
void increment_TLB_reloads(void);

/**
 * @brief increments the counter of the number of TLB misses that required a new page to be zero-filled
 * 
 * 
 * @return void
*/
void increment_page_fault_zeroed(void);

/**
 * @brief increments the counter of the number of TLB misses that required a page to be loaded from disk
 * 
 * 
 * @return void
*/
void increment_page_fault_disk(void);

/**
 * @brief increments the counter of the number of TLB misses that required a page to be loaded from the ELF file
 * 
 * 
 * @return void
*/
void increment_page_fault_ELF(void);

/**
 * @brief increments the counter of the number of page faults that require getting a page from the swap file
 * 
 * 
 * @return void
*/
void increment_page_fault_swapfile_get(void);

/**
 * @brief increments the counter of the number of page fault that required writing a page to the swap file
 * 
 * 
 * @return void
*/
void increment_page_fault_swapfile_write(void);

/**
 * @brief Prints all the virtual memory stats related to page faults and TLB misses
 * 
 * 
 * @return void
*/
void print_vm_stats(void);

/**
 * @brief Checks the following three conditions:
 *      - TLB_faults == TLB_faults_with_free + TLB_faults_with_replace 
 *      - TLB_faults == TLB_reloads + page_fault_disk + page_fault_zeroed
 *      - page_fault_disk == page_fault_ELF + page_fault_swapfile_get
 * @return void
*/
void check_vm_stats(void);
#endif
