#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "engine/actors/raven_ai_modes.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
static const char* ai_property(uint32_t bag,uint32_t frame,const char* name) {
    strcpy((char*)XBOX_PTR(frame),name);
    uint32_t method=MEM32(MEM32(bag)+0x10);
    g_ecx=bag;PUSH32(g_esp,0);PUSH32(g_esp,frame);PUSH32(g_esp,0);
    RECOMP_ICALL_SAFE(method,frame);if(g_esp!=frame)abort();
    return g_eax?(const char*)XBOX_PTR(g_eax):NULL;
}
void raven_ai_mode_capture(uint32_t decision,uint32_t actor,uint32_t properties) {
    raven_ai_mode_reset(decision);
    if(!decision||!actor||!properties)return;
    const uint32_t sp=g_esp,ax=g_eax,bx=g_ebx,cx=g_ecx,dx=g_edx,si=g_esi,di=g_edi,bp=g_ebp,seh=g_seh_ebp;
    const int top=g_fp_top,cmp=g_fp_cmp;const unsigned cc=g_fp_cc;
    double floats[8];memcpy(floats,g_fp_stack,sizeof(floats));
    raven_ai_mode_config c={actor,MEM32(actor+0x1C),0,0.5f,4.0f};
    g_esp-=64;uint32_t frame=g_esp;
    const char* value=ai_property(properties,frame,"aitype");
    if(value)c.mode=atoi(value);
    c.teleporter=raven_ai_definition_teleporter(MEM32(actor+0x2D8));
    // XML2 selects the authored Teleporter class before numeric aitype.
    // Do not put its new enum into XML1's fixed native selection tables.
    if(c.teleporter)c.mode=0;
    if(c.teleporter||c.mode==1||c.mode==2||c.mode==6||c.mode==7||c.mode==8) {
        // XML2 1306B0/1306D0/1306F0 read this actor property bag. Read each
        // borrowed string synchronously; retain no pointers into its storage.
        value=ai_property(properties,frame,"aitype_patrolspeed");if(value)c.patrol_speed=(float)atof(value);
        value=ai_property(properties,frame,"aitype_runtime");if(value)c.run_time=(float)atof(value);
        if(MEM32(actor+0x1C)==c.handle)raven_ai_mode_begin(decision,&c);
    }
    g_esp=sp;g_eax=ax;g_ebx=bx;g_ecx=cx;g_edx=dx;g_esi=si;g_edi=di;g_ebp=bp;g_seh_ebp=seh;
    g_fp_top=top;g_fp_cmp=cmp;g_fp_cc=cc;memcpy(g_fp_stack,floats,sizeof(floats));
}

