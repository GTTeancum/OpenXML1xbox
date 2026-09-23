#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "raven_script_extensions.h"
#include "raven_script_strings.h"
#include "raven_bishop_guest.h"
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

static uint32_t game_variable(uint32_t name) {
    uint32_t before=g_esp;
    PUSH32(g_esp,name);PUSH32(g_esp,0x00099B66u);
    RECOMP_ABI_CALL(0x000CC120u,sub_000CC120);g_ecx=g_eax;
    PUSH32(g_esp,0x00099B66u);RECOMP_ABI_CALL(0x000CACD0u,sub_000CACD0);
    uint32_t value=g_eax;
    if(value) {
        g_ecx=value;PUSH32(g_esp,0x00099B66u);
        RECOMP_ICALL_SAFE(MEM32(MEM32(value)+0x10),before);
        value=g_eax;
    }
    if(g_esp!=before)extension_failure("game variable read ABI");
    return value;
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

/* Keep command metadata together. The guest allocation grows from the actual
 * entries, without moving additions into XML1's fixed 215-slot native map. */
static const struct ScriptExtension {
    const char *name,*result,*arguments;
    void (*function)(void);
} extensions[]={
    {"strcatstr","s","ss",concat_strings},
    {"strcatint","s","si",concat_integer},
    {"strveci","s","iii",vector_integer},
    {"getDistance","f","aa",entity_distance},
    {"setRotZ","n","ai",entity_rotation_z},
    {"setAlpha","n","af",set_alpha},
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
    if(animation_fixture_is_code(address))return 1;
    return xml1_bishop_is_code(address) || (extension_block && address>=extension_block &&
        address-extension_block<EXTENSION_COUNT*4u && !((address-extension_block)&3u));
}
void (*xml1_script_extension_lookup(uint32_t address))(void) {
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
    extension_block=pool;installed_manager=pool+0x400;
    populate_descriptors();
    uint32_t name=pool+0x800;
    for(unsigned i=0;i<EXTENSION_COUNT;++i) {
        strcpy((char*)XBOX_PTR(name),extensions[i].name);
        uint32_t descriptor=xml1_script_extension_descriptor(installed_manager,name);
        if(descriptor!=pool+DESCRIPTOR_OFFSET+i*16 ||
           xml1_script_extension_lookup(MEM32(descriptor))!=extensions[i].function ||
           strcmp((const char*)XBOX_PTR(MEM32(descriptor+8)),extensions[i].result) ||
           strcmp((const char*)XBOX_PTR(MEM32(descriptor+12)),extensions[i].arguments))failed=1;
    }
    strcpy((char*)XBOX_PTR(name),"setRotZ_extra");
    if(xml1_script_extension_descriptor(installed_manager,name) ||
       xml1_script_extension_is_code(pool+1) ||
       xml1_script_extension_is_code(pool+DESCRIPTOR_OFFSET) ||
       xml1_script_extension_lookup(pool-4))failed=2;
    uint32_t args=pool+0x900,value=args+0x40,entity=pool+0x1000,table=entity+0x300;
    memset((void*)XBOX_PTR(args),0,0x100);
    MEM32(args)=value;MEM32(args+0x1c)=1;
    MEM32(value)=0x3D57C4;MEMF(value+4)=-27.5f;
    if(float_argument(args,0)!=-27.5f || g_fp_top!=fp || g_esp!=stack)failed=3;
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
    MEM32(0x499568)=saved_physical_type;
    extension_block=saved_block;installed_manager=saved_manager;
    if(failed)fprintf(stderr,"FAIL script extension fixture %d\n",failed);
    else puts("PASS script extension descriptors, setRotZ, getParentID and getAIControlled: native conversion, type rejection, rotation cache, parent handle/zero, AI flag isolation, game flags/count, native no-gravity setter, path-ignore bit isolation/native grid update, no-collide-no-tickle flag isolation, native alpha/clamping, opened-state/type query, animation speed native controller/selection stop, balanced stacks");
    return failed;
}
