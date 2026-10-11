#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "engine/powers/raven_powerup_guest.h"
#include "engine/powers/raven_xml1_powerup_view.h"
#include "engine/core/raven_numeric.h"
#include "engine/combat/raven_harming_settings.h"
#include "engine/combat/raven_harming_runtime.h"
#include "engine/powers/raven_powerup_metadata.h"
#include "engine/combat/raven_add_attack_runtime.h"
#include "engine/combat/raven_percent_attack_runtime.h"
#include "engine/combat/raven_absorb_runtime.h"
#include "engine/scripting/raven_remove_events.h"
#include "engine/combat/raven_bishop_guest.h"
#include "engine/combat/raven_native_damage.h"
#include "engine/combat/raven_rating.h"
#include "engine/powers/raven_shared_powerups_runtime.h"
#include "engine/actors/raven_actor_scale_owner.h"
#include "engine/combat/raven_harming_callbacks.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

static void damage_reserve_retire(uint32_t owner);
static void check_stack(uint32_t expected) {
    if(g_esp!=expected) {
        fputs("[RAVEN POWERUP ERROR] Native entity query stack mismatch\n",stderr);
        fflush(stderr);_Exit(4);
    }
}
void raven_xml1_trace_effect_registration(uint32_t path,uint32_t selector) {
    if(!getenv("XML1_TEST_EFFECT_RESOURCE")||!path)return;
    const char *text=(const char*)XBOX_PTR(path);
    if(strstr(text,"p2_power"))
        fprintf(stderr,"[RAVEN EFFECT REGISTER] path=%s selector=%u\n",text,selector);
}
static void shared_native_attribute(uint32_t definition,const char *key,const char *value) {
    const size_t k=strlen(key)+1,v=strlen(value)+1;
    if(k+v>4096){fputs("[SHARED POWERUP ERROR] Attribute too long\n",stderr);_Exit(4);}
    const uint32_t sp=g_esp;
    g_esp-=4096;
    const uint32_t frame=g_esp;
    memcpy((void*)XBOX_PTR(frame),key,k);
    memcpy((void*)XBOX_PTR(frame+k),value,v);
    g_ecx=definition;PUSH32(g_esp,frame+(uint32_t)k);PUSH32(g_esp,frame);PUSH32(g_esp,0x96370);
    RECOMP_ABI_CALL(0x000955C0u,sub_000955C0);check_stack(frame);
    g_esp=sp;
}
void raven_xml1_shared_powerup_release(uint32_t definition) {
    if(!definition)return;
    const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
    PUSH32(g_esp,definition);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x000967B0u,sub_000967B0);g_esp+=4;check_stack(sp);
    g_eax=ax;g_ecx=cx;g_edx=dx;
}
raven_lookup raven_xml1_shared_powerup_create(const char *tag,uint32_t scope,uint32_t *out) {
    if(!tag||!out)return RAVEN_INVALID;
    if(!raven_shared_powerups_contains(tag))return RAVEN_MISSING;
    const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
    PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00096740u,sub_00096740);check_stack(sp);
    const uint32_t definition=g_eax;
    raven_lookup result=RAVEN_INVALID;
    if(definition) {
        /* 96740 constructs through964F0/96220, establishing reference1 and
         * resetting old metadata for a recycled native pool slot. Definitions
         * are per-owner: event-local overrides cannot mutate this catalog. */
        if(raven_shared_powerups_apply(definition,tag,shared_native_attribute)) {
            shared_native_attribute(definition,"tag_name",tag);
            /* Ordinary XML parsing installs these at96484. This direct named
             * path must finish the same callback setup before attachment. */
            raven_harming_install_callbacks(definition);
            /* Native94FE0 binds the four ordinary effect references and its
             * existing integration hook records this namespace for imported
             * nested effects. Match the normal definition completion path,
             * rather than leaving named definitions without resource scope. */
            g_ecx=definition;PUSH32(g_esp,scope);PUSH32(g_esp,0);
            RECOMP_ABI_CALL(0x00094FE0u,sub_00094FE0);check_stack(sp);
            *out=definition;result=RAVEN_FOUND;
        }else raven_xml1_shared_powerup_release(definition);
    }
    g_eax=ax;g_ecx=cx;g_edx=dx;return result;
}
raven_lookup raven_xml1_shared_powerup_attach(uint32_t target,const char *tag,uint32_t scope) {
    uint32_t actor,definition;
    raven_lookup result=raven_xml1_guest_entity_actor(NULL,target,&actor);
    if(result!=RAVEN_FOUND)return result;
    result=raven_xml1_shared_powerup_create(tag,scope,&definition);
    if(result!=RAVEN_FOUND)return result;
    /* Resolve again after definition loading; never retain an actor pointer
     * across a native resource operation and assume its generation survived. */
    result=raven_xml1_guest_entity_actor(NULL,target,&actor);
    if(result==RAVEN_FOUND) {
        const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
        g_ecx=actor;
        PUSH32(g_esp,MEM32(0x498d90)); /* existing native null source */
        PUSH32(g_esp,0);             /* optional active-handle output */
        PUSH32(g_esp,1);             /* active record owns definition */
        PUSH32(g_esp,definition);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x0002AA90u,sub_0002AA90);check_stack(sp);
        result=(g_eax&255)?RAVEN_FOUND:RAVEN_MISSING;
        g_eax=ax;g_ecx=cx;g_edx=dx;
    }
    /* 2A7B0 records ownership in active+3C bit0. Native28FA0/29130
     * release active+2C through967B0. On failure2AA90 never transfers it.
     * Do not release a successfully attached definition a second time. */
    if(result!=RAVEN_FOUND)raven_xml1_shared_powerup_release(definition);
    return result;
}
static void shared_powerup_defaults(uint32_t definition,uint32_t node) {
    const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
    uint32_t attr=MEM32(node+0x54);unsigned count=0;
    while(attr&&attr!=node+0x2C) {
        if(++count>4096){fputs("[SHARED POWERUP ERROR] Cyclic attributes\n",stderr);_Exit(4);}
        g_ecx=attr+4;PUSH32(g_esp,0x96370);
        RECOMP_ABI_CALL(0x00199EE0u,sub_00199EE0);check_stack(sp);
        const int shared=_stricmp((const char*)XBOX_PTR(g_eax),"shared_tag")==0;
        if(shared) {
            g_ecx=attr+0x14;PUSH32(g_esp,0x96370);
            RECOMP_ABI_CALL(0x00199EE0u,sub_00199EE0);check_stack(sp);
            if(!raven_shared_powerups_apply(definition,(const char*)XBOX_PTR(g_eax),shared_native_attribute))_Exit(4);
            break;
        }
        g_ecx=attr;PUSH32(g_esp,0x96370);
        RECOMP_ABI_CALL(0x00125BD0u,sub_00125BD0);check_stack(sp);attr=g_eax;
    }
    g_eax=ax;g_ecx=cx;g_edx=dx;
}
static void capture_class_scope_attributes(uint32_t definition,uint32_t node) {
    const uint32_t sp=g_esp;
    uint32_t attr=MEM32(node+0x54);unsigned count=0;
    while(attr&&attr!=node+0x2c) {
        if(++count>4096){fputs("[RAVEN SCOPE ERROR] Cyclic scope attributes\n",stderr);_Exit(4);}
        g_ecx=attr+4;PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x00199EE0u,sub_00199EE0);check_stack(sp);
        const uint32_t key=g_eax;
        g_ecx=attr+0x14;PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x00199EE0u,sub_00199EE0);check_stack(sp);
        if(_strnicmp((const char*)XBOX_PTR(key),"scope_",6)==0)
            shared_native_attribute(definition,(const char*)XBOX_PTR(key),(const char*)XBOX_PTR(g_eax));
        g_ecx=attr;PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x00125BD0u,sub_00125BD0);check_stack(sp);attr=g_eax;
    }
}
static void capture_class_scope(uint32_t definition,uint32_t node) {
    // powerup_scope qualifies the owning class callback. XML1's existing
    // scope object owns that filter, survives native copies, and unions
    // repeated attack/damage mask entries while ANDing different predicates.
    // Other affecters keep independent scopes in their own metadata.
    const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
    capture_class_scope_attributes(definition,node);
    g_esp-=64;const uint32_t frame=g_esp;
    memcpy((void*)XBOX_PTR(frame+32),"scope",6);
    g_ecx=frame;PUSH32(g_esp,2);PUSH32(g_esp,frame+32);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x00125DA0u,sub_00125DA0);check_stack(frame);
    uint32_t child=0;unsigned count=0;
    for(;;) {
        g_ecx=node;PUSH32(g_esp,child);PUSH32(g_esp,frame);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x00126C30u,sub_00126C30);check_stack(frame);
        child=g_eax;if(!child)break;
        if(++count>4096){fputs("[RAVEN SCOPE ERROR] Cyclic scope children\n",stderr);_Exit(4);}
        capture_class_scope_attributes(definition,child);
    }
    g_ecx=frame;PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x00125890u,sub_00125890);check_stack(frame);
    g_esp=sp;g_eax=ax;g_ecx=cx;g_edx=dx;
}
void raven_xml1_powerup_capture_effects(uint32_t definition,uint32_t node) {
    if(!definition||!node||MEM32(node+8)!=1)return;
    shared_powerup_defaults(definition,node);
    const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
    g_esp-=64;
    const uint32_t frame=g_esp;
    // Keep imported affecter operands alongside effects through native cloning.
    // Capturing a declaration does not yet apply its rating or stat changes.
    for(unsigned kind=0;kind<3;++kind) {
    const char *child_name=kind==2?"FunctionEvent":kind?"affecter":"special_fx";
    memcpy((void*)XBOX_PTR(frame+32),child_name,strlen(child_name)+1);
    /* Use XML1's own string representation and named child iterator. Its
       pooled/interned strings are not raw char pointers. CEF40 uses these
       same calls to enumerate damageMod children; preserve inherited effects. */
    g_ecx=frame;PUSH32(g_esp,2);PUSH32(g_esp,frame+32);PUSH32(g_esp,0xCEF40);
    RECOMP_ABI_CALL(0x00125DA0u,sub_00125DA0);check_stack(frame);
    uint32_t child=0;unsigned count=0;
    for(;;) {
        g_ecx=node;PUSH32(g_esp,child);PUSH32(g_esp,frame);PUSH32(g_esp,0xCEF40);
        RECOMP_ABI_CALL(0x00126C30u,sub_00126C30);check_stack(frame);
        child=g_eax;if(!child)break;
        if(++count>4096){fputs("[RAVEN POWERUP ERROR] Cyclic effect children\n",stderr);_Exit(4);}
        uint32_t index=kind==2?raven_xml1_powerup_trigger_begin(definition):
            kind?raven_xml1_powerup_affecter_begin(definition):raven_xml1_powerup_effect_begin(definition);
        uint32_t attr=MEM32(child+0x54);unsigned attributes=0;int class_scope=0;
        while(attr&&attr!=child+0x2C) {
            if(++attributes>4096){fputs("[RAVEN POWERUP ERROR] Cyclic effect attributes\n",stderr);_Exit(4);}
            g_ecx=attr+4;PUSH32(g_esp,0xCEF40);
            RECOMP_ABI_CALL(0x00199EE0u,sub_00199EE0);check_stack(frame);
            uint32_t key=g_eax;
            g_ecx=attr+0x14;PUSH32(g_esp,0xCEF40);
            RECOMP_ABI_CALL(0x00199EE0u,sub_00199EE0);check_stack(frame);
            if(kind==1&&_stricmp((const char*)XBOX_PTR(key),"attribute")==0&&
               _stricmp((const char*)XBOX_PTR(g_eax),"powerup_scope")==0)class_scope=1;
            if(kind==2)raven_xml1_powerup_trigger_attribute(definition,index,(const char*)XBOX_PTR(key),(const char*)XBOX_PTR(g_eax));
            else if(kind)raven_xml1_powerup_affecter_attribute(definition,index,(const char*)XBOX_PTR(key),(const char*)XBOX_PTR(g_eax));
            else raven_xml1_powerup_effect_attribute(definition,index,(const char*)XBOX_PTR(key),(const char*)XBOX_PTR(g_eax));
            g_ecx=attr;PUSH32(g_esp,0xCEF40);
            RECOMP_ABI_CALL(0x00125BD0u,sub_00125BD0);check_stack(frame);attr=g_eax;
        }
        if(class_scope)capture_class_scope(definition,child);
    }
    g_ecx=frame;PUSH32(g_esp,0xCEF40);
    RECOMP_ABI_CALL(0x00125890u,sub_00125890);check_stack(frame);
    }
    g_esp=sp;g_eax=ax;g_ecx=cx;g_edx=dx;
}
static double pop_native_float(int before) {
    if(g_fp_top!=((before+7)&7)) {
        fputs("[RAVEN POWERUP ERROR] Native floating return mismatch\n",stderr);
        fflush(stderr);_Exit(4);
    }
    double result=g_fp_stack[g_fp_top];g_fp_top=before;return result;
}
static int read_guest(void *context,uint32_t address,void *out,size_t size) {
    (void)context;
    if(address<0x10000u||(uint64_t)address+size>0x08000000ull)return 0;
    memcpy(out,(const void*)XBOX_PTR(address),size);return 1;
}
static int shared_boost_present(void *context,const char *tag) {
    (void)context;(void)tag;return 1;
}
static int shared_boost_self_source(uint32_t source,uint32_t target) {
    /* XML1 2AD03/2AD08 canonicalizes a self source to its native null handle.
     * Keep that representation; XML2's explicit self-source comparison cannot
     * be copied literally into XML1's active-slot layout. */
    return source==target||source==MEM32(0x498D90);
}
int raven_xml1_shared_boost_begin(uint32_t instance,uint32_t *owner) {
    uint32_t handle;
    if(!owner||raven_xml1_active_powerup_identity(read_guest,NULL,0x4833C0,instance,&handle)!=RAVEN_FOUND)return 0;
    if(!shared_boost_self_source(MEM32(instance+0x18),MEM32(instance+0x1C)))return 0;
    if(!raven_xml1_powerup_shared_boost_visit(MEM32(instance+0x2C),shared_boost_present,NULL))return 0;
    *owner=handle;return 1;
}
static int shared_boost_apply(void *context,const char *tag) {
    const uint32_t owner=*(const uint32_t*)context;
    uint32_t instance,definition,actor;
    if(raven_xml1_active_powerup(read_guest,NULL,0x4833C0,owner,&instance)!=RAVEN_FOUND)return 0;
    const uint32_t target=MEM32(instance+0x1C),source=MEM32(instance+0x18),original=MEM32(instance+0x2C);
    if(!shared_boost_self_source(source,target)||raven_xml1_guest_entity_actor(NULL,target,&actor)!=RAVEN_FOUND)return 0;
    /* XML2 14D430 resolves a global shared-catalog tag, not an actor-local
     * resource. Use XML1's ownerless shared-definition namespace (D74A0). */
    if(raven_xml1_shared_powerup_create(tag,12,&definition)!=RAVEN_FOUND)return 0;
    int accepted=0;
    /* Definition loading can call native code. Reject a retired/reused owner
     * and changed source/target before transferring the new reference. */
    if(raven_xml1_active_powerup(read_guest,NULL,0x4833C0,owner,&instance)==RAVEN_FOUND&&
       MEM32(instance+0x2C)==original&&MEM32(instance+0x18)==source&&MEM32(instance+0x1C)==target&&
       raven_xml1_guest_entity_actor(NULL,target,&actor)==RAVEN_FOUND) {
        uint32_t sp=g_esp;
        g_ecx=actor;PUSH32(g_esp,target); /* self source, XML2 14D578 */
        PUSH32(g_esp,0);PUSH32(g_esp,1);PUSH32(g_esp,definition);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x0002AA90u,sub_0002AA90);check_stack(sp);
        accepted=(g_eax&255)!=0;
    }
    if(!accepted)raven_xml1_shared_powerup_release(definition);
    return accepted;
}
void raven_xml1_shared_boost_finish(uint32_t owner) {
    uint32_t instance;
    if(raven_xml1_active_powerup(read_guest,NULL,0x4833C0,owner,&instance)!=RAVEN_FOUND)return;
    const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx,bx=g_ebx,
        si=g_esi,di=g_edi,bp=g_ebp,seh=g_seh_ebp,top=g_fp_top;
    const int cmp=g_fp_cmp;const unsigned cc=g_fp_cc;
    double floats[8];memcpy(floats,g_fp_stack,sizeof(floats));
    /* XML2 14661F records successful recipient attachment before 14663A
     * invokes the definition callback. Never invoke this for a skipped row. */
    raven_xml1_powerup_shared_boost_visit(MEM32(instance+0x2C),shared_boost_apply,&owner);
    check_stack(sp);
    g_eax=ax;g_ecx=cx;g_edx=dx;g_ebx=bx;g_esi=si;g_edi=di;g_ebp=bp;g_seh_ebp=seh;
    g_fp_top=top;g_fp_cmp=cmp;g_fp_cc=cc;memcpy(g_fp_stack,floats,sizeof(floats));
}
/* Private programmatic fixture: substitute only scene membership and clock.
 * The generated sharing loop, result iteration, recipient attachment, owner
 * boost and reference retirement all execute their real native paths. */
