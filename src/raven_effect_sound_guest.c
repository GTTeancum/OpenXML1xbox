#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "raven_effect_sound_guest.h"
#include "raven_loop_sound_runtime.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* XML2 F6480/F6580/F6770 compose native effect and sound operations.
 * Retain XML1's effect layout through +24; +28/+2C hold the interned
 * sound name/resolved ID. This fits the native factory's 60-byte slot.
 * Loop ownership lives in the existing actor+sound manager, not the event. */
static uint32_t table;
static void trace(const char *op,uint32_t event) {
    static unsigned count;
    if(getenv("XML1_TRACE_HANDLER_PROBES")&&count++<256)
        fprintf(stderr,"[EFFECT SOUND TRACE] %s event=%08X table=%08X name=%08X sound=%08X\n",op,event,MEM32(event),MEM32(event+0x28),MEM32(event+0x2C));
}
static void balanced(uint32_t sp) {
    if(g_esp!=sp){fprintf(stderr,"[EFFECT SOUND ERROR] native stack imbalance\n");_Exit(4);}
}
static uint32_t invoke(uint32_t object,uint32_t fn,unsigned count,const uint32_t *args) {
    uint32_t sp=g_esp;
    for(unsigned i=count;i;--i)PUSH32(g_esp,args[i-1]);
    g_ecx=object;PUSH32(g_esp,0);RECOMP_ICALL_SAFE(fn,sp);balanced(sp);return g_eax;
}
/* Reuse the native sound resolver on a temporary, correctly laid-out sound
 * object. Never reinterpret the effect's resource fields as sound fields. */
static uint32_t sound_call(uint32_t event,uint32_t fn,unsigned n,const uint32_t *args) {
    uint32_t sp=g_esp;g_esp-=0x20;uint32_t sound=g_esp;
    memset((void*)XBOX_PTR(sound),0,0x20);MEM32(sound)=0x3D7028;
    MEM32(sound+0x10)=MEM32(event+0x28);MEM32(sound+0x14)=MEM32(event+0x2C);
    uint32_t result=invoke(sound,fn,n,args);
    MEM32(event+0x28)=MEM32(sound+0x10);MEM32(event+0x2C)=MEM32(sound+0x14);
    g_esp=sp;return result;
}
static void parse(void) {
    uint32_t event=g_ecx,sp=g_esp,key=MEM32(sp+4),value=MEM32(sp+8);
    uint32_t args[]={key,value};
    if(raven_loop_sound_parse(event,(const char*)XBOX_PTR(key),(const char*)XBOX_PTR(value)))g_eax=1;
    else if(!_stricmp((const char*)XBOX_PTR(key),"sound"))
        g_eax=sound_call(event,0xD7F00,2,args);
    else g_eax=invoke(event,0xD7290,2,args);
    trace("parse",event);g_esp=sp+12;
}
static void phase(void) {
    uint32_t event=g_ecx,sp=g_esp,arg=MEM32(sp+4);
    uint32_t ok=invoke(event,0xD7050,1,&arg);
    if(ok&255)ok=sound_call(event,0xD7E30,1,&arg);
    trace("phase",event);g_eax=ok;g_esp=sp+8;
}
static void execute(void) {
    uint32_t event=g_ecx,sp=g_esp,args[]={MEM32(sp+4),MEM32(sp+8)};
    trace("execute",event);invoke(event,0xD6EC0,2,args);
    uint32_t id=MEM32(event+0x2C),actor=args[0];
    if(!raven_loop_guest_event(event,actor,id)&&actor&&id!=UINT32_MAX) {
        // The manager's registered-ID interface (14FF40) accepts ID zero;
        // actor66980 drops it before lookup. Forward the same position and
        // parameters directly for this new event, leaving XML1 events alone.
        uint32_t manager=invoke(0,0x151EF0,0,NULL);
        g_esp-=12;uint32_t position=g_esp;
        uint32_t resolved=invoke(actor,MEM32(MEM32(actor)+0x24),1,&position);
        uint32_t sound_args[]={id,resolved,0x3F800000,0x44A28000,0x43160000};
        invoke(manager,MEM32(MEM32(manager)+0x5C),5,sound_args);
        g_esp+=12;
    }
    g_esp=sp+12;
}
static void copy(void) {
    uint32_t event=g_ecx,sp=g_esp,source=MEM32(sp+4);
    invoke(event,0xE5230,1,&source);
    if(source&&MEM32(source)==table) {
        MEM32(event+0x28)=MEM32(source+0x28);MEM32(event+0x2C)=MEM32(source+0x2C);
        raven_loop_sound_copy(event,source);
    } else {
        MEM32(event+0x28)=0;MEM32(event+0x2C)=UINT32_MAX;raven_loop_sound_retire(event);
    }
    trace("copy",event);g_esp=sp+8;
}
int raven_effect_sound_is_code(uint32_t a) {return table&&a>=table+40&&a<=table+52&&!(a&3);}
void (*raven_effect_sound_lookup(uint32_t a))(void) {
    if(!raven_effect_sound_is_code(a))return NULL;
    switch(a-table){case 40:return execute;case 44:return parse;case 48:return phase;case 52:return copy;}
    return NULL;
}
int raven_effect_sound_construct(uint32_t event,uint32_t name) {
    if(!name||_stricmp((const char*)XBOX_PTR(name),"ce_effect_sound"))return 0;
    if(!event){fprintf(stderr,"[EFFECT SOUND ERROR] null factory slot\n");_Exit(4);}
    uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
    if(!table) {
        PUSH32(g_esp,0x2BC90);PUSH32(g_esp,14);PUSH32(g_esp,60);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x123490u,sub_00123490);g_esp+=12;balanced(sp);
        if(!g_eax)_Exit(4);
        MEM32(g_eax)=MEM32(0x3D6FA0);table=g_eax+4;
        memcpy((void*)XBOX_PTR(table),(const void*)XBOX_PTR(0x3D6FA4),40);
        MEM32(table+4)=table+40;MEM32(table+0x10)=table+44;
        MEM32(table+0x14)=table+48;MEM32(table+0x18)=table+52;
    }
    invoke(event,0xE51F0,0,NULL);MEM32(event)=table;
    MEM32(event+0x28)=0;MEM32(event+0x2C)=UINT32_MAX;raven_loop_sound_retire(event);
    g_eax=ax;g_ecx=cx;g_edx=dx;balanced(sp);return 1;
}
