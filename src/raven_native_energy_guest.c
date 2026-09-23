#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "raven_native_energy.h"
#include "raven_native_energy_guest.h"
#include "raven_imported_talents.h"
#include "raven_numeric.h"
#include "raven_power_bindings_guest.h"
#include "raven_victim_event_guest.h"
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int raven_native_projectile_fire_parse(uint32_t event,const char *value);
static int diagnostic(void) {
    static int active=-1;
    if(active<0) {const char *p=getenv("XML1_TEST_ENERGY_TALENTS");active=p&&*p;}
    return active;
}
static int enabled(void) {return raven_imported_talents_active()||diagnostic();}
static int read_guest(void *context,uint32_t address,void *out,size_t size);
int xml1_raven_projectile_count_parse(uint32_t event,uint32_t value) {
    return enabled()&&value&&raven_native_projectile_count_parse(event,(const char*)XBOX_PTR(value));
}
int xml1_raven_spawn_life_parse(uint32_t event,uint32_t value) {
    return enabled()&&value&&raven_native_spawn_life_parse(event,(const char*)XBOX_PTR(value));
}
int xml1_raven_spawn_lifetime(uint32_t event,uint32_t spawned,uint32_t source) {
    float life;
    if(!enabled()||!raven_native_spawn_life(read_guest,MEM32(0x4D7300),event,source,&life))return 0;
    const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
    uint32_t bits;memcpy(&bits,&life,4);
    // D298D's native lifetime setter owns simulation timing and cleanup.
    // Resolve per source actor; never replace the shared descriptor value.
    g_ecx=spawned;PUSH32(g_esp,0);PUSH32(g_esp,bits);PUSH32(g_esp,0);PUSH32(g_esp,0);
    RECOMP_ICALL_SAFE(MEM32(MEM32(spawned)+0xB4),sp);
    if(g_esp!=sp){fputs("[RAVEN SPAWN ERROR] lifetime stack imbalance\n",stderr);_Exit(4);}
    g_eax=ax;g_ecx=cx;g_edx=dx;
    if(diagnostic())fprintf(stderr,"[RAVEN SPAWN LIFE] event=%08X actor=%08X spawned=%08X seconds=%g\n",event,source,spawned,life);
    return 1;
}
int xml1_raven_projectile_spawn(uint32_t event,uint32_t target) {
    if(!enabled())return 0;
    uint32_t sp=g_esp,args[6];
    for(unsigned i=0;i<6;++i)args[i]=MEM32(sp+i*4);
    int count=raven_native_projectile_count(read_guest,MEM32(0x4D7300),event,args[1]);
    float position[3];int death_position=raven_projectile_death_position(event,position);
    int16_t explosion_damage=args[4]?SMEM16(args[4]+8):0;
    uint8_t primary=0,secondary=0;
    int explosion=raven_native_explosion_resolve(read_guest,MEM32(0x4D7300),event,args[1],
        &explosion_damage,&primary,&secondary);
    if(count<0&&!death_position&&!explosion)return 0;
    // D2903 passes the descriptor as argument three to native 5A090.
    // That routine consumes it synchronously; it never retains its address.
    // Resolve in a dispatch-local copy, preserving the shared event and other actors.
    g_esp-=0xB0;uint32_t local=g_esp;
    memcpy((void*)XBOX_PTR(local),(const void*)XBOX_PTR(args[2]),0x34);
    if(count>=0)MEM8(local+0x20)=(uint8_t)count;
    if(death_position)memcpy((void*)XBOX_PTR(local),position,12);
    args[2]=local;
    uint32_t previous_explosion=0;
    if(explosion) {
        if(!args[4]){fputs("[RAVEN EXPLOSION ERROR] Missing native attack record\n",stderr);_Exit(4);}
        uint32_t record=local+0x40;
        memcpy((void*)XBOX_PTR(record),(const void*)XBOX_PTR(args[4]),0x64);
        MEM16(record+8)=(uint16_t)explosion_damage;
        MEM8(record+0x55)=primary;MEM8(record+0x56)=secondary;
        args[4]=record;
        previous_explosion=raven_projectile_explosion_scope(record);
        if(diagnostic())fprintf(stderr,"[RAVEN EXPLOSION SPAWN] event=%08X source=%08X damage=%d tag=%u tag2=%u\n",event,args[1],explosion_damage,primary,secondary);
    }
    if(diagnostic()&&death_position)fprintf(stderr,"[RAVEN DEATH SPAWN] event=%08X count=%u native_life=%g\n",event,MEM8(local+0x20),MEMF(local+0x2C));
    for(unsigned i=6;i;--i)PUSH32(g_esp,args[i-1]);
    PUSH32(g_esp,0);RECOMP_ICALL_SAFE(target,local);
    if(g_esp!=local){fputs("[RAVEN PROJECTILE ERROR] stack imbalance\n",stderr);_Exit(4);}
    if(explosion)raven_projectile_explosion_scope(previous_explosion);
    g_esp=sp+24;
    if(diagnostic())fprintf(stderr,"[RAVEN PROJECTILE COUNT] event=%08X count=%d\n",event,count);
    return 1;
}
typedef struct held_clock {uint32_t actor,handle,node;float previous;uint64_t revision;} held_clock;
static held_clock held_clocks[512];
static int read_guest(void *context,uint32_t address,void *out,size_t size) {
    (void)context;
    if(address<0x10000u||(uint64_t)address+size>0x08000000ull)return 0;
    memcpy(out,(const void*)XBOX_PTR(address),size);return 1;
}
static void text(uint32_t address,char out[128]) {
    for(unsigned i=0;i<128;++i) {
        if(!read_guest(NULL,address+i,out+i,1))break;
        if(!out[i])return;
    }
    fputs("[RAVEN ENERGY ERROR] Invalid or overlong native operand\n",stderr);
    fflush(stderr);_Exit(4);
}
int xml1_raven_energy_parse(uint32_t event,uint32_t field,uint32_t value) {
    if(!enabled())return 0;
    char key[128],operand[128];text(field,key);text(value,operand);
    return raven_native_energy_parse(event,key,operand);
}
int xml1_raven_held_parse(uint32_t node,uint32_t field,uint32_t value) {
    if(!enabled())return 0;
    char key[128],operand[128];text(field,key);
    if(_stricmp(key,"energypersecond"))return 0;
    text(value,operand);return raven_native_held_parse(node,key,operand);
}
void xml1_raven_held_chain_parse(uint32_t table,uint32_t action,uint32_t result) {
    if(!enabled()||!action||!result)return;
    const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx,bx=g_ebx,
        si=g_esi,di=g_edi,bp=g_ebp,seh=g_seh_ebp;
    const unsigned fp=g_fp_top;
    char key[128],destination[128];
    // ECDF0 receives node+10 and tagged XML action/result value objects.
    // Use 199EE0 for either direct text or the native XML intern pool.
    g_ecx=action;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00199EE0u,sub_00199EE0);
    text(g_eax,key);
    if(!_stricmp(key,"samepowerhold")) {
        g_ecx=result;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00199EE0u,sub_00199EE0);
        text(g_eax,destination);
        raven_native_held_chain_parse(table-0x10,key,destination);
    }
    if(g_esp!=sp||g_fp_top!=fp){fputs("[RAVEN ENERGY ERROR] held chain ABI\n",stderr);_Exit(4);}
    g_eax=ax;g_ecx=cx;g_edx=dx;g_ebx=bx;g_esi=si;g_edi=di;g_ebp=bp;g_seh_ebp=seh;
}
void xml1_raven_held_update(uint32_t node,uint32_t actor) {
    if(!enabled()||actor<0x10000u||actor>0x07fff000u)return;
    /* CF27A copies actor+1C into the native damage source handle. */
    const uint32_t handle=MEM32(actor+0x1C);
    held_clock *clock=&held_clocks[handle&511];
    uint64_t revision=raven_native_held_revision(node);
    if(!node||MEM32(actor+0x2F4)!=node||!revision) {
        if(clock->actor==actor)memset(clock,0,sizeof(*clock));
        return;
    }
    const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx,bx=g_ebx,
        si=g_esi,di=g_edi,bp=g_ebp,seh=g_seh_ebp;
    const unsigned fp=g_fp_top;
    /* Use the same simulation-time getter as ordinary XML1 power charging. */
    PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00066AB0u,sub_00066AB0);
    float now=(float)g_fp_stack[g_fp_top];g_fp_top=(g_fp_top+1u)&7u;
    if(!isfinite(now))goto restore;
    if(clock->actor!=actor||clock->handle!=handle||clock->node!=node||clock->revision!=revision||now<clock->previous) {
        *clock=(held_clock){actor,handle,node,now,revision};goto restore;
    }
    int16_t rate;float charge;
    if(now-clock->previous<=0.25f)goto restore;
    if(!raven_native_held_rate(read_guest,NULL,MEM32(0x4D7300),node,actor,&rate)||
       !raven_xml2_held_energy_charge(rate,clock->previous,now,&charge))goto restore;
    clock->previous=now;
    /* Preserve XML1's power-cost modifiers and energy clamping. */
    g_esp-=4;MEMF(g_esp)=charge;g_ecx=actor;
    PUSH32(g_esp,0);RECOMP_ABI_CALL(0x0003F410u,sub_0003F410);
    if(diagnostic())fprintf(stderr,"[RAVEN HELD CHARGE] actor=%08X node=%08X now=%g rate=%d charge=%g\n",actor,node,now,rate,charge);