static struct {uint32_t token,mask,origin;unsigned queries;int failed;} shared_loop_fixture;
static void shared_loop_query_begin(void) {
    memset((void*)XBOX_PTR(g_ecx+8),0,64);g_esp+=12;
}
static void shared_loop_query_sphere(void) {
    if(MEM32(g_esp+4)!=shared_loop_fixture.origin||MEMF(g_esp+8)!=100.0f||
       MEM32(g_esp+12)||MEM32(g_esp+16))shared_loop_fixture.failed=1;
    MEM32(g_ecx+8)=shared_loop_fixture.mask;++shared_loop_fixture.queries;g_esp+=20;
}
static void shared_loop_clock(void) {
    g_fp_top=(g_fp_top+7)&7;g_fp_stack[g_fp_top]=100.0;g_esp+=4;
}
void (*raven_xml1_shared_boost_fixture_lookup(uint32_t address))(void) {
    if(!shared_loop_fixture.token)return NULL;
    if(address==shared_loop_fixture.token)return shared_loop_query_begin;
    if(address==shared_loop_fixture.token+4)return shared_loop_query_sphere;
    if(address==shared_loop_fixture.token+8)return shared_loop_clock;
    return NULL;
}
int raven_xml1_shared_boost_loop_fixture(uint32_t instance,uint32_t actor,uint32_t recipient,uint32_t scratch) {
    const uint32_t pool=0x4C2AA8,sp=g_esp,definition=MEM32(instance+0x2C);
    uint32_t owner;
    if(shared_loop_fixture.token||!raven_xml1_shared_boost_begin(instance,&owner))return 1;
    unsigned char* backup=malloc(0x3950);if(!backup)return 2;
    memcpy(backup,(const void*)XBOX_PTR(pool),0x3950);
    const uint32_t globals[]={0x4C63F8,0x498E88,0x49954C,0x499568};
    uint32_t saved[4];for(unsigned i=0;i<4;++i)saved[i]=MEM32(globals[i]);
    const uint32_t old_shared=MEM32(instance+0x30),old_time=MEM32(instance+0x34);
    const uint8_t old_flags=MEM8(instance+0x3C);
    const uint32_t old_radius=MEM32(definition+0x4C),old_health=MEM32(actor+0x240);
    const uint32_t old_recipient_health=MEM32(recipient+0x240),old_head=MEM32(recipient+0x1FC);
    const uint32_t initial_refs=MEM32(definition),catalog=MEM32(0x4C0B18);
    const uint32_t initial_count=MEM32(catalog+0x7DD0);
    /* Native2AEB0 prepares an owned sharing copy with radius zero. Recipients
     * borrow that definition; they must not recursively allocate more copies. */
    PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00096740u,sub_00096740);
    const uint32_t shared_definition=g_eax;
    if(!shared_definition){free(backup);return 10;}
    g_ecx=shared_definition;PUSH32(g_esp,definition);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x000953A0u,sub_000953A0);
    raven_xml1_powerup_metadata_shared_copy(shared_definition);
    MEM32(shared_definition+0x24)=MEM32(shared_definition+0x50);
    MEM32(shared_definition+0x50)=0;MEM32(shared_definition+0x4C)=0;
    int failed=0;MEM32(0x4C63F8)=1;
    g_ecx=pool;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x000A2880u,sub_000A2880);
    memcpy((void*)XBOX_PTR(scratch),(const void*)XBOX_PTR(0x3D29EC),0x80);
    memset((void*)XBOX_PTR(scratch+0x100),0,0x110);
    shared_loop_fixture.token=scratch+0x240;shared_loop_fixture.origin=actor+0x20;
    shared_loop_fixture.queries=0;shared_loop_fixture.failed=0;
    MEM32(scratch+4)=shared_loop_fixture.token;MEM32(scratch+0x68)=shared_loop_fixture.token+4;
    MEM32(pool)=scratch;MEM32(scratch+0x204)=shared_loop_fixture.token+8;
    MEM32(0x498E88)=scratch+0x100;MEM32(0x49954C)|=1;MEM32(0x499568)=0;
    MEM32(instance+0x30)=shared_definition;MEM8(instance+0x3C)|=2;MEMF(definition+0x4C)=100;
    MEMF(actor+0x240)=100;
    for(unsigned mode=0;mode<4&&!failed;++mode) {
        /* Empty, dead recipient, then a successful recipient. A dead row
         * jumps directly to2B4FF and must not count as successful attachment. */
        MEM32(instance+0x34)=0;MEMF(recipient+0x240)=mode==1?0.0f:100.0f;
        MEM32(recipient+0x1FC)=owner; // Existing list avoids scene scheduling.
        shared_loop_fixture.mask=mode?1u<<(MEM32(recipient+0x1C)&31):0;
        const uint32_t active_count=MEM32(0x4833C0+0x2234);
        if(mode==3)MEM32(0x4833C0+0x2234)=128; // Real allocator rejects attachment.
        g_ecx=instance;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x0002B270u,sub_0002B270);
        if(mode==3)MEM32(0x4833C0+0x2234)=active_count;
        uint32_t linked=0,received=0;
        if(mode!=2) {
            if(MEM32(actor+0x1FC)!=owner||MEM32(recipient+0x1FC)!=owner||
               MEM32(catalog+0x7DD0)!=initial_count+1||MEM32(definition)!=initial_refs)failed=3+mode;
        } else {
            if(raven_xml1_active_powerup(read_guest,NULL,0x4833C0,MEM32(actor+0x1FC),&linked)!=RAVEN_FOUND||
               raven_xml1_active_powerup(read_guest,NULL,0x4833C0,MEM32(recipient+0x1FC),&received)!=RAVEN_FOUND||
               linked==instance||received==instance||linked==received||
               MEM32(received+0x2C)!=shared_definition||MEM32(received+0x1C)!=MEM32(recipient+0x1C)||
               MEM32(received+0x18)!=MEM32(actor+0x1C)||MEMF(MEM32(linked+0x2C)+0x24)!=8.0f||
               MEM32(catalog+0x7DD0)!=initial_count+2||MEM32(definition)!=initial_refs||
               (MEM8(received+0x3C)&1)||MEM32(received+0x30)) {
                failed=5;
                fprintf(stderr,"Sharing result: owner=%08X linked=%08X recipient=%08X received=%08X def=%08X/%08X source=%08X target=%08X life=%g count=%u/%u refs=%u/%u\n",
                    instance,linked,recipient,received,received?MEM32(received+0x2C):0,shared_definition,
                    received?MEM32(received+0x18):0,received?MEM32(received+0x1C):0,
                    linked?MEMF(MEM32(linked+0x2C)+0x24):0,MEM32(catalog+0x7DD0),initial_count+2,
                    MEM32(definition),initial_refs);
            }
            MEM32(actor+0x1FC)=owner;MEM32(recipient+0x1FC)=owner;
            if(linked&&linked!=instance){g_ecx=linked;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00028FA0u,sub_00028FA0);}
            if(received&&received!=instance&&received!=linked){g_ecx=received;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00028FA0u,sub_00028FA0);}
            if(MEM32(catalog+0x7DD0)!=initial_count+1||MEM32(definition)!=initial_refs)failed=6;
        }
        if(g_esp!=sp)failed=7;
        for(unsigned i=0;i<3;++i)if(MEM8(pool+0x50+i*0x304)||MEM8(pool+0x1920+i*0x1014))failed=8;
    }
    if(!failed&&(shared_loop_fixture.failed||shared_loop_fixture.queries!=4))failed=9;
    shared_loop_fixture.token=0;memcpy((void*)XBOX_PTR(pool),backup,0x3950);free(backup);
    for(unsigned i=0;i<4;++i)MEM32(globals[i])=saved[i];
    MEM32(instance+0x30)=old_shared;MEM32(instance+0x34)=old_time;MEM8(instance+0x3C)=old_flags;
    raven_xml1_shared_powerup_release(shared_definition);
    if(MEM32(catalog+0x7DD0)!=initial_count)failed=11;
    MEM32(definition+0x4C)=old_radius;MEM32(actor+0x240)=old_health;
    MEM32(recipient+0x240)=old_recipient_health;MEM32(recipient+0x1FC)=old_head;
    if(failed)fprintf(stderr,"FAIL shared boost native sharing loop %d (queries=%u)\n",failed,shared_loop_fixture.queries);
    else puts("PASS shared boost native sharing loop: empty/dead recipients and failed attachment excluded, successful recipient triggers owner boost, borrowed sharing copy, balanced references and query pool cleanup; scene membership and clock substituted");
    return failed;
}

typedef struct powerup_sound_context {uint32_t owner,definition,target;} powerup_sound_context;
static int powerup_sound_play(void *opaque,const char *sound) {
    powerup_sound_context *c=(powerup_sound_context*)opaque;
    size_t length=strlen(sound)+1;
    if(length>4096)return 0;
    uint32_t sp=g_esp;
    g_esp-=(uint32_t)((length+15)&~(size_t)15);
    uint32_t text=g_esp;
    memcpy((void*)XBOX_PTR(text),sound,length);
    PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00151EF0u,sub_00151EF0);check_stack(text);
    uint32_t manager=g_eax,fn=MEM32(MEM32(manager)+0x34);
    /* Native XML1 D7E65 resolves a named sound with these two zero options.
     * Use the original manager's ID space, not a host hash or XML2 sound ID. */
    g_ecx=manager;PUSH32(g_esp,0);PUSH32(g_esp,0);PUSH32(g_esp,text);PUSH32(g_esp,0);
    RECOMP_ICALL_SAFE(fn,text);check_stack(text);
    uint32_t sound_id=g_eax;g_esp=sp;
    if(sound_id==MEM32(0x3DD050))return 0;
    uint32_t instance,actor;
    if(raven_xml1_active_powerup(read_guest,NULL,0x4833C0,c->owner,&instance)!=RAVEN_FOUND||
       MEM32(instance+0x2C)!=c->definition||MEM32(instance+0x1C)!=c->target||
       raven_xml1_guest_entity_actor(NULL,c->target,&actor)!=RAVEN_FOUND)return 0;
    /* XML1 D7EE9 plays a resolved sound through actor v84. Name lookup can
     * invoke resource code, so no actor pointer survives that operation. */
    fn=MEM32(MEM32(actor)+0x84);g_ecx=actor;
    PUSH32(g_esp,sound_id);PUSH32(g_esp,0);RECOMP_ICALL_SAFE(fn,sp);check_stack(sp);
    return 1;
}
void raven_xml1_powerup_sound(uint32_t instance,const char *event) {
    uint32_t owner;
    if(raven_xml1_active_powerup_identity(read_guest,NULL,0x4833C0,instance,&owner)!=RAVEN_FOUND)return;
    powerup_sound_context context={owner,MEM32(instance+0x2C),MEM32(instance+0x1C)};
    if(!context.definition||!raven_xml1_powerup_class_share_matches(context.definition,MEMF(context.definition+0x4C)))return;
    const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx,bx=g_ebx,
        si=g_esi,di=g_edi,bp=g_ebp,seh=g_seh_ebp,top=g_fp_top;
    const int cmp=g_fp_cmp;const unsigned cc=g_fp_cc;
    double floats[8];memcpy(floats,g_fp_stack,sizeof(floats));
    raven_xml1_powerup_sound_visit(context.definition,event,powerup_sound_play,&context);
    check_stack(sp);
    g_eax=ax;g_ecx=cx;g_edx=dx;g_ebx=bx;g_esi=si;g_edi=di;g_ebp=bp;g_seh_ebp=seh;
    g_fp_top=top;g_fp_cmp=cmp;g_fp_cc=cc;memcpy(g_fp_stack,floats,sizeof(floats));
}
/* Private pre-entry-point fixture. Only its two terminal virtual methods are
 * substituted; the production native singleton and actor handle resolver run. */
