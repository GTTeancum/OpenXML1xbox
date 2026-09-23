#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "raven_bishop_guest.h"
#include "raven_powerup_guest.h"
#include "raven_script_extensions.h"
#include "raven_power_bindings_guest.h"
#include "raven_native_energy.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct actor_contact {
    uint32_t actor, owner_handle;
    int blocking;
    raven_bishop_contact_history history;
} actor_contact;
/* XML1 entity manager uses a 512-entry handle pool. BDF90 validates the full
 * generation against manager+105C and its live bitmap. Keep the full handle
 * and pointer here too; indexing alone must never establish ownership. */
static actor_contact contacts[512];
typedef struct leap_state {
    uint32_t actor,handle;
    float started,origin[3];
    int moving;
} leap_state;
static leap_state leaps[512];
static uint32_t handler_table;
extern uint32_t xbox_HeapAlloc(uint32_t size, uint32_t alignment);
extern void xbox_HeapFree(uint32_t address);
static int has_type(uint32_t entity,uint32_t class_global);
static int handler_live_trace(void);
/* Temporary fixture boundaries, never installed during normal registration. */
static struct {
    uint32_t token,node,actor,atom;
    unsigned lookups,eligibility;
    unsigned events,conditions;
    uint32_t model_slot,animation_controller;
    int condition_result;
    uint32_t event_next, tags[3], owners[3];
    int failed;
} dispatch_fixture;
static void fixture_node_lookup(void) {
    ++dispatch_fixture.lookups;
    if(MEM32(MEM32(g_esp+4))!=dispatch_fixture.atom)dispatch_fixture.failed=1;
    g_eax=dispatch_fixture.node;g_esp+=8;
}
static void fixture_node_eligible(void) {
    ++dispatch_fixture.eligibility;
    if(MEM32(g_esp+4)!=dispatch_fixture.actor || MEM32(g_esp+8))dispatch_fixture.failed=1;
    g_eax=1;g_esp+=12;
}
static void fixture_event_dispatch(void) {
    unsigned i=dispatch_fixture.events++;
    if(i>=3)dispatch_fixture.failed=1;
    else {dispatch_fixture.tags[i]=MEM32(g_esp+4);dispatch_fixture.owners[i]=g_ecx;}
    if(MEM32(g_esp+8)!=dispatch_fixture.actor || MEM32(g_esp+12)!=dispatch_fixture.actor)
        dispatch_fixture.failed=1;
    if(!i)MEM32(dispatch_fixture.actor+0x2F4)=dispatch_fixture.event_next;
    g_eax=1;g_esp+=16;
}
static void fixture_node_condition(void) {
    ++dispatch_fixture.conditions;
    if(MEM32(g_esp+4)!=dispatch_fixture.actor)dispatch_fixture.failed=1;
    g_eax=dispatch_fixture.condition_result;g_esp+=8;
}
static void fixture_model_slot(void) {g_eax=dispatch_fixture.model_slot;g_esp+=4;}
static void fixture_animation_controller(void) {g_eax=dispatch_fixture.animation_controller;g_esp+=4;}
static void fixture_animation_find(void) {
    if(strcmp((const char*)XBOX_PTR(MEM32(g_esp+4)),"power_13"))dispatch_fixture.failed=1;
    MEM32(MEM32(g_esp+8))=77;g_eax=1;g_esp+=12;
}
static void block_state(uint32_t actor,int active) {
    if(!actor)return;
    uint32_t handle=MEM32(actor+0x1C);
    if(!handle)return;
    actor_contact *entry=&contacts[handle&511];
    if(entry->actor!=actor||entry->owner_handle!=handle) {
        memset(entry,0,sizeof(*entry));entry->actor=actor;entry->owner_handle=handle;
    }
    entry->blocking=active;
}
int xml1_block_active(uint32_t actor) {
    if(!actor)return 0;
    uint32_t handle=MEM32(actor+0x1C);
    const actor_contact *entry=&contacts[handle&511];
    return handle && entry->actor==actor && entry->owner_handle==handle && entry->blocking;
}
int xml1_block_attack_gate(uint32_t actor,uint32_t record) {
    if(!xml1_block_active(actor)||!(MEM8(record+0x60)&1)||
       (MEM32(record+0x18)&0x20000000u))return 0;
    /* Named AttackType table: direct0/blast4/crush7/psionic8 cannot be
     * blocked here. Original XML2 switch retains qualification above8. */
    uint32_t kind=MEM32(record+0xC);
    int accepted=kind!=0 && kind!=4 && kind!=7 && kind!=8;
    if(handler_live_trace()&&accepted)fprintf(stderr,"[HANDLER DETAIL] block hit actor=%08X attacktype=%u\n",actor,kind);
    return accepted;
}
void xml1_block_parse_modifier(uint32_t name,uint32_t output) {
    /* Native 49510 tokenizes and combines the existing modifier table.
     * This missing name is recognized only after its native lookup misses. */
    if(!(g_eax&255)&&!_stricmp((const char*)XBOX_PTR(name),"dmgmod_unblockable"))
        MEM32(output)=0x20000000u;
}
static void block_start(void) {
    block_state(MEM32(g_esp+4),1);
    sub_000E6D80(); /* Native move-start time, ret12. */
}
static void block_end(void) {block_state(MEM32(g_esp+4),0);g_esp+=8;}
static void handler_decision(void) {
    uint32_t actor=MEM32(g_esp+4);
    raven_bishop_contact_history history;
    if(xml1_bishop_contact_snapshot(actor,&history) &&
       xml1_bishop_drain_decide(actor,&history)) {
        if(handler_live_trace())fprintf(stderr,"[HANDLER DETAIL] bishop accepted actor=%08X target=%08X\n",actor,history.handle);
        SET_LO8(g_eax,1);g_esp+=12;
        return;
    }
    /* Original return address, this pointer and arguments are still intact. */
    sub_000E7460();
}
static void restore_visible_on_interrupt(void) {
    /* Absent XML2 handler 104830, interrupt slot +0C. XML1's powerup query
     * 2E280 tests native invisible effect 10; preserve an active powerup. */
    uint32_t actor=MEM32(g_esp+4),sp=g_esp;
    unsigned hidden_before=MEM8(actor+0x336)&4;
    g_ecx=actor;PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x0002E280u,sub_0002E280);
    if(!(g_eax&255)) {
        g_ecx=actor;PUSH32(g_esp,0);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x0002E220u,sub_0002E220);
    }
    if(handler_live_trace())fprintf(stderr,"[HANDLER DETAIL] visibility actor=%08X before=%u after=%u\n",actor,hidden_before,MEM8(actor+0x336)&4);
    if(g_esp!=sp) {fputs("[CHARACTER HANDLER ERROR] Visibility callback ABI\n",stderr);_Exit(4);}
    g_esp=sp+8;
}
static void pickup_throw_interrupt(void) {
    /* Missing XML2 FFCD0 delegates interruption to its actor release API.
     * XML1 owns that operation at 40B90, including target cleanup. */
    uint32_t sp=g_esp;
    uint32_t actor=MEM32(sp+4),held=MEM32(actor+0x554);
    g_ecx=actor;PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x00040B90u,sub_00040B90);
    if(handler_live_trace())fprintf(stderr,"[HANDLER DETAIL] pickup release actor=%08X before=%08X after=%08X\n",actor,held,MEM32(actor+0x554));
    if(g_esp!=sp) {fputs("[CHARACTER HANDLER ERROR] Pickup callback ABI\n",stderr);_Exit(4);}
    g_esp=sp+8;
}
static void nightcrawler_boltons_interrupt(void) {
    /* Absent XML2 FF800: three tagged cleanup events. Reload the current
     * node after each event, because dispatch can change the actor's node. */
    uint32_t sp=g_esp,actor=MEM32(sp+4);
    for(int tag=100;tag<=102;++tag) {
        xml1_script_dispatch_combat_trigger(MEM32(actor+0x2F4),actor,tag);
        if(handler_live_trace())fprintf(stderr,"[HANDLER DETAIL] boltons cleanup actor=%08X tag=%d hidden=%u\n",actor,tag,MEM8(actor+0x336)&4);
    }
    g_esp=sp+8;
}
/* Missing XML2 moving-bolt-ons callback FF840. Keep movement in XML1's
 * physical API: 1209C0 computes facing and 760D0 publishes velocity. */
static void moving_boltons_update(void) {
    uint32_t sp=g_esp,actor=MEM32(sp+4);
    unsigned fp=g_fp_top;
    g_esp-=12;uint32_t velocity=g_esp;
    PUSH32(g_esp,actor+0x2C);PUSH32(g_esp,velocity);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x001209C0u,sub_001209C0);g_esp+=8;
    MEMF(velocity)*=120.0f;MEMF(velocity+4)*=120.0f;
    MEM32(velocity+8)=MEM32(actor+0x108);
    g_ecx=actor;PUSH32(g_esp,velocity);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x000760D0u,sub_000760D0);g_esp+=12;
    if(g_esp!=sp||g_fp_top!=fp) {fputs("[CHARACTER HANDLER ERROR] Moving bolt-ons ABI\n",stderr);_Exit(4);}
    g_esp=sp+8;
}
/* Shared by the missing Rogue torpedo and Wolverine lunge handlers.
 * XML2 100800 stops only horizontal motion. XML1 760D0 retains ownership
 * of the physical velocity caches; no actor flags or game clock are changed. */
static void lunge_end(void) {
    uint32_t sp=g_esp,actor=MEM32(sp+4);unsigned fp=g_fp_top;
    g_esp-=12;uint32_t velocity=g_esp;
    MEMF(velocity)=0;MEMF(velocity+4)=0;
    MEM32(velocity+8)=MEM32(actor+0x108);
    g_ecx=actor;PUSH32(g_esp,velocity);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x000760D0u,sub_000760D0);g_esp+=12;
    if(g_esp!=sp||g_fp_top!=fp) {fputs("[CHARACTER HANDLER ERROR] Lunge end ABI\n",stderr);_Exit(4);}
    g_esp=sp+8;
}
/* XML2 104990: retain preexisting velocity until elapsed time is strictly
 * greater than 0.4, then move forward at 600 while preserving vertical speed.
 * This is a new handler callback, not a change to XML1's existing lunges. */
static void wolv_lunge_update(void) {
    uint32_t sp=g_esp,actor=MEM32(sp+4);unsigned fp=g_fp_top;
    float elapsed=raven_xml1_guest_game_time()-MEMF(actor+0x3F0);
    if(elapsed>0.4f) {
        g_esp-=12;uint32_t velocity=g_esp;
        PUSH32(g_esp,actor+0x2C);PUSH32(g_esp,velocity);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x001209C0u,sub_001209C0);g_esp+=8;
        MEMF(velocity)*=600.0f;MEMF(velocity+4)*=600.0f;
        MEM32(velocity+8)=MEM32(actor+0x108);
        g_ecx=actor;PUSH32(g_esp,velocity);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x000760D0u,sub_000760D0);g_esp+=12;
    }
    if(g_esp!=sp||g_fp_top!=fp) {fputs("[CHARACTER HANDLER ERROR] Lunge movement ABI\n",stderr);_Exit(4);}
    g_esp=sp+8;
}
/* XML2 104850, shared by Rogue torpedo and Wolverine lunge: normal combat
 * decisions resume at one second, including equality, not before. */
