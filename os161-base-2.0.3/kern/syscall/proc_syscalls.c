/*
 * AUthor: G.Cabodi
 * Very simple implementation of sys__exit.
 * It just avoids crash/panic. Full process exit still TODO
 * Address space is released
 */

#include <types.h>
#include <kern/unistd.h>
#include <clock.h>
#include <copyinout.h>
#include <syscall.h>
#include <lib.h>
#include <proc.h>
#include <thread.h>
#include <addrspace.h>
#include <vmstats.h>
#include <coremap.h>
#include <swapfile.h>
/*
 * simple proc management system calls
 */
void
sys__exit(int status)
{
  print_vm_stats();
  check_vm_stats();
  //print_coremap_status();
  //print_swapfile_coremap_status();
  /* get address space of current process and destroy */
  struct addrspace *as = proc_getas();
  as_destroy(as);
  reset_swapfile_coremap();
  //print_coremap_status();
  /* thread exits. proc data structure will be lost */
  thread_exit();

  panic("thread_exit returned (should not happen)\n");
  (void) status;
}
