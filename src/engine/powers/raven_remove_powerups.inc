/* Missing XML2 ce_remove_powerups (FA880/F9D50), connected to XML1
 * event pools, native energy/health eligibility and powerup lifetimes. */
static uint32_t removal_event_table;
static void removal_parse(void) {
    uint32_t event=g_ecx,sp=g_esp,key=MEM32(sp+4),value=MEM32(sp+8);
    const char *name=(const char*)XBOX_PTR(key),*text=(const char*)XBOX_PTR(value);
    if(!_stricmp(name,"beameffect")||!_stricmp(name,"powerup_tag")||!_stricmp(name,"powerup_class")) {
        unsigned offset=!_stricmp(name,"beameffect")?0x18:!_stricmp(name,"powerup_tag")?0x1C:0x20;
        AREA_CALL(event+offset,0x27EF0,value);
    } else if(!_stricmp(name,"healthpct")) {
        int bound=raven_native_health_pct_parse(event,text);
        MEMF(event+0x24)=bound?0.0f:(float)atof(text);
    } else if(!_stricmp(name,"maxrange")) {
        int bound=raven_native_attack_maxrange_parse(event,text);
        MEM16(event+0x28)=bound?0x8000u:(uint16_t)atoi(text);
    } else {sub_000CDC10();return;}
    g_eax=1;g_esp=sp+12;
}
static void removal_copy_fields(uint32_t event,uint32_t source) {
    /* Called only after subtype validation by the eventual virtual copy.
     * Resource ownership stays in the package; names are native intern IDs. */
    memcpy((void*)XBOX_PTR(event+0x14),(const void*)XBOX_PTR(source+0x14),0x16);
    raven_native_energy_copy(event,source);
}
static uint32_t removal_resource_phase(uint32_t event,uint32_t phase);
/* XML2 constructor109D50/copy109DA0: private fields are plain values or
 * package-owned references. Keep XML1 CEAction's construction/RTTI/copy rules. */
static void removal_copy(void) {
    uint32_t sp=g_esp,event=g_ecx,source=MEM32(sp+4);
    AREA_CALL(event,0xCF660,source);
    if(source&&MEM32(source)==removal_event_table)removal_copy_fields(event,source);
    g_esp=sp+8;
}
static void removal_phase(void) {
    uint32_t sp=g_esp,event=g_ecx,phase=MEM32(sp+4);
    g_eax=removal_resource_phase(event,phase);g_esp=sp+8;
}
static int removal_construct(uint32_t event) {
    if(!removal_event_table) {
        uint32_t memory=xbox_HeapAlloc(64,16);
        if(!memory)return 0;
        /* Include the original CEAction RTTI pointer preceding its ten slots.
         * Native destruction still releases the original event pool slot. */
        memcpy((void*)XBOX_PTR(memory),(void*)XBOX_PTR(0x3D5B74),44);
        removal_event_table=memory+4;
        MEM32(removal_event_table+4)=removal_event_table+40;
        MEM32(removal_event_table+12)=removal_event_table+44;
        MEM32(removal_event_table+16)=removal_event_table+48;
        MEM32(removal_event_table+24)=removal_event_table+52;
    }
    area_call0(event,0xCF610);
    MEM32(event)=removal_event_table;
    memset((void*)XBOX_PTR(event+0x14),0,0x16);
    return 1;
}
static int removal_named_construct(uint32_t event,uint32_t name) {
    if(!name||_stricmp((const char*)XBOX_PTR(name),"ce_remove_powerups"))return 0;
    if(!event||!removal_construct(event)) {
        fputs("[REMOVAL EVENT] allocation failed\n",stderr);_Exit(4);
    }
    return 1;
}
static int removal_factory_fixture(void) {
    uint32_t pool=xbox_HeapAlloc(0x11200,16),sp=g_esp,old_table=removal_event_table;
    unsigned fp=g_fp_top;int failed=0;if(!pool)return 1;
    memset((void*)XBOX_PTR(pool),0,0x11200);
    uint32_t text=pool+0x11000;area_call0(pool,0xE33F0);
    strcpy((char*)XBOX_PTR(text),"ce_remove_powerups");
    uint32_t handle=AREA_CALL(pool,0xE6040,text),event=AREA_CALL(pool,0xE4DA0,handle);
    if(!handle||!event||MEM32(event)!=removal_event_table||MEM32(pool+0xC3D8)!=1){failed=1;goto done;}
    strcpy((char*)XBOX_PTR(text),"healthpct");strcpy((char*)XBOX_PTR(text+64),"0.25");
    AREA_VCALL(event,16,text,text+64);
    if(!(g_eax&255)||MEMF(event+0x24)!=.25f)failed=2;
    strcpy((char*)XBOX_PTR(text),"CE_REMOVE_POWERUPS");
    uint32_t second=AREA_CALL(pool,0xE6040,text),clone=AREA_CALL(pool,0xE4DA0,second);
    if(!second||!clone||MEM32(clone)!=removal_event_table){failed=3;goto done;}
    AREA_VCALL(clone,24,event);
    if(MEMF(clone+0x24)!=.25f||MEM32(pool+0xC3D8)!=2)failed=4;
    if(!(AREA_CALL(pool,0xE6CC0,handle)&255)||AREA_CALL(pool,0xE4DA0,handle)||MEMF(clone+0x24)!=.25f)failed=5;
    if(!(AREA_CALL(pool,0xE6CC0,second)&255)||AREA_CALL(pool,0xE4DA0,second)||MEM32(pool+0xC3D8))failed=6;
    if(g_esp!=sp||g_fp_top!=fp)failed=7;
done:
    /* Only fixture-owned events use a newly allocated table here. */
    if(!old_table&&removal_event_table){xbox_HeapFree(removal_event_table-4);removal_event_table=0;}
    xbox_HeapFree(pool);
    if(failed)fprintf(stderr,"FAIL removal native factory %d\n",failed);
    else puts("PASS removal native factory: case-insensitive creation, virtual parsing/copy, native pool retirement, stale handles and ABI");
    return failed;
}
static int removal_lifecycle_fixture(void) {
    uint32_t base=xbox_HeapAlloc(256,16),old_table=removal_event_table,sp=g_esp;
    unsigned fp=g_fp_top;int failed=0;
    if(!base)return 1;
    removal_event_table=0;
    memset((void*)XBOX_PTR(base),0xA5,256);
    uint32_t event=base,clone=base+64,other=base+128;
    if(!removal_construct(event)||!removal_construct(clone)) {failed=1;goto done;}
    if(MEM32(event+4)||MEM32(event+8)||MEM8(event+12)||MEM8(event+13)||
       MEM16(event+16)||(MEM8(event+14)&15)||(MEM8(event+18)&1))failed=2;
    for(unsigned i=0x14;i<0x2A;++i)if(MEM8(event+i))failed=3;
    MEM32(event+0x18)=123;MEM32(event+0x1C)=456;MEM32(event+0x20)=789;
    MEMF(event+0x24)=.25f;MEM16(event+0x28)=77;MEM16(event+0x10)=12;MEM8(event+13)=9;
    raven_native_health_pct_parse(event,"%sun_flmthrow_ft");
    AREA_VCALL(clone,24,event);
    if(MEM32(clone)!=removal_event_table||MEM32(clone+0x20)!=789||
       MEMF(clone+0x24)!=.25f||MEM16(clone+0x28)!=77||MEM16(clone+0x10)!=12||MEM8(clone+13)!=9)failed=4;
    /* Address reuse clears the original operand; the independent clone retains it. */
    removal_construct(event);
    float fraction=.5f;
    if(raven_native_health_pct(area_read,0,event,0,&fraction)!=0||fraction!=.5f)failed=5;
    if(raven_native_health_pct(area_read,0,clone,0,&fraction)!=-1||fraction!=0)failed=6;
    area_call0(other,0xCF610);MEM16(other+0x10)=19;MEM8(other+13)=7;
    AREA_VCALL(clone,24,other);
    if(MEM16(clone+0x10)!=19||MEM8(clone+13)!=7||MEM32(clone+0x20)!=789)failed=7;
    if(g_esp!=sp||g_fp_top!=fp)failed=8;
done:
    for(unsigned i=0;i<3;++i)raven_native_energy_lifetime(base+i*64,2);
    if(removal_event_table)xbox_HeapFree(removal_event_table-4);
    removal_event_table=old_table;xbox_HeapFree(base);
    if(failed)fprintf(stderr,"FAIL removal construction/copy %d\n",failed);
    else puts("PASS removal construction/copy: native base defaults, private defaults, virtual copy, independent operand lifetime, reused address and unrelated subtype; factory covered separately");
    return failed;
}
static int removal_parse_fixture(uint32_t pool) {
    uint32_t event=pool+0xD000,clone=event+64,key=event+128,value=key+64,sp=g_esp;
    unsigned fp=g_fp_top;int failed=0;
    memset((void*)XBOX_PTR(event),0,320);
    MEM32(event)=MEM32(clone)=0x3D5B78;
    raven_native_energy_lifetime(event,0);raven_native_energy_lifetime(clone,0);
    const char *keys[]={"beameffect","powerup_tag","powerup_class","healthpct","maxrange","tag"};
    const char *values[]={"removal_beam","removable_test_tag","removable_test_class","0.25","120","9"};
    for(unsigned i=0;i<6;++i) {
        strcpy((char*)XBOX_PTR(key),keys[i]);strcpy((char*)XBOX_PTR(value),values[i]);
        g_ecx=event;PUSH32(g_esp,value);PUSH32(g_esp,key);PUSH32(g_esp,0);removal_parse();
        if(!(g_eax&255)||g_esp!=sp)failed=1;
    }
    if(!MEM32(event+0x18)||!MEM32(event+0x1C)||!MEM32(event+0x20)||
       MEMF(event+0x24)!=.25f||MEM16(event+0x28)!=120||MEM8(event+13)!=9)failed=2;
    AREA_CALL(clone,0xCF660,event);removal_copy_fields(clone,event);
    MEMF(event+0x24)=.75f;MEM16(event+0x28)=77;
    if(MEMF(clone+0x24)!=.25f||MEM16(clone+0x28)!=120||MEM8(clone+13)!=9||
       MEM32(clone+0x18)!=MEM32(event+0x18)||MEM32(clone+0x20)!=MEM32(event+0x20))failed=3;
    strcpy((char*)XBOX_PTR(key),"beameffect");MEM8(value)=0;
    g_ecx=event;PUSH32(g_esp,value);PUSH32(g_esp,key);PUSH32(g_esp,0);removal_parse();
    if(MEM32(event+0x18)||g_esp!=sp||g_fp_top!=fp)failed=4;
    raven_native_energy_lifetime(event,2);raven_native_energy_lifetime(clone,2);
    if(failed)fprintf(stderr,"FAIL removal parser fields %d\n",failed);
    else puts("PASS removal parser: authored resource/class/tag, literal operands, native base tag, independent copied fields and empty resource name; factory covered separately");
    return failed;
}

