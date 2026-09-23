#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "raven_harming_callbacks.h"
#include "raven_harming_runtime.h"
#include "raven_powerup_guest.h"
#include "raven_add_attack_runtime.h"
#include <stdio.h>
#include <stdlib.h>
static uint32_t callbacks;
static void trace(const char *event,uint32_t value,int result){
    if(getenv("XML1_TRACE_HARMING")){
        fprintf(stderr,"[RAVEN HARMING] %s address=%08X result=%d\n",event,value,result);
        if(event[0]!='i')fprintf(stderr,
            "[RAVEN HARMING STATE] source=%08X target=%08X life=%g start=%g next=%g\n",
            MEM32(value+0x18),MEM32(value+0x1C),(double)MEMF(value+4),
            (double)MEMF(value+8),(double)MEMF(value+0x24));
        fflush(stderr);
    }
}
static void fail(const char *reason){fprintf(stderr,"[RAVEN HARMING ERROR] %s\n",reason);fflush(stderr);_Exit(4);}
static void activate(void){
    uint32_t sp=g_esp,handle;
    if(raven_xml1_harming_begin(0x4833C0,MEM32(sp+4),&handle)!=RAVEN_FOUND)fail("Invalid activation instance");
    trace("activate",MEM32(sp+4),RAVEN_FOUND);
    g_esp=sp+4; // Native callers own the single cdecl argument.
}
static void think(void){
    uint32_t sp=g_esp;
    /* XML1 campaign has no XML2 skirmish rules. Native null handle storage
       is shared with the existing XML1 target-selection path. */
    raven_lookup result=raven_xml1_harming_think(0x4833C0,MEM32(sp+4),MEM32(0x4D7300),MEM32(0x498D90),0);
    if(result==RAVEN_INVALID)fail("Invalid harming tick");
    if(result==RAVEN_FOUND)trace("tick",MEM32(sp+4),result);
    g_esp=sp+4;
}
static void add_attack(void){
    const uint32_t sp=g_esp;
    raven_lookup result=raven_xml1_add_attack(MEM32(sp+4),MEM32(sp+8),MEM32(sp+12));
    if(result==RAVEN_INVALID)fail("Invalid add_attack callback");
    if(getenv("XML1_TRACE_HARMING"))fprintf(stderr,
        "[RAVEN ADD ATTACK] instance=%08X target=%08X record=%08X result=%d\n",
        MEM32(sp+4),MEM32(sp+8),MEM32(sp+12),result);
    g_esp=sp+4; // 29E91 owns the three cdecl arguments.
}
int raven_harming_callback_is_code(uint32_t address){return callbacks&&(address==callbacks||address==callbacks+4||address==callbacks+8);}
void (*raven_harming_callback_lookup(uint32_t address))(void){
    if(callbacks&&address==callbacks)return activate;
    if(callbacks&&address==callbacks+4)return think;
    if(callbacks&&address==callbacks+8)return add_attack;
    return NULL;
}
void raven_harming_callback_test_storage(uint32_t address){
    if(callbacks||address<0x10000u||address>0x07FFFFF4u)fail("Invalid callback storage");
    callbacks=address;
}
void raven_harming_install_callbacks(uint32_t definition){
    const int attack=raven_add_attack_definition(definition);
    if(!attack&&!raven_harming_runtime_definition(definition))return;
    uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
    if(!callbacks){
        PUSH32(g_esp,0x96370);PUSH32(g_esp,14);PUSH32(g_esp,12);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x00123490u,sub_00123490);g_esp+=12;
        if(g_esp!=sp||!g_eax)fail("Callback allocation failed");
        callbacks=g_eax;
    }
    if(attack)MEM32(definition+0xB4)=callbacks+8;
    else {MEM32(definition+0x9C)=callbacks;MEM32(definition+0xA8)=callbacks+4;}
    trace("install",definition,RAVEN_FOUND);
    g_eax=ax;g_ecx=cx;g_edx=dx;
}
