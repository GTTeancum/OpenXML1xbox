#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "engine/scripting/raven_script_extensions.h"
#include "engine/scripting/raven_script_strings.h"
#include "engine/combat/raven_bishop_guest.h"
#include "engine/actors/raven_character_race.h"
#include "engine/actors/raven_leader_definition.h"
#include "engine/actors/raven_leader_actor.h"
#include "engine/world/raven_extraction_guest.h"
#include "engine/world/raven_extraction_owner.h"
#include "engine/saves/raven_saved_stats_guest.h"
#include "engine/world/raven_progress_guest.h"
#include "engine/world/raven_campaign_state_guest.h"
#include "engine/world/raven_campaign_menu_guest.h"
#include "engine/actors/raven_actor_scale_owner.h"
#include "engine/actors/raven_actor_transform_owner.h"
#include "engine/powers/raven_powerup_guest.h"
#include "engine/combat/raven_vitality_bonus.h"
#include "engine/world/raven_recall_flow.h"
#include "engine/progression/character_talent_map_guest.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

static uint32_t extension_block, installed_manager;
static void test_extensions(uint32_t manager);
static void extension_failure(const char *reason) {
    fprintf(stderr,"[RAVEN SCRIPT ERROR] %s\n",reason);_exit(4);
}
static uint32_t argument(uint32_t args,unsigned index,unsigned method) {
    if(!args || (int32_t)MEM32(args+0x1c)<=(int32_t)index)
        extension_failure("missing argument");
    g_ecx=MEM32(args+index*4);
    if(!g_ecx)extension_failure("null argument value");
    uint32_t target=MEM32(MEM32(g_ecx)+method), saved=g_esp;
    PUSH32(g_esp,0x00099B66u);
    RECOMP_ICALL_SAFE(target,saved);
    if(g_esp!=saved)extension_failure("argument ABI");
    return g_eax;
}
static void copy_string(uint32_t address,char output[128]) {
    if(!address)extension_failure("null string");
    for(unsigned i=0;i<128;++i) {
        output[i]=(char)MEM8(address+i);
        if(!output[i])return;
    }
    /* Leave a full 128-byte unterminated input: bounded core rejects it. */
}
static void return_string(const char *output,uint32_t entry_sp) {
    /* Allocate through the original interpreter; it copies the temporary
     * guest bytes and owns the result for normal script expression chaining. */
    g_esp-=128;
    uint32_t temporary=g_esp;
    memcpy((void *)XBOX_PTR(temporary),output,strlen(output)+1);
    PUSH32(g_esp,temporary);
    PUSH32(g_esp,0x00099B66u);RECOMP_ABI_CALL(0x000CC120u,sub_000CC120);
    g_ecx=g_eax;
    PUSH32(g_esp,0x00099B66u);RECOMP_ABI_CALL(0x000CCCF0u,sub_000CCCF0);
    if(g_esp!=temporary)extension_failure("string result ABI");
    g_esp=entry_sp+4;
}
static void concatenate(int integer) {
    uint32_t args=MEM32(g_esp+4), entry_sp=g_esp;
    char left[128],right[128],output[128];
    copy_string(argument(args,0,0x14),left);
    int ok;
    if(integer)ok=raven_script_concat_int(output,left,(int32_t)argument(args,1,0x10));
    else {copy_string(argument(args,1,0x14),right);ok=raven_script_concat(output,left,right);}
    if(!ok) {g_eax=0;g_esp=entry_sp+4;return;}
    const char *trace=getenv("XML1_TEST_SCRIPT_EXTENSIONS");
    if(trace && !strcmp(trace,"1"))
        fprintf(stderr,"[RAVEN SCRIPT RESULT] %s => %s\n",integer?"strcatint":"strcatstr",output);
    return_string(output,entry_sp);
}
static void concat_strings(void){concatenate(0);}
static void concat_integer(void){concatenate(1);}
static void vector_integer(void) {
    uint32_t args=MEM32(g_esp+4),entry_sp=g_esp;
    int32_t x=(int32_t)argument(args,0,0x10);
    int32_t y=(int32_t)argument(args,1,0x10);
    int32_t z=(int32_t)argument(args,2,0x10);
    char output[128];
    if(!raven_script_vector_int(output,x,y,z))extension_failure("vector formatting");
    const char *trace=getenv("XML1_TEST_SCRIPT_EXTENSIONS");
    if(trace&&!strcmp(trace,"1"))fprintf(stderr,"[RAVEN SCRIPT RESULT] strveci => %s\n",output);
    return_string(output,entry_sp);
}
static uint32_t resolve_entity(uint32_t name) {
    /* Same XML1 name/handle path used by native getPosX (9B0D4..9B0E4).
     * Keep native aliases and stale-handle checks, rather than a host lookup. */
    uint32_t before=g_esp;
    g_esp-=4;uint32_t handle=g_esp;
    PUSH32(g_esp,name);PUSH32(g_esp,handle);
    PUSH32(g_esp,0x00099B66u);RECOMP_ABI_CALL(0x0009AE60u,sub_0009AE60);
    g_esp+=8;g_ecx=g_eax;
    PUSH32(g_esp,0x00099B66u);RECOMP_ABI_CALL(0x0006BF80u,sub_0006BF80);
    if(g_esp!=handle)extension_failure("entity resolver ABI");
    uint32_t entity=g_eax;g_esp=before;return entity;
}
static void entity_distance(void) {
    uint32_t args=MEM32(g_esp+4),entry_sp=g_esp;
    uint32_t first_name=argument(args,0,0x14);
    uint32_t second_name=argument(args,1,0x14);
    uint32_t first=resolve_entity(first_name),second=resolve_entity(second_name);
    /* XML2 B66E0: no integer coordinate conversion; absent entities return
     * -1. Both games' base entity position is three floats at +20/+24/+28. */
    float distance=-1.0f;
    if(first&&second) {
        double x=(double)MEMF(first+0x20)-(double)MEMF(second+0x20);
        double y=(double)MEMF(first+0x24)-(double)MEMF(second+0x24);
        double z=(double)MEMF(first+0x28)-(double)MEMF(second+0x28);
        distance=(float)sqrt((x*x+y*y)+z*z);
    }
    const char *trace=getenv("XML1_TEST_SCRIPT_EXTENSIONS");
    if(trace&&!strcmp(trace,"1")) {
        fprintf(stderr,"[RAVEN SCRIPT RESULT] getDistance => %.9g entities=%08X/%08X\n",distance,first,second);
        if(first&&second)fprintf(stderr,"[RAVEN SCRIPT DISTANCE POS] %.9g %.9g %.9g / %.9g %.9g %.9g\n",
            MEMF(first+0x20),MEMF(first+0x24),MEMF(first+0x28),
            MEMF(second+0x20),MEMF(second+0x24),MEMF(second+0x28));
    }
    uint32_t bits;memcpy(&bits,&distance,4);
    PUSH32(g_esp,bits);
    PUSH32(g_esp,0x00099B66u);RECOMP_ABI_CALL(0x000CC120u,sub_000CC120);
    g_ecx=g_eax;
    PUSH32(g_esp,0x00099B66u);RECOMP_ABI_CALL(0x000CA950u,sub_000CA950);
    if(g_esp!=entry_sp)extension_failure("distance result ABI");
    g_esp=entry_sp+4;
}
/* XML2 B1AC0 reads the numeric argument as a float despite its published
 * "ai" descriptor. XML1's normal argument objects provide the same virtual
 * conversion. Pop precisely that result, leaving the caller's FP stack alone. */
static float float_argument(uint32_t args,unsigned index) {
    argument(args,index,0x0c);
    float value=(float)g_fp_stack[g_fp_top];
    g_fp_top=(g_fp_top+1)&7;
    return value;
}
static int entity_has_type(uint32_t entity,uint32_t type_global) {
    if(!entity)return 0;
    uint32_t saved=g_esp;
    g_ecx=entity;
    PUSH32(g_esp,0x00099B66u);
    RECOMP_ICALL_SAFE(MEM32(MEM32(entity)),saved);
    if(g_esp!=saved)extension_failure("entity type ABI");
    /* XML1's RTTI bit base is +21, versus XML2's +24. Use the native
     * class ID, as XML1 setAngles does, rather than copying XML2's bit. */
    uint32_t bit=MEM32(type_global)+0x21;
    return (MEM32(g_eax+0x14+(bit>>5)*4)&(1u<<(bit&31)))!=0;
}
#include "engine/scripting/raven_silent_action.inc"
#include "engine/scripting/raven_silent_kill.inc"
#include "engine/saves/raven_saved_stats_fixture.inc"
#include "engine/actors/raven_actor_scale_guest.inc"
static void actor_scale_selection(uint32_t selection,int32_t count,float requested,float seconds);
#include "engine/actors/raven_actor_scale_clearance_guest.inc"
void xml1_actor_scale_tick(uint32_t actor,float delta) {
    uint32_t handle=MEM32(actor+0x1c);
    raven_actor_scale_snapshot snapshot;
    if(!raven_actor_scale_owner_read(actor,handle,&snapshot)||!snapshot.scale.active)return;
    uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;int fp=g_fp_top;
    if(!actor_scale_entity_identity(actor,handle))goto done;
    uint32_t definition=MEM32(actor+0x2d8);
    if(!definition)goto done;
    float base=MEMF(definition+0x3a8);
    if(!isfinite(base)||base<=0||!isfinite(delta))goto done;
    float current=MEMF(actor+0x168)/base;
    float factor=raven_xml1_actor_scale_factor(actor);
    // XML2's update requests clearance when the scale affecter is non-default.
    // XML2 30E10 also reads actor+3DB bit8 (1.28 multiplier), not the
    // setActorHuge controller+2B9 bit80. Do not wire transformation state here
    // without tracing that separate actor-mode owner (311E0).
    if(factor!=1)snapshot.scale.check_clearance=1;
    float next=raven_actor_scale_step(&snapshot.scale,current,snapshot.scale.requested*factor,delta);
    if(!raven_actor_scale_owner_commit(actor,handle,&snapshot))goto done;
    if(snapshot.scale.check_clearance&&!actor_scale_clearance_guest(actor,next,0x3c720))goto done;
    raven_actor_scale_snapshot latest;
    if(!raven_actor_scale_owner_read(actor,handle,&latest)||latest.revision!=snapshot.revision)goto done;
    actor_scale_apply_unchecked(actor,next);
done:
    if(g_esp!=sp||g_fp_top!=fp)extension_failure("actor scale update ABI");
    g_eax=ax;g_ecx=cx;g_edx=dx;
}
static void actor_scale_selection(uint32_t selection,int32_t count,float requested,float seconds) {
    if(count>512)extension_failure("timed scale selection capacity");
    uint32_t handles[512],sp=g_esp;
    for(int32_t i=0;i<count;++i) {
        uint32_t actor=MEM32(selection+(uint32_t)i*4);
        handles[i]=actor?MEM32(actor+0x1c):0;
    }
    for(int32_t i=0;i<count;++i) {
        g_esp-=4;MEM32(g_esp)=handles[i];g_ecx=g_esp;PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x0006BF80u,sub_0006BF80);
        uint32_t actor=g_eax;g_esp+=4;
        if(g_esp!=sp)extension_failure("timed scale selection ABI");
        if(!entity_has_type(actor,0x485878)||!actor_scale_entity_identity(actor,handles[i]))continue;
        uint32_t definition=MEM32(actor+0x2d8);
        if(!definition)continue;
        float base=MEMF(definition+0x3a8);
        if(!isfinite(base)||base<=0)continue;
        // Only this missing command owns the timed transition. The existing
        // XML1 setScale command and its instantaneous semantics are untouched.
        raven_actor_scale_owner_begin(actor,handles[i],MEMF(actor+0x168)/base,requested,seconds,0);
    }
}
static void set_actor_scale_timed(void) {
    uint32_t sp=g_esp,args=MEM32(sp+4);
    uint32_t selector=argument(args,0,0x14);
    float requested=float_argument(args,1),seconds=float_argument(args,2);
    PUSH32(g_esp,selector);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x0009FF10u,sub_0009FF10);g_esp+=4;
    if(g_esp!=sp)extension_failure("timed scale selector ABI");
    actor_scale_selection(0x4c25f8,(int32_t)g_eax,requested,seconds);
    g_eax=0;g_esp=sp+4;
}
static void entity_alpha(uint32_t entity,float alpha) {
    /* Absent XML2 script B35D0 requires CGameEntity (type ID at 5AA7A8).
     * XML1 CGameEntity uses 499568 (RTTI getter 75A70 -> 499564).
     * Its existing opacity API owns clamping and render-object notification. */
    if(!entity_has_type(entity,0x499568))return;
    uint32_t sp=g_esp,bits;memcpy(&bits,&alpha,4);
    g_ecx=entity;PUSH32(g_esp,bits);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x00076B40u,sub_00076B40);
    if(g_esp!=sp)extension_failure("alpha setter ABI");
}
static void set_alpha(void) {
    uint32_t args=MEM32(g_esp+4),sp=g_esp;
    uint32_t name=argument(args,0,0x14);
    float alpha=float_argument(args,1);
    entity_alpha(resolve_entity(name),alpha);
    g_eax=0;g_esp=sp+4;
}
static uint32_t animation_virtual(uint32_t object,unsigned slot) {
    uint32_t sp=g_esp,target=MEM32(MEM32(object)+slot);
    g_ecx=object;PUSH32(g_esp,0);
    RECOMP_ICALL_SAFE(target,sp);
    if(g_esp!=sp)extension_failure("animation getter ABI");
    return g_eax;
}
/* False means stop the bulk selection, not merely skip this entity.
 * XML2 B81C5 ends the absent command on a CActor. Existing actor animation
 * and combat timing remain owned by XML1. */
