#include "kernel.h"
#include "xbox_memory_layout.h"
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
extern ptrdiff_t g_xbox_mem_offset;
extern RECOMP_TLS uint32_t g_eax,g_esp;
extern void xbox_SetDeviceInterruptLine(uint32_t,int);
extern void xbox_DispatchDeviceInterrupts(void);
typedef void (*guest_fn)(void);
extern guest_fn recomp_lookup_kernel(uint32_t);
static unsigned calls;
static uint8_t *memory;
static void service(void) {
    uint32_t *args=(uint32_t *)(memory+g_esp);
    if(args[1]!=0x30000||args[2]!=0x12345678||xbox_KeGetCurrentIrql()!=5) abort();
    ++calls; xbox_SetDeviceInterruptLine(5,0); g_eax=1; g_esp+=12;
}
void *recomp_lookup(ULONG address) { return address==0x50000?(void *)service:NULL; }
void *recomp_lookup_manual(ULONG address) { (void)address; return NULL; }
static void call(uint32_t target,const uint32_t *args,unsigned count) {
    g_esp=0x20000;
    uint32_t *stack=(uint32_t *)(memory+g_esp); stack[0]=0;
    for(unsigned i=0;i<count;++i) stack[i+1]=args[i];
    guest_fn fn=recomp_lookup_kernel(target); if(!fn) abort(); fn();
    if(g_esp!=0x20004+count*4) abort();
}
int main(void) {
    memory=VirtualAlloc(NULL,16*1024*1024,MEM_RESERVE|MEM_COMMIT,PAGE_READWRITE);
    if(!memory) return 10;
    g_xbox_mem_offset=(ptrdiff_t)memory;
    uint32_t *imports=(uint32_t *)(memory+0x10000);
    imports[0]=0x80000000u|109; imports[1]=0x80000000u|98;
    xbox_kernel_set_thunk_address(0x10000,2); xbox_kernel_bridge_init();
    uint32_t args[]={0x30000,0x50000,0x12345678,5,5,0,0};
    call(imports[0],args,7); call(imports[1],args,1);
    g_esp=0x21000;
    xbox_SetDeviceInterruptLine(5,1); xbox_DispatchDeviceInterrupts();
    if(calls!=1||g_esp!=0x21000||xbox_KeGetCurrentIrql()!=0) return 1;
    xbox_DispatchDeviceInterrupts();
    if(calls!=1) return 2;
    xbox_SetDeviceInterruptLine(5,1); xbox_DispatchDeviceInterrupts();
    if(calls!=2) return 3;
    puts("PASS: connected guest ISR receives context at device IRQL, acknowledges level, preserves stack and restores IRQL");
    /* Process lifetime owns synthetic memory; no mapping is freed while the
     * dispatcher's initialization thread could still be inspecting it. */
    return 0;
}
