#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "engine/actors/raven_leader_event_guest.h"
#include "engine/actors/raven_leader_power.h"
#include "engine/actors/raven_leader_stream.h"
#include "engine/powers/raven_powerup_guest.h"
#include "engine/actors/raven_leader_actor.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/* The existing XML1 entity manager has512 slots. Retain complete generations,
 * as the other imported entity callbacks do; never key by address alone. */
typedef struct leader_event_state {
    uint32_t actor,handle,serial,scope;
    uint8_t selection,armed,consumed;
} leader_event_state;
static leader_event_state states[512];
static raven_leader_zone_cache zone_cache;
static uint32_t descriptor,next_serial;
static raven_lookup (*attach)(uint32_t,const char *,uint32_t)=raven_xml1_shared_powerup_attach;
typedef struct saved_regs {
    uint32_t sp,ax,cx,dx,bx,si,di,bp,seh;
    unsigned fp;
    double floats[8];
} saved_regs;
static saved_regs save_regs(void) {
    saved_regs r={g_esp,g_eax,g_ecx,g_edx,g_ebx,g_esi,g_edi,g_ebp,g_seh_ebp,g_fp_top,{0}};
    memcpy(r.floats,g_fp_stack,sizeof(r.floats));return r;
}
static void restore_regs(const saved_regs *r) {
    g_esp=r->sp;g_eax=r->ax;g_ecx=r->cx;g_edx=r->dx;g_ebx=r->bx;
    g_esi=r->si;g_edi=r->di;g_ebp=r->bp;g_seh_ebp=r->seh;
    g_fp_top=r->fp;memcpy(g_fp_stack,r->floats,sizeof(r->floats));
}
static void balanced(uint32_t sp) {
    if(g_esp!=sp){fputs("[LEADER EVENT ERROR] Native ABI mismatch\n",stderr);_Exit(4);}
}
static void dispatch(void) {
    const uint32_t sp=g_esp,actor=MEM32(sp+4),payload=MEM32(sp+8);
    if(actor&&payload) {
        uint32_t handle=MEM32(actor+0x1c);
        leader_event_state *s=&states[handle&511];
        if(s->actor==actor&&s->handle==handle&&s->armed&&s->serial==MEM32(payload)) {
            uint8_t selection=s->selection;uint32_t scope=s->scope;
            /* Consume before native attachment, which can invoke callbacks.
             * Like the original OneEvent, a failed application is not retried
             * every frame. A caller must explicitly cancel to re-arm it. */
            s->armed=0;s->consumed=1;
            attach(handle,raven_leader_power_name(selection),scope);
        }
    }
    g_esp=sp+12; /* scheduler274F0 invokes thiscall(actor,payload) */
}
int xml1_leader_event_is_code(uint32_t address) {return descriptor&&address==descriptor+16;}
void (*xml1_leader_event_lookup(uint32_t address))(void) {
    return xml1_leader_event_is_code(address)?dispatch:NULL;
}
static int prepare_descriptor(void) {
    if(descriptor)return 1;
    descriptor=xbox_HeapAlloc(20,16);
    if(!descriptor)return 0;
    memset((void*)XBOX_PTR(descriptor),0,20);
    MEM32(descriptor)=descriptor+8;
    MEM32(descriptor+8)=descriptor+16;
    MEM32(descriptor+12)=0x26d00;
    /* Process-lifetime descriptor:274C0 copies its pointer, not the object.
     * 26D00 copies our serial into the queued record's four-byte payload.
     * Unlike a timestamp, the serial distinguishes cancellation/re-arm at
     * equal game time. Refuse wrap rather than alias an old queued event. */
    return 1;
}
int xml1_leader_event_schedule(uint32_t handle,uint8_t selection,uint32_t scope) {
    uint32_t actor;
    if(selection>=14||raven_xml1_guest_entity_actor(NULL,handle,&actor)!=RAVEN_FOUND)return 0;
    leader_event_state *s=&states[handle&511];
    if(s->actor==actor&&s->handle==handle&&(s->armed||s->consumed))return 1;
    saved_regs r=save_regs();int result=0;
    PUSH32(g_esp,0);RECOMP_ABI_CALL(0x000AA4A0u,sub_000AA4A0);balanced(r.sp);
    /* AA0F0 has no full-pool check before taking its free-list head. */
    if(MEM32(g_eax+4+0x5110)>=1024||MEM32(g_eax+4+0x7118)>=1024||
       next_serial==UINT32_MAX||!prepare_descriptor())goto done;
    *s=(leader_event_state){actor,handle,++next_serial,scope,selection,1,0};
    MEM32(descriptor+4)=s->serial;
    g_ecx=actor;PUSH32(g_esp,0);PUSH32(g_esp,descriptor);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x000277E0u,sub_000277E0);balanced(r.sp);result=1;