static int entity_animation_speed(uint32_t entity,float speed) {
    if(!entity_has_type(entity,0x499568))return 1;
    if(entity_has_type(entity,0x485878))return 0;
    if(!(animation_virtual(entity,0x178)&255u))return 1;
    uint32_t model=MEM32(animation_virtual(entity,0x180));
    if(!animation_virtual(model,0x10))return 1;
    model=MEM32(animation_virtual(entity,0x180));
    uint32_t component=animation_virtual(model,0x10);
    /* XML1 CModelIGB +14 (80200) returns its embedded CRigidAnimCtrl.
     * Controller +20 (135490) forwards the float to the native playback
     * object. Reuse this interface; never modify the simulation clock. */
    uint32_t controller=animation_virtual(component,0x14);
    uint32_t sp=g_esp,bits;memcpy(&bits,&speed,4);
    uint32_t target=MEM32(MEM32(controller)+0x20);
    g_ecx=controller;PUSH32(g_esp,bits);PUSH32(g_esp,0);
    RECOMP_ICALL_SAFE(target,sp);
    if(g_esp!=sp)extension_failure("animation speed ABI");
    return 1;
}
static void animation_speed_selection(uint32_t selection,int32_t count,float speed) {
    for(int32_t i=0;i<count;++i)
        if(!entity_animation_speed(MEM32(selection+(uint32_t)i*4),speed))break;
}
static void set_animation_speed(void) {
    uint32_t args=MEM32(g_esp+4),sp=g_esp;
    uint32_t selector=argument(args,0,0x14);
    float speed=float_argument(args,1);
    PUSH32(g_esp,selector);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x0009FF10u,sub_0009FF10);g_esp+=4;
    if(g_esp!=sp)extension_failure("animation target selection ABI");
    animation_speed_selection(0x4C25F8,(int32_t)g_eax,speed);
    g_eax=0;g_esp=sp+4;
}
static uint32_t parent_id(uint32_t entity) {
    if(!entity_has_type(entity,0x48338C))return 0;
    /* The absent XML2 getParentID (B3970) returns the stored parent handle,
     * not a pointer or interned parent name, and does not resolve that handle.
     * XML1's parent-link routine 27C58 stores it at +BC. +C0 is the separate
     * hierarchy attachment and +C4 the interned name; do not expose either. */
    return MEM32(entity+0xbc);
}
static void return_integer(uint32_t value,uint32_t entry_sp) {
    PUSH32(g_esp,value);
    PUSH32(g_esp,0x00099B66u);RECOMP_ABI_CALL(0x000CC120u,sub_000CC120);
    g_ecx=g_eax;
    PUSH32(g_esp,0x00099B66u);RECOMP_ABI_CALL(0x000CA9B0u,sub_000CA9B0);
    if(g_esp!=entry_sp)extension_failure("integer result ABI");
    g_esp=entry_sp+4;
}
static void hard_difficulty_unlocked(void) {
    uint32_t sp=g_esp;
    return_integer((uint32_t)xml1_progress_hard_unlocked(),sp);
}
static void unlock_hard_difficulty(void) {
    uint32_t sp=g_esp;
    xml1_progress_unlock_hard();
    g_eax=0;g_esp=sp+4; /* no arguments; native null interpreter result */
}
static void use_default_stats(void) {
    uint32_t sp=g_esp;
    if(!xml1_campaign_start_default())
        fputs("[RAVEN SCRIPT] useDefaultStats could not complete startup\n",stderr);
    g_eax=0;g_esp=sp+4;
}
static int (*difficulty_select)(int32_t)=xml1_campaign_select_difficulty;
static void (*difficulty_choose)(void)=xml1_campaign_choose_difficulty;
static void set_difficulty_level(void) {
    uint32_t sp=g_esp,args=MEM32(sp+4);
    int32_t value=(int32_t)argument(args,0,0x10);
    /* Keep the original integer command contract. Visible choices are
     * constrained by the existing chooser; script values are not clamped. */
    if(!difficulty_select(value))
        fputs("[RAVEN SCRIPT] setDifficultyLevel could not complete startup\n",stderr);
    g_eax=0;g_esp=sp+4;
}
static void start_game_difficulty_dialog(void) {
    uint32_t sp=g_esp;
    difficulty_choose();g_eax=0;g_esp=sp+4;
}
static void set_current_act(void) {
    uint32_t sp=g_esp,args=MEM32(sp+4);
    /* The missing act context is used by imported rewards/recall. XML2's
     * other notifications rebuild its shop stock and mission selection.
     * Those systems already belong to XML1: do not transplant XML2 inventory
     * categories or clear/filter native XML1 missions as a side effect. */
    xml1_campaign_store_act(argument(args,0,0x10));
    g_eax=0;g_esp=sp+4;
}
static int32_t difficulty_fixture_value;
static unsigned difficulty_fixture_calls,difficulty_fixture_dialogs;
static int difficulty_fixture_select(int32_t value) {
    difficulty_fixture_value=value;++difficulty_fixture_calls;return 1;
}
static void difficulty_fixture_choose(void) {++difficulty_fixture_dialogs;}
static uint32_t extraction_zone(uint32_t name) {
    if(name && MEM8(name))return name;
    // XML2 uses CMap's current zone, not the current map filename. XML1's
    // existing loadZone adapter (9A97E..9A987) exposes that name at slot48.
    uint32_t sp=g_esp;
    PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00080C80u,sub_00080C80);
    g_ecx=g_eax;
    uint32_t target=MEM32(MEM32(g_ecx)+0x48);
    PUSH32(g_esp,0);RECOMP_ICALL_SAFE(target,sp);
    if(g_esp!=sp||!g_eax)extension_failure("current extraction zone ABI");
    return g_eax;
}
static void extraction_unlock(void) {
    uint32_t sp=g_esp,args=MEM32(sp+4);
    uint32_t name=extraction_zone(argument(args,0,0x14));
    if(raven_extraction_unlock((const char*)XBOX_PTR(name))<0)
        extension_failure("extraction unlock");
    g_eax=0;g_esp=sp+4;
}
static void extraction_is_unlocked(void) {
    uint32_t sp=g_esp,name=extraction_zone(0);
    int value=raven_extraction_unlocked((const char*)XBOX_PTR(name));
    if(value<0)extension_failure("extraction query");
    return_integer((uint32_t)value,sp);
}
static void blink_portal_active(void) {
    uint32_t sp=g_esp;
    xml1_recall_state state;xml1_campaign_recall_get(&state);
    int town=raven_extraction_has_town_center((unsigned char)xml1_campaign_current_act());
    const char *current=(const char*)XBOX_PTR(extraction_zone(0));
    int clear=0;
    /* ADE80 tests return-location validity, not the separate recall-enabled
     * flag. An act-group mismatch clears only the saved zone identity. */
    int active=raven_recall_portal_query(current,town?"present":NULL,state.zone,&clear);
    if(clear) {
        memset(state.zone,0,sizeof(state.zone));strcpy(state.zone,"none");
        if(!xml1_campaign_recall_set(&state))extension_failure("portal recall state");
    }
    return_integer((uint32_t)active,sp);
}
#include "engine/world/raven_nearest_spawner.inc"
/* XML2 B1EC0 rewards an existing stats owner, not a new character or a
 * character-specific template. Keep XML1's four native stat setters (and
 * their caps); only max-health/energy use our owned, saved adjunct bytes.
 * Return the authored reward amount for the eventual HUD notification.
 * Actor cache refresh and notification belong to the caller. */
static int permanent_stat_reward(uint32_t stats,const char *name) {
    static const char *const names[]={"striking","agility","body","focus",
                                      "maxhealth","maxenergy"};
    unsigned kind=0;
    while(kind<6 && strcmp(name,names[kind]))++kind;
    uint8_t owned=0;
    if(kind==6 || !raven_vitality_get(xml1_vitality_owner(),stats,0,&owned))
        return -1;
    unsigned amount=xml1_campaign_current_act()*(kind<4?2u:10u);
    if(kind<4) {
        /* B1FEA/B202E/B2072/B20BA add through the low byte. XML1
         * 47530 owns the native cap; do not import XML2's stat policy. */
        uint32_t values[]={kind,(uint8_t)(MEM8(stats+0x1b+kind)+amount)};
        spawner_call(stats,0x47530,2,values,0);
    } else if(!raven_vitality_add(xml1_vitality_owner(),stats,kind-4,(uint8_t)amount))
        extension_failure("permanent reward stats lifetime");
    return (int)amount;
}
static int permanent_actor_reward(uint32_t actor,const char *name) {
    if(!actor)return -1;
    uint32_t component=MEM32(actor+0x2d8);
    if(!component)return -1;
    int amount=permanent_stat_reward(component+4,name);
    if(amount<0)return amount;
    int energy=!strcmp(name,"maxenergy"),health=!strcmp(name,"maxhealth");
    if(energy||health) {
        /* XML2 B2125/B218A recalculates without transient actor modifiers
         * and refills the rewarded resource. XML1 30CEB..30D4B establishes
         * its own signed-short maxima and virtual current-value setters.
         * Never copy XML2's float maximum fields into the XML1 layout. */
        uint32_t operands[]={0,0,0};
        uint32_t maximum=spawner_call(component,energy?0xAFBD0:0xAFA90,3,operands,0);
        MEM16(actor+(energy?0x2bc:0x246))=(uint16_t)maximum;
        float current=(float)(int16_t)maximum;uint32_t bits;
        memcpy(&bits,&current,4);
        spawner_call(actor,MEM32(MEM32(actor)+(energy?0x1a0:0x19c)),1,&bits,0);
    }
    return amount;
}
static uint32_t reward_actor(uint32_t name) {
    uint32_t actor=resolve_entity(name);
    return entity_has_type(actor,0x485878)?actor:0;
}
static void reward_notice(const char *name,int amount) {
    uint32_t sp=g_esp;g_esp-=128;uint32_t text=g_esp;
    /* Reuse XML1's HUD message queue, not XML2 localization IDs400..405,
     * which name unrelated strings in XML1. Native156550 copies at most
     * 255 bytes before returning; this bounded text never outlives its frame. */
    const char *label=name;
    if(!strcmp(name,"striking"))label="Strike";
    else if(!strcmp(name,"agility"))label="Agility";
    else if(!strcmp(name,"body"))label="Body";
    else if(!strcmp(name,"focus"))label="Focus";
    else if(!strcmp(name,"maxhealth"))label="Maximum Health";
    else if(!strcmp(name,"maxenergy"))label="Maximum Energy";
    snprintf((char*)XBOX_PTR(text),128,"%s +%d",label,amount);
    uint32_t hud=spawner_call(0,0x158860,0,NULL,0);
    uint32_t args[]={text,0x40400000,0x3f800000,0x3f800000,0x3f800000,0x3f800000,3};
    spawner_call(hud,MEM32(MEM32(hud)+0x20),7,args,0);
    g_esp=sp;
}
static uint32_t (*reward_resolve)(uint32_t)=reward_actor;
static void recall_ready_notice(void) {
    uint32_t sp=g_esp;g_esp-=64;uint32_t text=g_esp;
    strcpy((char*)XBOX_PTR(text),"Recall portal ready.");
    uint32_t hud=spawner_call(0,0x158860,0,NULL,0);
    uint32_t args[]={text,0x40400000,0x3f4ccccd,0x3f4ccccd,0x3f4ccccd,0x3f800000,0};
    spawner_call(hud,MEM32(MEM32(hud)+0x20),7,args,0);g_esp=sp;
}
static void (*recall_ready)(void)=recall_ready_notice;
void xml1_recall_tick(uint32_t game) {
    if(game!=0x498e88)return;
    uint32_t saved[]={g_eax,g_ebx,g_ecx,g_edx,g_esi,g_edi,g_ebp,g_esp,g_seh_ebp};
    /* Native73616 runs after CGame's admitted update and adjusted delta.
     * XML2's D79F0 exclusion is Danger Room (AD960), NOT networking.
     * Keep XML1's already-existing BF730 query and its game-time policy. */
    if(!(spawner_call(0,0xBF730,0,NULL,0)&255u) &&
       xml1_campaign_recall_step(MEMF(game+0x3a0)))recall_ready();
    g_eax=saved[0];g_ebx=saved[1];g_ecx=saved[2];g_edx=saved[3];
    g_esi=saved[4];g_edi=saved[5];g_ebp=saved[6];g_esp=saved[7];g_seh_ebp=saved[8];
}
static unsigned recall_ready_fixture_calls;
static void recall_ready_fixture(void) {++recall_ready_fixture_calls;g_eax=0xBAD;g_ecx=0xBAD;g_edx=0xBAD;}

