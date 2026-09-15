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
    xbox_kernel_set_video_flags(XC_VIDEO_FLAGS_HDTV_480p);
    result=xbox_ExQueryNonVolatileSetting(XC_VIDEO,&type,&value,4,&length);
    if(result || value!=0x00080000 || ((value>>16)&0x5f)!=8) return 5;
    xbox_AvSendTVEncoderOption(NULL,AV_OPTION_QUERY_AVPACK,0,&value);
    if(value!=0x00480104) return 6;
    xbox_AvSendTVEncoderOption(NULL,AV_OPTION_QUERY_AV_CAPABILITIES,0,&value);
    if(value!=(AV_FLAGS_HDTV_480i|AV_FLAGS_HDTV_480p|AV_FLAGS_60Hz)) return 7;
    ULONG caps=value;
    xbox_AvSendTVEncoderOption(NULL,AV_OPTION_QUERY_MODE_CAPS,0,&value);
    if(value!=caps) return 8;
    xbox_kernel_set_video_flags(XC_VIDEO_FLAGS_WIDESCREEN|XC_VIDEO_FLAGS_HDTV);
    xbox_AvSendTVEncoderOption(NULL,AV_OPTION_QUERY_AV_CAPABILITIES,0,&value);
    if(value!=(caps|AV_FLAGS_HDTV_720p|AV_FLAGS_WIDESCREEN)) return 9;
    VirtualFree(memory,0,MEM_RELEASE);
    puts("PASS: dashboard and encoder agree for widescreen HD and 4:3 480p");
    return 0;
}