done:
    restore_regs(&r);return result;
}
void xml1_leader_event_cancel(uint32_t handle) {
    leader_event_state *s=&states[handle&511];
    if(s->handle==handle)memset(s,0,sizeof(*s));
}
int xml1_leader_event_restore(uint32_t handle,uint8_t selection,uint32_t scope) {
    uint32_t actor;
    if(selection>=14||raven_xml1_guest_entity_actor(NULL,handle,&actor)!=RAVEN_FOUND)return 0;
    leader_event_state *s=&states[handle&511];
    if(s->actor==actor&&s->handle==handle) {
        if(s->armed) {
            /* Map6C520/6C560 restores directly after construction, before
             * the next scheduler tick. Replace the choice in the existing
             * event rather than queueing a second buff or rolling RNG again. */
            s->selection=selection;s->scope=scope;return 1;
        }
        if(s->consumed)return s->selection==selection&&s->scope==scope;
    }
    return xml1_leader_event_schedule(handle,selection,scope);
}
void xml1_leader_event_retire_actor(uint32_t actor) {
    /* Construction can precede handle assignment, and final destruction runs
     * after the base destructor. Do not dereference a possibly cleared handle.
     * Match retained addresses instead; old queued serials then fail dispatch
     * even if the allocator immediately reuses this actor's memory. */
    if(!actor)return;
    for(unsigned i=0;i<512;++i)
        if(states[i].actor==actor)memset(&states[i],0,sizeof(states[i]));
}
void xml1_leader_event_reset(void) {
    memset(states,0,sizeof(states)); /* serials remain unique across reset */
}
void xml1_leader_zone_bind(uint32_t native_base) {
    /* Native83370 owns the allocation;83090 replaces even a same-address
     * cache directly. Both boundaries discard all prior adjunct identities. */
    raven_leader_cache_bind(&zone_cache,native_base);
}
void xml1_leader_zone_reset(uint32_t native_snapshot) {
    raven_leader_cache_reset_zone(&zone_cache,native_snapshot);
}
void xml1_leader_zone_capture(uint32_t actor,uint32_t native_record) {
    /* A reused record may now hold a non-leader or a failed native capture.
     * Clear it first, without touching the native five-byte field stream. */
    if(!raven_leader_cache_forget(&zone_cache,native_record)||!actor)return;
    uint32_t handle=MEM32(actor+0x1c);
    const leader_event_state *s=&states[handle&511];
    if(s->actor==actor&&s->handle==handle&&(s->armed||s->consumed))
        raven_leader_cache_capture(&zone_cache,native_record,s->selection);
}
int xml1_leader_zone_selection(uint32_t native_record,uint8_t *selection) {
    return raven_leader_cache_get(&zone_cache,native_record,selection);
}
static void zone_stream(uint32_t stream,uint32_t native_base,int writing) {
    /* Match the existing native stream's bounded payload/cursor convention.
     * Optional bytes follow the complete native map block, never an actor's
     * fixed record. The load's830DA binding precedes this read, including for
     * legacy saves whose next bytes are the following native section marker. */
    if(!native_base||zone_cache.native_base!=native_base||stream<0x10000u||
       stream>0x08000000u-0x2fc04u)goto invalid;
    uint32_t cursor=MEM32(stream+0x2fc00);
    if(cursor<stream||cursor-stream>0x2fc00u)goto invalid;
    size_t room=0x2fc00u-(cursor-stream);
    int length=writing?raven_leader_stream_write(&zone_cache,(void*)XBOX_PTR(cursor),room):
        raven_leader_stream_read(&zone_cache,(const void*)XBOX_PTR(cursor),room);
    if(length<0)goto invalid;
    MEM32(stream+0x2fc00)=cursor+(uint32_t)length;return;
invalid:
    fputs("[LEADER SAVE ERROR] Invalid native owner, stream or leader section\n",stderr);_Exit(4);
}
void xml1_leader_zone_save(uint32_t stream,uint32_t native_base) {zone_stream(stream,native_base,1);}
void xml1_leader_zone_load(uint32_t stream,uint32_t native_base) {zone_stream(stream,native_base,0);}

