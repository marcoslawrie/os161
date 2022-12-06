#ifndef _VM_TLB_H_
#define _VM_TLB_H_

#include <types.h>
/**
 * @brief
 * 
 * @param
 * 
 * @return
*/
int vm_fault(int faulttype, vaddr_t faultaddress);

/**
 * @brief
 * 
 * @param
 * 
 * @return
*/
int get_free_TLB_entry(void);

/**
 * @brief
 * 
 * @param
 * 
 * @return
*/
int tlb_get_rr_victim(void);

/**
 * @brief
 * 
 * @param
 * 
 * @return
*/
int update_TLB(uint32_t vaddr,uint32_t paddr);

/**
 * @brief
 * 
 * @param
 * 
 * @return
*/
int load_page(vaddr_t faultaddress);

/**
 * @brief
 * 
 * @param
 * 
 * @return
*/
int clear_dirty_bit_TLB(uint32_t vaddr,uint32_t paddr);

/**
 * @brief
 * 
 * @param
 * 
 * @return
*/
int clear_valid_bit_TLB(uint32_t vaddr);
#endif