static void lunge_decision(void) {
    uint32_t sp=g_esp,actor=MEM32(sp+4);
    if(raven_xml1_guest_game_time()-MEMF(actor+0x3F0)<1.0f) {
        SET_LO8(g_eax,0);g_esp=sp+12;return;
    }
    sub_000E7460();
}
static float actor_animation_fraction(uint32_t actor) {
    /* Native XML1 animation progress API; no output-delta parameter. */
    uint32_t sp=g_esp;unsigned fp=g_fp_top;
    g_ecx=actor;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x0003A3E0u,sub_0003A3E0);
    float result=(float)g_fp_stack[g_fp_top];g_fp_top=(g_fp_top+1)&7;
    if(g_esp!=sp||g_fp_top!=fp) {fputs("[CHARACTER HANDLER ERROR] Animation fraction ABI\n",stderr);_Exit(4);}
    return result;
}
static float torpedo_speed(float fraction) {
    /* XML2 100920: inclusive 0.4..0.7 animation window. */
    return fraction>=0.4f&&fraction<=0.7f?600.0f:0.0f;
}
static void rogue_torpedo_update(void) {
    uint32_t sp=g_esp,actor=MEM32(sp+4);unsigned fp=g_fp_top;
    float fraction=actor_animation_fraction(actor);
    float speed=torpedo_speed(fraction);
    if(handler_live_trace()&&speed>0){static unsigned n;if(n++<4)fprintf(stderr,"[HANDLER DETAIL] torpedo motion actor=%08X fraction=%.3f speed=%.1f\n",actor,fraction,speed);}
    g_esp-=12;uint32_t velocity=g_esp;
    PUSH32(g_esp,actor+0x2C);PUSH32(g_esp,velocity);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x001209C0u,sub_001209C0);g_esp+=8;
    MEMF(velocity)*=speed;MEMF(velocity+4)*=speed;
    MEM32(velocity+8)=MEM32(actor+0x108);
    g_ecx=actor;PUSH32(g_esp,velocity);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x000760D0u,sub_000760D0);g_esp+=12;
    if(g_esp!=sp||g_fp_top!=fp) {fputs("[CHARACTER HANDLER ERROR] Torpedo movement ABI\n",stderr);_Exit(4);}
    g_esp=sp+8;
}
static int friendly_fire_enabled(void) {
    uint32_t sp=g_esp;
    if(MEM8(0x485840))return 1;
    /* Native friendlyfire console variable (6E7A0) and multiplayer query
     * (8A320), not copied XML2 global flags. */
    PUSH32(g_esp,0);RECOMP_ABI_CALL(0x0008A600u,sub_0008A600);
    g_ecx=g_eax;uint32_t method=MEM32(MEM32(g_ecx)+0x54);
    PUSH32(g_esp,0);RECOMP_ICALL_SAFE(method,sp);
    return !!(g_eax&255);
}
static uint32_t character_team(uint32_t actor) {
    g_ecx=actor;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00026E60u,sub_00026E60);
    return g_eax;
}
static int character_teams_can_hit(uint32_t actor,uint32_t target) {
    uint32_t team=character_team(target);
    return team!=character_team(actor)||friendly_fire_enabled();
}
static void torpedo_contact(uint32_t actor,uint32_t target,float fraction) {
    uint32_t sp=g_esp,node=MEM32(actor+0x2F4);
    /* Structure is XML1's named CPhysicalEntity property at +2C2,
     * established by its parser933A0. Do not read XML2's +31C. */
    if(node&&target&&has_type(target,0x4C0A60)&&MEM8(target+0x2C2)<2) {
        if(character_teams_can_hit(actor,target)) {
            int delivered=xml1_script_dispatch_combat_trigger(node,actor,100);
            if(handler_live_trace())fprintf(stderr,"[HANDLER DETAIL] torpedo contact actor=%08X target=%08X event_result=%d\n",actor,target,delivered);
        }
    } else if(node&&(double)fraction>0.65) {
        g_ecx=node;PUSH32(g_esp,0);PUSH32(g_esp,0);
        RECOMP_ICALL_SAFE(MEM32(MEM32(node)+0xF4),sp);
        uint32_t chain=g_eax;
        g_ecx=actor;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x0002E290u,sub_0002E290);
        g_ecx=g_eax;PUSH32(g_esp,0);PUSH32(g_esp,chain);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x000ED6E0u,sub_000ED6E0);
        uint32_t next=g_eax;MEM32(actor+0x324)=next;
        g_ecx=actor;PUSH32(g_esp,1);PUSH32(g_esp,next);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x0003B100u,sub_0003B100);
    }
    if(g_esp!=sp) {fputs("[CHARACTER HANDLER ERROR] Torpedo contact ABI\n",stderr);_Exit(4);}
}
static void rogue_torpedo_contact(void) {
    uint32_t sp=g_esp,actor=MEM32(sp+4),target=MEM32(sp+8);
    torpedo_contact(actor,target,actor_animation_fraction(actor));
    g_esp=sp+16;
}
static uint32_t lunge_target(uint32_t actor) {
    uint32_t sp=g_esp;
    g_esp-=4;MEM32(g_esp)=MEM32(actor+0x554);g_ecx=g_esp;
    PUSH32(g_esp,0);RECOMP_ABI_CALL(0x0006BF80u,sub_0006BF80);
    uint32_t target=g_eax;g_esp+=4;
    if(g_esp!=sp) {fputs("[CHARACTER HANDLER ERROR] Lunge target ABI\n",stderr);_Exit(4);}
    return target&&has_type(target,0x485878)?target:0;
}
static void wolv_lunge_attack_end(void) {
    uint32_t sp=g_esp,actor=MEM32(sp+4),target=lunge_target(actor);
    /* Original 104C60 releases the victim reservation and contact handle.
     * Native handle resolution checks generation, so recycled victims are
     * never modified through an old lunge contact. */
    if(handler_live_trace())fprintf(stderr,"[HANDLER DETAIL] lunge release actor=%08X target=%08X\n",actor,target);
    if(target)MEM32(target+0x160)=0;
    g_ecx=actor;PUSH32(g_esp,0);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x0003CDF0u,sub_0003CDF0);
    if(g_esp!=sp) {fputs("[CHARACTER HANDLER ERROR] Lunge release ABI\n",stderr);_Exit(4);}
    g_esp=sp+8;
}
static void wolv_lunge_attack_update(void) {
    uint32_t sp=g_esp,actor=MEM32(sp+4),target=lunge_target(actor);
    unsigned fp=g_fp_top;
    if(target&&(MEM8(target+0x54C)&0x40)) {
        double dx=(double)MEMF(target+0x20)-MEMF(actor+0x20);
        double dy=(double)MEMF(target+0x24)-MEMF(actor+0x24);
        double dz=(double)MEMF(target+0x28)-MEMF(actor+0x28);
        if(dx*dx+dy*dy+dz*dz<=3600.0) {
            /* 104B40 normalizes the planar direction and obtains its yaw.
             * 32F60 then supplies (0,0,yaw) to the native rotation setter.
             * atan2 is independent of that normalization's magnitude. */
            double yaw=(dx==0&&dy==0)?0:atan2(dy,dx);
            if(yaw<0)yaw+=6.2831853071795864769;
            g_esp-=12;uint32_t rotation=g_esp;
            MEMF(rotation)=0;MEMF(rotation+4)=0;MEMF(rotation+8)=(float)yaw;
            g_ecx=actor;uint32_t method=MEM32(MEM32(actor)+0x2C);
            PUSH32(g_esp,rotation);PUSH32(g_esp,0);
            RECOMP_ICALL_SAFE(method,rotation);g_esp+=12;
            goto done;
        }
    }
    if(raven_xml1_guest_game_time()-MEMF(actor+0x3F0)>0.2f) {
        /* Native idle atom is initialized at E8E30. Resolve it through the
         * actor's native style, then request its normal immediate transition. */
        g_ecx=actor;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x0002E290u,sub_0002E290);
        g_ecx=g_eax;PUSH32(g_esp,0);PUSH32(g_esp,0x4F32A8);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x000ED6E0u,sub_000ED6E0);
        uint32_t next=g_eax;
        g_ecx=actor;PUSH32(g_esp,1);PUSH32(g_esp,next);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x0003B100u,sub_0003B100);
    }
done:
    if(g_esp!=sp||g_fp_top!=fp) {fputs("[CHARACTER HANDLER ERROR] Lunge tracking ABI\n",stderr);_Exit(4);}
    g_esp=sp+8;
}
static void wolv_lunge_interrupt(void) {
    uint32_t sp=g_esp;
    wolv_lunge_attack_end();g_esp=sp;
    lunge_end();
}
static void wolv_lunge_contact(void) {
    uint32_t sp=g_esp,actor=MEM32(sp+4),target=MEM32(sp+8),collision=MEM32(sp+12);
    uint32_t reserved_by=0,victim_handle=0,action=0;
    if(!target||!has_type(target,0x485878))target=0;
    if(target) {
        uint32_t team=character_team(target),own=character_team(actor);
        if((team==26||team==own)&&!friendly_fire_enabled())goto finish;
        /* Native XML1 victim eligibility handles invulnerability, character
         * restrictions and current combat modifiers through 38340. */
        g_ecx=target;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00038340u,sub_00038340);
        if(g_eax&255) {
            action=24;reserved_by=MEM32(actor+0x1C);victim_handle=MEM32(target+0x1C);
        }
    } else {
        if(!collision)goto finish;
        g_ecx=collision;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x000A07E0u,sub_000A07E0);
        if(MEMF(g_eax+8)-MEMF(actor+0x28)<14.0f)goto finish;
    }
    {
        uint32_t node=MEM32(actor+0x2F4);
        g_ecx=node;PUSH32(g_esp,action);PUSH32(g_esp,0);
        RECOMP_ICALL_SAFE(MEM32(MEM32(node)+0xF4),sp);
        uint32_t chain=g_eax;
        g_ecx=actor;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x0002E290u,sub_0002E290);
        g_ecx=g_eax;PUSH32(g_esp,0);PUSH32(g_esp,chain);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x000ED6E0u,sub_000ED6E0);
        MEM32(actor+0x324)=g_eax;
    }
finish:
    if(MEM32(actor+0x324)) {
        MEMF(actor+0x3F0)=raven_xml1_guest_game_time();
        uint32_t next=MEM32(actor+0x324);
        g_ecx=actor;PUSH32(g_esp,1);PUSH32(g_esp,next);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x0003B100u,sub_0003B100);
        if(target) {
            if(handler_live_trace())fprintf(stderr,"[HANDLER DETAIL] lunge reserve actor=%08X target=%08X owner=%08X\n",actor,target,reserved_by);
            MEM32(target+0x160)=reserved_by;
            g_ecx=actor;PUSH32(g_esp,victim_handle);PUSH32(g_esp,0);
            RECOMP_ABI_CALL(0x0003CDF0u,sub_0003CDF0);
        }
    }
    if(g_esp!=sp) {fputs("[CHARACTER HANDLER ERROR] Lunge contact ABI\n",stderr);_Exit(4);}
    g_esp=sp+16;
}
/* XML2 104540 obtains/creates per-owner leap state. Bind it to XML1's full
 * entity generation, with the same lifetime as the actor reset hook. Unlike
 * a shared two-slot scratch pool this also permits several imported actors. */
static leap_state *leap_for(uint32_t actor) {
    uint32_t handle=MEM32(actor+0x1C);
    if(!handle)return NULL;
    leap_state *s=&leaps[handle&511];
    if(s->actor!=actor||s->handle!=handle) {
        memset(s,0,sizeof(*s));s->actor=actor;s->handle=handle;s->moving=1;
    }
    return s;
}
static void toad_reset(void) {
    leap_state *s=leap_for(MEM32(g_esp+4));
    if(s){s->started=0;s->moving=1;}
    g_esp+=8;
}
static void toad_restart(void) {
    uint32_t sp=g_esp,actor=MEM32(sp+4);
    toad_reset();g_esp=sp;
    g_ecx=actor;PUSH32(g_esp,27);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x000381F0u,sub_000381F0);
    if(!g_eax) {
        g_ecx=actor;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x0002E290u,sub_0002E290);
        g_ecx=g_eax;PUSH32(g_esp,0);PUSH32(g_esp,0x4F32A8);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x000ED6E0u,sub_000ED6E0);
    }
    MEM32(actor+0x324)=g_eax;
    g_ecx=actor;PUSH32(g_esp,1);PUSH32(g_esp,g_eax);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x0003B100u,sub_0003B100);
    g_esp=sp+8;
}
static void toad_start(void) {
    uint32_t sp=g_esp,actor=MEM32(sp+4);
    leap_state *s=leap_for(actor);
    if(!s) {toad_restart();g_esp=sp+16;return;}
    if(s->started==0) {
        s->started=raven_xml1_guest_game_time();
        /* World-position getter +24 has the same native XML1 interface. */
        g_esp-=12;uint32_t out=g_esp;
        g_ecx=actor;PUSH32(g_esp,out);PUSH32(g_esp,0);
        RECOMP_ICALL_SAFE(MEM32(MEM32(actor)+0x24),sp);
        memcpy(s->origin,(const void*)XBOX_PTR(g_eax),12);g_esp+=12;
    }
    g_esp=sp+16;
}
static void toad_decision(void) {
    uint32_t sp=g_esp,actor=MEM32(sp+4),self=g_ecx;
    leap_state *s=leap_for(actor);
    if(s) {
        if(raven_xml1_guest_game_time()-s->started<0.5f) {SET_LO8(g_eax,0);g_esp=sp+12;return;}
        s->started=0;s->moving=1;
        g_ecx=self;sub_000E7460();return;
    }
    g_ecx=actor;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x0002E290u,sub_0002E290);
    g_ecx=g_eax;PUSH32(g_esp,0);PUSH32(g_esp,0x4F32A8);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x000ED6E0u,sub_000ED6E0);
    MEM32(actor+0x324)=g_eax;SET_LO8(g_eax,g_eax!=0);g_esp=sp+12;
}
static void toad_update(void) {
    uint32_t sp=g_esp,actor=MEM32(sp+4);
    /* Actor is the first stack argument: original 104716 uses entry ESP+4. */
    leap_state *s=leap_for(actor);
    if(!s){toad_restart();g_esp=sp+8;return;}
    if(s->moving && raven_xml1_guest_game_time()-s->started>0.25f) {
        if(handler_live_trace()){static unsigned n;if(n++<4)fprintf(stderr,"[HANDLER DETAIL] toad motion actor=%08X speed=350\n",actor);}
        g_esp-=12;uint32_t velocity=g_esp;
        PUSH32(g_esp,actor+0x2C);PUSH32(g_esp,velocity);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x001209C0u,sub_001209C0);g_esp+=8;
        MEMF(velocity)*=350;MEMF(velocity+4)*=350;MEM32(velocity+8)=MEM32(actor+0x108);
        g_ecx=actor;PUSH32(g_esp,velocity);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x000760D0u,sub_000760D0);g_esp+=12;
    }
    g_esp=sp+8;
}
static void toad_contact(void) {
    uint32_t sp=g_esp;leap_state *s=leap_for(MEM32(sp+4));
    if(s)s->moving=0;else toad_restart();
    g_esp=sp+16;
}
/* Rogue energy-drain chooses power10/12/13 (XML2 100720). XML1 already owns
 * the first two enums; power13 is a new enum resolved through the model's
 * named-animation API, never by stealing a native slot in its fixed bank. */