static struct {
    uint32_t token,actor,instance,definition,owner;
    unsigned mode,lookups,plays,failed;
    const char *expected;
} sound_fixture;
static void sound_fixture_resolve(void) {
    const uint32_t sp=g_esp;
    if(g_ecx!=0x55ADF8||MEM32(sp+8)||MEM32(sp+12)||
       strcmp((const char*)XBOX_PTR(MEM32(sp+4)),sound_fixture.expected))sound_fixture.failed=1;
    ++sound_fixture.lookups;
    if(sound_fixture.mode==2)MEM32(0x4833C0+0x2238+4*(sound_fixture.owner&127))+=128;
    if(sound_fixture.mode==3)MEM32(sound_fixture.instance+0x2C)=0;
    if(sound_fixture.mode==4)MEM32(0x4DB2B8+0x105C+4*(MEM32(sound_fixture.actor+0x1C)&511))+=512;
    g_eax=sound_fixture.mode==1?MEM32(0x3DD050):0; /* zero is a valid native sound ID */
    g_edx=0xabcdef;g_fp_top=3;g_fp_stack[3]=123;g_fp_cmp=1;g_fp_cc=0;
    g_esp=sp+16;
}
static void sound_fixture_play(void) {
    uint32_t sp=g_esp;
    if(g_ecx!=sound_fixture.actor||MEM32(sp+4)!=0)sound_fixture.failed=1;
    ++sound_fixture.plays;g_eax=0x123456;g_esp=sp+8;
}
void (*raven_xml1_powerup_sound_fixture_lookup(uint32_t address))(void) {
    if(sound_fixture.token&&address==sound_fixture.token)return sound_fixture_resolve;
    if(sound_fixture.token&&address==sound_fixture.token+4)return sound_fixture_play;
    return NULL;
}
int raven_xml1_powerup_sound_fixture(uint32_t instance,uint32_t actor,uint32_t scratch) {
    uint32_t owner;
    if(sound_fixture.token||raven_xml1_active_powerup_identity(read_guest,NULL,0x4833C0,instance,&owner)!=RAVEN_FOUND)return 1;
    const uint32_t definition=MEM32(instance+0x2C),table=MEM32(actor),sp=g_esp;
    const uint32_t old_manager=MEM32(0x55ADF8),old_flag=MEM32(0x566830),old_play=MEM32(table+0x84);
    const uint32_t actor_generation_address=0x4DB2B8+0x105C+4*(MEM32(actor+0x1C)&511);
    const uint32_t actor_generation=MEM32(actor_generation_address);
    const uint32_t ax=g_eax,cx=g_ecx,dx=g_edx;const unsigned top=g_fp_top;
    const int cmp=g_fp_cmp;const unsigned cc=g_fp_cc;
    double floats[8];memcpy(floats,g_fp_stack,sizeof(floats));
    raven_xml1_powerup_metadata_clone(scratch+0x200,definition);
    raven_xml1_powerup_metadata_attribute(definition,"class","sound");
    memset((void*)XBOX_PTR(scratch),0,0x80);
    sound_fixture.token=scratch+0x60;sound_fixture.actor=actor;sound_fixture.instance=instance;
    sound_fixture.definition=definition;sound_fixture.owner=owner;
    MEM32(scratch+0x34)=sound_fixture.token;MEM32(0x55ADF8)=scratch;
    MEM32(0x566830)=old_flag|1;MEM32(table+0x84)=sound_fixture.token+4;
    const char *events[]={"sound_activate","sound_deactivate","sound_death","sound_think",
        "sound_trail","sound_damage","sound_attempt_hit","sound_hurt","sound_touch"};
    for(unsigned i=0;i<9;++i) {
        sound_fixture.expected=events[i];
        raven_xml1_powerup_metadata_attribute(definition,events[i],events[i]);
        raven_xml1_powerup_sound(instance,events[i]);
    }
    if(sound_fixture.lookups!=9||sound_fixture.plays!=9)sound_fixture.failed=1;
    for(unsigned mode=1;mode<=4;++mode) {
        sound_fixture.mode=mode;sound_fixture.expected=events[0];
        raven_xml1_powerup_sound(instance,events[0]);
        if(sound_fixture.lookups!=9+mode||sound_fixture.plays!=9)sound_fixture.failed=1;
        MEM32(0x4833C0+0x2238+4*(owner&127))=owner;
        MEM32(instance+0x2C)=definition;MEM32(actor_generation_address)=actor_generation;
    }
    {
        unsigned lookups=sound_fixture.lookups;
        uint32_t radius=MEM32(definition+0x4C);
        uint32_t affecter=raven_xml1_powerup_affecter_begin(definition);
        raven_xml1_powerup_affecter_attribute(definition,affecter,"attribute","powerup_scope");
        raven_xml1_powerup_affecter_attribute(definition,affecter,"share_filter","shared");
        MEMF(definition+0x4C)=100;
        raven_xml1_powerup_sound(instance,events[0]);
        MEM32(definition+0x4C)=radius;
        if(sound_fixture.lookups!=lookups)sound_fixture.failed=1;
    }
    if(g_esp!=sp||g_eax!=ax||g_ecx!=cx||g_edx!=dx||g_fp_top!=top||g_fp_cmp!=cmp||g_fp_cc!=cc||
       memcmp(floats,g_fp_stack,sizeof(floats)))sound_fixture.failed=1;
    int failed=sound_fixture.failed;
    MEM32(0x55ADF8)=old_manager;MEM32(0x566830)=old_flag;MEM32(table+0x84)=old_play;
    raven_xml1_powerup_metadata_clone(definition,scratch+0x200);
    raven_xml1_powerup_metadata_retire(scratch+0x200);
    memset(&sound_fixture,0,sizeof(sound_fixture));
    fprintf(stderr,"[POWERUP SOUND] %s nine event names, zero ID, missing sound, owner/definition/actor retirement during lookup and ABI; lookup/playback terminals substituted\n",failed?"FAIL":"PASS");
    return failed;
}
raven_lookup raven_xml1_guest_effect_resource(const char *path,uint32_t scope,uint32_t *handle) {
    if(!path||!handle)return RAVEN_INVALID;
    size_t length=strlen(path);
    if(!length)return RAVEN_MISSING;
    if(length>=256)return RAVEN_INVALID;
    const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
    g_esp-=288;const uint32_t frame=g_esp;
    memcpy((void*)XBOX_PTR(frame+16),path,length+1);
    PUSH32(g_esp,0);RECOMP_ABI_CALL(0x000183D0u,sub_000183D0);check_stack(frame);
    uint32_t data=g_eax;
    g_ecx=data;PUSH32(g_esp,scope);PUSH32(g_esp,frame+16);PUSH32(g_esp,frame);PUSH32(g_esp,0);
    /* 262A0 existence lookup and 26A20 loading lookup both use 260B0.
       Unlike 26A20, read its result without incrementing resource refs. */
    RECOMP_ABI_CALL(0x000260B0u,sub_000260B0);check_stack(frame);
    uint32_t index=MEM32(frame),tree=MEM32(frame+4),result=0;
    raven_lookup status=RAVEN_MISSING;
    if(tree!=data+0x164)status=RAVEN_INVALID;
    else if(index!=0x3FFFFFFFu) {
        uint64_t at=(uint64_t)tree+0x36EC+(uint64_t)index*4;
        if(at>0x07FFFFFCu)status=RAVEN_INVALID;
        else {
            result=MEM32((uint32_t)at);
            uint32_t pool=data+0x3B10,slot=result&MEM32(data+0xA080);
            /* Original 25EE0/25E50 validate generation and allocation bits.
               The resource pool has 175 slots (25C20's bound 0xAF). */
            if(result&&slot<175&&MEM32(pool+0x62B4+slot*4)==result&&
               (MEM32(pool+0x6298+(slot/32)*4)&(1u<<(slot%32))))status=RAVEN_FOUND;
        }
    }
    if(getenv("XML1_TEST_EFFECT_RESOURCE"))
        fprintf(stderr,"[RAVEN EFFECT LOOKUP] path=%s data=%08X tree=%08X index=%08X resource=%08X status=%d\n",
            path,data,tree,index,result,status);
    g_esp=sp;g_eax=ax;g_ecx=cx;g_edx=dx;
    if(status==RAVEN_FOUND)*handle=result;
    return status;
}
/* Adapt 32DD0's native bone transform/name preparation to the owned-group
   entry 16180. The ordinary +30 launch has no ownership return value. */
static uint32_t effect_manager(void) {
    uint32_t sp=g_esp;
    PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00072CF0u,sub_00072CF0);check_stack(sp);
    g_ecx=g_eax;uint32_t method=MEM32(MEM32(g_ecx)+0xC);
    PUSH32(g_esp,0);RECOMP_ICALL_SAFE(method,sp);check_stack(sp);
    return g_eax;
}
static raven_lookup effect_group_dispatch(uint32_t target,uint32_t resource,
    const char *bolt,uint32_t level,float duration,uint32_t existing,uint32_t *group,uint32_t transient_owner) {
    if(!group||!resource||!(duration>=0.0f)||duration>3.402823e38f)return RAVEN_INVALID;
    if(!bolt)bolt="";
    size_t length=strlen(bolt);if(length>=256)return RAVEN_INVALID;
    uint32_t actor; raven_lookup status=raven_xml1_guest_entity_actor(NULL,target,&actor);
    if(status!=RAVEN_FOUND)return status;
    const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
    g_esp-=320;const uint32_t frame=g_esp;
    memset((void*)XBOX_PTR(frame),0,320);
    memcpy((void*)XBOX_PTR(frame+64),bolt,length+1);
    uint32_t result=0,name=0;
    if(!length) {
        // Native32DD0 with bone=-1: actor position and forward direction,
        // with null interned bolt. Never invent a pelvis bone attachment.
        memcpy((void*)XBOX_PTR(frame),(const void*)XBOX_PTR(actor+0x20),12);
        PUSH32(g_esp,actor+0x2C);PUSH32(g_esp,frame+16);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x001209C0u,sub_001209C0);g_esp+=8;check_stack(frame);
    } else {
    // Native name -> bone enumeration. Unknown names must not silently attach
    // to pelvis (the native query returns index zero and a separate success).
    PUSH32(g_esp,frame+32);PUSH32(g_esp,frame+64);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x00138870u,sub_00138870);g_esp+=8;check_stack(frame);
    uint32_t bone=g_eax;
    if(!MEM8(frame+32)){status=RAVEN_MISSING;goto done;}
    g_ecx=actor;PUSH32(g_esp,frame+16);PUSH32(g_esp,frame);PUSH32(g_esp,bone);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x0002E9F0u,sub_0002E9F0);check_stack(frame);
    // Intern the original bone spelling, matching 32E1E..32E36.
    PUSH32(g_esp,(uint32_t)length+1);PUSH32(g_esp,frame+64);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x00199C10u,sub_00199C10);check_stack(frame-8);
    g_ecx=g_eax;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00012A90u,sub_00012A90);check_stack(frame);
    name=g_eax;
    }
    uint32_t manager=effect_manager(),bits;memcpy(&bits,&duration,4);
    if(getenv("XML1_TEST_EFFECT_GROUP")) {
        PUSH32(g_esp,0);RECOMP_ABI_CALL(0x000183D0u,sub_000183D0);check_stack(frame);
        uint32_t data=g_eax,slot=resource&MEM32(data+0xA080);
        uint32_t definition=data+0x3B10+slot*0x8C;
        fprintf(stderr,"[RAVEN EFFECT EMITTERS] resource=%08X count=%u manager_gate=%g global_gate=%u\n",
            resource,MEM32(definition+0x30),(double)MEMF(manager+0xC),(unsigned)MEM8(0x47C540));
    }
    if(transient_owner) {
        uint32_t active;
        if(raven_xml1_active_powerup(read_guest,NULL,0x4833C0,transient_owner,&active)!=RAVEN_FOUND||
           MEM32(active+0x1C)!=target){status=RAVEN_MISSING;goto done;}
        if(!raven_xml1_guest_entity_valid(NULL,target)||MEM32(actor+0x1C)!=target){status=RAVEN_MISSING;goto done;}
        // Native32EB9 dispatches one burst through manager+30. Native emitter
        // lifetime owns its particles; no repeating group or powerup-owned
        // duration is created for an attack event.
        const uint32_t method=MEM32(MEM32(manager)+0x30);
        g_ecx=manager;PUSH32(g_esp,0);PUSH32(g_esp,name);PUSH32(g_esp,level);
        PUSH32(g_esp,target);PUSH32(g_esp,frame+16);PUSH32(g_esp,frame);
        PUSH32(g_esp,resource);PUSH32(g_esp,0);RECOMP_ICALL_SAFE(method,frame);check_stack(frame);
        status=RAVEN_FOUND;goto done;
    }else if(existing) {
        // Same generation/active checks as native 16650. Never emit into a
        // recycled group: its particles would belong to a different power.
        uint32_t pool=manager+0x4A90,slot=existing&MEM32(pool+0x1BF4);
        if(slot>=0x24C||MEM32(pool+0x12C4+slot*4)!=existing||
           !(MEM32(pool+0x1274+(slot/32)*4)&(1u<<(slot%32)))) {
            status=RAVEN_MISSING;goto done;
        }
        g_ecx=manager;PUSH32(g_esp,existing);PUSH32(g_esp,name);
        PUSH32(g_esp,level);PUSH32(g_esp,target);PUSH32(g_esp,frame+16);
        PUSH32(g_esp,frame);PUSH32(g_esp,resource);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x0001BF90u,sub_0001BF90);check_stack(frame);
        result=existing;
    } else {
        g_ecx=manager;PUSH32(g_esp,name);PUSH32(g_esp,level);PUSH32(g_esp,target);
        PUSH32(g_esp,bits);PUSH32(g_esp,frame+16);PUSH32(g_esp,frame);PUSH32(g_esp,resource);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x00016180u,sub_00016180);check_stack(frame);
        result=g_eax;
    }
    status=result?RAVEN_FOUND:RAVEN_MISSING;
    if(getenv("XML1_TEST_EFFECT_GROUP"))fprintf(stderr,
        "[RAVEN EFFECT GROUP] target=%08X resource=%08X bone=%s group=%08X duration=%g\n",
        target,resource,bolt,result,(double)duration);
done:
    g_esp=sp;g_eax=ax;g_ecx=cx;g_edx=dx;
    if(status==RAVEN_FOUND)*group=result;
    return status;
}
raven_lookup raven_xml1_guest_effect_group(uint32_t target,uint32_t resource,
    const char *bolt,uint32_t level,float duration,uint32_t *group) {
    return effect_group_dispatch(target,resource,bolt,level,duration,0,group,0);
}
raven_lookup raven_xml1_guest_effect_group_emit(uint32_t target,uint32_t resource,
    const char *bolt,uint32_t level,uint32_t group) {
    if(!group)return RAVEN_MISSING;
    uint32_t result;
    return effect_group_dispatch(target,resource,bolt,level,0,group,&result,0);
}
float raven_xml1_guest_effect_interval(uint32_t resource) {
    const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;int fp=g_fp_top;
    PUSH32(g_esp,0);RECOMP_ABI_CALL(0x000183D0u,sub_000183D0);check_stack(sp);
    g_ecx=g_eax;PUSH32(g_esp,resource);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x00025EE0u,sub_00025EE0);check_stack(sp);
    float result=(float)pop_native_float(fp);
    g_eax=ax;g_ecx=cx;g_edx=dx;return result;
}
void raven_xml1_guest_effect_group_release(uint32_t group) {
    if(!group)return;
    const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
    g_ecx=effect_manager();PUSH32(g_esp,group);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x00016650u,sub_00016650);check_stack(sp);
    g_eax=ax;g_ecx=cx;g_edx=dx;
}
/* Private emission probe: two seconds is only its upper bound. Native owner
   retirement (including remove_on_node_end below) releases it sooner. */
