/* CPUAbsorb14C320: restoration is a hit callback, not conversion of the
 * incoming hit to healing. Existing XML1 dmgmod_drain remains untouched. */
void raven_xml1_absorb_load_resource(uint32_t definition,uint32_t scope) {
    char path[256];raven_lookup result=raven_absorb_beam_path(definition,path,sizeof(path));
    if(result==RAVEN_MISSING)return;
    if(result==RAVEN_INVALID){fputs("[ABSORB] Invalid beam resource path\n",stderr);_Exit(4);}
    const uint32_t sp=g_esp,ax=g_eax,bx=g_ebx,cx=g_ecx,dx=g_edx,si=g_esi,di=g_edi,bp=g_ebp;
    const int top=g_fp_top,cmp=g_fp_cmp;const unsigned cc=g_fp_cc;
    double floats[8];memcpy(floats,g_fp_stack,sizeof(floats));
    g_esp-=256;uint32_t frame=g_esp;strcpy((char*)XBOX_PTR(frame),path);
    // Native94EEE loads an effect through188C0 virtual18(name,package).
    // The owning native package manages refs; no host-owned resource handle
    // survives its teardown and no extra per-hit resource ref is acquired.
    PUSH32(g_esp,0);RECOMP_ABI_CALL(0x000188C0u,sub_000188C0);check_stack(frame);
    uint32_t manager=g_eax,method=MEM32(MEM32(manager)+0x18);
    g_ecx=manager;PUSH32(g_esp,scope);PUSH32(g_esp,frame);PUSH32(g_esp,0);
    RECOMP_ICALL_SAFE(method,frame);check_stack(frame);
    g_esp=sp;g_eax=ax;g_ebx=bx;g_ecx=cx;g_edx=dx;g_esi=si;g_edi=di;g_ebp=bp;
    memcpy(g_fp_stack,floats,sizeof(floats));g_fp_top=top;g_fp_cmp=cmp;g_fp_cc=cc;
}
typedef struct {
    uint32_t owner,instance,definition,raw_source,source,holder,actor,recipient,recipient_handle;
} absorb_context;
static int absorb_live(const absorb_context* c) {
    uint32_t current;
    return raven_xml1_active_powerup(read_guest,NULL,0x4833C0,c->owner,&current)==RAVEN_FOUND&&
        current==c->instance&&MEM32(current+0x2C)==c->definition&&
        MEM32(current+0x18)==c->raw_source&&MEM32(current+0x1C)==c->holder&&
        raven_xml1_guest_entity_valid(NULL,c->source)&&raven_xml1_guest_entity_valid(NULL,c->holder)&&
        MEM32(c->actor+0x1C)==c->holder&&MEM32(c->recipient+0x1C)==c->recipient_handle;
}
static raven_lookup absorb_inner(uint32_t instance,uint32_t other,uint32_t record,int inflicted) {
    absorb_context c={0};c.instance=instance;
    if(raven_xml1_active_powerup_identity(read_guest,NULL,0x4833C0,instance,&c.owner)!=RAVEN_FOUND)
        return RAVEN_MISSING;
    c.definition=MEM32(instance+0x2C);c.holder=MEM32(instance+0x1C);c.raw_source=MEM32(instance+0x18);
    if(c.definition<0x10000u||(uint64_t)c.definition+0xC0>0x08000000ull)return RAVEN_INVALID;
    if(raven_absorb_mode(c.definition)!=(inflicted?1:2)||
       !raven_xml1_powerup_class_share_matches(c.definition,MEMF(c.definition+0x4C)))return RAVEN_MISSING;
    if(record<0x10000u||(uint64_t)record+100>0x08000000ull)return RAVEN_INVALID;
    c.source=c.raw_source==MEM32(0x498D90)?c.holder:c.raw_source;
    uint32_t source_actor;
    if(raven_xml1_guest_entity_actor(NULL,c.holder,&c.actor)!=RAVEN_FOUND||
       raven_xml1_guest_entity_actor(NULL,c.source,&source_actor)!=RAVEN_FOUND)return RAVEN_MISSING;
    raven_absorb_values values;
    raven_lookup status=raven_absorb_sample(read_guest,NULL,c.definition,MEM32(0x4D7300),
        c.actor,source_actor,&values);
    if(status!=RAVEN_FOUND)return status;
    c.recipient=values.sponsor?source_actor:c.actor;c.recipient_handle=values.sponsor?c.source:c.holder;
    const double roll=raven_xml1_guest_random_unit();
    if(!isfinite(values.chance)||!(roll<=values.chance)||!absorb_live(&c))return RAVEN_MISSING;
    const double damage=raven_native_damage_amount(record,SMEM16(record+8));
    const double restored=damage*values.percentage;
    if(!isfinite(restored))return RAVEN_INVALID;
    if(restored<=0)return RAVEN_MISSING;
    int16_t amount;
    // Use the project's integer/nonzero policy at XML1's existing boundary.
    // Do not reproduce XML2 short overflow or change XML1 health/energy caps.
    if(!raven_xml1_imported_damage_short((float)restored,&amount))return RAVEN_INVALID;
    const uint32_t sp=g_esp;float previous;
    if(values.energy) {
        const int fp=g_fp_top;g_ecx=c.recipient;PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x0002E8C0u,sub_0002E8C0);check_stack(sp);
        previous=(float)pop_native_float(fp);
    }else previous=MEMF(c.recipient+0x240);
    if(!absorb_live(&c))return RAVEN_MISSING;
    const float next=previous+amount;uint32_t bits;memcpy(&bits,&next,4);
    const uint32_t setter=MEM32(MEM32(c.recipient)+(values.energy?0x1A0:0x19C));
    g_ecx=c.recipient;PUSH32(g_esp,bits);PUSH32(g_esp,0);
    RECOMP_ICALL_SAFE(setter,sp);check_stack(sp);
    // A setter may run nested game code. Restoration has already happened;
    // retirement prevents later notifications/effects, never an unsafe undo.
    if(!absorb_live(&c))return RAVEN_FOUND;
    g_esp-=32;const uint32_t frame=g_esp;
    MEM32(frame)=c.recipient_handle;MEM32(frame+4)=other;
    PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00158860u,sub_00158860);check_stack(frame);
    if(absorb_live(&c)) {
        uint32_t hud=g_eax,method=MEM32(MEM32(hud)+0x34);
        // XML1 HUD156EB0 consumes seven args and an INTEGER amount. Negative
        // numbers are restoration. Do not use XML2's float/virtual48 ABI.
        g_ecx=hud;PUSH32(g_esp,0);PUSH32(g_esp,0);PUSH32(g_esp,0);
        PUSH32(g_esp,values.energy?1:0);PUSH32(g_esp,frame+4);PUSH32(g_esp,frame);
        PUSH32(g_esp,(uint32_t)-(int32_t)amount);PUSH32(g_esp,0);
        RECOMP_ICALL_SAFE(method,frame);check_stack(frame);
    }
    g_esp=sp;
    if(values.beam[0]&&c.recipient_handle!=c.holder&&absorb_live(&c)) {
        uint32_t resource,scope;
        if(!raven_xml1_powerup_effect_scope_get(c.definition,&scope))return RAVEN_FOUND;
        status=raven_xml1_guest_effect_resource(values.beam,scope,&resource);
        if(status==RAVEN_INVALID)return status;
        if(status==RAVEN_FOUND&&absorb_live(&c)) {
            g_esp-=48;const uint32_t beam=g_esp;
            g_ecx=c.actor;uint32_t position=MEM32(MEM32(c.actor)+0x24);
            PUSH32(g_esp,beam);PUSH32(g_esp,0);RECOMP_ICALL_SAFE(position,beam);check_stack(beam);
            if(!absorb_live(&c)){g_esp=sp;return RAVEN_FOUND;}
            g_ecx=c.recipient;position=MEM32(MEM32(c.recipient)+0x24);
            PUSH32(g_esp,beam+16);PUSH32(g_esp,0);RECOMP_ICALL_SAFE(position,beam);check_stack(beam);
            if(!absorb_live(&c)){g_esp=sp;return RAVEN_FOUND;}
            for(unsigned i=0;i<3;++i)MEMF(beam+32+4*i)=MEMF(beam+16+4*i)-MEMF(beam+4*i);
            uint32_t manager=effect_manager();
            uint32_t current_resource=0;
            if(absorb_live(&c)&&raven_xml1_guest_effect_resource(values.beam,scope,&current_resource)==RAVEN_FOUND&&
               current_resource==resource&&absorb_live(&c)) {
                g_ecx=manager;uint32_t method=MEM32(MEM32(manager)+0x30);
                PUSH32(g_esp,0);PUSH32(g_esp,0);PUSH32(g_esp,0);PUSH32(g_esp,0);
                PUSH32(g_esp,beam+32);PUSH32(g_esp,beam);PUSH32(g_esp,resource);PUSH32(g_esp,0);
                RECOMP_ICALL_SAFE(method,beam);check_stack(beam);
            }
            g_esp=sp;
        }
    }
    return RAVEN_FOUND;
}
raven_lookup raven_xml1_absorb(uint32_t instance,uint32_t other,uint32_t record,int inflicted) {
    const uint32_t sp=g_esp,ax=g_eax,bx=g_ebx,cx=g_ecx,dx=g_edx,si=g_esi,di=g_edi,bp=g_ebp;
    const int top=g_fp_top,cmp=g_fp_cmp;const unsigned cc=g_fp_cc;
    double stack[8];memcpy(stack,g_fp_stack,sizeof(stack));
    raven_lookup result=absorb_inner(instance,other,record,inflicted);
    check_stack(sp);g_eax=ax;g_ebx=bx;g_ecx=cx;g_edx=dx;g_esi=si;g_edi=di;g_ebp=bp;
    memcpy(g_fp_stack,stack,sizeof(stack));g_fp_top=top;g_fp_cmp=cmp;g_fp_cc=cc;
    return result;
}
/* Private process-local fixture: native resolution, definition load boundary,
 * actor setters and position getters run. Only manager terminals are replaced. */