static void rogue_drain_start(void) {
    uint32_t self=g_ecx;
    unsigned choice=(unsigned)(raven_xml1_guest_random_unit()*3);
    const uint32_t animation[3]={0x91,0x93,0xD6};
    MEM32(MEM32(g_esp+12))=animation[choice<3?choice:2];
    if(handler_live_trace())fprintf(stderr,"[HANDLER DETAIL] rogue animation=%X actor=%08X\n",animation[choice<3?choice:2],MEM32(g_esp+4));
    g_ecx=self;sub_000E6D80();
}
static void rogue_drain_interrupt(void) {
    uint32_t sp=g_esp,actor=MEM32(sp+4);
    if(actor) {
        g_ecx=actor;PUSH32(g_esp,0);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x0002E220u,sub_0002E220);
    }
    g_esp=sp+8;
}
static void rogue_drain_decision(void) {
    uint32_t self=g_ecx;
    if(!(raven_xml1_guest_game_time()-MEMF(MEM32(g_esp+4)+0x3F0)>0.05f)) {
        SET_LO8(g_eax,0);g_esp+=12;return;
    }
    g_ecx=self;sub_000E7460();
}
int xml1_missing_animation_index(void) {
    if(MEM32(g_esp+4)!=0xD6)return 0;
    uint32_t sp=g_esp,actor=g_ecx,out=MEM32(sp+8),found=0;
    if(out) {
        /* Same model/controller lookup contract used by native 36793..367AA.
         * Keep missing assets a lookup failure, as the native bank does. */
        PUSH32(g_esp,0);RECOMP_ICALL_SAFE(MEM32(MEM32(actor)+0x180),sp);
        if(g_eax && MEM32(g_eax)) {
            g_ecx=MEM32(g_eax);PUSH32(g_esp,0);
            RECOMP_ICALL_SAFE(MEM32(MEM32(g_ecx)+0x14),sp);
            if(g_eax) {
                g_ecx=g_eax;g_esp-=16;uint32_t name=g_esp;
                strcpy((char*)XBOX_PTR(name),"power_13");
                PUSH32(g_esp,out);PUSH32(g_esp,name);PUSH32(g_esp,0);
                RECOMP_ICALL_SAFE(MEM32(MEM32(g_ecx)+0x38),sp);
                found=g_eax&255;g_esp+=16;
            }
        }
    }
    SET_LO8(g_eax,found);g_esp=sp+12;return 1;
}
uint32_t xml1_power13_animation(uint32_t actor) {
    uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
    g_esp-=4;uint32_t out=g_esp;MEM32(out)=0;
    g_ecx=actor;PUSH32(g_esp,out);PUSH32(g_esp,0xD6);PUSH32(g_esp,0);
    xml1_missing_animation_index();
    uint32_t result=(g_eax&255)?MEM32(out):0;
    if(handler_live_trace())fprintf(stderr,"[HANDLER DETAIL] rogue power13 actor=%08X found=%u index=%u\n",actor,g_eax&255,result);
    g_esp=sp;g_eax=ax;g_ecx=cx;g_edx=dx;return result;
}
static uint32_t handler_chain(uint32_t actor,uint32_t node,uint32_t action) {
    uint32_t sp=g_esp;
    if(!node)return 0;
    g_ecx=node;PUSH32(g_esp,action);PUSH32(g_esp,0);
    RECOMP_ICALL_SAFE(MEM32(MEM32(node)+0xF4),sp);
    uint32_t chain=g_eax;
    g_ecx=actor;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x0002E290u,sub_0002E290);
    g_ecx=g_eax;PUSH32(g_esp,0);PUSH32(g_esp,chain);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x000ED6E0u,sub_000ED6E0);return g_eax;
}
static int gambit_can_grab(uint32_t target) {
    if(!target||!has_type(target,0x485878)||MEM8(target+0x2C2)>=2)return 0;
    /* Named effect time_bomb: XML2 type 92, native XML1 type 57. Reuse the
     * existing query, never import XML2's numeric ID into XML1's table. */
    g_ecx=target;PUSH32(g_esp,0);PUSH32(g_esp,57);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x0002B250u,sub_0002B250);return !(g_eax&255);
}
/* Missing FCB00: choose the short-range uncharged victim branch, otherwise
 * the alternate chain. Native 4065A supplies the attempted node at actor+328;
 * its animation-state output uses flags +64 (XML2's larger output uses +6C). */
static void gambit_decide_start(void) {
    uint32_t sp=g_esp,actor=MEM32(sp+4),out=MEM32(sp+12),next=0;
    uint32_t node=MEM32(actor+0x328),grab_target=0;
    if(!(MEM8(actor+0x334)&1)) {
        g_esp-=64;uint32_t frame=g_esp,start=frame,end=frame+12,extent=frame+24,trace=frame+40;
        MEM32(trace)=0;
        g_ecx=actor;PUSH32(g_esp,start);PUSH32(g_esp,0);
        RECOMP_ICALL_SAFE(MEM32(MEM32(actor)+0x24),sp);
        if(g_eax!=start)memcpy((void*)XBOX_PTR(start),(const void*)XBOX_PTR(g_eax),12);
        PUSH32(g_esp,actor+0x2C);PUSH32(g_esp,end);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x001209C0u,sub_001209C0);g_esp+=8;
        for(unsigned axis=0;axis<3;++axis)MEMF(end+axis*4)=MEMF(start+axis*4)+60*MEMF(end+axis*4);
        g_ecx=actor;PUSH32(g_esp,extent);PUSH32(g_esp,0);
        RECOMP_ICALL_SAFE(MEM32(MEM32(actor)+0x28),sp);
        PUSH32(g_esp,trace);PUSH32(g_esp,g_eax);PUSH32(g_esp,end);PUSH32(g_esp,start);
        PUSH32(g_esp,MEM32(actor+0x1C));PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x000A2D00u,sub_000A2D00);g_esp+=20;
        if(g_eax&255) {
            g_ecx=trace;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x000A07B0u,sub_000A07B0);
            if(!(g_eax&255)) {
                g_ecx=trace;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x000A0780u,sub_000A0780);
                if(gambit_can_grab(g_eax)){grab_target=g_eax;next=handler_chain(actor,node,24);}
            }
        }
        g_esp+=64;
    }
    if(!next)next=handler_chain(actor,node,25);
    if(handler_live_trace())fprintf(stderr,"[HANDLER DETAIL] gambit actor=%08X target=%08X next=%08X\n",actor,grab_target,next);
    if(next) {
        g_ecx=next;PUSH32(g_esp,actor);PUSH32(g_esp,0);
        RECOMP_ICALL_SAFE(MEM32(MEM32(next)+0xC),sp);
        if(!(g_eax&255)) {
            MEM8(out+0x64)|=3;
            PUSH32(g_esp,0);RECOMP_ABI_CALL(0x000E6D10u,sub_000E6D10);
        } else {
            g_ecx=next;PUSH32(g_esp,0);RECOMP_ICALL_SAFE(MEM32(MEM32(next)+0xC8),sp);
            MEM32(out)=g_eax;
            g_ecx=actor;PUSH32(g_esp,1);PUSH32(g_esp,next);PUSH32(g_esp,0);
            RECOMP_ABI_CALL(0x0003B100u,sub_0003B100);
        }
    }
    if(g_esp!=sp) {fputs("[CHARACTER HANDLER ERROR] Gambit start ABI\n",stderr);_Exit(4);}
    g_esp=sp+16;
}
static int assigned_power_input(uint32_t actor,uint32_t input,int pressed) {
    if(!actor||!input||!(MEM32(input)&0x80))return 0;
    uint32_t node=MEM32(actor+0x2F4),component=MEM32(actor+0x2D8);
    if(!node||!component)return 0;
    char character[21],assigned[20];
    memcpy(character,(const void*)XBOX_PTR(component+0x20C),20);character[20]=0;
    g_ecx=node+8;PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x00027B00u,sub_00027B00);
    const char *current=(const char*)XBOX_PTR(g_eax);
    /* XML2 10B830 uses strstr (3D41E0), so power1_loop belongs to power1.
     * This new handler uses the existing imported power-binding catalog,
     * without requiring samepowerhold metadata or changing that system. */
    for(unsigned slot=0;slot<4;++slot) {
        if(raven_power_binding_name(character,slot+5,assigned)&&strstr(current,assigned))
            return !!(MEM32(input+(pressed?4:0))&(1u<<(MEM32(0x451A9C+slot*4)&31)));
    }
    return 0;
}
static void assigned_power_special_decision(int pressed) {
    uint32_t sp=g_esp,actor=MEM32(sp+4),input=MEM32(sp+8),self=g_ecx;
    unsigned fp=g_fp_top;
    int accepted=0;
    /* Missing XML2 FF8A0 (held) and 1048A0 (pressed) select the special chain with a null requirement actor, then
     * checks virtual +0C. Use native XML1 lookup and eligibility unchanged. */
    if(assigned_power_input(actor,input,pressed)) {
        uint32_t node=MEM32(actor+0x2F4);
        g_ecx=node;PUSH32(g_esp,24);PUSH32(g_esp,0);
        RECOMP_ICALL_SAFE(MEM32(MEM32(node)+0xF4),sp);
        uint32_t chain=g_eax;
        g_ecx=actor;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x0002E290u,sub_0002E290);
        g_ecx=g_eax;PUSH32(g_esp,0);PUSH32(g_esp,chain);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x000ED6E0u,sub_000ED6E0);
        node=g_eax;MEM32(actor+0x324)=node;
        if(node) {
            g_ecx=node;PUSH32(g_esp,actor);PUSH32(g_esp,0);
            RECOMP_ICALL_SAFE(MEM32(MEM32(node)+0xC),sp);
            accepted=!!(g_eax&255);
        }
    }
    if(g_esp!=sp||g_fp_top!=fp) {fputs("[CHARACTER HANDLER ERROR] Moving bolt-ons decision ABI\n",stderr);_Exit(4);}
    if(handler_live_trace()&&accepted)fprintf(stderr,"[HANDLER DETAIL] assigned chain actor=%08X pressed=%d accepted=1\n",actor,pressed);
    if(accepted) {SET_LO8(g_eax,1);g_esp=sp+12;return;}
    g_ecx=self;sub_000E7460();
}
static void moving_boltons_decision(void) {assigned_power_special_decision(0);}
static void wolv_frenzy_decision(void) {
    /* XML2 1048A0 -> 10B9F0 selects input+4 (pressed), while the power
     * modifier is still required in input+0. Never repeat merely on hold. */
    assigned_power_special_decision(1);
}
static void block_decision(void) {
    uint32_t sp=g_esp,actor=MEM32(sp+4),input=MEM32(sp+8),self=g_ecx;
    block_state(actor,1);
    int stay=0;
    if(handler_live_trace())fprintf(stderr,"[HANDLER DETAIL] block input actor=%08X held=%08X node=%08X\n",actor,input?MEM32(input):0,MEM32(actor+0x2F4));
    if(assigned_power_input(actor,input,0)) {
        uint32_t node=MEM32(actor+0x2F4);
        g_ecx=node;PUSH32(g_esp,actor);PUSH32(g_esp,0);
        RECOMP_ICALL_SAFE(MEM32(MEM32(node)+0xC),sp);stay=!!(g_eax&255);
    }
    if(handler_live_trace()&&stay)fprintf(stderr,"[HANDLER DETAIL] block held actor=%08X\n",actor);
    if(!stay) {
        uint32_t node=MEM32(actor+0x2F4);
        g_ecx=node;PUSH32(g_esp,24);PUSH32(g_esp,0);
        RECOMP_ICALL_SAFE(MEM32(MEM32(node)+0xF4),sp);
        uint32_t chain=g_eax;
        g_ecx=actor;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x0002E290u,sub_0002E290);
        g_ecx=g_eax;PUSH32(g_esp,0);PUSH32(g_esp,chain);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x000ED6E0u,sub_000ED6E0);
        MEM32(actor+0x324)=g_eax;
        if(g_eax) {SET_LO8(g_eax,1);g_esp=sp+12;return;}
    }
    g_ecx=self;sub_000E7460();
}
static int handler_live_trace(void) {
    static int enabled=-1;
    if(enabled<0)enabled=getenv("XML1_TRACE_HANDLER_PROBES")!=NULL;
    return enabled;
}
#include "raven_missing_area_handlers.inc"

int xml1_bishop_is_code(uint32_t address) {
    return (handler_table && (address==handler_table+1444 || address==handler_table+1448 || address==handler_table+32 || address==handler_table+112 || address==handler_table+192 || address==handler_table+272 || address==handler_table+1280 || address==handler_table+1284 || address==handler_table+432 || address==handler_table+512 || address==handler_table+1288 || address==handler_table+1292 || address==handler_table+1296 || address==handler_table+1300 || address==handler_table+1304 || address==handler_table+1308 || address==handler_table+1312 || address==handler_table+1316 || address==handler_table+1320 || address==handler_table+1324 || address==handler_table+1328 || (address>=handler_table+1332 && address<=handler_table+1396 && !((address-handler_table)&3)))) ||
        (dispatch_fixture.token && (address==dispatch_fixture.token || address==dispatch_fixture.token+4 || address==dispatch_fixture.token+8 || address==dispatch_fixture.token+12 || address==dispatch_fixture.token+16 || address==dispatch_fixture.token+20 || address==dispatch_fixture.token+24));
}
/* Always-on, bounded activation evidence for the imported handlers. Log at
 * execution (not name lookup), before and after the callback. A crash leaves
 * its last entry visible. Repeated update calls are sampled exponentially so
 * diagnostics do not turn per-frame combat into synchronous disk traffic.
 * Fixture records are explicitly distinguished from real gameplay activity. */