static uint32_t removal_resource_phase(uint32_t event,uint32_t phase) {
    /* D7050 resolves through the combat node's resource package. Use the
     * actual XML1 effect layout, not the incompatible XML2 event layout.
     * The package owns the resolved resource; this adapter does not free it. */
    uint32_t sp=g_esp;g_esp-=0x28;uint32_t effect=g_esp;
    memset((void*)XBOX_PTR(effect),0,0x28);
    MEM32(effect+4)=MEM32(event+4);
    MEM32(effect+0x20)=MEM32(event+0x18);
    MEM32(effect+0x1C)=MEM32(event+0x14);
    uint32_t result=AREA_CALL(effect,0xD7050,phase);
    MEM32(event+0x14)=MEM32(effect+0x1C);g_esp=sp;return result;
}

static uint32_t removal_source_actor(uint32_t event,uint32_t actor) {
    uint32_t node=MEM32(event+4);
    if(!node||!actor)return 0;
    /* XML1 PowerStolenActivate 2CF80 -> 2E2C0 -> CFightStyle::EB2C0
     * stores source generation handles in the native style links. Query them
     * through virtual1C/EB4F0 rather than adding XML2's actor+758 cache.
     * The original read path resolves actors and the named borrowed move. */
    uint32_t manager=area_call0(actor,0x2E290);
    uint32_t style=manager?AREA_CALL(manager,0xED320,3):0;
    if(!style)return 0;
    uint32_t sp=g_esp;g_esp-=4;uint32_t out=g_esp;MEM32(out)=0;
    uint32_t move=AREA_VCALL(style,0x1C,node+8,out);
    uint32_t handle=MEM32(out);g_esp=sp;
    uint32_t source=move?area_resolve(handle):0;
    return source&&has_type(source,0x485878)?source:0;
}
static struct {
    uint32_t token,style,name,move;
    unsigned calls,failed;
} removal_source_test;
static void removal_test_move_lookup(void) {
    if(g_ecx!=removal_source_test.style||MEM32(g_esp+4)!=removal_source_test.name)
        removal_source_test.failed=1;
    ++removal_source_test.calls;g_eax=removal_source_test.move;g_esp+=8;
}
static int removal_source_fixture(void) {
    const uint32_t manager=0x4DB2B8;
    uint8_t saved_manager[0x1900];
    memcpy(saved_manager,(void*)XBOX_PTR(manager),sizeof(saved_manager));
    uint32_t flag=MEM32(0x4E7044),type=MEM32(0x485878),sp=g_esp;
    unsigned fp=g_fp_top;int failed=0;
    uint32_t base=xbox_HeapAlloc(0x2000,16);
    if(!base)return 1;
    memset((void*)XBOX_PTR(base),0,0x2000);
    uint32_t actor=base,source=base+0x800,style=base+0x1000;
    uint32_t source_style=base+0x1200,methods=base+0x1400;
    uint32_t event=base+0x1600,node=base+0x1700;
    MEM32(event+4)=node;MEM32(actor+0x2E8)=style;
    MEM32(style)=0x3D8D5C;MEM32(style+0x1C)=0;
    /* One original style-link tree node. Native EB4F0/EA8E0 walk it. */
    MEM32(style+0x18+0xC)=MEM32(style+0x18+0x10)=MEM32(style+0x18+0x14)=0x3FFFFFFF;
    MEM32(style+0x18+0x78)=0x400;
    MEM32(source)=methods;MEM32(methods)=0x2E6B0;
    MEM32(source+0x18)=2;MEM32(source+0x1C)=0x400;
    MEM32(source+0x2E8)=source_style;MEM32(source_style)=methods;
    removal_source_test.token=base+0x1800;
    removal_source_test.style=source_style;removal_source_test.name=node+8;
    removal_source_test.move=node;removal_source_test.calls=removal_source_test.failed=0;
    MEM32(methods+0x14)=removal_source_test.token;
    MEM32(0x485878)=0;MEM32(0x4E7044)=1;MEM32(manager)=0x3D4B7C;
    MEM32(manager+0x185C)=511;MEM32(manager+0x1018)=1;
    MEM32(manager+4)=source;MEM32(manager+0x105C)=0x400;
    if(removal_source_actor(event,actor)!=source||removal_source_test.calls!=1)failed=1;
    /* Reused entity slot/address with a new generation must not match. */
    MEM32(manager+0x105C)=0x600;
    if(removal_source_actor(event,actor)||removal_source_test.calls!=1)failed=2;
    MEM32(manager+0x105C)=0x400;MEM32(source+0x18)=0;
    if(removal_source_actor(event,actor)||removal_source_test.calls!=1)failed=3;
    MEM32(source+0x18)=2;removal_source_test.move=0;
    if(removal_source_actor(event,actor)||removal_source_test.calls!=2)failed=4;
    if(removal_source_test.failed||g_esp!=sp||g_fp_top!=fp)failed=5;
    removal_source_test.token=0;
    memcpy((void*)XBOX_PTR(manager),saved_manager,sizeof(saved_manager));
    MEM32(0x4E7044)=flag;MEM32(0x485878)=type;
    xbox_HeapFree(base);
    if(failed)fprintf(stderr,"FAIL removal source lookup %d\n",failed);
    else puts("PASS removal source: native style traversal/entity lookup, live source, stale generation, wrong type, absent move and ABI; move-resource lookup substituted");
    return failed;
}
static double removal_health_required(uint32_t event,uint32_t actor,uint32_t source_actor) {
    if(!actor)return 0;
    float fraction=MEMF(event+0x24);
    int resolved=raven_native_health_pct(area_read,MEM32(0x4D7300),event,actor,&fraction);
    if(resolved<0) {
        if(!source_actor)source_actor=removal_source_actor(event,actor);
        if(source_actor)raven_native_health_pct(area_read,MEM32(0x4D7300),event,source_actor,&fraction);
    }
    /* Eligibility uses the unrounded fraction of maximum health; execution
     * constructs an integer native damage record separately. Do not borrow
     * event virtual24, which already has an unrelated XML1 boolean ABI. */
    return (double)SMEM16(actor+0x246)*(double)fraction;
}
double xml1_removal_health_requirement(uint32_t event,uint32_t actor) {
    if(!removal_event_table||!event||MEM32(event)!=removal_event_table)return 0;
    uint32_t ax=g_eax,bx=g_ebx,cx=g_ecx,dx=g_edx,si=g_esi,di=g_edi;
    uint32_t bp=g_ebp,sp=g_esp,seh=g_seh_ebp;unsigned fp=g_fp_top;
    double result=removal_health_required(event,actor,0);
    if(g_esp!=sp||g_fp_top!=fp) {
        fputs("[REMOVAL HEALTH] source query stack/FPU imbalance\n",stderr);_Exit(4);
    }
    g_eax=ax;g_ebx=bx;g_ecx=cx;g_edx=dx;g_esi=si;g_edi=di;
    g_ebp=bp;g_seh_ebp=seh;return result;
}
static struct {uint32_t token,node,event;unsigned failed;} removal_gate_test;
static void removal_test_event_at(void) {
    if(g_ecx!=removal_gate_test.node)removal_gate_test.failed=1;
    uint32_t index=MEM32(g_esp+4);
    g_eax=index<2?removal_gate_test.event+index*64:0;g_esp+=8;
}
static int removal_gate_fixture(void) {
    uint32_t base=xbox_HeapAlloc(0x1400,16),sp=g_esp;
    unsigned fp=g_fp_top;int failed=0;
    if(!base)return 1;
    memset((void*)XBOX_PTR(base),0,0x1400);
    uint32_t actor=base,node=base+0x800,event=base+0xC00;
    uint32_t methods=base+0x1000,table=base+0x1200,old_table=removal_event_table;
    uint8_t cheat=MEM8(0x485847);MEM8(0x485847)=0;
    memcpy((void*)XBOX_PTR(methods),(void*)XBOX_PTR(0x3D8BDC),0x100);
    memcpy((void*)XBOX_PTR(table),(void*)XBOX_PTR(0x3D5B78),40);
    removal_gate_test.token=base+0x1300;removal_gate_test.node=node;
    removal_gate_test.event=event;removal_gate_test.failed=0;
    MEM32(node)=methods;MEM32(methods+0x18)=removal_gate_test.token;
    removal_event_table=table;MEM16(actor+0x246)=100;
    for(unsigned i=0;i<2;++i) {
        MEM32(event+i*64)=table;MEMF(event+i*64+0x24)=.25f;
        raven_native_energy_lifetime(event+i*64,0);
    }
    MEMF(actor+0x240)=49;
    if(AREA_CALL(node,0xE1A20,actor)&255)failed=1;
    MEMF(actor+0x240)=50;
    if(!(AREA_CALL(node,0xE1A20,actor)&255))failed=2;
    MEM32(event+64)=0x3D5B78;MEMF(actor+0x240)=25;
    if(!(AREA_CALL(node,0xE1A20,actor)&255))failed=3;
    MEM16(event+0x10)=10;MEMF(actor+0x248)=9;MEMF(actor+0x240)=100;
    if(AREA_CALL(node,0xE1A20,actor)&255)failed=4;
    MEMF(actor+0x248)=10;
    if(!(AREA_CALL(node,0xE1A20,actor)&255))failed=5;
    MEM16(event+0x10)=0;MEMF(event+0x24)=0;MEMF(actor+0x240)=0;
    if(!(AREA_CALL(node,0xE1A20,actor)&255))failed=6;
    if(removal_gate_test.failed||g_esp!=sp||g_fp_top!=fp)failed=7;
    for(unsigned i=0;i<2;++i)raven_native_energy_lifetime(event+i*64,2);
    removal_event_table=old_table;removal_gate_test.token=0;MEM8(0x485847)=cheat;
    xbox_HeapFree(base);
    if(failed)fprintf(stderr,"FAIL removal native health gate %d\n",failed);
    else puts("PASS removal native health gate: summed costs, equality, unrelated event, native energy rejection and zero health cost; event enumeration substituted");
    return failed;
}
static int removal_health_record(uint32_t event,uint32_t actor,uint32_t context,uint32_t record) {
    if(!actor)return 0;
    float fraction=MEMF(event+0x24);
    /* A missing binding context means no cost, not an encoded reference
     * interpreted as a float. Activation uses sponsor, or actor if absent. */
    uint32_t evaluator=context;
    raven_native_health_pct(area_read,MEM32(0x4D7300),event,
        evaluator&&MEM32(evaluator+0x2D8)?evaluator:0,&fraction);
    /* XML2 FAB78 reads maximum health. XML1's native getHealthMax (9C2E0)
     * reads signed actor+246; actor+240 is current health and is not the basis.
     * 3D49B1/3DA1F9 rounds upward under CW 1B3F from image address571BA0. */
    double amount=ceil((double)SMEM16(actor+0x246)*(double)fraction);
    if(!isfinite(amount)||amount<=0)return 0;
    if(amount>32767)amount=32767; /* Native XML1 hit amount is a signed word. */
    memset((void*)XBOX_PTR(record),0,100);
    /* XML2's dmg_direct mask10000000 maps to XML1 enum13 (44C498).
     * This cost has priority1, not the timed-damage helper's priority10. */
    AREA_CALL(record,0x2C8C0,0,(uint32_t)amount,0,0,13,0,1,
        0x5BC9D0,0x5BC9D0,0x5BC9D0,1);
    return 1;
}

