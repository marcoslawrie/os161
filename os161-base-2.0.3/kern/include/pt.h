#ifndef _PT_H_
#define _PT_H_

#include "addrspace.h"

paddr_t getpaddr(vaddr_t faultaddres, struct addrspace *as);


#endif
