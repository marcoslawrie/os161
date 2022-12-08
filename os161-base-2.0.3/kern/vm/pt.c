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
	}
	else if (faultaddress >= data_vbase && faultaddress < data_vtop) {
        index = (faultaddress-data_vbase)/PAGE_SIZE;
        paddr = as->data_pt[index];
	}
	else if (faultaddress >= stackbase && faultaddress < stacktop) {
        index = (faultaddress - stackbase)/PAGE_SIZE;
        paddr = as->stack_pt[index];
	}
	else {
		paddr = 0;
	}
    return paddr;
}

int identify_PT(struct addrspace *as, vaddr_t vaddr) {
	
	vaddr_t code_vbase, code_vtop, data_vbase, data_vtop, stackbase, stacktop;
    
    code_vbase = as->code_vbase;
	code_vtop = code_vbase + as->npages_code * PAGE_SIZE;
	data_vbase = as->data_vbase;
	data_vtop = data_vbase + as->npages_data * PAGE_SIZE;
	stackbase = USERSTACK - VM_STACKPAGES * PAGE_SIZE;
	stacktop = USERSTACK;
    
	if (vaddr >= code_vbase && vaddr < code_vtop) {
		return IS_CODE_PT;
	}

	else if (vaddr >= data_vbase && vaddr < data_vtop) {
		return IS_DATA_PT;
	}
	else if (vaddr >= stackbase && vaddr < stacktop) {
		return IS_STACK_PT;
	}
	else {
		return 0;
	}
	
}
