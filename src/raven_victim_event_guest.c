#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "raven_victim_event_guest.h"
#include "raven_powerup_guest.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

static void balanced(uint32_t sp) {
    if(g_esp!=sp){fputs("[VICTIM EVENT ERROR] Native stack mismatch\n",stderr);_Exit(4);}
}
int raven_secondary_victim_attribute(uint32_t event,const char *key,const char *value) {
    if(_stricmp(key,"victimeventtag2"))return 0;
    /* XML2 EB4EE stores atoi(value)'s low byte. XML1's attack payload has
       unused padding at29 between its byte28 and dword2C. Preserve its size
       and all existing fields; guarded native reset/copy sites own this byte. */
    MEM8(MEM32(event+0x14)+0x29)=(uint8_t)strtol(value,NULL,10);
    if(getenv("XML1_TRACE_HARMING"))fprintf(stderr,"[SECOND VICTIM PARSE] event=%08X payload=%08X tag=%u\n",event,MEM32(event+0x14),MEM8(MEM32(event+0x14)+0x29));
    return 1;
}
void raven_secondary_victim_dispatch(uint32_t record,uint32_t target_handle) {
    const uint8_t tag=MEM8(record+0x56);
    if(!tag)return;
    if(getenv("XML1_TRACE_HARMING"))fprintf(stderr,"[SECOND VICTIM ATTEMPT] record=%08X tag=%u target_handle=%08X\n",record,tag,target_handle);
    const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
    uint32_t target=0,source=0,node=0;
    // The first victim callback may kill/remove its target. Resolve the
    // pre-callback generation again; never reuse the old actor pointer.
    if(raven_xml1_guest_entity_actor(NULL,target_handle,&target)!=RAVEN_FOUND)goto done;
    g_ecx=record;PUSH32(g_esp,0x92386);
    RECOMP_ABI_CALL(0x0001CD30u,sub_0001CD30);balanced(sp);
    if(!(g_eax&255))goto done;
    PUSH32(g_esp,MEM32(record));PUSH32(g_esp,0x92386);
    RECOMP_ABI_CALL(0x000293F0u,sub_000293F0);balanced(sp-4);
    source=g_eax;g_esp=sp;if(!source)goto done;
    g_ecx=source;PUSH32(g_esp,0);PUSH32(g_esp,record+0x4C);PUSH32(g_esp,0x92386);
    RECOMP_ABI_CALL(0x0002E290u,sub_0002E290);balanced(sp-8);
    // Getter consumes no arguments; ED6E0 consumes the two queued operands.
    g_ecx=g_eax;PUSH32(g_esp,0x92386);
    RECOMP_ABI_CALL(0x000ED6E0u,sub_000ED6E0);balanced(sp);
    node=g_eax;if(!node)goto done;
    if(getenv("XML1_TRACE_HARMING"))
        fprintf(stderr,"[SECOND VICTIM EVENT] tag=%u source=%08X target=%08X node=%08X\n",tag,source,target,node);
    // Same native tagged-event method and source/recipient order as92376.
    g_ecx=node;PUSH32(g_esp,source);PUSH32(g_esp,target);PUSH32(g_esp,tag);PUSH32(g_esp,0x92386);
    RECOMP_ICALL_SAFE(MEM32(MEM32(node)+0x14),sp);balanced(sp);
done:
    g_esp=sp;g_eax=ax;g_ecx=cx;g_edx=dx;
}

/* XML2 A9870/A98C0 store and restore a projectile-owned base damage record
 * (62310/624B0 -> 62140). XML1 96810/96870 retain only scalar damage fields,
 * dropping callback tags and the originating move. Preserve just that missing
 * context here, without changing native entity sizes or damage calculation.
 * The native entity manager has 512 slots; retain the full generation and
 * address, not just its index. No guest record/actor pointers are retained.
 */
typedef struct projectile_victim_context {
    uint32_t projectile, handle, source, move, style;
    uint8_t primary, secondary, event_index;
} projectile_victim_context;
static projectile_victim_context projectile_victims[512];
/* XML2 A9910 exports a separate explosion record from payload+40, while
 * A98C0 exports the direct record from+8. XML1 96910/96960 only retain
 * explosion scalars. Keep the missing callback context independent: a
 * direct impact and its explosion may name different victim events. */
