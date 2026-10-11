#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void raven_xml2_query_observe(uint32_t va);
RECOMP_TLS uint32_t g_eax,g_ecx,g_edx,g_esp;
ptrdiff_t g_xbox_mem_offset;
static unsigned calls;
void xml2_native_query_body(void) {
    ++calls;
    MEMF(MEM32(g_esp+8))=1;MEMF(MEM32(g_esp+12))=1;
    g_eax=0x123400;g_ecx=0x87654321;g_edx=0xdeadbeef;g_esp+=24;
}
int main(void) {
    unsigned char *memory=(unsigned char*)calloc(1,0x08000000);
    if(!memory)return 2;
    g_xbox_mem_offset=(ptrdiff_t)memory;
    for(unsigned enabled=0;enabled<2;++enabled) {
        _putenv_s("XML2_QUERY_PARITY",enabled?"1":"0");
        g_ecx=0x1002200;g_esp=0x1f00000;
        MEM32(g_esp+4)=57;MEM32(g_esp+8)=0x1000200;MEM32(g_esp+12)=0x1000204;
        MEM32(g_esp+16)=0;MEM32(g_esp+20)=1;
        unsigned char actor_before[0x224],stack_before[24];
        memcpy(actor_before,XBOX_PTR(g_ecx),sizeof(actor_before));
        memcpy(stack_before,XBOX_PTR(g_esp),sizeof(stack_before));
        const uint32_t eax_before=g_eax,edx_before=g_edx;
        raven_xml2_query_observe(0x15ED50);
        if(g_ecx!=0x1002200||g_esp!=0x1f00000||g_eax!=eax_before||g_edx!=edx_before||
           memcmp(actor_before,XBOX_PTR(g_ecx),sizeof(actor_before))||
           memcmp(stack_before,XBOX_PTR(g_esp),sizeof(stack_before)))return 3;
        sub_0015E8C0();
        if(calls!=enabled+1||g_eax!=0x123400||g_ecx!=0x87654321||g_edx!=0xdeadbeef||
           g_esp!=0x1f00018||MEMF(0x1000200)!=1||MEMF(0x1000204)!=1)return 1;
    }
    g_ecx=0xffffffffu;g_esp=0xffffffffu;
    raven_xml2_query_observe(0x15ED50); /* Must diagnose without dereferencing. */
    if(g_ecx!=0xffffffffu||g_esp!=0xffffffffu)return 4;
    _putenv_s("XML2_QUERY_PARITY","");free(memory);
    puts("PASS XML2 wrapper enabled/disabled: native called once, guest registers and outputs preserved (stub body only)");
    puts("PASS outer query observer: guest actor/stack/registers unchanged; invalid addresses rejected");
    return 0;
}
