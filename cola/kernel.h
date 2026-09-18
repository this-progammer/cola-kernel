/*
    @The Cola Kernel Project
    DATE : 9/18/2026
    Programmer : Aether
    File : kernel.h
*/

#ifndef _C_KERNEL_
#define _C_KERNEL_

/*kernel modes/states*/
#define KERNEL_SLEEPING 0
#define KERNEL_ACTIVE 1
#define KERNEL_BOOTING 2

struct kernel {
    int state;
    void *kdata;
    long lin; /*address the kernel was loaded into*/
};

int get_kernel_current_state(struct kernel* k);
void set_kernel_current_state(struct kernel* k, int S);
void* get_kernel_data(struct kernel* k);
void set_kernel_data(struct kernel* k, void* data);
long get_kernel_load_in_address(struct kernel* k);
void set_kernel_load_in_address(struct kernel* k, long l);

#endif
