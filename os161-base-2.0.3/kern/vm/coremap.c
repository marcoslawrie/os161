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


#define DUMBVM_STACKPAGES    18
static struct spinlock stealmem_lock = SPINLOCK_INITIALIZER;

static struct spinlock freemem_lock = SPINLOCK_INITIALIZER;



//struct coremap_struct {
    
  static unsigned char *freeRamFrames = NULL;
    static unsigned long *allocSize = NULL;

//};

//static coremap_struct _coremap;
static int nRamFrames = 0;
static int allocTableActive = 0;

static int total_ram_size = 0;
static int first_free_addr = 0;

static int isTableActive () {
  int active;
  spinlock_acquire(&freemem_lock);
  active = allocTableActive;
  spinlock_release(&freemem_lock);
  return active;
}
void
vm_bootstrap(void)
{
    int i;
	total_ram_size = (int)ram_getsize();
	//available_ram_size = total_ram_size - (int)ram_getfirstfree();
	//available_ram_size = 0;
	int nRamFrames_prime = (total_ram_size)/PAGE_SIZE;
    nRamFrames = (total_ram_size)/PAGE_SIZE;
	kprintf("nRamFrames(mine idea) %d, nRameFrames_prime(their idea) %d\n",nRamFrames,nRamFrames_prime);
    /* alloc freeRamFrame and allocSize */  
    //_coremap.freeRamFrames = kmalloc(sizeof(unsigned char)*nRamFrames);
    freeRamFrames = kmalloc(sizeof(unsigned char)*nRamFrames);
    //if (_coremap.freeRamFrames==NULL) return;  
    if (freeRamFrames==NULL) return;  
    //_coremap.allocSize = kmalloc(sizeof(unsigned long)*nRamFrames);
    allocSize = kmalloc(sizeof(unsigned long)*nRamFrames);
    //if (_coremap.allocSize==NULL) {    
    if (allocSize==NULL) {    
    /* reset to disable this vm management */
        //_coremap.freeRamFrames = NULL; return;
        freeRamFrames = NULL; return;
    }
    for (i=0; i<nRamFrames; i++) {    
        freeRamFrames[i] = (unsigned char)1;
        allocSize[i]     = 0;  
    }
	//first_free_frame = 0;
	first_free_addr = (int)ram_getfirstfree();
	kprintf("First free address: %d\n",first_free_addr);
	for (i=0; i<first_free_addr/PAGE_SIZE; i++) {    
        freeRamFrames[i] = (unsigned char)0;
        allocSize[i]     = 1;  
    }
    spinlock_acquire(&freemem_lock);
    allocTableActive = 1;
    spinlock_release(&freemem_lock);
    kprintf("VM initialized!\n");
}
int get_nRamFrames(){
	return nRamFrames;
}
int get_total_ram_size(){
	return total_ram_size;
}
int get_available_ram_size(){
	return (total_ram_size-first_free_addr);
}
unsigned char * get_freeRamFrames(){
	return freeRamFrames;
}
unsigned long * get_allocSize(){
	return ((unsigned long *) allocSize);
}
paddr_t getfreeppages(unsigned long npages) {
  paddr_t addr;	
  long i, first, found, np = (long)npages;

  if (!isTableActive()) return 0; 
  spinlock_acquire(&freemem_lock);
  for (i=0,first=found=-1; i<nRamFrames; i++) {
    if (freeRamFrames[i]) {
      if (i==0 || !freeRamFrames[i-1]) 
        first = i; /* set first free in an interval */   
      if (i-first+1 >= np) {
        found = first;
        break;
      }
    }
  }
	
  if (found>=0) {
    for (i=found; i<found+np; i++) {
      freeRamFrames[i] = (unsigned char)0;
    }
    allocSize[found] = np;
    addr = (paddr_t) found*PAGE_SIZE;
  }
  else {
    addr = 0;
  }

  spinlock_release(&freemem_lock);

  return addr;
}

