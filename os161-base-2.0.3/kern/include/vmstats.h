#ifndef _VMSTATS_H_
#define _VMSTATS_H_

/**
 * @brief
 * 
 * @param
 * 
 * @return
*/
void print_mem_stats(void);

/**
 * @brief
 * 
 * @param
 * 
 * @return
*/
void increment_TLB_faults(void);

/**
 * @brief
 * 
 * @param
 * 
 * @return
*/
void increment_TLB_faults_with_free(void);

/**
 * @brief
 * 
 * @param
 * 
 * @return
*/
void increment_TLB_faults_with_repalce(void);

/**
 * @brief
 * 
 * @param
 * 
 * @return
*/
void increment_TLB_invalidations(void);

/**
 * @brief
 * 
 * @param
 * 
 * @return
*/
void increment_TLB_reloads(void);

/**
 * @brief
 * 
 * @param
 * 
 * @return
*/
void increment_page_fault_zeroed(void);

/**
 * @brief
 * 
 * @param
 * 
 * @return
*/
void increment_page_fault_disk(void);

/**
 * @brief
 * 
 * @param
 * 
 * @return
*/
void increment_page_fault_ELF(void);

/**
 * @brief
 * 
 * @param
 * 
 * @return
*/
void increment_page_fault_swapfile_get(void);

/**
 * @brief
 * 
 * @param
 * 
 * @return
*/
void increment_page_fault_swapfile_write(void);

/**
 * @brief
 * 
 * @param
 * 
 * @return
*/
void print_vm_stats(void);

/**
 * @brief
 * 
 * @param
 * 
 * @return
*/
void check_vm_stats(void);
#endif
