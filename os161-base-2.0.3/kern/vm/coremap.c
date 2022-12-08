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



    
static unsigned char *freeRamFrames = NULL;
static unsigned long *allocSize = NULL;
static int *next_allocated = NULL;
static int *prev_allocated = NULL;
//This two variables are used for swapping purposes 
static int next_victim = -1;
static int last_allocated = -1;
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
  next_allocated = kmalloc(sizeof(int)*nRamFrames);
  if(next_allocated == NULL){
    kprintf("WARNING: next_allocated not initialized, swapping will fail");
  }  
  
  prev_allocated = kmalloc(sizeof(int)*nRamFrames);   
  if(prev_allocated == NULL){
    kprintf("WARNING: prev_allocated not initialized, swapping will fail");
  }

  for (i=0; i<nRamFrames; i++) {    
      freeRamFrames[i] = FREE_PAGE;
      allocSize[i]     = 0;
      next_allocated[i] = 0;  
      prev_allocated[i] = 0;
  }
	first_free_addr = (int)ram_getfirstfree();
	kprintf("First free address: %d\n",first_free_addr);
	for (i=0; i<first_free_addr/PAGE_SIZE; i++) {    
        freeRamFrames[i] = K_PAGE;
        allocSize[i]     = 1; 
        //Kernel pages cannot be swapped out, the value -1 means that they cannot be swapped out (they don't point to a next victim). 
        next_allocated[i] = -1;  
        prev_allocated[i] = -1;
    }
    spinlock_acquire(&freemem_lock);
    allocTableActive = 1;
    spinlock_release(&freemem_lock);
    kprintf("VM initialized\n");
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
paddr_t getfreeppages(unsigned long npages,unsigned char type_of_page, int pt) {
  paddr_t addr;	
  long i, first, found, np = (long)npages;

  if (!isTableActive()) return 0; 
  spinlock_acquire(&freemem_lock);
  for (i=0,first=found=-1; i<nRamFrames; i++) {
    if (freeRamFrames[i] == FREE_PAGE) {
      if (i==0 || (freeRamFrames[i-1] != FREE_PAGE)) 
        first = i; /* set first free in an interval */   
      if (i-first+1 >= np) {
        found = first;
        break;
      }
    }
  }
	
  if (found>=0) {
    if((type_of_page != K_PAGE) & (pt != IS_CODE_PT)) {
      if((next_victim == -1) | (last_allocated == -1)){ //First data or stack page allocation
        next_victim = found;
        last_allocated = found;
        next_allocated[found] = 0;
        prev_allocated[found] = -1;
      } else {
        prev_allocated[found] = last_allocated;
        next_allocated[last_allocated] = found;
        last_allocated = found;
        next_allocated[found] = 0;
      }
    }
    for (i=found; i<found+np; i++) {
      freeRamFrames[i] = type_of_page;
      if((type_of_page == K_PAGE) | (pt == IS_CODE_PT)){
        next_allocated[i] = -1;
        prev_allocated[i] = -1;
      } else {
        if(i != found){
          next_allocated[i-1] = i;
          next_allocated[i] = 0;
          prev_allocated[i] = last_allocated;
          last_allocated++;
        }
      }
      
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

paddr_t getppages(unsigned long npages, unsigned char type_of_page, int pt, int *swap_needed){
  paddr_t addr;

  /* try freed pages first */
  addr = getfreeppages(npages,type_of_page, pt);
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
  if(type_of_page != K_PAGE){
    if(addr == 0 && isTableActive()){
      *swap_needed = 1;
    } else{
      *swap_needed = 0;
    }
  }

  return addr;
}




int freeppages(paddr_t addr, unsigned long npages){
  long i, first, np=(long)npages;	
  int prev,next;

  if (!isTableActive()) return 1; 
  first = addr/PAGE_SIZE;
  KASSERT(allocSize!=NULL);
  KASSERT(nRamFrames>first);

  spinlock_acquire(&freemem_lock);
  for (i=first; i<first+np; i++) {
    freeRamFrames[i] = FREE_PAGE;
    if(next_allocated[i] > 0){
      next = next_allocated[i];
      prev_allocated[next] = prev_allocated[i];
    }
    if(prev_allocated[i] > 0){
      prev = prev_allocated[i];
      next_allocated[prev] = next_allocated[i];
    }
    if(next_victim == i){
      next_victim = next_allocated[i];
    }
    next_allocated[i] = 0;
    prev_allocated[i] = 0;
  }
  spinlock_release(&freemem_lock);

  return 0;
}

/* Allocate/free some kernel-space virtual pages */
vaddr_t
alloc_kpages(unsigned npages)
{
	paddr_t pa;

	dumbvm_can_sleep();
	pa = getppages(npages,K_PAGE,0,NULL);
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

paddr_t get_swapvictim(){
  paddr_t victim = next_victim * PAGE_SIZE;
  int next_victim_aux = next_victim;

  if(next_victim<=0){
    panic("WARNING: [GET_SWAPVICTIM] No next victim, next victim <0");
    return 0;
  } else{
    next_victim =  next_allocated[next_victim];
    next_allocated[next_victim_aux] = 0;
    next_allocated[last_allocated] = next_victim_aux; //Now this page will be the last allocated
    prev_allocated[next_victim_aux] = last_allocated;
    last_allocated = next_victim_aux;
    prev_allocated[next_victim] = 0;
    return victim;    
  }
}
void print_coremap_status(){
  kprintf("COREMAP STATUS\n");
  kprintf("U_PAGE = 0,FREE_PAGE = 1, K_PAGE = 2\n");
  kprintf("Next_victim = %d, last_allocated = %d \n",next_victim,last_allocated);
  for(int i = 0 ; i <nRamFrames ; i++){

    kprintf("freeRamFrames[%d] = %d, allocSize[%d] = %lu , \
    next_allocated[%d] = %d , prev_allocated[%d] = %d\n",\
    i,(int)freeRamFrames[i],i,allocSize[i],i,next_allocated[i],i,prev_allocated[i]);
  }
}

void reset_coremap_vars(){
  next_victim    = -1;
  last_allocated = -1;
}









