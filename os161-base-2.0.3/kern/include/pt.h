#ifndef _PT_H_
#define _PT_H_

#include "addrspace.h"

#define VALID_BIT	0x00000002
#define SWAPPED_BIT 0x00000004


#define IS_CODE_PT 1
#define IS_DATA_PT 2
#define IS_STACK_PT 3


paddr_t getpaddr(vaddr_t faultaddres, struct addrspace *as);
int identify_PT(struct addrspace *as, vaddr_t vaddr);

#endif
