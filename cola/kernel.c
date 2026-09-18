/*
    @The Cola Kernel Project
    DATE : 9/18/2026
    Programmer : Aether
    File : kernel.c
*/

#include <kernel.h>

int get_kernel_current_state(struct kernel* k) {
    if( k->state == KERNEL_SLEEPING ) {
        return KERNEL_SLEEPING;
    }
    if( k->state == KERNEL_ACTIVE ) {
        return KERNEL_ACTIVE;
    }
    if( k->state == KERNEL_BOOTING ) {
        return KERNEL_BOOTING;
    }
    
  return k->state;
}