static uint32_t recall_context_entity(void) {
    /* recallZone B72F0 has no arguments: context slot1 is _ACTIVATOR_.
     * XML1 CAEC0 supplies the current scope (not the extension argv), and
     * the normal entity resolver retains aliases and generation checks.
     * A missing/nonentity activator must still permit hub return travel. */
    const uint32_t slot=1;
    uint32_t value=spawner_call(0,0xCAEC0,1,&slot,0);
    if(!value)return 0;
    uint32_t name=spawner_call(value,MEM32(MEM32(value)+0x14),0,NULL,0);
    uint32_t entity=name?resolve_entity(name):0;
    return entity_has_type(entity,0x499568)?entity:0;
}
static int recall_anchor_transform(uint32_t action,float position[3],float rotation[3]) {
    /* XML2 action definition2B32C..2B350 recognizes the case-sensitive
     * "blinkportal" substring in its act script. loadextraction201BB8 then
     * selects that action's transform. XML1 already owns act at+78 (28CF8),
     * so read it through its script-reference interface, not XML2's +C6 bit
     * or a new asset attribute. Caller must supply a live actionent from
     * the native class query. No guest pointer escapes across a zone load.
     * 6DE80 returns temporary guest-stack text: consume before another call. */
    if(!action)return 0;
    uint32_t name=spawner_call(action+0x78,0x6DE80,0,NULL,0);
    if(!name||!memchr((void*)XBOX_PTR(name),0,256)||
       !strstr((const char*)XBOX_PTR(name),"blinkportal"))return 0;
    memcpy(position,(void*)XBOX_PTR(action+0x20),3*sizeof(float));
    memcpy(rotation,(void*)XBOX_PTR(action+0x2c),3*sizeof(float));
    return 1;
}
static uint32_t recall_find_anchor(float position[3],float rotation[3]) {
    if(!spawner_call(0,0xA2AE0,0,NULL,0))return 0;
    uint32_t sp=g_esp,answer=0;g_esp-=16;uint32_t frame=g_esp;
    memset((void*)XBOX_PTR(frame),0,16);
    /* Same native class query/list ownership as XML1's start-point search.
     * Default predicate3C898C preserves scene order; no distance sorting.
     * Return only the generation handle and owned transform, never a list
     * element pointer that could survive the subsequent zone transition. */
    uint32_t args[2]={0x483388,frame+4};
    spawner_call(frame,0xA2A70,2,args,0);
    MEM32(frame+8)=0x3C898C;
    args[0]=MEM32(frame);args[1]=frame+8;
    uint32_t results=spawner_call(0,0xA2B10,2,args,1);
    if(results) {
        unsigned count=spawner_call(results,MEM32(MEM32(results)),0,NULL,0);
        for(unsigned i=0;i<count;++i) {
            uint32_t action=spawner_call(results,MEM32(MEM32(results)+4),1,&i,0);
            if(recall_anchor_transform(action,position,rotation)) {
                answer=MEM32(action+0x1c);break;
            }
        }
        spawner_call(0,0xA2B70,1,&results,1);
    }
    spawner_call(frame,0xA2AC0,0,NULL,0);g_esp=sp;
    return answer;
}
static uint32_t recall_query_fixture_code,recall_query_fixture_mask;
static void recall_query_fixture_begin(void) {
    if(MEM32(g_esp+4)!=0x483388||MEM32(MEM32(g_esp+8)))
        extension_failure("recall fixture action class/exclusion");
    memset((void*)XBOX_PTR(g_ecx+8),0,64);
    MEM32(g_ecx+8)=recall_query_fixture_mask;g_esp+=12;
}
static int recall_context_fixture(uint32_t action,uint32_t methods) {
    uint32_t scope=xbox_HeapAlloc(0x400,16);
    if(!scope)extension_failure("recall context allocation");
    memset((void*)XBOX_PTR(scope),0,0x400);
    uint32_t context=MEM32(0x4ebf50),type=MEM32(0x499568),sp=g_esp;
    int fp=g_fp_top,failed=0;
    /* One native context-tree entry keyed by the interpreter's actual slot1
     * token; CValueString and numeric-handle resolution both run natively.
     * Scene fixture already owns/restores the native entity-handle table. */
    MEM32(scope+0xc)=0;
    MEM32(scope+0x18)=MEM32(scope+0x1c)=0x3fffffff;
    MEM32(scope+0x20)=0x4ec208;MEM32(scope+0x170)=scope+0x200;
    MEM32(scope+0x200)=0x3d5980;MEM32(scope+0x204)=scope+0x240;
    strcpy((char*)XBOX_PTR(scope+0x240),"1024");
    MEM32(methods+0xa0)=0x2e6b0;MEM32(action)=methods+0xa0;
    MEM32(0x499568)=0;MEM32(action+0x18)=2;
    MEM32(0x4ebf50)=scope;
    if(recall_context_entity()!=action)failed=1;
    MEM32(action+0x18)=0;
    if(recall_context_entity())failed=2;
    MEM32(action+0x18)=2;MEM32(scope+0xc)=0x3fffffff;
    if(recall_context_entity())failed=3;
    MEM32(0x4ebf50)=0;
    if(recall_context_entity())failed=4;
    if(g_esp!=sp||g_fp_top!=fp)failed=5;
    MEM32(0x4ebf50)=context;MEM32(0x499568)=type;xbox_HeapFree(scope);
    if(failed)fprintf(stderr,"FAIL recall context %d\n",failed);
    else puts("PASS recall context: native scope/tree/value getter, activator handle resolution, base entity type, absent scope/key and stack/FPU");
    return failed;
}
static int recall_scene_fixture(uint32_t script_table,uint32_t action) {
    const uint32_t pool=0x4C2AA8,manager=0x4DB2B8;
    uint8_t* saved_pool=(uint8_t*)malloc(0x3950);
    uint8_t* saved_manager=(uint8_t*)malloc(0x1900);
    if(!saved_pool||!saved_manager)extension_failure("recall query backup");
    memcpy(saved_pool,(void*)XBOX_PTR(pool),0x3950);memcpy(saved_manager,(void*)XBOX_PTR(manager),0x1900);
    uint32_t flags[2]={MEM32(0x4C63F8),MEM32(0x4E7044)},sp=g_esp;
    int fp=g_fp_top,failed=0;
    uint32_t methods=xbox_HeapAlloc(0x100,16);
    if(!methods)extension_failure("recall query methods");
    MEM32(0x4E7044)=1;MEM32(manager)=0x3D4B7C;
    MEM32(manager+0x185c)=511;MEM32(manager+0x1018)=3;
    MEM32(manager+4)=action;MEM32(manager+0x105c)=0x400;
    MEM32(action+0x1c)=0x400;MEM32(action+0x78)=1;
    uint32_t second=script_table+0x35600;
    MEM32(manager+8)=second;MEM32(manager+0x1060)=0x401;
    MEM32(second+0x1c)=0x401;MEM32(second+0x78)=2;
    MEMF(second+0x20)=123;MEMF(second+0x34)=.5f;
    strcpy((char*)XBOX_PTR(script_table+2*0x114+8),"scripts/second/blinkportal");
    MEM32(0x4C63F8)=1;spawner_call(pool,0xA2880,0,NULL,0);
    memcpy((void*)XBOX_PTR(methods),(void*)XBOX_PTR(0x3D29EC),0x80);
    recall_query_fixture_code=methods+0x90;
    MEM32(methods+4)=recall_query_fixture_code;MEM32(pool)=methods;
    float position[3]={0},rotation[3]={0};
    strcpy((char*)XBOX_PTR(script_table+0x114+8),"scripts/blinkportal");
    recall_query_fixture_mask=3;
    if(recall_find_anchor(position,rotation)!=0x400||position[0]!=999||rotation[2]!=.3f)failed=1;
    strcpy((char*)XBOX_PTR(script_table+0x114+8),"extract");
    if(recall_find_anchor(position,rotation)!=0x401||position[0]!=123||rotation[2]!=.5f)failed=8;
    strcpy((char*)XBOX_PTR(script_table+2*0x114+8),"extract");
    if(recall_find_anchor(position,rotation))failed=2;
    recall_query_fixture_mask=0;
    if(recall_find_anchor(position,rotation))failed=3;
    for(unsigned i=0;i<3;++i)
        if(MEM8(pool+0x50+i*0x304)||MEM8(pool+0x1920+i*0x1014))failed=4;
    for(unsigned i=0;i<3;++i)MEM8(pool+0x1920+i*0x1014)=1;
    if(recall_find_anchor(position,rotation)||MEM8(pool+0x50))failed=5;
    for(unsigned i=0;i<3;++i)MEM8(pool+0x1920+i*0x1014)=0;
    for(unsigned i=0;i<3;++i)MEM8(pool+0x50+i*0x304)=1;
    if(recall_find_anchor(position,rotation))failed=6;
    if(g_esp!=sp||g_fp_top!=fp)failed=7;
    if(recall_context_fixture(action,methods))failed=9;
    recall_query_fixture_code=0;
    memcpy((void*)XBOX_PTR(pool),saved_pool,0x3950);memcpy((void*)XBOX_PTR(manager),saved_manager,0x1900);
    MEM32(0x4C63F8)=flags[0];MEM32(0x4E7044)=flags[1];
    free(saved_pool);free(saved_manager);xbox_HeapFree(methods);
    if(failed)fprintf(stderr,"FAIL recall scene query %d\n",failed);
    else puts("PASS recall scene query: native list, generation handle, script/transform, empty/nonportal and exhausted-pool cleanup; scene membership substituted");
    return failed;
}
static int recall_anchor_fixture(void) {
    /* Private native script-reference table, using the actual getter and
     * string copy. No scene, asset mutation or host input. */
    uint32_t arena=xbox_HeapAlloc(0x35800,16);
    if(!arena)extension_failure("recall anchor fixture allocation");
    memset((void*)XBOX_PTR(arena),0,0x35800);
    uint32_t owner=MEM32(0x498dac),action=arena+0x354e0;
    uint32_t sp=g_esp;int fp=g_fp_top,failed=0;
    MEM32(0x498dac)=arena;MEM32(arena+0x354d4)=0x1ff;
    MEM32(action+0x78)=1;
    const float expected_pos[3]={11,-22,33},expected_rot[3]={.1f,.2f,.3f};
    memcpy((void*)XBOX_PTR(action+0x20),expected_pos,sizeof expected_pos);
    memcpy((void*)XBOX_PTR(action+0x2c),expected_rot,sizeof expected_rot);
    float position[3]={91,92,93},rotation[3]={94,95,96};
    const char* scripts[]={"scripts/act3/blinkportal.py","extract","BlinkPortal",""};
    for(unsigned i=0;i<4;++i) {
        strcpy((char*)XBOX_PTR(arena+0x114+8),scripts[i]);
        float before_pos[3],before_rot[3];
        memcpy(before_pos,position,sizeof position);memcpy(before_rot,rotation,sizeof rotation);
        int found=recall_anchor_transform(action,position,rotation);
        if(found!=(i==0)||g_esp!=sp||g_fp_top!=fp)failed=1;
        if(i==0) {
            if(memcmp(position,expected_pos,sizeof position)||memcmp(rotation,expected_rot,sizeof rotation))failed=1;
        } else if(memcmp(position,before_pos,sizeof position)||memcmp(rotation,before_rot,sizeof rotation))failed=1;
    }
    memset((void*)XBOX_PTR(arena+0x114+8),'x',256);
    if(recall_anchor_transform(action,position,rotation))failed=1;
    MEM32(action+0x78)=0;
    if(recall_anchor_transform(action,position,rotation)||recall_anchor_transform(0,position,rotation))failed=1;
    MEMF(action+0x20)=999;
    if(position[0]!=11)failed=1; /* Results own their coordinates. */
    if(recall_scene_fixture(arena,action))failed=1;
    MEM32(0x498dac)=owner;xbox_HeapFree(arena);
    if(!failed)puts("PASS recall hub anchor: native act-script getter, case-sensitive marker, copied transforms, absent/nonportal rejection and stack/FPU; travel pending");
    return failed;
}
#include "engine/world/raven_recall_travel.inc"
#include "engine/inventory/raven_auto_equip_guest.inc"
#include "engine/inventory/raven_stash_transfer_guest.inc"
#include "engine/inventory/raven_stash_menu_guest.inc"
#include "engine/actors/raven_actor_transform_guest.inc"
static void (*reward_notify)(const char*,int)=reward_notice;
static void permanent_stat_boost(void) {
    uint32_t sp=g_esp,args=MEM32(sp+4);
    uint32_t actor=reward_resolve(argument(args,0,0x14));
    char name[128];copy_string(argument(args,1,0x14),name);
    if(!memchr(name,0,sizeof(name)))extension_failure("permanent reward stat name");
    int amount=permanent_actor_reward(actor,name);
    if(amount>=0)reward_notify(name,amount);
    g_eax=0;g_esp=sp+4;
}
static uint32_t reward_fixture_actor;
static unsigned reward_fixture_notices;
static int reward_fixture_amount;
static char reward_fixture_name[128];
static uint32_t reward_fixture_resolve(uint32_t name) {
    return !strcmp((const char*)XBOX_PTR(name),"reward_fixture")?reward_fixture_actor:0;
}
static void reward_fixture_notify(const char *name,int amount) {
    ++reward_fixture_notices;reward_fixture_amount=amount;
    strcpy(reward_fixture_name,name);
}
static uint32_t vitality_fixture_allocate(unsigned bytes) {return xbox_HeapAlloc(bytes,16);}
static int vitality_lifecycle_fixture(uint32_t base) {
    uint32_t sp=g_esp,first=base,second=base+0x200,third=base+0x400;
    int fp=g_fp_top,failed=0;uint8_t value=0;
    raven_vitality_owner *owner=xml1_vitality_owner();
    size_t active=owner->active;
    if(!xml1_character_talent_map_fixture_allocator(vitality_fixture_allocate))
        extension_failure("vitality fixture found active character maps");
    memset((void*)XBOX_PTR(base),0,0x600);
    spawner_call(first,0x48EF0,0,NULL,0);
    const uint32_t rules[]={0x44f1f4,0x44f1f8,0x44f1fc,0x44f200,0x44f204,0x44f208};
    uint32_t saved_rules[6];
    for(unsigned i=0;i<6;++i)saved_rules[i]=MEM32(rules[i]);
    MEMF(rules[0])=100;MEMF(rules[1])=5;MEMF(rules[2])=10;
    MEMF(rules[3])=30;MEMF(rules[4])=3;MEMF(rules[5])=4;
    MEM8(first+0x18)=2;MEM8(first+0x1d)=4;MEM8(first+0x1e)=5;
    uint32_t operands[3]={0,0,0};
    uint32_t health=spawner_call(first-4,0xAFA90,3,operands,0);
    uint32_t energy=spawner_call(first-4,0xAFBD0,3,operands,0);
    if(health!=150||energy!=56)failed=7;
    if(!raven_vitality_add(owner,first,0,20)||!raven_vitality_add(owner,first,1,30))failed=1;
    if(spawner_call(first-4,0xAFA90,3,operands,0)!=health+20||
       spawner_call(first-4,0xAFBD0,3,operands,0)!=energy+30)failed=8;
    for(unsigned i=0;i<6;++i)MEM32(rules[i])=saved_rules[i];
    spawner_call(second,0xAF0F0,1,&first,0);
    if(!raven_vitality_get(owner,second,0,&value)||value!=20)failed=2;
    spawner_call(third,0x48EF0,0,NULL,0);
    spawner_call(third,0x490F0,1,&second,0);
    if(!raven_vitality_add(owner,second,0,10)||
       !raven_vitality_get(owner,third,0,&value)||value!=20)failed=3;
    /* Resetting uncommitted upgrade allocations is not a new-character reset.
     * Native 48CE0 must not discard an earned permanent bonus. */
    spawner_call(second,0x48CE0,0,NULL,0);
    if(xml1_vitality_value(second,0)!=30||xml1_vitality_value(second,1)!=30)failed=12;
    /* Run both native serializers, not just the two-byte adjunct codec.
     * Empty talent/list sets isolate stream layout from resource registration.
     * Header admission for versions 0..5 is checked by the header test. */
    uint32_t stream=xbox_HeapAlloc(0x2fc04,16);
    if(!stream)extension_failure("vitality fixture stream allocation");
    memset((void*)XBOX_PTR(stream),0,0x2fc04);
    MEM32(stream+0x2fc00)=stream;
    xml1_vitality_stream_begin(stream,5);
    spawner_call(second,0x47F80,1,&stream,0);
    uint32_t written=MEM32(stream+0x2fc00)-stream;
    if(written!=48||MEM8(stream+44)!=30||MEM8(stream+45)!=30)failed=9;
    MEM32(stream+0x2fc00)=stream;
    xml1_vitality_stream_begin(stream,5);
    spawner_call(third,0x49280,1,&stream,0);
    if(MEM32(stream+0x2fc00)!=stream+written||
       xml1_vitality_value(third,0)!=30||xml1_vitality_value(third,1)!=30)failed=10;
    /* Legacy has the identical native prefix/talent/list layout, no adjunct.
     * Reuse a destination with nonzero bonuses to detect stale carryover. */
    memmove((void*)XBOX_PTR(stream+44),(void*)XBOX_PTR(stream+46),written-46);
    for(unsigned version=0;version<5;++version) {
        raven_vitality_add(owner,third,0,7);raven_vitality_add(owner,third,1,9);
        MEM32(stream+0x2fc00)=stream;
        xml1_vitality_stream_begin(stream,version);
        spawner_call(third,0x49280,1,&stream,0);
        if(MEM32(stream+0x2fc00)!=stream+written-2||
           xml1_vitality_value(third,0)||xml1_vitality_value(third,1))failed=11;
    }
    xml1_vitality_stream_reset();
    MEM32(stream+0x2fc00)=stream;
    spawner_call(second,0x47F80,1,&stream,0);
    if(MEM32(stream+0x2fc00)!=stream+46)failed=13;
    xbox_HeapFree(stream);
    raven_vitality_add(owner,third,0,11);raven_vitality_add(owner,third,1,13);
    spawner_call(third+4,0x472F0,0,NULL,0);
    if(xml1_vitality_value(third,0)||xml1_vitality_value(third,1)||
       xml1_vitality_value(second,0)!=30||xml1_vitality_value(second,1)!=30)failed=14;
    {
        uint32_t initialized=MEM32(0x49954c);MEM32(0x49954c)=initialized|1u;
        unsigned act=xml1_campaign_current_act();
        xml1_campaign_store_act(3);
        static const char *const names[]={"striking","agility","body","focus"};
        for(unsigned i=0;i<4;++i) {
            MEM8(third+0x1b+i)=98;
            if(permanent_stat_reward(third,names[i])!=6 || MEM8(third+0x1b+i)!=100)
                failed=15;
        }
        if(permanent_stat_reward(third,"maxhealth")!=30 ||
           permanent_stat_reward(third,"maxenergy")!=30 ||
           xml1_vitality_value(third,0)!=30 || xml1_vitality_value(third,1)!=30)
            failed=16;
        xml1_campaign_store_act(0);
        if(permanent_stat_reward(third,"maxhealth")!=0 || xml1_vitality_value(third,0)!=30)
            failed=17;
        xml1_campaign_store_act(255);
        if(permanent_stat_reward(third,"maxenergy")!=2550 ||
           xml1_vitality_value(third,1)!=(uint8_t)(30+2550) ||
           permanent_stat_reward(third,"unrecognized")!=-1 ||
           permanent_stat_reward(third+0x100,"maxhealth")!=-1)
            failed=18;
        uint32_t actor=xbox_HeapAlloc(0x600,16);
        if(!actor)extension_failure("permanent reward fixture actor allocation");
        memset((void*)XBOX_PTR(actor),0,0x600);
        MEM32(actor)=0x3c94b4;MEM32(actor+0x2d8)=third-4;
        xml1_vitality_reset_if_owned(third);
        MEM8(third+0x18)=2;MEM8(third+0x1d)=4;MEM8(third+0x1e)=5;
        MEMF(rules[0])=100;MEMF(rules[1])=5;MEMF(rules[2])=10;
        MEMF(rules[3])=30;MEMF(rules[4])=3;MEMF(rules[5])=4;
        xml1_campaign_store_act(3);
        MEMF(actor+0x240)=7;MEMF(actor+0x248)=9;
        MEM16(actor+0x246)=150;MEM16(actor+0x2bc)=56;
        if(permanent_actor_reward(actor,"maxhealth")!=30 ||
           MEM16(actor+0x246)!=180 || MEMF(actor+0x240)!=180 ||
           MEM16(actor+0x2bc)!=56 || MEMF(actor+0x248)!=9)failed=19;
        if(permanent_actor_reward(actor,"maxenergy")!=30 ||
           MEM16(actor+0x2bc)!=86 || MEMF(actor+0x248)!=86 ||
           MEMF(actor+0x240)!=180)failed=20;
        if(permanent_actor_reward(actor,"striking")!=6 ||
           MEMF(actor+0x240)!=180 || MEMF(actor+0x248)!=86)failed=21;
        MEM32(actor+0x2d8)=0;
        if(permanent_actor_reward(actor,"maxhealth")!=-1 ||
           permanent_actor_reward(0,"maxenergy")!=-1)failed=22;
        for(unsigned i=0;i<6;++i)MEM32(rules[i])=saved_rules[i];
        xbox_HeapFree(actor);
        xml1_campaign_store_act(act);MEM32(0x49954c)=initialized;
    }
    spawner_call(second,0x48F90,0,NULL,0);
    spawner_call(second,0x48EF0,0,NULL,0);
    if(!raven_vitality_get(owner,second,0,&value)||value)failed=4;
    spawner_call(first,0x48F90,0,NULL,0);
    spawner_call(second,0x48F90,0,NULL,0);
    spawner_call(third,0x48F90,0,NULL,0);
    if(!xml1_character_talent_map_fixture_allocator(NULL))failed=6;
    if(owner->active!=active||g_esp!=sp||g_fp_top!=fp)failed=5;
    if(failed)fprintf(stderr,"FAIL vitality native lifecycle %d\n",failed);
    else puts("PASS vitality native lifecycle/consumers/save: construction, copy isolation, destruction/reuse, zero/additive max stats, v5 native save/load, legacy reset, act-based rewards, native stat caps and actor maximum/refill setters; HUD and script hook pending");
    return failed;
}
static uint32_t entity_opened(uint32_t entity) {
    /* Absent XML2 B3DA0 requires CPhysicalEntity and inverts the closed
     * state. XML1's CActionEntity serialization 2716E stores that state from
     * entity+4 bit21; use this native layout, not XML2's bit22. */
    if(!entity_has_type(entity,0x4C0A60))return 0;
    return !(MEM32(entity+4)&0x00200000u);
}
static void get_opened(void) {
    uint32_t args=MEM32(g_esp+4),sp=g_esp;
    uint32_t entity=resolve_entity(argument(args,0,0x14));
    return_integer(entity_opened(entity),sp);
}
static void entity_parent_id(void) {
    uint32_t args=MEM32(g_esp+4),entry_sp=g_esp;
    uint32_t entity=resolve_entity(argument(args,0,0x14));
    return_integer(parent_id(entity),entry_sp);
}
static uint32_t ai_controlled(uint32_t entity) {
    if(!entity_has_type(entity,0x485878))return 0;
    /* New script query only. XML1 owns the flag: native 2EC5E sets bit 0
     * at +334 when assigning AI control; 9CCCF checks the same bit before
     * overriding player-hero control. Do not change AI activation or timers. */
    return MEM8(entity+0x334)&1u;
}
static void entity_ai_controlled(void) {
    uint32_t args=MEM32(g_esp+4),entry_sp=g_esp;
    uint32_t entity=resolve_entity(argument(args,0,0x14));
    return_integer(ai_controlled(entity),entry_sp);
}
static void rotate_entity_z(uint32_t entity,float z) {
    if(!entity_has_type(entity,0x48D8FC))return;
    uint32_t before=g_esp;
    g_esp-=12;uint32_t angles=g_esp;
    MEM32(angles)=MEM32(entity+0x2c);
    MEM32(angles+4)=MEM32(entity+0x30);
    MEMF(angles+8)=z;
    g_ecx=entity;
    PUSH32(g_esp,angles);PUSH32(g_esp,0x00099B66u);
    /* XML2 B1B2E..B1B4D uses +2C even for actors. Preserve virtual
     * dispatch: direct field writes skip XML1's transform invalidation. */
    RECOMP_ICALL_SAFE(MEM32(MEM32(entity)+0x2c),angles);
    if(g_esp!=angles)extension_failure("rotation setter ABI");
    g_esp=before;
}
static void entity_rotation_z(void) {
    uint32_t args=MEM32(g_esp+4),entry_sp=g_esp;
    uint32_t name=argument(args,0,0x14);
    float z=float_argument(args,1);
    rotate_entity_z(resolve_entity(name),z);
    g_eax=0;g_esp=entry_sp+4;
}

