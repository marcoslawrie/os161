#ifndef _PT_H_
#define _PT_H_

#include "addrspace.h"

#define VALID_BIT	0x00000002
#define SWAPPED_BIT 0x00000004


#define IS_CODE_PT 1
#define IS_DATA_PT 2
#define IS_STACK_PT 3

/**
 * @brief gets the physical address for a given virtual address and address space
 * 
 * @param faultaddress virtual address
 * @param as address space in which search the physical address related to faultaddress
 * 
 * @return physical addres associated to faultaddress
*/
paddr_t getpaddr(vaddr_t faultaddress, struct addrspace *as);

/**
 * @brief identifies the page table of the address space to which the virtual address belons to
 * 
 * @param as address space
 * @param vaddr virtual address
 * 
 * @return code of the page table (CODE_PT = 1, DATA_PT = 2 and STACK_PT = 3)
*/
int identify_PT(struct addrspace *as, vaddr_t vaddr);

#endif