static const char *handler_names[15]={
    "ch_bishop_drain",
    "ch_restore_visible_on_interrupt",
    "ch_pickup_throw",
    "ch_nightcrawlerboltons",
    "ch_ngtmovingboltons",
    "ch_wolv_frenzy",
    "ch_block",
    "ch_rogue_torpedo",
    "ch_wolv_lunge_attack",
    "ch_wolv_lunge",
    "ch_toad_leap",
    "ch_rogue_energy_drain_atk",
    "ch_gambitdecide2",
    "ch_magnetic_grasp",
    "ch_storm_chain_lightning",
};
static unsigned handler_test_active,handler_test_entered,handler_test_returned;
extern size_t xbox_GetMappedSize(void);
static unsigned handler_trace_identity(unsigned fallback,uint32_t self) {
    /* Shared cleanup/decision functions belong to the actual receiver's
     * registered table. Also accept the direct table used by private tests. */
    uint32_t table=self;
    if(!(table>=handler_table && table<handler_table+1200 &&
         !((table-handler_table)%80))) {
        if(!self || self>xbox_GetMappedSize()-4)return fallback;
        table=MEM32(self);
    }
    if(table<handler_table || table>=handler_table+1200 ||
       (table-handler_table)%80)return fallback;
    unsigned id=(table-handler_table)/80;
    if((fallback==3 && (id==3||id==4)) ||
       (fallback==7 && (id==7||id==9)))return id;
    return fallback;
}
static void trace_handler(unsigned id,const char *callback,uint32_t actor,
                          unsigned long long count,const char *phase) {
    fprintf(stderr,"[XML2 HANDLER] context=%s name=%s callback=%s actor=%08X call=%llu phase=%s\n",
        handler_test_active?"fixture":"game",handler_names[id],callback,actor,count,phase);
    fflush(stderr);
}
#define TRACED_HANDLER(fn,id) \
static void traced_##fn(void) { \
    static unsigned long long count; \
    uint32_t actor=MEM32(g_esp+4); \
    unsigned actual=handler_trace_identity(id,g_ecx); \
    unsigned long long call=++count; \
    int report=handler_test_active || call<=4 || !(call&(call-1)); \
    if(handler_test_active)handler_test_entered|=1u<<actual; \
    if(report)trace_handler(actual,#fn,actor,call,"enter"); \
    fn(); \
    if(handler_test_active)handler_test_returned|=1u<<actual; \
    if(report)trace_handler(actual,#fn,actor,call,"return"); \
}
TRACED_HANDLER(handler_decision,0)
TRACED_HANDLER(restore_visible_on_interrupt,1)
TRACED_HANDLER(pickup_throw_interrupt,2)
TRACED_HANDLER(nightcrawler_boltons_interrupt,3)
TRACED_HANDLER(moving_boltons_update,4)
TRACED_HANDLER(moving_boltons_decision,4)
TRACED_HANDLER(wolv_frenzy_decision,5)
TRACED_HANDLER(block_start,6)
TRACED_HANDLER(block_end,6)
TRACED_HANDLER(block_decision,6)
TRACED_HANDLER(lunge_end,7)
TRACED_HANDLER(lunge_decision,7)
TRACED_HANDLER(rogue_torpedo_update,7)
TRACED_HANDLER(rogue_torpedo_contact,7)
TRACED_HANDLER(wolv_lunge_attack_end,8)
TRACED_HANDLER(wolv_lunge_attack_update,8)
TRACED_HANDLER(wolv_lunge_update,9)
TRACED_HANDLER(wolv_lunge_interrupt,9)
TRACED_HANDLER(wolv_lunge_contact,9)
TRACED_HANDLER(toad_start,10)
TRACED_HANDLER(toad_update,10)
TRACED_HANDLER(toad_decision,10)
TRACED_HANDLER(toad_contact,10)
TRACED_HANDLER(toad_restart,10)
TRACED_HANDLER(toad_reset,10)
TRACED_HANDLER(rogue_drain_start,11)
TRACED_HANDLER(rogue_drain_interrupt,11)
TRACED_HANDLER(rogue_drain_decision,11)
TRACED_HANDLER(gambit_decide_start,12)
TRACED_HANDLER(magnetic_start,13)
TRACED_HANDLER(magnetic_decision,13)
TRACED_HANDLER(magnetic_update,13)
TRACED_HANDLER(magnetic_contact,13)
TRACED_HANDLER(lightning_update,14)
TRACED_HANDLER(lightning_interrupt,14)
TRACED_HANDLER(lightning_decision,14)
#undef TRACED_HANDLER

void (*xml1_bishop_lookup(uint32_t address))(void) {
    if(dispatch_fixture.token && address==dispatch_fixture.token+16)return fixture_model_slot;
    if(dispatch_fixture.token && address==dispatch_fixture.token+20)return fixture_animation_controller;
    if(dispatch_fixture.token && address==dispatch_fixture.token+24)return fixture_animation_find;
    if(dispatch_fixture.token && address==dispatch_fixture.token)return fixture_node_lookup;
    if(dispatch_fixture.token && address==dispatch_fixture.token+4)return fixture_node_eligible;
    if(dispatch_fixture.token && address==dispatch_fixture.token+8)return fixture_event_dispatch;
    if(dispatch_fixture.token && address==dispatch_fixture.token+12)return fixture_node_condition;
    if(handler_table && address==handler_table+1372)return traced_magnetic_start;
    if(handler_table && address==handler_table+1376)return traced_magnetic_decision;
    if(handler_table && address==handler_table+1380)return traced_magnetic_update;
    if(handler_table && address==handler_table+1384)return traced_magnetic_contact;
    if(handler_table && address==handler_table+1388)return traced_lightning_update;
    if(handler_table && address==handler_table+1392)return traced_lightning_interrupt;
    if(handler_table && address==handler_table+1396)return traced_lightning_decision;
    if(handler_table && address==handler_table+1444)return lightning_parse;
    if(handler_table && address==handler_table+1448)return lightning_copy;
    if(handler_table && address==handler_table+1368)return traced_gambit_decide_start;
    if(handler_table && address==handler_table+1356)return traced_rogue_drain_start;
    if(handler_table && address==handler_table+1360)return traced_rogue_drain_interrupt;
    if(handler_table && address==handler_table+1364)return traced_rogue_drain_decision;
    if(handler_table && address==handler_table+1332)return traced_toad_start;
    if(handler_table && address==handler_table+1336)return traced_toad_update;
    if(handler_table && address==handler_table+1340)return traced_toad_decision;
    if(handler_table && address==handler_table+1344)return traced_toad_contact;
    if(handler_table && address==handler_table+1348)return traced_toad_restart;
    if(handler_table && address==handler_table+1352)return traced_toad_reset;
    if(handler_table && address==handler_table+1320)return traced_wolv_lunge_update;
    if(handler_table && address==handler_table+1324)return traced_wolv_lunge_interrupt;
    if(handler_table && address==handler_table+1328)return traced_wolv_lunge_contact;
    if(handler_table && address==handler_table+1312)return traced_wolv_lunge_attack_end;
    if(handler_table && address==handler_table+1316)return traced_wolv_lunge_attack_update;
    if(handler_table && address==handler_table+1296)return traced_lunge_end;
    if(handler_table && address==handler_table+1300)return traced_rogue_torpedo_update;
    if(handler_table && address==handler_table+1304)return traced_lunge_decision;
    if(handler_table && address==handler_table+1308)return traced_rogue_torpedo_contact;
    if(handler_table && address==handler_table+512)return traced_block_start;
    if(handler_table && address==handler_table+1288)return traced_block_end;
    if(handler_table && address==handler_table+1292)return traced_block_decision;
    if(handler_table && address==handler_table+432)return traced_wolv_frenzy_decision;
    if(handler_table && address==handler_table+1280)return traced_moving_boltons_update;
    if(handler_table && address==handler_table+1284)return traced_moving_boltons_decision;
    if(handler_table && address==handler_table+112)return traced_restore_visible_on_interrupt;
    if(handler_table && address==handler_table+192)return traced_pickup_throw_interrupt;
    if(handler_table && address==handler_table+272)return traced_nightcrawler_boltons_interrupt;
    return handler_table && address==handler_table+32?traced_handler_decision:NULL;
}
static void populate_handler(void) {
    memcpy((void*)XBOX_PTR(handler_table),(const void*)XBOX_PTR(0x3D77E4),32);
    MEM32(handler_table+0x18)=handler_table+32;
    strcpy((char*)XBOX_PTR(handler_table+36),"ch_bishop_drain");
    memcpy((void*)XBOX_PTR(handler_table+80),(const void*)XBOX_PTR(0x3D77E4),32);
    MEM32(handler_table+80+0xC)=handler_table+112;
    strcpy((char*)XBOX_PTR(handler_table+116),"ch_restore_visible_on_interrupt");
    memcpy((void*)XBOX_PTR(handler_table+160),(const void*)XBOX_PTR(0x3D77E4),32);
    MEM32(handler_table+160+0xC)=handler_table+192;
    strcpy((char*)XBOX_PTR(handler_table+196),"ch_pickup_throw");
    memcpy((void*)XBOX_PTR(handler_table+240),(const void*)XBOX_PTR(0x3D77E4),32);
    MEM32(handler_table+240+0xC)=handler_table+272;
    strcpy((char*)XBOX_PTR(handler_table+276),"ch_nightcrawlerboltons");
    memcpy((void*)XBOX_PTR(handler_table+320),(const void*)XBOX_PTR(0x3D77E4),32);
    MEM32(handler_table+320+0xC)=handler_table+272;
    MEM32(handler_table+320+0x10)=handler_table+1280;
    MEM32(handler_table+320+0x18)=handler_table+1284;
    strcpy((char*)XBOX_PTR(handler_table+356),"ch_ngtmovingboltons");
    memcpy((void*)XBOX_PTR(handler_table+400),(const void*)XBOX_PTR(0x3D77E4),32);
    MEM32(handler_table+400+0x18)=handler_table+432;
    strcpy((char*)XBOX_PTR(handler_table+436),"ch_wolv_frenzy");
    memcpy((void*)XBOX_PTR(handler_table+480),(const void*)XBOX_PTR(0x3D77E4),32);
    MEM32(handler_table+480+4)=handler_table+512;
    MEM32(handler_table+480+8)=handler_table+1288;
    MEM32(handler_table+480+12)=handler_table+1288;
    MEM32(handler_table+480+24)=handler_table+1292;
    strcpy((char*)XBOX_PTR(handler_table+516),"ch_block");
    memcpy((void*)XBOX_PTR(handler_table+560),(const void*)XBOX_PTR(0x3D77E4),32);
    MEM32(handler_table+560+8)=handler_table+1296;
    MEM32(handler_table+560+12)=handler_table+1296;
    MEM32(handler_table+560+16)=handler_table+1300;
    MEM32(handler_table+560+24)=handler_table+1304;
    MEM32(handler_table+560+28)=handler_table+1308;
    strcpy((char*)XBOX_PTR(handler_table+596),"ch_rogue_torpedo");
    memcpy((void*)XBOX_PTR(handler_table+640),(const void*)XBOX_PTR(0x3D77E4),32);
    MEM32(handler_table+640+8)=handler_table+1312;
    MEM32(handler_table+640+12)=handler_table+1312;
    MEM32(handler_table+640+16)=handler_table+1316;
    strcpy((char*)XBOX_PTR(handler_table+676),"ch_wolv_lunge_attack");
    memcpy((void*)XBOX_PTR(handler_table+720),(const void*)XBOX_PTR(0x3D77E4),32);
    MEM32(handler_table+720+8)=handler_table+1296;
    MEM32(handler_table+720+12)=handler_table+1324;
    MEM32(handler_table+720+16)=handler_table+1320;
    MEM32(handler_table+720+24)=handler_table+1304;
    MEM32(handler_table+720+28)=handler_table+1328;
    strcpy((char*)XBOX_PTR(handler_table+756),"ch_wolv_lunge");
    memcpy((void*)XBOX_PTR(handler_table+800),(const void*)XBOX_PTR(0x3D77E4),32);
    MEM32(handler_table+800+4)=handler_table+1332;
    MEM32(handler_table+800+16)=handler_table+1336;
    MEM32(handler_table+800+24)=handler_table+1340;
    MEM32(handler_table+800+28)=handler_table+1344;
    MEM32(handler_table+800+32)=handler_table+1348;
    MEM32(handler_table+800+36)=handler_table+1352;
    strcpy((char*)XBOX_PTR(handler_table+844),"ch_toad_leap");
    memcpy((void*)XBOX_PTR(handler_table+880),(const void*)XBOX_PTR(0x3D77E4),32);
    MEM32(handler_table+880+4)=handler_table+1356;
    MEM32(handler_table+880+12)=handler_table+1360;
    MEM32(handler_table+880+24)=handler_table+1364;
    strcpy((char*)XBOX_PTR(handler_table+916),"ch_rogue_energy_drain_atk");
    memcpy((void*)XBOX_PTR(handler_table+960),(const void*)XBOX_PTR(0x3D77E4),32);
    MEM32(handler_table+960+4)=handler_table+1368;
    strcpy((char*)XBOX_PTR(handler_table+996),"ch_gambitdecide2");
    memcpy((void*)XBOX_PTR(handler_table+1040),(const void*)XBOX_PTR(0x3D77E4),32);
    MEM32(handler_table+1040+4)=handler_table+1372;
    MEM32(handler_table+1040+16)=handler_table+1380;
    MEM32(handler_table+1040+24)=handler_table+1376;
    MEM32(handler_table+1040+32)=handler_table+1384;
    strcpy((char*)XBOX_PTR(handler_table+1084),"ch_magnetic_grasp");
    memcpy((void*)XBOX_PTR(handler_table+1120),(const void*)XBOX_PTR(0x3D77E4),32);
    MEM32(handler_table+1120+12)=handler_table+1392;
    MEM32(handler_table+1120+16)=handler_table+1388;
    MEM32(handler_table+1120+24)=handler_table+1396;
    strcpy((char*)XBOX_PTR(handler_table+1156),"ch_storm_chain_lightning");
    MEM32(handler_table+1400)=MEM32(0x3D5B44);lightning_table=handler_table+1404;
    memcpy((void*)XBOX_PTR(lightning_table),(const void*)XBOX_PTR(0x3D5B48),40);
    MEM32(lightning_table+16)=handler_table+1444;
    MEM32(lightning_table+24)=handler_table+1448;
}
void xml1_bishop_register(void) {
    const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
    const unsigned fp=g_fp_top;
    const uint32_t registry=0x4F3410;
    if(!handler_table) {
        /* E7C20 runs from the CRT initializer table, before the game's
         * allocator singleton (5BBAB4) exists. These host-owned dispatch
         * tables live for the process lifetime and are never game-freed.
         * Allocate guest-addressable runtime storage, as the audio bridge
         * does, rather than recursively constructing the unready game heap. */
        handler_table=xbox_HeapAlloc(1536,16);
        if(!handler_table) {fputs("[BISHOP DRAIN ERROR] Handler allocation\n",stderr);_Exit(4);}
        populate_handler();
    }
    for(unsigned handler=0;handler<15;++handler) {
    uint32_t table=handler_table+80*handler;
    g_esp-=4;uint32_t atom_at=g_esp;MEM32(atom_at)=0;
    g_ecx=atom_at;PUSH32(g_esp,table+(handler==10||handler==13?44:36));PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x00014500u,sub_00014500);
    uint32_t atom=MEM32(atom_at);unsigned occupied=0;
    for(unsigned i=0;i<96;++i) {
        if(!(MEM32(registry+0x930+4*(i>>5))&(1u<<(i&31))))continue;
        ++occupied;
        /* Key is stored by E7B09 at registry+18+16*slot. Never replace
         * a registered implementation, including a future stock addition. */
        if(MEM32(registry+0x18+16*i)==atom)goto done;
    }
    if(occupied==96) {
        fputs("[BISHOP DRAIN ERROR] Native handler registry full\n",stderr);_Exit(4);
    }
    g_ecx=registry;PUSH32(g_esp,atom_at);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x000E7AF0u,sub_000E7AF0);
    if(!g_eax) {fputs("[BISHOP DRAIN ERROR] Native handler insertion\n",stderr);_Exit(4);}
    MEM32(g_eax)=table;
done:
    g_esp+=4;
    }
    if(g_esp!=sp || g_fp_top!=fp) {fputs("[BISHOP DRAIN ERROR] Registration ABI\n",stderr);_Exit(4);}
    g_eax=ax;g_ecx=cx;g_edx=dx;
}
/* Exercise the XML1 caller, not a hand-authored XML2-shaped stack. XML1
 * CCombatNode::Update (E17C0) forwards exactly one actor argument. */
