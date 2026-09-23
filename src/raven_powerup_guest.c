#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "raven_powerup_guest.h"
#include "raven_xml1_powerup_view.h"
#include "raven_numeric.h"
#include "raven_harming_settings.h"
#include "raven_harming_runtime.h"
#include "raven_powerup_metadata.h"
#include "raven_add_attack_runtime.h"
#include "raven_native_damage.h"
#include "raven_rating.h"
#include "raven_shared_powerups_runtime.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
void raven_xml1_powerup_capture_effects(uint32_t definition,uint32_t node) {
    if(!definition||!node||MEM32(node+8)!=1)return;
    shared_powerup_defaults(definition,node);
    const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
    g_esp-=64;
    const uint32_t frame=g_esp;
    // Keep imported affecter operands alongside effects through native cloning.
    // Capturing a declaration does not yet apply its rating or stat changes.
    for(unsigned kind=0;kind<2;++kind) {
    const char *child_name=kind?"affecter":"special_fx";
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
        uint32_t index=kind?raven_xml1_powerup_affecter_begin(definition):raven_xml1_powerup_effect_begin(definition);
        uint32_t attr=MEM32(child+0x54);unsigned attributes=0;
        while(attr&&attr!=child+0x2C) {
            if(++attributes>4096){fputs("[RAVEN POWERUP ERROR] Cyclic effect attributes\n",stderr);_Exit(4);}
            g_ecx=attr+4;PUSH32(g_esp,0xCEF40);
            RECOMP_ABI_CALL(0x00199EE0u,sub_00199EE0);check_stack(frame);
            uint32_t key=g_eax;
            g_ecx=attr+0x14;PUSH32(g_esp,0xCEF40);
            RECOMP_ABI_CALL(0x00199EE0u,sub_00199EE0);check_stack(frame);
            if(kind)raven_xml1_powerup_affecter_attribute(definition,index,(const char*)XBOX_PTR(key),(const char*)XBOX_PTR(g_eax));
            else raven_xml1_powerup_effect_attribute(definition,index,(const char*)XBOX_PTR(key),(const char*)XBOX_PTR(g_eax));
            g_ecx=attr;PUSH32(g_esp,0xCEF40);
            RECOMP_ABI_CALL(0x00125BD0u,sub_00125BD0);check_stack(frame);attr=g_eax;
        }
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
    const char *bolt,uint32_t level,float duration,uint32_t existing,uint32_t *group) {
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
    if(existing) {
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
    return effect_group_dispatch(target,resource,bolt,level,duration,0,group);
}
raven_lookup raven_xml1_guest_effect_group_emit(uint32_t target,uint32_t resource,
    const char *bolt,uint32_t level,uint32_t group) {
    if(!group)return RAVEN_MISSING;
    uint32_t result;
    return effect_group_dispatch(target,resource,bolt,level,0,group,&result);
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
    /* Primary effects use the target's native bone or world transform.
       Other usage modes require their own traced activation semantics. */
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

static raven_lookup rating_damage_scope(void *context,const char *name,uint32_t record) {
    (void)context;
    if(!name||record<0x10000u||(uint64_t)record+0x14>0x08000000ull)return RAVEN_INVALID;
    const size_t length=strlen(name)+1;
    if(length>1024)return RAVEN_INVALID;
    const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
    if(sp<0x10400u)return RAVEN_INVALID;
    g_esp-=1024;const uint32_t frame=g_esp;
    memcpy((void*)XBOX_PTR(frame),name,length);
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
            MEM32(0x498d90),attribute,record,rating_damage_scope,&contribution);
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
            MEM32(0x498d90),"def_absorb_damage",record,rating_damage_scope,&contribution);
        if(result==RAVEN_INVALID) {
            fputs("[RAVEN ABSORB ERROR] Unsupported or stale absorption operand\n",stderr);_Exit(4);
        }
        if(result==RAVEN_FOUND) {
            g_ecx=definition;PUSH32(g_esp,record);PUSH32(g_esp,0);
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
    const char *attribute=type==0?"resist_physical":
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
            MEM32(0x498d90),attribute,record,NULL,&contribution);
        if(result==RAVEN_INVALID) {
            fputs("[RAVEN RESIST ERROR] Unsupported or stale resistance operand\n",stderr);_Exit(4);
        }
        if(result==RAVEN_FOUND) {
            g_ecx=definition;PUSH32(g_esp,record);PUSH32(g_esp,0);
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