paddr_t getppages(unsigned long npages){
  paddr_t addr;

  /* try freed pages first */
  addr = getfreeppages(npages);
  if (addr == 0) {
    /* call stealmem */
    spinlock_acquire(&stealmem_lock);
    addr = ram_stealmem(npages);
    spinlock_release(&stealmem_lock);
  }
  if (addr!=0 && isTableActive()) {
    spinlock_acquire(&freemem_lock);
    allocSize[addr/PAGE_SIZE] = npages;
    spinlock_release(&freemem_lock);
  } 

  return addr;
}

/*
 * Check if we're in a context that can sleep. While most of the
 * operations in dumbvm don't in fact sleep, in a real VM system many
 * of them would. In those, assert that sleeping is ok. This helps
 * avoid the situation where syscall-layer code that works ok with
 * dumbvm starts blowing up during the VM assignment.
 */


int freeppages(paddr_t addr, unsigned long npages){
  long i, first, np=(long)npages;	

  if (!isTableActive()) return 0; 
  first = addr/PAGE_SIZE;
  KASSERT(allocSize!=NULL);
  KASSERT(nRamFrames>first);

  spinlock_acquire(&freemem_lock);
  for (i=first; i<first+np; i++) {
    freeRamFrames[i] = (unsigned char)1;
  }
  spinlock_release(&freemem_lock);

  return 1;
}

/* Allocate/free some kernel-space virtual pages */
vaddr_t
alloc_kpages(unsigned npages)
{
	paddr_t pa;

	dumbvm_can_sleep();
	pa = getppages(npages);
	if (pa==0) {
		return 0;
	}
	return PADDR_TO_KVADDR(pa);
}

void 
free_kpages(vaddr_t addr){
  if (isTableActive()) {
    paddr_t paddr = addr - MIPS_KSEG0;
    long first = paddr/PAGE_SIZE;	
    KASSERT(allocSize!=NULL);
    KASSERT(nRamFrames>first);
    freeppages(paddr, allocSize[first]);	
  }
}
void
vm_tlbshootdown(const struct tlbshootdown *ts)
{
	(void)ts;
	panic("dumbvm tried to do tlb shootdown?!\n");
}



int
vm_fault(int faulttype, vaddr_t faultaddress)
{
	vaddr_t code_vbase, code_vtop, data_vbase, data_vtop, stackbase, stacktop;
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
	KASSERT(*as->code_pt != 0);
	KASSERT(as->npages_code != 0);
	KASSERT(as->data_vbase != 0);
	KASSERT(*as->data_pt != 0);
	KASSERT(as->npages_data != 0);
	KASSERT(*as->stack_pt != 0);
	KASSERT((as->code_vbase & PAGE_FRAME) == as->code_vbase);
	KASSERT((*as->code_pt & PAGE_FRAME) == *as->code_pt);
	KASSERT((as->data_vbase & PAGE_FRAME) == as->data_vbase);
	KASSERT((*as->data_pt & PAGE_FRAME) == *as->data_pt);
	KASSERT((*as->stack_pt & PAGE_FRAME) == *as->stack_pt);

	code_vbase = as->code_vbase;
	code_vtop = code_vbase + as->npages_code * PAGE_SIZE;
	data_vbase = as->data_vbase;
	data_vtop = data_vbase + as->npages_data * PAGE_SIZE;
	stackbase = USERSTACK - DUMBVM_STACKPAGES * PAGE_SIZE;
	stacktop = USERSTACK;

	if (faultaddress >= code_vbase && faultaddress < code_vtop) {
		paddr = (faultaddress - code_vbase) + *as->code_pt;
	}
	else if (faultaddress >= data_vbase && faultaddress < data_vtop) {
		paddr = (faultaddress - data_vbase) + *as->data_pt;
	}
	else if (faultaddress >= stackbase && faultaddress < stacktop) {
		paddr = (faultaddress - stackbase) + as->stack_pt[0];
	}
	else {
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





