/* Compare the actual recovered function against original-x86 oracle bytes.
 * Non-position bytes are canaries, so stride/store overruns also fail. */
#include "xbox_memory_layout.h"
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include "skin-vectors.h"
extern ptrdiff_t g_xbox_mem_offset;
extern RECOMP_TLS uint32_t g_esp,g_ebp,g_ebx,g_esi,g_edi;
void sub_002B59F0(void);
int xml2_skinning_selftest(void) {
    uint32_t base=xbox_HeapAlloc(0x1000,16),saved_sp=g_esp,saved_bp=g_ebp;
    if(!base)return 4;
    unsigned char *data=(unsigned char*)((uintptr_t)g_xbox_mem_offset+base);
    for(unsigned i=0;i<sizeof(skin_vectors)/sizeof(skin_vectors[0]);++i) {
        const struct SkinVector *v=&skin_vectors[i];
        memcpy(data,v->positions,sizeof(v->positions));
        memcpy(data+0x100,v->weights,sizeof(v->weights));
        memcpy(data+0x200,v->ids,sizeof(v->ids));
        memcpy(data+0x300,v->matrices,sizeof(v->matrices));
        memset(data+0x500,0xa5,288);
        uint32_t args[9]={0x1000000,base,v->count,base+0x100,base+0x200,v->influences,base+0x300,base+0x500,v->stride};
        g_esp=saved_sp-64;memcpy((void*)((uintptr_t)g_xbox_mem_offset+g_esp),args,sizeof(args));
        g_ebp=0x123400;g_ebx=0x123456;g_esi=0x234567;g_edi=0x345678;
        sub_002B59F0();
        if(memcmp(data+0x500,v->expected,288)||g_esp!=saved_sp-60||
            g_ebx!=0x123456||g_esi!=0x234567||g_edi!=0x345678) {
            fprintf(stderr,"[SKIN TEST FAIL] case=%u count=%u influences=%u stride=%u\n",i,v->count,v->influences,v->stride);
            unsigned byte=0;while(byte<288 && data[0x500+byte]==v->expected[byte])++byte;
            fprintf(stderr," first_difference=%u esp=%08X expected=%08X ebp=%08X ebx=%08X esi=%08X edi=%08X\n",
                byte,g_esp,saved_sp-60,g_ebp,g_ebx,g_esi,g_edi);
            g_esp=saved_sp;g_ebp=saved_bp;return 4;
        }
    }
    /* Recovered standard-frame functions publish local EBP to g_ebp for
     * frameless callees but do not restore that diagnostic shadow on return.
     * This driver does not claim to validate EBP propagation across callers. */
    g_esp=saved_sp;g_ebp=saved_bp;
    fprintf(stderr,"[SKIN TEST PASS] 24 original-x86 weighted skinning, stride/canary, ESP/EBX/ESI/EDI cases (EBP shadow excluded)\n");
    return 0;
}