static void fixture_update_dispatch(uint32_t table,uint32_t actor,uint32_t scratch) {
    uint32_t sp=g_esp;
    MEM32(scratch)=0x3D8BDC;MEM32(scratch+0xB8)=scratch+0xC0;MEM32(scratch+0xC0)=table;
    g_ecx=scratch;PUSH32(g_esp,actor);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x000E17C0u,sub_000E17C0);
    if(g_esp!=sp) {fputs("[CHARACTER HANDLER ERROR] Native update caller ABI\n",stderr);_Exit(4);}
}
static int area_handler_fixture(uint32_t pool) {
    uint32_t sp=g_esp,actor=pool+0x8000,input=pool+0x8800,event=pool+0x8900,
        clone=pool+0x8A00,text=pool+0x8B00;unsigned fp=g_fp_top;int failed=0;
    float origin[3]={0,0,0},target[3]={100,0,0},v[3],forward[3]={1,0,0};
    if(magnetic_pull(origin,target,0,10,0,v)!=100||v[0]!=0||v[2]!=300)failed=1;
    magnetic_pull(origin,target,1,10,0,v);if(v[0]!=-300||v[2]!=300)failed=1;
    magnetic_pull(origin,target,50,10,0,v);if(v[0]!=-300||v[2]!=0)failed=1;
    magnetic_pull(origin,target,50,10,1,v);if(v[2]!=300)failed=1;
    magnetic_pull(origin,origin,0,10,0,v);if(!isfinite(v[0])||v[0]!=0||v[1]!=0)failed=1;
    memset((void*)XBOX_PTR(actor),0,0x600);MEM32(actor)=0x3C9204;
    MEM32(actor+0x1C)=0x202;MEM32(actor+4)=32;MEMF(actor+0x108)=37;
    MEMF(input+8)=.5f;magnetic_capture(actor,input);
    /* Exhausted-pool path does not require the full game's heap/world startup. */
    uint32_t factory=0x4C2AA8,query_initialized=MEM32(0x4C63F8);uint8_t busy[3];
    MEM32(0x4C63F8)|=1;
    for(unsigned i=0;i<3;++i){busy[i]=MEM8(factory+0x50+0x304*i);MEM8(factory+0x50+0x304*i)=1;}
    fixture_update_dispatch(handler_table+1040,actor,pool+0x9E00);
    if(fabsf(hypotf(MEMF(actor+0x100),MEMF(actor+0x104))-100)>.001f||MEMF(actor+0x108)!=37)failed=1;
    for(unsigned i=0;i<3;++i)MEM8(factory+0x50+0x304*i)=busy[i];
    MEM32(0x4C63F8)=query_initialized;
    MEMF(input+8)=2;magnetic_capture(actor,input);if(magnetic_inputs[2].magnitude!=1)failed=1;
    MEM16(actor+0x398)=0xFFFF;
    fixture_update_dispatch(handler_table+1120,actor,pool+0x9E00);
    lightning_state *state=lightning_get(actor);
    if(state->fired||state->count)failed=1;
    if(lightning_due(state,1,.249f)||!lightning_due(state,1,.25f)||
        lightning_due(state,1.25f,1)||!lightning_due(state,1.251f,1))failed=1;
    state->targets[0]=0x201;state->count=1;
    if(!lightning_contains(state,0x201)||lightning_contains(state,0x401))failed=1;
    MEM32(actor+0x1C)=0x402;state=lightning_get(actor);if(state->count||state->fired)failed=1;
    if(!lightning_in_cone(origin,forward,target))failed=1;
    target[0]=-100;if(lightning_in_cone(origin,forward,target))failed=1;
    state->count=1;xml1_bishop_contact_reset(actor);if(state->count||magnetic_inputs[2].handle)failed=1;
    strcpy((char*)XBOX_PTR(text),"ce_lightning_data");
    if(!xml1_lightning_event_construct(event,text)||MEM32(event)!=lightning_table)failed=1;
    strcpy((char*)XBOX_PTR(text),"numtargets");strcpy((char*)XBOX_PTR(text+32),"7");
    AREA_VCALL(event,16,text,text+32);
    strcpy((char*)XBOX_PTR(text),"usebothhands");strcpy((char*)XBOX_PTR(text+32),"true");
    AREA_VCALL(event,16,text,text+32);
    if(!MEM8(event+0x14)||raven_lightning_operand_count(area_read,0,event,actor)!=7)failed=1;
    strcpy((char*)XBOX_PTR(text),"ce_lightning_data");xml1_lightning_event_construct(clone,text);
    AREA_VCALL(clone,24,event);
    if(!MEM8(clone+0x14)||raven_lightning_operand_count(area_read,0,clone,actor)!=7)failed=1;
    raven_native_energy_lifetime(event,2);
    if(raven_lightning_operand_count(area_read,0,event,actor)!=2||
        raven_lightning_operand_count(area_read,0,clone,actor)!=7)failed=1;
    xml1_lightning_event_construct(clone,text);
    if(MEM8(clone+0x14)||raven_lightning_operand_count(area_read,0,clone,actor)!=2)failed=1;
    if(g_esp!=sp||g_fp_top!=fp)failed=1;
    printf("%s Magnetic Grasp / Storm Chain Lightning: native update dispatch, velocity, pool exhaustion, lift math, cone, cadence, generation cleanup, data-event parse/clone/reuse; stacks balanced\n",failed?"FAIL":"PASS");
    return failed;
}
static int registered_dispatch_fixture(uint32_t pool) {
    const uint32_t manager=0x4DB2B8,target=pool+0x1000,actor=pool+0x2000,
        chain=pool+0x3000,container=pool+0x4000,methods=pool+0x5000,
        node=pool+0x6000,name=pool+0x7000,sp=g_esp;
    const unsigned fp=g_fp_top;
    unsigned char saved_manager[0x1860];
    memcpy(saved_manager,(const void*)XBOX_PTR(manager),sizeof(saved_manager));
    uint32_t initialized=MEM32(0x4E7044),actor_class=MEM32(0x485878);
    memset((void*)XBOX_PTR(target),0,0x6100);
    MEM32(0x4E7044)=1;MEM32(manager)=0x3D4B7C;
    MEM32(manager+0x185C)=511;MEM32(manager+0x105C+4)=0x201;
    MEM32(manager+0x1018)=2;MEM32(manager+8)=target;
    MEM32(target)=target+0x100;MEM32(target+0x100)=0x2E6B0;
    MEM32(0x485878)=0;MEM32(target+0x18)=2;
    MEM32(actor+0x1C)=0x202;MEMF(actor+0x3F0)=1;
    MEM32(actor+0x2F4)=chain;MEM32(actor+0x2DC)=container;
    MEM32(chain)=0x3D8BDC;MEM32(container)=methods;
    strcpy((char*)XBOX_PTR(name),"bishop_fixture_followup");
    g_ecx=chain+0x10+24*4;PUSH32(g_esp,name);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x00027EF0u,sub_00027EF0);
    dispatch_fixture.token=methods+0x200;
    dispatch_fixture.node=node;dispatch_fixture.actor=actor;
    dispatch_fixture.atom=MEM32(chain+0x10+24*4);
    dispatch_fixture.lookups=dispatch_fixture.eligibility=0;dispatch_fixture.failed=0;
    MEM32(methods+0x14)=dispatch_fixture.token;
    MEM32(node)=methods+0x100;MEM32(methods+0x108)=dispatch_fixture.token+4;
    xml1_bishop_contact_reset(actor);
    xml1_bishop_contact_record(actor,0x201,2);
    g_ecx=pool+0x800;MEM32(g_ecx)=handler_table;
    PUSH32(g_esp,0);PUSH32(g_esp,actor);PUSH32(g_esp,0);
    RECOMP_ICALL_SAFE(MEM32(handler_table+0x18),sp);
    int failed=!(g_eax&255) || MEM32(actor+0x324)!=node ||
        dispatch_fixture.failed || dispatch_fixture.lookups!=1 ||
        dispatch_fixture.eligibility!=1 || g_esp!=sp || g_fp_top!=fp;
    if(failed)fprintf(stderr,"Bishop fixture ax=%08X pending=%08X expected=%08X lookup=%u eligible=%u boundary=%d sp=%08X/%08X fp=%u/%u\n",
        g_eax,MEM32(actor+0x324),node,dispatch_fixture.lookups,dispatch_fixture.eligibility,
        dispatch_fixture.failed,g_esp,sp,g_fp_top,fp);
    /* The release API also handles interruption with no held object. Use its
     * real native path and verify the registered callback's thiscall cleanup. */
    MEM32(actor+0x554)=0;
    g_ecx=handler_table+160;PUSH32(g_esp,actor);PUSH32(g_esp,0);
    RECOMP_ICALL_SAFE(MEM32(handler_table+160+0xC),sp);
    if(MEM32(actor+0x554)!=MEM32(0x498D90)||g_esp!=sp||g_fp_top!=fp)failed=1;
    MEM32(actor+0x2F4)=container;MEM32(container+0x100)=methods;
    MEM32(methods+0x14)=dispatch_fixture.token+8;
    dispatch_fixture.events=0;dispatch_fixture.event_next=container+0x100;
    g_ecx=handler_table+240;PUSH32(g_esp,actor);PUSH32(g_esp,0);
    RECOMP_ICALL_SAFE(MEM32(handler_table+240+0xC),sp);
    if(dispatch_fixture.events!=3 || dispatch_fixture.failed ||
       dispatch_fixture.tags[0]!=100 || dispatch_fixture.tags[1]!=101 || dispatch_fixture.tags[2]!=102 ||
       dispatch_fixture.owners[0]!=container || dispatch_fixture.owners[1]!=container+0x100 || dispatch_fixture.owners[2]!=container+0x100 ||
       g_esp!=sp || g_fp_top!=fp)failed=1;
    /* Real movement setter, deterministic facing vectors, no physics-world
     * fixture needed: bit5 selects its direct velocity-update path. */
    MEM32(actor+4)|=32;
    const float orientations[][3]={{0,0,120},{0,1.57079632679f,0},{1.0471975512f,0,60}};
    for(unsigned i=0;i<3;++i) {
        MEMF(actor+0x30)=orientations[i][0];MEMF(actor+0x34)=orientations[i][1];
        MEMF(actor+0x108)=-7.25f;
        fixture_update_dispatch(handler_table+320,actor,pool+0x9E00);
        float want_y=i==1?120.0f:0.0f;
        if(fabsf(MEMF(actor+0x100)-orientations[i][2])>0.001f ||
           fabsf(MEMF(actor+0x104)-want_y)>0.001f || MEMF(actor+0x108)!=-7.25f ||
           MEM32(actor+0x118)!=MEM32(actor+0x100)||MEM32(actor+0x11C)!=MEM32(actor+0x104)||
           MEM32(actor+0x120)!=MEM32(actor+0x108)||g_esp!=sp||g_fp_top!=fp)failed=1;
    }
    const uint32_t component=pool+0x9000,input=pool+0x9400;
    memset((void*)XBOX_PTR(component),0,0x500);
    strcpy((char*)XBOX_PTR(component+0x20C),"sunfire");
    MEM32(actor+0x2D8)=component;MEM32(actor+0x2F4)=chain;MEM8(actor+0x334)=8;
    MEM32(methods+0x14)=dispatch_fixture.token;
    MEM32(methods+0x10C)=dispatch_fixture.token+12;
    dispatch_fixture.condition_result=1;
    unsigned eligible_before=dispatch_fixture.eligibility;
    for(unsigned slot=0;slot<4;++slot) {
        sprintf((char*)XBOX_PTR(name),"power%u_loop",slot+1);
        g_ecx=chain+8;PUSH32(g_esp,name);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x00027EF0u,sub_00027EF0);
        uint32_t bit=1u<<(MEM32(0x451A9C+slot*4)&31);
        MEM32(input)=0x80|bit;MEM32(input+4)=0;
        g_ecx=pool+0x800;MEM32(g_ecx)=handler_table+320;
        PUSH32(g_esp,input);PUSH32(g_esp,actor);PUSH32(g_esp,0);
        RECOMP_ICALL_SAFE(MEM32(handler_table+320+0x18),sp);
        if(!(g_eax&255)||MEM32(actor+0x324)!=node||g_esp!=sp||g_fp_top!=fp)failed=1;
        /* Releasing the power must not keep the move alive. Native base
         * fallback sees no movement and no action0 chain and returns false. */
        MEM32(input)=0x80;MEM32(input+4)=0;MEM32(actor+0x324)=0;
        g_ecx=pool+0x800;PUSH32(g_esp,input);PUSH32(g_esp,actor);PUSH32(g_esp,0);
        RECOMP_ICALL_SAFE(MEM32(handler_table+320+0x18),sp);
        if((g_eax&255)||MEM32(actor+0x324)||g_esp!=sp||g_fp_top!=fp)failed=1;
        MEM32(input)=bit;
        if(assigned_power_input(actor,input,0))failed=1;
        MEM32(input)=0x80;MEM32(input+4)=bit;
        if(assigned_power_input(actor,input,0))failed=1;
    }
    if(dispatch_fixture.conditions!=4 || dispatch_fixture.eligibility!=eligible_before || dispatch_fixture.failed)failed=1;
    /* Reject a found follow-up through its native +0C contract, and keep
     * the handler's stored candidate intact when base fallback has no move. */
    MEM32(input)=0x80|(1u<<(MEM32(0x451A9C+3*4)&31));MEM32(input+4)=0;
    dispatch_fixture.condition_result=0;
    g_ecx=pool+0x800;PUSH32(g_esp,input);PUSH32(g_esp,actor);PUSH32(g_esp,0);
    RECOMP_ICALL_SAFE(MEM32(handler_table+320+0x18),sp);
    if((g_eax&255)||MEM32(actor+0x324)!=node||g_esp!=sp||g_fp_top!=fp)failed=1;
    dispatch_fixture.node=0;MEM32(actor+0x324)=node;
    g_ecx=pool+0x800;PUSH32(g_esp,input);PUSH32(g_esp,actor);PUSH32(g_esp,0);
    RECOMP_ICALL_SAFE(MEM32(handler_table+320+0x18),sp);
    if((g_eax&255)||MEM32(actor+0x324)||g_esp!=sp||g_fp_top!=fp)failed=1;
    /* Moving variant shares the cleanup callback, through its own vtable. */
    MEM32(actor+0x2F4)=container;MEM32(methods+0x14)=dispatch_fixture.token+8;
    dispatch_fixture.events=0;
    g_ecx=handler_table+320;PUSH32(g_esp,actor);PUSH32(g_esp,0);
    RECOMP_ICALL_SAFE(MEM32(handler_table+320+0xC),sp);
    if(dispatch_fixture.events!=3||dispatch_fixture.tags[0]!=100||dispatch_fixture.tags[1]!=101||
       dispatch_fixture.tags[2]!=102||dispatch_fixture.failed||g_esp!=sp||g_fp_top!=fp)failed=1;
    printf("%s moving bolt-ons: facing velocity, preserved vertical speed, four held slots, release/modifier gates, native follow-up and fallback\n",failed?"FAIL":"PASS");
    MEM32(actor+0x2F4)=chain;MEM32(methods+0x14)=dispatch_fixture.token;
    dispatch_fixture.node=node;dispatch_fixture.condition_result=1;
    unsigned frenzy_conditions=dispatch_fixture.conditions;
    for(unsigned slot=0;slot<4;++slot) {
        sprintf((char*)XBOX_PTR(name),"power%u_frenzy",slot+1);
        g_ecx=chain+8;PUSH32(g_esp,name);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x00027EF0u,sub_00027EF0);
        uint32_t bit=1u<<(MEM32(0x451A9C+slot*4)&31);
        MEM32(input)=0x80;MEM32(input+4)=bit;
        g_ecx=pool+0x800;MEM32(g_ecx)=handler_table+400;
        PUSH32(g_esp,input);PUSH32(g_esp,actor);PUSH32(g_esp,0);
        RECOMP_ICALL_SAFE(MEM32(handler_table+400+0x18),sp);
        if(!(g_eax&255)||MEM32(actor+0x324)!=node||g_esp!=sp||g_fp_top!=fp)failed=1;
        MEM32(input)=0x80|bit;MEM32(input+4)=0;MEM32(actor+0x324)=0;
        g_ecx=pool+0x800;PUSH32(g_esp,input);PUSH32(g_esp,actor);PUSH32(g_esp,0);
        RECOMP_ICALL_SAFE(MEM32(handler_table+400+0x18),sp);
        if((g_eax&255)||MEM32(actor+0x324)||g_esp!=sp||g_fp_top!=fp)failed=1;
        MEM32(input)=0;MEM32(input+4)=bit;
        if(assigned_power_input(actor,input,1))failed=1;
    }
    if(dispatch_fixture.conditions!=frenzy_conditions+4||dispatch_fixture.failed||
       assigned_power_input(actor,0,1))failed=1;
    printf("%s Wolverine frenzy: four pressed slots, held-only rejection, modifier gate and native idle fallback\n",failed?"FAIL":"PASS");
    /* New block lifecycle is separate from guest actor layout, keyed by
     * full owner handle so recycled actors cannot inherit a blocking stance. */
    uint32_t block_record=pool+0x9600,block_methods=pool+0x9800;
    memset((void*)XBOX_PTR(block_record),0,0x300);
    if(xml1_block_active(actor))failed=1;
    uint32_t old_clock=MEM32(0x48D8E8);
    MEM32(0x48D8E8)=0x498E88;
    g_ecx=pool+0x800;MEM32(g_ecx)=handler_table+480;
    PUSH32(g_esp,0);PUSH32(g_esp,0);PUSH32(g_esp,actor);PUSH32(g_esp,0);
    RECOMP_ICALL_SAFE(MEM32(handler_table+480+4),sp);
    MEM32(0x48D8E8)=old_clock;
    if(!xml1_block_active(actor)||MEMF(actor+0x3F0)!=25.5f||g_esp!=sp||g_fp_top!=fp)failed=1;
    /* Exercise native table lookup plus the missing-token adapter. The full
     * tokenizer needs game CRT thread startup, absent from this fixture. */
    const char *modifiers[]={"dmgmod_unblockable","DMGMOD_UNBLOCKABLE",
        "dmgmod_no_pain","dmgmod_unblockable_extra"};
    const uint32_t modifier_expected[]={0x20000000u,0x20000000u,0x80000u,0};
    for(unsigned i=0;i<4;++i) {
        strcpy((char*)XBOX_PTR(block_record),modifiers[i]);MEM32(block_record+0x80)=0;
        PUSH32(g_esp,block_record+0x80);PUSH32(g_esp,block_record);PUSH32(g_esp,0x44C510);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x00123100u,sub_00123100);g_esp+=12;
        xml1_block_parse_modifier(block_record,block_record+0x80);
        if(MEM32(block_record+0x80)!=modifier_expected[i]||g_esp!=sp||g_fp_top!=fp)failed=1;
    }
    memset((void*)XBOX_PTR(block_record),0,0x70);
    MEM8(block_record+0x60)=1;
    for(unsigned kind=0;kind<10;++kind) {
        MEM32(block_record+0xC)=kind;
        MEM32(block_record+0x18)=0;
        if(xml1_block_attack_gate(actor,block_record)!=(kind!=0&&kind!=4&&kind!=7&&kind!=8))failed=1;
        MEM32(block_record+0x18)=0x20000000;
        if(xml1_block_attack_gate(actor,block_record))failed=1;
    }
    MEM32(block_record+0xC)=1;MEM32(block_record+0x18)=0;MEM8(block_record+0x60)=0;
    if(xml1_block_attack_gate(actor,block_record))failed=1;
    MEM32(actor+0x1C)=0x402;
    if(xml1_block_active(actor))failed=1;
    MEM32(actor+0x1C)=0x202;
    for(unsigned slot=8;slot<=12;slot+=4) {
        block_state(actor,1);
        g_ecx=pool+0x800;PUSH32(g_esp,actor);PUSH32(g_esp,0);
        RECOMP_ICALL_SAFE(MEM32(handler_table+480+slot),sp);
        if(xml1_block_active(actor)||g_esp!=sp||g_fp_top!=fp)failed=1;
    }
    MEM32(block_methods+0xF4)=0xE25B0;MEM32(block_methods+0xC)=dispatch_fixture.token+12;
    MEM32(chain)=block_methods;MEM32(actor+0x2F4)=chain;
    MEM32(input)=0;MEM32(input+4)=0;dispatch_fixture.node=node;
    unsigned conditions_before=dispatch_fixture.conditions;
    g_ecx=pool+0x800;PUSH32(g_esp,input);PUSH32(g_esp,actor);PUSH32(g_esp,0);
    RECOMP_ICALL_SAFE(MEM32(handler_table+480+24),sp);
    if(!(g_eax&255)||MEM32(actor+0x324)!=node||!xml1_block_active(actor)||
       dispatch_fixture.conditions!=conditions_before||g_esp!=sp||g_fp_top!=fp)failed=1;
    /* Holding a still-eligible block stays on the current move; release
     * selects special without adding a target-condition check. */
    MEM32(input)=0x80|(1u<<(MEM32(0x451A9C+3*4)&31));
    MEM32(actor+0x324)=0;dispatch_fixture.condition_result=1;
    g_ecx=pool+0x800;PUSH32(g_esp,input);PUSH32(g_esp,actor);PUSH32(g_esp,0);
    RECOMP_ICALL_SAFE(MEM32(handler_table+480+24),sp);
    if((g_eax&255)||MEM32(actor+0x324)||dispatch_fixture.conditions!=conditions_before+1||g_esp!=sp||g_fp_top!=fp)failed=1;
    xml1_bishop_contact_reset(actor);
    if(xml1_block_active(actor))failed=1;
    printf("%s block handler: lifecycle, owner generation, attack gates, held stance, release follow-up and ABI\n",failed?"FAIL":"PASS");
    {
        uint32_t physical_type=MEM32(0x4C0A60),friendly=MEM8(0x485840);
        MEM32(0x4C0A60)=0;MEM8(0x485840)=1;
        MEM32(target+0x18)=2;MEM8(target+0x2C2)=0;
        MEM32(container)=methods;MEM32(methods+0x14)=dispatch_fixture.token+8;
        MEM32(actor+0x2F4)=container;MEM16(actor+0x398)=0xffff;
        dispatch_fixture.events=0;dispatch_fixture.event_next=container;
        PUSH32(g_esp,0);PUSH32(g_esp,target);PUSH32(g_esp,actor);PUSH32(g_esp,0);
        RECOMP_ICALL_SAFE(handler_table+1308,sp);
        if(dispatch_fixture.events!=1||dispatch_fixture.tags[0]!=100||
           dispatch_fixture.failed||g_esp!=sp||g_fp_top!=fp)failed=1;
        MEM8(target+0x2C2)=2;
        torpedo_contact(actor,target,0.5f);
        torpedo_contact(actor,0,0.5f);
        if(dispatch_fixture.events!=1||g_esp!=sp||g_fp_top!=fp)failed=1;
        MEM32(0x4C0A60)=physical_type;MEM8(0x485840)=(uint8_t)friendly;
        if(torpedo_speed(0.399f)!=0||torpedo_speed(0.4f)!=600||
           torpedo_speed(0.7f)!=600||torpedo_speed(0.701f)!=0||torpedo_speed(NAN)!=0)failed=1;
        MEM32(actor+4)|=32;MEMF(actor+0x100)=100;MEMF(actor+0x104)=200;MEMF(actor+0x108)=-3;
        fixture_update_dispatch(handler_table+560,actor,pool+0x9E00);
        if(MEMF(actor+0x100)!=0||MEMF(actor+0x104)!=0||MEMF(actor+0x108)!=-3||
           g_esp!=sp||g_fp_top!=fp)failed=1;
        printf("%s Rogue torpedo: animation window, native progress/velocity, physical contact event and structure gate\n",failed?"FAIL":"PASS");
    }
    {
        uint32_t actor_methods=pool+0x9800;
        memset((void*)XBOX_PTR(actor_methods),0,0x130);
        MEM32(actor)=actor_methods;MEM32(actor_methods+0x2C)=0x2E540;
        MEM32(actor_methods+0x118)=0x2E6B0;
        MEM32(actor+0x554)=0x201;MEM8(target+0x54C)=0x40;
        MEMF(actor+0x20)=0;MEMF(actor+0x24)=0;MEMF(actor+0x28)=0;
        MEMF(target+0x20)=0;MEMF(target+0x24)=10;MEMF(target+0x28)=0;
        MEMF(actor+0x3F0)=raven_xml1_guest_game_time();
        fixture_update_dispatch(handler_table+640,actor,pool+0x9E00);
        if(fabsf(MEMF(actor+0x34)-1.57079632679f)>0.0001f||
           MEMF(actor+0x2C)!=0||MEMF(actor+0x30)!=0||
           MEM32(actor+0x1E0)!=MEM32(actor+0x34)||g_esp!=sp||g_fp_top!=fp)failed=1;
        MEM32(target+0x160)=0x202;
        PUSH32(g_esp,actor);PUSH32(g_esp,0);
        RECOMP_ICALL_SAFE(handler_table+1312,sp);
        if(MEM32(target+0x160)||MEM32(actor+0x554)||g_esp!=sp||g_fp_top!=fp)failed=1;
        MEM32(actor+0x554)=0x401;MEM32(target+0x160)=0x202;
        PUSH32(g_esp,actor);PUSH32(g_esp,0);
        RECOMP_ICALL_SAFE(handler_table+1312,sp);
        if(MEM32(target+0x160)!=0x202||MEM32(actor+0x554)||g_esp!=sp||g_fp_top!=fp)failed=1;
        uint32_t saved_idle=MEM32(0x4F32A8);
        MEM32(0x4F32A8)=dispatch_fixture.atom;
        MEM32(methods+0x14)=dispatch_fixture.token;dispatch_fixture.node=0;
        MEMF(actor+0x3F0)=raven_xml1_guest_game_time()-1;
        unsigned before=dispatch_fixture.lookups;
        fixture_update_dispatch(handler_table+640,actor,pool+0x9E00);
        if(dispatch_fixture.lookups!=before+1||dispatch_fixture.failed||g_esp!=sp||g_fp_top!=fp)failed=1;
        MEM32(0x4F32A8)=saved_idle;
        printf("%s Wolverine lunge attack: target facing, native rotation cache, release, recycled handle and idle lookup\n",failed?"FAIL":"PASS");
    }
    {
        uint32_t collision=pool+0x9A00,point=collision+16;
        MEM32(collision)=point;MEM32(actor+0x324)=0;MEM32(actor+0x2F4)=chain;
        MEM32(chain)=0x3D8BDC;MEM32(chain+0x10)=dispatch_fixture.atom;
        MEMF(actor+0x28)=0;MEMF(point+8)=13;
        unsigned before=dispatch_fixture.lookups;
        PUSH32(g_esp,collision);PUSH32(g_esp,0);PUSH32(g_esp,actor);PUSH32(g_esp,0);
        RECOMP_ICALL_SAFE(handler_table+1328,sp);
        if(dispatch_fixture.lookups!=before||g_esp!=sp)failed=1;
        MEMF(point+8)=14;
        PUSH32(g_esp,collision);PUSH32(g_esp,0);PUSH32(g_esp,actor);PUSH32(g_esp,0);
        RECOMP_ICALL_SAFE(handler_table+1328,sp);
        if(dispatch_fixture.lookups!=before+1||dispatch_fixture.failed||g_esp!=sp)failed=1;
        MEM32(actor+0x554)=0x201;MEM32(target+0x160)=0x202;
        MEM32(actor+4)|=32;MEMF(actor+0x100)=120;MEMF(actor+0x104)=100;MEMF(actor+0x108)=7;
        PUSH32(g_esp,actor);PUSH32(g_esp,0);
        RECOMP_ICALL_SAFE(handler_table+1324,sp);
        if(MEM32(actor+0x554)||MEM32(target+0x160)||MEMF(actor+0x100)!=0||
           MEMF(actor+0x104)!=0||MEMF(actor+0x108)!=7||g_esp!=sp||g_fp_top!=fp)failed=1;
        printf("%s Wolverine lunge: collision height gate, native follow-up lookup, interrupt reservation/velocity cleanup\n",failed?"FAIL":"PASS");
    }
    {
        MEM32(MEM32(actor)+0x24)=0x75F40;
        MEMF(actor+0x38)=10;MEMF(actor+0x44)=14;
        PUSH32(g_esp,0);PUSH32(g_esp,0);PUSH32(g_esp,actor);PUSH32(g_esp,0);
        RECOMP_ICALL_SAFE(handler_table+1332,sp);
        leap_state *s=leap_for(actor);
        if(s->origin[0]!=12||!s->moving||g_esp!=sp||g_fp_top!=fp)failed=1;
        s->started=raven_xml1_guest_game_time();MEMF(actor+0x100)=11;
        fixture_update_dispatch(handler_table+800,actor,pool+0x9E00);
        if(MEMF(actor+0x100)!=11||g_esp!=sp)failed=1;
        PUSH32(g_esp,0);PUSH32(g_esp,actor);PUSH32(g_esp,0);
        RECOMP_ICALL_SAFE(handler_table+1340,sp);
        if((g_eax&255)||g_esp!=sp)failed=1;
        s->started=raven_xml1_guest_game_time()-0.3f;
        MEMF(actor+0x2C)=MEMF(actor+0x30)=MEMF(actor+0x34)=0;
        fixture_update_dispatch(handler_table+800,actor,pool+0x9E00);
        if(fabsf(MEMF(actor+0x100)-350)>0.01f||fabsf(MEMF(actor+0x104))>0.01f||MEMF(actor+0x108)!=7)failed=1;
        PUSH32(g_esp,0);PUSH32(g_esp,0);PUSH32(g_esp,actor);PUSH32(g_esp,0);
        RECOMP_ICALL_SAFE(handler_table+1344,sp);
        MEMF(actor+0x100)=12;
        fixture_update_dispatch(handler_table+800,actor,pool+0x9E00);
        if(s->moving||MEMF(actor+0x100)!=12)failed=1;
        PUSH32(g_esp,actor);PUSH32(g_esp,0);RECOMP_ICALL_SAFE(handler_table+1352,sp);
        if(s->started||!s->moving||g_esp!=sp||g_fp_top!=fp)failed=1;
        s->moving=0;MEM32(actor+0x1C)=0x402;
        if(!leap_for(actor)->moving)failed=1;
        MEM32(actor+0x1C)=0x202;xml1_bishop_contact_reset(actor);
        if(s->actor)failed=1;
        printf("%s Toad leap: native start position, delay/speed, contact stop, decision gate, reset and recycled owner\n",failed?"FAIL":"PASS");
    }
    {
        uint32_t out=pool+0x9C00,old_clock=MEM32(0x48D8E8),old_rng=MEM32(0x50622C);
        MEM32(0x48D8E8)=0x498E88;unsigned seen=0;
        for(unsigned i=0;i<64;++i) {
            g_ecx=handler_table+880;PUSH32(g_esp,out);PUSH32(g_esp,0);PUSH32(g_esp,actor);PUSH32(g_esp,0);
            RECOMP_ICALL_SAFE(handler_table+1356,sp);
            if(MEM32(out)==0x91)seen|=1;else if(MEM32(out)==0x93)seen|=2;else if(MEM32(out)==0xD6)seen|=4;else failed=1;
            if(MEMF(actor+0x3F0)!=25.5f||g_esp!=sp||g_fp_top!=fp)failed=1;
        }
        MEM32(0x48D8E8)=old_clock;MEM32(0x50622C)=old_rng;
        if(seen!=7)failed=1;
        MEMF(actor+0x3F0)=raven_xml1_guest_game_time();
        PUSH32(g_esp,0);PUSH32(g_esp,actor);PUSH32(g_esp,0);RECOMP_ICALL_SAFE(handler_table+1364,sp);
        if((g_eax&255)||g_esp!=sp||g_fp_top!=fp)failed=1;
        dispatch_fixture.model_slot=out+16;MEM32(out+16)=0;
        MEM32(MEM32(actor)+0x180)=dispatch_fixture.token+16;
        MEM8(actor+0x336)|=4;MEMF(actor+0x194)=0;
        PUSH32(g_esp,actor);PUSH32(g_esp,0);RECOMP_ICALL_SAFE(handler_table+1360,sp);
        if((MEM8(actor+0x336)&4)||MEMF(actor+0x194)!=1||g_esp!=sp)failed=1;
        PUSH32(g_esp,0);PUSH32(g_esp,0);RECOMP_ICALL_SAFE(handler_table+1360,sp);
        if(g_esp!=sp)failed=1;
        dispatch_fixture.model_slot=out+16;dispatch_fixture.animation_controller=out+32;
        MEM32(out+16)=out+24;MEM32(out+24)=out+64;MEM32(out+32)=out+96;
        MEM32(out+64+0x14)=dispatch_fixture.token+20;MEM32(out+96+0x38)=dispatch_fixture.token+24;
        MEM32(MEM32(actor)+0x180)=dispatch_fixture.token+16;
        g_ecx=actor;PUSH32(g_esp,out);PUSH32(g_esp,0xD6);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x0003D600u,sub_0003D600);
        if(!(g_eax&255)||MEM32(out)!=77||dispatch_fixture.failed||g_esp!=sp||g_fp_top!=fp)failed=1;
        printf("%s Rogue drain: three native/named animation choices, timestamp, early gate, visibility reset and power13 controller lookup\n",failed?"FAIL":"PASS");
    }
    {
        uint32_t out=pool+0x9C00;
        if(xml1_power13_animation(actor)!=77||g_esp!=sp||g_fp_top!=fp)failed=1;
        MEM32(actor+0x328)=chain;MEM32(actor+0x2F4)=chain;MEM32(actor+0x300)=chain;
        MEM32(chain)=0x3D8BDC;MEM32(chain+0x10+25*4)=dispatch_fixture.atom;
        MEM32(actor+0x334)|=1;MEM32(node)=methods+0x100;
        MEM32(methods+0x100+0xC)=dispatch_fixture.token+12;
        MEM32(methods+0x100+0xC8)=0xEADA0;MEM32(node+0xAC)=0x91;
        MEM32(container)=methods;MEM32(methods+0x14)=dispatch_fixture.token;
        dispatch_fixture.node=node;dispatch_fixture.condition_result=1;
        unsigned before=dispatch_fixture.lookups;
        PUSH32(g_esp,out);PUSH32(g_esp,0);PUSH32(g_esp,actor);PUSH32(g_esp,0);
        RECOMP_ICALL_SAFE(handler_table+1368,sp);
        if(MEM32(out)!=0x91||dispatch_fixture.lookups!=before+1||dispatch_fixture.failed||g_esp!=sp||g_fp_top!=fp)failed=1;
        uint32_t old_error_time=MEM32(0x4F33E8);
        MEMF(0x4F33E8)=raven_xml1_guest_game_time();
        dispatch_fixture.condition_result=0;MEM8(out+0x64)=0;
        PUSH32(g_esp,out);PUSH32(g_esp,0);PUSH32(g_esp,actor);PUSH32(g_esp,0);
        RECOMP_ICALL_SAFE(handler_table+1368,sp);
        if(MEM8(out+0x64)!=3||g_esp!=sp||g_fp_top!=fp)failed=1;
        MEM32(0x4F33E8)=old_error_time;
        MEM32(target+0x1F4)=0;MEM32(target+0x1F8)=0;MEM32(target+0x1FC)=0;
        MEM8(target+0x2C2)=0;
        if(!gambit_can_grab(target))failed=1;
        MEM8(target+0x2C2)=2;
        if(gambit_can_grab(target)||gambit_can_grab(0)||g_esp!=sp||g_fp_top!=fp)failed=1;
        printf("%s Gambit decide2: native alternate chain, animation selection, rejection flags, victim structure/effect query and ABI\n",failed?"FAIL":"PASS");
    }
    memset(&dispatch_fixture,0,sizeof(dispatch_fixture));
    xml1_bishop_contact_reset(actor);
    memcpy((void*)XBOX_PTR(manager),saved_manager,sizeof(saved_manager));
    MEM32(0x4E7044)=initialized;MEM32(0x485878)=actor_class;
    printf("%s Bishop registered dispatch: native special chain, eligible follow-up, pending node, stack/FPU balance\n",failed?"FAIL":"PASS");
    return failed;
}
int xml1_bishop_registration_fixture(uint32_t pool) {
    /* Private process only: build the actual native registry, then restore
     * its bytes. This checks additive insertion and idempotence, not gameplay. */
    unsigned char saved[0x940],registered[0x940];
    const uint32_t registry=0x4F3410,sp=g_esp,old_table=handler_table,
        old_lightning=lightning_table,game_allocator=MEM32(0x5BBAB4);
    /* Reproduce CRT startup: no game allocator and no preallocated table.
     * Supplying scratch storage here previously hid the startup regression. */
    MEM32(0x5BBAB4)=0;handler_table=0;
    handler_test_active=1;handler_test_entered=handler_test_returned=0;
    memcpy(saved,(const void*)XBOX_PTR(registry),sizeof(saved));
    g_ecx=registry;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x000E8B70u,sub_000E8B70);
    g_ecx=registry;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x000E7C20u,sub_000E7C20);
    unsigned occupied=0,added=0,visible=0,pickup=0,boltons=0,moving=0,frenzy=0,block=0,torpedo=0,lunge_attack=0,lunge=0;
    for(unsigned i=0;i<96;++i) {
        if(!(MEM32(registry+0x930+4*(i>>5))&(1u<<(i&31))))continue;
        ++occupied;
        if(MEM32(registry+0x7B0+4*i)==handler_table)++added;
        if(MEM32(registry+0x7B0+4*i)==handler_table+80)++visible;
        if(MEM32(registry+0x7B0+4*i)==handler_table+160)++pickup;
        if(MEM32(registry+0x7B0+4*i)==handler_table+240)++boltons;
        if(MEM32(registry+0x7B0+4*i)==handler_table+320)++moving;
        if(MEM32(registry+0x7B0+4*i)==handler_table+400)++frenzy;
        if(MEM32(registry+0x7B0+4*i)==handler_table+480)++block;
        if(MEM32(registry+0x7B0+4*i)==handler_table+560)++torpedo;
        if(MEM32(registry+0x7B0+4*i)==handler_table+640)++lunge_attack;
        if(MEM32(registry+0x7B0+4*i)==handler_table+720)++lunge;
    }
    int failed=occupied!=83 || added!=1 || visible!=1 || pickup!=1 || boltons!=1 || moving!=1 || frenzy!=1 || block!=1 || torpedo!=1 || lunge_attack!=1 || lunge!=1 || g_esp!=sp;
    for(unsigned i=0;i<8;++i)
        if(i!=6 && MEM32(handler_table+4*i)!=MEM32(0x3D77E4+4*i))failed=1;
    if(MEM32(handler_table+24)!=handler_table+32 ||
       xml1_bishop_lookup(handler_table+32)!=traced_handler_decision ||
       xml1_bishop_lookup(handler_table+33))failed=1;
    memcpy(registered,(const void*)XBOX_PTR(registry),sizeof(registered));
    xml1_bishop_register();
    if(memcmp(registered,(const void*)XBOX_PTR(registry),sizeof(registered))||g_esp!=sp)failed=1;
    if(registered_dispatch_fixture(pool))failed=1;
    if(area_handler_fixture(pool))failed=1;
    {
        uint32_t actor=pool+0x8000;
        memset((void*)XBOX_PTR(actor),0,0x600);
        MEM32(actor)=0x3C9204;MEM32(actor+0x1FC)=0xffffffff;
        MEM8(actor+0x336)=0xff;MEMF(actor+0x194)=0;
        unsigned fp=g_fp_top;
        g_ecx=handler_table+80;PUSH32(g_esp,actor);PUSH32(g_esp,0);
        RECOMP_ICALL_SAFE(MEM32(handler_table+80+0xC),sp);
        if(MEMF(actor+0x194)!=1 || MEM8(actor+0x336)!=0xfb || g_esp!=sp || g_fp_top!=fp)failed=1;
        /* Publish one live native invisibility effect. The interrupt handler
         * must leave both opacity and hidden flag alone when the query finds it. */
        const uint32_t power_pool=0x4833C0;
        const uint32_t addresses[]={0x485800,power_pool+0x2438,power_pool+0x223C,
            power_pool+0x2224,power_pool+0x44,power_pool+0x70};
        uint32_t saved_values[6];
        for(unsigned i=0;i<6;++i)saved_values[i]=MEM32(addresses[i]);
        MEM32(0x485800)|=1;MEM32(power_pool+0x2438)=127;
        MEM32(power_pool+0x223C)=0x81;MEM32(power_pool+0x2224)=2;
        MEM32(power_pool+0x44)=0xffffffff;MEM32(power_pool+0x70)=actor+0x700;
        MEM8(actor+0x700+0x1C)=10;
        MEM32(actor+0x1FC)=0x81;MEM32(actor+0x1F4)=1u<<10;
        MEMF(actor+0x194)=0;MEM8(actor+0x336)=0xff;
        g_ecx=handler_table+80;PUSH32(g_esp,actor);PUSH32(g_esp,0);
        RECOMP_ICALL_SAFE(MEM32(handler_table+80+0xC),sp);
        if(MEMF(actor+0x194)!=0 || MEM8(actor+0x336)!=0xff || g_esp!=sp || g_fp_top!=fp)failed=1;
        for(unsigned i=0;i<6;++i)MEM32(addresses[i])=saved_values[i];
        for(unsigned i=0;i<8;++i)
            if(i!=3 && MEM32(handler_table+80+4*i)!=MEM32(0x3D77E4+4*i))failed=1;
    }
    {
        uint32_t actor=pool+0x8000;unsigned fp=g_fp_top;
        memset((void*)XBOX_PTR(actor),0,0x600);
        float now=raven_xml1_guest_game_time();
        MEM32(actor+4)=32; /* Native direct velocity path; no physics world. */
        MEMF(actor+0x3F0)=now;
        MEMF(actor+0x100)=17;MEMF(actor+0x104)=-23;MEMF(actor+0x108)=37;
        fixture_update_dispatch(handler_table+720,actor,pool+0x9E00);
        if(MEMF(actor+0x100)!=17||MEMF(actor+0x104)!=-23||MEMF(actor+0x108)!=37||
           g_esp!=sp||g_fp_top!=fp)failed=1;
        MEMF(actor+0x3F0)=now-0.5f;
        for(unsigned facing=0;facing<3;++facing) {
            MEMF(actor+0x34)=(float)facing*1.57079632679f;
            fixture_update_dispatch(handler_table+720,actor,pool+0x9E00);
            float vx=MEMF(actor+0x100),vy=MEMF(actor+0x104);
            if(fabsf(vx*vx+vy*vy-360000)>1 || MEMF(actor+0x108)!=37 ||
               MEM32(actor+0x118)!=MEM32(actor+0x100)||MEM32(actor+0x11c)!=MEM32(actor+0x104)||
               g_esp!=sp||g_fp_top!=fp)failed=1;
        }
        PUSH32(g_esp,actor);PUSH32(g_esp,0);lunge_end();
        if(MEMF(actor+0x100)!=0||MEMF(actor+0x104)!=0||MEMF(actor+0x108)!=37||
           MEMF(actor+0x118)!=0||MEMF(actor+0x11c)!=0||g_esp!=sp||g_fp_top!=fp)failed=1;
        MEMF(actor+0x3F0)=now;
        PUSH32(g_esp,0);PUSH32(g_esp,actor);PUSH32(g_esp,0);lunge_decision();
        if((g_eax&255)||g_esp!=sp||g_fp_top!=fp)failed=1;
        printf("%s lunge motion callbacks: delay, facing speed, vertical preservation, native velocity caches, stop and early decision gate\n",failed?"FAIL":"PASS");
    }
    memcpy((void*)XBOX_PTR(registry),saved,sizeof(saved));
    for(unsigned i=0;i<15;++i) {
        int exercised=(handler_test_entered&(1u<<i)) && (handler_test_returned&(1u<<i));
        printf("%s handler execution smoke: %s entered=%u returned=%u\n",
            exercised?"PASS":"FAIL",handler_names[i],
            !!(handler_test_entered&(1u<<i)),!!(handler_test_returned&(1u<<i)));
        if(!exercised)failed=1;
    }
    handler_test_active=0;
    xbox_HeapFree(handler_table);
    handler_table=old_table;lightning_table=old_lightning;
    MEM32(0x5BBAB4)=game_allocator;
    printf("%s character handler registry: %u entries, Bishop=%u restore-visible=%u pickup-throw=%u boltons=%u moving=%u frenzy=%u block=%u torpedo=%u lunge-attack=%u lunge=%u, idempotence and native callbacks\n",
        failed?"FAIL":"PASS",occupied,added,visible,pickup,boltons,moving,frenzy,block,torpedo,lunge_attack,lunge);
    return failed;
}
void xml1_bishop_trigger_contact(uint32_t trigger,uint32_t recipient_handle) {
    uint32_t actor=0;
    if(trigger && recipient_handle &&
       raven_xml1_guest_entity_actor(NULL,recipient_handle,&actor)==RAVEN_FOUND)
        xml1_bishop_contact_record(actor,MEM32(trigger+0x1C),
            (float)raven_xml1_guest_game_time());
}
void xml1_bishop_hit_contact(uint32_t context) {
    uint32_t source=MEM32(context+8),recipient=MEM32(context);
    if(source && recipient)
        xml1_bishop_contact_record(source,MEM32(recipient+0x1C),
            (float)raven_xml1_guest_game_time());
}
void xml1_bishop_contact_reset(uint32_t actor) {
    /* Actor reset 2E6F0 can precede the new handle assignment. Clear by
     * address rather than consulting a possibly replaced handle. */
    for(unsigned i=0;i<512;++i)
        {
        if(contacts[i].actor==actor)memset(&contacts[i],0,sizeof(contacts[i]));
        if(leaps[i].actor==actor)memset(&leaps[i],0,sizeof(leaps[i]));
        if(magnetic_inputs[i].actor==actor)memset(&magnetic_inputs[i],0,sizeof(magnetic_inputs[i]));
        if(lightning_states[i].actor==actor)memset(&lightning_states[i],0,sizeof(lightning_states[i]));
    }
}
void xml1_bishop_contact_record(uint32_t actor,uint32_t target,float time) {
    if(!actor)return;
    uint32_t handle=MEM32(actor+0x1C);
    if(!handle)return;
    actor_contact *entry=&contacts[handle&511];
    if(entry->actor!=actor || entry->owner_handle!=handle) {
        memset(entry,0,sizeof(*entry));
        entry->actor=actor;entry->owner_handle=handle;
    }
    raven_bishop_record_contact(&entry->history,target,time);
}
int xml1_bishop_contact_snapshot(uint32_t actor,raven_bishop_contact_history *out) {
    if(!actor || !out)return 0;
    uint32_t handle=MEM32(actor+0x1C);
    const actor_contact *entry=&contacts[handle&511];
    if(!handle || entry->actor!=actor || entry->owner_handle!=handle)return 0;
    *out=entry->history;
    return 1;
}

