/* XML2 CCEVictimSet (FA3C0), integrated with XML1's existing eligibility,
 * collision query, AI policy and victim assignment. Included after area APIs. */
#define VICTIM_SET_TABLE (handler_table+1456u)
static void victim_set_parse(void) {
    uint32_t event=g_ecx,sp=g_esp;
    const char *key=(const char*)XBOX_PTR(MEM32(sp+4));
    const char *value=(const char*)XBOX_PTR(MEM32(sp+8));
    if(!_stricmp(key,"maxrange")) {
        int bound=raven_native_attack_maxrange_parse(event,value);
        MEM16(event+0x14)=bound?0x8000u:(uint16_t)atoi(value);
        g_eax=1;g_esp=sp+12;return;
    }
    sub_000CDC10(); /* Existing CEAction energy and base-event attributes. */
}
static void victim_set_copy(void) {
    uint32_t event=g_ecx,sp=g_esp,source=MEM32(sp+4);
    AREA_CALL(event,0xCF660,source);
    if(source&&MEM32(source)==VICTIM_SET_TABLE) {
        MEM16(event+0x14)=MEM16(source+0x14);
        raven_native_energy_copy(event,source);
    }
    g_esp=sp+8;
}
static int victim_set_target_allowed(uint32_t actor,uint32_t target) {
    if(!target||!has_type(target,0x485878))return 0;
    /* XML1 owns grab/victim eligibility, including existing holds and states.
     * 391A0 is the native integration interface, not a new health predicate. */
    if(!(area_call0(target,0x391A0)&255))return 0;
    if(!(MEM8(actor+0x334)&1u)) {
        uint32_t team=character_team(target);
        if(team==character_team(actor)&&!friendly_fire_enabled())return 0;
        if(team==26) {
            uint32_t ai=area_call0(0,0xF9A00);
            if(AREA_VCALL(ai,0x78,MEM32(target+0x5B4))&255)return 0;
        }
    }
    return 1;
}
static void victim_set_execute(void) {
    uint32_t sp=g_esp,event=g_ecx,actor=MEM32(sp+4),other=MEM32(sp+8);
    if(!actor||!has_type(actor,0x485878))goto done;
    uint32_t context=other?other:actor;
    int32_t range=(int16_t)MEM16(event+0x14);
    if(MEM16(event+0x14)&0x8000u) {
        range=MEM32(context+0x2D8)?raven_native_attack_maxrange(area_read,NULL,
            MEM32(0x4D7300),event,context,0):0;
    }
    if(!area_call0(0,0xA2AE0))goto done;
    float start[3],end[3],facing[3];area_center(actor,start);area_facing(actor,facing);
    for(unsigned i=0;i<3;++i)end[i]=start[i]+range*facing[i];
    g_esp-=80;uint32_t frame=g_esp;memset((void*)XBOX_PTR(frame),0,80);
    MEM32(frame+4)=MEM32(actor+0x1C);
    area_vector(frame+8,start);area_vector(frame+20,end);
    MEMF(frame+32)=MEMF(frame+36)=MEMF(frame+40)=12;
    AREA_CALL(frame,0xA2A70,0x485874,frame+4);
    uint32_t query=MEM32(frame);
    AREA_VCALL(query,0x40,1,1);
    /* XML2 BA120's query option is XML1 A1770's fourth parameter.
     * XML1 slot80 is unrelated; invoking it as a setter corrupts the ABI. */
    AREA_VCALL(query,0x74,frame+8,frame+20,frame+32,0);
    AREA_VCALL(query,0x20,frame+44);
    /* XML1's native hit wrapper A0780 resolves record+0C through the entity
     * manager. Retain only its generation-bearing handle after pool release. */
    uint32_t candidate=area_call0(frame+44,0xA0780);
    uint32_t target_handle=candidate?MEM32(candidate+0x1C):0;
    area_call0(frame,0xA2AC0);g_esp=sp;
    uint32_t target=area_resolve(target_handle);
    if(victim_set_target_allowed(actor,target))
        AREA_CALL(actor,0x3CDF0,target_handle);
done:g_esp=sp+12;
}
static int victim_set_construct(uint32_t event,uint32_t name) {
    if(!name||_stricmp((const char*)XBOX_PTR(name),"ce_victim_set"))return 0;
    if(!handler_table)xml1_bishop_register();
    MEM32(event)=VICTIM_SET_TABLE;MEM32(event+4)=MEM32(event+8)=0;
    MEM8(event+0xC)=MEM8(event+0xD)=0;MEM8(event+0xE)&=0xF0;
    MEM16(event+0x10)=0;MEM8(event+0x12)&=0xfe;MEM16(event+0x14)=60;
    raven_native_energy_lifetime(event,0);return 1;
}