static struct {uint32_t owner,target,resource,group,source,source_node,target_node;float next,end;const char *bolt;} effect_probe[2];
static struct {uint32_t live,owner,origin_node;} node_powerups[128];
typedef struct imported_effect {
    struct imported_effect *next;
    uint32_t resource,group,level;
    float next_time;
    char bolt[256];
} imported_effect;
static struct {uint32_t owner,target;imported_effect *effects;} imported_effects[128];
static void imported_effects_release(unsigned slot) {
    imported_effect *effect=imported_effects[slot].effects;
    imported_effects[slot].effects=NULL;
    while(effect) {
        imported_effect *next=effect->next;
        raven_xml1_guest_effect_group_release(effect->group);
        free(effect);effect=next;
    }
}
typedef struct {unsigned slot;uint32_t scope;float now,duration;} effect_launch_context;
void raven_xml1_powerup_runtime_retire(uint32_t owner) {
    uint32_t instance;
    if(raven_xml1_active_powerup(read_guest,NULL,0x4833C0,owner,&instance)!=RAVEN_FOUND)return;
    damage_reserve_retire(owner);
    unsigned slot=owner&127;
    if(node_powerups[slot].owner==owner)node_powerups[slot].live=0;
    if(imported_effects[slot].owner==owner&&imported_effects[slot].effects) {
        // Retire while both native pools still describe this generation.
        // Waiting for the next FX tick can cross a map's pool reconstruction.
        imported_effects_release(slot);
        if(getenv("XML1_TRACE_HARMING"))fprintf(stderr,"[RAVEN SPECIAL FX RETIRE] owner=%08X\n",owner);
    }
}
static void imported_effect_launch(void *opaque,const char *path,const char *bolt,
    const char *level_text,const char *usage) {
    effect_launch_context *ctx=(effect_launch_context*)opaque;
    /* Event-selected declarations launch at their callback, not as repeating
       primary emitters. Missing how_used has already defaulted to primary. */
    if(usage&&_stricmp(usage,"primary"))return;
    if(!bolt)bolt="";
    if(!path||strlen(bolt)>=256||!level_text||
       !usage||_stricmp(usage,"primary")) {
        fprintf(stderr,"[RAVEN SPECIAL FX UNSUPPORTED] effect=%s bolt=%s usage=%s\n",
            path?path:"",bolt?bolt:"",usage?usage:"");return;
    }
    char *end;long level=strtol(level_text,&end,10);
    if(end==level_text||*end)return;
    uint32_t resource=0;
    if(raven_xml1_guest_effect_resource(path,ctx->scope,&resource)!=RAVEN_FOUND) {
        fprintf(stderr,"[RAVEN SPECIAL FX MISSING] effect=%s scope=%u\n",path,ctx->scope);return;
    }
    imported_effect *effect=(imported_effect*)calloc(1,sizeof(*effect));
    if(!effect){fputs("[RAVEN SPECIAL FX ERROR] Allocation failed\n",stderr);_Exit(4);}
    strcpy(effect->bolt,bolt);effect->resource=resource;effect->level=(uint16_t)level;
    if(raven_xml1_guest_effect_group(imported_effects[ctx->slot].target,resource,
       bolt,effect->level,ctx->duration,&effect->group)!=RAVEN_FOUND){free(effect);return;}
    float interval=raven_xml1_guest_effect_interval(resource);
    effect->next_time=interval>0?ctx->now+interval:1e30f;
    // Append, preserving duplicate declarations on separate bones.
    imported_effect **tail=&imported_effects[ctx->slot].effects;
    while(*tail)tail=&(*tail)->next;
    *tail=effect;
    if(getenv("XML1_TRACE_HARMING"))fprintf(stderr,
        "[RAVEN SPECIAL FX BEGIN] owner=%08X effect=%s bolt=%s group=%08X\n",
        imported_effects[ctx->slot].owner,path,bolt,effect->group);
}
void raven_xml1_powerup_effects_begin(uint32_t instance) {
    uint32_t owner,scope;
    if(raven_xml1_active_powerup_identity(read_guest,NULL,0x4833C0,instance,&owner)!=RAVEN_FOUND)return;
    unsigned slot=owner&127;
    imported_effects_release(slot);
    uint32_t definition=MEM32(instance+0x2C);
    if(!raven_xml1_powerup_effect_scope_get(definition,&scope))return;
    if(getenv("XML1_TRACE_HARMING"))fprintf(stderr,
        "[RAVEN SPECIAL FX OWNER] owner=%08X definition=%08X life=%g definition_life=%g flags72=%02X\n",
        owner,definition,(double)MEMF(instance+4),(double)MEMF(definition+0x24),(unsigned)MEM8(definition+0x72));
    imported_effects[slot].owner=owner;imported_effects[slot].target=MEM32(instance+0x1C);
    // Negative native life is indefinite. The native group gets a distant
    // deadline; the generation-checked powerup owner controls actual release.
    float life=MEMF(instance+4);
    effect_launch_context context={slot,scope,raven_xml1_guest_game_time(),life<0?1e30f:life};
    raven_xml1_powerup_effects_visit_shared(definition,MEMF(definition+0x4C),imported_effect_launch,&context);
}
static void imported_effects_tick(void) {
    float now=0;int sampled=0;
    for(unsigned slot=0;slot<128;++slot) {
        if(!imported_effects[slot].effects)continue;
        uint32_t instance;
        if(raven_xml1_active_powerup(read_guest,NULL,0x4833C0,imported_effects[slot].owner,&instance)!=RAVEN_FOUND) {
            if(getenv("XML1_TRACE_HARMING"))fprintf(stderr,"[RAVEN SPECIAL FX END] owner=%08X\n",imported_effects[slot].owner);
            imported_effects_release(slot);continue;
        }
        if(!sampled){now=raven_xml1_guest_game_time();sampled=1;}
        for(imported_effect *effect=imported_effects[slot].effects;effect;effect=effect->next) {
            if(!effect->group||now<effect->next_time)continue;
            raven_lookup result=raven_xml1_guest_effect_group_emit(imported_effects[slot].target,
                effect->resource,effect->bolt,effect->level,effect->group);
            if(result!=RAVEN_FOUND) {
                raven_xml1_guest_effect_group_release(effect->group);effect->group=0;continue;
            }
            float interval=raven_xml1_guest_effect_interval(effect->resource);
            effect->next_time=interval>0?now+interval:1e30f;
        }
    }
}
static raven_lookup powerup_origin_move(uint32_t instance,uint32_t *node) {
    uint32_t source=MEM32(instance+0x18),target=MEM32(instance+0x1C);
    /* XML2 15E100 uses the first valid source handle, then the target.
       A valid nonactor source does not fall back after its actor cast fails. */
    uint32_t selected=source&&raven_xml1_guest_entity_valid(NULL,source)?source:target;
    return raven_xml1_guest_actor_move(selected,node);
}
#include "engine/combat/raven_vacuum_powerup.inc"
#include "engine/scripting/raven_trigger_events_guest.inc"
void raven_xml1_powerup_node_begin(uint32_t instance) {
    uint32_t owner;
    if(raven_xml1_active_powerup_identity(read_guest,NULL,0x4833C0,instance,&owner)!=RAVEN_FOUND)return;
    unsigned slot=owner&127;
    node_powerups[slot].live=0;
    if(!raven_xml1_powerup_remove_on_node_end(MEM32(instance+0x2C)))return;
    uint32_t node=0;
    if(powerup_origin_move(instance,&node)!=RAVEN_FOUND)return;
    node_powerups[slot].owner=owner;node_powerups[slot].origin_node=node;
    node_powerups[slot].live=1;
}
static void powerup_node_tick(void) {
    for(unsigned i=0;i<128;++i) {
        if(!node_powerups[i].live)continue;
        uint32_t owner=node_powerups[i].owner,instance,current=0;
        if(raven_xml1_active_powerup(read_guest,NULL,0x4833C0,owner,&instance)!=RAVEN_FOUND) {
            node_powerups[i].live=0;continue;
        }
        if(powerup_origin_move(instance,&current)!=RAVEN_FOUND||current==node_powerups[i].origin_node)continue;
        uint32_t target=MEM32(instance+0x1C),target_node=0,target_actor=0;
        if(raven_xml1_guest_actor_move(target,&target_node)==RAVEN_FOUND) {
            /* XML2 10653C parses powerup_tag into node+94; XML1 E288F
               parses the same declaration into node+88. Native idle has
               no tag; do not compare the display name at node+8. */
            uint32_t tag=0,other_tag=0;
            if(!read_guest(NULL,current+0x88,&tag,4)||
               !read_guest(NULL,target_node+0x88,&other_tag,4))continue;
            if(other_tag&&tag==other_tag)continue;
        }
        if(raven_xml1_guest_entity_actor(NULL,target,&target_actor)!=RAVEN_FOUND)continue;
        // Clear before callbacks: removal may refresh or replace this slot.
        node_powerups[i].live=0;
        const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
        PUSH32(g_esp,instance);g_ecx=target_actor;PUSH32(g_esp,0);
        // 2B1C0 uses this same removal path: callbacks, list unlink, native
        // group cleanup and pool retirement, not just clearing a live bit.
        RECOMP_ABI_CALL(0x0002AF30u,sub_0002AF30);check_stack(sp);
        g_eax=ax;g_ecx=cx;g_edx=dx;
        if(getenv("XML1_TRACE_HARMING"))fprintf(stderr,"[RAVEN NODE END] owner=%08X target=%08X node=%08X\n",owner,target,current);
    }
}
void raven_xml1_effect_probe_tick(void) {
    powerup_node_tick();
    imported_effects_tick();
    if(!effect_probe[0].group&&!effect_probe[1].group)return;
    float now=raven_xml1_guest_game_time();
    for(unsigned i=0;i<2;++i) {
        uint32_t group=effect_probe[i].group,instance;
        if(!group)continue;
        if(i==0) {
            uint32_t source_node=0,target_node=0;
            raven_xml1_guest_actor_move(effect_probe[i].source,&source_node);
            raven_xml1_guest_actor_move(effect_probe[i].target,&target_node);
            if(source_node!=effect_probe[i].source_node||target_node!=effect_probe[i].target_node) {
                fprintf(stderr,"[RAVEN EFFECT MOVE CHANGE] owner=%08X source=%08X node=%08X->%08X target=%08X node=%08X->%08X now=%g\n",
                    effect_probe[i].owner,effect_probe[i].source,effect_probe[i].source_node,source_node,
                    effect_probe[i].target,effect_probe[i].target_node,target_node,(double)now);
                effect_probe[i].source_node=source_node;effect_probe[i].target_node=target_node;
            }
        }
        if(now>=effect_probe[i].end||raven_xml1_active_powerup(read_guest,NULL,
            0x4833C0,effect_probe[i].owner,&instance)!=RAVEN_FOUND) {
            effect_probe[i].group=0;
            raven_xml1_guest_effect_group_release(group);
            // Repeated release is harmless; stale emission must be rejected.
            raven_xml1_guest_effect_group_release(group);
            raven_lookup stale=raven_xml1_guest_effect_group_emit(effect_probe[i].target,
                effect_probe[i].resource,effect_probe[i].bolt,1,group);
            fprintf(stderr,"[RAVEN EFFECT STOP] group=%08X stale_emit=%d now=%g\n",group,stale,(double)now);
            if(stale!=RAVEN_MISSING){fputs("[RAVEN EFFECT ERROR] Reused released group\n",stderr);_Exit(4);}
        } else if(now>=effect_probe[i].next) {
            raven_lookup result=raven_xml1_guest_effect_group_emit(effect_probe[i].target,
                effect_probe[i].resource,effect_probe[i].bolt,1,group);
            float interval=raven_xml1_guest_effect_interval(effect_probe[i].resource);
            fprintf(stderr,"[RAVEN EFFECT REPEAT] group=%08X result=%d interval=%g now=%g\n",
                group,result,(double)interval,(double)now);
            if(result!=RAVEN_FOUND||!(interval>0)) {
                effect_probe[i].group=0;raven_xml1_guest_effect_group_release(group);
            } else effect_probe[i].next=now+interval;
        }
    }
}
/* XML2 14637D selects enemies before the existing radius/list operations.
 * XML1 already owns those operations, owner exclusion, refresh and lifetime.
 * Only the new share_enemies declaration changes query selection here.
 * Team names are native XML1 668B0: hero27, enemy28, altenemy29 (XML2:
 * 6E310 names the corresponding 29/30/31). XML1 has no skirmish mode. */
