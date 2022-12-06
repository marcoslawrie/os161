
#include <types.h>
#include <kern/errno.h>
#include <lib.h>
#include <spl.h>
#include <cpu.h>
#include <spinlock.h>
#include <proc.h>
#include <current.h>
#include <mips/tlb.h>
#include <addrspace.h>
#include <vm.h>
#include <coremap.h>
#include <syscall.h>
#include "pt.h"
#include "vm_tlb.h"
#include <vmstats.h>
#include "swapfile.h"


int vm_fault(int faulttype, vaddr_t faultaddress){
	
	paddr_t paddr;
	struct addrspace *as;
	int result;
	
	
	DEBUG(DB_VM, "dumbvm: fault: 0x%x\n", faultaddress&PAGE_FRAME);

	switch (faulttype) {
	    case VM_FAULT_READONLY:
		/* We always create pages read-write, so we can't get this */
		panic("VM_FAULT_READONLY, system will crash\n");
	    case VM_FAULT_READ:
	    case VM_FAULT_WRITE:
		break;
	    default:
		return EINVAL;
	}

	if (curproc == NULL) {
		/*
		 * No process. This is probably a kernel fault early
		 * in boot. Return EFAULT so as to panic instead of
		 * getting into an infinite faulting loop.
		 */
		return EFAULT;
	}

	as = proc_getas();
	if (as == NULL) {
		/*
		 * No address space set up. This is probably also a
		 * kernel fault early in boot.
		 */
		return EFAULT;
	}

	/* Assert that the address space has been set up properly. */
	KASSERT(as->code_vbase != 0);
	//KASSERT(*as->code_pt != 0);
	KASSERT(as->npages_code != 0);
	KASSERT(as->data_vbase != 0);
	//KASSERT(*as->data_pt != 0);
	KASSERT(as->npages_data != 0);
	//KASSERT(*as->stack_pt != 0);
	KASSERT((as->code_vbase & PAGE_FRAME) == as->code_vbase);
	//KASSERT((*as->code_pt & PAGE_FRAME) == *as->code_pt);
	KASSERT((as->data_vbase & PAGE_FRAME) == as->data_vbase);
	//KASSERT((*as->data_pt & PAGE_FRAME) == *as->data_pt);
	//KASSERT((*as->stack_pt & PAGE_FRAME) == *as->stack_pt);
	
	//Find to which page table the virtual address belongs to
	int pt = identify_PT(as,faultaddress);
	if(!pt) {
		kprintf("ERROR: [VM_FAULT] fail when calling identify_pt, faultaddress = %u,as->code_vbase = %u, as->data_vbase = %u\n",faultaddress,as->code_vbase,as->data_vbase);
		sys__exit(0);
	}
	increment_TLB_faults();
	vaddr_t stackbase;
	stackbase = USERSTACK - VM_STACKPAGES * PAGE_SIZE;
	uint32_t page_fault = 0;
	uint32_t page_swapped = 0;
	
	uint32_t index;
	index = 0;
	
	switch (pt)
	{
	case IS_CODE_PT:
		index = (faultaddress-as->code_vbase)/PAGE_SIZE;
		page_fault = !(as->code_pt[index] & VALID_BIT);/* code */
		
		break;
	case IS_DATA_PT:
		index = (faultaddress-as->data_vbase)/PAGE_SIZE;
		page_fault = !(as->data_pt[index] & VALID_BIT);
		page_swapped = (as->data_pt[index] & SWAPPED_BIT);
		break;
	case IS_STACK_PT:
		index = (faultaddress - stackbase)/PAGE_SIZE;
		page_fault = !(as->stack_pt[index] & VALID_BIT);
		page_swapped = (as->stack_pt[index] & SWAPPED_BIT);
		break; 
	default:
	
		break;
	}
	 /*If page has been swapped we need to call as_prepare_load to obtain a physical 
	 page to locate the swapped page, it will probably swap out another page */
	if(page_swapped){
		//kprintf("SWAP IN DETECTED\n");
		increment_page_fault_disk();
		increment_page_fault_swapfile_get();
		result = as_prepare_load(as,faultaddress,pt);
		if(result != 0 ){
			kprintf("PAGE SWAPPED: Problem with as_prepare_load\n");
		}
	}else if(page_fault){
		
		result = as_prepare_load(as,faultaddress,pt);
		if(result != 0 ){
			kprintf("PAGE FAULT: Problem with as_prepare_load\n");
		}
		//kprintf("PAGE FAULT! program will end\n");
		//
	} else{ /*No page fault, check if swap in is necessary*/
		//kprintf("vm fault but not PAGE FAULT\n");
		increment_TLB_reloads();
		paddr = getpaddr(faultaddress,as) & PAGE_FRAME;
		if(paddr == 0){
			kprintf("PT=%d\n",pt);
			kprintf("[VM_FAULT] Warning: getpaddr failed\n");
			sys__exit(0); 
		}
		update_TLB(faultaddress,paddr);
		return 0;
	}
    //paddr = getpaddr(faultaddress,as);
	//Once we allocate the page in memory we read obtain the physical address to update the TLB
	switch (pt)
	{
	case IS_CODE_PT:
		paddr = as->code_pt[index] & PAGE_FRAME;
		
		break;
	case IS_DATA_PT:
		paddr = as->data_pt[index] & PAGE_FRAME;
		break;
	case IS_STACK_PT:
		paddr = as->stack_pt[index] & PAGE_FRAME;
		break; 
	default:
	    paddr = 0;
		break;
	}

	if(paddr == 0) {
		return EFAULT;
	}
	result = update_TLB(faultaddress,paddr);
	if(result != 0){
		kprintf("Warning: TLB not updated");
	}
	/*Zeroing the page in memory to write the new page
	This new page can come from ELF file or from SWAPFILE*/

	
	if(page_swapped){
		/*SWAP IN needed*/
		int spl;
		spl = splhigh();
		swap_in(faultaddress);
		splx(spl);

	}else if(page_fault){	

		if(pt != IS_STACK_PT){
			int spl;
			increment_page_fault_disk();
			increment_page_fault_ELF();
			//Desactivate interrupts while loading the page
			spl = splhigh();
			load_page(faultaddress);
			splx(spl);
			
			if(pt == IS_CODE_PT){
				/* Unset the DIRTY bit of TLB for code pages */	
				result = clear_dirty_bit_TLB(faultaddress,paddr);
				if(result != 0){
					return EFAULT;
				}
			}
		} else {
			increment_page_fault_zeroed();
			bzero((void *)(faultaddress&PAGE_FRAME),PAGE_SIZE);
		}
	}
	


	return 0;

}
int get_free_TLB_entry(){
	int i;
	uint32_t paddr,vaddr;
	for (i=0; i<NUM_TLB; i++) {
		tlb_read(&vaddr, &paddr, i);
		if (paddr & TLBLO_VALID) {
			continue;
		}

		return i;
	}
	return -1;
	
}