static projectile_victim_context projectile_explosion_victims[512];
typedef struct projectile_death_context {
    uint32_t projectile,handle;
    uint8_t tag,ground,fired;
} projectile_death_context;
static projectile_death_context projectile_deaths[512];
static struct {uint32_t event;float position[3];} death_spawn;

/* These callbacks enter in the middle of native functions. Preserve all
 * registers, including the x87 stack, across the additional native calls. */
typedef struct death_registers {
    uint32_t sp,ax,cx,dx,bx,si,di,bp,seh;
    unsigned fp;
    double stack[8];
} death_registers;
static death_registers death_save(void) {
    death_registers r={g_esp,g_eax,g_ecx,g_edx,g_ebx,g_esi,g_edi,g_ebp,g_seh_ebp,g_fp_top,{0}};
    memcpy(r.stack,g_fp_stack,sizeof(r.stack));return r;
}
static void death_restore(const death_registers *r) {
    g_esp=r->sp;g_eax=r->ax;g_ecx=r->cx;g_edx=r->dx;g_ebx=r->bx;
    g_esi=r->si;g_edi=r->di;g_ebp=r->bp;g_seh_ebp=r->seh;
    g_fp_top=r->fp;memcpy(g_fp_stack,r->stack,sizeof(r->stack));
}
static uint32_t death_call(uint32_t object,uint32_t fn,unsigned n,const uint32_t *args) {
    uint32_t sp=g_esp;
    for(unsigned i=n;i;--i)PUSH32(g_esp,args[i-1]);
    g_ecx=object;PUSH32(g_esp,0);RECOMP_ICALL_SAFE(fn,sp);balanced(sp);return g_eax;
}
static uint32_t death_virtual(uint32_t object,uint32_t offset,unsigned n,const uint32_t *args) {
    return death_call(object,MEM32(MEM32(object)+offset),n,args);
}
typedef struct harm_pulse_context {uint32_t actor,handle;float period;} harm_pulse_context;
static harm_pulse_context harm_pulses[512];
static uint32_t harm_pulse_event;
static uint32_t harm_pulse_record;
int raven_harm_pulse_accept_zero(uint32_t record) {
    // A pulse can carry only a victim event (Inferno applies its burning
    // powerup this way). XML1 93BE0 otherwise drops zero damage before the
    // native delayed hit queue. Keep the exception scoped to this dispatch,
    // never manufacture damage or admit unrelated/negative records.
    return record && record==harm_pulse_record && MEM16(record+8)==0 &&
        (MEM8(record+0x55)||MEM8(record+0x56));
}
static void harm_pulse_schedule(uint32_t actor,float delay) {
    uint32_t bits;memcpy(&bits,&delay,4);
    uint32_t args[]={harm_pulse_event,bits};death_call(actor,0x277E0,2,args);
}
static void harm_pulse_callback(void) {
    const uint32_t sp=g_esp,actor=MEM32(sp+4);
    if(actor) {
        const uint32_t handle=MEM32(actor+0x1C);
        harm_pulse_context context=harm_pulses[handle&511];
        if(context.actor==actor&&context.handle==handle&&context.period>0) {
            // XML2's smart pulse checks whether the trigger is on before
            // invoking its existing activation/radius/box damage consumer.
            // XML1 represents that on/off state with bit19 (46C83).
            if(MEM32(actor+4)&0x80000) {
                uint32_t recipient=0,previous_record=harm_pulse_record;
                unsigned char original_record[0x64];
                memcpy(original_record,(const void*)XBOX_PTR(actor+0x2CC),sizeof(original_record));
                // Each pulse is a new attack, not another contact from the
                // same projectile. XML2 47CF6 allocates its hit ID here;
                // XML1 already provides the allocator (59CE0/+1C, 2CA10).
                uint32_t manager=death_call(0,0x59CE0,0,NULL);
                MEM32(actor+0x310)=death_virtual(manager,0x1C,0,NULL);
                harm_pulse_record=actor+0x2CC;
                uint32_t activated=death_call(actor,0x46CC0,1,&recipient);
                harm_pulse_record=previous_record;
                if(harm_pulses[handle&511].actor==actor && harm_pulses[handle&511].handle==handle)
                    memcpy((void*)XBOX_PTR(actor+0x2CC),original_record,sizeof(original_record));
                if(getenv("XML1_TRACE_HARMING"))fprintf(stderr,"[HARM PULSE] actor=%08X handle=%08X period=%g tags=%u,%u activated=%u harmflags=%08X trigger=%02X,%02X,%02X,%02X cooldown=%g,%g\n",actor,handle,context.period,MEM8(actor+0x321),MEM8(actor+0x322),activated&255,MEM32(actor+0x330),MEM8(actor+0xCA),MEM8(actor+0xCB),MEM8(actor+0xCC),MEM8(actor+0xCD),MEMF(actor+0xB0),MEMF(actor+0xB4));
            }
            // Native queue entries carry the complete entity handle and
            // discard callbacks after retirement; no wall clock is used.
            if(harm_pulses[handle&511].handle==handle)harm_pulse_schedule(actor,context.period);
        }
    }
    balanced(sp);g_esp=sp+12;
}
int raven_harm_pulse_is_code(uint32_t address) {return harm_pulse_event&&address==harm_pulse_event+12;}
void (*raven_harm_pulse_lookup(uint32_t address))(void) {
    return raven_harm_pulse_is_code(address)?harm_pulse_callback:NULL;
}
void raven_harm_pulse_retire(uint32_t actor) {
    harm_pulse_context *p=&harm_pulses[MEM32(actor+0x1C)&511];
    if(p->actor==actor)memset(p,0,sizeof(*p));
}
void raven_harm_pulse_parse(uint32_t actor,uint32_t attributes) {
    death_registers r=death_save();uint32_t handle=MEM32(actor+0x1C);
    harm_pulse_context *p=&harm_pulses[handle&511];
    *p=(harm_pulse_context){actor,handle,0};
    g_esp-=64;uint32_t local=g_esp;
    memset((void*)XBOX_PTR(local),0,64);
    strcpy((char*)XBOX_PTR(local+8),"smartpulserate");
    uint32_t args[]={local+8,local};
    death_virtual(attributes,0x1C,2,args);
    float period=MEMF(local);
    if(isfinite(period)&&period>0) {
        p->period=period;
        if(!harm_pulse_event) {
            // Native CEvent object: shared descriptor, two-method vtable,
            // and a registered executable token. It lives for the process.
            PUSH32(g_esp,0x2BC90);PUSH32(g_esp,14);PUSH32(g_esp,16);PUSH32(g_esp,0);
            RECOMP_ABI_CALL(0x123490u,sub_00123490);g_esp+=12;balanced(local);
            if(!g_eax){fputs("[HARM PULSE ERROR] event allocation failed\n",stderr);_Exit(4);}
            harm_pulse_event=g_eax;MEM32(harm_pulse_event)=harm_pulse_event+4;
            MEM32(harm_pulse_event+4)=harm_pulse_event+12;MEM32(harm_pulse_event+8)=0x27070;
        }
        MEMF(local)=0.5f;strcpy((char*)XBOX_PTR(local+8),"initialpulsedelay");
        death_virtual(attributes,0x1C,2,args);
        float delay=MEMF(local);
        if(!isfinite(delay)||delay<0)delay=0.5f;
        harm_pulse_schedule(actor,delay);
        if(getenv("XML1_TRACE_HARMING"))fprintf(stderr,"[HARM PULSE PARSE] actor=%08X handle=%08X period=%g delay=%g fx=%08X fx_flags=%02X\n",actor,handle,period,delay,MEM32(actor+0xB8),MEM8(actor+0xC9));
    }
    balanced(local);death_restore(&r);
}
void raven_spawn_harm_context(uint32_t spawned,uint32_t source,uint32_t record) {
    if(!spawned||!source||!record||(!MEM8(record+0x55)&&!MEM8(record+0x56)))return;
    death_registers r=death_save();
    // XML2 5FD44..5FD74 forwards the original attack to harm entities.
    // XML1 has the same inline damage-record consumer at entity+2CC,
    // but 5A090 only initializes projectile records. Use native type bits
    // to include derived harm entities, without touching other spawns.
    uint32_t type=death_virtual(spawned,0,0,NULL);
    uint32_t bit=MEM32(0x48B988)+0x21;
    if(type&&(MEM32(type+0x14+(bit/32)*4)&(1u<<(bit&31)))) {
        death_call(spawned+0x2CC,0x2B720,1,&record);
        // The added record must belong to the attack's actual source team.
        // XML2 initializes that ownership before its type-specific branches.
        uint32_t team=death_call(source,0x26E60,0,NULL);
        death_call(spawned,0x2E320,1,&team);
        if(getenv("XML1_TRACE_HARMING"))fprintf(stderr,"[SPAWN HARM CONTEXT] spawned=%08X source=%08X team=%u tags=%u,%u move=%08X flags=%08X fx=%08X fx_flags=%02X\n",spawned,source,team,MEM8(record+0x55),MEM8(record+0x56),MEM32(record+0x4C),MEM32(spawned+4),MEM32(spawned+0xB8),MEM8(spawned+0xC9));
    }
    balanced(r.sp);death_restore(&r);
}
void raven_projectile_death_parse(uint32_t projectile,uint32_t attributes) {
    // XML2 AB913 and AB594 read these optional fields. No native XML1
    // fields are repurposed; each entry is bound to a complete generation.
    uint32_t handle=MEM32(projectile+0x1C);
    if(!handle||!attributes)return;
    death_registers r=death_save();
    projectile_death_context *d=&projectile_deaths[handle&511];
    *d=(projectile_death_context){projectile,handle,0,0,0};
    g_esp-=64;uint32_t local=g_esp;
    memset((void*)XBOX_PTR(local),0,64);
    strcpy((char*)XBOX_PTR(local+8),"deathcombatevent");
    uint32_t args[]={local+8,local};
    if(death_virtual(attributes,0x18,2,args)&255)d->tag=MEM8(local);
    MEM32(local)=0;strcpy((char*)XBOX_PTR(local+8),"grounddeathevent");
    if(death_virtual(attributes,0x20,2,args)&255)d->ground=MEM8(local)&1;
    if(d->tag&&getenv("XML1_TRACE_HARMING"))fprintf(stderr,"[PROJECTILE DEATH PARSE] actor=%08X handle=%08X tag=%u ground=%u\n",projectile,handle,d->tag,d->ground);
    balanced(local);death_restore(&r);
}
static void death_ground(float position[3]) {
    uint32_t sp=g_esp;
    // Original XML2 uses the base 'ent' mask, not 'physent'. XML1's
    // corresponding type is registered at356410, singleton48D8F8.
    uint32_t pool=death_call(0,0xA28F0,0,NULL);
    unsigned free_slot=0;
    while(free_slot<3&&MEM8(pool+free_slot*0x304+0x50))++free_slot;
    if(free_slot==3)return; // Retain the death position if queries are busy.
    g_esp-=64;uint32_t local=g_esp;
    memset((void*)XBOX_PTR(local),0,64);
    uint32_t ctor[]={0x48D8F8,local+4};
    death_call(local,0xA2A70,2,ctor);uint32_t query=MEM32(local);
    for(unsigned i=0;i<3;++i) {
        MEMF(local+16+i*4)=position[i];MEMF(local+28+i*4)=position[i];
        MEMF(local+40+i*4)=0.2f;
    }
    MEMF(local+24)+=10.0f;MEMF(local+36)-=80.0f;
    uint32_t flags[]={1,1};death_virtual(query,0x40,2,flags);
    // XML1 A1770 takes an additional query flag (1 in native34A23),
    // unlike XML2 BA090's three-argument interface.
    uint32_t sweep[]={local+16,local+28,local+40,1};
    death_virtual(query,0x74,4,sweep);
    if(death_virtual(query,0x28,0,NULL)&255) {
        uint32_t out=local+8;death_virtual(query,0x2C,1,&out);
        if(MEM32(out)) {
            uint32_t hit=death_call(out,0xA07E0,0,NULL);
            memcpy(position,(const void*)XBOX_PTR(hit),12);
        }
    }
    death_call(local,0xA2AC0,0,NULL);balanced(local);g_esp=sp;
}
int raven_projectile_death_position(uint32_t event,float position[3]) {
    if(!event||death_spawn.event!=event)return 0;
    memcpy(position,death_spawn.position,12);return 1;
}
void raven_projectile_death_dispatch(uint32_t projectile) {
    uint32_t handle=MEM32(projectile+0x1C);
    projectile_death_context *d=&projectile_deaths[handle&511];
    const projectile_victim_context *c=&projectile_victims[handle&511];
    if(!handle||d->projectile!=projectile||d->handle!=handle||!d->tag||d->fired)return;
    d->fired=1; // Set before callbacks; reentrant death must not fire twice.
    if(c->projectile!=projectile||c->handle!=handle)return;
    uint32_t source=0;
    if(raven_xml1_guest_entity_actor(NULL,c->source,&source)!=RAVEN_FOUND)return;
    death_registers r=death_save();
    g_esp-=16;uint32_t local=g_esp;
    MEM32(local)=c->move;MEM32(local+4)=c->style;
    uint32_t fighter=death_call(source,0x2E290,0,NULL);
    uint32_t lookup[]={local,0};
    uint32_t node=fighter?death_call(fighter,0xED6E0,2,lookup):0;
    if(node) {
        uint32_t tag=d->tag,event=death_virtual(node,0x1C,1,&tag);
        if(event) {
            uint32_t previous_event=death_spawn.event;
            float previous_position[3],position[3];
            memcpy(previous_position,death_spawn.position,12);
            memcpy(position,(const void*)XBOX_PTR(projectile+0x20),12);
            if(d->ground)death_ground(position);
            death_spawn.event=event;memcpy(death_spawn.position,position,12);
            if(getenv("XML1_TRACE_HARMING"))fprintf(stderr,"[PROJECTILE DEATH EVENT] actor=%08X source=%08X node=%08X event=%08X tag=%u position=%g,%g,%g\n",projectile,source,node,event,tag,position[0],position[1],position[2]);
            uint32_t dispatch[]={tag,source,source};death_virtual(node,0x14,3,dispatch);
            death_spawn.event=previous_event;memcpy(death_spawn.position,previous_position,12);
        }
    }
    balanced(local);death_restore(&r);
}
void raven_projectile_victim_store(uint32_t projectile,uint32_t record) {
    uint32_t handle=MEM32(projectile+0x1C);
    if(!handle)return;
    projectile_victim_context *c=&projectile_victims[handle&511];
    memset(c,0,sizeof(*c));
    // Death events also need the originating move, even without hit tags.
    c->projectile=projectile;c->handle=handle;c->source=MEM32(record);
    c->move=MEM32(record+0x4C);c->style=MEM32(record+0x50);c->event_index=MEM8(record+0x54);c->primary=MEM8(record+0x55);c->secondary=MEM8(record+0x56);
}
void raven_projectile_victim_restore(uint32_t projectile,uint32_t record) {
    uint32_t handle=MEM32(projectile+0x1C);
    if(!handle)return;
    const projectile_victim_context *c=&projectile_victims[handle&511];
    // Native restore may substitute the projectile if its owner has died.
    // Never deliver the old owner's callbacks through that substitute.
    if(c->projectile!=projectile||c->handle!=handle||c->source!=MEM32(record))return;
    // Untagged context is retained for death dispatch only. Leave ordinary
    // XML1 hit-record export unchanged when there are no victim callbacks.
    if(!c->primary&&!c->secondary)return;
    MEM32(record+0x4C)=c->move;MEM32(record+0x50)=c->style;MEM8(record+0x54)=c->event_index;
    MEM8(record+0x55)=c->primary;MEM8(record+0x56)=c->secondary;
}
void raven_projectile_explosion_victim_store(uint32_t projectile,uint32_t record) {
    uint32_t handle=MEM32(projectile+0x1C);
    if(!handle)return;
    projectile_victim_context *c=&projectile_explosion_victims[handle&511];
    memset(c,0,sizeof(*c));
    // Always replace the prior generation, including untagged stores.
    c->projectile=projectile;c->handle=handle;c->source=MEM32(record);
    c->move=MEM32(record+0x4C);c->style=MEM32(record+0x50);c->event_index=MEM8(record+0x54);c->primary=MEM8(record+0x55);c->secondary=MEM8(record+0x56);
}
void raven_projectile_explosion_victim_restore(uint32_t projectile,uint32_t record) {
    uint32_t handle=MEM32(projectile+0x1C);
    if(!handle)return;
    const projectile_victim_context *c=&projectile_explosion_victims[handle&511];
    // Native restore may substitute the projectile if its owner has died.
    // Never deliver the old owner's callbacks through that substitute.
    if(c->projectile!=projectile||c->handle!=handle||c->source!=MEM32(record))return;
    // Leave native explosion export unchanged without victim callbacks.
    if(!c->primary&&!c->secondary)return;
    MEM32(record+0x4C)=c->move;MEM32(record+0x50)=c->style;MEM8(record+0x54)=c->event_index;
    MEM8(record+0x55)=c->primary;MEM8(record+0x56)=c->secondary;
    if(getenv("XML1_TRACE_HARMING"))fprintf(stderr,"[EXPLOSION VICTIM EXPORT] projectile=%08X record=%08X source=%08X move=%08X tag=%u tag2=%u damage=%d id=%u\n",projectile,record,c->source,c->move,c->primary,c->secondary,SMEM16(record+8),MEM32(record+0x44));
}
void raven_projectile_victim_retire(uint32_t projectile) {
    // The base projectile destructor runs before storage is freed/reused.
    uint32_t handle=MEM32(projectile+0x1C);
    projectile_victim_context *c=&projectile_victims[handle&511];
    if(c->projectile==projectile)memset(c,0,sizeof(*c));
    projectile_victim_context *explosion=&projectile_explosion_victims[handle&511];
    if(explosion->projectile==projectile)memset(explosion,0,sizeof(*explosion));
    projectile_death_context *d=&projectile_deaths[handle&511];
    if(d->projectile==projectile)memset(d,0,sizeof(*d));
}