static void powerup_query_argument(uint32_t query,uint32_t slot,
    uint32_t mode,uint32_t argument) {
    const uint32_t sp=g_esp,method=MEM32(MEM32(query)+slot);
    PUSH32(g_esp,argument);PUSH32(g_esp,mode);g_ecx=query;
    PUSH32(g_esp,0);RECOMP_ICALL_SAFE(method,sp);check_stack(sp);
}
int raven_xml1_powerup_enemy_query(uint32_t instance,uint32_t query,
    uint32_t actor,uint32_t team) {
    if(!raven_xml1_powerup_share_enemies(MEM32(instance+0x2C)))return 0;
    const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
    if(team==27) {
        powerup_query_argument(query,0x40,2,28);
        powerup_query_argument(query,0x40,0,29);
        const uint32_t method=MEM32(MEM32(actor));
        g_ecx=actor;PUSH32(g_esp,0);RECOMP_ICALL_SAFE(method,sp);check_stack(sp);
        powerup_query_argument(query,0x4C,2,g_eax);
    }else powerup_query_argument(query,0x40,2,27);
    if(getenv("XML1_TRACE_HARMING"))fprintf(stderr,
        "[RAVEN SHARE ENEMIES] instance=%08X owner=%08X team=%u query=%08X\n",
        instance,MEM32(actor+0x1C),team,query);
    g_eax=ax;g_ecx=cx;g_edx=dx;return 1;
}
void raven_xml1_harming_life(uint32_t instance) {
    // Called after native2A7B0 fills source/target/definition, before duration
    // modifiers. It also runs on refresh; never modify a shared definition.
    if(instance<0x10000u||(uint64_t)instance+0x30>0x08000000ull)return;
    raven_xml1_damage_reserve_refresh(instance);
    /* Opt-in integration probe: run at a real powerup application, after its
       package resources have loaded. Never infer readiness from parse time. */
    static int probe_initialized;
    static const char *probe_path;
    static unsigned probe_count;
    if(!probe_initialized){probe_path=getenv("XML1_TEST_EFFECT_RESOURCE");probe_initialized=1;}
    if(probe_path&&*probe_path&&probe_count++<16) {
        uint32_t first=0,second=0,scope=0;
        int scoped=raven_xml1_powerup_effect_scope_get(MEM32(instance+0x2C),&scope);
        raven_lookup a=scoped?raven_xml1_guest_effect_resource(probe_path,scope,&first):RAVEN_MISSING;
        raven_lookup b=scoped?raven_xml1_guest_effect_resource(probe_path,scope,&second):RAVEN_MISSING;
        if(a==RAVEN_FOUND&&getenv("XML1_TEST_EFFECT_GROUP")) {
            uint32_t owner;
            if(raven_xml1_active_powerup_identity(read_guest,NULL,0x4833C0,instance,&owner)==RAVEN_FOUND) {
                float now=raven_xml1_guest_game_time();
                const char *bolts[]={"Bip01 R Forearm","Bip01 L Forearm"};
                for(unsigned i=0;i<2;++i) {
                    raven_xml1_guest_effect_group_release(effect_probe[i].group);
                    effect_probe[i].group=0;effect_probe[i].owner=owner;
                    effect_probe[i].target=MEM32(instance+0x1C);effect_probe[i].resource=first;
                    effect_probe[i].source=MEM32(instance+0x18);
                    effect_probe[i].source_node=effect_probe[i].target_node=0;
                    raven_xml1_guest_actor_move(effect_probe[i].source,&effect_probe[i].source_node);
                    raven_xml1_guest_actor_move(effect_probe[i].target,&effect_probe[i].target_node);
                    if(i==0)fprintf(stderr,"[RAVEN EFFECT MOVE BEGIN] owner=%08X source=%08X node=%08X target=%08X node=%08X\n",
                        owner,effect_probe[i].source,effect_probe[i].source_node,
                        effect_probe[i].target,effect_probe[i].target_node);
                    effect_probe[i].bolt=bolts[i];effect_probe[i].end=now+2.0f;
                    raven_xml1_guest_effect_group(effect_probe[i].target,first,bolts[i],1,2.0f,&effect_probe[i].group);
                    effect_probe[i].next=now+raven_xml1_guest_effect_interval(first);
                }
            }
        }
        fprintf(stderr,"[RAVEN EFFECT RESOURCE] instance=%08X path=%s scoped=%d scope=%u first=%d:%08X second=%d:%08X\n",
            instance,probe_path,scoped,scope,a,first,b,second);
    }
    const uint32_t definition=MEM32(instance+0x2C);
    if(!raven_harming_runtime_definition(definition)&&!raven_add_attack_definition(definition)&&
       !raven_imported_powerup_life_definition(definition))return;
    uint32_t handle;
    if(raven_xml1_active_powerup_identity(read_guest,NULL,0x4833C0,instance,&handle)!=RAVEN_FOUND){
        fputs("[RAVEN HARMING ERROR] Lifetime instance is not live\n",stderr);_Exit(4);
    }
    float life;
    raven_lookup result=raven_harming_runtime_life(read_guest,raven_xml1_guest_entity_valid,
        raven_xml1_guest_talent_actor,NULL,definition,0x4833C0,handle,MEM32(0x4D7300),
        MEM32(0x498D90),&life);
    if(result==RAVEN_INVALID){fputs("[RAVEN HARMING ERROR] Invalid lifetime operand\n",stderr);_Exit(4);}
    if(result==RAVEN_FOUND)MEMF(instance+4)=life;
    if(getenv("XML1_TRACE_HARMING"))fprintf(stderr,
        "[RAVEN IMPORTED LIFE] instance=%08X definition=%08X result=%d life=%g\n",
        instance,definition,result,MEMF(instance+4));
}
raven_lookup raven_xml1_guest_damage_record(uint32_t record,uint32_t source,
    int16_t amount,uint32_t type,uint32_t flags) {
    if(record<0x10000u||(uint64_t)record+100>0x08000000ull)return RAVEN_INVALID;
    const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
    /* 2CE70's native timed hit constructs with three zero vectors, priority10,
       zero secondary damage and zero auxiliary type. The final constructor
       argument is retained even though this constructor does not read it. */
    memset((void*)XBOX_PTR(record),0,100);
    PUSH32(g_esp,1);
    PUSH32(g_esp,0x5BC9D0);PUSH32(g_esp,0x5BC9D0);PUSH32(g_esp,0x5BC9D0);
    PUSH32(g_esp,10);PUSH32(g_esp,flags);PUSH32(g_esp,type);
    PUSH32(g_esp,0);PUSH32(g_esp,0);PUSH32(g_esp,(uint32_t)(int32_t)amount);
    PUSH32(g_esp,source);g_ecx=record;PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x0002C8C0u,sub_0002C8C0);
    check_stack(sp);g_eax=ax;g_ecx=cx;g_edx=dx;
    return RAVEN_FOUND;
}
static raven_lookup harming_deliver(uint32_t target,uint32_t record,int allow_non_actors) {
    if(record<0x10000u||(uint64_t)record+100>0x08000000ull)return RAVEN_INVALID;
    uint32_t actor;
    raven_lookup status;
    if(allow_non_actors){
        /* Original XML1 2B810 resolves the handle and casts to physent
           (factory4C0A5C, type index4C0A60). Only that base owns damage+A8;
           accepting arbitrary gameent pointers would call unrelated slots. */
        const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
        PUSH32(g_esp,target);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x0002B810u,sub_0002B810);
        check_stack(sp-4);actor=g_eax;
        g_esp=sp;g_eax=ax;g_ecx=cx;g_edx=dx;
        status=actor?RAVEN_FOUND:RAVEN_MISSING;
    }else status=raven_xml1_guest_entity_actor(NULL,target,&actor);
    if(status!=RAVEN_FOUND)return status;
    uint32_t table,method;
    if(!read_guest(NULL,actor,&table,4)||!table||
       (uint64_t)table+0xA8>UINT32_MAX||
       !read_guest(NULL,table+0xA8,&method,4)||!method)return RAVEN_INVALID;
    const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
    /* XML2 harming14F123 passes record,0,1,0. XML1's equivalent actor
       virtual is+A8 (native bleed2CF35), not XML2's+B0. Deliberately do not
       copy bleed's different first boolean or retain actor after callbacks. */
    const int trace_health=getenv("XML1_TRACE_HARMING")!=NULL;
    const float health_before=trace_health?MEMF(actor+0x240):0;
    const int16_t requested=SMEM16(record+8);
    PUSH32(g_esp,0);PUSH32(g_esp,1);PUSH32(g_esp,0);PUSH32(g_esp,record);
    g_ecx=actor;PUSH32(g_esp,0);RECOMP_ICALL_SAFE(method,sp);
    check_stack(sp);g_eax=ax;g_ecx=cx;g_edx=dx;
    if(trace_health) {
        // Resolve again after damage: death callbacks may remove the victim.
        PUSH32(g_esp,target);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x0002B810u,sub_0002B810);check_stack(sp-4);
        const uint32_t current=g_eax;
        fprintf(stderr,"[RAVEN HARMING HEALTH] target=%08X amount=%d before=%.9g after=%.9g live=%d\n",
            target,(int)requested,(double)health_before,
            current?(double)MEMF(current+0x240):0.0,current!=0);
        g_esp=sp;g_eax=ax;g_ecx=cx;g_edx=dx;
    }
    return RAVEN_FOUND;
}
raven_lookup raven_xml1_guest_harming_deliver(uint32_t target,uint32_t record) {
    return harming_deliver(target,record,0);
}
void raven_xml1_scale_affecter_changed(uint32_t instance,int removing) {
    uint32_t owner,actor,again;
    if(raven_xml1_active_powerup_identity(read_guest,NULL,0x4833C0,instance,&owner)!=RAVEN_FOUND)return;
    uint32_t definition=MEM32(instance+0x2C),target=MEM32(instance+0x1C);
    if(!definition||!raven_xml1_powerup_has_scale_affecter(definition,MEMF(definition+0x4C)))return;
    if(raven_xml1_guest_entity_actor(NULL,target,&actor)!=RAVEN_FOUND)return;
    if(raven_xml1_active_powerup(read_guest,NULL,0x4833C0,owner,&again)!=RAVEN_FOUND||again!=instance)return;
    if(!raven_xml1_guest_entity_valid(NULL,target)||MEM32(actor+0x1C)!=target)return;
    raven_actor_scale_owner_invalidate(actor,target,removing);
}
raven_lookup raven_xml1_scale_powerup_rate(uint32_t instance,int removing) {
    uint32_t owner,actor,again;
    if(raven_xml1_active_powerup_identity(read_guest,NULL,0x4833C0,instance,&owner)!=RAVEN_FOUND)
        return RAVEN_MISSING;
    const uint32_t target=MEM32(instance+0x1C),definition=MEM32(instance+0x2C);
    if(definition<0x10000u||(uint64_t)definition+0x50>0x08000000ull)return RAVEN_INVALID;
    float up,down;
    if(!raven_xml1_powerup_scale_rates(definition,&up,&down))return RAVEN_MISSING;
    if(!raven_xml1_powerup_class_share_matches(definition,MEMF(definition+0x4C)))return RAVEN_MISSING;
    if(raven_xml1_guest_entity_actor(NULL,target,&actor)!=RAVEN_FOUND)return RAVEN_MISSING;
    // Actor RTTI resolution invokes native code. Revalidate the captured
    // powerup identity before applying its rate; never reacquire a reused slot.
    if(raven_xml1_active_powerup(read_guest,NULL,0x4833C0,owner,&again)!=RAVEN_FOUND||again!=instance)
        return RAVEN_MISSING;
    if(!raven_xml1_guest_entity_valid(NULL,target)||MEM32(actor+0x1C)!=target)return RAVEN_MISSING;
    raven_actor_scale_owner_rate(actor,target,removing?down:up);
    return RAVEN_FOUND;
}
#include "engine/combat/raven_absorb_guest.inc"
static raven_lookup percent_attack_inner(uint32_t instance,uint32_t target,uint32_t record,int activating) {
    uint32_t owner,again,actor,victim;
    if(raven_xml1_active_powerup_identity(read_guest,NULL,0x4833C0,instance,&owner)!=RAVEN_FOUND)return RAVEN_MISSING;
    const uint32_t definition=MEM32(instance+0x2C),holder=MEM32(instance+0x1C);
    if(definition<0x10000u||(uint64_t)definition+0xC0>0x08000000ull)return RAVEN_INVALID;
    if(raven_percent_attack_mode(definition)!=(activating?2:1))return RAVEN_MISSING;
    if(!raven_xml1_powerup_class_share_matches(definition,MEMF(definition+0x4C)))return RAVEN_MISSING;
    const uint32_t raw_source=MEM32(instance+0x18);
    uint32_t source=raw_source;
    // XML1 canonicalizes self-source to its null sentinel on attachment.
    if(source==MEM32(0x498D90))source=holder;
    if(raven_xml1_guest_entity_actor(NULL,source,&actor)!=RAVEN_FOUND)return RAVEN_MISSING;
    if(activating)target=holder;
    else if(record<0x10000u||(uint64_t)record+100>0x08000000ull)return RAVEN_INVALID;
    const uint32_t sp=g_esp;
    // Outgoing XML2 callback accepts physical entities; activation requires
    // an actor. XML1's native resolver2B810 owns the physical-entity cast.
    if(activating){
        if(raven_xml1_guest_entity_actor(NULL,target,&victim)!=RAVEN_FOUND)return RAVEN_MISSING;
    }else{
        PUSH32(g_esp,target);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x0002B810u,sub_0002B810);check_stack(sp-4);
        victim=g_eax;g_esp=sp;
        if(!victim)return RAVEN_MISSING;
    }
    // XML2's excluded actor flag is set by setDefaultTarget (B4C60).
    // Use XML1's existing selected-target owner; do not add XML2 actor flags
    // or alter the existing XML1 command's lifetime semantics.
    if(target==MEM32(0x4858AC))return RAVEN_MISSING;
    float chance,percent;
    raven_lookup status=raven_percent_attack_sample(read_guest,raven_xml1_guest_entity_valid,
        raven_xml1_guest_talent_actor,NULL,definition,0x4833C0,owner,MEM32(0x4D7300),
        MEM32(0x498D90),&chance,&percent);
    if(status!=RAVEN_FOUND)return status;
    const double roll=raven_xml1_guest_random_unit();
    if(!(roll<chance))return RAVEN_MISSING;
    // Operand resolution and RNG call guest code. Never apply through a slot
    // or actor pointer recycled by a nested callback.
    if(raven_xml1_active_powerup(read_guest,NULL,0x4833C0,owner,&again)!=RAVEN_FOUND||again!=instance||
       MEM32(instance+0x2C)!=definition||MEM32(instance+0x1C)!=holder||MEM32(instance+0x18)!=raw_source||
       !raven_xml1_guest_entity_valid(NULL,source)||!raven_xml1_guest_entity_valid(NULL,target)||
       MEM32(actor+0x1C)!=source||MEM32(victim+0x1C)!=target)return RAVEN_MISSING;
    const float bonus=percent*MEMF(victim+0x240)+1.0f;
    int16_t amount;
    const uint32_t flags=percent>=1.0f?0x200000u:0;
    if(!activating){
        if(!raven_xml1_imported_damage_short((float)(raven_native_damage_amount(record,SMEM16(record+8))+bonus),&amount))return RAVEN_INVALID;
        raven_native_damage_set(0x29E91,record,amount,SMEM16(record+8));
        MEM16(record+8)=(uint16_t)amount;MEM32(record+0x18)|=flags;
        return RAVEN_FOUND;
    }
    if(!raven_xml1_imported_damage_short(bonus,&amount))return RAVEN_INVALID;
    if(sp<0x10100u||sp>0x08000000u)return RAVEN_INVALID;
    g_esp-=0x70;const uint32_t extra=g_esp;
    // XML1 damage-name table49480 resolves dmg_physical to0, not XML2's80.
    status=raven_xml1_guest_damage_record(extra,source,amount,0,flags);
    if(status==RAVEN_FOUND){
        // Activation creates a physical hit; XML1 owns integer damage,
        // lethal-flag treatment and combat dispatch. Retain original priority1.
        MEM16(extra+0x14)=1;
        PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00059CE0u,sub_00059CE0);check_stack(extra);
        const uint32_t manager=g_eax,method=MEM32(MEM32(manager)+0x50);
        PUSH32(g_esp,1);PUSH32(g_esp,extra);PUSH32(g_esp,actor);PUSH32(g_esp,victim);
        g_ecx=manager;PUSH32(g_esp,0);RECOMP_ICALL_SAFE(method,extra);check_stack(extra);
    }
    g_esp=sp;
    return status;
}
static struct {
    uint32_t token,manager,owner,target,actor;
    unsigned mode,queries,emissions,failed,named_bolt;
} effect_fixture;
static void effect_fixture_manager(void) {
    if(g_ecx!=0x498E88)effect_fixture.failed=1;
    ++effect_fixture.queries;
    if(effect_fixture.mode==1)MEM32(0x4833C0+0x2238+4*(effect_fixture.owner&127))+=128;
    if(effect_fixture.mode==2)MEM32(0x4DB2B8+0x105C+4*(effect_fixture.target&511))+=512;
    g_eax=effect_fixture.manager;g_esp+=4;
}
static void effect_fixture_emit(void) {
    const uint32_t sp=g_esp,position=MEM32(sp+8),direction=MEM32(sp+12);
    if(g_ecx!=effect_fixture.manager||MEM32(sp+4)!=0x81||
       MEM32(sp+16)!=effect_fixture.target||MEM32(sp+20)!=9||
       (!!MEM32(sp+24))!=effect_fixture.named_bolt||MEM32(sp+28)||
       memcmp((void*)XBOX_PTR(position),(void*)XBOX_PTR(effect_fixture.actor+0x20),12)||
       !isfinite(MEMF(direction))||!isfinite(MEMF(direction+4))||!isfinite(MEMF(direction+8)))
        effect_fixture.failed=1;
    ++effect_fixture.emissions;g_eax=0xabc;g_esp=sp+32;
}
void (*raven_xml1_powerup_effect_fixture_lookup(uint32_t address))(void) {
    if(effect_fixture.token&&address==effect_fixture.token)return effect_fixture_manager;
    if(effect_fixture.token&&address==effect_fixture.token+4)return effect_fixture_emit;
    return NULL;
}
int raven_xml1_powerup_effect_fixture(uint32_t instance,uint32_t actor,uint32_t scratch) {
    uint32_t owner;
    if(effect_fixture.token||raven_xml1_active_powerup_identity(read_guest,NULL,0x4833C0,instance,&owner)!=RAVEN_FOUND)return 1;
    const uint32_t old_table=MEM32(0x498E88),old_flag=MEM32(0x49954C),target=MEM32(actor+0x1C),sp=g_esp;
    const uint32_t gen_address=0x4DB2B8+0x105C+4*(target&511),generation=MEM32(gen_address);
    const uint32_t ax=g_eax,cx=g_ecx,dx=g_edx,fp=g_fp_top;
    memset((void*)XBOX_PTR(scratch),0,0x180);
    effect_fixture.token=scratch+0x160;effect_fixture.manager=scratch+0x100;
    effect_fixture.owner=owner;effect_fixture.target=target;effect_fixture.actor=actor;
    MEM32(0x498E88)=scratch;MEM32(0x49954C)=old_flag|1;
    MEM32(scratch+0xC)=effect_fixture.token;
    MEM32(effect_fixture.manager)=scratch+0x80;MEM32(scratch+0x80+0x30)=effect_fixture.token+4;
    uint32_t unused=0;int failed=0;
    if(effect_group_dispatch(target,0x81,"",9,0,0,&unused,owner)!=RAVEN_FOUND||effect_fixture.emissions!=1)failed=1;
    for(unsigned mode=1;mode<=2;++mode){
        effect_fixture.mode=mode;
        if(effect_group_dispatch(target,0x81,"",9,0,0,&unused,owner)!=RAVEN_MISSING||effect_fixture.emissions!=1)failed=1;
        MEM32(0x4833C0+0x2238+4*(owner&127))=owner;MEM32(gen_address)=generation;
    }
    if(effect_fixture.queries!=3||unused||g_esp!=sp||g_eax!=ax||g_ecx!=cx||g_edx!=dx||g_fp_top!=fp)failed=1;
    {
        // A private, single-node native FX name tree.260B0 still performs
        // path construction, scoped lookup and pool-generation validation.
        const uint32_t data=scratch-0x10000,tree=data+0x164;
        const uint32_t old_data=MEM32(0x47C548),path_flag=MEM32(0x508448);
        const uint32_t definition=MEM32(instance+0x2C);
        uint32_t slots[9];memcpy(slots,(void*)XBOX_PTR(definition+0x9C),sizeof(slots));
        raven_xml1_powerup_metadata_clone(scratch+0x200,definition);
        memset((void*)XBOX_PTR(data),0,0xA100);
        MEM32(0x47C548)=data;MEM32(0x508448)=path_flag|1;
        MEM32(tree+4)=0;MEM32(tree+0x10)=0x3FFFFFFF;MEM32(tree+0x14)=0x3FFFFFFF;
        strcpy((char*)XBOX_PTR(tree+0x18),"12:effects/fixture_event.xml");
        MEM32(tree+0x36EC)=0x81;MEM32(data+0xA080)=127;
        MEM32(data+0x3B10+0x62B4+4)=0x81;MEM32(data+0x3B10+0x6298)=2;
        MEM32(data+0x3B98+0x8C)=12;
        uint32_t resource=0;
        if(raven_xml1_guest_effect_resource("fixture_event",12,&resource)!=RAVEN_FOUND||resource!=0x81)failed=1;
        raven_xml1_powerup_metadata_reset(definition);
        raven_xml1_powerup_metadata_attribute(definition,"class","feral_rage");
        for(unsigned i=0;i<4;++i){
            uint32_t index=raven_xml1_powerup_effect_begin(definition);
            raven_xml1_powerup_effect_attribute(definition,index,"effect","fixture_event");
            raven_xml1_powerup_effect_attribute(definition,index,"fxlevel","9");
            raven_xml1_powerup_effect_attribute(definition,index,"how_used",i<2?"custom":i==2?"activation":"deactivation");
            raven_xml1_powerup_effect_attribute(definition,index,"tag",i<2?(i?"2":"1"):"0");
        }
        raven_xml1_powerup_effect_scope(definition,12);effect_fixture.mode=0;
        memset((void*)XBOX_PTR(definition+0x9C),0,sizeof(slots));
        raven_harming_install_callbacks(definition);
        for(unsigned i=0;i<2;++i){
            const uint32_t callback=MEM32(definition+(i?0xB0:0xB4));
            PUSH32(g_esp,0);PUSH32(g_esp,0);PUSH32(g_esp,instance);PUSH32(g_esp,0);
            raven_harming_callback_lookup(callback)();g_esp+=12;
        }
        raven_xml1_powerup_effect_event(instance,1,0);
        raven_xml1_powerup_effect_event(instance,2,0);
        if(effect_fixture.emissions!=5)failed=1;
        {
            const uint32_t actor_table=MEM32(actor),position_method=MEM32(actor_table+0x24),flags=MEM32(actor+4);
            // Named bone lookup/interning is real. An actor without a skeleton
            // follows XML1's own world-transform fallback in2E9F0; this does
            // not establish a posed-model skeleton transform.
            MEM32(actor_table+0x24)=0x75F40;MEM32(actor+4)=flags&~0x8000u;
            raven_xml1_powerup_effect_attribute(definition,0,"bolt","Bip01 R Hand");
            effect_fixture.named_bolt=1;
            raven_xml1_powerup_effect_event(instance,3,1);
            if(effect_fixture.emissions!=6)failed=1;
            raven_xml1_powerup_effect_attribute(definition,0,"bolt","fixture_invalid_bone");
            raven_xml1_powerup_effect_event(instance,3,1);
            if(effect_fixture.emissions!=6)failed=1;
            raven_xml1_powerup_effect_attribute(definition,0,"bolt","");effect_fixture.named_bolt=0;
            MEM32(actor_table+0x24)=position_method;MEM32(actor+4)=flags;
        }
        // Reject a catalog entry whose stored handle outlived its pool slot.
        MEM32(data+0x3B10+0x62B4+4)=0x101;
        raven_xml1_powerup_effect_event(instance,3,1);
        if(effect_fixture.emissions!=6||g_esp!=sp||g_fp_top!=fp)failed=1;
        MEM32(0x47C548)=old_data;MEM32(0x508448)=path_flag;
        raven_xml1_powerup_metadata_clone(definition,scratch+0x200);
        raven_xml1_powerup_metadata_retire(scratch+0x200);
        memcpy((void*)XBOX_PTR(definition+0x9C),slots,sizeof(slots));
    }
    failed|=effect_fixture.failed;
    MEM32(0x498E88)=old_table;MEM32(0x49954C)=old_flag;
    memset(&effect_fixture,0,sizeof(effect_fixture));
    fprintf(stderr,"[POWERUP EFFECT EVENT] %s native scoped lookup, Feral callbacks, lifecycle selection, named bone/fallback, invalid bone and stale resource/owner/target rejection; manager terminals substituted, posed skeleton not exercised\n",failed?"FAIL":"PASS");
    return failed;
}
typedef struct {uint32_t owner,instance,definition,target,scope;} effect_event_context;
static int effect_event_live(const effect_event_context* c) {
    uint32_t current;
    return raven_xml1_active_powerup(read_guest,NULL,0x4833C0,c->owner,&current)==RAVEN_FOUND&&
        current==c->instance&&MEM32(current+0x2C)==c->definition&&MEM32(current+0x1C)==c->target&&
        raven_xml1_guest_entity_valid(NULL,c->target);
}
static void effect_event_launch(void* opaque,const char* path,const char* bolt,
    const char* level_text,const char* usage) {
    effect_event_context* c=(effect_event_context*)opaque;(void)usage;
    if(!path||!*path||!level_text||!effect_event_live(c))return;
    char* end;long level=strtol(level_text,&end,10);
    if(end==level_text||*end)return;
    uint32_t resource,unused=0;
    if(raven_xml1_guest_effect_resource(path,c->scope,&resource)!=RAVEN_FOUND||!effect_event_live(c))return;
    effect_group_dispatch(c->target,resource,bolt,(uint16_t)level,0,0,&unused,c->owner);
}
void raven_xml1_powerup_effect_event(uint32_t instance,unsigned usage,int16_t tag) {
    effect_event_context c={0};c.instance=instance;
    if(usage>3||raven_xml1_active_powerup_identity(read_guest,NULL,0x4833C0,instance,&c.owner)!=RAVEN_FOUND)return;
    c.definition=MEM32(instance+0x2C);c.target=MEM32(instance+0x1C);
    if(!c.definition||!raven_xml1_powerup_effect_scope_get(c.definition,&c.scope))return;
    const uint32_t sp=g_esp,ax=g_eax,bx=g_ebx,cx=g_ecx,dx=g_edx,si=g_esi,di=g_edi,bp=g_ebp;
    const unsigned top=g_fp_top,cc=g_fp_cc;const int cmp=g_fp_cmp;
    double floats[8];memcpy(floats,g_fp_stack,sizeof(floats));
    raven_xml1_powerup_effects_visit_event(c.definition,MEMF(c.definition+0x4C),usage,tag,effect_event_launch,&c);
    check_stack(sp);g_eax=ax;g_ebx=bx;g_ecx=cx;g_edx=dx;g_esi=si;g_edi=di;g_ebp=bp;
    g_fp_top=top;g_fp_cc=cc;g_fp_cmp=cmp;memcpy(g_fp_stack,floats,sizeof(floats));
}
raven_lookup raven_xml1_percent_attack(uint32_t instance,uint32_t target,uint32_t record,int activating) {
    const uint32_t sp=g_esp,ax=g_eax,bx=g_ebx,cx=g_ecx,dx=g_edx,si=g_esi,di=g_edi,bp=g_ebp;
    const int top=g_fp_top,cmp=g_fp_cmp;const unsigned cc=g_fp_cc;
    double stack[8];memcpy(stack,g_fp_stack,sizeof(stack));
    raven_lookup status=percent_attack_inner(instance,target,record,activating);
    check_stack(sp);g_eax=ax;g_ebx=bx;g_ecx=cx;g_edx=dx;g_esi=si;g_edi=di;g_ebp=bp;
    memcpy(g_fp_stack,stack,sizeof(stack));g_fp_top=top;g_fp_cmp=cmp;g_fp_cc=cc;
    return status;
}
/* Private fixture: substitute only the terminal combat-manager delivery.
 * Native actor resolution, RNG, damage construction and singleton getter run. */