int xml1_script_dispatch_combat_trigger(uint32_t node,uint32_t actor,int32_t tag) {
    if(!node)return 0;
    uint32_t before=g_esp;
    g_ecx=node;
    /* XML2 B4F0F passes the same actor as source and target. XML1's native
     * node virtual +14 already owns tagged-event selection and delivery. */
    PUSH32(g_esp,actor);PUSH32(g_esp,actor);PUSH32(g_esp,(uint32_t)tag);
    PUSH32(g_esp,0x00099B66u);
    RECOMP_ICALL_SAFE(MEM32(MEM32(node)+0x14),before);
    if(g_esp!=before)extension_failure("combat trigger dispatch ABI");
    return !!(g_eax&255);
}
static void combat_node_trigger(void) {
    uint32_t args=MEM32(g_esp+4),entry_sp=g_esp;
    uint32_t actor_name=argument(args,0,0x14);
    uint32_t node_name=argument(args,1,0x14);
    int32_t tag=(int32_t)argument(args,2,0x10);
    uint32_t actor=resolve_entity(actor_name);
    if(entity_has_type(actor,0x485878)) {
        g_esp-=4;uint32_t atom=g_esp;
        g_ecx=atom;PUSH32(g_esp,node_name);PUSH32(g_esp,0x00099B66u);
        RECOMP_ABI_CALL(0x00027EF0u,sub_00027EF0);
        g_ecx=actor;PUSH32(g_esp,0x00099B66u);
        RECOMP_ABI_CALL(0x0002E290u,sub_0002E290);
        g_ecx=g_eax;
        /* XML1's lookup has a third optional context argument. Leave it null;
         * the actor argument retains normal node eligibility/redirection. */
        PUSH32(g_esp,0);PUSH32(g_esp,actor);PUSH32(g_esp,atom);
        PUSH32(g_esp,0x00099B66u);RECOMP_ABI_CALL(0x000ED500u,sub_000ED500);
        if(g_esp!=atom)extension_failure("combat node lookup ABI");
        xml1_script_dispatch_combat_trigger(g_eax,actor,tag);
        g_esp=entry_sp;
    }
    g_eax=0;g_esp=entry_sp+4;
}

/* Only the absent script entry points are added. The existing conversation
 * manager retains response selection, state transitions and ownership.
 * XML2 ACB90/ACCD0 use slots +2C/+20; XML1's native disallowResponseOnVar
 * (98B59) establishes the manager and response interface used here. */
static uint32_t conversation_method(unsigned slot) {
    uint32_t sp=g_esp;
    PUSH32(g_esp,0x00099B66u);RECOMP_ABI_CALL(0x00060C00u,sub_00060C00);
    g_ecx=g_eax;
    uint32_t target=MEM32(MEM32(g_ecx)+slot);
    PUSH32(g_esp,0x00099B66u);RECOMP_ICALL_SAFE(target,sp);
    if(g_esp!=sp)extension_failure("conversation method ABI");
    return g_eax;
}
static uint32_t entity_is_xman(uint32_t entity) {
    /* Missing XML2 B28E0 tests the authored Brotherhood bit, not team,
     * roster membership or an X-Men bit. Absent/non-actor inputs return 1. */
    if(!entity_has_type(entity,0x485878))return 1;
    return !(raven_character_race_mask(MEM32(entity+0x2d8))&(1u<<9));
}
static void am_i_an_xman(void) {
    uint32_t args=MEM32(g_esp+4),sp=g_esp;
    uint32_t name=argument(args,0,0x14);
    if(!name||!MEM8(name))name=0x3d2890; /* XML1's native _ACTIVE_HERO_ alias. */
    return_integer(entity_is_xman(resolve_entity(name)),sp);
}
static uint32_t entity_is_brotherhood(uint32_t entity) {
    /* XML2 B3D10 uses the same authored bit as B28E0, with the opposite
     * default/result. This query does not infer membership from team IDs. */
    return !entity_is_xman(entity);
}
static void get_brotherhood(void) {
    uint32_t args=MEM32(g_esp+4),sp=g_esp;
    /* Unlike amIAnXman, no explicit empty-name active-hero substitution. */
    return_integer(entity_is_brotherhood(resolve_entity(argument(args,0,0x14))),sp);
}
static int same_living_party_character(uint32_t actor,uint32_t member) {
    if(!entity_has_type(actor,0x485878)||!entity_has_type(member,0x485878)||
       !(MEMF(member+0x240)>0.0f))return 0;
    const uint32_t first=MEM32(actor+0x2d8),second=MEM32(member+0x2d8),sp=g_esp;
    if(!first||!second)return 0;
    /* XML1 160219 already invokes 2E6C0 on actor+2D8. Reuse its
     * charactername/override selection, rather than internal entity names. */
    g_ecx=first;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x0002E6C0u,sub_0002E6C0);
    uint32_t name=g_eax;
    g_ecx=second;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x0002E6C0u,sub_0002E6C0);
    if(g_esp!=sp)extension_failure("party character name ABI");
    return !_stricmp((const char*)XBOX_PTR(name),(const char*)XBOX_PTR(g_eax));
}
static uint32_t actor_on_team(uint32_t actor) {
    if(!entity_has_type(actor,0x485878))return 0;
    const uint32_t sp=g_esp;
    g_esp-=24;uint32_t list=g_esp;
    g_ecx=list;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x000322B0u,sub_000322B0);
    PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00072CF0u,sub_00072CF0);
    g_ecx=g_eax;uint32_t target=MEM32(MEM32(g_ecx)+0xe0);
    /* XML2 B58E9 uses its native party collection with selector -1 and
     * normal caching. XML1 exposes the same collection at virtual E0
     * (72470), copying five handle slots plus count into the caller's list.
     * Preserve native eligibility/caching; don't scan the entire roster. */
    PUSH32(g_esp,0);PUSH32(g_esp,0xffffffffu);PUSH32(g_esp,list);PUSH32(g_esp,0);
    RECOMP_ICALL_SAFE(target,list);
    if(g_esp!=list)extension_failure("party collection ABI");
    uint32_t count=MEM32(list+0x14),found=0;
    if(count>5)extension_failure("native party collection capacity");
    for(uint32_t i=0;i<count;++i) {
        g_ecx=list+i*4;PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x0006BF80u,sub_0006BF80);
        if(g_esp!=list)extension_failure("party handle resolver ABI");
        if(same_living_party_character(actor,g_eax)){found=1;break;}
    }
    g_esp=sp;return found;
}
static void is_actor_on_team(void) {
    uint32_t args=MEM32(g_esp+4),sp=g_esp;
    uint32_t actor=resolve_entity(argument(args,0,0x14));
    return_integer(actor_on_team(actor),sp);
}
static void disallow_response(void) {
    uint32_t sp=g_esp;
    conversation_method(0x2c);
    g_eax=0;g_esp=sp+4;
}
static void entity_fade(uint32_t entity,float seconds,int out) {
    /* Missing XML2 commands B3660/B36F0 both require CGameEntity and
     * pass zero delay. XML1 already owns fading, time and render updates. */
    if(!entity_has_type(entity,0x499568))return;
    uint32_t sp=g_esp,bits;memcpy(&bits,&seconds,4);
    g_ecx=entity;PUSH32(g_esp,0);PUSH32(g_esp,bits);PUSH32(g_esp,0);
    if(out)RECOMP_ABI_CALL(0x000749E0u,sub_000749E0);
    else RECOMP_ABI_CALL(0x00074990u,sub_00074990);
    if(g_esp!=sp)extension_failure("entity fade ABI");
}
static void fade_entity(int out) {
    uint32_t args=MEM32(g_esp+4),sp=g_esp;
    uint32_t name=argument(args,0,0x14);
    float seconds=float_argument(args,1);
    entity_fade(resolve_entity(name),seconds,out);
    g_eax=0;g_esp=sp+4;
}
static void fade_in(void) {fade_entity(0);}
static void fade_out(void) {fade_entity(1);}
static void get_conversation_active(void) {
    uint32_t sp=g_esp;
    /* XML2 tests AL == 1, not the undefined upper bits of a bool return. */
    return_integer((conversation_method(0x20)&255u)==1u,sp);
}
static void response_on_objective(uint32_t objective,int complete) {
    if(!objective)return;
    uint32_t sp=g_esp;
    /* Native XML1 getObjective("COMPLETE") at 9A173 calls this method.
     * Do not copy XML2's packed state layout or alter objective progression. */
    g_ecx=objective;PUSH32(g_esp,0x00099B66u);
    RECOMP_ABI_CALL(0x00084980u,sub_00084980);
    if(g_esp!=sp)extension_failure("objective completion query ABI");
    if((g_eax&255u)==(uint32_t)complete)conversation_method(0x2c);
}
static void disallow_response_on_objective(void) {
    uint32_t args=MEM32(g_esp+4),sp=g_esp;
    uint32_t name=argument(args,0,0x14),condition=argument(args,1,0x14);
    int complete=condition && !_stricmp((const char*)XBOX_PTR(condition),"TRUE");
    /* XML2 ACBA0 resolves the named objective, then suppresses on equality.
     * XML1's mission manager owns lookup and the lifetime of the result. */
    PUSH32(g_esp,0x00099B66u);RECOMP_ABI_CALL(0x00086000u,sub_00086000);
    g_ecx=g_eax;
    uint32_t target=MEM32(MEM32(g_ecx)+0x38);
    PUSH32(g_esp,name);PUSH32(g_esp,0x00099B66u);
    RECOMP_ICALL_SAFE(target,sp);
    if(g_esp!=sp)extension_failure("objective lookup ABI");
    response_on_objective(g_eax,complete);
    g_eax=0;g_esp=sp+4;
}

static uint32_t game_variable_object(uint32_t name) {
    uint32_t before=g_esp;
    PUSH32(g_esp,name);PUSH32(g_esp,0x00099B66u);
    RECOMP_ABI_CALL(0x000CC120u,sub_000CC120);g_ecx=g_eax;
    PUSH32(g_esp,0x00099B66u);RECOMP_ABI_CALL(0x000CACD0u,sub_000CACD0);
    if(g_esp!=before)extension_failure("game variable lookup ABI");
    return g_eax;
}
static uint32_t variable_integer(uint32_t value) {
    uint32_t before=g_esp;
    if(value) {
        g_ecx=value;PUSH32(g_esp,0x00099B66u);
        RECOMP_ICALL_SAFE(MEM32(MEM32(value)+0x10),before);
        value=g_eax;
    }
    if(g_esp!=before)extension_failure("game variable read ABI");
    return value;
}
static uint32_t game_variable(uint32_t name) {
    return variable_integer(game_variable_object(name));
}
static void put_game_variable(uint32_t name,uint32_t value) {
    uint32_t before=g_esp;
    /* Native setGameVar storage owns allocation, lookup and save persistence. */
    PUSH32(g_esp,value);PUSH32(g_esp,name);PUSH32(g_esp,0x00099B66u);
    RECOMP_ABI_CALL(0x000CC120u,sub_000CC120);g_ecx=g_eax;
    PUSH32(g_esp,0x00099B66u);RECOMP_ABI_CALL(0x000CB850u,sub_000CB850);
    if(g_esp!=before)extension_failure("game variable write ABI");
}
static uint32_t flag_value(uint32_t value,int32_t index) {
    /* XML2 AF1C0 uses one-based indices; out-of-range queries are false. */
    return index>0 && index<=32 ? (value>>((uint32_t)index-1u))&1u : 0;
}
static uint32_t flag_assignment(uint32_t value,int32_t index,int32_t enabled) {
    /* AF150's x86 shift masks its count. Keep it defined in C even for
     * malformed indices, without disturbing any other variable bits. */
    uint32_t mask=1u<<(((uint32_t)index-1u)&31u);
    return enabled ? value|mask : value&~mask;
}
static uint32_t flag_count(uint32_t value) {
    uint32_t count=0;
    while(value) {value&=value-1u;++count;}
    return count;
}
#include "engine/inventory/raven_disc_reward_guest.inc"

static void response_on_variable_count(uint32_t value,int32_t minimum) {
    /* XML2 B5B60 deliberately leaves the current response untouched when
     * the game variable is absent. A present zero value is different.
     * B1540 counts set flags, not the numeric magnitude of the variable.
     * Suppression is one-way: a later qualifying condition must not undo
     * a rejection from another condition on the same response. */
    if(value && (int32_t)flag_count(variable_integer(value))<minimum)
        conversation_method(0x2c);
}
static void allow_response_on_game_var_count(void) {
    uint32_t args=MEM32(g_esp+4),sp=g_esp;
    uint32_t name=argument(args,0,0x14);
    int32_t minimum=(int32_t)argument(args,1,0x10);
    response_on_variable_count(game_variable_object(name),minimum);
    g_eax=0;g_esp=sp+4;
}
static void game_flag_get(void) {
    uint32_t args=MEM32(g_esp+4),entry_sp=g_esp;
    uint32_t name=argument(args,0,0x14);
    int32_t index=(int32_t)argument(args,1,0x10);
    return_integer(flag_value(game_variable(name),index),entry_sp);
}
static void game_flag_set(void) {
    uint32_t args=MEM32(g_esp+4),entry_sp=g_esp;
    uint32_t name=argument(args,0,0x14);
    int32_t index=(int32_t)argument(args,1,0x10);
    int32_t enabled=(int32_t)argument(args,2,0x10);
    put_game_variable(name,flag_assignment(game_variable(name),index,enabled));
    g_eax=0;g_esp=entry_sp+4;
}
static void game_variable_bit_count(void) {
    uint32_t args=MEM32(g_esp+4),entry_sp=g_esp;
    uint32_t name=argument(args,0,0x14);
    return_integer(flag_count(game_variable(name)),entry_sp);
}

static void entity_no_collide_no_tickle(uint32_t entity,int enabled) {
    if(!entity_has_type(entity,0x499568))return;
    uint32_t before=g_esp;
    /* XML2 B31F7 sets only flag index 1 via the normal entity flag setter.
     * Use XML1's flag API, including its manager notification, without
     * issuing a contact/tickle refresh (66B60) from this new command. */
    g_ecx=entity;PUSH32(g_esp,enabled?1:0);PUSH32(g_esp,1);
    PUSH32(g_esp,0x00099B66u);RECOMP_ABI_CALL(0x00026DD0u,sub_00026DD0);
    if(g_esp!=before)extension_failure("no-collide-no-tickle ABI");
}
static void set_no_collide_no_tickle(void) {
    uint32_t args=MEM32(g_esp+4),entry_sp=g_esp;
    uint32_t name=argument(args,0,0x14),value=argument(args,1,0x14);
    int enabled=value && !_stricmp((const char*)XBOX_PTR(value),"TRUE");
    entity_no_collide_no_tickle(resolve_entity(name),enabled);
    g_eax=0;g_esp=entry_sp+4;
}

