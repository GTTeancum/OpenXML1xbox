#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "engine/progression/talent_source_table.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static uint32_t source_table;
int xml1_talent_source_path_valid(uint32_t path) {
    if(path<0x10000u || path>0x08000000u-XML1_TALENT_SOURCE_BYTES)return 0;
    for(unsigned i=0;i<XML1_TALENT_SOURCE_BYTES;++i)
        if(!MEM8(path+i))return i!=0;
    /* Never silently truncate to an unrelated file. Expanding path lengths
     * requires changing the native source-key consumers too. */
    fprintf(stderr,"[TALENT SOURCE ERROR] source path exceeds 31 bytes\n");
    return 0;
}
uint32_t xml1_talent_source_table(void) {
    if(source_table)return source_table;
    uint32_t ax=g_eax,bx=g_ebx,cx=g_ecx,dx=g_edx,si=g_esi,di=g_edi,
        bp=g_ebp,sp=g_esp,seh=g_seh_ebp;
    /* Same allocation category/tag as the native talent manager B5980.
     * The registry lives for the guest process, as did the original static
     * table. Do not recycle an index while any talent can still reference it. */
    PUSH32(g_esp,0x1d);PUSH32(g_esp,0x0e);
    PUSH32(g_esp,XML1_TALENT_SOURCE_ALLOCATION);PUSH32(g_esp,0x000B5997u);
    RECOMP_ABI_CALL(0x00123490u,sub_00123490);g_esp+=12;
    if(g_esp!=sp || g_eax<0x10000u ||
       g_eax>0x08000000u-XML1_TALENT_SOURCE_ALLOCATION) {
        fputs("[TALENT SOURCE ERROR] registry allocation/ABI\n",stderr);_Exit(4);
    }
    source_table=g_eax;
    memset((void*)XBOX_PTR(source_table),0,XML1_TALENT_SOURCE_ALLOCATION);
    memcpy((void*)XBOX_PTR(source_table),(const void*)XBOX_PTR(0x4d7310),3*32);
    g_eax=ax;g_ebx=bx;g_ecx=cx;g_edx=dx;g_esi=si;g_edi=di;
    g_ebp=bp;g_esp=sp;g_seh_ebp=seh;
    return source_table;
}