static struct {
    uint32_t token,source,target;
    int amount;uint32_t flags;
    unsigned calls,failed;
} percent_fixture;
static void percent_fixture_deliver(void) {
    const uint32_t sp=g_esp,record=MEM32(sp+12);
    if(g_ecx!=0x48D750||MEM32(sp+4)!=percent_fixture.target||
       MEM32(sp+8)!=percent_fixture.source||MEM32(sp+16)!=1||
       MEM32(record)!=MEM32(percent_fixture.source+0x1C)||
       SMEM16(record+8)!=percent_fixture.amount||MEM32(record+0x10)!=0||
       MEM32(record+0x18)!=percent_fixture.flags||MEM16(record+0x14)!=1)
        percent_fixture.failed=1;
    ++percent_fixture.calls;
    g_eax=0xbad;g_ecx=0xfee;g_edx=0xcafe;
    g_fp_top=4;g_fp_stack[4]=123;g_fp_cmp=1;g_fp_cc=0;
    g_esp=sp+20;
}
void (*raven_xml1_percent_attack_fixture_lookup(uint32_t address))(void) {
    return percent_fixture.token&&address==percent_fixture.token?percent_fixture_deliver:NULL;
}
int raven_xml1_percent_attack_fixture(uint32_t instance,uint32_t actor,uint32_t scratch) {
    if(percent_fixture.token)return 1;
    const uint32_t def=MEM32(instance+0x2C),sp=g_esp,target=scratch+0x400;
    const uint32_t table=MEM32(0x48D750),flag=MEM32(0x48D80C),selected=MEM32(0x4858AC);
    const uint32_t old_target=MEM32(instance+0x1C),old_source=MEM32(instance+0x18);
    const uint32_t entries=MEM32(0x4DB2B8+0x1018),entry=MEM32(0x4DB2B8+12);
    const uint32_t generation=MEM32(0x4DB2B8+0x105C+8);
    const uint32_t ax=g_eax,cx=g_ecx,dx=g_edx,top=g_fp_top,cc=g_fp_cc;
    const int cmp=g_fp_cmp;double floats[8];memcpy(floats,g_fp_stack,sizeof(floats));
    raven_xml1_powerup_metadata_clone(scratch+0x200,def);
    raven_xml1_powerup_metadata_reset(def);
    raven_xml1_powerup_metadata_attribute(def,"class","atk_instant_pct");
    raven_xml1_powerup_metadata_attribute(def,"selfonly","true");
    raven_xml1_powerup_metadata_attribute(def,"percent","0.25");
    memcpy((void*)XBOX_PTR(target),(void*)XBOX_PTR(actor),0x300);
    MEM32(target+0x1C)=0x202;MEMF(target+0x240)=80;
    MEM32(0x4DB2B8+12)=target;MEM32(0x4DB2B8+0x1018)=entries|4;
    MEM32(0x4DB2B8+0x105C+8)=0x202;
    MEM32(instance+0x1C)=0x202;MEM32(instance+0x18)=MEM32(actor+0x1C);
    memset((void*)XBOX_PTR(scratch),0,0x100);
    percent_fixture.token=scratch+0x80;percent_fixture.source=actor;percent_fixture.target=target;
    percent_fixture.amount=21;
    MEM32(scratch+0x50)=percent_fixture.token;MEM32(0x48D750)=scratch;
    MEM32(0x48D80C)=flag|1;MEM32(0x4858AC)=0;
    int failed=raven_xml1_percent_attack(instance,0,0,1)!=RAVEN_FOUND;
    if(percent_fixture.calls!=1)failed=1;
    raven_xml1_powerup_metadata_attribute(def,"percent","1");
    percent_fixture.amount=81;percent_fixture.flags=0x200000;
    if(raven_xml1_percent_attack(instance,0,0,1)!=RAVEN_FOUND||percent_fixture.calls!=2)failed=1;
    raven_xml1_powerup_metadata_attribute(def,"chance","0");
    if(raven_xml1_percent_attack(instance,0,0,1)!=RAVEN_MISSING||percent_fixture.calls!=2)failed=1;
    raven_xml1_powerup_metadata_attribute(def,"chance","1");
    MEM32(0x4DB2B8+0x105C+8)=0x402;
    if(raven_xml1_percent_attack(instance,0,0,1)!=RAVEN_MISSING||percent_fixture.calls!=2)failed=1;
    if(g_esp!=sp||g_eax!=ax||g_ecx!=cx||g_edx!=dx||g_fp_top!=top||g_fp_cmp!=cmp||g_fp_cc!=cc||
       memcmp(floats,g_fp_stack,sizeof(floats)))failed=1;
    failed|=percent_fixture.failed;
    MEM32(0x48D750)=table;MEM32(0x48D80C)=flag;MEM32(0x4858AC)=selected;
    MEM32(instance+0x1C)=old_target;MEM32(instance+0x18)=old_source;
    MEM32(0x4DB2B8+0x1018)=entries;MEM32(0x4DB2B8+12)=entry;
    MEM32(0x4DB2B8+0x105C+8)=generation;
    raven_xml1_powerup_metadata_clone(def,scratch+0x200);
    raven_xml1_powerup_metadata_retire(scratch+0x200);
    memset(&percent_fixture,0,sizeof(percent_fixture));
    fprintf(stderr,"[PERCENT ACTIVATION] %s native record, distinct source/target, lethal flag, chance, stale target and ABI; combat delivery terminal substituted\n",failed?"FAIL":"PASS");
    return failed;
}
raven_lookup raven_xml1_add_attack(uint32_t instance,uint32_t target,uint32_t record) {
    uint32_t owner,actor,victim;
    if(record<0x10000u||(uint64_t)record+100>0x08000000ull)return RAVEN_INVALID;
    // Native XML1 2CD08/2CD76 guards generated secondary hits with bit4.
    // XML2 uses a different record layout; never copy its +35 flag byte.
    if(MEM8(record+0x60)&4)return RAVEN_MISSING;
    if(raven_xml1_active_powerup_identity(read_guest,NULL,0x4833C0,instance,&owner)!=RAVEN_FOUND)
        return RAVEN_MISSING;
    const uint32_t holder=MEM32(instance+0x1C),definition=MEM32(instance+0x2C);
    if(definition<0x10000u||(uint64_t)definition+0x50>0x08000000ull)return RAVEN_INVALID;
    if(!raven_xml1_powerup_class_share_matches(definition,MEMF(definition+0x4C)))return RAVEN_MISSING;
    if(raven_xml1_guest_entity_actor(NULL,holder,&actor)!=RAVEN_FOUND||
       raven_xml1_guest_entity_actor(NULL,target,&victim)!=RAVEN_FOUND)return RAVEN_MISSING;
    float percent;int16_t flat;int mirror;
    const double percent_random=raven_xml1_guest_random_unit();
    const double flat_random=raven_xml1_guest_random_unit();
    raven_lookup status=raven_add_attack_sample(read_guest,raven_xml1_guest_entity_valid,
        raven_xml1_guest_talent_actor,NULL,definition,0x4833C0,owner,MEM32(0x4D7300),
        MEM32(0x498D90),percent_random,flat_random,
        &percent,&flat,&mirror);
    if(status!=RAVEN_FOUND)return status;
    const double base=raven_native_damage_amount(record,SMEM16(record+8));
    const double bonus=base*percent+flat;
    if(!(bonus>0))return RAVEN_MISSING;
    int16_t amount;
    if(!raven_xml1_imported_damage_short((float)bonus,&amount))return RAVEN_INVALID;
    const uint32_t type=MEM32(definition+0x34);
    if(type==MEM32(record+0x10)&&!mirror) {
        int16_t combined;
        if(!raven_xml1_imported_damage_short((float)(base+amount),&combined))return RAVEN_INVALID;
        raven_native_damage_set(0x29E91,record,combined,SMEM16(record+8));
        MEM16(record+8)=(uint16_t)combined;
        return RAVEN_FOUND;
    }
    const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
    if(sp<0x10100u||sp>0x08000000u)return RAVEN_INVALID;
    g_esp-=0x70;const uint32_t extra=g_esp;
    status=raven_xml1_guest_damage_record(extra,mirror?target:holder,amount,type,0);
    if(status==RAVEN_FOUND) {
        // Bit0 bypasses a second trait multiplier; bit4 suppresses recursion.
        MEM8(extra+0x60)|=5;
        // XML1 2CDA6 dispatches combat virtual+50; XML2's equivalent is+64.
        PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00059CE0u,sub_00059CE0);check_stack(extra);
        const uint32_t manager=g_eax,method=MEM32(MEM32(manager)+0x50);
        PUSH32(g_esp,1);PUSH32(g_esp,extra);
        PUSH32(g_esp,mirror?actor:victim);PUSH32(g_esp,mirror?victim:actor);
        g_ecx=manager;PUSH32(g_esp,0);RECOMP_ICALL_SAFE(method,extra);check_stack(extra);
    }
    g_esp=sp;g_eax=ax;g_ecx=cx;g_edx=dx;
    return status;
}
static float end_time(uint32_t instance) {
    uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;int fp=g_fp_top;
    g_ecx=instance;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00028FF0u,sub_00028FF0);
    check_stack(sp);float result=(float)pop_native_float(fp);
    g_eax=ax;g_ecx=cx;g_edx=dx;return result;
}
raven_lookup raven_xml1_harming_begin(uint32_t system,uint32_t instance,uint32_t *handle) {
    if(!handle)return RAVEN_INVALID;
    uint32_t identity;
    raven_lookup status=raven_xml1_active_powerup_identity(read_guest,NULL,system,instance,&identity);
    if(status!=RAVEN_FOUND)return status;
    const float now=raven_xml1_guest_game_time();
    MEMF(instance+0x24)=now;*handle=identity;return RAVEN_FOUND;
}
raven_lookup raven_xml1_harming_think(uint32_t system,uint32_t instance,
    uint32_t talents,uint32_t null_handle,int skirmish) {
    uint32_t handle;
    raven_lookup status=raven_xml1_active_powerup_identity(read_guest,NULL,system,instance,&handle);
    if(status!=RAVEN_FOUND)return status;
    float now;
    status=raven_xml1_harming_due(system,handle,&now);
    if(status!=RAVEN_FOUND)return status;
    const uint32_t definition=MEM32(instance+0x2C);
    if(definition<0x10000u||(uint64_t)definition+0x50>0x08000000ull)return RAVEN_INVALID;
    if(!raven_xml1_powerup_class_share_matches(definition,MEMF(definition+0x4C)))return RAVEN_MISSING;
    float sample;raven_harming_settings settings;
    status=raven_harming_runtime_sample(read_guest,raven_xml1_guest_entity_valid,
        raven_xml1_guest_talent_actor,NULL,definition,system,handle,talents,null_handle,
        raven_xml1_guest_random_unit(),&sample,&settings);
    if(status!=RAVEN_FOUND)return status;
    return raven_xml1_harming_apply_tick(system,handle,sample,settings.attacks_per_second,
        MEM32(definition+0x34),MEM32(definition+0x38),settings.flags,skirmish);
}
raven_lookup raven_xml1_harming_due(uint32_t system,uint32_t handle,float *now) {
    if(!now)return RAVEN_INVALID;
    uint32_t instance;
    raven_lookup status=raven_xml1_active_powerup(read_guest,NULL,system,handle,&instance);
    if(status!=RAVEN_FOUND)return status;
    const float current=raven_xml1_guest_game_time();
    if(!raven_xml2_harming_tick_due(MEMF(instance+0x24),current))return RAVEN_MISSING;
    *now=current;return RAVEN_FOUND;
}
raven_lookup raven_xml1_harming_reschedule(uint32_t system,uint32_t handle,uint8_t aps) {
    uint32_t instance;
    // Caller retains the original handle across damage callbacks. Resolve
    // it here rather than adopting whatever now occupies the old pointer.
    raven_lookup status=raven_xml1_active_powerup(read_guest,NULL,system,handle,&instance);
    if(status!=RAVEN_FOUND)return status;
    const float end=end_time(instance),first=raven_xml1_guest_game_time();
    if(!((double)end-(double)first>0))return RAVEN_MISSING;
    const float second=raven_xml1_guest_game_time();
    float next;
    if(!raven_xml2_harming_next_tick(end,first,second,aps,&next))return RAVEN_MISSING;
    MEMF(instance+0x24)=next;return RAVEN_FOUND;
}
raven_lookup raven_xml1_harming_tick_amount(uint32_t system,uint32_t handle,
    float sampled_damage,uint8_t aps,int16_t *amount) {
    if(!amount)return RAVEN_INVALID;
    float now;
    raven_lookup status=raven_xml1_harming_due(system,handle,&now);
    if(status!=RAVEN_FOUND)return status;
    uint32_t instance;
    status=raven_xml1_active_powerup(read_guest,NULL,system,handle,&instance);
    if(status!=RAVEN_FOUND)return status;
    /* Native28FF0 uses life+4 and start+8. Positive durations only, just
       like XML2 harming; an expired slot must never acquire a minimum hit. */
    const float life=MEMF(instance+4),remaining=end_time(instance)-now;
    if(!(life>0)||!(remaining>0))return RAVEN_MISSING;
    const float tick=raven_xml2_harming_damage(sampled_damage,life,remaining,aps);
    return raven_xml1_imported_damage_short(tick,amount)?RAVEN_FOUND:RAVEN_INVALID;
}
raven_lookup raven_xml1_harming_apply_tick(uint32_t system,uint32_t handle,
    float sampled_damage,uint8_t aps,uint32_t type,uint32_t flags,
    uint8_t definition_flags,int skirmish) {
    int16_t amount;
    raven_lookup status=raven_xml1_harming_tick_amount(system,handle,sampled_damage,aps,&amount);
    if(status!=RAVEN_FOUND)return status;
    uint32_t instance;
    status=raven_xml1_active_powerup(read_guest,NULL,system,handle,&instance);
    if(status!=RAVEN_FOUND)return status;
    const uint32_t source=MEM32(instance+0x18),target=MEM32(instance+0x1C);
    if(raven_xml2_harming_deliver(source,target,skirmish,(float)amount)) {
        const uint32_t sp=g_esp;
        if(sp<0x10070u||sp>0x08000000u)return RAVEN_INVALID;
        /* Own a private synchronous record below the caller's stack. Native
           callbacks may recurse, so never use a singleton/shared record. */
        g_esp-=0x70;
        const uint32_t record=g_esp;
        status=raven_xml1_guest_damage_record(record,source,amount,type,flags);
        if(status==RAVEN_FOUND) {
            MEM8(record+0x60)=raven_xml1_harming_trait_flags(MEM8(record+0x60),definition_flags);
            const uint32_t definition=MEM32(instance+0x2C);
            if(definition<0x10000u||(uint64_t)definition+0x71>0x08000000ull)
                status=RAVEN_INVALID;
            else {
                /* Original955C0 parses allow_non_actors into +70 bit1.
                   Reuse that native declaration; ordinary actor-only
                   definitions retain their existing target restriction. */
                status=harming_deliver(target,record,(MEM8(definition+0x70)&2)!=0);
            }
        }
        check_stack(record);g_esp=sp;
        if(status!=RAVEN_FOUND)return status;
    }
    /* Never reacquire identity from the old instance pointer: delivery can
       remove the effect and reuse its slot during death/event callbacks. */
    return raven_xml1_harming_reschedule(system,handle,aps);
}
float raven_xml1_guest_game_time(void) {
    uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;int fp=g_fp_top;
    PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00072CF0u,sub_00072CF0);
    g_ecx=g_eax;
    uint32_t method=MEM32(MEM32(g_ecx)+0x104);
    PUSH32(g_esp,0);RECOMP_ICALL_SAFE(method,sp);
    check_stack(sp);float result=(float)pop_native_float(fp);
    g_eax=ax;g_ecx=cx;g_edx=dx;return result;
}
double raven_xml1_guest_random_unit(void) {
    uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;int fp=g_fp_top;
    // Native 123330 owns initial seeding and updates 50622C. Its established
    // stream uses the same recurrence/scaling as XML2's 16DD90, without
    // copying XML2's global addresses or incrementing its diagnostic counter.
    PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00123330u,sub_00123330);
    check_stack(sp);double result=pop_native_float(fp);
    g_eax=ax;g_ecx=cx;g_edx=dx;return result;
}
int raven_xml1_guest_entity_valid(void *context,uint32_t handle) {
    (void)context;
    uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
    PUSH32(g_esp,handle);g_ecx=g_esp;PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x0006BFA0u,sub_0006BFA0);
    check_stack(sp-4);int result=!!(g_eax&255);
    g_esp=sp;g_eax=ax;g_ecx=cx;g_edx=dx;
    return result;
}
raven_lookup raven_xml1_guest_entity_actor(void *context,uint32_t handle,uint32_t *actor) {
    (void)context;
    if(!actor)return RAVEN_INVALID;
    uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
    // 293F0 combines native generation/live validation, pointer resolution
    // and the object's actual type virtual method. No XML2 bitmap offsets.
    PUSH32(g_esp,handle);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x000293F0u,sub_000293F0);
    check_stack(sp-4);uint32_t result=g_eax;
    g_esp=sp;g_eax=ax;g_ecx=cx;g_edx=dx;
    if(!result)return RAVEN_MISSING;
    *actor=result;return RAVEN_FOUND;
}

