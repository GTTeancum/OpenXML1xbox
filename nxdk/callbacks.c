#include <windows.h>
#include <string.h>
#include "port.h"
#include "recomp_types.h"

enum { CALLBACK_LEVELS=8, CALLBACK_STACK=65536 };
static PortRegisterBank callback_banks[CALLBACK_LEVELS];
static uint32_t callback_tibs[CALLBACK_LEVELS][256];
static unsigned callback_depth;
static uint8_t callback_fxsave[CALLBACK_LEVELS][512] __attribute__((aligned(16)));

void port_init_callbacks(void)
{
    for(unsigned i=0;i<CALLBACK_LEVELS;++i) {
        void *stack=VirtualAlloc(NULL,CALLBACK_STACK,MEM_RESERVE|MEM_COMMIT,PAGE_READWRITE);
        if(!stack)nxdk_port_fail("callback stacks",__FILE__,__LINE__);
        PortRegisterBank *bank=&callback_banks[i];
        bank->words[3]=(uint32_t)(uintptr_t)stack+CALLBACK_STACK-16;
        bank->words[8]=(uint32_t)(uintptr_t)callback_tibs[i];
        bank->words[13]=0x037f;
        callback_tibs[i][0]=0xffffffffu;
        callback_tibs[i][6]=callback_tibs[i][7]=bank->words[8];
    }
}
uint32_t port_call_interrupt(uint32_t address,const uint32_t *args,unsigned count)
{
    /* No allocation and no native TLS access on entry. A DPC may interrupt
       the kernel idle thread, which has no executable's TLS allocation. */
    KIRQL irql=KeGetCurrentIrql();
    if(irql<DISPATCH_LEVEL)nxdk_port_fail("interrupt bridge called below DPC level",__FILE__,__LINE__);
    uint32_t flags;
    __asm__ volatile("pushfl; popl %0; cli":"=r"(flags)::"memory");
    unsigned level=callback_depth++;
    if(level>=CALLBACK_LEVELS) {__asm__ volatile("int3");for(;;)__asm__ volatile("hlt");}
    PortRegisterBank *previous=port_interrupt_register_bank;
    PortRegisterBank *bank=&callback_banks[level];
    uint32_t prcb;__asm__ volatile("movl %%fs:0x20,%0":"=r"(prcb));
    callback_tibs[level][8]=prcb;
    callback_tibs[level][9]=irql;
    callback_tibs[level][10]=(uint32_t)(uintptr_t)KeGetCurrentThread();
    port_interrupt_register_bank=bank;
    __asm__ volatile("pushl %0; popfl"::"r"(flags):"memory","cc");
    /* ISR callbacks run above the level allowed by KeSaveFloatingPointState.
       Preserve the processor state directly, including lazy-FPU CR0.TS. */
    uint32_t cr0;__asm__ volatile("movl %%cr0,%0; clts":"=r"(cr0)::"memory");
    __asm__ volatile("fxsave %0; fninit":"=m"(callback_fxsave[level])::"memory");
    const uint32_t mxcsr=0x1f80;__asm__ volatile("ldmxcsr %0"::"m"(mxcsr));
    uint32_t result=port_call_guest(address,args,count);
    /* The Xbox DPC dispatcher requires lazy FPU trapping on return. ISR
       callbacks instead restore the interrupted context's exact CR0. */
    if(irql==DISPATCH_LEVEL)cr0|=0x0au;
    /* A guest kernel call can set TS again before returning to us. */
    __asm__ volatile("clts; fxrstor %0; movl %1,%%cr0"::"m"(callback_fxsave[level]),"r"(cr0):"memory");
    __asm__ volatile("pushfl; popl %0; cli":"=r"(flags)::"memory");
    port_interrupt_register_bank=previous;
    --callback_depth;
    __asm__ volatile("pushl %0; popfl"::"r"(flags):"memory","cc");
    return result;
}