/* Private native regression fixture: exercise the real delayed-hit admission
 * and record copy, with a negative delay so no world event is scheduled. */
int raven_harm_pulse_queue_fixture(uint32_t base) {
    death_registers saved=death_save();
    const uint32_t prior=harm_pulse_record,actor=base,record=base+0x400;
    unsigned char pool_bytes[0xD1C];
    memcpy(pool_bytes,(const void*)XBOX_PTR(0x4BFD30),sizeof(pool_bytes));
    memset((void*)XBOX_PTR(base),0,0x600);
    MEM32(actor+0x1C)=0x201;MEM32(record)=0x202;
    MEM32(record+0x4C)=0x123456;MEM8(record+0x55)=100;MEM8(record+0x56)=101;
    death_call(0x4BFD30,0x93BA0,0,NULL);
    const uint32_t args[]={record,0xBF800000}; // delay -1: copy only
    int result=0;
    harm_pulse_record=0;
    if((death_call(actor,0x93BE0,2,args)&255)||MEM32(actor+0x2A4))result=1;
    harm_pulse_record=record;
    if(!result && (!(death_call(actor,0x93BE0,2,args)&255)||!MEM32(actor+0x2A4)))result=2;
    uint32_t queued=MEM32(actor+0x2A4);
    if(!result && (MEM16(queued+8)||MEM32(queued)!=0x202||MEM32(queued+0x4C)!=0x123456||MEM8(queued+0x55)!=100||MEM8(queued+0x56)!=101))result=3;
    if(!result && ((death_call(actor,0x93BE0,2,args)&255)||MEM32(actor+0x2A4)!=queued))result=4;
    MEM32(actor+0x2A4)=0;
    MEM8(record+0x55)=MEM8(record+0x56)=0;
    if(!result && (death_call(actor,0x93BE0,2,args)&255))result=5;
    MEM8(record+0x55)=100;MEM16(record+8)=0xFFFF;
    if(!result && (death_call(actor,0x93BE0,2,args)&255))result=6;
    MEM16(record+8)=0;harm_pulse_record=record+0x100;
    if(!result && (death_call(actor,0x93BE0,2,args)&255))result=7;
    harm_pulse_record=record;MEM32(0x4C0A48)=32;
    if(!result && (death_call(actor,0x93BE0,2,args)&255))result=8;
    death_call(0x4BFD30,0x93BA0,0,NULL);
    harm_pulse_record=0;MEM16(record+8)=7;
    if(!result && (!(death_call(actor,0x93BE0,2,args)&255)||MEM16(MEM32(actor+0x2A4)+8)!=7))result=9;
    memcpy((void*)XBOX_PTR(0x4BFD30),pool_bytes,sizeof(pool_bytes));
    harm_pulse_record=prior;death_restore(&saved);
    if(result)fprintf(stderr,"FAIL pulse delayed-hit admission fixture: %d\n",result);
    else puts("PASS native pulse hit queue: zero-damage callback copy; ordinary zero/negative/unrelated rejection; pending/capacity limits; positive damage unchanged");
    return result;
}

