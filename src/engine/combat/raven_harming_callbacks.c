#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "engine/combat/raven_harming_callbacks.h"
#include "engine/scripting/raven_remove_events.h"
#include "engine/actors/raven_ai_modes.h"
#include "engine/combat/raven_harming_runtime.h"
#include "engine/powers/raven_powerup_guest.h"
#include "engine/combat/raven_add_attack_runtime.h"
#include "engine/combat/raven_percent_attack_runtime.h"
#include "engine/combat/raven_absorb_runtime.h"
#include "engine/powers/raven_powerup_metadata.h"
#include "engine/powers/raven_xml1_powerup_view.h"
#include <string.h>
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
static void scale_rate(int removing){
    const uint32_t sp=g_esp;
    raven_lookup result=raven_xml1_scale_powerup_rate(MEM32(sp+4),removing);
    if(result==RAVEN_INVALID)fail("Invalid scale_actor callback");
    g_esp=sp+4; // Native activation/removal dispatcher owns the argument.
}
static void scale_activate(void){scale_rate(0);}
static void scale_remove(void){scale_rate(1);}
static void percent_activate(void){
    const uint32_t sp=g_esp;
    if(raven_xml1_percent_attack(MEM32(sp+4),0,0,1)==RAVEN_INVALID)fail("Invalid percentage activation");
    g_esp=sp+4;
}
static void percent_damage(void){
    const uint32_t sp=g_esp;
    if(raven_xml1_percent_attack(MEM32(sp+4),MEM32(sp+8),MEM32(sp+12),0)==RAVEN_INVALID)
        fail("Invalid percentage damage");
    g_esp=sp+4;
}
static const char *sound_events[]={"sound_activate","sound_deactivate","sound_death",
    "sound_think","sound_trail","sound_damage","sound_attempt_hit","sound_hurt","sound_touch"};
