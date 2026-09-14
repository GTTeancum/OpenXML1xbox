#include "kernel.h"
#include "xbox_memory_layout.h"
#include <stdio.h>
#include <stdlib.h>
void *recomp_lookup(ULONG address) { (void)address; abort(); }
void *recomp_lookup_manual(ULONG address) { (void)address; abort(); }
int main(void) {
    extern ptrdiff_t g_xbox_mem_offset;
    unsigned char *memory=VirtualAlloc(NULL,16*1024*1024,MEM_RESERVE|MEM_COMMIT,PAGE_READWRITE);
    if(!memory) return 10;
    g_xbox_mem_offset=(ptrdiff_t)memory;
    *(ULONG*)(memory+0x10000)=0x80000164; /* HalBootSMCVideoMode ordinal356. */
    xbox_kernel_set_thunk_address(0x10000,1); xbox_kernel_bridge_init();
    ULONG boot=*(ULONG*)(memory+*(ULONG*)(memory+0x10000));
    if(boot!=1) return 11;
    ULONG value=0,type=0,length=0;
    NTSTATUS result=xbox_ExQueryNonVolatileSetting(XC_VIDEO,&type,&value,4,&length);
    if(result || value!=0x000B0000 || type!=4 || length!=4) return 1;
    /* Exact original XGetVideoFlags shift/mask and AV-pack gate. */
    ULONG flags=(value>>16)&0x5f;
    if(boot!=1) flags&=0xfffffff1;
    if(flags!=0xB) return 2;
    xbox_AvSendTVEncoderOption(NULL,6,0,&value);
    if(value!=0x004B0104) return 3;
    result=xbox_HalReadSMBusValue(SMC_SLAVE_ADDRESS,SMC_CMD_AV_PACK,FALSE,&value);
    if(result || value!=1) return 4;
    VirtualFree(memory,0,MEM_RELEASE);
    puts("PASS: dashboard widescreen/720p/480p bits and raw/decoded HDTV pack agree");
    return 0;
}