/* XML2's query includes the owner and has no attack/visibility filter. The
 * existing attack query excludes its owner, so it is not interchangeable. */
static unsigned removal_targets(uint32_t actor,float radius,uint32_t handles[512]) {
    uint32_t sp=g_esp;unsigned count=0;
    if(!area_call0(0,0xA2AE0))return 0;
    g_esp-=48;uint32_t frame=g_esp;
    memset((void*)XBOX_PTR(frame),0,48);
    AREA_CALL(frame,0xA2A70,0x485874,frame+4); /* Actor RTTI, null exclusion. */
    uint32_t query=MEM32(frame);
    AREA_VCALL(query,0x68,actor+0x20,area_float(radius),0,0);
    MEM32(frame+8)=0x3C898C;
    uint32_t results=AREA_CDECL(0xA2B10,query,frame+8);
    if(!results) {
        /* XML1 has a separate three-slot result-list pool. A query slot can
         * succeed while that pool is exhausted by nested combat events. */
        area_call0(frame,0xA2AC0);g_esp=sp;return 0;
    }
    unsigned available=area_vcall0(results,0);
    for(unsigned i=0;i<available&&count<512;++i) {
        uint32_t target=AREA_VCALL(results,4,i);
        if(target)handles[count++]=MEM32(target+0x1C);
    }
    /* No borrowed entity/list survives a deactivation callback. Query slots
     * are also released before removal can recursively start another event. */
    AREA_CDECL(0xA2B70,results);area_call0(frame,0xA2AC0);g_esp=sp;
    return count;
}
static struct {uint32_t token,mask,origin;float radius;unsigned failed;} removal_query_test;
static void removal_test_query_begin(void) {
    if(MEM32(g_esp+4)!=0x485874||MEM32(MEM32(g_esp+8)))removal_query_test.failed=1;
    memset((void*)XBOX_PTR(g_ecx+8),0,64);g_esp+=12;
}
static void removal_test_query_sphere(void) {
    if(MEM32(g_esp+4)!=removal_query_test.origin||MEM32(g_esp+12)||MEM32(g_esp+16))
        removal_query_test.failed=1;
    removal_query_test.radius=MEMF(g_esp+8);MEM32(g_ecx+8)=removal_query_test.mask;g_esp+=20;
}
static int removal_query_fixture(void) {
    const uint32_t pool=0x4C2AA8,manager=0x4DB2B8;
    uint8_t *saved_pool=malloc(0x3950),*saved_manager=malloc(0x1900);
    uint32_t base=xbox_HeapAlloc(0x1400,16),sp=g_esp;unsigned fp=g_fp_top;int failed=0;
    if(!base||!saved_pool||!saved_manager){free(saved_pool);free(saved_manager);if(base)xbox_HeapFree(base);return 1;}
    memcpy(saved_pool,(void*)XBOX_PTR(pool),0x3950);memcpy(saved_manager,(void*)XBOX_PTR(manager),0x1900);
    uint32_t old_pool=MEM32(0x4C63F8),old_manager=MEM32(0x4E7044);
    memset((void*)XBOX_PTR(base),0,0x1400);
    MEM32(0x4E7044)=1;MEM32(manager)=0x3D4B7C;MEM32(manager+0x185C)=511;MEM32(manager+0x1018)=7;
    MEM32(0x4C63F8)=1;area_call0(pool,0xA2880);
    uint32_t methods=base+0x1000;
    memcpy((void*)XBOX_PTR(methods),(void*)XBOX_PTR(0x3D29EC),0x80);
    removal_query_test.token=base+0x1200;removal_query_test.failed=0;
    MEM32(methods+4)=removal_query_test.token;MEM32(methods+0x68)=removal_query_test.token+4;MEM32(pool)=methods;
    for(unsigned i=0;i<3;++i) {
        uint32_t actor=base+i*0x400;
        MEM32(actor)=0x3CF23C;MEM32(actor+0x1C)=0x400+i;
        MEM32(manager+4+i*4)=actor;MEM32(manager+0x105C+i*4)=0x400+i;
    }
    uint32_t handles[512]={0};removal_query_test.origin=base+0x20;removal_query_test.mask=7;
    unsigned count=removal_targets(base,120,handles),seen=0;
    for(unsigned i=0;i<count;++i)if(handles[i]>=0x400&&handles[i]<=0x402)seen|=1u<<(handles[i]-0x400);
    if(count!=3||seen!=7||removal_query_test.radius!=120)failed=1;
    removal_query_test.mask=0;if(removal_targets(base,0,handles))failed=2;
    for(unsigned i=0;i<3;++i)if(MEM8(pool+0x50+i*0x304)||MEM8(pool+0x1920+i*0x1014))failed=3;
    for(unsigned i=0;i<3;++i)MEM8(pool+0x1920+i*0x1014)=1;
    if(removal_targets(base,4,handles)||MEM8(pool+0x50))failed=4;
    for(unsigned i=0;i<3;++i)MEM8(pool+0x1920+i*0x1014)=0;
    removal_query_test.mask=7;if(removal_targets(base,3,handles)!=3)failed=5;
    for(unsigned i=0;i<3;++i)MEM8(pool+0x50+i*0x304)=1;
    if(removal_targets(base,2,handles))failed=6;
    if(removal_query_test.failed||g_esp!=sp||g_fp_top!=fp)failed=7;
    removal_query_test.token=0;
    memcpy((void*)XBOX_PTR(pool),saved_pool,0x3950);memcpy((void*)XBOX_PTR(manager),saved_manager,0x1900);
    MEM32(0x4C63F8)=old_pool;MEM32(0x4E7044)=old_manager;
    free(saved_pool);free(saved_manager);xbox_HeapFree(base);
    if(failed)fprintf(stderr,"FAIL removal target query %d\n",failed);
    else puts("PASS removal target query: owner-inclusive native list, snapshot handles, radius, empty set, query/result exhaustion and pool reuse; scene membership substituted");
    return failed;
}
static void removal_execute(void) {
    uint32_t sp=g_esp,event=g_ecx,actor=MEM32(sp+4),sponsor=MEM32(sp+8);
    if(!actor||!has_type(actor,0x485878))goto done;
    uint32_t owner=MEM32(actor+0x1C),context=sponsor?sponsor:actor;
    uint32_t context_handle=MEM32(context+0x1C);
    /* Native CEAction owns energy consumption; do not add a second debit. */
    AREA_CALL(event,0xCDE90,actor,sponsor);
    if(area_resolve(owner)!=actor)goto done;
    if(area_resolve(context_handle)!=context)context=0;
    int32_t radius=(int16_t)MEM16(event+0x28);
    if(MEM16(event+0x28)&0x8000u) {
        radius=context&&MEM32(context+0x2D8)?raven_native_attack_maxrange(area_read,NULL,
            MEM32(0x4D7300),event,context,0):0;
    }
    uint32_t targets[512];unsigned count=removal_targets(actor,(float)radius,targets);
    for(unsigned i=0;i<count;++i) {
        if(area_resolve(owner)!=actor)goto done;
        uint32_t target=area_resolve(targets[i]);
        if(!target||!has_type(target,0x485878)||character_team(target)!=character_team(actor))continue;
        if(MEM32(event+0x14)) {
            float from[3],to[3];area_center(target,from);area_center(actor,to);
            lightning_beam(MEM32(event+0x14),from,to);
        }
        if(area_resolve(targets[i])!=target)continue;
        raven_xml1_powerup_remove_named(target,0,MEM32(event+0x20));
        /* Class removal can destroy/recycle this actor before tag removal. */
        if(area_resolve(targets[i])==target)
            raven_xml1_powerup_remove_named(target,1,MEM32(event+0x1C));
    }
    if(area_resolve(owner)==actor) {
        /* Preserve the authored sponsor context. If it died, a bound cost
         * resolves to zero instead of dereferencing a recycled actor. */
        uint32_t live_context=area_resolve(context_handle);
        if(live_context!=context)live_context=0;
        g_esp-=100;uint32_t record=g_esp;
        if(removal_health_record(event,actor,live_context,record))
            AREA_VCALL(actor,0xA8,record,0,1,1);
        g_esp=sp;
    }
done:g_esp=sp+12;
}