restore:
    if(g_esp!=sp||g_fp_top!=fp){fputs("[RAVEN ENERGY ERROR] held charge ABI\n",stderr);_Exit(4);}
    g_eax=ax;g_ecx=cx;g_edx=dx;g_ebx=bx;g_esi=si;g_edi=di;g_ebp=bp;g_seh_ebp=seh;
}
float xml1_raven_held_requirement(uint32_t node,uint32_t actor) {
    int16_t rate;
    if(!enabled()||!raven_native_held_rate(read_guest,NULL,MEM32(0x4D7300),node,actor,&rate))return 0.0f;
    // XML2 105C2E..105C3F reserves one quarter second before event costs.
    // Unlike an actual debit, this eligibility contribution has no minimum1.
    return (float)rate*0.25f;
}
void xml1_raven_held_trigger_observe(uint32_t event,uint32_t actor) {
    if(!diagnostic()||!(MEM8(event+0xE)&4)||
       !raven_native_held_chain(MEM32(event+4)))return;
    fprintf(stderr,"[RAVEN HELD STARTUP] actor=%08X node=%08X event=%08X looped=%u native_skip=%u\n",
        actor,MEM32(event+4),event,!!(MEM8(actor+0x336)&0x20),!!(MEM8(actor+0x336)&0x20));
}
int xml1_raven_held_input(uint32_t actor,uint32_t input) {
    if(!enabled()||!actor||!input||!(MEM32(input)&0x80))return 0;
    uint32_t node=MEM32(actor+0x2F4),component=MEM32(actor+0x2D8);
    if(!node||!component||!raven_native_held_chain(node))return 0;
    char character[21],current[128],assigned[20];
    if(!read_guest(NULL,component+0x20C,character,20))return 0;
    character[20]=0;
    const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx,bx=g_ebx,
        si=g_esi,di=g_edi,bp=g_ebp,seh=g_seh_ebp;
    const unsigned fp=g_fp_top;
    // XML1 EAD60 (node virtual+B0) returns node+8, the native name.
    // XML2 10B830 compares this name against each assigned power, then
    // checks the *held* input word, not the pressed-edge word at input+4.
    g_ecx=node+8;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00027B00u,sub_00027B00);
    text(g_eax,current);
    int held=0;
    for(unsigned slot=0;slot<4;++slot) {
        if(raven_power_binding_name(character,slot+5,assigned)&&!_stricmp(current,assigned)) {
            // XML1's own power button map (4,5,8,6), as read by E755E.
            uint32_t bit=MEM32(0x451A9C+slot*4)&31;
            held=(MEM32(input)&(1u<<bit))!=0;break;
        }
    }
    if(g_esp!=sp||g_fp_top!=fp){fputs("[RAVEN ENERGY ERROR] held input ABI\n",stderr);_Exit(4);}
    g_eax=ax;g_ecx=cx;g_edx=dx;g_ebx=bx;g_esi=si;g_edi=di;g_ebp=bp;g_seh_ebp=seh;
    return held;
}
uint32_t xml1_raven_held_destination(uint32_t actor,uint32_t input) {
    if(!xml1_raven_held_input(actor,input))return 0;
    /* XML2 10BE95 calls 36DE0 before accepting samepowerhold. It waits
     * until now > the actor's repeat deadline (698). XML1 maintains the
     * corresponding deadline at474: 3B1C4 sets it from move timing and
     * 4025E..402A1 expires it. Merely checking destination eligibility
     * allowed an early restart at startchaintime, starving later triggers.
     * Read the existing deadline; never modify native animation/clock state. */
    if(MEMF(actor+0x474)>0.0f) {
        const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
        const unsigned fp=g_fp_top;
        PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00066AB0u,sub_00066AB0);
        float now=(float)g_fp_stack[g_fp_top];g_fp_top=(g_fp_top+1u)&7u;
        if(g_esp!=sp||g_fp_top!=fp){fputs("[RAVEN ENERGY ERROR] held deadline ABI\n",stderr);_Exit(4);}
        g_eax=ax;g_ecx=cx;g_edx=dx;
        if(now<=MEMF(actor+0x474))return 0;
    }
    const char *destination=raven_native_held_chain(MEM32(actor+0x2F4));
    if(!destination||strlen(destination)>=128)return 0;
    const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx,bx=g_ebx,
        si=g_esi,di=g_edi,bp=g_ebp,seh=g_seh_ebp;
    const unsigned fp=g_fp_top;
    uint32_t candidate=0;
    g_esp-=144;memset((void*)XBOX_PTR(g_esp),0,144);
    uint32_t chain=g_esp;strcpy((char*)XBOX_PTR(chain+4),destination);
    g_ecx=chain;PUSH32(g_esp,chain+4);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x00027EF0u,sub_00027EF0);
    g_ecx=actor;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x0002E290u,sub_0002E290);
    if(g_eax) {
        g_ecx=g_eax;PUSH32(g_esp,0);PUSH32(g_esp,actor);PUSH32(g_esp,chain);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x000ED500u,sub_000ED500);
        candidate=g_eax;
        if(candidate) {
            const uint32_t target=MEM32(MEM32(candidate)+8),before=g_esp;
            g_ecx=candidate;PUSH32(g_esp,1);PUSH32(g_esp,actor);PUSH32(g_esp,0);
            RECOMP_ICALL_SAFE(target,before);
            if(!(g_eax&255))candidate=0;
        }
    }
    if(g_esp!=sp-144||g_fp_top!=fp){fputs("[RAVEN ENERGY ERROR] held destination ABI\n",stderr);_Exit(4);}
    g_esp=sp;g_eax=ax;g_ecx=cx;g_edx=dx;g_ebx=bx;g_esi=si;g_edi=di;g_ebp=bp;g_seh_ebp=seh;
    return candidate;
}
int xml1_raven_attack_parse(uint32_t event,uint32_t value) {
    if(!enabled())return 0;
    char operand[128];text(value,operand);
    return raven_native_attack_parse(event,operand);
}
void xml1_raven_attack_range(uint32_t event,uint32_t actor,uint32_t lower,uint32_t upper) {
    if(!enabled())return;
    int32_t lo,hi;
    if(raven_native_attack_range(read_guest,NULL,MEM32(0x4D7300),event,actor,&lo,&hi)) {
        MEM32(lower)=(uint32_t)lo;MEM32(upper)=(uint32_t)hi;
    }
}
int xml1_raven_attack_maxrange_parse(uint32_t event,uint32_t value) {
    if(!enabled())return 0;
    char operand[128];text(value,operand);
    return raven_native_attack_maxrange_parse(event,operand);
}
int32_t xml1_raven_attack_maxrange(uint32_t event,uint32_t actor,int32_t fallback) {
    if(!enabled())return fallback;
    return raven_native_attack_maxrange(read_guest,NULL,MEM32(0x4D7300),event,actor,fallback);
}
int32_t xml1_raven_energy_cost(uint32_t event,uint32_t actor,int32_t native_cost) {
    if(!enabled())return native_cost;
    return raven_native_energy_resolve(read_guest,NULL,MEM32(0x4D7300),event,actor,native_cost);
}
void xml1_raven_energy_observe(uint32_t event,uint32_t caller,uint32_t si,uint32_t di,uint32_t bp) {
    static unsigned count;
    if(!diagnostic()||count++>=64)return;
    fprintf(stderr,"[RAVEN ENERGY GETTER] event=%08X caller=%08X esi=%08X edi=%08X ebp=%08X\n",
        event,caller,si,di,bp);
}
double xml1_raven_energy_query(uint32_t event,uint32_t actor,double native_cost) {
    /* Some event subclasses return float costs. Preserve the original x87
     * result exactly unless this event has an imported bound operand. */
    if(!enabled()||!raven_native_energy_bound(event))return native_cost;
    return (double)xml1_raven_energy_cost(event,actor,0);
}
void xml1_raven_energy_gate(uint32_t actor,double available,double required) {
    if(!diagnostic())return;
    fprintf(stderr,"[RAVEN ENERGY GATE] actor=%08X available=%.9g required=%.9g\n",actor,available,required);
}

int xml1_raven_explosion_parse(uint32_t event,uint32_t field,uint32_t value) {
    if(!enabled())return 0;
    char key[128],operand[128];text(field,key);
    int fire=!_stricmp(key,"fire_event");
    if(!fire&&_stricmp(key,"explodedamage")&&_stricmp(key,"explodevictimeventtag")&&
       _stricmp(key,"explodevictimeventtag1")&&_stricmp(key,"explodevictimeventtag2"))return 0;
    text(value,operand);
    return fire?raven_native_projectile_fire_parse(event,operand):
        raven_native_explosion_parse(event,key,operand);
}
