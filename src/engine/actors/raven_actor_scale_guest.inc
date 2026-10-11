/* Geometry half of the missing XML2 timed-scaling path. This does not replace
 * XML1 setScale. Registration/update/lifetime and clearance gating are pending.
 * XML1 actor initialization 3428E..3441F proves the CharacterDef dimensions,
 * ignore-skin-scale flag, entity bounds setter and shape virtual used here. */
static int actor_scale_entity_identity(uint32_t actor,uint32_t handle);
static int actor_scale_apply_unchecked(uint32_t actor,float relative) {
    if(!actor)return 0;
    uint32_t handle=MEM32(actor+0x1c);
    if(!actor_scale_entity_identity(actor,handle))return 0;
    uint32_t definition=MEM32(actor+0x2d8);
    if(!definition)return 0;
    float base=MEMF(definition+0x3a8),absolute=relative*base;
    if(!isfinite(relative)||relative<=0||!isfinite(base)||base<=0||!isfinite(absolute))return 0;
    float bounds_scale=relative*((MEM8(definition+0x3a1)&0x80)?1.0f:base);
    float x=0.5f*MEMF(definition+0x38c)*bounds_scale;
    float y=0.5f*MEMF(definition+0x390)*bounds_scale;
    float z=MEMF(definition+0x394)*bounds_scale;
    /* Degenerate bounds are interpreted by the native setter. Do not invent
     * a positive-size requirement for modded actors with zero-sized bounds. */
    if(!isfinite(x)||!isfinite(y)||!isfinite(z))return 0;
    uint32_t sp=g_esp;g_esp-=24;uint32_t lower=g_esp,upper=g_esp+12,call_sp=g_esp;
    MEMF(lower)=-x;MEMF(lower+4)=-y;MEMF(lower+8)=0;
    MEMF(upper)=x;MEMF(upper+4)=y;MEMF(upper+8)=z;
    uint32_t target=MEM32(MEM32(actor)+0x13c);
    g_ecx=actor;PUSH32(g_esp,upper);PUSH32(g_esp,lower);PUSH32(g_esp,0);
    RECOMP_ICALL_SAFE(target,call_sp);
    if(g_esp!=call_sp)extension_failure("actor scale bounds ABI");
    if(!actor_scale_entity_identity(actor,handle))goto retired;
    /* Query native shape availability exactly through XML1's existing actor
     * interface. Do not invent a different collision object or store a pointer
     * to these stack vectors: the native shape setter copies their contents. */
    target=MEM32(MEM32(actor)+0x178);g_ecx=actor;PUSH32(g_esp,0);
    RECOMP_ICALL_SAFE(target,call_sp);
    if(g_esp!=call_sp)extension_failure("actor scale shape query ABI");
    int shape_present=(g_eax&255)!=0;
    if(!actor_scale_entity_identity(actor,handle))goto retired;
    if(shape_present) {
        target=MEM32(MEM32(actor)+0x180);g_ecx=actor;PUSH32(g_esp,0);
        RECOMP_ICALL_SAFE(target,call_sp);
        if(g_esp!=call_sp)extension_failure("actor scale shape reference ABI");
        uint32_t reference=g_eax;
        if(!actor_scale_entity_identity(actor,handle))goto retired;
        uint32_t shape=reference?MEM32(reference):0;
        if(!shape)extension_failure("actor scale valid shape has null reference");
        target=MEM32(MEM32(shape)+0x24);g_ecx=shape;
        PUSH32(g_esp,upper);PUSH32(g_esp,lower);PUSH32(g_esp,0);
        RECOMP_ICALL_SAFE(target,call_sp);
        if(g_esp!=call_sp)extension_failure("actor scale collision bounds ABI");
        if(!actor_scale_entity_identity(actor,handle))goto retired;
    }
    /* Existing XML1 scale setter owns render and spatial refresh. Absolute
     * visual scale retains CharacterDef skin scale even when physical bounds
     * opt out of that multiplier, matching the native initialization contract. */
    uint32_t bits;memcpy(&bits,&absolute,4);
    target=MEM32(MEM32(actor)+0x184);g_ecx=actor;PUSH32(g_esp,bits);PUSH32(g_esp,0);
    RECOMP_ICALL_SAFE(target,call_sp);
    if(g_esp!=call_sp)extension_failure("actor scale visual refresh ABI");
    if(!actor_scale_entity_identity(actor,handle))goto retired;
    g_esp=sp;return 1;
retired:
    g_esp=sp;return 0;
}

