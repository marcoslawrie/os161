#ifndef _VM_TLB_H_
#define _VM_TLB_H_

#include <types.h>

int vm_fault(int faulttype, vaddr_t faultaddress);
int get_free_TLB_entry(void);
int tlb_get_rr_victim(void);
void update_TLB(uint32_t vaddr,uint32_t paddr,int tlb_entry_index);
#endif