static int victim_set_fixture(uint32_t pool) {
    uint32_t event=pool+0xB000,clone=event+64,text=event+128,
        actor=pool+0xC000,target=pool+0xD000,methods=pool+0xE000;
    uint32_t sp=g_esp,actor_class=MEM32(0x485878),query_init=MEM32(0x4C63F8);
    unsigned fp=g_fp_top;int failed=0;
    uint8_t busy[3],friendly=MEM8(0x485840),multi[0x2C];
    memcpy(multi,(const void*)XBOX_PTR(0x4A01A0),sizeof(multi));
    memset((void*)XBOX_PTR(event),0,256);
    strcpy((char*)XBOX_PTR(text),"ce_victim_set");
    if(!xml1_lightning_event_construct(event,text)||MEM32(event)!=VICTIM_SET_TABLE||MEM16(event+20)!=60)failed=1;
    strcpy((char*)XBOX_PTR(text),"MAXRANGE");strcpy((char*)XBOX_PTR(text+32),"125");
    AREA_VCALL(event,16,text,text+32);
    if(!(g_eax&255)||MEM16(event+20)!=125)failed=2;
    strcpy((char*)XBOX_PTR(text),"tag");strcpy((char*)XBOX_PTR(text+32),"9");
    AREA_VCALL(event,16,text,text+32);
    if(!(g_eax&255)||MEM8(event+13)!=9)failed=3;
    strcpy((char*)XBOX_PTR(text),"ce_victim_set");victim_set_construct(clone,text);
    AREA_VCALL(clone,24,event);
    if(MEM16(clone+20)!=125||MEM8(clone+13)!=9)failed=4;
    MEM16(event+20)=1;if(MEM16(clone+20)!=125)failed=5;
    MEM32(event)=0x3D5B48;AREA_VCALL(clone,24,event);
    if(MEM16(clone+20)!=125)failed=6;
    victim_set_construct(event,text);victim_set_construct(clone,text);
    if(MEM16(clone+20)!=60||MEM8(clone+13))failed=7;

    /* Minimal native actors: property manager deliberately absent, so native
     * health uses its default. Native eligibility itself is never substituted. */
    memset((void*)XBOX_PTR(actor),0,0x600);memset((void*)XBOX_PTR(target),0,0x600);
    MEM32(methods)=0x2E6B0;MEM32(actor)=MEM32(target)=methods;
    MEM32(0x485878)=0;MEM32(actor+0x18)=MEM32(target+0x18)=2;
    MEM32(actor+0x1FC)=MEM32(target+0x1FC)=0xFFFFFFFF;
    MEM8(target+0x54D)=1;MEM8(target+0x334)=1;
    MEM32(actor+4)=1u<<27;MEM32(target+4)=1u<<28;
    if(!victim_set_target_allowed(actor,target)||victim_set_target_allowed(actor,0))failed=8;
    MEM8(target+0x54C)=0x10;
    if(victim_set_target_allowed(actor,target))failed=9;
    MEM8(target+0x54C)=0;
    MEM32(0x4A01C8)|=1;MEM32(0x4A01A0)=methods+64;
    MEM32(methods+64+0x54)=0x8A320;MEM8(0x4A01B0)=0;
    MEM32(target+4)=MEM32(actor+4);MEM8(0x485840)=0;
    if(victim_set_target_allowed(actor,target))failed=10;
    MEM8(0x485840)=1;if(!victim_set_target_allowed(actor,target))failed=11;
    MEM8(0x485840)=0;MEM8(0x4A01B0)=1;
    if(!victim_set_target_allowed(actor,target))failed=12;
    MEM8(0x4A01B0)=0;MEM8(actor+0x334)=1;
    if(!victim_set_target_allowed(actor,target))failed=13;

    /* Query exhaustion and absent/nonactor callers must leave selection alone
     * and return with the native event ABI. No world/collision simulation. */
    MEM32(0x4C63F8)|=1;
    for(unsigned i=0;i<3;++i) {
        busy[i]=MEM8(0x4C2AA8+0x50+0x304*i);
        MEM8(0x4C2AA8+0x50+0x304*i)=1;
    }
    MEM32(actor+0x554)=0x123;
    AREA_VCALL(event,4,actor,0);AREA_VCALL(event,4,0,0);
    MEM32(actor+0x18)=0;AREA_VCALL(event,4,actor,0);
    if(MEM32(actor+0x554)!=0x123||g_esp!=sp||g_fp_top!=fp)failed=14;
    for(unsigned i=0;i<3;++i)MEM8(0x4C2AA8+0x50+0x304*i)=busy[i];
    MEM32(0x4C63F8)=query_init;MEM32(0x485878)=actor_class;
    memcpy((void*)XBOX_PTR(0x4A01A0),multi,sizeof(multi));MEM8(0x485840)=friendly;
    raven_native_energy_lifetime(event,2);raven_native_energy_lifetime(clone,2);
    if(failed)fprintf(stderr,"FAIL victim-set contracts %d\n",failed);
    else puts("PASS victim-set factory dispatch, parser, clone/reuse, native eligibility, team rules, caller gates and query exhaustion; world query/neutral-AI path not exercised");
    return failed;
}