static uint32_t actor_scale_fixture_code,actor_scale_fixture_shape_calls;
static uint32_t actor_scale_fixture_refreshes,actor_scale_fixture_shape_present;
static float actor_scale_fixture_bounds[6];
static void actor_scale_fixture_shape(void) {
    uint32_t lower=MEM32(g_esp+4),upper=MEM32(g_esp+8);
    for(unsigned i=0;i<3;++i){actor_scale_fixture_bounds[i]=MEMF(lower+i*4);actor_scale_fixture_bounds[i+3]=MEMF(upper+i*4);}
    ++actor_scale_fixture_shape_calls;g_esp+=12;
}
static void actor_scale_fixture_refresh(void){++actor_scale_fixture_refreshes;g_esp+=4;}
static void actor_scale_fixture_present(void){g_eax=actor_scale_fixture_shape_present;g_esp+=4;}
static int actor_scale_geometry_fixture(uint32_t base) {
    uint32_t actor=base,definition=base+0x800,methods=base+0xd00,shape=base+0x1000,shape_methods=base+0x1100;
    uint32_t sp=g_esp;int fp=g_fp_top,failed=0;
    const uint32_t globals[]={0x4e7044,0x4db2b8,0x4db2b8+0x185c,
        0x4db2b8+0x1018,0x4db2b8+0x1060,0x4db2b8+8};
    uint32_t saved[6];for(unsigned i=0;i<6;++i)saved[i]=MEM32(globals[i]);
    MEM32(0x4e7044)=1;MEM32(0x4db2b8)=0x3d4b7c;MEM32(0x4db2b8+0x185c)=511;
    MEM32(0x4db2b8+0x1018)|=2;MEM32(0x4db2b8+0x1060)=0x401;MEM32(0x4db2b8+8)=actor;
    memset((void*)XBOX_PTR(base),0,0x1400);
    memcpy((void*)XBOX_PTR(methods),(void*)XBOX_PTR(0x3c94b4),0x200);
    actor_scale_fixture_code=base+0x1300;
    MEM32(actor)=methods;MEM32(actor+0x2d8)=definition;MEM32(actor+0x1b0)=shape;
    MEM32(actor+0x1c)=0x401;
    MEM32(shape)=shape_methods;MEM32(shape_methods+0x24)=actor_scale_fixture_code;
    MEM32(methods+0x3c)=actor_scale_fixture_code+4;
    MEM32(methods+0x118)=actor_scale_fixture_code+4;
    MEM32(methods+0x178)=actor_scale_fixture_code+8;
    MEMF(definition+0x3a8)=1.5f;MEMF(definition+0x38c)=20;
    MEMF(definition+0x390)=30;MEMF(definition+0x394)=60;
    actor_scale_fixture_refreshes=actor_scale_fixture_shape_calls=0;actor_scale_fixture_shape_present=1;
    if(!actor_scale_apply_unchecked(actor,2)||MEMF(actor+0x168)!=3||MEMF(actor+0x138)!=-30||
       MEMF(actor+0x148)!=45||MEMF(actor+0x14c)!=180||actor_scale_fixture_bounds[0]!=-30||
       actor_scale_fixture_bounds[5]!=180||actor_scale_fixture_shape_calls!=1||actor_scale_fixture_refreshes!=3)failed=1;
    MEM8(definition+0x3a1)=0x80;
    if(!actor_scale_apply_unchecked(actor,0.5f)||MEMF(actor+0x168)!=0.75f||MEMF(actor+0x138)!=-5||
       MEMF(actor+0x148)!=7.5f||MEMF(actor+0x14c)!=30||actor_scale_fixture_bounds[5]!=30)failed=2;
    actor_scale_fixture_shape_present=0;
    if(!actor_scale_apply_unchecked(actor,1)||actor_scale_fixture_shape_calls!=2||MEMF(actor+0x168)!=1.5f)failed=3;
    uint32_t refreshes=actor_scale_fixture_refreshes;
    MEMF(definition+0x3a8)=0;
    if(actor_scale_apply_unchecked(actor,1)||actor_scale_apply_unchecked(0,1)||actor_scale_fixture_refreshes!=refreshes)failed=4;
    if(g_esp!=sp||g_fp_top!=fp)failed=5;
    actor_scale_fixture_code=0;
    for(unsigned i=0;i<6;++i)MEM32(globals[i])=saved[i];
    if(failed)fprintf(stderr,"FAIL actor scale geometry fixture %d\n",failed);
    else puts("PASS actor scale geometry: native bounds setter and scale setter, shape dispatch, skin-scale opt-out, missing shape, ABI; terminal shape and refresh callbacks substituted; runtime integration pending");
    return failed;
}