/* Execution fixture runs native CEAction charging and exhausted-query handling.
 * Only terminal clock/node metadata/energy setter/hit receiver are substituted. */
static struct {uint32_t token,actor,metadata,effects;unsigned hits,sets,beams,failed;} removal_run_test;
static void removal_test_clock(void) {
    g_fp_top=(g_fp_top-1)&7;g_fp_stack[g_fp_top]=12.5;g_esp+=4;
}
static void removal_test_metadata(void) {g_eax=removal_run_test.metadata;g_esp+=4;}
static void removal_test_energy_set(void) {
    if(g_ecx!=removal_run_test.actor)removal_run_test.failed=1;
    MEM32(g_ecx+0x248)=MEM32(g_esp+4);++removal_run_test.sets;g_esp+=8;
}
static void removal_test_hit(void) {
    uint32_t record=MEM32(g_esp+4);
    if(g_ecx!=removal_run_test.actor||MEM16(record+8)!=26||MEM32(record+0x10)!=13||
       MEM16(record+0x14)!=1||MEM32(g_esp+8)||MEM32(g_esp+12)!=1||MEM32(g_esp+16)!=1)
        removal_run_test.failed=1;
    ++removal_run_test.hits;g_eax=1;g_esp+=20;
}
static void removal_test_effects(void) {g_eax=removal_run_test.effects;g_esp+=4;}
static void removal_test_center(void) {
    uint32_t out=MEM32(g_esp+4);MEMF(out)=1;MEMF(out+4)=2;MEMF(out+8)=3;g_eax=out;g_esp+=8;
}
static void removal_test_beam(void) {
    uint32_t origin=MEM32(g_esp+8),delta=MEM32(g_esp+12);
    if(g_ecx!=removal_run_test.effects||MEM32(g_esp+4)!=0x1234||
       MEMF(origin)!=1||MEMF(origin+4)!=2||MEMF(origin+8)!=3||
       MEMF(delta)||MEMF(delta+4)||MEMF(delta+8))removal_run_test.failed=1;
    for(unsigned i=16;i<=28;i+=4)if(MEM32(g_esp+i))removal_run_test.failed=1;
    ++removal_run_test.beams;g_eax=1;g_esp+=32;
}
static void removal_unlink_setup(uint32_t actor,uint32_t definitions);
static int removal_execution_fixture(void) {
    const uint32_t manager=0x4DB2B8,factory=0x4C2AA8;
    uint32_t base=xbox_HeapAlloc(0x2800,16),sp=g_esp,old_table=removal_event_table;
    unsigned fp=g_fp_top;int failed=0;if(!base)return 1;
    uint8_t saved_manager[0x1900],saved_query[0x3950],saved_powerups[0x2440],busy[3];
    memcpy(saved_query,(void*)XBOX_PTR(factory),sizeof(saved_query));
    memcpy(saved_powerups,(void*)XBOX_PTR(0x4833C0),sizeof(saved_powerups));
    uint32_t powerup_flag=MEM32(0x485800),game_flag=MEM32(0x49954C),game_table=MEM32(0x498E88);
    memcpy(saved_manager,(void*)XBOX_PTR(manager),sizeof(saved_manager));
    uint32_t flag=MEM32(0x4E7044),type=MEM32(0x485878),clock=MEM32(0x48D8E8);
    uint32_t query=MEM32(0x4C63F8);
    memset((void*)XBOX_PTR(base),0,0x2800);
    uint32_t actor=base,event=base+0x800,node=base+0x900,methods=base+0xA00;
    uint32_t node_methods=base+0xD00,clock_object=base+0xE00,clock_methods=base+0xF00;
    removal_event_table=0;
    if(!removal_construct(event)){failed=1;goto cleanup;}
    removal_run_test.token=base+0x1200;removal_run_test.actor=actor;
    removal_run_test.metadata=base+0x1300;
    removal_run_test.hits=removal_run_test.sets=removal_run_test.beams=removal_run_test.failed=0;
    MEM32(actor)=methods;MEM32(methods)=0x2E6B0;
    MEM32(methods+0x1A0)=removal_run_test.token+8;MEM32(methods+0xA8)=removal_run_test.token+12;
    MEM32(actor+0x18)=2;MEM32(actor+0x1C)=0x400;MEM32(actor+0x1FC)=UINT32_MAX;
    MEM32(actor+0x2F4)=node;MEM32(node)=node_methods;
    MEM32(node_methods+0xAC)=removal_run_test.token+4;
    MEM32(clock_object)=clock_methods;MEM32(clock_methods+0x104)=removal_run_test.token;
    MEM32(0x48D8E8)=clock_object;MEM32(0x485878)=0;MEM32(0x4E7044)=1;
    MEM32(manager)=0x3D4B7C;MEM32(manager+0x185C)=511;MEM32(manager+0x1018)=1;
    MEM32(manager+4)=actor;MEM32(manager+0x105C)=0x400;
    MEM32(0x4C63F8)|=1;
    for(unsigned i=0;i<3;++i){busy[i]=MEM8(factory+0x50+0x304*i);MEM8(factory+0x50+0x304*i)=1;}
    MEM16(actor+0x246)=101;MEMF(actor+0x248)=100;MEM16(actor+0x2BC)=100;
    MEM16(event+0x10)=7;MEMF(event+0x24)=.25f;
    AREA_VCALL(event,4,actor,0);
    if(MEMF(actor+0x248)!=93||MEMF(actor+0x484)!=12.5f||removal_run_test.sets!=1||removal_run_test.hits!=1)failed=2;
    MEMF(event+0x24)=0;AREA_VCALL(event,4,actor,0);
    if(MEMF(actor+0x248)!=86||removal_run_test.sets!=2||removal_run_test.hits!=1)failed=3;
    AREA_VCALL(event,4,0,0);MEM32(actor+0x18)=0;AREA_VCALL(event,4,actor,0);
    if(removal_run_test.sets!=2||removal_run_test.hits!=1)failed=4;
    MEM32(actor+0x18)=2;MEM32(manager+0x105C)=0x600;
    AREA_VCALL(event,4,actor,0);
    if(removal_run_test.sets!=3||removal_run_test.hits!=1)failed=5;
    /* Compose actual query/list traversal, class/tag selection and native
     * unlink with event dispatch. Scene membership is the sole query stub. */
    MEM32(manager+0x105C)=0x400;MEMF(actor+0x248)=100;
    area_call0(factory,0xA2880);
    uint32_t query_methods=base+0x2100,definitions=base+0x1800;
    memcpy((void*)XBOX_PTR(query_methods),(void*)XBOX_PTR(0x3D29EC),0x80);
    removal_query_test.token=base+0x2200;removal_query_test.mask=1;
    removal_query_test.origin=actor+0x20;removal_query_test.failed=0;
    MEM32(query_methods+4)=removal_query_test.token;MEM32(query_methods+0x68)=removal_query_test.token+4;
    MEM32(factory)=query_methods;
    for(unsigned i=0;i<3;++i) {
        uint32_t definition=definitions+0x100*i;
        raven_xml1_powerup_metadata_reset(definition);
        raven_xml1_powerup_metadata_attribute(definition,"class",i==1?"keep_fixture":"remove_fixture");
        raven_xml1_powerup_metadata_attribute(definition,"tag_name","keep_tag");
    }
    MEM32(0x485800)|=1;removal_unlink_setup(actor,definitions);
    strcpy((char*)XBOX_PTR(base+0x2300),"remove_fixture");AREA_CALL(event+0x20,0x27EF0,base+0x2300);
    strcpy((char*)XBOX_PTR(base+0x2300),"keep_tag");AREA_CALL(event+0x1C,0x27EF0,base+0x2300);
    MEMF(event+0x24)=.25f;MEM16(event+0x28)=120;
    MEM32(0x49954C)|=1;MEM32(0x498E88)=base+0x2400;
    MEM32(base+0x240C)=removal_run_test.token+16;
    removal_run_test.effects=base+0x2500;MEM32(base+0x2500)=base+0x2600;
    MEM32(base+0x2630)=removal_run_test.token+24;
    MEM32(methods+0x24)=removal_run_test.token+20;MEM32(event+0x14)=0x1234;
    AREA_VCALL(event,4,actor,0);
    if(removal_run_test.beams!=1)failed=9;
    if(MEM32(actor+0x1FC)!=UINT32_MAX||MEM32(0x4833C0+0x2224)||
       MEMF(actor+0x248)!=93||removal_run_test.sets!=4||removal_run_test.hits!=2||
       removal_query_test.failed||removal_query_test.radius!=120)failed=7;
    for(unsigned i=0;i<3;++i) {
        if(MEM8(factory+0x50+i*0x304)||MEM8(factory+0x1920+i*0x1014))failed=8;
        raven_xml1_powerup_metadata_retire(definitions+0x100*i);
    }
    removal_query_test.token=0;
    if(removal_run_test.failed||g_esp!=sp||g_fp_top!=fp)failed=6;
    for(unsigned i=0;i<3;++i)MEM8(factory+0x50+0x304*i)=busy[i];
cleanup:
    MEM32(0x49954C)=game_flag;MEM32(0x498E88)=game_table;
    memcpy((void*)XBOX_PTR(factory),saved_query,sizeof(saved_query));
    memcpy((void*)XBOX_PTR(0x4833C0),saved_powerups,sizeof(saved_powerups));
    MEM32(0x485800)=powerup_flag;
    MEM32(0x4C63F8)=query;MEM32(0x48D8E8)=clock;MEM32(0x4E7044)=flag;MEM32(0x485878)=type;
    memcpy((void*)XBOX_PTR(manager),saved_manager,sizeof(saved_manager));
    removal_run_test.token=0;raven_native_energy_lifetime(event,2);
    if(removal_event_table)xbox_HeapFree(removal_event_table-4);
    removal_event_table=old_table;xbox_HeapFree(base);
    if(failed)fprintf(stderr,"FAIL removal execution dispatch %d\n",failed);
    else puts("PASS removal execution dispatch: native energy calculation, one debit, health hit ABI, zero cost, absent/nonactor/stale actor, exhausted query pool and populated native class/tag removal; optional beam arguments checked; scene membership and terminal receivers substituted, rendering not exercised");
    return failed;
}
static struct {uint32_t token,actor;unsigned calls,clear_all;} removal_unlink_test;
static void removal_test_deactivate(void) {
    ++removal_unlink_test.calls;
    if(removal_unlink_test.clear_all) {
        /* Simulate a nested callback retiring the entire chain. The native
         * remover detects the empty head; the adapter must reject stale slots. */
        MEM32(removal_unlink_test.actor+0x1FC)=UINT32_MAX;
        MEM32(0x4833C0+0x2224)=0;
    }
    g_esp+=4; /* Native deactivation callback is cdecl. */
}
static void removal_unlink_setup(uint32_t actor,uint32_t definitions) {
    const uint32_t pool=0x4833C0;
    memset((void*)XBOX_PTR(pool),0,0x2440);
    MEM32(pool+0x2438)=127;MEM32(pool+0x243C)=7;
    MEM32(pool+0x2224)=7;MEM32(pool+0x2004)=7;
    MEM32(pool+0x2234)=3;MEM32(actor+0x1FC)=128;
    for(unsigned i=0;i<3;++i) {
        uint32_t instance=pool+4+64*i;
        MEM32(pool+0x2238+4*i)=128+i;
        MEM32(instance)=i<2?129+i:UINT32_MAX;
        MEM32(instance+0x1C)=MEM32(actor+0x1C);
        MEM32(instance+0x2C)=definitions+0x100*i;
    }
}
static int removal_unlink_fixture(void) {
    const uint32_t manager=0x4DB2B8,pool=0x4833C0;
    uint8_t saved_manager[0x1900],saved_pool[0x2440];
    memcpy(saved_manager,(void*)XBOX_PTR(manager),sizeof(saved_manager));
    memcpy(saved_pool,(void*)XBOX_PTR(pool),sizeof(saved_pool));
    uint32_t base=xbox_HeapAlloc(0x1400,16),sp=g_esp;unsigned fp=g_fp_top;int failed=0;
    if(!base)return 1;
    uint32_t flag=MEM32(0x4E7044),type=MEM32(0x485878),pool_flag=MEM32(0x485800);
    memset((void*)XBOX_PTR(base),0,0x1400);
    uint32_t actor=base,definitions=base+0x800,methods=base+0xC00,text=base+0xD00;
    MEM32(actor)=methods;MEM32(methods)=0x2E6B0;MEM32(actor+0x18)=2;MEM32(actor+0x1C)=0x400;
    MEM32(0x485878)=0;MEM32(0x4E7044)=1;MEM32(0x485800)|=1;
    MEM32(manager)=0x3D4B7C;MEM32(manager+0x185C)=511;MEM32(manager+0x1018)=1;
    MEM32(manager+4)=actor;MEM32(manager+0x105C)=0x400;
    removal_unlink_test.token=base+0x1200;removal_unlink_test.actor=actor;
    removal_unlink_test.calls=removal_unlink_test.clear_all=0;
    for(unsigned i=0;i<3;++i) {
        uint32_t definition=definitions+0x100*i;
        raven_xml1_powerup_metadata_reset(definition);
        raven_xml1_powerup_metadata_attribute(definition,"class",i==1?"keep_fixture":"remove_fixture");
        raven_xml1_powerup_metadata_attribute(definition,"tag_name",i==1?"keep_tag":"remove_tag");
        MEM32(definition+0xA0)=removal_unlink_test.token;
    }
    strcpy((char*)XBOX_PTR(text),"remove_fixture");AREA_CALL(text+64,0x27EF0,text);
    uint32_t class_name=MEM32(text+64);
    strcpy((char*)XBOX_PTR(text),"remove_tag");AREA_CALL(text+64,0x27EF0,text);
    uint32_t tag_name=MEM32(text+64);
    removal_unlink_setup(actor,definitions);
    if(raven_xml1_powerup_remove_named(actor,0,class_name)!=2||removal_unlink_test.calls!=2||
       MEM32(actor+0x1FC)!=129||MEM32(pool+4+64)!=UINT32_MAX||MEM32(pool+0x2224)!=2)failed=1;
    removal_unlink_setup(actor,definitions);removal_unlink_test.calls=0;
    if(raven_xml1_powerup_remove_named(actor,1,tag_name)!=2||removal_unlink_test.calls!=2||
       MEM32(actor+0x1FC)!=129||MEM32(pool+0x2224)!=2)failed=2;
    removal_unlink_setup(actor,definitions);removal_unlink_test.calls=0;removal_unlink_test.clear_all=1;
    if(raven_xml1_powerup_remove_named(actor,0,class_name)!=1||removal_unlink_test.calls!=1||
       MEM32(actor+0x1FC)!=UINT32_MAX)failed=3;
    if(g_esp!=sp||g_fp_top!=fp)failed=4;
    removal_unlink_test.token=0;
    for(unsigned i=0;i<3;++i)raven_xml1_powerup_metadata_retire(definitions+0x100*i);
    memcpy((void*)XBOX_PTR(manager),saved_manager,sizeof(saved_manager));
    memcpy((void*)XBOX_PTR(pool),saved_pool,sizeof(saved_pool));
    MEM32(0x485878)=type;MEM32(0x4E7044)=flag;MEM32(0x485800)=pool_flag;xbox_HeapFree(base);
    if(failed)fprintf(stderr,"FAIL removal native unlink %d\n",failed);
    else puts("PASS removal native unlink: class/tag selection, preserved unrelated effect, native head/tail unlink and slot retirement, callback-cleared chain and ABI");
    return failed;
}
static int removal_health_fixture(uint32_t pool) {
    uint32_t event=pool+0xD000,actor=event+128,record=actor+0x800,sp=g_esp;
    unsigned fp=g_fp_top;int failed=0;
    memset((void*)XBOX_PTR(event),0,0xA00);
    raven_native_energy_lifetime(event,0);
    MEM16(actor+0x246)=101;MEMF(actor+0x240)=1;MEMF(event+0x24)=.25f;
    if(removal_health_required(event,actor,0)!=25.25||removal_health_required(event,0,actor)!=0)failed=8;
    if(removal_source_actor(event,actor))failed=9;
    uint32_t node=record+0x80,style=record+0xA0;
    MEM32(event+4)=node;
    if(removal_source_actor(event,actor))failed=10;
    MEM32(actor+0x2E8)=style;MEM32(style)=0x3D8D5C;
    MEM32(style+0x1C)=0x3FFFFFFF; /* Empty native link tree. */
    if(removal_source_actor(event,actor)||g_esp!=sp||g_fp_top!=fp)failed=11;
    MEM32(event+4)=0;MEM32(actor+0x2E8)=0;
    if(!removal_health_record(event,actor,0,record)||MEM16(record+8)!=26||
       MEM32(record)||MEM16(record+0xA)||MEM32(record+0xC)||MEM32(record+0x10)!=13||
       MEM16(record+0x14)!=1||MEM32(record+0x18))failed=1;
    for(unsigned i=0x20;i<0x44;i+=4)if(MEM32(record+i))failed=2;
    MEMF(actor+0x240)=100;
    if(!removal_health_record(event,actor,0,record)||MEM16(record+8)!=26)failed=3;
    MEMF(event+0x24)=.001f;
    if(!removal_health_record(event,actor,0,record)||MEM16(record+8)!=1)failed=4;
    MEMF(event+0x24)=0;
    if(removal_health_record(event,actor,0,record))failed=5;
    MEMF(event+0x24)=1.0e20f;
    if(!removal_health_record(event,actor,0,record)||MEM16(record+8)!=32767)failed=6;
    if(removal_health_record(event,0,0,record)||g_esp!=sp||g_fp_top!=fp)failed=7;
    raven_native_energy_lifetime(event,2);
    if(failed)fprintf(stderr,"FAIL removal health record %d\n",failed);
    else puts("PASS removal health record: maximum health, positive fractional cost, native direct type/priority, zero cost, word bound and ABI; hit delivery not exercised");
    return failed;
}