static void sound_event(unsigned event) {
    const uint32_t sp=g_esp;
    raven_xml1_powerup_sound(MEM32(sp+4),sound_events[event]);
    g_esp=sp+4; /* XML1 dispatchers retain all cdecl arguments. */
}
#define SOUND_CALLBACK(n) static void sound_##n(void){sound_event(n);}
SOUND_CALLBACK(0) SOUND_CALLBACK(1) SOUND_CALLBACK(2) SOUND_CALLBACK(3)
SOUND_CALLBACK(4) SOUND_CALLBACK(5) SOUND_CALLBACK(6) SOUND_CALLBACK(7) SOUND_CALLBACK(8)
#undef SOUND_CALLBACK
static void (*sound_callbacks[])(void)={sound_0,sound_1,sound_2,sound_3,sound_4,sound_5,sound_6,sound_7,sound_8};
static int has_sound(void *context,const char *sound){(void)context;(void)sound;return 1;}
static int feral_identity(void* context,const char* name){(void)context;return !_stricmp(name,"feral_rage");}
static int feral_read(void* context,uint32_t at,void* out,size_t size){
    (void)context;if(at<0x10000u||(uint64_t)at+size>0x08000000ull)return 0;
    memcpy(out,(void*)XBOX_PTR(at),size);return 1;
}
static void feral_event(unsigned event,int16_t tag){
    const uint32_t sp=g_esp,instance=MEM32(sp+4);uint32_t owner,current;
    if(raven_xml1_active_powerup_identity(feral_read,NULL,0x4833C0,instance,&owner)==RAVEN_FOUND){
        const uint32_t definition=MEM32(instance+0x2C);
        raven_xml1_powerup_sound(instance,sound_events[event]);
        // Sound lookup/playback can invoke native callbacks and retire owners.
        if(raven_xml1_active_powerup(feral_read,NULL,0x4833C0,owner,&current)==RAVEN_FOUND&&
           current==instance&&MEM32(instance+0x2C)==definition)
            raven_xml1_powerup_effect_event(instance,3,tag);
    }
    g_esp=sp+4;
}
static void feral_attempt(void){feral_event(6,1);}
static void feral_damage(void){feral_event(5,2);}
static void absorb_event(int inflicted) {
    uint32_t sp=g_esp;
    /* Native29F04 hurt passes only (instance,record);29ECA damage passes
     * (instance,target,record). The hurt source handle lives at record+0. */
    uint32_t record=MEM32(sp+(inflicted?12:8));
    uint32_t other=inflicted?MEM32(sp+8):
        (record>=0x10000u&&record<=0x07FFFF9Cu?MEM32(record):0);
    if(raven_xml1_absorb(MEM32(sp+4),other,record,inflicted)==RAVEN_INVALID)
        fail("Invalid Absorb callback");
    g_esp=sp+4;
}
static void absorb_damage(void){absorb_event(1);}
static void absorb_hurt(void){absorb_event(0);}
static int vacuum_identity(void* context,const char* name){(void)context;return !_stricmp(name,"vacuum");}
static void vacuum_think(void) {
    const uint32_t sp=g_esp;
    if(raven_xml1_vacuum_tick(MEM32(sp+4))==RAVEN_INVALID)fail("Invalid Vacuum callback");
    g_esp=sp+4; /* XML1 timed update retains the instance argument. */
}
static int trigger_identity(void* unused,const char* name){(void)unused;return !_stricmp(name,"callevents");}
static const unsigned trigger_ids[]={0,1,2,7,8,4,3,5,9};
static void trigger_dispatch(unsigned slot) {
    uint32_t sp=g_esp,other=0;unsigned event=trigger_ids[slot];
    if(event==3||event==4||event==9)other=MEM32(sp+8);
    else if(event==5) {
        uint32_t record=MEM32(sp+8);
        if(record<0x10000u||record>0x07FFFF9Cu)fail("Invalid TriggerEvents hurt record");
        other=MEM32(record);
    }
    if(raven_xml1_trigger_event(MEM32(sp+4),event,other)==RAVEN_INVALID)fail("Invalid TriggerEvents callback");
    g_esp=sp+4; /*29DC0 owns the event-specific cdecl argument list. */
}
#define TRIGGER_CALLBACK(n) static void trigger_##n(void){trigger_dispatch(n);}
TRIGGER_CALLBACK(0) TRIGGER_CALLBACK(1) TRIGGER_CALLBACK(2) TRIGGER_CALLBACK(3) TRIGGER_CALLBACK(4)
TRIGGER_CALLBACK(5) TRIGGER_CALLBACK(6) TRIGGER_CALLBACK(7) TRIGGER_CALLBACK(8)
#undef TRIGGER_CALLBACK
static void (*trigger_callbacks[])(void)={trigger_0,trigger_1,trigger_2,trigger_3,trigger_4,trigger_5,trigger_6,trigger_7,trigger_8};
int raven_harming_callback_is_code(uint32_t address){
    if(raven_xml1_shared_boost_fixture_lookup(address))return 1;
    if(raven_ai_mode_fixture_lookup(address))return 1;
    if(raven_xml1_remove_events_fixture_lookup(address))return 1;
    if(raven_xml1_trigger_fixture_lookup(address))return 1;
    return raven_xml1_vacuum_fixture_lookup(address)!=NULL||raven_xml1_powerup_sound_fixture_lookup(address)!=NULL||
        raven_xml1_absorb_fixture_lookup(address)!=NULL||
        raven_xml1_percent_attack_fixture_lookup(address)!=NULL||
        raven_xml1_powerup_effect_fixture_lookup(address)!=NULL||
        (callbacks&&address>=callbacks&&address<callbacks+120&&((address-callbacks)&3)==0);
}
void (*raven_harming_callback_lookup(uint32_t address))(void){
    void (*shared_test)(void)=raven_xml1_shared_boost_fixture_lookup(address);
    if(shared_test)return shared_test;
    void (*ai_test)(void)=raven_ai_mode_fixture_lookup(address);
    if(ai_test)return ai_test;
    void (*removal_test)(void)=raven_xml1_remove_events_fixture_lookup(address);
    if(removal_test)return removal_test;
    void (*trigger_test)(void)=raven_xml1_trigger_fixture_lookup(address);
    if(trigger_test)return trigger_test;
    void (*vacuum_test)(void)=raven_xml1_vacuum_fixture_lookup(address);
    if(vacuum_test)return vacuum_test;
    void (*absorb_fixture)(void)=raven_xml1_absorb_fixture_lookup(address);
    if(absorb_fixture)return absorb_fixture;
    void (*fixture)(void)=raven_xml1_powerup_sound_fixture_lookup(address);
    if(fixture)return fixture;
    fixture=raven_xml1_percent_attack_fixture_lookup(address);
    if(fixture)return fixture;
    fixture=raven_xml1_powerup_effect_fixture_lookup(address);
    if(fixture)return fixture;
    if(callbacks&&address==callbacks)return activate;
    if(callbacks&&address==callbacks+4)return think;
    if(callbacks&&address==callbacks+8)return add_attack;
    if(callbacks&&address==callbacks+12)return scale_activate;
    if(callbacks&&address==callbacks+16)return scale_remove;
    if(callbacks&&address==callbacks+56)return percent_activate;
    if(callbacks&&address==callbacks+60)return percent_damage;
    if(callbacks&&address==callbacks+64)return feral_attempt;
    if(callbacks&&address==callbacks+68)return feral_damage;
    if(callbacks&&address==callbacks+72)return absorb_damage;
    if(callbacks&&address==callbacks+76)return absorb_hurt;
    if(callbacks&&address==callbacks+80)return vacuum_think;
    if(callbacks&&address>=callbacks+84&&address<callbacks+120&&!((address-callbacks)&3))return trigger_callbacks[(address-callbacks-84)/4];
    if(raven_harming_callback_is_code(address)&&address>=callbacks+20&&address<callbacks+56)return sound_callbacks[(address-callbacks-20)/4];
    return NULL;
}
void raven_harming_callback_test_storage(uint32_t address){
    if(callbacks||address<0x10000u||address>0x07FFFF88u)fail("Invalid callback storage");
    callbacks=address;
}
void raven_harming_install_callbacks(uint32_t definition){
    const int attack=raven_add_attack_definition(definition);
    const int percentage=raven_percent_attack_mode(definition);
    const int absorb=raven_absorb_mode(definition);
    const int vacuum=raven_xml1_powerup_identity_visit(definition,0,vacuum_identity,NULL);
    const int trigger=raven_xml1_powerup_identity_visit(definition,0,trigger_identity,NULL);
    const int feral=raven_xml1_powerup_identity_visit(definition,0,feral_identity,NULL);
    float up,down;
    const int scale=raven_xml1_powerup_scale_rates(definition,&up,&down);
    unsigned sound_mask=0;
    for(unsigned i=0;i<9;++i)if(raven_xml1_powerup_sound_visit(definition,sound_events[i],has_sound,NULL))sound_mask|=1u<<i;
    if(!trigger&&!vacuum&&!absorb&&!feral&&!percentage&&!sound_mask&&!attack&&!scale&&!raven_harming_runtime_definition(definition))return;
    uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
    if(!callbacks){
        PUSH32(g_esp,0x96370);PUSH32(g_esp,14);PUSH32(g_esp,120);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x00123490u,sub_00123490);g_esp+=12;
        if(g_esp!=sp||!g_eax)fail("Callback allocation failed");
        callbacks=g_eax;
    }
    if(trigger) {
        for(unsigned i=0;i<9;++i) {
            raven_powerup_trigger entry;
            if(!MEM32(definition+0x9C+4*i)&&raven_xml1_powerup_trigger_get(definition,trigger_ids[i],&entry))
                MEM32(definition+0x9C+4*i)=callbacks+84+4*i;
        }
    }
    else if(vacuum) {
        if(!MEM32(definition+0xA8))MEM32(definition+0xA8)=callbacks+80;
    }
    else if(absorb) {
        const uint32_t slot=definition+(absorb==1?0xB0:0xB8);
        if(!MEM32(slot))MEM32(slot)=callbacks+(absorb==1?72:76);
    }
    else if(sound_mask||feral) {
        /* These are XML1's parser-owned func_* slots, in native order. Only
         * explicitly authored CPUSound events install handlers. Retain stock
         * authored callbacks rather than silently replacing an XML1 system. */
        for(unsigned i=0;i<9;++i)if(((sound_mask&(1u<<i))||(feral&&(i==5||i==6)))&&!MEM32(definition+0x9C+4*i))
            MEM32(definition+0x9C+4*i)=callbacks+(feral&&i==5?68:feral&&i==6?64:20+4*i);
    }
    else if(percentage){
        const uint32_t slot=definition+(percentage==2?0x9C:0xB0);
        if(!MEM32(slot))MEM32(slot)=callbacks+(percentage==2?56:60);
    }
    else if(scale){MEM32(definition+0x9C)=callbacks+12;MEM32(definition+0xA0)=callbacks+16;}
    else if(attack)MEM32(definition+0xB4)=callbacks+8;
    else {MEM32(definition+0x9C)=callbacks;MEM32(definition+0xA8)=callbacks+4;}
    trace("install",definition,RAVEN_FOUND);
    g_eax=ax;g_ecx=cx;g_edx=dx;
}
