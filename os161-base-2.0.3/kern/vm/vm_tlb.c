
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
	int i;
	uint32_t ehi, elo;
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

	for (i=0; i<NUM_TLB; i++) {
		tlb_read(&ehi, &elo, i);
		if (elo & TLBLO_VALID) {
			continue;
		}
		increment_TLB_faults();
		increment_TLB_faults_with_free();

		ehi = faultaddress;
		elo = paddr | TLBLO_DIRTY | TLBLO_VALID;
		DEBUG(DB_VM, "dumbvm: 0x%x -> 0x%x\n", faultaddress, paddr);
		tlb_write(ehi, elo, i);
		splx(spl);
		return 0;
	}

	kprintf("dumbvm: Ran out of TLB entries - cannot handle page fault\n");
	splx(spl);
	return EFAULT;
}