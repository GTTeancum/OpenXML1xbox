#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "engine/actors/raven_leader_definition.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
static void check(uint32_t sp) {
    if(g_esp!=sp){fputs("[LEADER DEFINITION ERROR] Native XML ABI\n",stderr);_Exit(4);}
}
static void symbol(uint32_t object,uint32_t text) {
    uint32_t sp=g_esp;g_ecx=object;PUSH32(g_esp,2);PUSH32(g_esp,text);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x00125DA0u,sub_00125DA0);check(sp);
}
static void release(uint32_t object) {
    uint32_t sp=g_esp;g_ecx=object;PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x00125890u,sub_00125890);check(sp);
}
void xml1_leader_definition_capture(uint32_t definition,uint32_t node) {
    if(!definition||!node)return;
    const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
    g_esp-=48;uint32_t frame=g_esp;
    memcpy((void*)XBOX_PTR(frame+16),"leaderpowerup",14);symbol(frame,frame+16);
    g_ecx=node;PUSH32(g_esp,frame);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x001260E0u,sub_001260E0);check(frame);
    if(g_eax) {
        g_ecx=g_eax;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00199EE0u,sub_00199EE0);check(frame);
        if(g_eax)raven_leader_definition_set(definition,(const char*)XBOX_PTR(g_eax));
    }
    /* Absent fields preserve earlier declarations, just as native property
     * parsing does. An explicitly empty value clears the authored override.
     * The constructor/final destructor own complete metadata retirement. */
    release(frame);g_esp=sp;g_eax=ax;g_ecx=cx;g_edx=dx;
}
int xml1_leader_definition_fixture(uint32_t pool) {
    uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;unsigned fp=g_fp_top;
    uint32_t root=pool,attr=pool+0x80,definition=pool+0x400;
    memset((void*)XBOX_PTR(pool),0,0x500);raven_leader_definition_reset(definition);
    MEM32(root+0x54)=root+0x2c;
    char name[64];memset(name,0x7a,sizeof(name));int failed=0;
    xml1_leader_definition_capture(definition,root);
    if(raven_leader_definition_get(definition,name)||name[0]!=0x7a)failed|=1;
    strcpy((char*)XBOX_PTR(pool+0x100),"leaderpowerup");symbol(attr+4,pool+0x100);
    strcpy((char*)XBOX_PTR(pool+0x180),"ldr_health_regen");
    MEM32(root+0x54)=attr;MEM32(attr+0x28)=root+0x2c;
    MEM32(attr+0x14)=pool+0x180;MEM32(attr+0x1c)=1;
    xml1_leader_definition_capture(definition,root);
    memset((void*)XBOX_PTR(pool+0x180),'x',70);MEM8(pool+0x180+70)=0;
    if(!raven_leader_definition_get(definition,name)||strcmp(name,"ldr_health_regen"))failed|=2;
    xml1_leader_definition_capture(definition,root);
    if(!raven_leader_definition_get(definition,name)||strlen(name)!=63||name[62]!='x')failed|=4;
    MEM32(root+0x54)=root+0x2c;xml1_leader_definition_capture(definition,root);
    if(!raven_leader_definition_get(definition,name)||strlen(name)!=63)failed|=8;
    MEM32(root+0x54)=attr;MEM8(pool+0x180)=0;xml1_leader_definition_capture(definition,root);
    if(raven_leader_definition_get(definition,name))failed|=16;
    raven_leader_definition_set(definition,"r");raven_leader_definition_reset(definition);
    if(raven_leader_definition_get(definition,name))failed|=32;
    release(attr+4);
    if(g_esp!=sp||g_fp_top!=fp)failed|=64;
    g_eax=ax;g_ecx=cx;g_edx=dx;
    if(failed)fprintf(stderr,"Leader definition fixture failure mask: %u\n",(unsigned)failed);
    puts(failed?"FAIL leader definition parser fixture":
        "PASS leader definition: native attribute lookup, owned text, bounded name, absent/empty distinction and retirement; full CharacterDef lifecycle untested");
    return failed;
}
