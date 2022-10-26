#ifndef _VMSTATS_H_
#define _VMSTATS_H_

void print_mem_stats(void);
void increment_TLB_faults(void);
void increment_TLB_faults_with_free(void);
void increment_TLB_faults_with_repalce(void);
void increment_TLB_invalidations(void);
void increment_TLB_reloads(void);
void increment_page_fault_zeroed(void);
void increment_page_fault_disk(void);
void increment_page_fault_ELF(void);
void increment_page_fault_swapfile_get(void);
void increment_page_fault_swapfile_write(void);
void print_vm_status(void);
#endif