typedef struct ai_nav_context {uint32_t grid,frame;} ai_nav_context;
static uint32_t ai_call(uint32_t receiver,uint32_t method,const uint32_t* args,unsigned count,int cdecl_call) {
    uint32_t sp=g_esp;
    for(unsigned i=count;i;--i)PUSH32(g_esp,args[i-1]);
    g_ecx=receiver;PUSH32(g_esp,0);RECOMP_ICALL_SAFE(method,sp);
    if(cdecl_call)g_esp+=4*count;
    if(g_esp!=sp)abort();return g_eax;
}
void raven_ai_definition_capture(uint32_t definition,uint32_t node) {
    if(!definition||!node)return;
    const uint32_t sp=g_esp,ax=g_eax,bx=g_ebx,cx=g_ecx,dx=g_edx,si=g_esi,di=g_edi,bp=g_ebp,seh=g_seh_ebp;
    const int top=g_fp_top,cmp=g_fp_cmp;const unsigned cc=g_fp_cc;
    double floats[8];memcpy(floats,g_fp_stack,sizeof(floats));
    g_esp-=48;uint32_t frame=g_esp,args[2]={frame+16,2};
    strcpy((char*)XBOX_PTR(frame+16),"aiclasstype");
    ai_call(frame,0x125DA0,args,2,0);
    uint32_t attribute=ai_call(node,0x1260E0,&frame,1,0);
    if(attribute) {
        uint32_t value=ai_call(attribute,0x199EE0,NULL,0,0);
        if(value)raven_ai_definition_class(definition,(const char*)XBOX_PTR(value));
    }
    // Absent attributes preserve partial-definition updates; an explicit
    // stock/empty class clears the extension. Retain no parser-owned text.
    ai_call(frame,0x125890,NULL,0,0);
    g_esp=sp;g_eax=ax;g_ebx=bx;g_ecx=cx;g_edx=dx;g_esi=si;g_edi=di;g_ebp=bp;g_seh_ebp=seh;
    g_fp_top=top;g_fp_cmp=cmp;g_fp_cc=cc;memcpy(g_fp_stack,floats,sizeof(floats));
}
unsigned raven_ai_protect_candidates(uint32_t source,uint32_t* handles,unsigned capacity) {
    if(!source||!handles||!capacity||!ai_call(0,0xA2AE0,NULL,0,0))return 0;
    uint32_t sp=g_esp;g_esp-=32;uint32_t frame=g_esp;unsigned used=0;
    memset(XBOX_PTR(frame),0,32);MEM32(frame+4)=MEM32(source+0x1C);
    uint32_t args[2]={0x485874,frame+4};
    ai_call(frame,0xA2A70,args,2,0);uint32_t query=MEM32(frame);
    // These are existing XML1 entity-manager attribute IDs (also used by
    // native101EB2/101EBF), not XML2 class IDs or new flag implementations.
    const uint32_t excluded[3]={1,0x1C,0x1D};
    for(unsigned i=0;i<3;++i){args[0]=1;args[1]=excluded[i];ai_call(query,MEM32(MEM32(query)+0x40),args,2,0);}
    MEM32(frame+8)=0x3C898C;args[0]=query;args[1]=frame+8;
    uint32_t list=ai_call(0,0xA2B10,args,2,1);
    if(list) {
        unsigned count=ai_call(list,MEM32(MEM32(list)),NULL,0,0);
        for(unsigned i=0;i<count&&used<capacity;++i) {
            uint32_t entity=ai_call(list,MEM32(MEM32(list)+4),&i,1,0);
            if(entity)handles[used++]=MEM32(entity+0x1C);
        }
        ai_call(0,0xA2B70,&list,1,1);
    }
    // Native result-list exhaustion is legitimate. The query still needs
    // release on that path and when the caller's snapshot capacity is met.
    ai_call(frame,0xA2AC0,NULL,0,0);g_esp=sp;return used;
}
static uint32_t ai_resolve_actor(uint32_t handle) {
    uint32_t sp=g_esp;g_esp-=4;MEM32(g_esp)=handle;
    uint32_t entity=ai_call(g_esp,0x6BF80,NULL,0,0);g_esp=sp;
    uint32_t actor=entity?ai_call(0,0x27620,&entity,1,1):0;
    if(!actor)return 0;
    // The RTTI check invokes a virtual getter. Re-resolve the original full
    // handle before allowing callers to read actor fields after that call.
    g_esp-=4;MEM32(g_esp)=handle;
    uint32_t current=ai_call(g_esp,0x6BF80,NULL,0,0);g_esp=sp;
    return current==actor?actor:0;
}
uint32_t raven_ai_protect_refresh(uint32_t decision,const raven_ai_mode_config* owner) {
    uint32_t partner;
    if(!owner||!raven_ai_protect_partner(decision,owner,&partner))return 0;
    // Native Protect retains an existing resolvable partner. Positive health
    // is a selection gate for a new partner, not a new lifetime rule.
    if(partner&&ai_resolve_actor(partner))return partner;
    if(ai_resolve_actor(owner->handle)!=owner->actor)return 0;
    uint32_t candidates[512];unsigned count=raven_ai_protect_candidates(owner->actor,candidates,512);
    for(unsigned i=0;i<count;++i) {
        if(ai_resolve_actor(owner->handle)!=owner->actor)return 0;
        uint32_t actor=ai_resolve_actor(candidates[i]);
        if(!actor||!(MEMF(actor+0x240)>0))continue;
        raven_ai_mode_config candidate;
        uint32_t other=raven_ai_mode_find(actor,candidates[i],&candidate);
        if(other&&raven_ai_protect_bind(decision,owner,other,&candidate))return candidates[i];
    }
    return 0;
}
static int ai_owner_live(uint32_t decision,const raven_ai_mode_config* owner) {
    if(!owner||(!owner->teleporter&&owner->mode!=2&&owner->mode!=6&&owner->mode!=7&&owner->mode!=8)||ai_resolve_actor(owner->handle)!=owner->actor)return 0;
    raven_ai_mode_config current;
    return raven_ai_mode_read(decision,owner->actor,owner->handle,&current)&&
        current.epoch==owner->epoch&&MEM32(decision+0x10)==owner->actor;
}
uint32_t raven_ai_pack_refresh(uint32_t decision,const raven_ai_mode_config* owner) {
    raven_ai_pack_world world;
    if(!owner||owner->mode!=6||!ai_owner_live(decision,owner)||
       !raven_ai_pack_world_read(decision,owner,&world))return 0;
    uint32_t leader=ai_resolve_actor(world.leader);
    if(leader&&MEMF(leader+0x240)>0)return world.leader;
    // Native116BC8/116BCE selects the updating actor, not the nearest actor
    // or the first registry member. Claim only against the resolved snapshot.
    if(!ai_owner_live(decision,owner)||
       !raven_ai_pack_claim(decision,owner,world.revision))return 0;
    return owner->handle;
}
// Only authored Teleporter owners enter this adapter. The native decision
// dispatcher and its wrapper keep their original admission/flag handling.
int raven_ai_teleport_attack(uint32_t handler,uint32_t caller,uint32_t input) {
    if(!handler||!input)return -1;
    uint32_t decision=MEM32(handler+4),actor=decision?MEM32(decision+0x10):0;
    raven_ai_mode_config owner;
    if(!actor||!raven_ai_mode_read(decision,actor,caller,&owner)||!owner.teleporter)return -1;
    const uint32_t sp=g_esp,ax=g_eax,bx=g_ebx,cx=g_ecx,dx=g_edx,si=g_esi,di=g_edi,bp=g_ebp,seh=g_seh_ebp;
    const int top=g_fp_top,cmp=g_fp_cmp;const unsigned cc=g_fp_cc;
    double floats[8];memcpy(floats,g_fp_stack,sizeof(floats));
    int result=0;g_esp-=64;uint32_t frame=g_esp;
    memset(XBOX_PTR(frame),0,64);
    uint32_t args[4]={caller,frame,frame+4,frame+8};
    raven_ai_teleport_runtime next;
    if(!ai_owner_live(decision,&owner)||!(ai_call(handler,0xEE150,args,4,0)&255)||
       !ai_owner_live(decision,&owner)||MEM32(frame)!=actor||
       !raven_ai_teleport_read(decision,&owner,&next))goto done;
    result=1;
    uint32_t target=MEM32(frame+4),target_handle=MEM32(decision+0x18);
    uint32_t game=ai_call(0,0x72CF0,NULL,0,0);
    ai_call(game,MEM32(MEM32(game)+0x104),NULL,0,0);
    float now=(float)g_fp_stack[g_fp_top];g_fp_top=(g_fp_top+1)&7;
    int can_teleport=0,can_attack=0,aligned=0,destination_phase=0;
    float random=0;
    if(!ai_owner_live(decision,&owner))goto done;
    // XML1 owns controller/action eligibility. A missing controller cannot
    // provide an action table; do not read the native uninitialized table.
    if(!next.state.phase&&now>next.state.deadline&&MEM32(actor+0x2F4)) {
        uint32_t action=6;can_teleport=(ai_call(decision,0x1114A0,&action,1,0)&255)!=0;
        if(!ai_owner_live(decision,&owner))goto done;
        if(target&&(ai_resolve_actor(target_handle)!=target||MEM32(decision+0x18)!=target_handle))goto done;
        if(can_teleport) {
            raven_ai_point origin,facing,point;
            memcpy(&origin,XBOX_PTR(actor+0x20),12);memcpy(&facing,XBOX_PTR(actor+0x2C),12);
            if(target)memcpy(&point,XBOX_PTR(target+0x20),12);
            if(!raven_ai_teleport_destination(&origin,target?&point:NULL,&facing,&next.destination,&destination_phase))goto done;
        }
    } else if(next.state.phase&&target&&MEM32(actor+0x2F4)) {
        uint32_t action=5;can_attack=(ai_call(decision,0x1114A0,&action,1,0)&255)!=0;
        if(!can_attack||!ai_owner_live(decision,&owner)||ai_resolve_actor(target_handle)!=target||
           MEM32(decision+0x18)!=target_handle)goto done;
        // Use XML1's normalization, angle conversion, controller-facing gate
        // and alignment query. Existing XML1 geometry wins here.
        MEMF(frame+16)=MEMF(target+0x20)-MEMF(actor+0x20);
        MEMF(frame+20)=MEMF(target+0x24)-MEMF(actor+0x24);MEMF(frame+24)=0;
        uint32_t vector=frame+16;
        if(ai_call(decision,0xFCE20,&vector,1,0)&255) {
            args[0]=frame+32;args[1]=vector;ai_call(0,0x120860,args,2,1);
            uint32_t angles=frame+32;ai_call(decision,0xFC600,&angles,1,0);
        }
        if(!ai_owner_live(decision,&owner)||ai_resolve_actor(target_handle)!=target||
           MEM32(decision+0x18)!=target_handle)goto done;
        args[0]=actor;args[1]=target;args[2]=0;args[3]=0x3F733333;
        aligned=ai_call(decision,0x102FC0,args,4,0)==0;
    }
    if(!ai_owner_live(decision,&owner))goto done;
    if(can_teleport||(next.state.phase==1&&can_attack&&aligned)) {
        args[0]=0;args[1]=0x3F800000;ai_call(0,0x1233A0,args,2,1);
        random=(float)g_fp_stack[g_fp_top];g_fp_top=(g_fp_top+1)&7;
    }
    raven_ai_teleport_step_result output;
    if(!raven_ai_teleport_step(&next.state,now,can_teleport,can_attack,aligned,destination_phase,random,&output))goto done;
    if(output.write_destination)next.pending=1;
    // Revision publication also rejects reentry/retirement during native
    // calls. Publish before exposing the input to the native event consumer.
    if(!ai_owner_live(decision,&owner)||!raven_ai_teleport_publish(decision,&owner,&next))goto done;
    MEM32(input)|=output.input_bits;MEM32(input+4)|=output.input_bits;
    if(output.delegate_base) {
        args[0]=caller;args[1]=input;
        // Dispatch hooks are at callers, so invoking the existing standard
        // implementation cannot recursively enter this adapter.
        ai_call(handler,0xEEA60,args,2,0);
    }
done:
    g_esp=sp;g_eax=ax;g_ebx=bx;g_ecx=cx;g_edx=dx;g_esi=si;g_edi=di;g_ebp=bp;g_seh_ebp=seh;
    g_fp_top=top;g_fp_cmp=cmp;g_fp_cc=cc;memcpy(g_fp_stack,floats,sizeof(floats));
    return result;
}
int raven_ai_teleport_event(uint32_t event,uint32_t context,uint32_t parameters,uint32_t range) {
    if(!event||!context||!parameters)return -1;
    uint32_t actor=MEM32(context);raven_ai_mode_config owner;
    if(!actor)return -1;
    uint32_t decision=raven_ai_mode_find(actor,MEM32(actor+0x1C),&owner);
    if(!decision||!owner.teleporter)return -1;
    const uint32_t sp=g_esp,ax=g_eax,bx=g_ebx,cx=g_ecx,dx=g_edx,si=g_esi,di=g_edi,bp=g_ebp,seh=g_seh_ebp;
    const int top=g_fp_top,cmp=g_fp_cmp;const unsigned cc=g_fp_cc;
    double floats[8];memcpy(floats,g_fp_stack,sizeof(floats));
    int result=-1;raven_ai_point point;
    if(ai_owner_live(decision,&owner)&&raven_ai_teleport_take(decision,&owner,&point)) {
        uint32_t args[7];memcpy(args,&point,sizeof(point));
        args[3]=context;args[4]=parameters;args[5]=range;args[6]=0;
        // D56B0 is XML1's existing spatial validation/teleport routine.
        // Its position is passed by value (three words), followed by the
        // original event context, parameter object, prepared range and
        // optional target handle. Do not overwrite actor teleport fields.
        // If the explicit point is rejected, resume XML1's normal event
        // path with its untouched locals/FPU stack and fallback choices.
        result=(ai_call(event,0xD56B0,args,7,0)&255)?1:-1;
    }
    g_esp=sp;g_eax=ax;g_ebx=bx;g_ecx=cx;g_edx=dx;g_esi=si;g_edi=di;g_ebp=bp;g_seh_ebp=seh;
    g_fp_top=top;g_fp_cmp=cmp;g_fp_cc=cc;memcpy(g_fp_stack,floats,sizeof(floats));
    return result;
}
static uint32_t ai_party_threat(uint32_t decision,const raven_ai_mode_config* owner) {
    if(!owner||(owner->mode!=7&&owner->mode!=6)||!ai_owner_live(decision,owner))return 0;
    uint32_t sp=g_esp;g_esp-=24;uint32_t party=g_esp;
    ai_call(party,0x322B0,NULL,0,0);
    uint32_t game=ai_call(0,0x72CF0,NULL,0,0),args[3]={party,0xFFFFFFFFu,0};
    ai_call(game,MEM32(MEM32(game)+0xE0),args,3,0);
    unsigned count=MEM32(party+20);if(count>5)abort();
    uint32_t handles[5];memcpy(handles,XBOX_PTR(party),count*sizeof(uint32_t));
    g_esp=sp;
    // Protect's XML2 helper13AF00 chooses from the playable-party query,
    // not its current combat target or the entire actor pool. Retain only
    // full handles across virtual calls; native XML1 owns roster enumeration.
    uint32_t selected=0;float best;uint32_t initial=0x50150236;
    memcpy(&best,&initial,sizeof(best));
    for(unsigned i=0;i<count;++i) {
        uint32_t actor=ai_resolve_actor(handles[i]);
        if(!actor||!ai_owner_live(decision,owner))continue;
        // The owner validation invokes RTTI too. Re-resolve the candidate
        // before reading its position, health and existing XML1 AI flag.
        if(ai_resolve_actor(handles[i])!=actor)return 0;
        if(!(MEMF(actor+0x240)>0)||(MEM8(actor+0x334)&1))continue;
        double x=(double)MEMF(owner->actor+0x20)-MEMF(actor+0x20);
        double y=(double)MEMF(owner->actor+0x24)-MEMF(actor+0x24);
        double z=(double)MEMF(owner->actor+0x28)-MEMF(actor+0x28);
        double distance=x*x+y*y+z*z;
        if(distance<best){best=(float)distance;selected=handles[i];}
    }
    return ai_owner_live(decision,owner)?selected:0;
}
static void ai_pack_leader(uint32_t decision,const raven_ai_mode_config* owner) {
    raven_ai_pack_state state;raven_ai_pack_world world;
    if(!owner||owner->mode!=6||!ai_owner_live(decision,owner)||
       !raven_ai_pack_read(decision,owner,&state)||!raven_ai_pack_world_read(decision,owner,&world)||
       world.leader!=owner->handle||state.phase)return;
    float now=MEMF(decision+0x51C);if(!(state.deadline<=now))return;
    uint32_t target_handle=MEM32(decision+0x18),target=ai_resolve_actor(target_handle);
    if(!target||(MEM8(target+0x334)&1)) {
        target_handle=ai_party_threat(decision,owner);target=ai_resolve_actor(target_handle);
    }
    if(!target||!(MEMF(target+0x240)>0)||(MEM8(target+0x334)&1)) {
        state.deadline=now+0.3f;raven_ai_pack_publish(decision,owner,&state);return;
    }
    // Native116180 places the pack objective200 units along the target's
    // pitch/yaw facing (16B430), then projects it with the existing grid.
    // XML1's four-argument projection is slot08/8FFB0, NOT XML2's slot0C.
    double pitch=MEMF(target+0x30),yaw=MEMF(target+0x34),horizontal=cos(pitch);
    raven_ai_point point={(float)(MEMF(target+0x20)+200*cos(yaw)*horizontal),
        (float)(MEMF(target+0x24)+200*sin(yaw)*horizontal),
        (float)(MEMF(target+0x28)-200*sin(pitch))};
    uint32_t sp=g_esp;g_esp-=32;uint32_t frame=g_esp;
    memcpy(XBOX_PTR(frame),&point,sizeof(point));memset(XBOX_PTR(frame+16),0,12);
    uint32_t grid=ai_call(0,0x8F130,NULL,0,0),args[4]={frame,frame+16,1,1};
    int projected=(ai_call(grid,MEM32(MEM32(grid)+8),args,4,0)&255)!=0;
    if(projected&&ai_owner_live(decision,owner)&&ai_resolve_actor(target_handle)==target&&
       raven_ai_pack_launch(decision,owner,world.revision,target_handle,now+10.0f)) {
        MEM32(decision+0x18)=target_handle;memcpy(XBOX_PTR(decision+0x34),XBOX_PTR(frame+16),12);
    } else if(!projected) {
        // A failed native projection supplies no destination. Retry rather
        // than copying unwritten guest stack bytes into the movement request.
        state.deadline=now+0.3f;raven_ai_pack_publish(decision,owner,&state);
    }
    g_esp=sp;
}
static int ai_pack_follower(uint32_t decision,const raven_ai_mode_config* owner) {
    raven_ai_pack_state state,leader_state;raven_ai_pack_world world;raven_ai_mode_config leader_owner;
    if(!owner||owner->mode!=6||!ai_owner_live(decision,owner)||
       !raven_ai_pack_read(decision,owner,&state)||!raven_ai_pack_world_read(decision,owner,&world))return 0;
    uint32_t leader=ai_resolve_actor(world.leader),leader_decision=0;
    if(leader&&MEMF(leader+0x240)>0)leader_decision=raven_ai_mode_find(leader,world.leader,&leader_owner);
    if(!leader_decision||!raven_ai_pack_read(leader_decision,&leader_owner,&leader_state)) {
        state.phase=0;raven_ai_pack_publish(decision,owner,&state);return 0;
    }
    float now=MEMF(decision+0x51C);
    if(!state.phase&&state.deadline<=now&&leader_state.phase) {
        memcpy(XBOX_PTR(decision+0x34),XBOX_PTR(leader_decision+0x34),12);
        state.phase=1;if(!raven_ai_pack_publish(decision,owner,&state))return 0;
    }
    if(state.phase==1) {
        uint32_t target=ai_resolve_actor(MEM32(leader_decision+0x18));
        if(target&&MEMF(target+0x240)>0&&ai_owner_live(decision,owner)) {
            // Native116788 resets movement before redirect. Reuse XML1's
            // actor34770 and v158; the destination remains the leader's.
            uint32_t sp=g_esp;g_esp-=16;uint32_t point=g_esp;
            memcpy(XBOX_PTR(point),XBOX_PTR(leader_decision+0x34),12);
            ai_call(owner->actor,0x34770,NULL,0,0);
            uint32_t args[3]={point,0,0x40400000};
            if(ai_owner_live(decision,owner))ai_call(owner->actor,MEM32(MEM32(owner->actor)+0x158),args,3,0);
            int handled=ai_owner_live(decision,owner);
            if(handled) {
                double x=(double)MEMF(owner->actor+0x20)-MEMF(point);
                double y=(double)MEMF(owner->actor+0x24)-MEMF(point+4);
                double z=(double)MEMF(owner->actor+0x28)-MEMF(point+8);
                if(x*x+y*y+z*z<60.0*60.0) {
                    state.phase=3;state.deadline=now+0.5f;raven_ai_pack_publish(decision,owner,&state);
                }
            }
            g_esp=sp;return handled;
        }
        state.phase=0;state.deadline=now+1.0f;raven_ai_pack_publish(decision,owner,&state);
    }
    if(state.phase==3) {
        uint32_t target=ai_resolve_actor(world.target);leader=ai_resolve_actor(world.leader);
        if(target&&leader&&MEMF(target+0x240)>0&&MEMF(leader+0x240)>0&&ai_owner_live(decision,owner)) {
            // XML1 already provides the native target/engagement notification
            // interface104AA0 (two full handles, ret8). Do not replace it
            // with synthesized damage or an imported attack implementation.
            uint32_t args[2]={world.target,owner->handle};ai_call(decision,0x104AA0,args,2,0);
        }
        if(raven_ai_pack_read(decision,owner,&state)&&state.deadline<=now) {
            state.phase=0;state.deadline=now+10.0f;raven_ai_pack_publish(decision,owner,&state);
        }
    }
    return 0;
}
static int ai_protect_command(uint32_t decision,const raven_ai_mode_config* owner,
    const raven_ai_protect_result* plan) {
    if(!plan||!owner||owner->mode!=7||!ai_owner_live(decision,owner))return 0;
    if(plan->write_speed)MEMF(decision+0x1B0)=plan->speed;
    if(plan->write_speed_override)MEMF(decision+0x1B4)=plan->speed;
    if(!plan->action)return 0;
    uint32_t sp=g_esp;g_esp-=16;uint32_t point=g_esp;
    memcpy(XBOX_PTR(point),&plan->destination,sizeof(plan->destination));
    int accepted=0;
    if(plan->action==2) {
        // XML1's existing redirect interface is actor v158/34E40, with
        // destination, optional string handle, and float3. It changes the
        // movement request, not the actor's world position. XML2 v160 must
        // not be copied as a slot number into the XML1 actor table.
        uint32_t args[3]={point,0,0x40400000};
        ai_call(owner->actor,MEM32(MEM32(owner->actor)+0x158),args,3,0);
        if(ai_owner_live(decision,owner))
            memcpy(XBOX_PTR(decision+0x34),&plan->destination,sizeof(plan->destination));
    } else if(plan->action==1) {
        memcpy(XBOX_PTR(decision+0x34),&plan->destination,sizeof(plan->destination));
        uint32_t state=0;ai_call(decision,0xFE330,&state,1,0);
        // State transitions invoke native actor work. Revalidate ownership
        // before issuing the next command, including decision-address reuse.
        if(ai_owner_live(decision,owner)) {
            accepted=(ai_call(decision,0x101940,&point,1,0)&255)!=0;
            if(!ai_owner_live(decision,owner))accepted=0;
        }
    }
    g_esp=sp;return accepted;
}
static int ai_protect_update_owned(uint32_t decision,const raven_ai_mode_config* owner) {
    uint32_t previous=0;raven_ai_protect_partner(decision,owner,&previous);
    uint32_t partner_handle=raven_ai_protect_refresh(decision,owner);
    if(!partner_handle||!ai_owner_live(decision,owner))return 0;
    // Mode8 only participates in pairing; its existing state dispatcher
    // continues normally. Mode7 disables the existing attack-decision flag
    // on a newly established pair, as native116AAC does for Protect.
    if(owner->mode!=7)return 0;
    if(partner_handle!=previous)MEM8(decision+0x28A)&=0xFE;
    uint32_t threat_handle=ai_party_threat(decision,owner);
    uint32_t partner=ai_resolve_actor(partner_handle),threat=ai_resolve_actor(threat_handle);
    if(!partner||!threat||!ai_owner_live(decision,owner))return 0;
    if(ai_resolve_actor(partner_handle)!=partner||ai_resolve_actor(threat_handle)!=threat)return 0;
    raven_ai_protect_input input={0};raven_ai_protect_result plan;
    memcpy(&input.actor,XBOX_PTR(owner->actor+0x20),sizeof(input.actor));
    memcpy(&input.partner,XBOX_PTR(partner+0x20),sizeof(input.partner));
    memcpy(&input.threat,XBOX_PTR(threat+0x20),sizeof(input.threat));
    // Existing XML1 velocity fields are used by the stock update at10EFB0.
    memcpy(&input.threat_velocity,XBOX_PTR(threat+0x100),sizeof(input.threat_velocity));
    memcpy(&input.current_destination,XBOX_PTR(decision+0x34),sizeof(input.current_destination));
    input.partner_alive=MEMF(partner+0x240)>0;input.threat_alive=MEMF(threat+0x240)>0;
    input.state=MEM32(decision+8);raven_ai_protect_plan(&input,&plan);
    // XML2 also writes base-decision600 after an accepted move. That field
    // controls its existing shared decision behavior, not Protect's pairing
    // or interception algorithm. XML1's base decision system already exists:
    // preserve its timing/state transitions rather than porting timer parity
    // or writing past its smaller object. Do not add an unused sidecar timer.
    return ai_protect_command(decision,owner,&plan);
}
int raven_ai_pack_interrupt_guest(uint32_t decision) {
    uint32_t actor=MEM32(decision+0x10);raven_ai_mode_config owner;
    if(!actor||!raven_ai_mode_read(decision,actor,MEM32(actor+0x1C),&owner)||owner.mode!=6)return 0;
    return raven_ai_pack_interrupt(decision,&owner,MEMF(decision+0x51C));
}
void raven_ai_pack_contact_guest(uint32_t decision,uint32_t handle) {
    uint32_t actor=MEM32(decision+0x10);raven_ai_mode_config owner,other;
    if(!actor||!raven_ai_mode_read(decision,actor,MEM32(actor+0x1C),&owner)||owner.mode!=6)return;
    const uint32_t sp=g_esp,ax=g_eax,bx=g_ebx,cx=g_ecx,dx=g_edx,si=g_esi,di=g_edi,bp=g_ebp,seh=g_seh_ebp;
    const int top=g_fp_top,cmp=g_fp_cmp;const unsigned cc=g_fp_cc;
    double floats[8];memcpy(floats,g_fp_stack,sizeof(floats));
    uint32_t target=ai_resolve_actor(handle),other_decision=target?raven_ai_mode_find(target,handle,&other):0;
    if(other_decision&&ai_owner_live(decision,&owner))
        raven_ai_pack_contact(decision,&owner,other_decision,&other,MEMF(decision+0x51C));
    g_esp=sp;g_eax=ax;g_ebx=bx;g_ecx=cx;g_edx=dx;g_esi=si;g_edi=di;g_ebp=bp;g_seh_ebp=seh;
    g_fp_top=top;g_fp_cmp=cmp;g_fp_cc=cc;memcpy(g_fp_stack,floats,sizeof(floats));
}
int raven_ai_pack_update(uint32_t decision) {
    uint32_t actor=MEM32(decision+0x10);raven_ai_mode_config owner;
    if(!actor||!raven_ai_mode_read(decision,actor,MEM32(actor+0x1C),&owner)||owner.mode!=6)return 0;
    const uint32_t sp=g_esp,ax=g_eax,bx=g_ebx,cx=g_ecx,dx=g_edx,si=g_esi,di=g_edi,bp=g_ebp,seh=g_seh_ebp;
    const int top=g_fp_top,cmp=g_fp_cmp;const unsigned cc=g_fp_cc;
    double floats[8];memcpy(floats,g_fp_stack,sizeof(floats));
    uint32_t leader=raven_ai_pack_refresh(decision,&owner);
    // Both leader and followers run the follower phase in native116B30.
    // The leader first selects/projects the shared target when ready.
    if(leader==owner.handle)ai_pack_leader(decision,&owner);
    int handled=leader?ai_pack_follower(decision,&owner):0;
    g_esp=sp;g_eax=ax;g_ebx=bx;g_ecx=cx;g_edx=dx;g_esi=si;g_edi=di;g_ebp=bp;g_seh_ebp=seh;
    g_fp_top=top;g_fp_cmp=cmp;g_fp_cc=cc;memcpy(g_fp_stack,floats,sizeof(floats));
    return handled;
}
int raven_ai_protect_update(uint32_t decision) {
    uint32_t actor=MEM32(decision+0x10);raven_ai_mode_config owner;
    if(!actor||!raven_ai_mode_read(decision,actor,MEM32(actor+0x1C),&owner)||
       (owner.mode!=7&&owner.mode!=8))return 0;
    const uint32_t sp=g_esp,ax=g_eax,bx=g_ebx,cx=g_ecx,dx=g_edx,si=g_esi,di=g_edi,bp=g_ebp,seh=g_seh_ebp;
    const int top=g_fp_top,cmp=g_fp_cmp;const unsigned cc=g_fp_cc;
    double floats[8];memcpy(floats,g_fp_stack,sizeof(floats));
    int handled=ai_protect_update_owned(decision,&owner);
    g_esp=sp;g_eax=ax;g_ebx=bx;g_ecx=cx;g_edx=dx;g_esi=si;g_edi=di;g_ebp=bp;g_seh_ebp=seh;
    g_fp_top=top;g_fp_cmp=cmp;g_fp_cc=cc;memcpy(g_fp_stack,floats,sizeof(floats));
    return handled;
}
static int ai_nav_test(void* opaque,const raven_ai_point* point) {
    ai_nav_context* context=(ai_nav_context*)opaque;
    memcpy(XBOX_PTR(context->frame),point,sizeof(*point));
    uint32_t method=MEM32(MEM32(context->grid)+0x20);
    g_ecx=context->grid;PUSH32(g_esp,context->frame);PUSH32(g_esp,0);
    RECOMP_ICALL_SAFE(method,context->frame);if(g_esp!=context->frame)abort();
    return (g_eax&255)!=0;
}
static int ai_hit_run_notify_owned(uint32_t decision,const raven_ai_mode_config* owner,uint32_t target_handle) {
    if(!owner||owner->mode!=2||!target_handle||!ai_owner_live(decision,owner)||
       MEM32(decision+0x18)!=target_handle)return 0;
    uint32_t target=ai_resolve_actor(target_handle);
    if(!target||!ai_owner_live(decision,owner))return 0;
    // XML2 1143B4 restricts the notification to the current target. Retain
    // values, not borrowed actor pointers, across navigation virtual calls.
    raven_ai_point origin,target_point,destination;
    memcpy(&origin,XBOX_PTR(owner->actor+0x20),sizeof(origin));
    memcpy(&target_point,XBOX_PTR(target+0x20),sizeof(target_point));
    uint32_t sp=g_esp;g_esp-=32;ai_nav_context context={0,g_esp};
    context.grid=ai_call(0,0x8F130,NULL,0,0);
    int handled=0;
    if(context.grid&&raven_ai_hit_run_destination(&origin,&target_point,ai_nav_test,&context,&destination)&&
       ai_owner_live(decision,owner)&&ai_resolve_actor(target_handle)==target&&
       MEM32(decision+0x18)==target_handle) {
        float deadline=MEMF(decision+0x51C)+owner->run_time;
        if(isfinite(deadline)) {
            memcpy(XBOX_PTR(context.frame),&destination,sizeof(destination));
            uint32_t point=context.frame;
            // Use XML1's existing movement/state transition. XML2 11464F
            // intentionally ignores its return; target suspension follows
            // even when the native movement gate declines the request.
            ai_call(decision,0x101940,&point,1,0);
            if(ai_owner_live(decision,owner)&&MEM32(decision+0x18)==target_handle) {
                raven_ai_retreat_state state={target_handle,deadline,1};
                if(raven_ai_retreat_publish(decision,owner,&state)) {
                    MEM32(decision+0x18)=0;handled=1;
                }
            }
        }
    }
    g_esp=sp;return handled;
}
int raven_ai_hit_run_notify(uint32_t decision,uint32_t target_handle) {
    uint32_t actor=MEM32(decision+0x10);raven_ai_mode_config owner;
    if(!actor||!raven_ai_mode_read(decision,actor,MEM32(actor+0x1C),&owner)||owner.mode!=2)return 0;
    const uint32_t sp=g_esp,ax=g_eax,bx=g_ebx,cx=g_ecx,dx=g_edx,si=g_esi,di=g_edi,bp=g_ebp,seh=g_seh_ebp;
    const int top=g_fp_top,cmp=g_fp_cmp;const unsigned cc=g_fp_cc;
    double floats[8];memcpy(floats,g_fp_stack,sizeof(floats));
    int handled=ai_hit_run_notify_owned(decision,&owner,target_handle);
    g_esp=sp;g_eax=ax;g_ebx=bx;g_ecx=cx;g_edx=dx;g_esi=si;g_edi=di;g_ebp=bp;g_seh_ebp=seh;
    g_fp_top=top;g_fp_cmp=cmp;g_fp_cc=cc;memcpy(g_fp_stack,floats,sizeof(floats));
    return handled;
}
int raven_ai_hit_run_waiting(uint32_t decision) {
    uint32_t actor=MEM32(decision+0x10);raven_ai_mode_config owner;raven_ai_retreat_state state;
    if(!actor||!raven_ai_mode_read(decision,actor,MEM32(actor+0x1C),&owner)||owner.mode!=2||
       !raven_ai_retreat_read(decision,&owner,&state))return 0;
    // XML2 13226B and13564B gate attack selection, not the movement update.
    // Keep the deadline after consuming the retained target at arrival.
    return state.deadline>MEMF(decision+0x51C);
}
int raven_ai_hit_run_incoming(uint32_t recipient,uint32_t attacker_handle) {
    if(!recipient||!attacker_handle||(MEM8(recipient+0x334)&1))return 0;
    const uint32_t sp=g_esp,ax=g_eax,bx=g_ebx,cx=g_ecx,dx=g_edx,si=g_esi,di=g_edi,bp=g_ebp,seh=g_seh_ebp;
    const int top=g_fp_top,cmp=g_fp_cmp;const unsigned cc=g_fp_cc;
    double floats[8];memcpy(floats,g_fp_stack,sizeof(floats));
    uint32_t recipient_handle=MEM32(recipient+0x1C),attacker=ai_resolve_actor(attacker_handle);
    int handled=0;
    if(attacker&&ai_resolve_actor(recipient_handle)==recipient) {
        raven_ai_mode_config owner;
        uint32_t decision=raven_ai_mode_find(attacker,attacker_handle,&owner);
        // XML2 12B050..12B092 notifies the ATTACKER's handler when the
        // recipient is non-player. The full-handle registry replaces the
        // incompatible XML2 CAI slot258; stock XML1 actors have no entry.
        if(decision&&owner.mode==2)handled=ai_hit_run_notify_owned(decision,&owner,recipient_handle);
    }
    g_esp=sp;g_eax=ax;g_ebx=bx;g_ecx=cx;g_edx=dx;g_esi=si;g_edi=di;g_ebp=bp;g_seh_ebp=seh;
    g_fp_top=top;g_fp_cmp=cmp;g_fp_cc=cc;memcpy(g_fp_stack,floats,sizeof(floats));
    return handled;
}
void raven_ai_hit_run_finish(uint32_t decision) {
    uint32_t actor=MEM32(decision+0x10);raven_ai_mode_config owner;raven_ai_retreat_state state;
    if(!actor||!raven_ai_mode_read(decision,actor,MEM32(actor+0x1C),&owner)||owner.mode!=2||
       !raven_ai_retreat_read(decision,&owner,&state)||!state.active)return;
    uint32_t target_handle=state.target;state.target=0;state.active=0;
    // Native135974 consumes the remembered handle even if it no longer
    // resolves. Do so before guest calls, preventing duplicate use on reentry.
    if(!raven_ai_retreat_publish(decision,&owner,&state))return;
    const uint32_t sp=g_esp,ax=g_eax,bx=g_ebx,cx=g_ecx,dx=g_edx,si=g_esi,di=g_edi,bp=g_ebp,seh=g_seh_ebp;
    const int top=g_fp_top,cmp=g_fp_cmp;const unsigned cc=g_fp_cc;
    double floats[8];memcpy(floats,g_fp_stack,sizeof(floats));
    uint32_t target=ai_resolve_actor(target_handle);
    if(target&&ai_owner_live(decision,&owner)) {
        double x=(double)MEMF(target+0x20)-MEMF(actor+0x20);
        double y=(double)MEMF(target+0x24)-MEMF(actor+0x24);
        if(isfinite(x)&&isfinite(y)&&(x!=0||y!=0)) {
            g_esp-=16;uint32_t angles=g_esp;
            MEMF(angles)=MEMF(angles+4)=0;MEMF(angles+8)=(float)atan2(y,x);
            // XML1 FC600 owns the actor-controller facing gate and invokes
            // the existing actor transform interface. No XML2 field offsets
            // or target18 restoration are used here.
            ai_call(decision,0xFC600,&angles,1,0);
        }
    }
    g_esp=sp;g_eax=ax;g_ebx=bx;g_ecx=cx;g_edx=dx;g_esi=si;g_edi=di;g_ebp=bp;g_seh_ebp=seh;
    g_fp_top=top;g_fp_cmp=cmp;g_fp_cc=cc;memcpy(g_fp_stack,floats,sizeof(floats));
}
static void ai_build_route(uint32_t decision,const raven_ai_mode_config* owner,uint32_t grid) {
    uint32_t sp=g_esp;g_esp-=64;ai_nav_context context={grid,g_esp};
    raven_ai_point projected[2];
    // XML2 projects twice. Use XML1's existing point projection (slot24,
    // return-buffer pointer followed by source pointer, callee pops8).
    for(int i=0;i<2;++i) {
        uint32_t method=MEM32(MEM32(grid)+0x24);
        g_ecx=grid;PUSH32(g_esp,owner->actor+0x20);
        PUSH32(g_esp,context.frame);PUSH32(g_esp,0);
        RECOMP_ICALL_SAFE(method,context.frame);if(g_esp!=context.frame)abort();
        memcpy(&projected[i],XBOX_PTR(g_eax),sizeof(projected[i]));
    }
    raven_ai_wander_route route;
    raven_ai_wander_build(&route,&projected[0],&projected[1],ai_nav_test,&context);
    if(MEM32(owner->actor+0x1C)==owner->handle)
        raven_ai_wander_publish(decision,owner,&route);
    g_esp=sp;
}
void raven_ai_wander_initialize(uint32_t decision) {
    uint32_t actor=MEM32(decision+0x10);raven_ai_mode_config owner;
    if(!actor||!raven_ai_mode_read(decision,actor,MEM32(actor+0x1C),&owner)||owner.mode!=1)return;
    const uint32_t sp=g_esp,ax=g_eax,bx=g_ebx,cx=g_ecx,dx=g_edx,si=g_esi,di=g_edi,bp=g_ebp,seh=g_seh_ebp;
    const int top=g_fp_top,cmp=g_fp_cmp;const unsigned cc=g_fp_cc;
    double floats[8];memcpy(floats,g_fp_stack,sizeof(floats));
    PUSH32(g_esp,0);RECOMP_ABI_CALL(0x0008F130u,sub_0008F130);
    if(g_esp!=sp)abort();
    ai_build_route(decision,&owner,g_eax);
    raven_ai_mode_config current;
    if(MEM32(actor+0x1C)==owner.handle&&raven_ai_mode_read(decision,actor,owner.handle,&current)&&current.epoch==owner.epoch) {
        // XML2 wandering secondary initializer115C00 selects combat mode2
        // through the normal decision interface, then selects behavior1.
        g_ecx=decision;PUSH32(g_esp,2);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x000FC260u,sub_000FC260);if(g_esp!=sp)abort();
        MEM32(decision+0x20)=1;
    }
    g_esp=sp;g_eax=ax;g_ebx=bx;g_ecx=cx;g_edx=dx;g_esi=si;g_edi=di;g_ebp=bp;g_seh_ebp=seh;
    g_fp_top=top;g_fp_cmp=cmp;g_fp_cc=cc;memcpy(g_fp_stack,floats,sizeof(floats));
}