static void entity_no_gravity(uint32_t entity,int enabled) {
    if(!entity_has_type(entity,0x499568))return;
    uint32_t before=g_esp;
    /* XML1's nogravity property uses flag index 2 (935BA). The native
     * setter also notifies the entity manager through 66A90. */
    g_ecx=entity;PUSH32(g_esp,enabled?1:0);PUSH32(g_esp,2);
    PUSH32(g_esp,0x00099B66u);RECOMP_ABI_CALL(0x00026DD0u,sub_00026DD0);
    if(g_esp!=before)extension_failure("no-gravity flag ABI");
}
static void entity_path_ignore(uint32_t entity,int enabled) {
    if(!entity_has_type(entity,0x499568))return;
    /* Native XML1 property parser 79074..79092 assigns pathignore to
     * +234 bit 2. Preserve the other physical-state flags. */
    uint8_t flags=MEM8(entity+0x234);
    MEM8(entity+0x234)=enabled?(flags|4u):(flags&~4u);
}
static void refresh_path_grid(void) {
    uint32_t before=g_esp;
    PUSH32(g_esp,0x00099B66u);RECOMP_ABI_CALL(0x0008F170u,sub_0008F170);
    g_ecx=g_eax;
    /* Native XML1 CPathGrid update is virtual +4, taking force=false.
     * Retain its own update cadence and cache ownership. */
    uint32_t method=MEM32(MEM32(g_ecx)+4);
    PUSH32(g_esp,0);PUSH32(g_esp,0x00099B66u);
    RECOMP_ICALL_SAFE(method,before);
    if(g_esp!=before)extension_failure("path grid update ABI");
}
static void set_physical_toggle(int path_ignore) {
    uint32_t args=MEM32(g_esp+4),entry_sp=g_esp;
    uint32_t selector=argument(args,0,0x14),value=argument(args,1,0x14);
    int enabled=value && !_stricmp((const char*)XBOX_PTR(value),"TRUE");
    /* XML1 already provides bulk name/hero selection. Reuse its native
     * results; the missing command must not silently select just one match. */
    PUSH32(g_esp,selector);PUSH32(g_esp,0x00099B66u);
    RECOMP_ABI_CALL(0x0009FF10u,sub_0009FF10);g_esp+=4;
    int32_t count=(int32_t)g_eax;
    if(g_esp!=entry_sp)extension_failure("target selection ABI");
    for(int32_t i=0;i<count;++i) {
        uint32_t entity=MEM32(0x4C25F8+(uint32_t)i*4);
        if(path_ignore)entity_path_ignore(entity,enabled);
        else entity_no_gravity(entity,enabled);
    }
    /* XML2 B84E1 requests one update for any nonempty selection. */
    if(path_ignore && count>0)refresh_path_grid();
    g_eax=0;g_esp=entry_sp+4;
}

static void set_no_gravity(void) {set_physical_toggle(0);}
static void set_path_ignore(void) {set_physical_toggle(1);}

/* These added command names all point to XML2 retail 2BCD90: xor eax,eax;
 * ret. Keep the null interpreter result and cdecl argument ownership. Their
 * names do not authorize inventing save deletion or network configuration. */
static void retail_zero_command(void) {g_eax=0;g_esp+=4;}

/* Keep command metadata together. The guest allocation grows from the actual
 * entries, without moving additions into XML1's fixed 215-slot native map. */
static const struct ScriptExtension {
    const char *name,*result,*arguments;
    void (*function)(void);
} extensions[]={
    {"dataDiscReward","n","s",data_disc_reward},
    {"extractionUnlock","n","s",extraction_unlock},
    {"isExtractionPointUnlocked","i","",extraction_is_unlocked},
    {"strcatstr","s","ss",concat_strings},
    {"strcatint","s","si",concat_integer},
    {"strveci","s","iii",vector_integer},
    {"getDistance","f","aa",entity_distance},
    {"setRotZ","n","ai",entity_rotation_z},
    {"setAlpha","n","af",set_alpha},
    {"fadeIn","n","af",fade_in},
    {"fadeOut","n","af",fade_out},
    {"setAnimSpeed","n","af",set_animation_speed},
    {"getParentID","i","a",entity_parent_id},
    {"getOpened","i","a",get_opened},
    {"getAIControlled","i","a",entity_ai_controlled},
    {"playCombatNodeTrigger","n","asi",combat_node_trigger},
    {"getGameFlag","i","si",game_flag_get},
    {"setGameFlag","n","sii",game_flag_set},
    {"getGameVarBitCount","i","s",game_variable_bit_count},
    {"setNoGravity","n","as",set_no_gravity},
    {"setPathIgnore","n","as",set_path_ignore},
    {"setNoCollideNoTickle","n","as",set_no_collide_no_tickle},
    {"disallowResponse","n","",disallow_response},
    {"getConversationActive","i","",get_conversation_active},
    {"allowResponseOnGameVarCount","n","si",allow_response_on_game_var_count},
    {"disallowResponseOnObjective","n","ss",disallow_response_on_objective},
    {"wanderNextZoneLink","n","",retail_zero_command},
    {"causeTroubleForAutotest","n","",retail_zero_command},
    {"saveloadDefaultCheck","n","",retail_zero_command},
    {"saveloadDefaultCheck2","n","",retail_zero_command},
    {"saveloadBootDeleteCorrupt","n","",retail_zero_command},
    {"loadNetworkConfig","n","i",retail_zero_command},
    {"actSilent","n","aa",act_silent},
    {"amIAnXman","i","a",am_i_an_xman},
    {"getBrotherhood","i","a",get_brotherhood},
    {"isActorOnTeam","i","a",is_actor_on_team},
    {"killEntitySilent","n","a",kill_entity_silent},
    {"setActorScaleTimed","n","aff",set_actor_scale_timed},
    {"getNearestMonsterSpawner","i","ai",get_nearest_spawner},
    {"useSavedStats","n","",xml1_saved_stats_script},
    {"isHardDifficultyUnlocked","i","",hard_difficulty_unlocked},
    {"unlockHardDifficulty","n","",unlock_hard_difficulty},
    {"useDefaultStats","n","",use_default_stats},
    {"setDifficultyLevel","n","i",set_difficulty_level},
    {"startGameDiffDialog","n","",start_game_difficulty_dialog},
    {"setCurrentAct","n","i",set_current_act},
    {"permanentStatBoost","n","as",permanent_stat_boost},
    {"isBlinkPortalActive","i","",blink_portal_active},
    {"recallZone","n","",recall_zone},
    {"setAutoEquip","n","i",set_auto_equip},
    {"setActorHuge","n","as",set_actor_huge},
    {"setRecallActive","n","s",set_recall_active},
    {"stashMenu","n","",stash_menu_script},
};
#define EXTENSION_COUNT ((unsigned)(sizeof(extensions)/sizeof(extensions[0])))
#define DESCRIPTOR_OFFSET (EXTENSION_COUNT*4u)
static unsigned extension_bytes(void) {
    unsigned size=EXTENSION_COUNT*20u;
    for(unsigned i=0;i<EXTENSION_COUNT;++i)
        size+=(unsigned)(strlen(extensions[i].name)+strlen(extensions[i].result)+strlen(extensions[i].arguments)+3);
    return size;
}
static void populate_descriptors(void) {
    unsigned cursor=EXTENSION_COUNT*20u;
    memset((void*)XBOX_PTR(extension_block),0,extension_bytes());
    for(unsigned i=0;i<EXTENSION_COUNT;++i) {
        uint32_t record=extension_block+DESCRIPTOR_OFFSET+i*16;
        MEM32(record)=extension_block+i*4;
        const char *fields[]={extensions[i].name,extensions[i].result,extensions[i].arguments};
        for(unsigned j=0;j<3;++j) {
            size_t size=strlen(fields[j])+1;
            MEM32(record+4+j*4)=extension_block+cursor;
            memcpy((void*)XBOX_PTR(extension_block+cursor),fields[j],size);
            cursor+=(unsigned)size;
        }
    }
}
/* Private fixture endpoints are active only while the programmatic check
 * runs. Native entity/model-component/controller methods remain exercised;
 * the fixture substitutes model lookup and the terminal playback object. */
static uint32_t animation_fixture_code,animation_fixture_component;
static uint32_t animation_fixture_receiver,animation_fixture_bits,animation_fixture_calls;
static void animation_fixture_model(void) {
    g_eax=animation_fixture_component;g_esp+=4;
}
static void animation_fixture_playback(void) {
    animation_fixture_receiver=g_ecx;animation_fixture_bits=MEM32(g_esp+4);
    ++animation_fixture_calls;g_esp+=8;
}
static int animation_fixture_is_code(uint32_t address) {
    return animation_fixture_code &&
        (address==animation_fixture_code || address==animation_fixture_code+4);
}
int xml1_script_extension_is_code(uint32_t address) {
    if(xml1_campaign_capacity_lookup(address))return 1;
    if(xml1_campaign_fixture_lookup(address))return 1;
    if(saved_stats_fixture_code&&address>=saved_stats_fixture_code&&address<=saved_stats_fixture_code+28&&!((address-saved_stats_fixture_code)&3))return 1;
    if(spawner_callback_block&&address==spawner_callback_block+4)return 1;
    if(spawner_fixture_code&&(address==spawner_fixture_code||address==spawner_fixture_code+4))return 1;
    if(recall_query_fixture_code&&address==recall_query_fixture_code)return 1;
    if(scale_clearance_fixture_code&&(address==scale_clearance_fixture_code||address==scale_clearance_fixture_code+4||address==scale_clearance_fixture_code+8||address==scale_clearance_fixture_code+12))return 1;
    if(actor_scale_fixture_code&&(address==actor_scale_fixture_code||address==actor_scale_fixture_code+4||address==actor_scale_fixture_code+8))return 1;
    if(silent_kill_fixture_code&&(address==silent_kill_fixture_code||address==silent_kill_fixture_code+4))return 1;
    if(silent_fixture_code&&address==silent_fixture_code)return 1;
    if(silent_callback_block&&address==silent_callback_block+8)return 1;
    if(animation_fixture_is_code(address))return 1;
    return xml1_bishop_is_code(address) || (extension_block && address>=extension_block &&
        address-extension_block<EXTENSION_COUNT*4u && !((address-extension_block)&3u));
}
void (*xml1_script_extension_lookup(uint32_t address))(void) {
    if(xml1_campaign_capacity_lookup(address))return xml1_campaign_capacity_lookup(address);
    if(xml1_campaign_fixture_lookup(address))return xml1_campaign_fixture_lookup(address);
    if(saved_stats_fixture_code&&address==saved_stats_fixture_code)return saved_stats_fixture_characters;
    if(saved_stats_fixture_code&&address==saved_stats_fixture_code+4)return saved_stats_fixture_inventory;
    if(saved_stats_fixture_code&&address==saved_stats_fixture_code+8)return saved_stats_fixture_category;
    if(saved_stats_fixture_code&&address==saved_stats_fixture_code+12)return saved_stats_fixture_heap;
    if(saved_stats_fixture_code&&address==saved_stats_fixture_code+16)return saved_stats_fixture_release;
    if(saved_stats_fixture_code&&address==saved_stats_fixture_code+20)return saved_stats_fixture_close;
    if(saved_stats_fixture_code&&address==saved_stats_fixture_code+24)return saved_stats_fixture_startup;
    if(saved_stats_fixture_code&&address==saved_stats_fixture_code+28)return saved_stats_fixture_prepare;
    if(spawner_callback_block&&address==spawner_callback_block+4)return spawner_distance;
    if(spawner_fixture_code&&address==spawner_fixture_code)return spawner_fixture_begin;
    if(recall_query_fixture_code&&address==recall_query_fixture_code)return recall_query_fixture_begin;
    if(spawner_fixture_code&&address==spawner_fixture_code+4)return spawner_fixture_sphere;
    if(scale_clearance_fixture_code&&address==scale_clearance_fixture_code)return scale_clearance_fixture_sweep;
    if(scale_clearance_fixture_code&&address==scale_clearance_fixture_code+4)return scale_clearance_fixture_direction;
    if(scale_clearance_fixture_code&&address==scale_clearance_fixture_code+8)return scale_clearance_fixture_position;
    if(scale_clearance_fixture_code&&address==scale_clearance_fixture_code+12)return scale_clearance_fixture_type;
    if(actor_scale_fixture_code&&address==actor_scale_fixture_code)return actor_scale_fixture_shape;
    if(actor_scale_fixture_code&&address==actor_scale_fixture_code+4)return actor_scale_fixture_refresh;
    if(actor_scale_fixture_code&&address==actor_scale_fixture_code+8)return actor_scale_fixture_present;
    if(silent_kill_fixture_code&&address==silent_kill_fixture_code)return silent_kill_fixture_register;
    if(silent_kill_fixture_code&&address==silent_kill_fixture_code+4)return silent_kill_fixture_destroy;
    if(silent_fixture_code&&address==silent_fixture_code)return silent_fixture_action;
    if(silent_callback_block&&address==silent_callback_block+8)return silent_callback;
    if(animation_fixture_is_code(address))return address==animation_fixture_code?
        animation_fixture_model:animation_fixture_playback;
    if(xml1_bishop_is_code(address))return xml1_bishop_lookup(address);
    return xml1_script_extension_is_code(address)?extensions[(address-extension_block)/4].function:NULL;
}
void xml1_register_script_extensions(uint32_t manager) {
    uint32_t saved_sp=g_esp,saved_eax=g_eax,saved_ecx=g_ecx,saved_edx=g_edx;
    if(installed_manager==manager)return;
    if(!manager)extension_failure("null interpreter");
    if(!extension_block) {
        /* Same allocation category/tag as the native interpreter singleton at
           000CC120. Descriptors remain live for the interpreter's lifetime. */
        PUSH32(g_esp,0x2BC90);PUSH32(g_esp,14);PUSH32(g_esp,extension_bytes());
        PUSH32(g_esp,0x00099B66u);RECOMP_ABI_CALL(0x00123490u,sub_00123490);
        g_esp+=12;
        if(!g_eax)extension_failure("descriptor allocation");
        extension_block=g_eax;
        populate_descriptors();
    }
    const char *test=getenv("XML1_TEST_SCRIPT_EXTENSIONS");
    /* The original command map has exactly 215 slots (CA200 wraps at D7).
     * XML1 already occupies 213. A third insertion reuses node zero and
     * corrupts the search tree. Keep additions outside this fixed guest
     * layout; CAD40 consults them only after a native lookup misses. */
    installed_manager=manager;
    fprintf(stderr,"[RAVEN SCRIPT] registered %u extension descriptors outside native fixed map\n",EXTENSION_COUNT);
    if(test && !strcmp(test,"1"))test_extensions(manager);
    if(g_esp!=saved_sp)extension_failure("registration ABI");
    g_eax=saved_eax;g_ecx=saved_ecx;g_edx=saved_edx;
}

uint32_t xml1_script_extension_descriptor(uint32_t manager,uint32_t name) {
    if(manager!=installed_manager||!extension_block||!name)return 0;
    for(unsigned i=0;i<EXTENSION_COUNT;++i) {
        uint32_t record=extension_block+DESCRIPTOR_OFFSET+i*16;
        const char *expected=(const char *)XBOX_PTR(MEM32(record+4));
        unsigned j=0;
        while(expected[j] && MEM8(name+j)==(unsigned char)expected[j])++j;
        if(!expected[j]&&!MEM8(name+j))return record;
    }
    return 0;
}

