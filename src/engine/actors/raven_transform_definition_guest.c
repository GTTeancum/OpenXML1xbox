#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "engine/actors/raven_actor_transform_owner.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
static void check(uint32_t sp) {
    if(g_esp!=sp){fputs("[TRANSFORM DEFINITION ERROR] Native XML ABI\n",stderr);_Exit(4);}
}
static void symbol(uint32_t object,uint32_t text) {
    uint32_t sp=g_esp;g_ecx=object;PUSH32(g_esp,2);PUSH32(g_esp,text);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x00125DA0u,sub_00125DA0);check(sp);
}
static void release(uint32_t object) {
    uint32_t sp=g_esp;g_ecx=object;PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x00125890u,sub_00125890);check(sp);
}
void xml1_transform_definition_capture(uint32_t definition,uint32_t node) {
    if(!definition||!node)return;
    const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
    g_esp-=48;uint32_t frame=g_esp;
    for(unsigned slot=0;slot<4;++slot) {
        memcpy((void*)XBOX_PTR(frame+16),"power1",7);MEM8(frame+21)='1'+slot;
        symbol(frame,frame+16);
        g_ecx=node;PUSH32(g_esp,frame);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x001260E0u,sub_001260E0);check(frame);
        if(g_eax) {
            g_ecx=g_eax;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00199EE0u,sub_00199EE0);check(frame);
            if(g_eax&&!raven_transform_definition_set(definition,slot,(const char*)XBOX_PTR(g_eax)))
                fprintf(stderr,"[TRANSFORM DEFINITION] power%u exceeds native move capacity\n",slot+1);
        }
        /* Partial native declarations preserve absent attributes; explicit
         * empty strings clear that slot. Construction/destruction reset all. */
        release(frame);
    }
    g_esp=sp;g_eax=ax;g_ecx=cx;g_edx=dx;
}
int xml1_transform_definition_fixture(uint32_t pool) {
    uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;unsigned fp=g_fp_top;
    uint32_t root=pool,attr=pool+0x80,definition=pool+0x400;
    memset((void*)XBOX_PTR(pool),0,0x500);raven_transform_definition_reset(definition);
    MEM32(root+0x54)=root+0x2c;char name[20]="untouched";int failed=0;
    xml1_transform_definition_capture(definition,root);
    if(raven_transform_definition_get(definition,0,name)||strcmp(name,"untouched"))failed=1;
    for(unsigned slot=0;slot<4;++slot) {
        strcpy((char*)XBOX_PTR(pool+0x100),"power1");MEM8(pool+0x105)='1'+slot;
        symbol(attr+4,pool+0x100);
        strcpy((char*)XBOX_PTR(pool+0x180),"generic_form_move");
        MEM32(root+0x54)=attr;MEM32(attr+0x28)=root+0x2c;
        MEM32(attr+0x14)=pool+0x180;MEM32(attr+0x1c)=1;
        xml1_transform_definition_capture(definition,root);
        MEM8(pool+0x180)=0;
        if(!raven_transform_definition_get(definition,slot,name)||strcmp(name,"generic_form_move"))failed=1;
        xml1_transform_definition_capture(definition,root);
        if(!raven_transform_definition_get(definition,slot,name)||*name)failed=1;
        release(attr+4);
    }
    MEM32(root+0x54)=root+0x2c;
    xml1_transform_definition_capture(definition,root);
    if(!raven_transform_definition_get(definition,3,name)||*name)failed=1;
    raven_transform_definition_reset(definition);
    if(raven_transform_definition_get(definition,3,name)||g_esp!=sp||g_fp_top!=fp)failed=1;
    g_eax=ax;g_ecx=cx;g_edx=dx;
    fprintf(stderr,"[TRANSFORM DEFINITION] %s native attribute lookup, four slots, owned text, absent/empty distinction, reset and ABI\n",failed?"FAIL":"PASS");
    return failed;
}