int tlb_get_rr_victim() {
	int victim;
	static unsigned int next_victim = 0;
	victim = next_victim;
	next_victim = (next_victim + 1) % NUM_TLB;
	return victim;
}

int update_TLB(uint32_t vaddr,uint32_t paddr) {
	
	int spl;
	/* make sure it's page-aligned */
	vaddr &= PAGE_FRAME;
	KASSERT((paddr & PAGE_FRAME) == paddr);
	int tlb_entry_index;
	/* Disable interrupts on this CPU while frobbing the TLB. */
	spl = splhigh();
	//increment_TLB_faults();
	tlb_entry_index = get_free_TLB_entry();
	//Check if there is a free entry in the TLB
	if(tlb_entry_index >= 0) {
		increment_TLB_faults_with_free();
		paddr = (paddr & PAGE_FRAME) | TLBLO_DIRTY | TLBLO_VALID; //Check if the masks are correct later. Some pages might not be writable 
		tlb_write(vaddr, paddr, tlb_entry_index);
		splx(spl);
		return 0;
	}

	//If the program arrives here, it means we need to replace a page in the TLB
	tlb_entry_index = tlb_get_rr_victim();
	if(tlb_entry_index >= 0) {
		increment_TLB_faults_with_repalce();
		paddr = paddr | TLBLO_DIRTY | TLBLO_VALID; //Check if the masks are correct later. Some pages might not be writable 
		tlb_write(vaddr, paddr, tlb_entry_index);
		splx(spl);
		return 0;
	}
	
	/* For debug purpose */
	return 0;
	kprintf("Problem while updating the TLB\n");
	splx(spl);
	return EFAULT;




}
int clear_dirty_bit_TLB(uint32_t vaddr,uint32_t paddr) {
	int tlb_index = tlb_probe(vaddr & PAGE_FRAME, 0);
			if (tlb_index >= 0 && tlb_index < NUM_TLB)
			{
				paddr = (paddr & PAGE_FRAME) | TLBLO_VALID;
				tlb_write(vaddr & PAGE_FRAME, paddr, tlb_index);
				return 0;
			}
			else
			{
				kprintf("Warning:[clear_dirty_bit_TLB] failure while searching the entry in the TLB\n");
				return EFAULT;
			}
}
int clear_valid_bit_TLB(uint32_t vaddr) {
	int tlb_index = tlb_probe(vaddr & PAGE_FRAME, 0);
	if (tlb_index >= 0 && tlb_index < NUM_TLB)
			{
				/*Getting old paddr*/
				vaddr_t vaddr_aux;
				paddr_t paddr_aux;
				tlb_read(&vaddr_aux,&paddr_aux, tlb_index);
				paddr_aux = paddr_aux &  !TLBLO_VALID;
				tlb_write(vaddr & PAGE_FRAME, paddr_aux, tlb_index);
				kprintf("valid bit cleared");
				return 0;
			}
			else
			{
				//kprintf("Warning:[clear_valid_bit_TLB] failure while searching the entry in the TLB, TLB index: %d\n",tlb_index);
				return EFAULT;
			}
}