#include <addrspace.h>
#include <types.h>
#include <vm.h>
#include <kern/errno.h>
#include "pt.h"


paddr_t getpaddr(vaddr_t faultaddress, struct addrspace *as) {
    
    vaddr_t code_vbase, code_vtop, data_vbase, data_vtop, stackbase, stacktop;
    
    paddr_t paddr;


    
    code_vbase = as->code_vbase;
	code_vtop = code_vbase + as->npages_code * PAGE_SIZE;
	data_vbase = as->data_vbase;
	data_vtop = data_vbase + as->npages_data * PAGE_SIZE;
	stackbase = USERSTACK - VM_STACKPAGES * PAGE_SIZE;
	stacktop = USERSTACK;
    int index;
	if (faultaddress >= code_vbase && faultaddress < code_vtop) {
		index = (faultaddress-code_vbase)/PAGE_SIZE;
        paddr = as->code_pt[index];
        //paddr = (faultaddress - code_vbase) + *as->code_pt;
	}
	else if (faultaddress >= data_vbase && faultaddress < data_vtop) {
        index = (faultaddress-data_vbase)/PAGE_SIZE;
        paddr = as->data_pt[index];
		//paddr = (faultaddress - data_vbase) + *as->data_pt;
	}
	else if (faultaddress >= stackbase && faultaddress < stacktop) {
        index = (faultaddress - stackbase)/PAGE_SIZE;
        paddr = as->stack_pt[index];
		//paddr = (faultaddress - stackbase) + *as->stack_pt;
	}
	else {
		paddr = 0;
	}
    return paddr;
}