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
    nRamFrames = (total_ram_size)/PAGE_SIZE;

    /* alloc freeRamFrame and allocSize */  
    freeRamFrames = kmalloc(sizeof(unsigned char)*nRamFrames);
    if (freeRamFrames==NULL) return;  
    allocSize = kmalloc(sizeof(unsigned long)*nRamFrames);   
    if (allocSize==NULL) {    
    /* reset to disable this vm management */
        freeRamFrames = NULL; return;
    }
    for (i=0; i<nRamFrames; i++) {    
        freeRamFrames[i] = (unsigned char)1;
        allocSize[i]     = 0;  
    }
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