static struct {
    uint32_t token,manager,owner,source,holder,data;
    unsigned loads,notifications,emissions,mode,failed;
} absorb_fixture;
static void absorb_test_load(void) {
    uint32_t sp=g_esp;
    if(g_ecx!=0x47C560||strcmp((char*)XBOX_PTR(MEM32(sp+4)),"fixture_event")||
       MEM32(sp+8)!=12)absorb_fixture.failed=1;
    ++absorb_fixture.loads;g_eax=0x81;g_esp=sp+12;
}
static void absorb_test_hud(void) {
    uint32_t sp=g_esp;
    if(g_ecx!=0x56DD08||MEM32(sp+4)!=(uint32_t)-5||MEM32(MEM32(sp+8))!=0x202||
       MEM32(MEM32(sp+12))!=0x201||MEM32(sp+16)||MEM32(sp+20)||MEM32(sp+24)||MEM32(sp+28))
        absorb_fixture.failed=1;
    ++absorb_fixture.notifications;
    if(absorb_fixture.mode==1)MEM32(0x4833C0+0x2238)+=128;
    if(absorb_fixture.mode==2)MEM32(0x4DB2B8+0x105C+8)+=512;
    g_eax=1;g_esp=sp+32;
}
static void absorb_test_manager(void) {
    if(g_ecx!=0x498E88)absorb_fixture.failed=1;
    if(absorb_fixture.mode==3)MEM32(absorb_fixture.data+0x3B10+0x62B4+4)=0x101;
    g_eax=absorb_fixture.manager;g_esp+=4;
}
static void absorb_test_beam(void) {
    uint32_t sp=g_esp,origin=MEM32(sp+8),direction=MEM32(sp+12);
    if(g_ecx!=absorb_fixture.manager||MEM32(sp+4)!=0x81||MEM32(sp+16)||MEM32(sp+20)||
       MEM32(sp+24)||MEM32(sp+28))absorb_fixture.failed=1;
    // Native virtual24 is the bounds centre, not the actor's world origin.
    for(unsigned i=0;i<3;++i) {
        const float from=.5f*(MEMF(absorb_fixture.holder+0x38+4*i)+MEMF(absorb_fixture.holder+0x44+4*i));
        const float to=.5f*(MEMF(absorb_fixture.source+0x38+4*i)+MEMF(absorb_fixture.source+0x44+4*i));
        if(MEMF(origin+4*i)!=from||MEMF(direction+4*i)!=to-from)absorb_fixture.failed=1;
    }
    ++absorb_fixture.emissions;g_eax=1;g_esp=sp+32;
}
void (*raven_xml1_absorb_fixture_lookup(uint32_t address))(void) {
    if(!absorb_fixture.token)return NULL;
    if(address==absorb_fixture.token)return absorb_test_load;
    if(address==absorb_fixture.token+4)return absorb_test_hud;
    if(address==absorb_fixture.token+8)return absorb_test_manager;
    if(address==absorb_fixture.token+12)return absorb_test_beam;
    return NULL;
}
int raven_xml1_absorb_fixture(uint32_t instance,uint32_t actor,uint32_t scratch) {
    if(absorb_fixture.token)return 1;
    const uint32_t def=MEM32(instance+0x2C),sp=g_esp,source=scratch+0xB000,record=scratch+0xB400;
    const uint32_t root=0x4DB2B8,table=MEM32(actor),source_handle=MEM32(instance+0x18);
    const uint32_t entry=MEM32(root+12),generation=MEM32(root+0x105C+8),allocated=MEM32(root+0x1018);
    const uint32_t pos=MEM32(table+0x24),setter=MEM32(table+0x19C),owner=MEM32(0x4833C0+0x2238);
    const uint32_t globals[]={0x47C548,0x508448,0x47C560,0x483014,0x56DD08,0x570D60,0x498E88,0x49954C};
    uint32_t saved[8];for(unsigned i=0;i<8;++i)saved[i]=MEM32(globals[i]);
    unsigned char definition[192];memcpy(definition,(void*)XBOX_PTR(def),sizeof(definition));
    raven_xml1_powerup_metadata_clone(scratch+0xB500,def);raven_xml1_powerup_metadata_reset(def);
    memset((void*)XBOX_PTR(scratch),0,0xB500);memset((void*)XBOX_PTR(def),0,192);
    memcpy((void*)XBOX_PTR(source),(void*)XBOX_PTR(actor),0x300);
    MEM32(source+0x1C)=0x202;MEM16(source+0x246)=100;
    for(unsigned i=0;i<3;++i){
        MEMF(source+0x38+4*i)=10.f*(i+1);MEMF(source+0x44+4*i)=10.f*(i+1)+2;
    }
    MEM32(root+12)=source;MEM32(root+0x105C+8)=0x202;MEM32(root+0x1018)=allocated|4;
    MEM32(instance+0x18)=0x202;MEM32(table+0x19C)=0x2E5B0;MEM32(table+0x24)=0x75F40;
    const uint32_t tree=scratch+0x164;
    MEM32(0x47C548)=scratch;MEM32(0x508448)=saved[1]|1;
    MEM32(tree+4)=0;MEM32(tree+0x10)=MEM32(tree+0x14)=0x3FFFFFFF;
    strcpy((char*)XBOX_PTR(tree+0x18),"12:effects/fixture_event.xml");
    MEM32(tree+0x36EC)=0x81;MEM32(scratch+0xA080)=127;
    MEM32(scratch+0x3B10+0x62B4+4)=0x81;MEM32(scratch+0x3B10+0x6298)=2;
    MEM32(scratch+0x3B98+0x8C)=12;
    absorb_fixture.token=scratch+0xA800;absorb_fixture.manager=scratch+0xA400;
    absorb_fixture.source=source;absorb_fixture.holder=actor;absorb_fixture.data=scratch;
    MEM32(0x47C560)=scratch+0xA200;MEM32(scratch+0xA218)=absorb_fixture.token;MEM32(0x483014)=saved[3]|1;
    MEM32(0x56DD08)=scratch+0xA300;MEM32(scratch+0xA334)=absorb_fixture.token+4;MEM32(0x570D60)=saved[5]|1;
    MEM32(0x498E88)=scratch+0xA500;MEM32(scratch+0xA50C)=absorb_fixture.token+8;MEM32(0x49954C)=saved[7]|1;
    MEM32(absorb_fixture.manager)=scratch+0xA600;MEM32(scratch+0xA630)=absorb_fixture.token+12;
    raven_xml1_powerup_metadata_attribute(def,"class","absorb");
    raven_xml1_powerup_metadata_attribute(def,"inflicted","true");
    raven_xml1_powerup_metadata_attribute(def,"sponsor","true");
    raven_xml1_powerup_metadata_attribute(def,"damagepercent","0.25");
    raven_xml1_powerup_metadata_attribute(def,"beameffect","fixture_event");
    g_ecx=def;PUSH32(g_esp,12);PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00094FE0u,sub_00094FE0);check_stack(sp);
    uint32_t scope=0;int failed=absorb_fixture.loads!=1||!raven_xml1_powerup_effect_scope_get(def,&scope)||scope!=12;
    MEM16(record+8)=20;
    for(unsigned mode=0;mode<4;++mode) {
        absorb_fixture.mode=mode;MEMF(source+0x240)=30;
        MEM32(0x4833C0+0x2238)=owner;MEM32(root+0x105C+8)=0x202;
        MEM32(scratch+0x3B10+0x62B4+4)=0x81;
        uint32_t ax=g_eax,cx=g_ecx,dx=g_edx;int top=g_fp_top;
        raven_lookup result=raven_xml1_absorb(instance,0x201,record,1);
        if(result!=RAVEN_FOUND||MEMF(source+0x240)!=35||
           g_esp!=sp||g_eax!=ax||g_ecx!=cx||g_edx!=dx||g_fp_top!=top)failed=1;
        if(absorb_fixture.emissions!=1||absorb_fixture.notifications!=mode+1)failed=1;
        if(failed||absorb_fixture.failed)fprintf(stderr,"[ABSORB FIXTURE] mode=%u result=%d hp=%g load=%u hud=%u beam=%u terminal=%u scope=%u\n",
            mode,result,(double)MEMF(source+0x240),absorb_fixture.loads,absorb_fixture.notifications,absorb_fixture.emissions,absorb_fixture.failed,scope);
    }
    failed|=absorb_fixture.failed;
    for(unsigned i=0;i<8;++i)MEM32(globals[i])=saved[i];
    MEM32(root+12)=entry;MEM32(root+0x105C+8)=generation;MEM32(root+0x1018)=allocated;
    MEM32(instance+0x18)=source_handle;MEM32(0x4833C0+0x2238)=owner;
    MEM32(table+0x24)=pos;MEM32(table+0x19C)=setter;
    memcpy((void*)XBOX_PTR(def),definition,sizeof(definition));
    raven_xml1_powerup_metadata_clone(def,scratch+0xB500);raven_xml1_powerup_metadata_retire(scratch+0xB500);
    memset(&absorb_fixture,0,sizeof(absorb_fixture));
    fprintf(stderr,"[ABSORB INTEGRATION] %s native load boundary, scoped lookup, distinct sponsor, native setter/positions, HUD/beam ABI and nested owner/actor/resource retirement; manager terminals substituted\n",failed?"FAIL":"PASS");
    return failed;
}
