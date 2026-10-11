#include "engine/actors/raven_ai_modes.h"
#include <mutex>
#include <unordered_map>
#include <cmath>
#include <cfloat>
extern "C" int raven_ai_teleport_step(raven_ai_teleport_state* state,float now,
    int can_teleport,int can_attack,int aligned,int destination_phase,float random,
    raven_ai_teleport_step_result* result) {
    if(!state||!result||state->phase<0||state->phase>2||destination_phase<0||destination_phase>2||
       !std::isfinite(now)||!std::isfinite(state->deadline)||!std::isfinite(state->started))return 0;
    auto next=*state;raven_ai_teleport_step_result output={};
    if(!next.phase) {
        if(now>next.deadline) {
            if(can_teleport) {
                if(!std::isfinite(random)||random<0||random>1)return 0;
                // Native114EFF..114F28: (RNG*4+5)/3, with divisor3
                // installed by the Teleporter handler constructor128DE2.
                next.deadline=now+(random*4.f+5.f)/3.f;next.started=now;
                if(!std::isfinite(next.deadline))return 0;
                next.phase=destination_phase;output.input_bits=0x180;
                output.delegate_base=output.write_destination=1;
            }
        } else output.delegate_base=1;
    } else if(can_attack&&aligned) {
        if(next.phase==2) {
            // Native115155 clears retreat phase before emitting power1.
            next.phase=0;output.input_bits=0x90;
        } else {
            if(!std::isfinite(random)||random<0||random>1)return 0;
            if(now-1.f>next.started)next.phase=0;
            // Current and edge words both receive this mask. Do not convert
            // these into host inputs or bypass native action eligibility.
            output.input_bits=random>0.5f?0x20:0x10;
        }
    }
    *state=next;*result=output;return 1;
}
extern "C" int raven_ai_teleport_destination(const raven_ai_point* origin,
    const raven_ai_point* target,const raven_ai_point* facing,
    raven_ai_point* destination,int* phase) {
    if(!origin||!destination||!phase)return 0;
    auto finite=[](const raven_ai_point& p) {
        return std::isfinite(p.x)&&std::isfinite(p.y)&&std::isfinite(p.z);
    };
    if(!finite(*origin))return 0;
    raven_ai_point next;int next_phase=0;
    if(target) {
        if(!finite(*target))return 0;
        const double x=double(target->x)-origin->x,y=double(target->y)-origin->y,
                     z=double(target->z)-origin->z,squared=x*x+y*y+z*z;
        // Native121860 uses the full 3D vector and FLT_MIN, not a planar
        // distance. A degenerate vector copies the target (115007) without
        // setting a follow-up phase; never synthesize an arbitrary direction.
        if(squared<FLT_MIN)next=*target;
        else {
            double length=std::sqrt(squared);
            // Original constants: 490DB8=80,494094=180,48F6B8=20.
            // At exactly80 the native ordered comparison chooses approach.
            next_phase=length<80.0?2:1;
            double scale=(next_phase==2?-180.0:length-20.0)/length;
            next={float(origin->x+x*scale),float(origin->y+y*scale),float(origin->z+z*scale)};
        }
    } else {
        if(!facing||!finite(*facing))return 0;
        // The existing engine stores rotation as roll,pitch,yaw. Native
        // 16B430 supplies the forward vector; roll does not affect it.
        double horizontal=std::cos(facing->y);
        next={float(origin->x+80.0*std::cos(facing->z)*horizontal),
              float(origin->y+80.0*std::sin(facing->z)*horizontal),
              float(origin->z-80.0*std::sin(facing->y))};
    }
    if(!finite(next))return 0;
    *destination=next;*phase=next_phase;return 1;
}
extern "C" int raven_ai_hit_run_destination(const raven_ai_point* origin,
    const raven_ai_point* target,raven_ai_point_test test,void* context,raven_ai_point* out) {
    if(!origin||!target||!test||!out)return 0;
    const raven_ai_point start=*origin;
    if(!std::isfinite(start.x)||!std::isfinite(start.y)||!std::isfinite(start.z)||
       !std::isfinite(target->x)||!std::isfinite(target->y))return 0;
    const double x=double(start.x)-target->x,y=double(start.y)-target->y;
    if(!(x*x+y*y>=FLT_MIN))return 0;
    const double yaw=std::atan2(y,x);
    // Native114413..114443 initializes these seven yaw offsets;114499
    // adds them to the away-facing direction. Do not invent a radial fan.
    static const float offsets[7]={0,0,0,0,0,1,-1};
    raven_ai_point best=start;double best_squared=0;
    for(int ray=0;ray<7;++ray) {
        const double angle=yaw+offsets[ray];
        const float dx=float(std::cos(angle))*40.f,dy=float(std::sin(angle))*40.f;
        raven_ai_point current=start,previous=start;int steps=0;
        // Native1144F2 advances all coordinates before testing. On both
        // obstacle rejection and the eight-step cap it keeps the PREVIOUS
        // point, not the last proposed point (114512/1145D2).
        for(;steps<8;++steps) {
            previous=current;current.x+=dx;current.y+=dy;
            if(!test(context,&current))break;
        }
        const double bx=double(previous.x)-start.x,by=double(previous.y)-start.y;
        const double squared=bx*bx+by*by;
        if(squared>best_squared){best=previous;best_squared=squared;}
        // Earlier directions are preferred once sufficient clearance was
        // found. A globally longest-path search would change the behavior.
        if(steps-ray/2+4>=8)break;
    }
    // Retail114633 compares squared displacement to float119 at4A4738.
    if(!(best_squared>119.0))return 0;
    *out=best;return 1;
}
extern "C" void raven_ai_protect_plan(const raven_ai_protect_input* in,raven_ai_protect_result* out) {
    if(!out)return;
    *out={};if(!in||!in->partner_alive||!in->threat_alive)return;
    // XML2 116310: planar direction from the threat towards the protected
    // actor. World/handle/type eligibility belongs to the native adapter.
    float dx=in->partner.x-in->threat.x,dy=in->partner.y-in->threat.y;
    double length=std::sqrt(double(dx)*dx+double(dy)*dy);
    if(!(length>=std::sqrt(double(FLT_MIN))))return;
    dx=float(dx/length);dy=float(dy/length);
    double velocity=std::hypot(double(in->threat_velocity.x),double(in->threat_velocity.y));
    bool moving=velocity>=5.0;
    if(moving) {
        double towards=(in->threat_velocity.x/velocity)*dx+(in->threat_velocity.y/velocity)*dy;
        if(!(towards>=0))return;
    }
    float offset=moving?80.0f:60.0f;
    out->destination={in->threat.x+dx*offset,in->threat.y+dy*offset,in->threat.z};
    // Speed writes precede the distance gates in native1164A2/11658F.
    // Preserve those writes even if no new movement command is necessary.
    out->speed=moving?1.4f:1.0f;out->write_speed=1;out->write_speed_override=moving;
    auto distance=[](const raven_ai_point& a,const raven_ai_point& b) {
        double x=double(a.x)-b.x,y=double(a.y)-b.y,z=double(a.z)-b.z;
        return std::sqrt(x*x+y*y+z*z);
    };
    if(!(distance(in->actor,out->destination)>=40.0)||
       !(distance(in->current_destination,out->destination)>=40.0))return;
    out->action=(moving&&in->state==7)?2:1;
}
extern "C" void raven_ai_wander_build(raven_ai_wander_route* route,
    const raven_ai_point* home,const raven_ai_point* origin,
    raven_ai_point_test test,void* context) {
    if(!route)return;
    *route={};route->current=8;
    if(!home||!origin||!test)return;
    route->points[8]=*home;route->valid[8]=1;
    // XML2 115E90: test each axis separately in authored compass order.
    // Keep the last tested intermediate point, including when the eight-step
    // limit is reached. A radial endpoint/raycast would change this route.
    static const int dx[8]={0,1,1,1,0,-1,-1,-1};
    static const int dy[8]={1,1,0,-1,-1,-1,0,1};
    for(int i=0;i<8;++i) {
        raven_ai_point candidate=*origin,previous=*origin;
        int steps=0;
        for(;steps<8;++steps) {
            previous=candidate;candidate.x+=dx[i]*40.0f;
            if(!test(context,&candidate))break;
            previous=candidate;candidate.y+=dy[i]*40.0f;
            if(!test(context,&candidate))break;
        }
        if(steps>=2){route->points[i]=previous;route->valid[i]=1;}
    }
}
extern "C" int raven_ai_wander_next(raven_ai_wander_route* route,raven_ai_point* out) {
    if(!route||!out)return 0;
    // XML2 115DA0 advances before searching, and includes the ninth/home point.
    for(int i=0;i<9;++i) {
        route->current=(route->current+1)%9;
        if(route->valid[route->current]){*out=route->points[route->current];return 1;}
    }
    return 0;
}
namespace {
struct Owner {
    raven_ai_mode_config config; raven_ai_wander_route route={}; bool ready=false;
    uint32_t partner=0;
    raven_ai_pack_state pack={};
    raven_ai_retreat_state retreat={};
    raven_ai_teleport_runtime teleport={};
};
std::mutex mutex;std::unordered_map<uint32_t,Owner> owners;uint64_t next_epoch=0;
std::unordered_map<uint32_t,bool> teleporter_definitions;
raven_ai_pack_world pack_world={};uint32_t pack_leader_decision=0;uint64_t pack_leader_epoch=0;
void retire(uint32_t decision) {
    if(pack_leader_decision==decision) {
        pack_world.leader=0;pack_leader_decision=0;pack_leader_epoch=0;++pack_world.revision;
    }
    owners.erase(decision);
    for(const auto& entry:owners)if(entry.second.config.mode==6)return;
    // Never let a previous world's target survive the last pack owner.
    if(pack_world.leader||pack_world.target){pack_world.leader=pack_world.target=0;++pack_world.revision;}
}
bool matches(const Owner& current,const raven_ai_mode_config* requested) {
    return requested&&current.config.actor==requested->actor&&
        current.config.handle==requested->handle&&current.config.epoch==requested->epoch;
}
}
extern "C" void raven_ai_definition_class(uint32_t definition,const char* value) {
    if(!definition||!value)return;
    const char expected[]="teleporter";unsigned i=0;
    for(;expected[i]&&value[i];++i) {
        char c=value[i];if(c>='A'&&c<='Z')c=char(c-'A'+'a');
        if(c!=expected[i])break;
    }
    std::lock_guard<std::mutex> lock(mutex);
    // Existing class strings retain native selection. Only the new literal
    // is retained, outside CharacterDef's fixed native enum/table storage.
    if(!expected[i]&&!value[i])teleporter_definitions[definition]=true;
    else teleporter_definitions.erase(definition);
}
extern "C" void raven_ai_definition_reset(uint32_t definition) {
    std::lock_guard<std::mutex> lock(mutex);teleporter_definitions.erase(definition);
}
extern "C" int raven_ai_definition_teleporter(uint32_t definition) {
    std::lock_guard<std::mutex> lock(mutex);return teleporter_definitions.count(definition)!=0;
}
extern "C" void raven_ai_mode_begin(uint32_t decision,const raven_ai_mode_config* c) {
    std::lock_guard<std::mutex> lock(mutex);retire(decision);
    if(!decision||!c||!c->actor||!c->handle)return;
    // Only the missing numeric actor modes. XML1 combat-node aitype is an
    // unrelated existing string enum and never enters this registry.
    if(!c->teleporter&&c->mode!=1&&c->mode!=2&&c->mode!=6&&c->mode!=7&&c->mode!=8)return;
    Owner owner;owner.config=*c;owner.config.epoch=++next_epoch;
    owners.emplace(decision,owner);
}
extern "C" void raven_ai_mode_reset(uint32_t decision) {
    std::lock_guard<std::mutex> lock(mutex);retire(decision);
}
extern "C" int raven_ai_mode_read(uint32_t decision,uint32_t actor,uint32_t handle,raven_ai_mode_config* out) {
    if(!out)return 0;
    std::lock_guard<std::mutex> lock(mutex);auto it=owners.find(decision);
    if(it==owners.end()||it->second.config.actor!=actor||it->second.config.handle!=handle)return 0;
    *out=it->second.config;return 1;
}
extern "C" int raven_ai_retreat_read(uint32_t decision,const raven_ai_mode_config* owner,raven_ai_retreat_state* out) {
    if(!out)return 0;
    std::lock_guard<std::mutex> lock(mutex);auto it=owners.find(decision);
    if(it==owners.end()||!matches(it->second,owner)||it->second.config.mode!=2)return 0;
    *out=it->second.retreat;return 1;
}
extern "C" int raven_ai_teleport_read(uint32_t decision,const raven_ai_mode_config* owner,raven_ai_teleport_runtime* out) {
    if(!out)return 0;
    std::lock_guard<std::mutex> lock(mutex);auto it=owners.find(decision);
    if(it==owners.end()||!matches(it->second,owner)||!it->second.config.teleporter)return 0;
    *out=it->second.teleport;return 1;
}
extern "C" int raven_ai_teleport_publish(uint32_t decision,const raven_ai_mode_config* owner,const raven_ai_teleport_runtime* next) {
    if(!next||next->state.phase<0||next->state.phase>2||!std::isfinite(next->state.deadline)||
       !std::isfinite(next->state.started)||(next->pending!=0&&next->pending!=1)||
       (next->pending&&(!std::isfinite(next->destination.x)||!std::isfinite(next->destination.y)||
                       !std::isfinite(next->destination.z))))return 0;
    std::lock_guard<std::mutex> lock(mutex);auto it=owners.find(decision);
    if(it==owners.end()||!matches(it->second,owner)||!it->second.config.teleporter||
       it->second.teleport.revision!=next->revision)return 0;
    it->second.teleport=*next;++it->second.teleport.revision;return 1;
}
extern "C" int raven_ai_teleport_take(uint32_t decision,const raven_ai_mode_config* owner,raven_ai_point* out) {
    if(!out)return 0;
    std::lock_guard<std::mutex> lock(mutex);auto it=owners.find(decision);
    if(it==owners.end()||!matches(it->second,owner)||!it->second.config.teleporter||!it->second.teleport.pending)return 0;
    // Consume before native teleport/collision calls. Reentry cannot use
    // the same point twice or publish a snapshot preceding consumption.
    *out=it->second.teleport.destination;it->second.teleport.pending=0;
    ++it->second.teleport.revision;return 1;
}
extern "C" int raven_ai_retreat_publish(uint32_t decision,const raven_ai_mode_config* owner,const raven_ai_retreat_state* state) {
    if(!state||!std::isfinite(state->deadline)||(state->active!=0&&state->active!=1)||
       (state->active&&!state->target))return 0;
    std::lock_guard<std::mutex> lock(mutex);auto it=owners.find(decision);
    if(it==owners.end()||!matches(it->second,owner)||it->second.config.mode!=2)return 0;
    // No guest call while locked. A navigation/movement callback may retire
    // and recreate the same actor handle; the epoch rejects that old result.
    it->second.retreat=*state;return 1;
}
extern "C" uint32_t raven_ai_mode_find(uint32_t actor,uint32_t handle,raven_ai_mode_config* out) {
    if(!out)return 0;
    std::lock_guard<std::mutex> lock(mutex);uint32_t decision=0;
    for(const auto& item:owners)if(item.second.config.actor==actor&&item.second.config.handle==handle) {
        if(decision)return 0; // Do not choose arbitrarily during overlapping lifecycle state.
        decision=item.first;
    }
    if(decision)*out=owners.at(decision).config;return decision;
}
extern "C" int raven_ai_wander_publish(uint32_t decision,const raven_ai_mode_config* owner,
    const raven_ai_wander_route* route) {
    if(!route)return 0;
    std::lock_guard<std::mutex> lock(mutex);auto it=owners.find(decision);
    if(it==owners.end()||!matches(it->second,owner)||it->second.config.mode!=1)return 0;
    // Navigation calls can reenter lifecycle code. Never hold this mutex
    // across guest calls, or publish an old route into a reinitialized owner.
    it->second.route=*route;it->second.ready=true;return 1;
}
extern "C" int raven_ai_wander_take(uint32_t decision,const raven_ai_mode_config* owner,raven_ai_point* out) {
    std::lock_guard<std::mutex> lock(mutex);auto it=owners.find(decision);
    if(it==owners.end()||!matches(it->second,owner)||!it->second.ready)return 0;
    return raven_ai_wander_next(&it->second.route,out);
}
extern "C" int raven_ai_protect_bind(uint32_t decision,const raven_ai_mode_config* owner,
    uint32_t candidate_decision,const raven_ai_mode_config* candidate) {
    std::lock_guard<std::mutex> lock(mutex);
    auto current=owners.find(decision),other=owners.find(candidate_decision);
    if(current==owners.end()||other==owners.end()||!matches(current->second,owner)||
       !matches(other->second,candidate))return 0;
    int mode=current->second.config.mode;
    if((mode!=7&&mode!=8)||other->second.config.mode!=(mode==7?8:7))return 0;
    // XML2 116A97 stores only the candidate's full actor handle. Do not
    // retain a borrowed query result, or make this an implicitly reciprocal
    // relationship: the other actor runs its own native selection later.
    current->second.partner=other->second.config.handle;return 1;
}
extern "C" int raven_ai_protect_partner(uint32_t decision,const raven_ai_mode_config* owner,uint32_t* handle) {
    if(!handle)return 0;
    std::lock_guard<std::mutex> lock(mutex);auto current=owners.find(decision);
    if(current==owners.end()||!matches(current->second,owner)||
       (current->second.config.mode!=7&&current->second.config.mode!=8))return 0;
    // A retained handle may have expired since selection. Its validity and
    // actor type must be resolved by XML1 before dereferencing on each tick.
    *handle=current->second.partner;return 1;
}
extern "C" int raven_ai_pack_read(uint32_t decision,const raven_ai_mode_config* owner,raven_ai_pack_state* out) {
    if(!out)return 0;
    std::lock_guard<std::mutex> lock(mutex);auto it=owners.find(decision);
    if(it==owners.end()||!matches(it->second,owner)||it->second.config.mode!=6)return 0;
    *out=it->second.pack;return 1;
}
extern "C" int raven_ai_pack_publish(uint32_t decision,const raven_ai_mode_config* owner,const raven_ai_pack_state* state) {
    if(!state||(state->phase!=0&&state->phase!=1&&state->phase!=3))return 0;
    std::lock_guard<std::mutex> lock(mutex);auto it=owners.find(decision);
    if(it==owners.end()||!matches(it->second,owner)||it->second.config.mode!=6)return 0;
    it->second.pack=*state;return 1;
}
extern "C" int raven_ai_pack_contact(uint32_t decision,const raven_ai_mode_config* owner,
    uint32_t other_decision,const raven_ai_mode_config* other,float now) {
    std::lock_guard<std::mutex> lock(mutex);
    auto a=owners.find(decision),b=owners.find(other_decision);
    if(a==owners.end()||b==owners.end()||!matches(a->second,owner)||!matches(b->second,other)||
       a->second.config.mode!=6||b->second.config.mode!=6)return 0;
    // Native116090: contact with an engaging pack member advances a moving
    // member, in either direction. Both deadlines use the caller's time.
    // Idle pairs or two moving members do not independently start engagement.
    auto& first=a->second.pack;auto& second=b->second.pack;
    if(first.phase!=3&&second.phase!=3)return 0;
    int changed=0;
    if(second.phase==1){second={3,now+0.5f};changed=1;}
    if(first.phase==1){first={3,now+0.5f};changed=1;}
    return changed;
}
extern "C" int raven_ai_pack_interrupt(uint32_t decision,const raven_ai_mode_config* owner,float now) {
    std::lock_guard<std::mutex> lock(mutex);auto it=owners.find(decision);
    if(it==owners.end()||!matches(it->second,owner)||it->second.config.mode!=6||!it->second.pack.phase)return 0;
    // Native115CC0 clears only an active pack phase and defers it five seconds.
    // The native adapter delegates to the existing XML1 handler if inactive.
    it->second.pack={0,now+5.0f};return 1;
}
extern "C" int raven_ai_pack_world_read(uint32_t decision,const raven_ai_mode_config* owner,raven_ai_pack_world* out) {
    if(!out)return 0;
    std::lock_guard<std::mutex> lock(mutex);auto it=owners.find(decision);
    if(it==owners.end()||!matches(it->second,owner)||it->second.config.mode!=6)return 0;
    *out=pack_world;return 1;
}
extern "C" int raven_ai_pack_claim(uint32_t decision,const raven_ai_mode_config* owner,uint64_t revision) {
    std::lock_guard<std::mutex> lock(mutex);auto it=owners.find(decision);
    if(it==owners.end()||!matches(it->second,owner)||it->second.config.mode!=6||pack_world.revision!=revision)return 0;
    // XML2 update116BCE chooses the currently updating actor when the old
    // leader cannot participate. No map-order election or stored actor pointer.
    pack_world.leader=owner->handle;pack_leader_decision=decision;pack_leader_epoch=owner->epoch;
    ++pack_world.revision;return 1;
}
extern "C" int raven_ai_pack_launch(uint32_t decision,const raven_ai_mode_config* owner,
    uint64_t revision,uint32_t target,float deadline) {
    if(!target)return 0;
    std::lock_guard<std::mutex> lock(mutex);auto it=owners.find(decision);
    if(it==owners.end()||!matches(it->second,owner)||it->second.config.mode!=6||
       pack_world.revision!=revision||pack_leader_decision!=decision||pack_leader_epoch!=owner->epoch)return 0;
    // Publish the shared target and the leader's moving phase together after
    // native selection. A superseded leader must not redirect its followers.
    pack_world.target=target;it->second.pack={1,deadline};++pack_world.revision;return 1;
}