raven_lookup raven_xml1_guest_actor_move(uint32_t handle,uint32_t *node) {
    if(!node)return RAVEN_INVALID;
    uint32_t actor;
    raven_lookup status=raven_xml1_guest_entity_actor(NULL,handle,&actor);
    if(status!=RAVEN_FOUND)return status;
    /* XML1 381F0 passes actor+2F4 as the current chain node to ED700;
       40DF0/403C0 use the same node for move transition callbacks. XML2's
       actor+378 is a different layout and must never be used here. */
    uint32_t current;
    if(!read_guest(NULL,actor+0x2F4,&current,4))return RAVEN_INVALID;
    if(!current)return RAVEN_MISSING;
    if(current<0x10000u||(uint64_t)current+4>0x08000000ull)return RAVEN_INVALID;
    *node=current;return RAVEN_FOUND;
}
raven_lookup raven_xml1_guest_talent_actor(void *context,uint32_t handle,uint32_t *actor) {
    uint32_t result=0;
    if(!actor)return RAVEN_INVALID;
    raven_lookup status=raven_xml1_guest_entity_actor(context,handle,&result);
    if(status!=RAVEN_FOUND)return status;
    if(result<0x10000u||(uint64_t)result+0x2DC>0x08000000ull)return RAVEN_INVALID;
    /* XML1 94CB0/94D20 perform this same type query before using +2D8;
     * native rank lookup 46000 -> 801F0 reads stats at component+4.
     * XML2's +258 flag and +35C stats pointer are not XML1 fields. */
    uint32_t component=MEM32(result+0x2D8);
    if(!component)return RAVEN_MISSING;
    if(component<0x10000u||(uint64_t)component+4>0x08000000ull)return RAVEN_INVALID;
    *actor=result;return RAVEN_FOUND;
}

static raven_lookup rating_scope(void *context,const char *kind,const char *name,uint32_t record) {
    (void)context;
    if(!kind||!name||record<0x10000u||(uint64_t)record+0x4c>0x08000000ull)return RAVEN_INVALID;
    const size_t length=strlen(name)+1;
    if(length>1020)return RAVEN_INVALID;
    const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
    if(sp<0x10400u)return RAVEN_INVALID;
    g_esp-=1024;const uint32_t frame=g_esp;
    memcpy((void*)XBOX_PTR(frame),name,length);
    if(strcmp(kind,"scope_node")==0) {
        // 95EF5 interns the authored node through 27EF0; 94F76 compares
        // that ID with hit+48. Use the originating hit, not the actor's
        // current animation: projectiles can land after that animation ends.
        g_ecx=frame+1020;PUSH32(g_esp,frame);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x00027EF0u,sub_00027EF0);check_stack(frame);
        const int matches=MEM32(frame+1020)==MEM32(record+0x48);
        if(getenv("XML1_TRACE_HARMING")) {
            static unsigned traced[2];
            if(traced[matches]++<32)fprintf(stderr,
                "[RAVEN NODE SCOPE] name=%s expected=%08X hit=%08X matches=%d\n",
                name,MEM32(frame+1020),MEM32(record+0x48),matches);
        }
        g_esp=sp;g_eax=ax;g_ecx=cx;g_edx=dx;
        return matches?RAVEN_FOUND:RAVEN_MISSING;
    }
    if(strcmp(kind,"scope_damage")!=0) {
        g_esp=sp;return RAVEN_INVALID;
    }
    // Reuse 95E77's scope_damage parser and 94F16's parent damage type
    // lookup. XML1 scope selection accepts either the exact or parent type.
    PUSH32(g_esp,frame);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x00049480u,sub_00049480);g_esp+=4;check_stack(frame);
    const uint32_t mask=1u<<(g_eax&31),type=MEM32(record+0x10);
    PUSH32(g_esp,type);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x000494C0u,sub_000494C0);g_esp+=4;check_stack(frame);
    const int matches=(mask&(1u<<(type&31)))||(mask&(1u<<(g_eax&31)));
    g_esp=sp;g_eax=ax;g_ecx=cx;g_edx=dx;
    return matches?RAVEN_FOUND:RAVEN_MISSING;
}
int raven_xml1_stat_affecters(uint32_t actor,uint32_t type,uint32_t address,
    uint32_t record,uint32_t mode) {
    // Original XML1 name table 44E8C8; 38270 consumes move, 3A950
    // consumes both regeneration rates. Combat has separate hit bridges.
    const char *attribute=type==9?"move":type==11?"health_regen":
        type==12?"energy_regen":NULL;
    if(!attribute||mode>1||actor<0x10000u||actor>0x07fffc00u||
       address<0x10000u||address>0x07fffffcu)return 0;
    const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
    uint32_t handle=MEM32(actor+0x1fc),instance;unsigned count=0;
    float combined=mode?1.0f:0.0f;int found=0;
    while(handle!=0xffffffffu&&count++<128) {
        if(raven_xml1_active_powerup(read_guest,NULL,0x4833c0,handle,&instance)!=RAVEN_FOUND)break;
        const uint32_t next=MEM32(instance),definition=MEM32(instance+0x2c);
        float contribution;
        raven_lookup result=(mode?raven_rating_scale:raven_rating_add)(
            read_guest,raven_xml1_guest_entity_valid,raven_xml1_guest_talent_actor,
            NULL,definition,0x4833c0,handle,MEM32(0x4d7300),MEM32(0x498d90),
            attribute,record,record?rating_scope:NULL,&contribution);
        if(result==RAVEN_INVALID) {
            fputs("[RAVEN STAT ERROR] Unsupported or stale stat operand\n",stderr);_Exit(4);
        }
        if(result==RAVEN_FOUND) {
            // Match 2A327: native scope filtering only when a hit context exists.
            int matches=1;
            if(record) {
                g_ecx=definition+4;PUSH32(g_esp,record);PUSH32(g_esp,0);
                RECOMP_ABI_CALL(0x00094F00u,sub_00094F00);check_stack(sp);
                matches=(g_eax&255)!=0;
            }
            if(matches) {combined=mode?combined*contribution:combined+contribution;found=1;}
        }
        handle=next;
    }
    if(found) {
        const float before=MEMF(address);
        MEMF(address)=mode?before*combined:before+combined;
        if(getenv("XML1_TRACE_HARMING")) {
            static unsigned traced[13][2];
            if(traced[type][mode]++<16)fprintf(stderr,
                "[RAVEN STAT QUERY] actor=%08X attribute=%s mode=%u before=%g contribution=%g after=%g\n",
                actor,attribute,mode,(double)before,(double)combined,(double)MEMF(address));
        }
    }
    g_eax=ax;g_ecx=cx;g_edx=dx;
    return found;
}