/* Only native virtual boundaries are substituted in this programmatic test.
 * D7050, the intern table and package-selection control flow run unchanged. */
static struct {
    uint32_t token,package,scope,resource;
    unsigned resolutions,owner_calls,failed;
    const char *expected;
} removal_resource_test;
static void removal_test_package(void) {
    ++removal_resource_test.owner_calls;
    g_eax=removal_resource_test.package;g_esp+=4;
}
static void removal_test_scope(void) {g_eax=removal_resource_test.scope;g_esp+=4;}
static void removal_test_resolve(void) {
    uint32_t sp=g_esp;
    if(g_ecx!=0x47C560||MEM32(sp+8)!=(removal_resource_test.package?removal_resource_test.scope:12)||
       strcmp((const char*)XBOX_PTR(MEM32(sp+4)),removal_resource_test.expected))
        removal_resource_test.failed=1;
    ++removal_resource_test.resolutions;
    g_eax=removal_resource_test.resource;g_esp=sp+12;
}
static int removal_resource_fixture(uint32_t pool) {
    uint32_t event=pool+0xD000,owner=event+64,package=owner+64,table=package+64,text=table+256;
    uint32_t sp=g_esp,old_manager=MEM32(0x47C560),old_flags=MEM32(0x483014);
    unsigned fp=g_fp_top;int failed=0;
    memset((void*)XBOX_PTR(event),0,640);
    removal_resource_test.token=text+128;removal_resource_test.package=package;
    removal_resource_test.scope=44;removal_resource_test.resource=text+144;
    removal_resource_test.expected="removal_fixture_beam";
    removal_resource_test.resolutions=removal_resource_test.owner_calls=removal_resource_test.failed=0;
    MEM32(owner)=MEM32(package)=table;
    MEM32(table+0xC0)=removal_resource_test.token;
    MEM32(table+4)=removal_resource_test.token+4;
    MEM32(table+0x18)=removal_resource_test.token+8;
    MEM32(0x47C560)=table;MEM32(0x483014)|=1;
    MEM32(event+4)=owner;
    strcpy((char*)XBOX_PTR(text),removal_resource_test.expected);
    AREA_CALL(event+0x18,0x27EF0,text);
    if(!(removal_resource_phase(event,0)&255)||MEM32(event+0x14)!=removal_resource_test.resource||
       removal_resource_test.resolutions!=1||removal_resource_test.owner_calls!=2)failed=1;
    /* An absent owner/package selects the native global scope, never a
     * fabricated package or runtime resource alias. */
    removal_resource_test.package=0;
    removal_resource_phase(event,0);
    MEM32(event+4)=0;removal_resource_phase(event,0);
    removal_resource_test.expected="";MEM32(event+0x18)=0;
    removal_resource_phase(event,0);
    if(removal_resource_test.resolutions!=4||removal_resource_test.failed)failed=2;
    MEM32(event+0x14)=0x12345678;
    if(!(removal_resource_phase(event,1)&255)||MEM32(event+0x14)!=0x12345678||
       removal_resource_test.resolutions!=4||g_esp!=sp||g_fp_top!=fp)failed=3;
    MEM32(0x47C560)=old_manager;MEM32(0x483014)=old_flags;removal_resource_test.token=0;
    if(failed)fprintf(stderr,"FAIL removal resource phase %d\n",failed);
    else puts("PASS removal resource phase: native package scope, absent package/owner, empty resource and phase/ABI preservation; effect playback not exercised");
    return failed;
}
