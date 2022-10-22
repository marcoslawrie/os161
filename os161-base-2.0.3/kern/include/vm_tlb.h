#ifndef _VM_TLB_H_
#define _VM_TLB_H_

#include <types.h>

int vm_fault(int faulttype, vaddr_t faultaddress);

#endif