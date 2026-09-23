/* XML2 generated function wrapper. The instrumentation step renames only
 * the original definition to xml2_native_query_body; dispatch keeps this name. */
#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "raven_xml2_query_probe.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
extern void xml2_native_query_body(void);
/* Observe the original outer query before it filters empty lists/masks.
 * A silent inner probe does not establish parity: this distinguishes an
 * unvisited consumer from normal native short-circuiting, without writing
 * actor data or manufacturing an affecter just to make the test pass. */
void raven_xml2_query_observe(uint32_t va) {
    static unsigned long long visited;
    if(va!=0x0015ED50u)return;
    const char *enabled=getenv("XML2_QUERY_PARITY");
    if(!enabled||strcmp(enabled,"1"))return;
    const uint32_t actor=g_ecx,frame=g_esp;
    const unsigned long long count=++visited;
    if(count>16 && count%4096)return;
    if(actor<0x10000u || actor>0x08000000u-0x224u ||
       frame<0x10000u || frame>0x08000000u-20u) {
        fprintf(stderr,"[XML2 QUERY OUTER] count=%llu invalid actor=%08X frame=%08X\n",count,actor,frame);
        return;
    }
    fprintf(stderr,"[XML2 QUERY OUTER] count=%llu actor=%08X attribute=%u mode=%u head=%08X pool=%08X masks=%08X,%08X,%08X\n",
        count,actor,MEM32(frame+4),MEM32(frame+16),MEM32(actor+0x21c),MEM32(actor+0x220),
        MEM32(actor+0x210),MEM32(actor+0x214),MEM32(actor+0x218));
}
static int query_read(void *context,uint32_t address,void *output,size_t size) {
    (void)context;
    if(address<0x10000u||(uint64_t)address+size>0x08000000ull)return 0;
    memcpy(output,(const void*)XBOX_PTR(address),size);return 1;
}
void sub_0015E8C0(void) {
    const char *enabled=getenv("XML2_QUERY_PARITY");
    if(!enabled||strcmp(enabled,"1")) {xml2_native_query_body();return;}
    uint32_t frame=g_esp,actor=g_ecx;
    uint32_t lower=MEM32(frame+8),upper=MEM32(frame+12);
    raven_xml2_scope_runtime runtime={0x5f92d0,MEM32(0x5aa7a8),MEM32(0x58bdcc),0x6cfd10,MEM32(0x72e068)};
    void *snapshot=raven_xml2_query_probe_begin(query_read,NULL,&runtime,0x5f3af8,MEM32(0x5a9f74),actor,
        (uint8_t)MEM32(frame+4),(uint8_t)MEM32(frame+20),MEM32(frame+16));
    xml2_native_query_body();
    float endpoints[2];
    if(!query_read(NULL,lower,&endpoints[0],4)||!query_read(NULL,upper,&endpoints[1],4)) {
        raven_xml2_query_probe_finish(snapshot,0,NULL);
        fputs("[XML2 QUERY UNVERIFIED] Native output address unreadable\n",stderr);
        return;
    }
    raven_xml2_query_probe_finish(snapshot,(g_eax&255)!=0,endpoints);
}