static unsigned fixture_calls;
static uint32_t fixture_scope,fixture_handle;
static const char *fixture_name;
static raven_lookup fixture_attach(uint32_t handle,const char *name,uint32_t scope) {
    ++fixture_calls;fixture_handle=handle;fixture_name=name;fixture_scope=scope;return RAVEN_FOUND;
}
static void fixture_tick(float now) {
    uint32_t bits,sp=g_esp;memcpy(&bits,&now,4);
    g_ecx=0x4c9a88;PUSH32(g_esp,bits);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x000AA240u,sub_000AA240);balanced(sp);
}
int raven_shared_leader_native_fixture(int (*body)(void *),void *context);
typedef struct actor_fixture_context {uint32_t actor,scratch;float now;} actor_fixture_context;
static int fixture_actor_hooks(void *opaque) {
    actor_fixture_context *c=(actor_fixture_context*)opaque;
    uint32_t object=xbox_HeapAlloc(0x1000,16);
    if(!object)return 1;
    saved_regs r=save_regs();int failed=0;
    uint32_t old_definition=MEM32(c->actor+0x2d8);
    MEM32(c->actor+0x2d8)=0;
    g_ecx=object;PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x00069DC0u,sub_00069DC0);balanced(r.sp);
    const char *keys[]={"leader","leaderpowerup"},*values[]={"true","ldr_radiation"};
    for(unsigned i=0;i<2;++i) {
        strcpy((char*)XBOX_PTR(object+0xc00),keys[i]);
        strcpy((char*)XBOX_PTR(object+0xc40),values[i]);
        g_ecx=object;PUSH32(g_esp,object+0xc40);PUSH32(g_esp,object+0xc00);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x00069A20u,sub_00069A20);balanced(r.sp);
    }
    xml1_leader_event_retire_actor(c->actor);
    unsigned calls=fixture_calls;
    /* Exercise the same adapter entry points installed at32DA7/2F0ED, using
     * real native properties, entity lookup and scheduler. Only final power
     * attachment remains substituted; no full world actor is constructed. */
    g_eax=0x13579;g_ecx=0x24680;g_edx=0xabcdef;
    xml1_leader_actor_loaded(c->actor,object);
    leader_event_state *s=&states[MEM32(c->actor+0x1c)&511];
    if(!s->armed||s->selection!=5||s->scope!=12||g_eax!=0x13579||
       g_ecx!=0x24680||g_edx!=0xabcdef||g_esp!=r.sp)failed=1;
    xml1_leader_zone_bind(c->scratch);
    raven_leader_cache_capture(&zone_cache,c->scratch+24,6);
    xml1_leader_actor_restored(c->actor,c->scratch+24);
    if(!s->armed||s->selection!=6||s->scope!=12||g_eax!=0x13579||
       g_ecx!=0x24680||g_edx!=0xabcdef||g_esp!=r.sp)failed=1;
    fixture_tick(c->now+1);
    if(fixture_calls!=calls+1||fixture_scope!=12||strcmp(fixture_name,"ldr_health_regen"))failed=1;
    g_ecx=object;PUSH32(g_esp,0);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x0006A3F0u,sub_0006A3F0);balanced(r.sp);
    if(g_fp_top!=r.fp)failed=1;
    MEM32(c->actor+0x2d8)=old_definition;
    xbox_HeapFree(object);restore_regs(&r);return failed;
}
int xml1_leader_event_fixture(uint32_t scratch,uint32_t actor) {
    saved_regs r=save_regs();leader_event_state prior[512];
    raven_leader_zone_cache prior_cache=zone_cache;
    unsigned char scheduler[0x7120];
    memcpy(prior,states,sizeof(prior));
    memcpy(scheduler,(void*)XBOX_PTR(0x4c9a88),sizeof(scheduler));
    uint32_t init=MEM32(0x4d0ba8),clock=MEM32(0x48d8e8),handle=MEM32(actor+0x1c);
    uint32_t generation=MEM32(0x4db2b8+0x105c+4),serial=next_serial;
    raven_lookup (*previous_attach)(uint32_t,const char *,uint32_t)=attach;
    int result=0;attach=fixture_attach;fixture_calls=0;xml1_leader_event_reset();
    memset((void*)XBOX_PTR(0x4c9a88),0,sizeof(scheduler));
    MEM32(0x4c9a88)=0x3d349c;MEM32(0x4d0ba8)=init|1;
    /* Real scheduler constructor, bypassing only singleton CRT/atexit setup. */
    g_ecx=0x4c9a8c;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x000A9F60u,sub_000A9F60);
    balanced(r.sp);MEM32(0x48d8e8)=0x498e88;MEM32(actor+0x1c)=0x201;
    MEM32(0x4db2b8+0x105c+4)=0x201;
    float now=MEMF(0x498e88+0x39c);