int raven_ai_wander_idle(uint32_t decision) {
    uint32_t actor=MEM32(decision+0x10);raven_ai_mode_config owner;
    if(!actor||!raven_ai_mode_read(decision,actor,MEM32(actor+0x1C),&owner)||owner.mode!=1)return 0;
    const uint32_t sp=g_esp,ax=g_eax,bx=g_ebx,cx=g_ecx,dx=g_edx,si=g_esi,di=g_edi,bp=g_ebp,seh=g_seh_ebp;
    const int top=g_fp_top,cmp=g_fp_cmp;const unsigned cc=g_fp_cc;
    double floats[8];memcpy(floats,g_fp_stack,sizeof(floats));
    int handled=1;
    // XML2 115FF0 delegates to ordinary idle whenever either combat target
    // is still valid. XML1 owns handle validation; nonzero is not validity.
    const uint32_t offsets[2]={0x144,0x18};
    for(int i=0;i<2;++i)if(MEM32(decision+offsets[i])) {
        g_ecx=decision+offsets[i];PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x0006BFA0u,sub_0006BFA0);if(g_esp!=sp)abort();
        if(g_eax&255){handled=0;break;}
    }
    raven_ai_point destination;
    // The new derived object's busy/wait fields initialize to zero. No
    // stock XML1 bytes are appropriated for them. Its initial time gate is
    // therefore zero; NaN also fails the native ordered comparison.
    if(handled&&MEMF(decision+0x51C)>=0&&MEM32(actor+0x1C)==owner.handle&&
       raven_ai_wander_take(decision,&owner,&destination)) {
        g_esp-=16;uint32_t frame=g_esp;
        memcpy(XBOX_PTR(frame),&destination,sizeof(destination));
        g_ecx=decision;PUSH32(g_esp,frame);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x00101940u,sub_00101940);if(g_esp!=frame)abort();
        raven_ai_mode_config current;
        if(MEM32(actor+0x1C)==owner.handle&&raven_ai_mode_read(decision,actor,owner.handle,&current)&&current.epoch==owner.epoch) {
            // Native wander selection advances even if the existing movement
            // interface declines the destination. Preserve that ownership.
            MEM32(decision+0x18)=0;
            g_ecx=decision;PUSH32(g_esp,0);PUSH32(g_esp,0);
            RECOMP_ABI_CALL(0x000FC5A0u,sub_000FC5A0);if(g_esp!=frame)abort();
            MEMF(decision+0x1B0)=owner.patrol_speed;
        }
    }
    g_esp=sp;g_eax=ax;g_ebx=bx;g_ecx=cx;g_edx=dx;g_esi=si;g_edi=di;g_ebp=bp;g_seh_ebp=seh;
    g_fp_top=top;g_fp_cmp=cmp;g_fp_cc=cc;memcpy(g_fp_stack,floats,sizeof(floats));
    return handled;
}

