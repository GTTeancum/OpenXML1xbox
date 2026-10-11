#include "engine/actors/raven_ai_modes.h"
#include <cstdio>
#include <initializer_list>
#include <cmath>
#include <limits>
static int teleport_test() {
    const uint32_t definition=0xA100;
    raven_ai_definition_class(definition,"TeLePoRtEr");
    if(!raven_ai_definition_teleporter(definition))return 119;
    raven_ai_definition_class(definition,nullptr);
    if(!raven_ai_definition_teleporter(definition))return 120;
    raven_ai_definition_class(definition,"genericranged");
    if(raven_ai_definition_teleporter(definition))return 121;
    raven_ai_definition_class(definition,"teleporter");raven_ai_definition_reset(definition);
    if(raven_ai_definition_teleporter(definition))return 122;
    raven_ai_point origin={10,20,30},target={40,20,30},out={};int phase=-1;
    if(!raven_ai_teleport_destination(&origin,&target,nullptr,&out,&phase)||
       phase!=2||out.x!=-170||out.y!=20||out.z!=30)return 100;
    target={90,20,30};
    if(!raven_ai_teleport_destination(&origin,&target,nullptr,&out,&phase)||
       phase!=1||out.x!=70||out.y!=20||out.z!=30)return 101;
    target={10,20,130};
    if(!raven_ai_teleport_destination(&origin,&target,nullptr,&out,&phase)||
       phase!=1||out.x!=10||out.y!=20||out.z!=110)return 102;
    // Arrival is20 units short along the full spatial direction, including
    // height. This guards against accidentally treating the search as2D.
    target={70,100,30};
    if(!raven_ai_teleport_destination(&origin,&target,nullptr,&out,&phase)||
       phase!=1||out.x!=58||out.y!=84||out.z!=30)return 103;
    target=origin;
    if(!raven_ai_teleport_destination(&origin,&target,nullptr,&out,&phase)||
       phase||out.x!=10||out.y!=20||out.z!=30)return 104;
    raven_ai_point facing={0,0,0};
    if(!raven_ai_teleport_destination(&origin,nullptr,&facing,&out,&phase)||
       phase||out.x!=90||out.y!=20||out.z!=30)return 105;
    facing={0,float(3.141592653589793/2),0};
    if(!raven_ai_teleport_destination(&origin,nullptr,&facing,&out,&phase)||
       phase||std::fabs(out.x-10)>0.0001||out.y!=20||std::fabs(out.z+50)>0.0001)return 106;
    out={123,456,789};phase=99;target.x=std::numeric_limits<float>::infinity();
    if(raven_ai_teleport_destination(&origin,&target,&facing,&out,&phase)||
       raven_ai_teleport_destination(&origin,nullptr,nullptr,&out,&phase)||
       out.x!=123||out.y!=456||out.z!=789||phase!=99)return 107;
    raven_ai_teleport_state state={};raven_ai_teleport_step_result step={};
    float unused=std::numeric_limits<float>::quiet_NaN();
    if(!raven_ai_teleport_step(&state,0,1,1,1,1,unused,&step)||
       !step.delegate_base||step.input_bits||step.write_destination)return 108;
    if(!raven_ai_teleport_step(&state,1,0,1,1,1,unused,&step)||
       step.delegate_base||step.input_bits||state.phase)return 109;
    if(!raven_ai_teleport_step(&state,1,1,1,1,2,1,&step)||
       state.phase!=2||state.deadline!=4||state.started!=1||
       step.input_bits!=0x180||!step.delegate_base||!step.write_destination)return 110;
    if(!raven_ai_teleport_step(&state,2,1,0,1,0,unused,&step)||step.input_bits||state.phase!=2)return 111;
    if(!raven_ai_teleport_step(&state,2,1,1,0,0,unused,&step)||step.input_bits||state.phase!=2)return 112;
    if(!raven_ai_teleport_step(&state,2,1,1,1,0,unused,&step)||step.input_bits!=0x90||state.phase)return 113;
    if(!raven_ai_teleport_step(&state,4,1,1,1,1,unused,&step)||!step.delegate_base||step.input_bits)return 114;
    if(!raven_ai_teleport_step(&state,5,1,1,1,1,0,&step)||state.phase!=1||step.input_bits!=0x180)return 115;
    if(!raven_ai_teleport_step(&state,6,1,1,1,0,0.5f,&step)||state.phase!=1||step.input_bits!=0x10)return 116;
    if(!raven_ai_teleport_step(&state,6.1f,1,1,1,0,0.6f,&step)||state.phase||step.input_bits!=0x20)return 117;
    state={1,10,9};step.input_bits=0x1234;
    if(raven_ai_teleport_step(&state,12,1,1,1,0,unused,&step)||
       state.phase!=1||step.input_bits!=0x1234)return 118;
    raven_ai_mode_config initial={0x10000,0x400,0,0.5f,4},owner;
    initial.teleporter=1;raven_ai_mode_begin(0x20000,&initial);
    if(!raven_ai_mode_read(0x20000,initial.actor,initial.handle,&owner))return 123;
    raven_ai_teleport_runtime snapshot={};
    if(!raven_ai_teleport_read(0x20000,&owner,&snapshot)||snapshot.pending)return 124;
    snapshot.pending=1;snapshot.destination={30,40,50};snapshot.state={1,12,9};
    if(!raven_ai_teleport_publish(0x20000,&owner,&snapshot)||
       raven_ai_teleport_publish(0x20000,&owner,&snapshot))return 125;
    if(!raven_ai_teleport_take(0x20000,&owner,&out)||out.x!=30||out.y!=40||out.z!=50||
       raven_ai_teleport_take(0x20000,&owner,&out))return 126;
    raven_ai_teleport_read(0x20000,&owner,&snapshot);
    if(snapshot.pending||snapshot.state.phase!=1||snapshot.state.deadline!=12)return 127;
    raven_ai_mode_begin(0x20000,&initial);
    if(raven_ai_teleport_publish(0x20000,&owner,&snapshot)||
       raven_ai_teleport_read(0x20000,&owner,&snapshot))return 128;
    raven_ai_mode_read(0x20000,initial.actor,initial.handle,&owner);
    if(!raven_ai_teleport_read(0x20000,&owner,&snapshot)||snapshot.state.phase||snapshot.pending)return 129;
    initial.teleporter=0;initial.mode=2;raven_ai_mode_begin(0x20000,&initial);
    raven_ai_mode_read(0x20000,initial.actor,initial.handle,&owner);
    if(raven_ai_teleport_read(0x20000,&owner,&snapshot))return 130;
    raven_ai_mode_reset(0x20000);
    puts("PASS Teleporter ownership: explicit class selection/reset, one-use destination, stale revision/epoch, reinitialization and stock-mode exclusion");
    puts("PASS Teleporter phases: native eligibility, cooldown boundaries, retreat power, approach melee, one-second phase expiry and failure atomicity; runtime adapter pending");
    puts("PASS Teleporter destination: close escape, exact80 boundary, spatial approach, degenerate target, forward/pitch fallback and failure atomicity; native teleport hookup pending");
    return 0;
}
struct Navigation {int calls=0,fail_at=0;};
static int point_test(void* context,const raven_ai_point*) {
    auto& n=*static_cast<Navigation*>(context);
    return ++n.calls!=n.fail_at;
}
struct RetreatGrid {int calls=0;float max_x=1000;};
static int retreat_point(void* context,const raven_ai_point* point) {
    auto& grid=*static_cast<RetreatGrid*>(context);++grid.calls;
    return point->x<=grid.max_x;
}
static int retreat_test() {
    raven_ai_point origin={0,0,7},target={-10,0,100},out={123,456,789};
    RetreatGrid grid;
    if(!raven_ai_hit_run_destination(&origin,&target,retreat_point,&grid,&out)||
       out.x!=280||out.y!=0||out.z!=7||grid.calls!=8)return 80;
    // A barrier cuts the direct route short; the side route is longer.
    grid={0,90};
    if(!raven_ai_hit_run_destination(&origin,&target,retreat_point,&grid,&out)||
       out.x>90||out.y<100||std::abs(std::hypot(out.x,out.y)-160)>0.01||
       out.z!=7||grid.calls>56)return 81;
    grid={0,0};out={123,456,789};
    if(raven_ai_hit_run_destination(&origin,&target,retreat_point,&grid,&out)||
       out.x!=123||out.y!=456||out.z!=789||grid.calls!=7)return 82;
    grid={};target=origin;
    if(raven_ai_hit_run_destination(&origin,&target,retreat_point,&grid,&out)||grid.calls)return 83;
    // A zero-length planar separation cannot be rescued by vertical distance.
    target.z=100;
    if(raven_ai_hit_run_destination(&origin,&target,retreat_point,&grid,&out)||grid.calls)return 84;
    raven_ai_mode_config config={0x10000,0x401,2,0.5f,4},owner;
    raven_ai_mode_begin(0x50000,&config);
    if(!raven_ai_mode_read(0x50000,config.actor,config.handle,&owner))return 85;
    raven_ai_retreat_state state={0x402,10,1},read={};
    if(!raven_ai_retreat_publish(0x50000,&owner,&state)||
       !raven_ai_retreat_read(0x50000,&owner,&read)||read.target!=0x402||read.deadline!=10)return 86;
    auto stale=owner;raven_ai_mode_begin(0x50000,&config);
    raven_ai_mode_read(0x50000,config.actor,config.handle,&owner);
    if(raven_ai_retreat_publish(0x50000,&stale,&state)||
       !raven_ai_retreat_read(0x50000,&owner,&read)||read.active||read.target)return 87;
    state.target=0;
    if(raven_ai_retreat_publish(0x50000,&owner,&state))return 88;
    config.mode=6;raven_ai_mode_begin(0x50000,&config);
    raven_ai_mode_read(0x50000,config.actor,config.handle,&owner);
    state.target=0x402;
    if(raven_ai_retreat_publish(0x50000,&owner,&state)||raven_ai_retreat_read(0x50000,&owner,&read))return 89;
    raven_ai_mode_reset(0x50000);
    if(raven_ai_retreat_read(0x50000,&owner,&read))return 90;
    puts("PASS retreat ownership: same-handle reinitialization, stale publication, invalid active target, unrelated-mode exclusion and retirement");
    puts("PASS HitAndRun destination: bounded navigation, obstacle avoidance, side route, retained endpoint, planar degeneracy and failure atomicity; native movement hookup pending");
    return 0;
}
static int wander_test() {
    raven_ai_wander_route route={};
    raven_ai_point home={10,20,30},origin={0,0,7},out={};
    Navigation nav;
    raven_ai_wander_build(&route,&home,&origin,point_test,&nav);
    if(nav.calls!=128||route.current!=8)return 10;
    const float x[9]={0,320,320,320,0,-320,-320,-320,10};
    const float y[9]={280,280,0,-280,-280,-280,0,280,20};
    for(int i=0;i<9;++i) {
        if(!raven_ai_wander_next(&route,&out)||route.current!=i||
           out.x!=x[i]||out.y!=y[i]||out.z!=(i==8?30:7))return 11;
    }
    if(!raven_ai_wander_next(&route,&out)||route.current!=0)return 12;
    // Reject a direction before two complete steps, then skip it in selection.
    nav={0,4};raven_ai_wander_build(&route,&home,&origin,point_test,&nav);
    if(route.valid[0]||!raven_ai_wander_next(&route,&out)||route.current!=1)return 13;
    // Failed X keeps the preceding full point; failed Y keeps the X advance.
    nav={0,21};raven_ai_wander_build(&route,&home,&origin,point_test,&nav);
    if(!route.valid[1]||route.points[1].x!=80||route.points[1].y!=80)return 14;
    nav={0,22};raven_ai_wander_build(&route,&home,&origin,point_test,&nav);
    if(!route.valid[1]||route.points[1].x!=120||route.points[1].y!=80)return 15;
    for(auto& valid:route.valid)valid=0;
    route.valid[8]=1;route.current=8;
    if(!raven_ai_wander_next(&route,&out)||out.x!=10||out.z!=30)return 16;
    route.valid[8]=0;out.x=123;
    if(raven_ai_wander_next(&route,&out)||out.x!=123)return 17;
    puts("PASS wandering route: compass order, axis tests, obstacle cutoff, intermediate endpoints, home and cyclic selection");
    return 0;
}
static int pack_test() {
    raven_ai_mode_config a={0x10000,0x401,6,0.5f,4},b={0x11000,0x402,6,0.5f,4};
    raven_ai_mode_begin(0x50000,&a);raven_ai_mode_begin(0x51000,&b);
    raven_ai_mode_read(0x50000,a.actor,a.handle,&a);raven_ai_mode_read(0x51000,b.actor,b.handle,&b);
    raven_ai_pack_world world={},old_world={};
    if(!raven_ai_pack_world_read(0x50000,&a,&world)||world.leader||world.target)return 71;
    old_world=world;
    if(!raven_ai_pack_claim(0x50000,&a,world.revision)||
       raven_ai_pack_claim(0x51000,&b,old_world.revision))return 72;
    raven_ai_pack_world_read(0x51000,&b,&world);
    if(world.leader!=a.handle||raven_ai_pack_launch(0x51000,&b,world.revision,0x900,10)||
       raven_ai_pack_launch(0x50000,&a,old_world.revision,0x900,10))return 73;
    if(!raven_ai_pack_launch(0x50000,&a,world.revision,0x900,10))return 74;
    raven_ai_pack_world_read(0x51000,&b,&world);
    if(world.target!=0x900||world.leader!=a.handle)return 75;
    // Reinitialization retires leader ownership even at the same address and
    // full actor handle. Another existing pack member keeps the world alive.
    auto old_a=a;raven_ai_mode_begin(0x50000,&a);
    if(raven_ai_pack_launch(0x50000,&old_a,world.revision,0x901,20))return 76;
    raven_ai_mode_read(0x50000,a.actor,a.handle,&a);
    raven_ai_pack_world_read(0x51000,&b,&world);
    if(world.leader||world.target!=0x900||!raven_ai_pack_claim(0x51000,&b,world.revision))return 77;
    raven_ai_pack_state state={9,99},moving={1,20},engaging={3,21},out={};
    if(!raven_ai_pack_read(0x50000,&a,&out)||out.phase||out.deadline||
       raven_ai_pack_publish(0x50000,&a,&state))return 60;
    raven_ai_pack_publish(0x50000,&a,&moving);raven_ai_pack_publish(0x51000,&b,&moving);
    if(raven_ai_pack_contact(0x50000,&a,0x51000,&b,25))return 61;
    raven_ai_pack_publish(0x51000,&b,&engaging);
    if(!raven_ai_pack_contact(0x50000,&a,0x51000,&b,25)||
       !raven_ai_pack_read(0x50000,&a,&out)||out.phase!=3||out.deadline!=25.5f)return 62;
    if(!raven_ai_pack_read(0x51000,&b,&out)||out.deadline!=21)return 63;
    raven_ai_pack_publish(0x51000,&b,&moving);
    if(!raven_ai_pack_contact(0x50000,&a,0x51000,&b,30)||
       !raven_ai_pack_read(0x51000,&b,&out)||out.phase!=3||out.deadline!=30.5f)return 64;
    if(!raven_ai_pack_interrupt(0x50000,&a,40)||!raven_ai_pack_read(0x50000,&a,&out)||
       out.phase||out.deadline!=45||raven_ai_pack_interrupt(0x50000,&a,50))return 65;
    raven_ai_pack_read(0x50000,&a,&out);if(out.deadline!=45)return 66;
    auto stale=b;raven_ai_mode_begin(0x51000,&b);
    if(raven_ai_pack_publish(0x51000,&stale,&moving)||
       raven_ai_pack_contact(0x50000,&a,0x51000,&stale,50))return 67;
    raven_ai_mode_read(0x51000,b.actor,b.handle,&b);
    if(!raven_ai_pack_read(0x51000,&b,&out)||out.phase||out.deadline)return 68;
    b.mode=7;raven_ai_mode_begin(0x51000,&b);raven_ai_mode_read(0x51000,b.actor,b.handle,&b);
    if(raven_ai_pack_publish(0x51000,&b,&moving)||raven_ai_pack_read(0x51000,&b,&out))return 69;
    raven_ai_mode_reset(0x50000);raven_ai_mode_reset(0x51000);
    if(raven_ai_pack_interrupt(0x50000,&a,60))return 70;
    a.mode=6;raven_ai_mode_begin(0x50000,&a);raven_ai_mode_read(0x50000,a.actor,a.handle,&a);
    if(!raven_ai_pack_world_read(0x50000,&a,&world)||world.leader||world.target)return 78;
    raven_ai_mode_reset(0x50000);
    puts("PASS pack shared ownership: leader claim, follower access, rejected competing/stale publications, leader reinitialization and final-owner cleanup");
    puts("PASS pack coordination: phase ownership, bidirectional moving/engaging contact, caller-clock deadlines, interruption, stale epoch and unrelated-mode exclusion");
    return 0;
}
int main() {
    if(int result=teleport_test())return result;
    if(int result=retreat_test())return result;
    if(int result=pack_test())return result;
    raven_ai_protect_input protect={};raven_ai_protect_result plan;
    protect.actor={-100,0,0};protect.partner={100,0,0};protect.threat={0,0,0};
    protect.current_destination=protect.actor;protect.partner_alive=protect.threat_alive=1;
    raven_ai_protect_plan(&protect,&plan);
    if(plan.action!=1||plan.destination.x!=60||plan.speed!=1||!plan.write_speed||plan.write_speed_override)return 30;
    protect.threat_velocity={5,0,100};protect.state=7;
    raven_ai_protect_plan(&protect,&plan);
    if(plan.action!=2||plan.destination.x!=80||plan.speed!=1.4f||!plan.write_speed_override)return 31;
    protect.threat_velocity.x=-5;
    raven_ai_protect_plan(&protect,&plan);
    if(plan.action||plan.write_speed)return 32;
    protect.threat_velocity={0,5,0};
    raven_ai_protect_plan(&protect,&plan);
    if(plan.action!=2)return 33; // Perpendicular motion is eligible.
    protect.actor={80,0,0};raven_ai_protect_plan(&protect,&plan);
    if(plan.action||!plan.write_speed)return 34;
    protect.actor={40,0,0};raven_ai_protect_plan(&protect,&plan);
    if(plan.action!=2)return 35; // Exactly40 remains eligible.
    protect.current_destination={80,0,0};raven_ai_protect_plan(&protect,&plan);
    if(plan.action||!plan.write_speed)return 36;
    protect.partner_alive=0;raven_ai_protect_plan(&protect,&plan);
    if(plan.action||plan.write_speed)return 37;
    protect.partner_alive=1;protect.partner=protect.threat;raven_ai_protect_plan(&protect,&plan);
    if(plan.action||plan.write_speed)return 38;
    puts("PASS protect positioning: stationary/moving offsets, direction gate, planar speed, redirect state, distance boundaries, dead/degenerate targets");
    raven_ai_mode_config guard={0x30000,0x201,7,0.5f,4},partner={0x31000,0x202,8,0.5f,4};
    raven_ai_mode_begin(0x40000,&guard);raven_ai_mode_begin(0x41000,&partner);
    raven_ai_mode_read(0x40000,guard.actor,guard.handle,&guard);
    raven_ai_mode_read(0x41000,partner.actor,partner.handle,&partner);
    uint32_t handle=99;
    if(!raven_ai_protect_partner(0x40000,&guard,&handle)||handle||
       !raven_ai_protect_bind(0x40000,&guard,0x41000,&partner)||
       !raven_ai_protect_partner(0x40000,&guard,&handle)||handle!=0x202)return 40;
    if(!raven_ai_protect_partner(0x41000,&partner,&handle)||handle)return 41;
    if(raven_ai_protect_bind(0x40000,&guard,0x40000,&guard))return 42;
    raven_ai_mode_config old_partner=partner;
    raven_ai_mode_begin(0x41000,&partner);
    if(raven_ai_protect_bind(0x40000,&guard,0x41000,&old_partner))return 43;
    raven_ai_mode_read(0x41000,partner.actor,partner.handle,&partner);
    if(!raven_ai_protect_bind(0x41000,&partner,0x40000,&guard))return 44;
    raven_ai_mode_reset(0x40000);
    if(raven_ai_protect_bind(0x41000,&partner,0x40000,&guard)||
       raven_ai_protect_partner(0x40000,&guard,&handle))return 45;
    if(!raven_ai_protect_partner(0x41000,&partner,&handle)||handle!=0x201)return 46;
    raven_ai_mode_begin(0x41000,&partner);raven_ai_mode_read(0x41000,partner.actor,partner.handle,&partner);
    if(!raven_ai_protect_partner(0x41000,&partner,&handle)||handle)return 47;
    raven_ai_mode_reset(0x41000);
    puts("PASS protect pairing: opposite modes, independent selection, full handles, stale epochs, owner retirement and reinitialization");
    if(int result=wander_test())return result;
    raven_ai_mode_config c={0x10000,0x201,1,0.5f,4},out={};
    raven_ai_mode_begin(0x20000,&c);
    if(!raven_ai_mode_read(0x20000,c.actor,c.handle,&out)||out.mode!=1)return 1;
    out.mode=99;
    if(raven_ai_mode_read(0x20000,c.actor,c.handle+512,&out)||out.mode!=99)return 2;
    if(raven_ai_mode_read(0x20000,c.actor+4,c.handle,&out))return 3;
    c.handle+=512;c.mode=6;raven_ai_mode_begin(0x20000,&c);
    if(raven_ai_mode_read(0x20000,c.actor,0x201,&out)||!raven_ai_mode_read(0x20000,c.actor,c.handle,&out)||out.mode!=6)return 4;
    c.mode=0;raven_ai_mode_begin(0x20000,&c);
    if(raven_ai_mode_read(0x20000,c.actor,c.handle,&out))return 5;
    for(int mode: {1,2,6,7,8}) {c.mode=mode;raven_ai_mode_begin(0x20000,&c);
        if(!raven_ai_mode_read(0x20000,c.actor,c.handle,&out)||out.mode!=mode)return 6;}
    raven_ai_mode_reset(0x20000);
    if(raven_ai_mode_read(0x20000,c.actor,c.handle,&out))return 7;
    c.mode=1;raven_ai_mode_begin(0x20000,&c);
    raven_ai_mode_read(0x20000,c.actor,c.handle,&out);
    raven_ai_mode_config stale=out;
    raven_ai_wander_route route={};route.current=8;route.valid[0]=1;route.points[0]={1,2,3};
    raven_ai_point point={};
    if(!raven_ai_wander_publish(0x20000,&out,&route)||
       !raven_ai_wander_take(0x20000,&out,&point)||point.x!=1)return 20;
    // Same actor/address/handle can be reinitialized during a guest call.
    raven_ai_mode_begin(0x20000,&c);raven_ai_mode_read(0x20000,c.actor,c.handle,&out);
    if(out.epoch==stale.epoch||raven_ai_wander_publish(0x20000,&stale,&route)||
       raven_ai_wander_take(0x20000,&out,&point))return 21;
    if(!raven_ai_wander_publish(0x20000,&out,&route))return 22;
    raven_ai_mode_reset(0x20000);
    if(raven_ai_wander_take(0x20000,&out,&point)||raven_ai_wander_publish(0x20000,&out,&route))return 23;
    puts("PASS route ownership: publish/select, same-handle reinitialization, stale publication and destruction");
    puts("PASS AI mode ownership: supported modes, stock clearing, full-handle/address identity, reuse and retirement");
}