#define EVENT_CHECK(condition,code) do {if(!(condition)){result=code;goto done;}}while(0)
    EVENT_CHECK(xml1_leader_event_schedule(0x201,5,8),1);
    EVENT_CHECK(xml1_leader_event_schedule(0x201,6,9),2);
    EVENT_CHECK(MEM32(0x4c9a88+4+0x5110)==1,3);
    fixture_tick(now);EVENT_CHECK(!fixture_calls,4);
    fixture_tick(now+1);
    EVENT_CHECK(fixture_calls==1&&fixture_handle==0x201&&fixture_scope==8&&
        !strcmp(fixture_name,"ldr_radiation")&&!MEM32(0x4c9a88+4+0x5110),5);
    EVENT_CHECK(xml1_leader_event_schedule(0x201,6,9)&&!MEM32(0x4c9a88+4+0x5110),6);
    xml1_leader_event_cancel(0x201);
    EVENT_CHECK(xml1_leader_event_schedule(0x201,6,9),7);
    xml1_leader_event_cancel(0x201);
    EVENT_CHECK(xml1_leader_event_schedule(0x201,7,10),8);
    fixture_tick(now+1);
    EVENT_CHECK(fixture_calls==2&&fixture_scope==10&&!strcmp(fixture_name,"ldr_leech_invuln"),9);
    xml1_leader_event_cancel(0x201);
    EVENT_CHECK(xml1_leader_event_schedule(0x201,0,3),10);
    MEM32(0x4db2b8+0x105c+4)=0x401;MEM32(actor+0x1c)=0x401;
    fixture_tick(now+1);EVENT_CHECK(fixture_calls==2&&!MEM32(0x4c9a88+4+0x5110),11);
    MEM32(0x4c9a88+4+0x5110)=1024;
    EVENT_CHECK(!xml1_leader_event_schedule(0x401,0,3),12);
    MEM32(0x4c9a88+4+0x5110)=0;MEM32(0x4c9a88+4+0x7118)=1024;
    EVENT_CHECK(!xml1_leader_event_schedule(0x401,0,3),13);
    MEM32(0x4c9a88+4+0x7118)=0;
    EVENT_CHECK(!xml1_leader_event_schedule(0x401,14,3),14);
    EVENT_CHECK(xml1_leader_event_schedule(0x401,0,3),15);
    xml1_leader_event_reset();fixture_tick(now+1);EVENT_CHECK(fixture_calls==2,16);
    EVENT_CHECK(xml1_leader_event_schedule(0x401,1,3),18);
    xml1_leader_event_retire_actor(actor+4); /* unrelated object is untouched */
    fixture_tick(now+1);EVENT_CHECK(fixture_calls==3,19);
    xml1_leader_event_cancel(0x401);
    EVENT_CHECK(xml1_leader_event_schedule(0x401,2,3),20);
    xml1_leader_event_retire_actor(actor);
    EVENT_CHECK(xml1_leader_event_schedule(0x401,3,7),21);
    fixture_tick(now+1);
    EVENT_CHECK(fixture_calls==4&&fixture_scope==7&&!strcmp(fixture_name,"ldr_shared_drain"),22);
    /* Native record addresses are identities only: no memory in this private
     * range is read or written by the adjunct. Preserve native record bytes. */
    xml1_leader_zone_bind(scratch);
    uint8_t selection=77;
    xml1_leader_zone_capture(actor,scratch+24);
    EVENT_CHECK(xml1_leader_zone_selection(scratch+24,&selection)&&selection==3,23);
    xml1_leader_event_retire_actor(actor);
    xml1_leader_zone_capture(actor,scratch+24);
    selection=77;
    EVENT_CHECK(!xml1_leader_zone_selection(scratch+24,&selection)&&selection==77,24);
    EVENT_CHECK(xml1_leader_event_schedule(0x401,4,7),25);
    xml1_leader_zone_capture(actor,scratch+24);
    xml1_leader_zone_capture(actor,scratch+0x39bc+24);
    xml1_leader_zone_reset(scratch);
    EVENT_CHECK(!xml1_leader_zone_selection(scratch+24,&selection),26);
    EVENT_CHECK(xml1_leader_zone_selection(scratch+0x39bc+24,&selection)&&selection==4,27);
    xml1_leader_zone_bind(scratch);
    EVENT_CHECK(!xml1_leader_zone_selection(scratch+0x39bc+24,&selection),28);
    {
        uint32_t stream=xbox_HeapAlloc(0x2fc80,16);
        if(!stream)_Exit(4);
        memset((void*)XBOX_PTR(stream),0xa5,0x2fc80);
        MEM32(stream+0x2fc00)=stream+32;
        xml1_leader_zone_save(stream,scratch);
        int failed=MEM32(stream+0x2fc00)!=stream+32;
        xml1_leader_zone_capture(actor,scratch+24);
        xml1_leader_zone_save(stream,scratch);
        uint32_t end=MEM32(stream+0x2fc00);
        if(end!=stream+32+RAVEN_LEADER_STREAM_BYTES||MEM32(end)!=0xa5a5a5a5u)failed=1;
        xml1_leader_zone_bind(scratch);
        MEM32(stream+0x2fc00)=stream+32;
        xml1_leader_zone_load(stream,scratch);
        if(MEM32(stream+0x2fc00)!=end||
           !xml1_leader_zone_selection(scratch+24,&selection)||selection!=4)failed=1;
        xml1_leader_zone_bind(scratch);
        MEM32(stream+0x2fc00)=end;
        xml1_leader_zone_load(stream,scratch);
        if(MEM32(stream+0x2fc00)!=end||xml1_leader_zone_selection(scratch+24,&selection))failed=1;
        xbox_HeapFree(stream);EVENT_CHECK(!failed,29);
    }
    EVENT_CHECK(g_esp==r.sp&&g_fp_top==r.fp,17);
    EVENT_CHECK(xml1_leader_event_restore(0x401,5,9),30);
    fixture_tick(now+1);
    EVENT_CHECK(fixture_calls==5&&fixture_scope==9&&!strcmp(fixture_name,"ldr_radiation"),31);
    EVENT_CHECK(xml1_leader_event_restore(0x401,5,9)&&
        !xml1_leader_event_restore(0x401,6,9)&&!MEM32(0x4c9a88+4+0x5110),32);
    xml1_leader_event_retire_actor(actor);
    EVENT_CHECK(!xml1_leader_event_restore(0x201,5,9)&&
        !xml1_leader_event_restore(0x401,14,9),33);
    EVENT_CHECK(xml1_leader_event_restore(0x401,6,12),34);
    fixture_tick(now+1);
    EVENT_CHECK(fixture_calls==6&&fixture_scope==12&&
        !strcmp(fixture_name,"ldr_health_regen")&&g_esp==r.sp&&g_fp_top==r.fp,35);
    {
        actor_fixture_context context={actor,scratch,now};
        EVENT_CHECK(!raven_shared_leader_native_fixture(fixture_actor_hooks,&context),36);
    }
done:
    memcpy((void*)XBOX_PTR(0x4c9a88),scheduler,sizeof(scheduler));
    MEM32(0x4d0ba8)=init;MEM32(0x48d8e8)=clock;MEM32(actor+0x1c)=handle;
    MEM32(0x4db2b8+0x105c+4)=generation;
    memcpy(states,prior,sizeof(states));zone_cache=prior_cache;
    next_serial=serial;attach=previous_attach;restore_regs(&r);
    if(result)fprintf(stderr,"FAIL native leader scheduler fixture: %d\n",result);
    else puts("PASS native leader scheduling, zone capture and optional save cursor: event identity, actor reuse, record replacement, zone/cache reset, legacy omission, extension roundtrip, pending selection replacement, fresh restore scheduling and actor load/restore adapters; attachment terminal substituted, full actor constructor/restore and disk I/O untested");
    return result;
#undef EVENT_CHECK
}
