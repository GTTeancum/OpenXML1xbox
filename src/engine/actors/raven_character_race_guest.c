#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "engine/actors/raven_character_race.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void check(uint32_t expected) {
    if(g_esp!=expected){fputs("[CHARACTER RACE ERROR] Native XML ABI\n",stderr);_Exit(4);}
}
static void symbol(uint32_t object,uint32_t text) {
    uint32_t sp=g_esp;g_ecx=object;
    PUSH32(g_esp,2);PUSH32(g_esp,text);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x00125DA0u,sub_00125DA0);check(sp);
}
static void release_symbol(uint32_t object) {
    uint32_t sp=g_esp;g_ecx=object;PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x00125890u,sub_00125890);check(sp);
}
void xml1_character_race_capture(uint32_t definition,uint32_t node) {
    /* XML2 57160 consumes Race/name children. XML1 55B20 already owns the
     * parsed node and definition; borrow them only for this synchronous call.
     * Native XML names/iteration retain their normal symbol ownership. */
    if(!definition||!node)return;
    const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
    g_esp-=64;const uint32_t frame=g_esp;
    memcpy((void*)XBOX_PTR(frame+32),"Race",5);
    memcpy((void*)XBOX_PTR(frame+40),"name",5);
    symbol(frame,frame+32);symbol(frame+16,frame+40);
    uint32_t child=0;unsigned count=0;
    for(;;) {
        g_ecx=node;PUSH32(g_esp,child);PUSH32(g_esp,frame);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x00126C30u,sub_00126C30);check(frame);
        child=g_eax;if(!child)break;
        if(++count>4096){fputs("[CHARACTER RACE ERROR] Cyclic Race children\n",stderr);_Exit(4);}
        g_ecx=child;PUSH32(g_esp,frame+16);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x001260E0u,sub_001260E0);check(frame);
        if(!g_eax)continue;
        g_ecx=g_eax;PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x00199EE0u,sub_00199EE0);check(frame);
        if(g_eax)raven_character_race_add(definition,(const char*)XBOX_PTR(g_eax));
    }
    release_symbol(frame+16);release_symbol(frame);
    g_esp=sp;g_eax=ax;g_ecx=cx;g_edx=dx;
}

int xml1_character_race_fixture(uint32_t pool) {
    /* Synthetic parsed nodes, real native symbol construction, child and
     * attribute lookups. File decoding itself is outside this bounded check. */
    const uint32_t sp=g_esp,definition=pool+0x900,root=pool;
    const int fp=g_fp_top;
    const char *values[]={"MuTaNt","BROTHERHOOD","human","invalid","xmen",NULL};
    memset((void*)XBOX_PTR(root),0,0x1000);
    raven_character_race_reset(definition);
    MEM32(root+0xc)=root+0x100;
    for(unsigned i=0;i<6;++i) {
        uint32_t child=root+0x100+i*0x100,attr=child+0x60;
        strcpy((char*)XBOX_PTR(child+0xa0),i==2?"Other":"Race");
        symbol(child+0x14,child+0xa0);
        MEM32(child+0x28)=i<5?child+0x100:0;
        MEM32(child+0x54)=child+0x2c;
        if(values[i]) {
            MEM32(child+0x54)=attr;MEM32(attr+0x28)=child+0x2c;
            strcpy((char*)XBOX_PTR(child+0xb0),"name");symbol(attr+4,child+0xb0);
            strcpy((char*)XBOX_PTR(child+0xc0),values[i]);
            /* Native literal RString representation, no owning allocation. */
            MEM32(attr+0x14)=child+0xc0;MEM32(attr+0x1c)=1;
        }
    }
    g_eax=0x12345678;g_ecx=0x87654321;g_edx=0xabcdef;
    xml1_character_race_capture(definition,root);
    int failed=raven_character_race_mask(definition)!=((1u<<2)|(1u<<8)|(1u<<9)) ||
        g_esp!=sp||g_fp_top!=fp||g_eax!=0x12345678||g_ecx!=0x87654321||g_edx!=0xabcdef;
    xml1_character_race_capture(definition,root); /* repeated parsing is a union */
    if(raven_character_race_mask(definition)!=0x304)failed=1;
    if(raven_character_race_add(definition,"unknown")||raven_character_race_mask(definition)!=0x304)failed=1;
    raven_character_race_reset(definition);
    if(raven_character_race_mask(definition))failed=1;
    if(!raven_character_race_add(definition,"robot")||raven_character_race_mask(definition)!=8)failed=1;
    /* Full CharacterDef construction also enters the native talent allocator,
     * whose heap is not bootstrapped in --powerup-definition-test. Exercise
     * metadata reuse here; constructor/destructor hook locations are guarded
     * separately. Do not claim this runs the whole native object lifecycle. */
    raven_character_race_reset(definition);
    for(unsigned i=0;i<6;++i) {
        uint32_t child=root+0x100+i*0x100;
        if(values[i])release_symbol(child+0x64);
        release_symbol(child+0x14);
    }
    if(g_esp!=sp||g_fp_top!=fp)failed=1;
    puts(failed?"FAIL character Race native parser/lifetime fixture":
        "PASS character Race: native child/attribute lookup, multiple flags, case folding, missing/unknown names, unrelated children, reparse, metadata reset/reuse and ABI");
    return failed;
}
