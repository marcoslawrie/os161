#ifndef _VM_TLB_H_
#define _VM_TLB_H_

#include <types.h>

int vm_fault(int faulttype, vaddr_t faultaddress);
int get_free_TLB_entry(void);
int tlb_get_rr_victim(void);
int update_TLB(uint32_t vaddr,uint32_t paddr);
int load_page(vaddr_t faultaddress);
int clear_dirty_bit_TLB(uint32_t vaddr,uint32_t paddr);
int clear_valid_bit_TLB(uint32_t vaddr);
#endif