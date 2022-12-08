#ifndef _VM_TLB_H_
#define _VM_TLB_H_

#include <types.h>
/**
 * @brief TLB miss handler. Main function in the virtual memory management  
 * which takes the different decisions in all the possible scenarios of virtual
 * memory faults
 * 
 * @param faulttype kind of fault
 * @param faultaddress virtual address
 * 
 * @return 0 in success, panic on error
*/
int vm_fault(int faulttype, vaddr_t faultaddress);

/**
 * @brief Looks for a free TLB entry
 * 
 * 
 * @return free TLB entry index or -1 if no entry is free
*/
int get_free_TLB_entry(void);

/**
 * @brief looks for the next victim to be deleted from the TLB
 * 
 * 
 * @return index of the victim
*/
int tlb_get_rr_victim(void);

/**
 * @brief Updates the TLB with the pair virtual address - physical address (including DIRTY and VALID flags)
 * It first tries to find a free entry, otherwise it replaces the next victim
 * @param vaddr virtual address
 * @param paddr physical address for the translation
 * 
 * @return 0 on sucess, EFAULT on failure
*/
int update_TLB(uint32_t vaddr,uint32_t paddr);

/**
 * @brief loads page, which virtual address is "faultaddress", from ELF file
 * 
 * @param faultaddress virtual address associated to the page
 * 
 * @return 0 on success, panic on error 
*/
int load_page(vaddr_t faultaddress);

/**
 * @brief Clears dirty bit of the TLB for the entry which virtual address is "vaddr"
 * 
 * @param vaddr virtual address associated to the entry of the TLB
 * @param paddr physical address associated to the entry of the TLB
 * 
 * @return 0 on success, EFAULT on error
*/
int clear_dirty_bit_TLB(uint32_t vaddr,uint32_t paddr);

/**
 * @brief Clears valid bit of the TLB for the entry which virtual address is "vaddr"
 * 
 * @param vaddr vitual address
 * 
 * @return 0 on success, EFAULT on error
*/
int clear_valid_bit_TLB(uint32_t vaddr);
#endif