static uint32_t test_string(uint32_t manager,const char *text) {
    uint32_t before=g_esp;
    g_esp-=128;uint32_t bytes=g_esp;
    strcpy((char *)XBOX_PTR(bytes),text);
    g_ecx=manager;PUSH32(g_esp,bytes);
    PUSH32(g_esp,0x00099B66u);RECOMP_ABI_CALL(0x000CCCF0u,sub_000CCCF0);
    if(g_esp!=bytes || !g_eax)extension_failure("test string allocation");
    g_esp=before;return g_eax;
}
static void test_extensions(uint32_t manager) {
    /* Bounded, process-local diagnostic: native argument/result objects and
       normal indirect dispatch. Does not simulate desktop or controller input. */
    uint32_t before=g_esp;
    /* Exercise the interpreter lookup, not just our direct thunk dispatcher.
     * Native names must keep native descriptors; unknown names stay missing. */
    g_esp-=128;uint32_t name_bytes=g_esp;
    for(unsigned i=0;i<EXTENSION_COUNT+2;++i) {
        strcpy((char *)XBOX_PTR(name_bytes),i<EXTENSION_COUNT?extensions[i].name:
            i==EXTENSION_COUNT?"startMovie":"no_such_xml2_command");
        g_ecx=manager;PUSH32(g_esp,name_bytes);
        PUSH32(g_esp,0x00099B66u);RECOMP_ABI_CALL(0x000CAD40u,sub_000CAD40);
        if(g_esp!=name_bytes)extension_failure("descriptor lookup ABI");
        if(i<EXTENSION_COUNT&&g_eax!=extension_block+DESCRIPTOR_OFFSET+i*16)extension_failure("extension descriptor lookup");
        if(i==EXTENSION_COUNT&&(!g_eax||(g_eax>=extension_block&&g_eax<extension_block+extension_bytes())))
            extension_failure("native descriptor preservation");
        if(i==EXTENSION_COUNT+1&&g_eax)extension_failure("unknown command lookup");
    }
    g_esp=before;
    g_esp-=32;uint32_t args=g_esp;
    memset((void *)XBOX_PTR(args),0,32);MEM32(args+0x1c)=2;
    MEM32(args)=test_string(manager,"hero/");
    MEM32(args+4)=test_string(manager,"sunfire");
    uint32_t call_sp=g_esp;
    PUSH32(g_esp,args);PUSH32(g_esp,0x00099B66u);
    RECOMP_ICALL_SAFE(extension_block,call_sp);
    if(g_esp!=call_sp-4 || !g_eax)extension_failure("concat test return ABI");
    g_esp+=4;
    uint32_t result=g_eax;
    MEM32(args)=result;
    char actual[128];copy_string(argument(args,0,0x14),actual);
    if(strcmp(actual,"hero/sunfire"))extension_failure("concat test result");
    MEM32(args)=test_string(manager,"skin_");
    g_ecx=manager;PUSH32(g_esp,(uint32_t)INT32_MIN);
    PUSH32(g_esp,0x00099B66u);RECOMP_ABI_CALL(0x000CA9B0u,sub_000CA9B0);
    if(!g_eax)extension_failure("integer test allocation");
    MEM32(args+4)=g_eax;
    PUSH32(g_esp,args);PUSH32(g_esp,0x00099B66u);
    RECOMP_ICALL_SAFE(extension_block+4,call_sp);
    if(g_esp!=call_sp-4 || !g_eax)extension_failure("concat integer test return ABI");
    g_esp+=4;MEM32(args)=g_eax;
    copy_string(argument(args,0,0x14),actual);
    if(strcmp(actual,"skin_-2147483648"))extension_failure("concat integer result");
    MEM32(args+0x1c)=3;
    const int32_t components[]={INT32_MIN,0,INT32_MAX};
    for(unsigned i=0;i<3;++i) {
        g_ecx=manager;PUSH32(g_esp,(uint32_t)components[i]);
        PUSH32(g_esp,0x00099B66u);RECOMP_ABI_CALL(0x000CA9B0u,sub_000CA9B0);
        if(g_esp!=call_sp||!g_eax)extension_failure("vector argument allocation ABI");
        MEM32(args+i*4)=g_eax;
    }
    PUSH32(g_esp,args);PUSH32(g_esp,0x00099B66u);
    RECOMP_ICALL_SAFE(extension_block+8,call_sp);
    if(g_esp!=call_sp-4||!g_eax)extension_failure("vector return ABI");
    g_esp+=4;MEM32(args)=g_eax;
    copy_string(argument(args,0,0x14),actual);
    if(strcmp(actual,"-2147483648 0 2147483647"))extension_failure("vector result");
    g_esp=before;
    fprintf(stderr,"[RAVEN SCRIPT TEST PASS] native values, dispatch and stack ABI\n");
}

/* Called only by --powerup-definition-test, before the game entry point.
 * Native script conversion and rotation callbacks run on private guest objects. */
