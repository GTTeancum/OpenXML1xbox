#include "engine/actors/raven_actor_scale_clearance.h"

typedef struct actor_scale_clearance_context {
    uint32_t actor,handle,scratch,sweep_entry;
    int alive;
} actor_scale_clearance_context;
static int actor_scale_entity_identity(uint32_t actor,uint32_t handle) {
    uint32_t sp=g_esp;g_esp-=4;MEM32(g_esp)=handle;g_ecx=g_esp;
    PUSH32(g_esp,0);RECOMP_ABI_CALL(0x0006BF80u,sub_0006BF80);
    if(g_esp!=sp-4)extension_failure("scale clearance identity ABI");
    int alive=g_eax==actor;g_esp=sp;return alive;
}
static int actor_scale_clearance_valid(actor_scale_clearance_context *c) {
    if(!c->alive)return 0;
    c->alive=actor_scale_entity_identity(c->actor,c->handle);return c->alive;
}
static void actor_scale_put_vector(uint32_t at,const float v[3]) {
    for(unsigned i=0;i<3;++i)MEMF(at+i*4)=v[i];
}
static void actor_scale_get_vector(uint32_t at,float v[3]) {
    for(unsigned i=0;i<3;++i)v[i]=MEMF(at+i*4);
}
static int actor_scale_clearance_sweep(void *context,const float origin[3],
                                      const float direction[3],float displacement[3]) {
    actor_scale_clearance_context *c=context;
    memset(displacement,0,3*sizeof(float));
    if(!actor_scale_clearance_valid(c))return 1;
    uint32_t sp=g_esp,s=c->scratch;
    actor_scale_put_vector(s,origin);actor_scale_put_vector(s+12,direction);
    /* XML1 3C720 owns query allocation/filtering and retirement. Its result
     * vector is travel displacement, not the collision's world position. */
    g_ecx=c->actor;PUSH32(g_esp,s+36);PUSH32(g_esp,s+24);PUSH32(g_esp,1);
    PUSH32(g_esp,s+12);PUSH32(g_esp,s);PUSH32(g_esp,0);
    RECOMP_ICALL_SAFE(c->sweep_entry,sp);
    if(g_esp!=sp)extension_failure("scale clearance sweep ABI");
    int hit=(g_eax&255)!=0;
    actor_scale_get_vector(s+24,displacement);
    if(!actor_scale_clearance_valid(c)){memset(displacement,0,3*sizeof(float));return 1;}
    return hit;
}
static void actor_scale_clearance_bounds(void *context,const float lower[3],const float upper[3]) {
    actor_scale_clearance_context *c=context;if(!actor_scale_clearance_valid(c))return;
    uint32_t sp=g_esp,s=c->scratch,target=MEM32(MEM32(c->actor)+0x13c);
    actor_scale_put_vector(s,lower);actor_scale_put_vector(s+12,upper);
    g_ecx=c->actor;PUSH32(g_esp,s+12);PUSH32(g_esp,s);PUSH32(g_esp,0);
    RECOMP_ICALL_SAFE(target,sp);
    if(g_esp!=sp)extension_failure("scale clearance temporary bounds ABI");
    actor_scale_clearance_valid(c);
}
static void actor_scale_clearance_position(void *context,const float position[3]) {
    actor_scale_clearance_context *c=context;if(!actor_scale_clearance_valid(c))return;
    uint32_t sp=g_esp,s=c->scratch,target=MEM32(MEM32(c->actor)+0x148);
    actor_scale_put_vector(s,position);g_ecx=c->actor;
    PUSH32(g_esp,s);PUSH32(g_esp,0);RECOMP_ICALL_SAFE(target,sp);
    if(g_esp!=sp)extension_failure("scale clearance position ABI");
    actor_scale_clearance_valid(c);
}
static int actor_scale_clearance_guest(uint32_t actor,float requested,uint32_t sweep_entry) {
    if(!actor)return 0;
    actor_scale_clearance_context c={actor,MEM32(actor+0x1c),0,sweep_entry,1};
    if(!actor_scale_clearance_valid(&c))return 0;
    uint32_t definition=MEM32(actor+0x2d8);
    if(!definition||!isfinite(requested))return 0;
    float base=MEMF(definition+0x3a8);
    if(!isfinite(base)||base<=0)return 0;
    raven_scale_clearance_geometry geometry={0};
    geometry.current=MEMF(actor+0x168)/base;geometry.requested=requested;
    if(requested<=geometry.current)return 1;
    actor_scale_get_vector(definition+0x38c,geometry.dimensions);
    actor_scale_get_vector(actor+0x20,geometry.position);
    uint32_t sp=g_esp;g_esp-=160;c.scratch=g_esp;
    /* Collision result reference is a native value object (A0770), not a
     * copied XML2 query structure. Native wrapper 3C720 owns the scene query. */
    g_ecx=c.scratch+36;PUSH32(g_esp,0);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x000A0770u,sub_000A0770);
    uint32_t target=MEM32(MEM32(actor)+0x38);g_ecx=actor;PUSH32(g_esp,0);
    RECOMP_ICALL_SAFE(target,c.scratch);
    if(g_esp!=c.scratch)extension_failure("scale clearance bounds getter ABI");
    uint32_t native_bounds=g_eax;
    if(!actor_scale_clearance_valid(&c)){g_esp=sp;return 0;}
    actor_scale_get_vector(native_bounds,geometry.lower);
    actor_scale_get_vector(native_bounds+12,geometry.upper);
    /* +40 writes a full 4x4 transform, not a three-float direction. Reserve
     * all 64 bytes; its first three values supply the native forward vector. */
    target=MEM32(MEM32(actor)+0x40);g_ecx=actor;
    PUSH32(g_esp,c.scratch+48);PUSH32(g_esp,0);RECOMP_ICALL_SAFE(target,c.scratch);
    if(g_esp!=c.scratch)extension_failure("scale clearance direction ABI");
    if(!actor_scale_clearance_valid(&c)){g_esp=sp;return 0;}
    double magnitude=0;
    for(unsigned i=0;i<3;++i){double value=MEMF(c.scratch+48+i*4);magnitude+=value*value;}
    magnitude=sqrt(magnitude);
    if(!isfinite(magnitude)||magnitude<=0){g_esp=sp;return 0;}
    for(unsigned i=0;i<3;++i)MEMF(c.scratch+48+i*4)=(float)(MEMF(c.scratch+48+i*4)/magnitude);
    /* Native 120A30 builds the perpendicular basis, including near-vertical
     * fallback; preserve it rather than imposing a flat-world approximation. */
    PUSH32(g_esp,c.scratch+136);PUSH32(g_esp,c.scratch+124);PUSH32(g_esp,c.scratch+48);
    PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00120A30u,sub_00120A30);g_esp+=12;
    if(g_esp!=c.scratch)extension_failure("scale clearance basis ABI");
    actor_scale_get_vector(c.scratch+48,geometry.basis[0]);
    actor_scale_get_vector(c.scratch+124,geometry.basis[1]);
    raven_scale_clearance_callbacks callbacks={&c,actor_scale_clearance_sweep,
        actor_scale_clearance_bounds,actor_scale_clearance_position};
    int accepted=raven_actor_scale_clearance(&geometry,&callbacks);
    int alive=actor_scale_clearance_valid(&c);g_esp=sp;
    return accepted&&alive;
}