/* The new export applies only to an explicitly authored explosion record.
 * Legacy XML1 spawns pass their direct record as the explosion seed too;
 * importing those tags would change old powers. Nested synchronous spawns
 * restore the previous scope after their own native dispatch. */
static uint32_t explosion_dispatch_record;
uint32_t raven_projectile_explosion_scope(uint32_t record) {
    uint32_t previous=explosion_dispatch_record;explosion_dispatch_record=record;return previous;
}
void raven_projectile_explosion_native_store(uint32_t projectile,uint32_t record) {
    if(record&&record==explosion_dispatch_record)raven_projectile_explosion_victim_store(projectile,record);
    else {
        uint32_t handle=MEM32(projectile+0x1C);
        memset(&projectile_explosion_victims[handle&511],0,sizeof(projectile_explosion_victims[0]));
    }
}

extern uint8_t raven_native_projectile_fire_tag(uint32_t event);
void raven_projectile_fire_event(uint32_t event,uint32_t actor,uint32_t record) {
    const uint8_t tag=raven_native_projectile_fire_tag(event);
    if(!tag||!actor||!record)return;
    death_registers saved=death_save();
    // XML2 F19B2 uses the actor's fight node. XML1 stores fight nodes in
    // actor+2DC; resolve the active move/style from this shot's native record.
    const uint32_t lookup[]={record+0x4C,0};
    uint32_t node=death_call(actor+0x2DC,0xED6E0,2,lookup);
    if(node) {
        if(getenv("XML1_TRACE_HARMING")) {
            uint32_t tagged_tag=tag;
            uint32_t tagged_event=death_virtual(node,0x1C,1,&tagged_tag);
            uint32_t powerup_tag=100;
            uint32_t powerup_event=death_virtual(node,0x1C,1,&powerup_tag);
            fprintf(stderr,"[PROJECTILE FIRE TAG] tag=%u node=%08X event=%08X table=%08X tag100=%08X\n",
                tag,node,tagged_event,tagged_event?MEM32(tagged_event):0,powerup_event);
        }
        // XML2 F19D9 passes the firing context as the third argument. The
        // parsed sound trigger belongs to that move, not a self-target hit.
        const uint32_t args[]={tag,actor,record};
        if(getenv("XML1_TRACE_HARMING"))fprintf(stderr,"[PROJECTILE FIRE EVENT] tag=%u event=%08X actor=%08X record=%08X move=%08X node=%08X\n",tag,event,actor,record,MEM32(record+0x4C),node);
        death_virtual(node,0x14,3,args);
    } else if(getenv("XML1_TRACE_HARMING"))
        fprintf(stderr,"[PROJECTILE FIRE EVENT MISSING NODE] tag=%u event=%08X actor=%08X record=%08X move=%08X\n",tag,event,actor,record,MEM32(record+0x4C));
    death_restore(&saved);
}