static struct {uint32_t token,bag,actor,text;unsigned variant,calls;int failed;} ai_fixture;
static struct {uint32_t token,grid,actor,decision;unsigned projections,tests;int failed,retire;} nav_fixture;
static void ai_fixture_project(void) {
    uint32_t sp=g_esp,dest=MEM32(sp+4);
    if(g_ecx!=nav_fixture.grid||MEM32(sp+8)!=nav_fixture.actor+0x20)nav_fixture.failed=1;
    raven_ai_point point={0,0,7};
    if(++nav_fixture.projections==1){point.x=10;point.y=20;point.z=30;}
    memcpy(XBOX_PTR(dest),&point,sizeof(point));g_eax=dest;g_esp=sp+12;
}
static void ai_fixture_point(void) {
    uint32_t sp=g_esp;const raven_ai_point* point=(const raven_ai_point*)XBOX_PTR(MEM32(sp+4));
    if(g_ecx!=nav_fixture.grid||point->z!=7)nav_fixture.failed=1;
    ++nav_fixture.tests;
    if(nav_fixture.retire&&nav_fixture.tests==1)raven_ai_mode_reset(nav_fixture.decision);
    g_eax=1;g_esp=sp+8;
}
static void ai_fixture_property(void) {
    uint32_t sp=g_esp;const char* key=(const char*)XBOX_PTR(MEM32(sp+4));
    const char* result=NULL;
    if(g_ecx!=ai_fixture.bag||MEM32(sp+8))ai_fixture.failed=1;
    ++ai_fixture.calls;
    if(!strcmp(key,"aitype"))result=ai_fixture.variant?"6":NULL;
    else if(!strcmp(key,"aitype_patrolspeed"))result=ai_fixture.variant>=2?"0.75":NULL;
    else if(!strcmp(key,"aitype_runtime")) {
        result=ai_fixture.variant>=2?"7.5":NULL;
        if(ai_fixture.variant==3)MEM32(ai_fixture.actor+0x1C)+=512;
    } else ai_fixture.failed=1;
    if(result)strcpy((char*)XBOX_PTR(ai_fixture.text),result);
    g_eax=result?ai_fixture.text:0;g_esp=sp+12;
}
static uint32_t ai_redirect_fixture_token;
static uint32_t ai_teleport_event_fixture_event,ai_teleport_event_fixture_context,ai_teleport_event_fixture_parameters;
static int ai_teleport_event_fixture_calls,ai_teleport_event_fixture_bad,ai_teleport_event_fixture_accept;
static void ai_fixture_teleport_event(void) {
    uint32_t sp=g_esp;
    if(g_ecx!=ai_teleport_event_fixture_event||MEMF(sp+4)!=30||MEMF(sp+8)!=40||MEMF(sp+12)!=50||
       MEM32(sp+16)!=ai_teleport_event_fixture_context||MEM32(sp+20)!=ai_teleport_event_fixture_parameters||
       MEMF(sp+24)!=20||MEM32(sp+28))ai_teleport_event_fixture_bad=1;
    ++ai_teleport_event_fixture_calls;
    g_eax=ai_teleport_event_fixture_accept;g_esp=sp+32;
}
static uint32_t ai_tele_attack_handler,ai_tele_attack_actor,ai_tele_attack_controller,ai_tele_attack_game;
static uint32_t ai_tele_attack_input,ai_tele_attack_decision;
static int ai_tele_attack_bad,ai_tele_attack_base_calls,ai_tele_attack_allow,ai_tele_attack_retire;
static float ai_tele_attack_time;
static void ai_fixture_tele_clock_object(void){g_eax=ai_tele_attack_game;g_esp+=4;}
static void ai_fixture_tele_clock(void){g_fp_top=(g_fp_top-1)&7;g_fp_stack[g_fp_top]=ai_tele_attack_time;g_esp+=4;}
static void ai_fixture_tele_actions(void) {
    uint32_t sp=g_esp,output=MEM32(sp+16);
    if(g_ecx!=ai_tele_attack_controller||MEM32(sp+4)!=ai_tele_attack_actor||MEM32(sp+8)!=1||
       MEM32(sp+12)||MEM32(sp+20)||MEM32(sp+24))ai_tele_attack_bad=1;
    memset(XBOX_PTR(output),0,0x78);MEM32(output+20)=MEM32(output+24)=ai_tele_attack_allow;
    if(ai_tele_attack_retire)raven_ai_mode_reset(ai_tele_attack_decision);
    g_esp=sp+28;
}
static void ai_fixture_tele_face_gate(void){g_eax=0;g_esp+=4;}
static void ai_fixture_tele_face(void) {
    uint32_t sp=g_esp,angles=MEM32(sp+8);
    if(g_ecx!=ai_tele_attack_actor||MEM32(sp+4)!=ai_tele_attack_actor+0x20)ai_tele_attack_bad=1;
    memcpy(XBOX_PTR(ai_tele_attack_actor+0x2C),XBOX_PTR(angles),12);g_esp=sp+12;
}
static void ai_fixture_tele_base(void) {
    uint32_t sp=g_esp;
    if(g_ecx!=ai_tele_attack_handler||MEM32(sp+4)!=0x400||MEM32(sp+8)!=ai_tele_attack_input)ai_tele_attack_bad=1;
    ++ai_tele_attack_base_calls;g_eax=1;g_esp=sp+12;
}
static uint32_t ai_retreat_face_token,ai_retreat_face_actor;
static int ai_retreat_face_calls,ai_retreat_face_bad;
static void ai_fixture_retreat_face(void) {
    uint32_t sp=g_esp,angles=MEM32(sp+8);
    if(g_ecx!=ai_retreat_face_actor||MEM32(sp+4)!=ai_retreat_face_actor+0x20||
       MEMF(angles)!=0||MEMF(angles+4)!=0||fabs(MEMF(angles+8)-3.141592653589793)>0.00001)
        ai_retreat_face_bad=1;
    ++ai_retreat_face_calls;g_esp=sp+12;
}
static uint32_t ai_pack_projection_token,ai_pack_projection_owner;
static uint32_t ai_pack_attack_fixture_owner;
static int ai_pack_attack_fixture_calls,ai_pack_attack_fixture_bad;
static void ai_fixture_pack_attack(void) {
    uint32_t sp=g_esp;
    if(g_ecx!=ai_pack_attack_fixture_owner||MEM32(sp+4)!=0x402||MEM32(sp+8)!=0x400)ai_pack_attack_fixture_bad=1;
    ++ai_pack_attack_fixture_calls;g_esp=sp+12;
}
static int ai_pack_projection_fail,ai_pack_projection_retire,ai_pack_projection_bad;
static void ai_fixture_pack_projection(void) {
    uint32_t sp=g_esp,in=MEM32(sp+4),out=MEM32(sp+8);
    if(g_ecx!=0x4A0548||MEM32(sp+12)!=1||MEM32(sp+16)!=1||
       fabs(MEMF(in)-300.0f)>0.01||MEMF(in+4)!=0||MEMF(in+8)!=0)ai_pack_projection_bad=1;
    if(ai_pack_projection_retire)raven_ai_mode_reset(ai_pack_projection_owner);
    if(!ai_pack_projection_fail){MEMF(out)=307;MEMF(out+4)=0;MEMF(out+8)=9;}
    g_eax=!ai_pack_projection_fail;g_esp=sp+20;
}
static uint32_t ai_party_fixture_token,ai_party_fixture_handles[5];
static unsigned ai_party_fixture_count;
static int ai_party_fixture_failed;
static void ai_fixture_party(void) {
    uint32_t sp=g_esp,buffer=MEM32(sp+4);
    if(g_ecx!=0x498E88||MEM32(sp+8)!=0xFFFFFFFFu||MEM32(sp+12)!=0)ai_party_fixture_failed=1;
    memcpy(XBOX_PTR(buffer),ai_party_fixture_handles,ai_party_fixture_count*4);
    MEM32(buffer+20)=ai_party_fixture_count;g_eax=buffer;g_esp=sp+16;
}
static void ai_fixture_redirect_threshold(void) {
    g_fp_top=(g_fp_top-1)&7;g_fp_stack[g_fp_top]=1.0;g_esp+=4;
}
void (*raven_ai_mode_fixture_lookup(uint32_t address))(void) {
    if(ai_tele_attack_handler) {
        if(address==0x72CF0)return ai_fixture_tele_clock_object;
        if(address==ai_tele_attack_game+0x180)return ai_fixture_tele_clock;
        if(address==ai_tele_attack_controller+0x180)return ai_fixture_tele_actions;
        if(address==ai_tele_attack_controller+0x184)return ai_fixture_tele_face_gate;
        if(address==ai_tele_attack_controller+0x188)return ai_fixture_tele_face;
        if(address==0xEEA60)return ai_fixture_tele_base;
    }
    if(ai_teleport_event_fixture_event&&address==0xD56B0)return ai_fixture_teleport_event;
    if(ai_retreat_face_token&&address==ai_retreat_face_token)return ai_fixture_retreat_face;
    if(ai_pack_attack_fixture_owner&&address==0x104AA0)return ai_fixture_pack_attack;
    if(ai_pack_projection_token&&address==ai_pack_projection_token)return ai_fixture_pack_projection;
    if(ai_party_fixture_token&&address==ai_party_fixture_token)return ai_fixture_party;
    if(ai_redirect_fixture_token&&address==ai_redirect_fixture_token)return ai_fixture_redirect_threshold;
    if(nav_fixture.token) {
        if(address==nav_fixture.token)return ai_fixture_project;
        if(address==nav_fixture.token+4)return ai_fixture_point;
    }
    return ai_fixture.token&&address==ai_fixture.token?ai_fixture_property:NULL;
}
static int ai_protect_command_fixture(uint32_t scratch) {
    const uint32_t manager=0x4DB2B8,grid=0x4A0548;
    const uint32_t globals[]={0x4E7044,0x485878,0x48D8FC,0x4B2FFC,grid};
    uint32_t saved[5];for(unsigned i=0;i<5;++i)saved[i]=MEM32(globals[i]);
    unsigned char backup[0x1860];memcpy(backup,XBOX_PTR(manager),sizeof(backup));
    memset(XBOX_PTR(manager),0,sizeof(backup));memset(XBOX_PTR(scratch),0,0x1000);
    uint32_t actor=scratch,decision=scratch+0x500,table=scratch+0xE00;
    MEM32(0x4E7044)=1;MEM32(0x485878)=MEM32(0x48D8FC)=0;
    MEM32(manager)=0x3D4B7C;MEM32(manager+0x185C)=511;
    MEM32(manager+0x1018)=1;MEM32(manager+4)=actor;MEM32(manager+0x105C)=0x400;
    MEM32(actor)=table;MEM32(table)=0x2E6B0;MEM32(table+0x158)=0x34E40;
    MEM32(actor+0x18)=2;MEM32(actor+0x1C)=0x400;MEM32(decision+0x10)=actor;
    raven_ai_mode_config initial={actor,0x400,7,0.5f,4},owner;
    raven_ai_mode_begin(decision,&initial);raven_ai_mode_read(decision,actor,0x400,&owner);
    raven_ai_protect_result plan={{320,280,7},1.4f,1,1,1};
    const uint32_t sp=g_esp;int failed=0;
    int first=ai_protect_command(decision,&owner,&plan);
    if(!first||MEM32(decision+8)!=5||
       MEMF(decision+0x34)!=320||MEMF(decision+0x38)!=280||MEMF(decision+0x3C)!=7||
       MEMF(decision+0x1B0)!=0||MEMF(decision+0x1B4)!=1.4f||g_esp!=sp) {
        failed=1;printf("Protect command diagnostic: accepted=%d state=%u dest=%g,%g,%g speed=%g override=%g stack=%d\n",first,MEM32(decision+8),MEMF(decision+0x34),MEMF(decision+0x38),MEMF(decision+0x3C),MEMF(decision+0x1B0),MEMF(decision+0x1B4),(int)(g_esp-sp));
    }
    // XML1's state transition clears normal speed; preserve that existing
    // behavior rather than reapplying the earlier Protect speed write.
    // Native destination rejection still wins after the requested reset.
    MEM32(decision+0x1AC)=9;plan.destination.x=480;
    if(ai_protect_command(decision,&owner,&plan)||MEM32(decision+8)!=0)failed=2;
    MEM32(decision+0x1AC)=0;
    // No-action plans retain the speed write without changing destination.
    plan.action=0;plan.speed=1;plan.write_speed_override=0;plan.destination.x=640;
    if(ai_protect_command(decision,&owner,&plan)||MEMF(decision+0x34)!=480||
       MEMF(decision+0x1B0)!=1||MEMF(decision+0x1B4)!=1.4f)failed=3;
    // Redirect executes the real actor method, with only the grid's scalar
    // distance-threshold terminal supplied by the fixture.
    MEM32(grid)=scratch+0xC00;MEM32(0x4B2FFC)|=1;
    ai_redirect_fixture_token=scratch+0xF80;MEM32(scratch+0xC1C)=ai_redirect_fixture_token;
    MEM32(decision+8)=7;plan.action=2;plan.speed=1.4f;plan.write_speed_override=1;
    MEMF(actor+0x2C)=0.25f;MEMF(actor+0x30)=0.5f;MEMF(actor+0x34)=0.75f;
    if(ai_protect_command(decision,&owner,&plan)||MEM32(decision+8)!=7||
       MEMF(actor+0x20)!=0||MEMF(actor+0x1B4)!=640||MEMF(actor+0x1B8)!=280||
       MEMF(actor+0x1BC)!=7||MEMF(actor+0x160)!=3||MEM32(actor+0x15C)!=0||
       MEMF(actor+0x1C0)!=0.25f||MEMF(actor+0x1C4)!=0.5f||MEMF(actor+0x1C8)!=0.75f||
       MEMF(decision+0x34)!=640||g_esp!=sp)failed=6;
    ai_redirect_fixture_token=0;plan.action=0;plan.speed=1;ai_protect_command(decision,&owner,&plan);
    // A generation mismatch and a reused decision must both be inert.
    MEM32(manager+0x105C)=0x600;plan.speed=2;
    if(ai_protect_command(decision,&owner,&plan)||MEMF(decision+0x1B0)!=1)failed=4;
    MEM32(manager+0x105C)=0x400;raven_ai_mode_begin(decision,&initial);
    if(ai_protect_command(decision,&owner,&plan)||MEMF(decision+0x1B0)!=1)failed=5;
    raven_ai_mode_reset(decision);
    memcpy(XBOX_PTR(manager),backup,sizeof(backup));
    for(unsigned i=0;i<5;++i)MEM32(globals[i])=saved[i];
    printf("%s Protect movement commands: real state/destination/redirect methods, native rejection, speed-only updates, stale actor and decision epochs; grid threshold terminal substituted (%d)\n",failed?"FAIL":"PASS",failed);
    return failed;
}
static int ai_hit_run_fixture(uint32_t scratch) {
    const uint32_t manager=0x4DB2B8,grid=0x4A0548,sp=g_esp;
    const uint32_t globals[]={0x4E7044,0x485878,0x48D8FC,0x4B2FFC,grid};
    uint32_t saved[5];for(unsigned i=0;i<5;++i)saved[i]=MEM32(globals[i]);
    unsigned char backup[0x1860];memcpy(backup,XBOX_PTR(manager),sizeof(backup));
    memset(XBOX_PTR(manager),0,sizeof(backup));memset(XBOX_PTR(scratch),0,0x1800);
    uint32_t actor=scratch,target=scratch+0x500,decision=scratch+0xA00,table=scratch+0x1200;
    MEM32(0x4E7044)=1;MEM32(0x485878)=MEM32(0x48D8FC)=0;
    MEM32(0x4B2FFC)|=1;MEM32(manager)=0x3D4B7C;MEM32(manager+0x185C)=511;
    MEM32(manager+0x1018)=3;
    MEM32(manager+4)=actor;MEM32(manager+8)=target;
    MEM32(manager+0x105C)=0x400;MEM32(manager+0x1060)=0x401;
    MEM32(table)=0x2E6B0;
    MEM32(actor)=MEM32(target)=table;MEM32(actor+0x18)=MEM32(target+0x18)=2;
    MEM32(actor+0x1C)=0x400;MEM32(target+0x1C)=0x401;
    MEMF(actor+0x28)=MEMF(target+0x28)=7;MEMF(target+0x20)=-10;
    MEM32(decision+0x10)=actor;MEMF(decision+0x51C)=10;
    nav_fixture.token=scratch+0x1600;nav_fixture.grid=grid;nav_fixture.actor=actor;nav_fixture.decision=decision;
    MEM32(grid)=scratch+0x1400;MEM32(scratch+0x1420)=nav_fixture.token+4;
    raven_ai_mode_config initial={actor,0x400,2,0.5f,4},owner;
    raven_ai_retreat_state state;int failed=0;
    for(int variant=0;variant<4;++variant) {
        raven_ai_mode_begin(decision,&initial);raven_ai_mode_read(decision,actor,0x400,&owner);
        MEM32(decision+0x18)=0x401;MEM32(decision+8)=0;MEM32(decision+0x1AC)=variant==1?9:0;
        MEMF(decision+0x34)=999;nav_fixture.tests=0;nav_fixture.retire=variant==2;
        int handled=variant==3?raven_ai_hit_run_notify(decision,0x402):raven_ai_hit_run_incoming(target,0x400);
        if(variant<2) {
            if(!handled||MEM32(decision+0x18)||nav_fixture.tests!=8||
               !raven_ai_retreat_read(decision,&owner,&state)||!state.active||
               state.target!=0x401||state.deadline!=14)failed=1;
            if(variant==0&&(MEM32(decision+8)!=5||MEMF(decision+0x34)!=280||
               MEMF(decision+0x38)!=0||MEMF(decision+0x3C)!=7))failed=2;
            if(variant==1&&(MEM32(decision+8)||MEMF(decision+0x34)!=999))failed=3;
        } else if(handled||MEM32(decision+0x18)!=0x401||MEM32(decision+8)||
                  MEMF(decision+0x34)!=999||(variant==3&&nav_fixture.tests))failed=4;
        if(g_esp!=sp||nav_fixture.failed)failed=5;
    }
    // Movement completion faces the remembered target once. It does not
    // assign a combat target, and finishing early does not remove cooldown.
    raven_ai_mode_begin(decision,&initial);raven_ai_mode_read(decision,actor,0x400,&owner);
    state.target=0x401;state.deadline=14;state.active=1;
    raven_ai_retreat_publish(decision,&owner,&state);MEM32(decision+0x18)=0;
    ai_retreat_face_token=scratch+0x1608;ai_retreat_face_actor=actor;
    ai_retreat_face_calls=ai_retreat_face_bad=0;MEM32(table+0x34)=ai_retreat_face_token;
    if(!raven_ai_hit_run_waiting(decision))failed=6;
    // Execute the generated attack-selection entry. A pending retreat
    // returns false before touching the output or running native selection.
    uint32_t query_args[2]={scratch+0x1700,scratch+0x1710};
    MEM32(query_args[1])=0x12345678;
    if((ai_call(decision,0x10B9F0,query_args,2,0)&255)||
       MEM32(query_args[1])!=0x12345678||g_esp!=sp)failed=12;
    raven_ai_hit_run_finish(decision);raven_ai_hit_run_finish(decision);
    if(ai_retreat_face_calls!=1||ai_retreat_face_bad||MEM32(decision+0x18)||
       !raven_ai_retreat_read(decision,&owner,&state)||state.active||state.target||
       !raven_ai_hit_run_waiting(decision))failed=7;
    MEMF(decision+0x51C)=14;if(raven_ai_hit_run_waiting(decision))failed=8;
    // At expiry the original native early gate runs. It also returns false
    // here, with its real exception-frame setup/teardown and ret8 ABI.
    MEM8(decision+0x28B)=3;
    if((ai_call(decision,0x10B9F0,query_args,2,0)&255)||g_esp!=sp)failed=13;
    MEM8(decision+0x28B)=0;
    // A recycled target is consumed without facing its replacement.
    state.target=0x401;state.active=1;raven_ai_retreat_publish(decision,&owner,&state);
    MEM32(manager+0x1060)=0x601;raven_ai_hit_run_finish(decision);
    if(ai_retreat_face_calls!=1||!raven_ai_retreat_read(decision,&owner,&state)||state.active)failed=9;
    MEM32(manager+0x1060)=0x401;MEM32(decision+0x18)=0x401;
    MEM8(target+0x334)=1;
    if(raven_ai_hit_run_incoming(target,0x400)||MEM32(decision+0x18)!=0x401)failed=10;
    MEM8(target+0x334)=0;MEM32(manager+0x105C)=0x600;
    if(raven_ai_hit_run_incoming(target,0x400)||MEM32(decision+0x18)!=0x401)failed=11;
    ai_retreat_face_token=ai_retreat_face_actor=0;
    // Exercise the generated teleport event through its original setup.
    // Only the spatial movement terminal is substituted; the owned point,
    // event arguments, event dispatch and x87/ret16 cleanup are real.
    MEM32(manager+0x105C)=0x400;initial.mode=0;initial.teleporter=1;
    raven_ai_mode_begin(decision,&initial);raven_ai_mode_read(decision,actor,0x400,&owner);
    raven_ai_teleport_runtime teleport;
    raven_ai_teleport_read(decision,&owner,&teleport);
    teleport.pending=1;teleport.destination=(raven_ai_point){30,40,50};
    raven_ai_teleport_publish(decision,&owner,&teleport);
    uint32_t event=scratch+0x1700,context=scratch+0x1720,parameters=scratch+0x1740;
    MEM32(event+0x14)=parameters;MEM32(context)=actor;
    MEM16(parameters+6)=20;MEMF(parameters+0x30)=0;MEM32(actor+0x338)=0;MEM16(actor+0x524)=0;
    uint32_t default_range=MEM32(0x498D90);MEMF(0x498D90)=20;
    ai_teleport_event_fixture_event=event;ai_teleport_event_fixture_context=context;
    ai_teleport_event_fixture_parameters=parameters;ai_teleport_event_fixture_accept=1;
    ai_teleport_event_fixture_calls=ai_teleport_event_fixture_bad=0;
    uint32_t teleport_args[4]={context,parameters,0,0};int fp_before=g_fp_top;
    if(!(ai_call(event,0xD6030,teleport_args,4,0)&255)||ai_teleport_event_fixture_calls!=1||
       ai_teleport_event_fixture_bad||g_esp!=sp||g_fp_top!=fp_before)failed=14;
    if(raven_ai_teleport_event(event,context,parameters,0x41A00000)!=-1||
       ai_teleport_event_fixture_calls!=1)failed=15;
    raven_ai_teleport_read(decision,&owner,&teleport);teleport.pending=1;
    raven_ai_teleport_publish(decision,&owner,&teleport);ai_teleport_event_fixture_accept=0;
    if(raven_ai_teleport_event(event,context,parameters,0x41A00000)!=-1||
       ai_teleport_event_fixture_calls!=2||g_esp!=sp||g_fp_top!=fp_before)failed=16;
    ai_teleport_event_fixture_event=0;MEM32(0x498D90)=default_range;
    // Real target resolution, health/action gates, geometry and owned state;
    // substitute only controller terminals, game clock and standard attack.
    uint32_t handler=scratch+0x1700,input=scratch+0x1780,controller=scratch+0x1000,game=scratch+0x1300;
    MEM32(handler)=0x3D8F2C;MEM32(handler+4)=decision;MEM8(handler+0x14)=2;
    MEM32(actor+0x2F4)=controller;MEM32(controller)=controller+0x80;
    MEM32(controller+0xBC)=controller+0x180;MEM32(controller+0xD4)=controller+0x184;
    MEM32(table+0x34)=controller+0x188;MEM32(game)=game+0x10;MEM32(game+0x114)=game+0x180;
    MEMF(actor+0x240)=MEMF(target+0x240)=100;
    ai_tele_attack_handler=handler;ai_tele_attack_actor=actor;ai_tele_attack_controller=controller;
    ai_tele_attack_game=game;ai_tele_attack_input=input;ai_tele_attack_decision=decision;
    ai_tele_attack_bad=ai_tele_attack_base_calls=ai_tele_attack_retire=0;ai_tele_attack_allow=1;
    uint32_t saved_seed=MEM32(0x50622C);MEM32(0x50622C)=1;
    ai_tele_attack_time=20;
    raven_ai_mode_begin(decision,&initial);raven_ai_mode_read(decision,actor,0x400,&owner);
    MEM32(input)=MEM32(input+4)=1;MEMF(target+0x20)=-10;
    if(raven_ai_teleport_attack(handler,0x400,input)!=1||MEM32(input)!=0x181||MEM32(input+4)!=0x181||
       ai_tele_attack_base_calls!=1||!raven_ai_teleport_read(decision,&owner,&teleport)||
       teleport.state.phase!=2||!teleport.pending||teleport.destination.x!=180)failed=17;
    // Follow-up phase2 executes through the actual EE810 wrapper hook and
    // restores its temporary handler bit. This also tests real alignment.
    MEM32(input)=MEM32(input+4)=0;uint32_t attack_args[3]={0x400,input,0};
    if(!(ai_call(handler,0xEE810,attack_args,3,0)&255)||MEM32(input)!=0x90||MEM32(input+4)!=0x90||
       MEM8(handler+0x14)!=2||!raven_ai_teleport_read(decision,&owner,&teleport)||teleport.state.phase)failed=18;
    // Cooldown delegates without generating another destination/teleport.
    MEM32(input)=MEM32(input+4)=0;
    if(raven_ai_teleport_attack(handler,0x400,input)!=1||MEM32(input)||ai_tele_attack_base_calls!=2)failed=19;
    ai_tele_attack_time=30;MEMF(target+0x20)=100;
    if(raven_ai_teleport_attack(handler,0x400,input)!=1||!raven_ai_teleport_read(decision,&owner,&teleport)||
       teleport.state.phase!=1||teleport.destination.x!=80)failed=20;
    MEM32(input)=MEM32(input+4)=0;ai_tele_attack_time=32;
    if(raven_ai_teleport_attack(handler,0x400,input)!=1||(MEM32(input)!=0x10&&MEM32(input)!=0x20)||
       MEM32(input)!=MEM32(input+4)||!raven_ai_teleport_read(decision,&owner,&teleport)||teleport.state.phase)failed=21;
    // Native dead-target rejection, action denial and retirement are inert.
    MEM32(input)=MEM32(input+4)=0;MEMF(target+0x240)=0;
    if(raven_ai_teleport_attack(handler,0x400,input)!=0||MEM32(input))failed=22;
    MEMF(target+0x240)=100;ai_tele_attack_time=40;ai_tele_attack_allow=0;
    if(raven_ai_teleport_attack(handler,0x400,input)!=1||MEM32(input))failed=23;
    ai_tele_attack_allow=1;ai_tele_attack_retire=1;
    if(raven_ai_teleport_attack(handler,0x400,input)!=1||MEM32(input))failed=24;
    if(raven_ai_teleport_attack(handler,0x400,input)!=-1||g_esp!=sp||g_fp_top!=fp_before||ai_tele_attack_bad)failed=25;
    ai_tele_attack_handler=0;MEM32(0x50622C)=saved_seed;
    printf("%s Teleporter attack adapter: native target/health/action gates, both follow-ups, wrapper flags, cooldown, retirement, stack/FPU; clock/controller/base terminals substituted (%d)\n",failed?"FAIL":"PASS",failed);
    raven_ai_mode_reset(decision);memset(&nav_fixture,0,sizeof(nav_fixture));
    memcpy(XBOX_PTR(manager),backup,sizeof(backup));
    for(unsigned i=0;i<5;++i)MEM32(globals[i])=saved[i];
    printf("%s HitAndRun lifecycle: attacker notification, native movement/state, target suspension, rejected movement, retired owner/target, player exclusion, facing once without retargeting, deadline expiry; grid/facing terminals substituted (%d)\n",failed?"FAIL":"PASS",failed);
    printf("%s Teleporter event bridge: generated event setup, by-value destination, one-use ownership, native rejection fallback and stack/FPU balance; spatial terminal substituted (%d)\n",failed?"FAIL":"PASS",failed);
    return failed;
}
static int ai_query_fixture(uint32_t scratch) {
    const uint32_t pool=0x4C2AA8,manager=0x4DB2B8,sp=g_esp;
    unsigned char* backup=(unsigned char*)malloc(0xF950);
    if(!backup)return 1;
    memcpy(backup,XBOX_PTR(pool),0x3950);memcpy(backup+0x3950,XBOX_PTR(manager),0xC000);
    const uint32_t globals[]={0x4C63F8,0x4E7044,0x485878,0x48D8FC};
    uint32_t saved[4];for(unsigned i=0;i<4;++i)saved[i]=MEM32(globals[i]);
    memset(XBOX_PTR(manager),0,0xC000);memset(XBOX_PTR(scratch),0,0x1000);
    MEM32(0x4E7044)=1;MEM32(manager)=0x3D4B7C;
    MEM32(manager+0x185C)=511;MEM32(manager+0x1018)=31;
    MEM32(0x485878)=MEM32(0x48D8FC)=0;
    MEM32(manager+0xA188+0x21*64)=31; // Fixture scene membership, actor class0.
    for(unsigned i=0;i<5;++i) {
        uint32_t entity=scratch+i*0x200;
        MEM32(entity+0x1C)=0x400+i;MEM32(manager+4+i*4)=entity;
        MEM32(manager+0x105C+i*4)=0x400+i;
    }
    MEM32(0x4C63F8)=1;ai_call(pool,0xA2880,NULL,0,0);
    uint32_t handles[5]={0},baseline[5]={0};int failed=0;
    unsigned count=raven_ai_protect_candidates(scratch+0x800,baseline,5);
    unsigned bits=0;for(unsigned i=0;i<count;++i)if(baseline[i]>=0x400&&baseline[i]<0x404)bits|=1u<<(baseline[i]-0x400);
    if(count!=4||bits!=15)failed=1;
    count=raven_ai_protect_candidates(scratch+0x800,handles,2);
    if(count!=2||handles[0]!=baseline[0]||handles[1]!=baseline[1])failed=2;
    // Exercise real native attribute filtering, not a replaced query method.
    MEM32(manager+0xA188+1*64)=1;
    MEM32(manager+0xA188+0x1C*64)=2;
    MEM32(manager+0xA188+0x1D*64)=4;
    count=raven_ai_protect_candidates(scratch+0x800,handles,5);
    if(count!=1||handles[0]!=0x403)failed=3;
    for(unsigned i=0;i<3;++i)
        if(MEM8(pool+0x50+i*0x304)||MEM8(pool+0x1920+i*0x1014))failed=4;
    for(unsigned i=0;i<3;++i)MEM8(pool+0x1920+i*0x1014)=1;
    if(raven_ai_protect_candidates(scratch+0x800,handles,5)||MEM8(pool+0x50))failed=5;
    for(unsigned i=0;i<3;++i)MEM8(pool+0x1920+i*0x1014)=0;
    if(raven_ai_protect_candidates(scratch+0x800,handles,5)!=1)failed=6;
    for(unsigned i=0;i<3;++i)MEM8(pool+0x50+i*0x304)=1;
    if(raven_ai_protect_candidates(scratch+0x800,handles,5)||g_esp!=sp)failed=7;
    for(unsigned i=0;i<3;++i)MEM8(pool+0x50+i*0x304)=0;
    MEM32(manager+0xA188+1*64)=MEM32(manager+0xA188+0x1C*64)=MEM32(manager+0xA188+0x1D*64)=0;
    MEM32(scratch+0xC00)=0x2E6B0;
    raven_ai_mode_config owner;
    for(unsigned i=0;i<5;++i) {
        uint32_t entity=scratch+i*0x200;
        MEM32(entity)=scratch+0xC00;MEM32(entity+0x18)=2;
        MEMF(entity+0x240)=i?100.0f:0.0f;
        raven_ai_mode_config config={entity,0x400+i,(i==1||i==4)?7:8,0.5f,4};
        raven_ai_mode_begin(scratch+0xD00+i*0x20,&config);
    }
    uint32_t owner_decision=scratch+0xD80;
    raven_ai_mode_read(owner_decision,scratch+0x800,0x404,&owner);
    uint32_t expected=0;for(unsigned i=0;i<4&&!expected;++i)if(baseline[i]==0x402||baseline[i]==0x403)expected=baseline[i];
    uint32_t selected=raven_ai_protect_refresh(owner_decision,&owner);
    if(selected!=expected)failed=8;
    if(selected>=0x402&&selected<=0x403) {
        MEMF(scratch+(selected-0x400)*0x200+0x240)=0;
        if(raven_ai_protect_refresh(owner_decision,&owner)!=selected)failed=9;
        MEM32(manager+0x105C+(selected-0x400)*4)+=512;
        uint32_t replacement=raven_ai_protect_refresh(owner_decision,&owner);
        if(replacement!=(selected==0x402?0x403:0x402))failed=10;
    }
    const uint32_t game_table=MEM32(0x498E88),game_flag=MEM32(0x49954C);
    MEM32(0x498E88)=scratch+0xE00;MEM32(0x49954C)=game_flag|1;
    ai_party_fixture_token=scratch+0xF80;MEM32(scratch+0xEE0)=ai_party_fixture_token;
    ai_party_fixture_count=4;ai_party_fixture_failed=0;
    MEM32(owner_decision+0x10)=owner.actor;
    for(unsigned i=0;i<4;++i) {
        uint32_t entity=scratch+i*0x200;
        ai_party_fixture_handles[i]=0x400+i;MEM32(manager+0x105C+i*4)=0x400+i;
        MEMF(entity+0x20)=(float)(10+i*10);MEMF(entity+0x24)=MEMF(entity+0x28)=0;
        MEMF(entity+0x240)=100;MEM8(entity+0x334)=0;
    }
    MEMF(owner.actor+0x20)=MEMF(owner.actor+0x24)=MEMF(owner.actor+0x28)=0;
    if(ai_party_threat(owner_decision,&owner)!=0x400)failed=11;
    MEMF(scratch+0x240)=0;MEM8(scratch+0x200+0x334)=1;
    if(ai_party_threat(owner_decision,&owner)!=0x402)failed=12;
    MEMF(scratch+0x400+0x28)=100;
    if(ai_party_threat(owner_decision,&owner)!=0x403)failed=13;
    MEMF(scratch+0x400+0x28)=0;MEMF(scratch+0x600+0x20)=30;
    if(ai_party_threat(owner_decision,&owner)!=0x402)failed=14;
    ai_party_fixture_handles[2]=0x403;ai_party_fixture_handles[3]=0x402;
    if(ai_party_threat(owner_decision,&owner)!=0x403)failed=15;
    MEM32(manager+0x105C+3*4)=0x603;
    if(ai_party_threat(owner_decision,&owner)!=0x402)failed=16;
    ai_party_fixture_count=0;
    if(ai_party_threat(owner_decision,&owner)||ai_party_fixture_failed)failed=17;
    ai_party_fixture_token=0;MEM32(0x498E88)=game_table;MEM32(0x49954C)=game_flag;
    for(unsigned i=0;i<5;++i)raven_ai_mode_reset(scratch+0xD00+i*0x20);
    memcpy(XBOX_PTR(pool),backup,0x3950);memcpy(XBOX_PTR(manager),backup+0x3950,0xC000);
    for(unsigned i=0;i<4;++i)MEM32(globals[i])=saved[i];free(backup);
    printf("%s Protect native query/pairing and threat selection: actual class/source exclusion, attribute filters, pool cleanup, opposite-mode pairing, nearest3D party member, dead/AI/stale exclusions, stable ties and empty party; party enumeration terminal substituted (%d)\n",failed?"FAIL":"PASS",failed);
    return failed;
}
static int ai_protect_update_fixture(uint32_t scratch) {
    const uint32_t manager=0x4DB2B8;
    const uint32_t globals[]={0x4E7044,0x485878,0x48D8FC,0x498E88,0x49954C,0x4A0548,0x4B2FFC};
    uint32_t saved[7];for(unsigned i=0;i<7;++i)saved[i]=MEM32(globals[i]);
    unsigned char backup[0x1860];memcpy(backup,XBOX_PTR(manager),sizeof(backup));
    memset(XBOX_PTR(manager),0,sizeof(backup));memset(XBOX_PTR(scratch),0,0x1000);
    uint32_t actor=scratch,partner=scratch+0x400,threat=scratch+0x800,decision=scratch+0xA00;
    MEM32(0x4E7044)=1;MEM32(0x485878)=MEM32(0x48D8FC)=0;
    MEM32(manager)=0x3D4B7C;MEM32(manager+0x185C)=511;MEM32(manager+0x1018)=7;
    for(unsigned i=0;i<3;++i) {
        uint32_t entity=scratch+i*0x400;
        MEM32(entity)=scratch+0x200;MEM32(entity+0x18)=2;MEM32(entity+0x1C)=0x400+i;
        MEMF(entity+0x240)=100;MEM32(manager+4+i*4)=entity;MEM32(manager+0x105C+i*4)=0x400+i;
    }
    MEM32(scratch+0x200)=0x2E6B0;MEM32(decision+0x10)=actor;
    MEMF(partner+0x20)=300;MEMF(threat+0x20)=100;
    MEM32(0x498E88)=scratch+0xC00;MEM32(0x49954C)=saved[4]|1;
    ai_party_fixture_token=scratch+0xF80;MEM32(scratch+0xCE0)=ai_party_fixture_token;
    ai_party_fixture_handles[0]=0x402;ai_party_fixture_count=1;ai_party_fixture_failed=0;
    raven_ai_mode_config c={actor,0x400,7,0.5f,4},p={partner,0x401,8,0.5f,4},owner,other;
    raven_ai_mode_begin(decision,&c);raven_ai_mode_begin(scratch+0xFC0,&p);
    raven_ai_mode_read(decision,actor,0x400,&owner);raven_ai_mode_read(scratch+0xFC0,partner,0x401,&other);
    raven_ai_protect_bind(decision,&owner,scratch+0xFC0,&other);
    const uint32_t sp=g_esp,ax=g_eax,bx=g_ebx,cx=g_ecx,dx=g_edx,si=g_esi,di=g_edi,bp=g_ebp,seh=g_seh_ebp;
    const int top=g_fp_top,cmp=g_fp_cmp;const unsigned cc=g_fp_cc;
    double floats[8];memcpy(floats,g_fp_stack,sizeof(floats));int failed=0;
    if(!raven_ai_protect_update(decision)||MEM32(decision+8)!=5||MEMF(decision+0x34)!=160||
       MEMF(actor+0x20)!=0||ai_party_fixture_failed)failed=1;
    if(g_esp!=sp||g_eax!=ax||g_ebx!=bx||g_ecx!=cx||g_edx!=dx||g_esi!=si||g_edi!=di||g_ebp!=bp||
       g_seh_ebp!=seh||g_fp_top!=top||g_fp_cmp!=cmp||g_fp_cc!=cc||memcmp(floats,g_fp_stack,sizeof(floats)))failed=2;
    // Dead partner means no movement; the retained pairing is still valid.
    MEMF(partner+0x240)=0;MEM32(decision+8)=0;MEMF(decision+0x34)=0;
    if(raven_ai_protect_update(decision)||MEM32(decision+8)!=0||MEMF(decision+0x34)!=0)failed=3;
    c.mode=8;raven_ai_mode_begin(decision,&c);
    p.mode=7;raven_ai_mode_begin(scratch+0xFC0,&p);
    raven_ai_mode_read(decision,actor,0x400,&owner);raven_ai_mode_read(scratch+0xFC0,partner,0x401,&other);
    raven_ai_protect_bind(decision,&owner,scratch+0xFC0,&other);
    MEMF(partner+0x240)=100;
    if(raven_ai_protect_update(decision)||MEM32(decision+8)!=0)failed=4;
    c.mode=6;p.mode=6;raven_ai_mode_begin(decision,&c);raven_ai_mode_begin(scratch+0xFC0,&p);
    raven_ai_mode_read(decision,actor,0x400,&owner);raven_ai_mode_read(scratch+0xFC0,partner,0x401,&other);
    MEM32(scratch+0xFD0)=partner;
    if(raven_ai_pack_refresh(decision,&owner)!=0x400||
       raven_ai_pack_refresh(scratch+0xFC0,&other)!=0x400)failed=6;
    MEMF(actor+0x240)=0;
    if(raven_ai_pack_refresh(scratch+0xFC0,&other)!=0x401)failed=7;
    MEMF(actor+0x240)=100;MEM32(manager+0x1060)=0x601;
    if(raven_ai_pack_refresh(decision,&owner)!=0x400)failed=8;
    MEM32(0x4A0548)=scratch+0x600;MEM32(0x4B2FFC)=saved[6]|1;
    ai_pack_projection_token=scratch+0xF70;MEM32(scratch+0x608)=ai_pack_projection_token;
    ai_pack_projection_owner=decision;ai_pack_projection_bad=ai_pack_projection_fail=ai_pack_projection_retire=0;
    MEM32(decision+0x18)=0;MEMF(decision+0x51C)=10;
    ai_pack_leader(decision,&owner);
    raven_ai_pack_state phase;raven_ai_pack_world world;
    if(!raven_ai_pack_read(decision,&owner,&phase)||phase.phase!=1||phase.deadline!=20||
       MEMF(decision+0x34)!=307||MEMF(decision+0x3C)!=9||MEM32(decision+0x18)!=0x402||
       !raven_ai_pack_world_read(decision,&owner,&world)||world.target!=0x402||ai_pack_projection_bad)failed=10;
    MEM32(scratch+0x358)=0x34E40;
    ai_redirect_fixture_token=scratch+0xF60;MEM32(scratch+0x61C)=ai_redirect_fixture_token;
    if(!raven_ai_pack_update(decision)||MEMF(actor+0x1B4)!=307||MEMF(actor+0x1BC)!=9||
       !raven_ai_pack_read(decision,&owner,&phase)||phase.phase!=1)failed=13;
    MEMF(actor+0x20)=247;MEMF(actor+0x28)=9;
    if(!raven_ai_pack_update(decision)||!raven_ai_pack_read(decision,&owner,&phase)||phase.phase!=1)failed=14;
    MEMF(actor+0x20)=248;
    if(!raven_ai_pack_update(decision)||!raven_ai_pack_read(decision,&owner,&phase)||phase.phase!=3||phase.deadline!=10.5f)failed=15;
    ai_pack_attack_fixture_owner=decision;ai_pack_attack_fixture_calls=ai_pack_attack_fixture_bad=0;
    MEMF(decision+0x51C)=10.25f;
    if(raven_ai_pack_update(decision)||!raven_ai_pack_read(decision,&owner,&phase)||phase.phase!=3||ai_pack_attack_fixture_calls!=1)failed=16;
    MEMF(decision+0x51C)=10.5f;
    if(raven_ai_pack_update(decision)||!raven_ai_pack_read(decision,&owner,&phase)||phase.phase||phase.deadline!=20.5f||
       ai_pack_attack_fixture_calls!=2||ai_pack_attack_fixture_bad)failed=17;
    phase.phase=1;raven_ai_pack_publish(decision,&owner,&phase);MEMF(threat+0x240)=0;
    if(raven_ai_pack_update(decision)||!raven_ai_pack_read(decision,&owner,&phase)||phase.phase||phase.deadline!=11.5f)failed=18;
    ai_pack_attack_fixture_owner=0;ai_redirect_fixture_token=0;MEMF(threat+0x240)=100;
    MEMF(actor+0x20)=MEMF(actor+0x28)=0;
    raven_ai_mode_begin(decision,&c);raven_ai_mode_read(decision,actor,0x400,&owner);
    raven_ai_pack_refresh(decision,&owner);MEM32(decision+0x18)=0;MEMF(decision+0x51C)=30;
    ai_pack_projection_fail=1;MEMF(decision+0x34)=123;ai_pack_leader(decision,&owner);
    if(!raven_ai_pack_read(decision,&owner,&phase)||phase.phase||phase.deadline!=30.3f||MEMF(decision+0x34)!=123)failed=11;
    ai_pack_projection_fail=0;ai_pack_projection_retire=1;MEMF(decision+0x51C)=31;
    ai_pack_leader(decision,&owner);
    if(raven_ai_pack_read(decision,&owner,&phase)||MEMF(decision+0x34)!=123)failed=12;
    ai_pack_projection_token=0;
    raven_ai_mode_config stale_owner=owner;raven_ai_mode_begin(decision,&c);
    if(raven_ai_pack_refresh(decision,&stale_owner))failed=9;
    raven_ai_mode_read(decision,actor,0x400,&owner);MEM32(manager+0x1060)=0x401;
    phase.phase=1;phase.deadline=0;raven_ai_pack_publish(decision,&owner,&phase);
    phase.phase=3;raven_ai_pack_publish(scratch+0xFC0,&other,&phase);
    MEMF(decision+0x51C)=40;uint32_t contact_handle=0x401;
    ai_call(decision,0x105BE0,&contact_handle,1,0);
    if(!raven_ai_pack_read(decision,&owner,&phase)||phase.phase!=3||phase.deadline!=40.5f||g_esp!=sp)failed=19;
    if((ai_call(decision,0x105850,NULL,0,0)&255)||
       !raven_ai_pack_read(decision,&owner,&phase)||phase.phase||phase.deadline!=45||g_esp!=sp)failed=20;
    if(raven_ai_pack_interrupt_guest(decision))failed=21;
    raven_ai_mode_reset(decision);raven_ai_mode_reset(scratch+0xFC0);
    if(raven_ai_protect_update(decision)||MEM32(decision+8)!=0)failed=5;
    ai_party_fixture_token=0;memcpy(XBOX_PTR(manager),backup,sizeof(backup));
    for(unsigned i=0;i<7;++i)MEM32(globals[i])=saved[i];
    printf("%s Protect/Pack native adapters: ownership, leader selection/projection, follower native reset/redirect, strict60-unit threshold, engagement ABI/deadline and dead-target retry; party/projection/grid-threshold/engagement terminals substituted (%d)\n",failed?"FAIL":"PASS",failed);
    return failed;
}
static int ai_definition_fixture(uint32_t scratch) {
    uint32_t root=scratch,attr=scratch+0x80,definition=scratch+0x400,sp=g_esp;
    memset((void*)XBOX_PTR(scratch),0,0x500);raven_ai_definition_reset(definition);
    MEM32(root+0x54)=root+0x2C;int failed=0;
    raven_ai_definition_capture(definition,root);
    if(raven_ai_definition_teleporter(definition))failed=1;
    strcpy((char*)XBOX_PTR(scratch+0x100),"aiclasstype");
    uint32_t args[2]={scratch+0x100,2};ai_call(attr+4,0x125DA0,args,2,0);
    MEM32(root+0x54)=attr;MEM32(attr+0x28)=root+0x2C;
    MEM32(attr+0x14)=scratch+0x180;MEM32(attr+0x1C)=1;
    strcpy((char*)XBOX_PTR(scratch+0x180),"teleporter");
    raven_ai_definition_capture(definition,root);
    if(!raven_ai_definition_teleporter(definition))failed=2;
    MEM8(scratch+0x180)=0;MEM32(root+0x54)=root+0x2C;
    raven_ai_definition_capture(definition,root);
    if(!raven_ai_definition_teleporter(definition))failed=3;
    MEM32(root+0x54)=attr;raven_ai_definition_capture(definition,root);
    if(raven_ai_definition_teleporter(definition))failed=4;
    strcpy((char*)XBOX_PTR(scratch+0x180),"genericranged");
    raven_ai_definition_capture(definition,root);
    if(raven_ai_definition_teleporter(definition)||g_esp!=sp)failed=5;
    ai_call(attr+4,0x125890,NULL,0,0);raven_ai_definition_reset(definition);
    printf("%s Teleporter definition: native attribute/symbol ABI, owned classification, missing/empty distinction and stock-class exclusion (%d)\n",failed?"FAIL":"PASS",failed);
    return failed;
}
int raven_ai_mode_native_fixture(uint32_t scratch) {
    uint32_t actor=scratch,bag=scratch+0x100,table=scratch+0x200,decision=scratch+0x300;
    memset((void*)XBOX_PTR(scratch),0,0x400);
    ai_fixture.token=scratch+0x380;ai_fixture.bag=bag;ai_fixture.actor=actor;ai_fixture.text=scratch+0x240;
    MEM32(bag)=table;MEM32(table+0x10)=ai_fixture.token;
    const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx,seh=g_seh_ebp;
    const int top=g_fp_top;double floats[8];memcpy(floats,g_fp_stack,sizeof(floats));
    int failed=0;raven_ai_mode_config c;
    for(unsigned variant=0;variant<4;++variant) {
        ai_fixture.variant=variant;ai_fixture.calls=0;MEM32(actor+0x1C)=0x201;
        raven_ai_mode_capture(decision,actor,bag);
        int found=raven_ai_mode_read(decision,actor,0x201,&c);
        if(found!=(variant==1||variant==2)||ai_fixture.calls!=(variant?3u:1u))failed=1;
        if(found&&(c.mode!=6||c.patrol_speed!=(variant==1?0.5f:0.75f)||c.run_time!=(variant==1?4.0f:7.5f)))failed=1;
        if(g_esp!=sp||g_eax!=ax||g_ecx!=cx||g_edx!=dx||g_seh_ebp!=seh||
           g_fp_top!=top||memcmp(floats,g_fp_stack,sizeof(floats)))failed=1;
    }
    ai_fixture.variant=1;MEM32(actor+0x1C)=0x201;raven_ai_mode_capture(decision,actor,bag);
    uint32_t definition=scratch+0x800;
    raven_ai_definition_class(definition,"teleporter");MEM32(actor+0x2D8)=definition;
    raven_ai_mode_capture(decision,actor,bag);
    if(!raven_ai_mode_read(decision,actor,0x201,&c)||!c.teleporter||c.mode)failed=1;
    raven_ai_definition_reset(definition);MEM32(actor+0x2D8)=0;
    raven_ai_mode_capture(decision,actor,0);
    if(raven_ai_mode_read(decision,actor,0x201,&c))failed=1;
    failed|=ai_fixture.failed;memset(&ai_fixture,0,sizeof(ai_fixture));raven_ai_mode_reset(decision);
    printf("%s native AI capture: property ABI, default/overridden values, missing properties, actor generation change and register/FPU/SEH preservation; property terminal substituted\n",failed?"FAIL":"PASS");
    memset((void*)XBOX_PTR(scratch),0,0x400);
    nav_fixture.token=scratch+0x380;nav_fixture.grid=bag;nav_fixture.actor=actor;nav_fixture.decision=decision;
    MEM32(actor+0x1C)=0x201;MEM32(bag)=table;
    MEM32(table+0x20)=nav_fixture.token+4;MEM32(table+0x24)=nav_fixture.token;
    raven_ai_mode_config initial={actor,0x201,1,0.5f,4};raven_ai_point next;
    for(int retire=0;retire<2;++retire) {
        nav_fixture.retire=retire;nav_fixture.projections=nav_fixture.tests=0;
        raven_ai_mode_begin(decision,&initial);raven_ai_mode_read(decision,actor,0x201,&c);
        ai_build_route(decision,&c,bag);
        int found=raven_ai_wander_take(decision,&c,&next);
        if(found!=!retire||nav_fixture.projections!=2||nav_fixture.tests!=128||g_esp!=sp)failed=1;
        if(found&&(next.x!=0||next.y!=280||next.z!=7))failed=1;
    }
    failed|=nav_fixture.failed;memset(&nav_fixture,0,sizeof(nav_fixture));raven_ai_mode_reset(decision);
    g_esp=sp;g_eax=ax;g_ecx=cx;g_edx=dx;g_seh_ebp=seh;
    g_fp_top=top;memcpy(g_fp_stack,floats,sizeof(floats));
    printf("%s native wandering grid adapter: XML1 slots20/24, two projections, 128 point tests, route ownership and retirement; grid terminals substituted\n",failed?"FAIL":"PASS");
    memset(XBOX_PTR(scratch),0,0x1000);actor=scratch;decision=scratch+0x500;
    MEM32(actor+0x1C)=0x201;MEM32(decision+0x10)=actor;
    initial.actor=actor;initial.handle=0x201;initial.mode=1;initial.patrol_speed=0.75f;
    raven_ai_mode_begin(decision,&initial);raven_ai_mode_read(decision,actor,0x201,&c);
    raven_ai_wander_route route={0};route.current=8;route.valid[0]=1;
    route.points[0].x=320;route.points[0].y=280;route.points[0].z=7;
    raven_ai_wander_publish(decision,&c,&route);
    // Exercise the actual hooked generated idle entry and stock destination /
    // state-transition routines. No renderer, world tick or OS input runs.
    g_ecx=decision;PUSH32(g_esp,0);PUSH32(g_esp,0);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x0010C8D0u,sub_0010C8D0);
    if(g_esp!=sp||(g_eax&255)||MEM32(decision+8)!=5||MEMF(decision+0x34)!=320||
       MEMF(decision+0x38)!=280||MEMF(decision+0x3C)!=7||MEMF(decision+0x1B0)!=0.75f||
       MEM32(actor+0x1B4)!=0x800000)failed=1;
    // Existing XML1 moving-state guard refuses a new destination; imported
    // route selection must not bypass it or force a different game state.
    MEMF(decision+0x34)=123;
    if(!raven_ai_wander_idle(decision)||MEMF(decision+0x34)!=123||MEM32(decision+8)!=5)failed=1;
    MEM32(actor+0x1C)+=512;
    if(raven_ai_wander_idle(decision))failed=1;
    raven_ai_mode_reset(decision);
    g_esp=sp;g_eax=ax;g_ecx=cx;g_edx=dx;g_seh_ebp=seh;
    g_fp_top=top;memcpy(g_fp_stack,floats,sizeof(floats));
    printf("%s native wandering idle: hooked entry, real destination/state transition, patrol speed, stock movement rejection and stale actor bypass\n",failed?"FAIL":"PASS");
    // Native full-handle validation, including both independent target slots.
    const uint32_t manager=0x4DB2B8,manager_flag=MEM32(0x4E7044);
    unsigned char saved_manager[0x1860];
    memcpy(saved_manager,XBOX_PTR(manager),sizeof(saved_manager));
    memset(XBOX_PTR(manager),0,sizeof(saved_manager));
    MEM32(0x4E7044)=1;MEM32(manager)=0x3D4B7C;
    MEM32(manager+0x185C)=511;MEM32(manager+0x1060)=0x201;MEM32(manager+0x1018)=2;
    MEM32(actor+0x1C)=0x202;initial.handle=0x202;
    raven_ai_mode_begin(decision,&initial);raven_ai_mode_read(decision,actor,0x202,&c);
    raven_ai_wander_publish(decision,&c,&route);
    const uint32_t target_slots[2]={0x144,0x18};
    for(int i=0;i<2;++i) {
        MEM32(decision+0x144)=0;MEM32(decision+0x18)=0;MEM32(decision+target_slots[i])=0x201;
        MEMF(decision+0x34)=123;MEM32(decision+8)=0;
        if(raven_ai_wander_idle(decision)||MEMF(decision+0x34)!=123||MEM32(decision+8)!=0||
           MEM32(decision+target_slots[i])!=0x201)failed=1;
        // Same pool index, wrong generation must permit wandering again.
        MEM32(decision+target_slots[i])=0x401;
        if(!raven_ai_wander_idle(decision)||MEM32(decision+0x144)||MEM32(decision+0x18)||
           MEM32(decision+8)!=5)failed=1;
    }
    memcpy(XBOX_PTR(manager),saved_manager,sizeof(saved_manager));MEM32(0x4E7044)=manager_flag;
    // Full initialization wrapper: real singleton lookup and combat-mode
    // setter; only the two grid virtual terminals are substituted.
    const uint32_t grid=0x4A0548,grid_table=MEM32(grid),grid_flag=MEM32(0x4B2FFC);
    table=scratch+0xE00;
    nav_fixture.token=scratch+0xE80;nav_fixture.grid=grid;nav_fixture.actor=actor;nav_fixture.decision=decision;
    MEM32(table+0x20)=nav_fixture.token+4;MEM32(table+0x24)=nav_fixture.token;
    MEM32(grid)=table;MEM32(0x4B2FFC)=grid_flag|1;
    raven_ai_mode_begin(decision,&initial);raven_ai_mode_read(decision,actor,initial.handle,&c);
    g_eax=ax;g_ecx=cx;g_edx=dx;g_seh_ebp=seh;
    raven_ai_wander_initialize(decision);
    if(nav_fixture.failed||nav_fixture.projections!=2||nav_fixture.tests!=128||
       MEM32(decision+0x468)!=2||MEM32(decision+0x20)!=1||
       !raven_ai_wander_take(decision,&c,&next)||next.y!=280||
       g_esp!=sp||g_eax!=ax||g_ecx!=cx||g_edx!=dx||g_seh_ebp!=seh)failed=1;
    MEM32(grid)=grid_table;MEM32(0x4B2FFC)=grid_flag;
    memset(&nav_fixture,0,sizeof(nav_fixture));raven_ai_mode_reset(decision);
    g_esp=sp;g_eax=ax;g_ecx=cx;g_edx=dx;g_seh_ebp=seh;
    g_fp_top=top;memcpy(g_fp_stack,floats,sizeof(floats));
    printf("%s wandering target handoff and initialization: real handle validation, both target slots, stale generations, singleton lookup and combat-mode setup; grid terminals substituted\n",failed?"FAIL":"PASS");
    failed|=ai_query_fixture(scratch);
    failed|=ai_protect_command_fixture(scratch);
    failed|=ai_protect_update_fixture(scratch);
    failed|=ai_hit_run_fixture(scratch);
    failed|=ai_definition_fixture(scratch);
    return failed;
}