static int has_type(uint32_t entity,uint32_t class_global) {
    uint32_t before=g_esp;
    g_ecx=entity;PUSH32(g_esp,0);
    RECOMP_ICALL_SAFE(MEM32(MEM32(entity)),before);
    const uint32_t bit=MEM32(class_global)+0x21;
    return !!(MEM32(g_eax+0x14+4*(bit>>5))&(1u<<(bit&31)));
}
static uint32_t select_followup(void *context,unsigned action) {
    /* 381F0 owns current-node chain lookup and normal combat-style routing. */
    g_ecx=*(const uint32_t*)context;
    PUSH32(g_esp,action);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x000381F0u,sub_000381F0);
    return g_eax;
}
int xml1_bishop_drain_decide(uint32_t actor,
    const raven_bishop_contact_history *history)
{
    if(!actor || !history || !history->handle ||
       !(history->time>MEMF(actor+0x3F0)))return 0;
    const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx,bx=g_ebx,
        si=g_esi,di=g_edi,bp=g_ebp,seh=g_seh_ebp;
    const unsigned fp=g_fp_top;
    raven_bishop_contact contact={history->time,MEMF(actor+0x3F0),
        history->handle,0,0,0};
    int accepted=0;
    /* Validate generation/allocation through the native handle API before
     * resolving or reading an entity. A recycled target must never qualify. */
    g_esp-=4;MEM32(g_esp)=history->handle;
    uint32_t handle_at=g_esp;
    g_ecx=handle_at;PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x0006BFA0u,sub_0006BFA0);
    if(g_eax&255) {
        g_ecx=handle_at;PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x0006BF80u,sub_0006BF80);
        uint32_t entity=g_eax;
        if(entity) {
            contact.valid=1;
            contact.actor=has_type(entity,0x485878);
            if(!contact.actor && has_type(entity,0x4C0AE4))
                contact.discharge_trigger=MEM32(entity+0x2C4)==5;
        }
    }
    g_esp+=4;
    uint32_t pending=MEM32(actor+0x324);
    accepted=raven_bishop_drain_decide(&contact,select_followup,&actor,&pending);
    MEM32(actor+0x324)=pending;
    if(g_esp!=sp || g_fp_top!=fp) {
        fputs("[BISHOP DRAIN ERROR] Native adapter stack imbalance\n",stderr);
        _Exit(4);
    }
    g_eax=ax;g_ecx=cx;g_edx=dx;g_ebx=bx;g_esi=si;g_edi=di;g_ebp=bp;g_seh_ebp=seh;
    return accepted;
}