static uint32_t scale_clearance_fixture_code,scale_clearance_fixture_queries;
static unsigned scale_clearance_fixture_scenario;
static void scale_clearance_fixture_sweep(void) {
    uint32_t direction=MEM32(g_esp+8),output=MEM32(g_esp+16);
    unsigned n=scale_clearance_fixture_queries++;
    int hit=(scale_clearance_fixture_scenario==1&&n==0)||
        (scale_clearance_fixture_scenario==3&&n==1);
    if(MEM32(g_esp+12)!=1)extension_failure("scale fixture query filter");
    for(unsigned i=0;i<3;++i)MEMF(output+i*4)=MEMF(direction+i*4)*(hit?0.1f:1.0f);
    if(scale_clearance_fixture_scenario==2)MEM32(0x4db2b8+0x1060)=0x601;
    g_eax=hit;g_esp+=24;
}
static void scale_clearance_fixture_direction(void) {
    uint32_t out=MEM32(g_esp+4);memset((void*)XBOX_PTR(out),0,64);
    MEMF(out+4)=1;g_eax=out;g_esp+=8;
}
static void scale_clearance_fixture_position(void) {
    for(unsigned i=0;i<3;++i)MEMF(g_ecx+0x20+i*4)=MEMF(MEM32(g_esp+4)+i*4);
    g_esp+=8;
}
static void scale_clearance_fixture_type(void) {g_eax=g_ecx;g_esp+=4;}
static int actor_scale_clearance_guest_fixture(uint32_t base) {
    uint32_t actor=base,definition=base+0x800,methods=base+0xd00,sp=g_esp;
    const uint32_t globals[]={0x4e7044,0x4db2b8,0x4db2b8+0x185c,
        0x4db2b8+0x1018,0x4db2b8+0x1060,0x4db2b8+8,0x4c25f8};
    uint32_t saved[7];for(unsigned i=0;i<7;++i)saved[i]=MEM32(globals[i]);
    int fp=g_fp_top,failed=0;
    uint32_t saved_type=MEM32(0x485878);
    memset((void*)XBOX_PTR(base),0,0x1600);
    memcpy((void*)XBOX_PTR(methods),(void*)XBOX_PTR(0x3c94b4),0x200);
    MEM32(actor)=methods;MEM32(actor+0x2d8)=definition;MEM32(actor+0x1c)=0x401;
    MEMF(definition+0x3a8)=MEMF(actor+0x168)=1;
    MEMF(definition+0x38c)=20;MEMF(definition+0x390)=30;MEMF(definition+0x394)=60;
    actor_scale_fixture_code=base+0x1500;scale_clearance_fixture_code=base+0x1510;
    MEM32(methods+0x3c)=actor_scale_fixture_code+4;
    MEM32(methods+0x40)=scale_clearance_fixture_code+4;
    MEM32(methods+0x148)=scale_clearance_fixture_code+8;
    MEM32(0x4e7044)=1;MEM32(0x4db2b8)=0x3d4b7c;MEM32(0x4db2b8+0x185c)=511;
    MEM32(0x4db2b8+0x1018)|=2;MEM32(0x4db2b8+8)=actor;
    for(unsigned scenario=0;scenario<4;++scenario) {
        scale_clearance_fixture_scenario=scenario;scale_clearance_fixture_queries=0;
        MEM32(0x4db2b8+0x1060)=0x401;
        MEMF(actor+0x138)=-10;MEMF(actor+0x13c)=-15;MEMF(actor+0x140)=0;
        MEMF(actor+0x144)=10;MEMF(actor+0x148)=15;MEMF(actor+0x14c)=60;
        MEMF(actor+0x20)=100;MEMF(actor+0x24)=200;MEMF(actor+0x28)=300;
        int accepted=actor_scale_clearance_guest(actor,2,scale_clearance_fixture_code);
        if(accepted!=(scenario==0||scenario==3)||scale_clearance_fixture_queries!=((scenario==0||scenario==3)?5:1)||
           MEMF(actor+0x138)!=-10||MEMF(actor+0x148)!=15||MEMF(actor+0x14c)!=60||
           fabsf(MEMF(actor+0x24)-(scenario==3?191.2f:200))>0.0001f)failed=1+scenario;
    }
    // Exercise a complete timed transition through the actual native geometry
    // setters. No affecters/clearance are requested in this specific vector.
    MEM32(0x4db2b8+0x1060)=0x401;MEM32(actor+0x1fc)=0xffffffffu;
    MEM32(methods+0x118)=actor_scale_fixture_code+4;
    MEMF(actor+0x168)=1;
    MEM32(0x485878)=0;MEM32(methods)=scale_clearance_fixture_code+12;MEM32(actor+0x18)=2;
    MEM32(base+0xf00)=actor;MEM32(base+0xf04)=0;
    // Execute the published descriptor, real variable getters and native
    // numeric-handle selector (9FF10); no game/interpreter heap is needed.
    uint32_t name=base+0x1100,args=base+0x1140,values=base+0x1180,text=base+0x1200;
    strcpy((char*)XBOX_PTR(name),"setActorScaleTimed");
    strcpy((char*)XBOX_PTR(text),"1025"); // Decimal generation handle 0x401.
    MEM32(args)=values;MEM32(args+4)=values+8;MEM32(args+8)=values+16;MEM32(args+0x1c)=3;
    MEM32(values)=0x3d5980;MEM32(values+4)=text; // CStringVariable getter C9480.
    MEM32(values+8)=0x3d57c4;MEMF(values+12)=2; // Native CFloatVariable getters.
    MEM32(values+16)=0x3d57c4;MEMF(values+20)=1;
    uint32_t descriptor=xml1_script_extension_descriptor(installed_manager,name);
    if(!descriptor)extension_failure("timed scale fixture descriptor missing");
    PUSH32(g_esp,args);PUSH32(g_esp,0);
    RECOMP_ICALL_SAFE(MEM32(descriptor),sp);
    if(g_esp!=sp-4||g_eax||g_fp_top!=fp)failed=8;
    g_esp=sp;

    xml1_actor_scale_tick(actor,0.25f);
    if(MEMF(actor+0x168)!=1.25f||MEMF(actor+0x14c)!=75)failed=6;
    xml1_actor_scale_tick(actor,0.75f);
    raven_actor_scale_snapshot snapshot;
    if(MEMF(actor+0x168)!=2||MEMF(actor+0x14c)!=120||
       !raven_actor_scale_owner_read(actor,0x401,&snapshot)||snapshot.scale.active)failed=7;
    raven_actor_scale_owner_reset(actor);
    if(g_esp!=sp||g_fp_top!=fp)failed=5;
    MEM32(0x485878)=saved_type;
    actor_scale_fixture_code=scale_clearance_fixture_code=0;
    for(unsigned i=0;i<7;++i)MEM32(globals[i])=saved[i];
    if(failed)fprintf(stderr,"FAIL scale clearance guest fixture %d\n",failed);
    else puts("PASS scale clearance guest bridge and timed update: native basis/bounds/reference/resolver, sweep ABI, shift/restore, generation rejection, registered command/arguments/native selection and two-step growth; scene query substituted, huge-state target pending");
    return failed;
}
