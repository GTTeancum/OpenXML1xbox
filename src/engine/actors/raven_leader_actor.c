#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "engine/actors/raven_leader_actor.h"
#include "engine/actors/raven_leader_definition.h"
#include "engine/actors/raven_leader_power.h"
#include "engine/actors/raven_leader_event_guest.h"
#include "engine/powers/raven_shared_powerups_runtime.h"
#include "engine/world/raven_campaign_state_guest.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
static void check(uint32_t sp) {
    if(g_esp!=sp){fputs("[LEADER ACTOR ERROR] Native attribute/RNG ABI\n",stderr);_Exit(4);}
}
static uint32_t property(uint32_t object,uint32_t method,uint32_t key) {
    uint32_t sp=g_esp,target=MEM32(MEM32(object)+method);
    g_ecx=object;PUSH32(g_esp,0);PUSH32(g_esp,key);PUSH32(g_esp,0);
    RECOMP_ICALL_SAFE(target,sp);check(sp);return g_eax;
}
static int native_random(void *context,int minimum,int maximum) {
    (void)context;uint32_t sp=g_esp;
    PUSH32(g_esp,maximum);PUSH32(g_esp,minimum);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x001233C0u,sub_001233C0);g_esp+=8;check(sp);return (int32_t)g_eax;
}
int xml1_leader_actor_selection(uint32_t actor,uint32_t properties,int32_t difficulty,uint8_t *selection) {
    if(!actor||!properties||!selection)return 0;
    const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx,seh=g_seh_ebp;
    int result=0;char name[64]={0};g_esp-=32;uint32_t frame=g_esp;
    strcpy((char*)XBOX_PTR(frame),"leader");
    strcpy((char*)XBOX_PTR(frame+8),"leaderpowerup");
    if(!property(properties,0x24,frame))goto done;
    uint32_t text=property(properties,0x10,frame+8);
    if(text)for(unsigned i=0;i<63&&MEM8(text+i);++i)name[i]=(char)MEM8(text+i);
    uint32_t definition=MEM32(actor+0x2d8);
    if(!name[0]&&definition)raven_leader_definition_get(definition,name);
    if(!name[0])strcpy(name,definition&&(MEM8(definition+0x3a1)&2)?"random_no_invuln":"r");
    /* Keep XML1's native typed property access and inclusive RNG. This is
     * selection only; lifecycle/resource attachment remains with its owner. */
    result=raven_leader_select(name,difficulty,native_random,NULL,selection)?1:-1;
done:
    g_esp=sp;g_eax=ax;g_ecx=cx;g_edx=dx;g_seh_ebp=seh;return result;
}
static int has_leader_templates(void) {
    for(unsigned i=0;i<14;++i)
        if(raven_shared_powerups_contains(raven_leader_power_name((uint8_t)i)))return 1;
    return 0;
}
void xml1_leader_actor_loaded(uint32_t actor,uint32_t properties) {
    /* No imported catalog means no extra RNG or changes to stock leaders.
     * Resource-free selection stays separate from native event scheduling. */
    if(!has_leader_templates())return;
    uint8_t selection;
    int selected=xml1_leader_actor_selection(actor,properties,xml1_campaign_difficulty(),&selection);
    if(!selected)return;
    if(selected<0) {fputs("[LEADER ACTOR] Unknown authored leaderpowerup\n",stderr);return;}
    const char *name=raven_leader_power_name(selection);
    if(!raven_shared_powerups_contains(name)) {
        fprintf(stderr,"[LEADER ACTOR] Shared definition unavailable: %s\n",name);return;
    }
    /* The shared catalog has no actor combat-resource owner. XML1 D74A0's
     * corresponding ownerless definition binding uses namespace12;94FE0 and
     * 260B0 retain XML1's normal resource lookup and native common fallback. */
    if(!xml1_leader_event_schedule(MEM32(actor+0x1c),selection,12))
        fputs("[LEADER ACTOR] Unable to queue leader activation\n",stderr);
}
void xml1_leader_actor_restored(uint32_t actor,uint32_t native_record) {
    uint8_t selection;
    if(!actor||!xml1_leader_zone_selection(native_record,&selection))return;
    const char *name=raven_leader_power_name(selection);
    if(!raven_shared_powerups_contains(name)) {
        fprintf(stderr,"[LEADER ACTOR] Saved shared definition unavailable: %s\n",name);return;
    }
    if(!xml1_leader_event_restore(MEM32(actor+0x1c),selection,12))
        fputs("[LEADER ACTOR] Saved selection could not replace pending activation\n",stderr);
}
static void fixture_property(uint32_t object,uint32_t text,const char *key,const char *value) {
    uint32_t sp=g_esp;
    strcpy((char*)XBOX_PTR(text),key);strcpy((char*)XBOX_PTR(text+64),value);
    g_ecx=object;PUSH32(g_esp,text+64);PUSH32(g_esp,text);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x00069A20u,sub_00069A20);check(sp);
}
int xml1_leader_actor_fixture(uint32_t pool) {
    uint32_t sp=g_esp,seed=MEM32(0x50622c),object=pool,actor=pool+0x400,definition=pool+0x800;
    unsigned fp=g_fp_top;int failed=0;
    memset((void*)XBOX_PTR(pool),0,0x1000);MEM32(actor+0x2d8)=definition;
    raven_leader_definition_reset(definition);
    /* Real native IEntityDef constructor, insertion and virtual lookups;
     * no fake string/boolean callbacks and no desktop or world involvement. */
    for(unsigned scenario=0;scenario<6;++scenario) {
        g_ecx=object;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00069DC0u,sub_00069DC0);check(sp);
        if(scenario)fixture_property(object,pool+0xc00,"leader","true");
        if(scenario==1)fixture_property(object,pool+0xc00,"leaderpowerup","ldr_health_regen");
        if(scenario==2)raven_leader_definition_set(definition,"ldr_radiation");
        if(scenario==3)fixture_property(object,pool+0xc00,"leaderpowerup","unknown");
        if(scenario>=4)raven_leader_definition_reset(definition);
        MEM8(definition+0x3a1)=scenario==4?2:0;
        uint8_t selection=77;MEM32(0x50622c)=1;
        int result=xml1_leader_actor_selection(actor,object,1,&selection);
        if(scenario==0&&(result||selection!=77||MEM32(0x50622c)!=1))failed=1;
        if(scenario==1&&(result!=1||selection!=6||MEM32(0x50622c)!=1))failed=1;
        if(scenario==2&&(result!=1||selection!=5||MEM32(0x50622c)!=1))failed=1;
        if(scenario==3&&(result!=-1||selection!=77||MEM32(0x50622c)!=1))failed=1;
        if(scenario>=4&&(result!=1||selection!=0||MEM32(0x50622c)!=16807))failed=1;
        g_ecx=object;PUSH32(g_esp,0);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x0006A3F0u,sub_0006A3F0);check(sp);
    }
    raven_leader_definition_reset(definition);MEM32(0x50622c)=seed;
    if(g_esp!=sp||g_fp_top!=fp)failed=1;
    puts(failed?"FAIL leader actor selection fixture":
        "PASS leader actor selection: native entity properties, non-leader exclusion, explicit and definition names, invalid names and native RNG; attachment untested");
    return failed;
}
