
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
#include "pt.h"
#include "vm_tlb.h"
#include <vmstats.h>



int vm_fault(int faulttype, vaddr_t faultaddress){
	
	paddr_t paddr;
	int tlb_entry_index;
	//uint32_t ehi, elo;
	struct addrspace *as;
	int spl;

	faultaddress &= PAGE_FRAME;

	DEBUG(DB_VM, "dumbvm: fault: 0x%x\n", faultaddress);

	switch (faulttype) {
	    case VM_FAULT_READONLY:
		/* We always create pages read-write, so we can't get this */
		panic("dumbvm: got VM_FAULT_READONLY\n");
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

    paddr = getpaddr(faultaddress,as);

	if(paddr == 0) {
		return EFAULT;
	}
	

	/* make sure it's page-aligned */
	KASSERT((paddr & PAGE_FRAME) == paddr);

	/* Disable interrupts on this CPU while frobbing the TLB. */
	spl = splhigh();
	increment_TLB_faults();
	tlb_entry_index = get_free_TLB_entry();
	if(tlb_entry_index >= 0) {
		increment_TLB_faults_with_free();
		update_TLB(faultaddress,paddr,tlb_entry_index);
		splx(spl);
		return 0;
	}
	/*for (i=0; i<NUM_TLB; i++) {
		tlb_read(&ehi, &elo, i);
		if (elo & TLBLO_VALID) {
			continue;
		}
		
		

		ehi = faultaddress;
		elo = paddr | TLBLO_DIRTY | TLBLO_VALID;
		DEBUG(DB_VM, "dumbvm: 0x%x -> 0x%x\n", faultaddress, paddr);
		tlb_write(ehi, elo, i);
		splx(spl);
		return 0;
	}*/

	//If the program arrives here, it means we need to replace a page in the TLB
	
	tlb_entry_index = tlb_get_rr_victim();
	if(tlb_entry_index >= 0) {
		increment_TLB_faults_with_repalce();
		update_TLB(faultaddress,paddr,tlb_entry_index);
		splx(spl);
		return 0;
	}
	kprintf("dumbvm: Ran out of TLB entries - cannot handle page fault\n");
	splx(spl);
	return EFAULT;
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
void update_TLB(uint32_t vaddr,uint32_t paddr,int tlb_entry_index) {
	
	paddr = paddr | TLBLO_DIRTY | TLBLO_VALID; //Check if the masks are correct later. Some pages might not be writable 
	tlb_write(vaddr, paddr, tlb_entry_index);
}