void raven_xml1_combat_critical_chance(uint32_t actor,uint32_t record,uint32_t address) {
    if(actor<0x10000u||actor>0x07fffc00u||record<0x10000u||record>0x07ffff9cu||
       address<0x10000u||address>0x07fffffcu)return;
    const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
    uint32_t handle=MEM32(actor+0x1fc),instance;unsigned count=0;
    float bonus=0;
    while(handle!=0xffffffffu&&count++<128) {
        if(raven_xml1_active_powerup(read_guest,NULL,0x4833c0,handle,&instance)!=RAVEN_FOUND)break;
        const uint32_t next=MEM32(instance),definition=MEM32(instance+0x2c);
        float contribution;
        const raven_lookup result=raven_rating_add(read_guest,raven_xml1_guest_entity_valid,
            raven_xml1_guest_talent_actor,NULL,definition,0x4833c0,handle,MEM32(0x4d7300),
            MEM32(0x498d90),"atk_critical",record,rating_scope,&contribution);
        if(result==RAVEN_INVALID) {
            fputs("[RAVEN CRITICAL ERROR] Unsupported or stale critical operand\n",stderr);_Exit(4);
        }
        if(result==RAVEN_FOUND) {
            g_ecx=definition+4;PUSH32(g_esp,record);PUSH32(g_esp,0);
            RECOMP_ABI_CALL(0x00094F00u,sub_00094F00);check_stack(sp);
            if(g_eax&255)bonus+=contribution;
        }
        handle=next;
    }
    // 5C020 has already converted stock melee/ranged ranks into probability.
    // Imported atk_critical uses probability too (0.01 = one percentage
    // point). Join the local threshold, never a stored trait or a second roll.
    // Native immunity/eligibility gates and the single RNG call stay intact.
    if(bonus!=0&&isfinite(bonus)) {
        const float before=MEMF(address);MEMF(address)=before+bonus;
        if(getenv("XML1_TRACE_HARMING")) {
            static unsigned traced;
            if(traced++<32)fprintf(stderr,"[RAVEN CRITICAL] actor=%08X before=%g bonus=%g after=%g\n",
                actor,(double)before,(double)bonus,(double)MEMF(address));
        }
    }
    g_eax=ax;g_ecx=cx;g_edx=dx;
}
static int powerup_identity_matches(void *context,const char *value) {
    /* Compare using XML1's interned-name identity, not a guessed casing rule.
     * 27EF0 interns empty strings as zero, just like the event declaration. */
    uint32_t sp=g_esp;size_t size=strlen(value)+1;
    if(size>65536)return 0;
    g_esp-=(uint32_t)((size+7)&~3u);uint32_t frame=g_esp;
    memcpy((void*)XBOX_PTR(frame+4),value,size);
    g_ecx=frame;PUSH32(g_esp,frame+4);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x00027EF0u,sub_00027EF0);check_stack(frame);
    int match=MEM32(frame)==*(const uint32_t*)context;g_esp=sp;return match;
}
unsigned raven_xml1_powerup_remove_named(uint32_t actor,int tag,uint32_t name) {
    uint32_t handles[128];unsigned count=0,removed=0;
    if(!actor||raven_xml1_actor_powerups(read_guest,NULL,0x4833C0,actor,handles,&count)!=RAVEN_FOUND)return 0;
    const uint32_t owner=MEM32(actor+0x1C),sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
    for(unsigned i=0;i<count;++i) {
        uint32_t current_actor,instance;
        /* Deactivation can destroy an actor, unlink another effect or recycle
         * its slot. Snapshot identities, then resolve both owners every time. */
        if(raven_xml1_guest_entity_actor(NULL,owner,&current_actor)!=RAVEN_FOUND||current_actor!=actor)break;
        if(raven_xml1_active_powerup(read_guest,NULL,0x4833C0,handles[i],&instance)!=RAVEN_FOUND||
           MEM32(instance+0x1C)!=owner)continue;
        if(!raven_xml1_powerup_identity_visit(MEM32(instance+0x2C),tag,powerup_identity_matches,&name))continue;
        g_ecx=actor;PUSH32(g_esp,instance);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x0002AF30u,sub_0002AF30);check_stack(sp);
        if(g_eax&255)++removed;
    }
    g_eax=ax;g_ecx=cx;g_edx=dx;return removed;
}
float raven_xml1_actor_scale_factor(uint32_t actor) {
    if(!actor)return 1;
    /* This is a new consumer for scale_factor affecters, not a replacement
     * for the identically named CharacterDef skin-scale property. */
    const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
    uint32_t handle=MEM32(actor+0x1fc),instance;unsigned count=0;
    float factor=1;
    while(handle!=0xffffffffu&&count++<128) {
        if(raven_xml1_active_powerup(read_guest,NULL,0x4833c0,handle,&instance)!=RAVEN_FOUND)break;
        uint32_t next=MEM32(instance),definition=MEM32(instance+0x2c);
        raven_lookup status=raven_rating_actor_scale(read_guest,raven_xml1_guest_entity_valid,
            raven_xml1_guest_talent_actor,NULL,definition,0x4833c0,handle,
            MEM32(0x4d7300),MEM32(0x498d90),&factor);
        if(status==RAVEN_INVALID) {
            fputs("[RAVEN SCALE ERROR] Invalid scale affecter context\n",stderr);_Exit(4);
        }
        handle=next;
    }
    check_stack(sp);g_eax=ax;g_ecx=cx;g_edx=dx;
    // XML2 getter30E50 clamps the completed stat, not each declaration.
    if(factor<0.3f)factor=0.3f;if(factor>2.5f)factor=2.5f;
    return factor;
}
static void combat_affecter_scale(uint32_t actor,uint32_t record,uint32_t rating_address,const char *attribute,int defense) {
    if(actor<0x10000u||actor>0x07fffc00u||rating_address<0x10000u||rating_address>0x07fffffcu)return;
    const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
    uint32_t handle=MEM32(actor+0x1fc),instance;unsigned count=0;
    float scale=1;
    while(handle!=0xffffffffu && count++<128) {
        if(raven_xml1_active_powerup(read_guest,NULL,0x4833c0,handle,&instance)!=RAVEN_FOUND)break;
        const uint32_t next=MEM32(instance),definition=MEM32(instance+0x2c);
        float contribution;
        raven_lookup result=raven_rating_scale(read_guest,raven_xml1_guest_entity_valid,
            raven_xml1_guest_talent_actor,NULL,definition,0x4833c0,handle,MEM32(0x4d7300),
            MEM32(0x498d90),attribute,record,rating_scope,&contribution);
        if(result==RAVEN_INVALID) {
            fputs("[RAVEN RATING ERROR] Unsupported or stale rating operand\n",stderr);_Exit(4);
        }
        if(result==RAVEN_FOUND) {
            // Match native outgoing-hit scope selection; never mutate stored traits.
            g_ecx=definition+4;PUSH32(g_esp,record);PUSH32(g_esp,0);
            RECOMP_ABI_CALL(0x00094F00u,sub_00094F00);check_stack(sp);
            if(g_eax&255)scale*=contribution;
        }
        handle=next;
    }
    if(scale!=1) {
        float before=MEMF(rating_address);MEMF(rating_address)=before*scale;
        if(getenv("XML1_TRACE_HARMING"))fprintf(stderr,
            "[RAVEN AFFECTER SCALE] attribute=%s actor=%08X defense=%d before=%g scale=%g after=%g\n",
            attribute,actor,defense,(double)before,(double)scale,(double)MEMF(rating_address));
    }
    g_eax=ax;g_ecx=cx;g_edx=dx;
}

void raven_xml1_combat_rating(uint32_t actor,uint32_t record,uint32_t address,int defense) {
    combat_affecter_scale(actor,record,address,defense?"defense_rating":"attack_rating",defense);
}
void raven_xml1_combat_damage_scale(uint32_t actor,uint32_t record,uint32_t address) {
    // Native 5CD53 has completed its existing powerup multiplier query.
    // Add the imported nested damage-affecter contribution before XML1's
    // team multiplier, integer conversion and normal damage delivery.
    combat_affecter_scale(actor,record,address,"damage",-1);
}
void raven_xml1_combat_defense_damage_scale(uint32_t actor,uint32_t record,uint32_t address) {
    // XML2 14A758 caches def_damage's scale; 45F0A/45F35 applies it to
    // incoming damage. XML1 45517 has completed its native defensive
    // queries, before subtraction/scale/conversion. Join that multiplier
    // here: zero remains zero, and the native bypass and hit reactions stay
    // authoritative. Do not apply this at the earlier minimum-one clamp.
    combat_affecter_scale(actor,record,address,"def_damage",1);
}

void raven_xml1_combat_absorb_damage(uint32_t actor,uint32_t record) {
    if(actor<0x10000u||actor>0x07fffc00u||
       record<0x10000u||record>0x07ffff9cu)return;
    const int16_t native_amount=SMEM16(record+8);
    const double damage=raven_native_damage_amount(record,native_amount);
    if(!(damage>0)||!isfinite(damage))return;
    const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
    uint32_t handle=MEM32(actor+0x1fc),instance;unsigned count=0;
    float absorb=0;
    while(handle!=0xffffffffu&&count++<128) {
        if(raven_xml1_active_powerup(read_guest,NULL,0x4833c0,handle,&instance)!=RAVEN_FOUND)break;
        const uint32_t next=MEM32(instance),definition=MEM32(instance+0x2c);
        float contribution;
        raven_lookup result=raven_rating_add(read_guest,raven_xml1_guest_entity_valid,
            raven_xml1_guest_talent_actor,NULL,definition,0x4833c0,handle,MEM32(0x4d7300),
            MEM32(0x498d90),"def_absorb_damage",record,rating_scope,&contribution);
        if(result==RAVEN_INVALID) {
            fputs("[RAVEN ABSORB ERROR] Unsupported or stale absorption operand\n",stderr);_Exit(4);
        }
        if(result==RAVEN_FOUND) {
            g_ecx=definition+4;PUSH32(g_esp,record);PUSH32(g_esp,0);
            RECOMP_ABI_CALL(0x00094F00u,sub_00094F00);check_stack(sp);
            if(g_eax&255)absorb+=contribution;
        }
        handle=next;
    }
    if(absorb>0&&isfinite(absorb)) {
        // Original XML2 45D1E multiplies by the current hit, 45D24 adds
        // literal 1.0f, 45D2A..45D53 caps to missing health, and 45DBE
        // clears the damage even when health is already full. XML1's native
        // 2E5B0 setter owns its own maximum-health clamp and float store.
        const float before=MEMF(actor+0x240);
        const float maximum=(float)SMEM16(actor+0x246);
        double healing=(double)absorb*damage+1.0;
        const double missing=(double)maximum-(double)before;
        if(healing>missing)healing=missing;
        if(healing>0&&isfinite(healing)) {
            const float updated=(float)((double)before+healing);
            uint32_t bits;memcpy(&bits,&updated,sizeof(bits));
            PUSH32(g_esp,bits);g_ecx=actor;PUSH32(g_esp,0);
            RECOMP_ABI_CALL(0x0002E5B0u,sub_0002E5B0);check_stack(sp);
        }
        MEM16(record+8)=0;
        raven_native_damage_set(0x46373,record,0,native_amount);
        if(getenv("XML1_TRACE_HARMING"))fprintf(stderr,
            "[RAVEN ABSORB] actor=%08X type=%u incoming=%g portion=%g health=%g->%g max=%g\n",
            actor,MEM32(record+0x10),damage,(double)absorb,(double)before,
            (double)MEMF(actor+0x240),(double)maximum);
    }
    g_eax=ax;g_ecx=cx;g_edx=dx;
}

void raven_xml1_combat_resistance(uint32_t actor,uint32_t record) {
    if(actor<0x10000u||actor>0x07fffc00u||
       record<0x10000u||record>0x07ffff9cu)return;
    // These XML1 IDs are resolved from its original 49480 damage-name table
    // in the native powerup contract, not copied from XML2's type mask.
    const uint32_t type=MEM32(record+0x10);
    const char *attribute=type==0?"resist_physical":type==2?"resist_energy":
        type==4?"resist_fire":type==7?"resist_radiation":NULL;
    if(!attribute)return;
    const int16_t native_amount=SMEM16(record+8);
    const double damage=raven_native_damage_amount(record,native_amount);
    if(!(damage>0)||!isfinite(damage))return;
    const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
    uint32_t handle=MEM32(actor+0x1fc),instance;unsigned count=0;
    float resistance=0;
    while(handle!=0xffffffffu&&count++<128) {
        if(raven_xml1_active_powerup(read_guest,NULL,0x4833c0,handle,&instance)!=RAVEN_FOUND)break;
        const uint32_t next=MEM32(instance),definition=MEM32(instance+0x2c);
        float contribution;
        const raven_lookup result=raven_rating_add(read_guest,raven_xml1_guest_entity_valid,
            raven_xml1_guest_talent_actor,NULL,definition,0x4833c0,handle,MEM32(0x4d7300),
            MEM32(0x498d90),attribute,record,rating_scope,&contribution);
        if(result==RAVEN_INVALID) {
            fputs("[RAVEN RESIST ERROR] Unsupported or stale resistance operand\n",stderr);_Exit(4);
        }
        if(result==RAVEN_FOUND) {
            g_ecx=definition+4;PUSH32(g_esp,record);PUSH32(g_esp,0);
            RECOMP_ABI_CALL(0x00094F00u,sub_00094F00);check_stack(sp);
            if(g_eax&255)resistance+=contribution;
        }
        handle=next;
    }
    if(resistance!=0&&isfinite(resistance)) {
        // XML2 14A56C..14A59D rounds level*100 into a signed resistance
        // byte; 37E30 multiplies that byte by 0.01, and 45F42..45F5F
        // subtracts its share of the incoming damage. Bishop's authored
        // values are below the original cap; Sunfire's passive fire value
        // can reach it. Keep the signed-byte range and generic 85% ceiling
        // here; the original 75% owner-specific branch remains unaudited.
        double percentage=(double)resistance*100.0;
        percentage=percentage>=0?floor(percentage+0.5):ceil(percentage-0.5);
        if(percentage>85)percentage=85;
        if(percentage< -127)percentage=-127;
        const double factor=1.0-percentage*0.01;
        double adjusted=damage*factor;
        if(adjusted>32767.0)adjusted=32767.0;
        if(adjusted<1.0)adjusted=1.0;
        double rounded=floor(adjusted+0.5);
        if(rounded<1.0)rounded=1.0;
        MEM16(record+8)=(uint16_t)(int16_t)rounded;
        raven_native_damage_scale(0x46373,record,factor,native_amount);
        if(getenv("XML1_TRACE_HARMING"))fprintf(stderr,
            "[RAVEN RESIST] actor=%08X type=%u incoming=%g pct=%g delivered=%g native=%d\n",
            actor,type,damage,percentage,adjusted,(int)SMEM16(record+8));
    }
    g_eax=ax;g_ecx=cx;g_edx=dx;
}

#include "engine/combat/raven_damage_reserve_guest.inc"
#include "engine/inventory/raven_kill_rewards_guest.inc"
#include "engine/inventory/raven_drop_rewards_guest.inc"
#include "engine/scripting/raven_remove_events_guest.inc"