int xml1_script_extensions_fixture(uint32_t pool) {
    uint32_t saved_block=extension_block,saved_manager=installed_manager;
    uint32_t saved_type=MEM32(0x48D8FC),saved_parent_type=MEM32(0x48338C),stack=g_esp;
    uint32_t saved_actor_type=MEM32(0x485878),saved_physical_type=MEM32(0x499568);
    int fp=g_fp_top,failed=0;
    if(silent_action_fixture(pool))failed=1;
    if(silent_kill_fixture(pool+0x18000))failed=1;
    if(actor_scale_geometry_fixture(pool+0x18000))failed=1;
    if(xml1_character_race_fixture(pool+0x14000))failed=1;
    if(xml1_leader_definition_fixture(pool+0x14000))failed=1;
    if(xml1_transform_definition_fixture(pool+0x14000))failed=1;
    if(xml1_leader_actor_fixture(pool+0x14000))failed=1;
    if(xml1_extraction_fixture(pool+0x14000))failed=1;
    if(saved_stats_fixture(pool+0x14000))failed=1;
    if(xml1_progress_fixture(pool+0x14000))failed=1;
    if(xml1_campaign_extra_fixture(pool+0x14000))failed=1;
    if(xml1_campaign_menu_fixture(pool+0x14000))failed=1;
    if(transform_resource_fixture(pool+0x14000))failed=1;

    {
        /* Real native CMap getter on an isolated static-object fixture. Do
         * not initialize a map, load assets or change the user's campaign. */
        const uint32_t map=0x49B2F0,flag=MEM32(0x49B7A0),vtable=MEM32(map);
        unsigned char saved_name[128];memcpy(saved_name,(void*)XBOX_PTR(map+0x1e0),128);
        MEM32(0x49B7A0)=flag|1;MEM32(map)=0x3CE43C;
        strcpy((char*)XBOX_PTR(map+0x1e0),"fixture");
        strcpy((char*)XBOX_PTR(pool+0x14000),"explicit");
        MEM8(pool+0x14040)=0;
        if(extraction_zone(0)!=map+0x1e0 || extraction_zone(pool+0x14040)!=map+0x1e0 ||
           extraction_zone(pool+0x14000)!=pool+0x14000 || g_esp!=stack || g_fp_top!=fp)failed=1;
        memcpy((void*)XBOX_PTR(map+0x1e0),saved_name,128);
        MEM32(map)=vtable;MEM32(0x49B7A0)=flag;
        if(!failed)puts("PASS extraction current-zone adapter: native CMap lookup, empty-name fallback, explicit name bypass and ABI");
    }
    extension_block=pool;installed_manager=pool+0x400;
    {
        void (*huge)(void)=NULL;
        for(unsigned i=0;i<sizeof(extensions)/sizeof(extensions[0]);++i)
            if(!strcmp(extensions[i].name,"setActorHuge"))huge=xml1_script_extension_lookup(extension_block+i*4);
        if(!huge||transform_script_fixture(pool+0x14000,huge))failed=1;
    }
    populate_descriptors();
    for(unsigned i=0;i<EXTENSION_COUNT;++i)
        if(!strcmp(extensions[i].name,"dataDiscReward")&&
           disc_reward_fixture(pool+0x14000,xml1_script_extension_lookup(pool+i*4)))failed=1;
    for(unsigned i=0;i<EXTENSION_COUNT;++i)
        if(!strcmp(extensions[i].name,"setAutoEquip"))
            auto_equip_transaction_fixture(xml1_script_extension_lookup(pool+i*4));
    if(actor_scale_clearance_guest_fixture(pool+0x18000))failed=1;
    if(nearest_spawner_fixture(pool+0x18000))failed=1;
    if(vitality_lifecycle_fixture(pool+0x18000))failed=1;
    {
        int clear=0;
        if(raven_recall_plan("act1field","act1town","",1)!=RAVEN_RECALL_DEPART ||
           raven_recall_plan("ACT1TOWN","act1town","act1field",0)!=RAVEN_RECALL_RETURN ||
           raven_recall_plan("act1field","act1town","act1other",0)!=RAVEN_RECALL_NONE ||
           raven_recall_plan("act1field",NULL,"act1other",1)!=RAVEN_RECALL_NONE ||
           raven_recall_plan("act1town","act1town","",1)!=RAVEN_RECALL_DEPART ||
           raven_recall_plan("act1town","act1town","NoNe",0)!=RAVEN_RECALL_NONE ||
           raven_recall_plan("ACT1TOWN","act1town","NoNe",1)!=RAVEN_RECALL_NONE)
            failed=52;
        if(!raven_recall_portal_query("act1town","act1town","act1field",&clear)||clear ||
           !raven_recall_portal_query("act1other","act1town","act1field",&clear)||clear)
            failed=52;
        if(raven_recall_portal_query("act2town","act2town","act1field",&clear)||!clear)
            failed=52;
        if(raven_recall_portal_query("act1town",NULL,"act1field",&clear)||clear ||
           raven_recall_portal_query("a","a","",&clear)||clear ||
           raven_recall_portal_query("zone","zone","none",&clear)||clear)
            failed=52;
        if(raven_recall_portal_request("ACT1TOWN","act1town",0,99,0)!=RAVEN_PORTAL_RETURN ||
           raven_recall_portal_request("act1field","act1town",1,0,1)!=RAVEN_PORTAL_SPAWN ||
           raven_recall_portal_request("act1field","act1town",0,0,1)!=RAVEN_PORTAL_DENIED ||
           raven_recall_portal_request("act1field","act1town",1,1,1)!=RAVEN_PORTAL_DENIED ||
           raven_recall_portal_request("act1field","act1town",1,NAN,1)!=RAVEN_PORTAL_DENIED ||
           raven_recall_portal_request("act1field","act1town",1,0,0)!=RAVEN_PORTAL_DENIED)
            failed=52;
        float cooldown=300.0f;
        if(raven_recall_cooldown_step(&cooldown,0)||cooldown!=300 ||
           raven_recall_cooldown_step(&cooldown,0.25f)||cooldown!=299.75f ||
           !raven_recall_cooldown_step(&cooldown,400)||cooldown!=0 ||
           raven_recall_cooldown_step(&cooldown,1)||cooldown!=0)failed=52;
        cooldown=1;
        if(raven_recall_cooldown_step(&cooldown,-1)||cooldown!=1 ||
           raven_recall_cooldown_step(&cooldown,NAN)||cooldown!=1 ||
           !raven_recall_cooldown_step(&cooldown,1)||cooldown!=0)failed=52;
        if(recall_anchor_fixture())failed=52;
        if(stash_shared_transfer_fixture())failed=58;
        if(stash_menu_property_fixture())failed=59;
        if(failed!=52)puts("PASS recall decision core: hub return, departure actor requirement, absent metadata, case-insensitive hub, retained-zone group invalidation; runtime travel/state integration pending");
    }
    {
        /* Private interpreter result arena and real CMap getter. No scene,
         * disk, HUD, loader or host input is involved in this query fixture. */
        uint32_t arena=xbox_HeapAlloc(0x2bc90,16);
        if(!arena)extension_failure("portal query result arena");
        memset((void*)XBOX_PTR(arena),0,0x2bc90);
        for(unsigned i=0;i<0x300;++i)MEM32(arena+0x2c7c+0x2460+i*4)=i;
        MEM32(arena+0x2c7c+0x306c)=0x300;
        uint32_t old_arena=MEM32(0x4ebf54);MEM32(0x4ebf54)=arena;
        const uint32_t map=0x49b2f0;
        uint32_t old_map_flag=MEM32(0x49b7a0),old_map_table=MEM32(map);
        char old_name[128];memcpy(old_name,(const void*)XBOX_PTR(map+0x1e0),128);
        MEM32(0x49b7a0)=old_map_flag|1;MEM32(map)=0x3ce43c;
        uint32_t old_game_flag=MEM32(0x49954c);MEM32(0x49954c)=old_game_flag|1;
        xml1_recall_state old_state;xml1_campaign_recall_get(&old_state);
        unsigned old_act=xml1_campaign_current_act();
        raven_extraction_point point={"act3town",3,1};
        if(!raven_extraction_points(&point,1))failed=53;
        unsigned calls=0;
        for(unsigned i=0;i<EXTENSION_COUNT;++i)if(!strcmp(extensions[i].name,"isBlinkPortalActive")) {
            for(unsigned pass=0;pass<4;++pass) {
                xml1_recall_state state={"act3field",{1,2,3},0};
                xml1_campaign_recall_set(&state);xml1_campaign_store_act(pass==2?4:3);
                strcpy((char*)XBOX_PTR(map+0x1e0),pass==3?"act4town":pass==1?"act3field":"act3town");
                PUSH32(g_esp,0);xml1_script_extension_lookup(pool+i*4)();++calls;
                if(!g_eax||MEM32(g_eax)!=0x3d57f0||MEM32(g_eax+4)!=(pass<2)||
                   g_esp!=stack||g_fp_top!=fp)failed=53;
                xml1_campaign_recall_get(&state);
                if(strcmp(state.zone,pass==3?"none":"act3field")||state.enabled||
                   state.position[0]!=1||state.position[1]!=2||state.position[2]!=3)failed=53;
            }
        }
        if(calls!=4)failed=53;
        {
            uint32_t old_delta=MEM32(0x498e88+0x3a0);
            unsigned char old_mode=MEM8(0x4e7ab0);
            xml1_recall_state state={"act3field",{1,2,3},1,2};
            xml1_campaign_recall_set(&state);MEMF(0x498e88+0x3a0)=1;
            recall_ready=recall_ready_fixture;recall_ready_fixture_calls=0;
            const unsigned char modes[]={0,0xfe,0xfd};
            for(unsigned mode=0;mode<3;++mode) {
                MEM8(0x4e7ab0)=modes[mode];xml1_recall_tick(0x498e88);
            }
            xml1_campaign_recall_get(&state);
            if(state.cooldown!=2||recall_ready_fixture_calls)failed=54;
            MEM8(0x4e7ab0)=0xff;
            xml1_recall_tick(0);xml1_campaign_recall_get(&state);
            if(state.cooldown!=2)failed=54;
            for(unsigned tick=0;tick<3;++tick) {
                g_eax=123;g_ecx=456;g_edx=789;
                xml1_recall_tick(0x498e88);
                if(g_eax!=123||g_ecx!=456||g_edx!=789||g_esp!=stack||g_fp_top!=fp)failed=54;
            }
            xml1_campaign_recall_get(&state);
            if(state.cooldown!=0||recall_ready_fixture_calls!=1||
               strcmp(state.zone,"act3field")||state.position[1]!=2||state.enabled!=1)failed=54;
            recall_ready=recall_ready_notice;MEM8(0x4e7ab0)=old_mode;
            MEM32(0x498e88+0x3a0)=old_delta;
            if(failed!=54)puts("PASS recall tick: native Danger Room exclusion, live owner, simulation delta, one-shot expiry and register/FPU preservation; HUD terminal substituted");
        }
        if(recall_native_contract_fixture()||recall_travel_fixture())failed=55;
        for(unsigned i=0;i<EXTENSION_COUNT;++i)if(!strcmp(extensions[i].name,"setRecallActive"))
            if(recall_enabled_script_fixture(xml1_script_extension_lookup(pool+i*4)))failed=57;
        for(unsigned i=0;i<EXTENSION_COUNT;++i)if(!strcmp(extensions[i].name,"stashMenu"))
            if(stash_open_script_fixture(xml1_script_extension_lookup(pool+i*4)))failed=60;
        {
            uint32_t context=MEM32(0x4ebf50);MEM32(0x4ebf50)=0;
            xml1_recall_state state={"act3field",{7,8,9},0,99};
            xml1_campaign_recall_set(&state);xml1_campaign_store_act(3);
            strcpy((char*)XBOX_PTR(map+0x1e0),"act3town");
            recall_load_destination=recall_fixture_load;recall_place_party=recall_fixture_place;
            recall_fixture_loads=recall_fixture_places=0;unsigned dispatches=0;
            for(unsigned i=0;i<EXTENSION_COUNT;++i)if(!strcmp(extensions[i].name,"recallZone")) {
                for(unsigned pass=0;pass<2;++pass) {
                    PUSH32(g_esp,0);xml1_script_extension_lookup(pool+i*4)();++dispatches;
                    if(g_eax||g_esp!=stack||g_fp_top!=fp)failed=56;
                    xml1_recall_arrive(map);
                }
            }
            xml1_campaign_recall_get(&state);
            if(dispatches!=2||recall_fixture_loads!=1||recall_fixture_places!=1||
               recall_fixture_position[1]!=8||strcmp(state.zone,"none"))failed=56;
            recall_load_destination=recall_native_load;recall_place_party=recall_native_place;
            xml1_recall_cancel();MEM32(0x4ebf50)=context;
            if(failed!=56)puts("PASS registered recallZone: zero-argument dispatch, actorless hub return, native empty context, post-load stored position, absent-activator field no-op and ABI; loading/movement terminals substituted");
        }
        xml1_campaign_recall_set(&old_state);xml1_campaign_store_act(old_act);
        MEM32(0x49954c)=old_game_flag;
        memcpy((void*)XBOX_PTR(map+0x1e0),old_name,128);
        MEM32(map)=old_map_table;MEM32(0x49b7a0)=old_map_flag;
        if(!raven_extraction_definitions(NULL,0))failed=53;
        MEM32(0x4ebf54)=old_arena;xbox_HeapFree(arena);
        if(failed!=53)puts("PASS registered isBlinkPortalActive: real map and integer result, authored town/act, recall state, enabled-flag independence, zone invalidation, preserved position and ABI; world portal rendering untested");
    }
    /* Keep test scratch clear of the growing descriptor/string table. */
    uint32_t name=pool+0x13000;
    for(unsigned i=0;i<EXTENSION_COUNT;++i) {
        strcpy((char*)XBOX_PTR(name),extensions[i].name);
        uint32_t descriptor=xml1_script_extension_descriptor(installed_manager,name);
        if(descriptor!=pool+DESCRIPTOR_OFFSET+i*16 ||
           xml1_script_extension_lookup(MEM32(descriptor))!=extensions[i].function ||
           strcmp((const char*)XBOX_PTR(MEM32(descriptor+8)),extensions[i].result) ||
           strcmp((const char*)XBOX_PTR(MEM32(descriptor+12)),extensions[i].arguments))failed=1;
        if(extensions[i].function==retail_zero_command) {
            /* Deliberately unreadable argument pointer: the retail body
             * neither dereferences nor consumes its caller-owned arguments. */
            g_eax=0xBAD;PUSH32(g_esp,1);PUSH32(g_esp,0);
            RECOMP_ICALL_SAFE(MEM32(descriptor),stack);
            if(g_eax||g_esp!=stack-4||MEM32(g_esp)!=1||g_fp_top!=fp)failed=1;
            g_esp=stack;
        }
    }
    strcpy((char*)XBOX_PTR(name),"setRotZ_extra");
    if(!failed)puts("PASS retail script stubs: six recovered descriptors, indirect dispatch, null result, untouched arguments and stack/FPU ownership");
    if(xml1_script_extension_descriptor(installed_manager,name) ||
       xml1_script_extension_is_code(pool+1) ||
       xml1_script_extension_is_code(pool+DESCRIPTOR_OFFSET) ||
       xml1_script_extension_lookup(pool-4))failed=2;
    uint32_t args=pool+0x900,value=args+0x40,entity=pool+0x1000,table=entity+0x300;
    memset((void*)XBOX_PTR(args),0,0x100);
    MEM32(args)=value;MEM32(args+0x1c)=1;
    MEM32(value)=0x3D57C4;MEMF(value+4)=-27.5f;
    if(float_argument(args,0)!=-27.5f || g_fp_top!=fp || g_esp!=stack)failed=3;
    {
        /* Native value conversion and registered callback dispatch are real;
         * only the already separately tested startup/UI terminals are replaced. */
        difficulty_select=difficulty_fixture_select;difficulty_choose=difficulty_fixture_choose;
        difficulty_fixture_calls=0;difficulty_fixture_dialogs=0;
        for(unsigned i=0;i<EXTENSION_COUNT;++i) {
            int selecting=!strcmp(extensions[i].name,"setDifficultyLevel");
            if(!selecting&&strcmp(extensions[i].name,"startGameDiffDialog"))continue;
            MEMF(value+4)=-3.0f;
            PUSH32(g_esp,args);PUSH32(g_esp,0);
            xml1_script_extension_lookup(pool+i*4)();
            g_esp+=4;
            if(g_esp!=stack||g_eax||g_fp_top!=fp)failed=49;
        }
        difficulty_select=xml1_campaign_select_difficulty;difficulty_choose=xml1_campaign_choose_difficulty;
        if(difficulty_fixture_calls!=1||difficulty_fixture_dialogs!=1||difficulty_fixture_value!=-3)failed=49;
        MEMF(value+4)=-27.5f;
        if(failed!=49)puts("PASS registered difficulty commands: native integer conversion, both callback dispatches, null results and ABI; startup/UI terminals substituted");
    }
    {
        uint32_t initialized=MEM32(0x49954c);MEM32(0x49954c)=initialized|1;
        unsigned old_act=xml1_campaign_current_act(),calls=0;
        int32_t old_difficulty=xml1_campaign_difficulty();
        for(unsigned i=0;i<EXTENSION_COUNT;++i)if(!strcmp(extensions[i].name,"setCurrentAct")) {
            MEMF(value+4)=259.0f; /* Original native setter stores the low byte. */
            PUSH32(g_esp,args);PUSH32(g_esp,0);
            xml1_script_extension_lookup(pool+i*4)();g_esp+=4;++calls;
            if(xml1_campaign_current_act()!=3||xml1_campaign_difficulty()!=old_difficulty||
               g_eax||g_esp!=stack||g_fp_top!=fp)failed=50;
        }
        if(calls!=1)failed=50;
        xml1_campaign_store_act(old_act);MEM32(0x49954c)=initialized;MEMF(value+4)=-27.5f;
        if(failed!=50)puts("PASS registered setCurrentAct: native integer conversion, byte storage, unchanged difficulty, null result and ABI; XML1 shop/mission systems preserved");
    }
    {
        uint32_t block=xbox_HeapAlloc(0x900,16);
        if(!block)extension_failure("reward dispatch fixture allocation");
        memset((void*)XBOX_PTR(block),0,0x900);
        uint32_t stats=block+0x600,argv=block+0x800,first=argv+0x40,second=first+12;
        if(!xml1_character_talent_map_fixture_allocator(vitality_fixture_allocate))
            extension_failure("reward dispatch fixture active maps");
        spawner_call(stats,0x48EF0,0,NULL,0);
        MEM32(block)=0x3c94b4;MEM32(block+0x2d8)=stats-4;
        MEM32(argv)=first;MEM32(argv+4)=second;MEM32(argv+0x1c)=2;
        /* Real CValueString getter C9480; these borrowed fixture strings
         * have no interpreter allocation/destruction ownership. */
        MEM32(first)=0x3d5980;MEM32(first+4)=argv+0x70;
        MEM32(second)=0x3d5980;MEM32(second+4)=argv+0x90;
        strcpy((char*)XBOX_PTR(argv+0x70),"reward_fixture");
        strcpy((char*)XBOX_PTR(argv+0x90),"maxhealth");
        uint32_t initialized=MEM32(0x49954c);MEM32(0x49954c)=initialized|1;
        unsigned act=xml1_campaign_current_act();xml1_campaign_store_act(3);
        reward_fixture_actor=block;reward_fixture_notices=0;
        reward_resolve=reward_fixture_resolve;reward_notify=reward_fixture_notify;
        unsigned calls=0;
        for(unsigned i=0;i<EXTENSION_COUNT;++i)if(!strcmp(extensions[i].name,"permanentStatBoost")) {
            for(unsigned pass=0;pass<3;++pass) {
                if(pass==1)strcpy((char*)XBOX_PTR(argv+0x90),"unknown_stat");
                if(pass==2) {
                    strcpy((char*)XBOX_PTR(argv+0x70),"absent");
                    strcpy((char*)XBOX_PTR(argv+0x90),"maxhealth");
                }
                PUSH32(g_esp,argv);PUSH32(g_esp,0);
                xml1_script_extension_lookup(pool+i*4)();g_esp+=4;++calls;
                if(g_eax||g_esp!=stack||g_fp_top!=fp)failed=51;
            }
        }
        if(calls!=3||reward_fixture_notices!=1||reward_fixture_amount!=30||
           strcmp(reward_fixture_name,"maxhealth")||xml1_vitality_value(stats,0)!=30||
           MEMF(block+0x240)!=(float)(int16_t)MEM16(block+0x246))failed=51;
        reward_resolve=reward_actor;reward_notify=reward_notice;reward_fixture_actor=0;
        xml1_campaign_store_act(act);MEM32(0x49954c)=initialized;
        spawner_call(stats,0x48F90,0,NULL,0);
        if(!xml1_character_talent_map_fixture_allocator(NULL))failed=51;
        xbox_HeapFree(block);
        if(failed!=51)puts("PASS registered permanentStatBoost: native string getters, dispatch, act reward, native actor refill, invalid-name/absent-actor exclusion and ABI; name lookup/HUD terminals substituted");
    }
    memset((void*)XBOX_PTR(entity),0,0x500);
    MEM32(entity)=table;
    MEM32(table)=0x2E6B0; /* Native identity type getter for this fixture. */
    MEM32(table+0x2c)=0x2E540; /* Native rotation + cached rotation setter. */
    MEM32(table+0x118)=0x2E6B0; /* Terminal dirty-notification callback. */
    MEM32(0x48D8FC)=0;
    MEMF(entity+0x2c)=11.25f;MEMF(entity+0x30)=-3.5f;MEMF(entity+0x34)=90.0f;
    rotate_entity_z(0,12.0f);
    rotate_entity_z(entity,12.0f);
    if(MEMF(entity+0x34)!=90.0f)failed=4; /* Wrong type must be untouched. */
    MEM32(entity+0x18)=2; /* Native RTTI bit (class 0 + 0x21). */
    rotate_entity_z(entity,-27.5f);
    if(MEMF(entity+0x2c)!=11.25f || MEMF(entity+0x30)!=-3.5f ||
       MEMF(entity+0x34)!=-27.5f || MEMF(entity+0x1d8)!=11.25f ||
       MEMF(entity+0x1dc)!=-3.5f || MEMF(entity+0x1e0)!=-27.5f ||
       g_fp_top!=fp || g_esp!=stack)failed=5;
    MEM32(0x48338C)=1;
    MEM32(entity+0xbc)=0x81000201u;
    MEM32(entity+0xc0)=0x12345678;MEM32(entity+0xc4)=0x76543210;
    if(parent_id(0)!=0 || parent_id(entity)!=0)failed=6;
    MEM32(entity+0x18)|=4; /* Parent-capable entity type, independent of rotation. */
    if(parent_id(entity)!=0x81000201u || MEM32(entity+0xc0)!=0x12345678 ||
       MEM32(entity+0xc4)!=0x76543210)failed=7;
    MEM32(entity+0xbc)=0;
    if(parent_id(entity)!=0 || g_fp_top!=fp || g_esp!=stack)failed=8;
    MEM32(0x485878)=2;
    MEM8(entity+0x334)=0xff;
    if(ai_controlled(0)!=0 || ai_controlled(entity)!=0)failed=9;
    MEM32(entity+0x18)|=8;
    if(ai_controlled(entity)!=1 || MEM8(entity+0x334)!=0xff)failed=10;
    {
        const uint32_t definition=pool+0x14900;
        MEM32(entity+0x2d8)=definition;
        raven_character_race_reset(definition);
        if(!entity_is_xman(0)||!entity_is_xman(entity))failed=41;
        if(entity_is_brotherhood(0)||entity_is_brotherhood(entity))failed=42;
        raven_character_race_add(definition,"xmen");
        if(entity_is_brotherhood(entity))failed=42;
        raven_character_race_add(definition,"brotherhood");
        if(entity_is_xman(entity))failed=41;
        if(!entity_is_brotherhood(entity))failed=42;
        MEM32(entity+0x18)&=~8u;
        if(!entity_is_xman(entity))failed=41;
        if(entity_is_brotherhood(entity))failed=42;
        MEM32(entity+0x18)|=8u;
        raven_character_race_reset(definition);
        if(!entity_is_xman(entity)||g_esp!=stack||g_fp_top!=fp)failed=41;
        if(entity_is_brotherhood(entity))failed=42;
        MEM32(entity+0x2d8)=0;
        if(!failed)puts("PASS amIAnXman: authored Brotherhood classification, native actor RTTI, missing/non-actor defaults, reset/reuse and ABI");
        if(!failed)puts("PASS getBrotherhood: shared classification, ordinary/X-Men/Brotherhood membership, native RTTI, missing/non-actor defaults and retirement");
    }
    {
        uint32_t member=pool+0x16000,first=pool+0x16800,second=pool+0x16d00;
        memset((void*)XBOX_PTR(member),0,0x1200);
        MEM32(member)=table;MEM32(member+0x18)=8;MEM32(member+0x2d8)=second;
        MEM32(entity+0x2d8)=first;MEMF(member+0x240)=10;
        strcpy((char*)XBOX_PTR(first+0x22c),"ImportedHero");
        strcpy((char*)XBOX_PTR(second+0x22c),"importedhero");
        if(!same_living_party_character(entity,member))failed=43;
        strcpy((char*)XBOX_PTR(second+0x24c),"DifferentOverride");
        if(same_living_party_character(entity,member))failed=43;
        strcpy((char*)XBOX_PTR(first+0x24c),"differentoverride");
        if(!same_living_party_character(entity,member))failed=43;
        MEMF(member+0x240)=0;
        if(same_living_party_character(entity,member))failed=43;
        MEMF(member+0x240)=-1;
        if(same_living_party_character(entity,member))failed=43;
        MEMF(member+0x240)=10;MEM32(member+0x18)=0;
        if(same_living_party_character(entity,member)||same_living_party_character(entity,0)||
           same_living_party_character(0,member)||g_esp!=stack||g_fp_top!=fp)failed=43;
        {
            /* Exercise the real collection's valid-cache branch and native
             * generation-checked entity lookup. Only fixture state is supplied;
             * no replacement collection or resolver callback is installed. */
            const uint32_t fields[]={0x49954c,0x498e88,0x498e98,0x499224,
                0x5016e8,0x5016c8,0x5016e0,0x498e80,0x498dd4,
                0x498df0,0x498df4,0x498df8,0x498dfc,0x498e00,0x498e04,
                0x4e7044,0x4db2b8,0x4db2b8+0x185c,0x4db2b8+0x1018,
                0x4db2b8+0x1060,0x4db2b8+8};
            uint32_t saved[sizeof(fields)/sizeof(fields[0])];
            for(unsigned i=0;i<sizeof(fields)/sizeof(fields[0]);++i)saved[i]=MEM32(fields[i]);
            uint32_t engine=pool+0x17400,engine_table=engine+0x100;
            memset((void*)XBOX_PTR(engine),0,0x200);
            MEM32(engine)=engine_table;MEM32(engine_table+0x6c)=0x1446e0;
            MEM8(engine+0x18)=1; /* native byte getter: gameplay state */
            MEM32(0x49954c)=1;MEM32(0x498e88)=0x3ccd14;MEM32(0x498e98)=engine;
            MEMF(0x499224)=42.0f; /* native game clock at manager+39C */
            MEM32(0x5016e8)=1;MEM32(0x5016c8)=0x3da5cc;MEM8(0x5016e0)=0;
            MEM32(0x498e80)=1;MEMF(0x498dd4)=42.0f; /* selector -1 cache time */
            MEM32(0x4e7044)=1;MEM32(0x4db2b8)=0x3d4b7c;
            MEM32(0x4db2b8+0x185c)=511;MEM32(0x4db2b8+0x1018)|=2u;
            MEM32(0x4db2b8+0x1060)=0x401;MEM32(0x4db2b8+8)=member;
            MEM32(member+0x18)=8;MEMF(member+0x240)=10;
            MEM32(0x498df0)=0;MEM32(0x498df4)=0x201;MEM32(0x498df8)=0x401;
            MEM32(0x498e04)=3;
            if(!actor_on_team(entity))failed=44;
            MEMF(member+0x240)=0;
            if(actor_on_team(entity))failed=44;
            MEMF(member+0x240)=10;MEM32(0x4db2b8+0x1060)=0x601;
            if(actor_on_team(entity))failed=44;
            MEM32(0x4db2b8+0x1060)=0x401;MEM32(0x498e04)=0;
            if(actor_on_team(entity))failed=44;
            for(unsigned i=0;i<5;++i)MEM32(0x498df0+i*4)=i==4?0x401:0;
            MEM32(0x498e04)=5;
            if(!actor_on_team(entity)||g_esp!=stack||g_fp_top!=fp||MEMF(0x498dd4)!=42.0f)failed=44;
            for(unsigned i=0;i<sizeof(fields)/sizeof(fields[0]);++i)MEM32(fields[i])=saved[i];
            if(!failed)puts("PASS isActorOnTeam native cached collection: null/stale/live handles, generation rejection, dead/empty party, final slot, unchanged cache clock and ABI; refresh branch not exercised");
        }
        MEM32(entity+0x2d8)=0;
        if(!failed)puts("PASS isActorOnTeam character predicate: native character names/overrides, case folding, living-only selection, RTTI rejection and ABI");
    }
    MEM8(entity+0x334)=0xfe;
    if(ai_controlled(entity)!=0 || MEM8(entity+0x334)!=0xfe ||
       g_fp_top!=fp || g_esp!=stack)failed=11;
    MEM32(0x485878)=saved_actor_type;
    MEM32(0x48338C)=saved_parent_type;
    MEM32(0x48D8FC)=saved_type;
    if(flag_value(0x80000001u,1)!=1 || flag_value(0x80000001u,32)!=1 ||
       flag_value(0xffffffffu,0)!=0 || flag_value(0xffffffffu,33)!=0 ||
       flag_value(0x80000001u,2)!=0)failed=12;
    if(flag_assignment(0,32,1)!=0x80000000u ||
       flag_assignment(0x80000003u,2,0)!=0x80000001u ||
       flag_assignment(0,1,-1)!=1 || flag_assignment(0,0,1)!=0x80000000u ||
       flag_count(0)!=0 || flag_count(0xffffffffu)!=32 ||
       flag_count(0x80000001u)!=2)failed=13;
    MEM32(0x499568)=3;
    MEM32(entity+4)=0x80000102u;
    entity_no_gravity(0,1);entity_no_gravity(entity,1);
    if(MEM32(entity+4)!=0x80000102u)failed=14;
    MEM32(entity+0x18)|=16;
    entity_no_gravity(entity,1);
    if(MEM32(entity+4)!=0x80000106u)failed=15;
    entity_no_gravity(entity,0);
    if(MEM32(entity+4)!=0x80000102u || g_esp!=stack || g_fp_top!=fp)failed=16;
    MEM8(entity+0x234)=0xa3;
    entity_path_ignore(0,1);MEM32(entity+0x18)&=~16u;
    entity_path_ignore(entity,1);
    if(MEM8(entity+0x234)!=0xa3)failed=17;
    MEM32(entity+0x18)|=16;
    entity_path_ignore(entity,1);
    if(MEM8(entity+0x234)!=0xa7)failed=18;
    entity_path_ignore(entity,0);
    if(MEM8(entity+0x234)!=0xa3 || g_esp!=stack || g_fp_top!=fp)failed=19;
    {
        /* Basic ABI check of the native update, with its next rebuild still
         * in the future. No world, renderer, or navigation simulation runs. */
        const uint32_t addresses[]={0x49954c,0x498e88,0x498e88+0x39c,
            0x4b2ffc,0x4a0548,0x4a0548+0x12a4c,0x4a0548+0x12a50,0x4a0548+0x12a54};
        uint32_t saved[8];
        for(unsigned i=0;i<8;++i)saved[i]=MEM32(addresses[i]);
        MEM32(0x49954c)=1;MEM32(0x498e88)=0x3ccd14;
        MEMF(0x498e88+0x39c)=25.0f;
        MEM32(0x4b2ffc)=1;MEM32(0x4a0548)=0x3cfb54;
        MEMF(0x4a0548+0x12a4c)=0.0f;MEMF(0x4a0548+0x12a54)=100.0f;
        refresh_path_grid();
        if(MEMF(0x4a0548+0x12a4c)!=25.0f ||
           MEMF(0x4a0548+0x12a54)!=100.0f || g_esp!=stack || g_fp_top!=fp)failed=20;
        for(unsigned i=0;i<8;++i)MEM32(addresses[i])=saved[i];
    }
    MEM32(entity+4)=0x80000104u;MEM32(entity+0x18)&=~16u;
    entity_no_collide_no_tickle(0,1);entity_no_collide_no_tickle(entity,1);
    if(MEM32(entity+4)!=0x80000104u)failed=21;
    MEM32(entity+0x18)|=16;
    entity_no_collide_no_tickle(entity,1);
    if(MEM32(entity+4)!=0x80000106u)failed=22;
    entity_no_collide_no_tickle(entity,0);
    if(MEM32(entity+4)!=0x80000104u || g_esp!=stack || g_fp_top!=fp)failed=23;
    /* Native CGameEntity opacity path with an empty render-object list.
     * Check endpoint clamping and reject null/unrelated entity types. */
    MEM32(table+0x180)=0x74860;
    MEM32(entity+0x1B0)=0;
    MEMF(entity+0x194)=0.75f;MEM32(entity+0x18)&=~16u;
    entity_alpha(0,0.1f);entity_alpha(entity,0.1f);
    if(MEMF(entity+0x194)!=0.75f)failed=24;
    MEM32(entity+0x18)|=16;
    const float alpha_inputs[]={-2.0f,0.0f,0.375f,1.0f,2.0f};
    const float alpha_expected[]={0.0f,0.0f,0.375f,1.0f,1.0f};
    for(unsigned i=0;i<5;++i) {
        entity_alpha(entity,alpha_inputs[i]);
        if(MEMF(entity+0x194)!=alpha_expected[i]||g_esp!=stack||g_fp_top!=fp)failed=25;
    }
    uint32_t saved_open_type=MEM32(0x4C0A60);
    {
        uint32_t old_init=MEM32(0x49954C),old_game=MEM32(0x498E88),old_clock=MEM32(0x498E88+0x39C);
        MEM32(0x49954C)=1;MEM32(0x498E88)=0x3CCD14;MEMF(0x498E88+0x39C)=25.0f;
        MEM32(table+0x100)=0x74900;
        MEM32(entity+0x18)&=~16u;MEMF(entity+0x198)=99;
        entity_fade(0,2,0);entity_fade(entity,2,0);
        if(MEMF(entity+0x198)!=99)failed=70;
        MEM32(entity+0x18)|=16;
        entity_fade(entity,2,0);
        if(MEMF(entity+0x198)!=25||MEMF(entity+0x19C)!=2||MEMF(entity+0x1A4)!=2||MEM32(entity+0x1A0))failed=71;
        entity_fade(entity,3,1);
        /* Native 74A23 multiplies the fade-out working field by10 (3C8324);
         * the original duration remains in +1A4. Do not substitute a sign. */
        if(MEMF(entity+0x198)!=25||MEMF(entity+0x19C)!=30||MEMF(entity+0x1A4)!=3||MEM32(entity+0x1A0)||g_esp!=stack||g_fp_top!=fp)failed=72;
        MEM32(0x49954C)=old_init;MEM32(0x498E88)=old_game;MEM32(0x498E88+0x39C)=old_clock;
        if(!failed)puts("PASS fade commands: native entity type gate, native fade-in/out scheduling and game clock, stack/FPU preservation; rendered transition not tested");
    }
    MEM32(0x4C0A60)=4;MEM32(entity+0x18)&=~32u;
    MEM32(entity+4)=0;
    if(entity_opened(0)||entity_opened(entity))failed=26;
    MEM32(entity+0x18)|=32;
    const uint32_t open_flags[]={0,0x200000,0x400000,0xffdfffffu,0xffffffffu};
    const uint32_t opened_expected[]={1,0,1,1,0};
    for(unsigned i=0;i<5;++i) {
        MEM32(entity+4)=open_flags[i];
        if(entity_opened(entity)!=opened_expected[i]||MEM32(entity+4)!=open_flags[i]||
           g_esp!=stack||g_fp_top!=fp)failed=27;
    }
    MEM32(0x4C0A60)=saved_open_type;
    {
        uint32_t component=pool+0x2000,playback=pool+0x2100;
        uint32_t model=pool+0x2200,model_table=pool+0x2300,playback_table=pool+0x2400;
        uint32_t actor=pool+0x2500,selection=pool+0x2600;
        memset((void*)XBOX_PTR(component),0,0x700);
        animation_fixture_code=pool+0x1800;
        animation_fixture_component=component;animation_fixture_calls=0;
        MEM32(model)=model_table;MEM32(model_table+0x10)=animation_fixture_code;
        MEM32(component)=0x3DC31C;MEM32(component+8)=playback;
        MEM32(component+0x10)=0x3DC2DC;MEM32(component+0x14)=playback;
        MEM32(playback)=playback_table;
        MEM32(playback_table+0x8c)=animation_fixture_code+4;
        MEM32(entity+0x1b0)=model;
        MEM32(table+0x178)=0x74FB0;MEM32(table+0x17c)=0x74860;
        MEM32(0x485878)=2;MEM32(entity+0x18)=0;
        if(!entity_animation_speed(0,2)||!entity_animation_speed(entity,2)||
           animation_fixture_calls)failed=28;
        MEM32(entity+0x18)=16;
        const float speeds[]={0.0f,0.5f,1.0f,2.5f,-1.0f};
        for(unsigned i=0;i<5;++i) {
            uint32_t bits;memcpy(&bits,&speeds[i],4);
            if(!entity_animation_speed(entity,speeds[i]) ||
               animation_fixture_calls!=i+1 || animation_fixture_bits!=bits ||
               animation_fixture_receiver!=playback ||g_esp!=stack||g_fp_top!=fp)failed=29;
        }
        MEM32(component+8)=0; /* Native has-animation rejection. */
        entity_animation_speed(entity,3);
        MEM32(component+8)=playback;animation_fixture_component=0;
        entity_animation_speed(entity,3); /* Absent component. */
        if(animation_fixture_calls!=5)failed=30;
        animation_fixture_component=component;
        MEM32(actor)=table;MEM32(actor+0x18)=16|8;
        MEM32(selection)=entity;MEM32(selection+4)=actor;MEM32(selection+8)=entity;
        animation_speed_selection(selection,3,4.0f);
        if(animation_fixture_calls!=6 || entity_animation_speed(actor,4) ||
           g_esp!=stack||g_fp_top!=fp)failed=31;
        MEM32(selection)=0;MEM32(selection+4)=entity;
        animation_speed_selection(selection,2,5.0f);
        animation_speed_selection(selection,0,6.0f);
        animation_speed_selection(selection,-1,6.0f);
        if(animation_fixture_calls!=7||g_esp!=stack||g_fp_top!=fp)failed=32;
        animation_fixture_code=0;animation_fixture_component=0;
        MEM32(0x485878)=saved_actor_type;
    }
    {
        /* Use the real XML1 manager vtable and methods, including the nested
         * response-selection callback. No world or interpreter allocation. */
        uint32_t manager=pool+0x3000,saved_manager_pointer=MEM32(0x48d848);
        memset((void*)XBOX_PTR(manager),0,0x3e40);
        MEM32(manager)=0x3cbfb4;MEM32(0x48d848)=manager;
        for(unsigned flags=0;flags<256;++flags) {
            MEM8(manager+0x1fb0)=(uint8_t)flags;
            if((conversation_method(0x20)&255u)!=((flags>>1)&1u) ||
               MEM8(manager+0x1fb0)!=flags || g_esp!=stack || g_fp_top!=fp)failed=33;
        }
        const int32_t responses[]={-1,0,31,32,63};
        for(unsigned i=0;i<5;++i) {
            MEM32(manager+0x3e14)=(uint32_t)responses[i];
            MEM32(manager+0x3e38)=0xffffffffu;
            MEM32(manager+0x3e3c)=0xffffffffu;
            MEM8(manager+0x3e20)=0xaf;
            /* Invoke the registered script thunk, not only its helper. */
            strcpy((char*)XBOX_PTR(name),"disallowResponse");
            uint32_t descriptor=xml1_script_extension_descriptor(installed_manager,name);
            PUSH32(g_esp,args);PUSH32(g_esp,0x00099B66u);
            RECOMP_ICALL_SAFE(MEM32(descriptor),stack);
            if(g_esp!=stack-4 || g_eax)failed=35;
            g_esp+=4;
            uint32_t low=0xffffffffu,high=0xffffffffu;
            if(responses[i]>=0) {
                if(responses[i]<32)low&=~(1u<<responses[i]);
                else high&=~(1u<<(responses[i]-32));
            }
            if(MEM32(manager+0x3e38)!=low || MEM32(manager+0x3e3c)!=high ||
               MEM8(manager+0x3e20)!=(responses[i]<0?0xaf:0xab) ||
               g_esp!=stack || g_fp_top!=fp)failed=34;
        }
        {
            uint32_t integer=pool+0x7000;
            MEM32(integer)=0x3d57f0; /* Native CIntValue conversion. */
            const uint32_t values[]={0,1,0x80000000u,0x80000001u,0xffffffffu};
            const int32_t counts[]={0,1,1,2,32};
            const int32_t limits[]={INT32_MIN,-1,0,1,2,31,32,33,INT32_MAX};
            for(unsigned v=0;v<5;++v)for(unsigned t=0;t<9;++t) {
                MEM32(integer+4)=values[v];
                MEM32(manager+0x3e14)=7;
                MEM32(manager+0x3e38)=0xffffffffu;
                response_on_variable_count(integer,limits[t]);
                if(MEM32(manager+0x3e38)!=(counts[v]<limits[t]?0xffffff7fu:0xffffffffu) ||
                   MEM32(integer+4)!=values[v] || g_esp!=stack || g_fp_top!=fp)failed=36;
                /* Missing values never suppress, including positive limits. */
                MEM32(manager+0x3e38)=0xffffffffu;
                response_on_variable_count(0,limits[t]);
                if(MEM32(manager+0x3e38)!=0xffffffffu || g_esp!=stack || g_fp_top!=fp)failed=37;
                /* Meeting the threshold cannot re-enable a rejected choice. */
                MEM32(manager+0x3e38)=0xffffff7fu;
                response_on_variable_count(integer,0);
                if(MEM32(manager+0x3e38)!=0xffffff7fu || g_esp!=stack || g_fp_top!=fp)failed=38;
            }
        }
        {
            uint32_t objective=pool+0x7100;
            for(unsigned state=0;state<16;++state) {
                uint32_t state_address=0x49e852+state*4;
                uint8_t saved_state=MEM8(state_address);
                for(unsigned mask=0;mask<256;++mask)for(int complete=0;complete<2;++complete) {
                    MEM8(state_address)=(uint8_t)mask;
                    MEM8(objective)=(uint8_t)(0xa0|state);
                    MEM32(manager+0x3e14)=3;MEM32(manager+0x3e38)=0xffffffffu;
                    response_on_objective(objective,complete);
                    uint32_t expected=(((mask>>1)&1u)==(unsigned)complete)?0xfffffff7u:0xffffffffu;
                    if(MEM32(manager+0x3e38)!=expected || MEM8(objective)!=(0xa0|state) ||
                       MEM8(state_address)!=mask || g_esp!=stack || g_fp_top!=fp)failed=39;
                    MEM32(manager+0x3e38)=0xffffffffu;
                    response_on_objective(0,complete);
                    if(MEM32(manager+0x3e38)!=0xffffffffu || g_esp!=stack || g_fp_top!=fp)failed=40;
                }
                MEM8(state_address)=saved_state;
            }
        }
        MEM32(0x48d848)=saved_manager_pointer;
    }
    MEM32(0x499568)=saved_physical_type;
    extension_block=saved_block;installed_manager=saved_manager;
    if(failed)fprintf(stderr,"FAIL script extension fixture %d\n",failed);
    else puts("PASS script extension descriptors, setRotZ, getParentID and getAIControlled: native conversion, type rejection, rotation cache, parent handle/zero, AI flag isolation, game flags/count, native no-gravity setter, path-ignore bit isolation/native grid update, no-collide-no-tickle flag isolation, native alpha/clamping, opened-state/type query, animation speed native controller/selection stop, conversation active state/response suppression dispatch, balanced stacks");
    return failed;
}
