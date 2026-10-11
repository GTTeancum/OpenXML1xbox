static int vacuum_identity(void* context,const char* name) {
    (void)context;return !_stricmp(name,"vacuum");
}
typedef struct vacuum_owner {
    uint32_t instance,owner,definition,holder,source,raw_source;
} vacuum_owner;
static int vacuum_owner_live(void* context) {
    const vacuum_owner* c=context;uint32_t current;
    return raven_xml1_active_powerup(read_guest,NULL,0x4833C0,c->owner,&current)==RAVEN_FOUND&&
        current==c->instance&&MEM32(current+0x2C)==c->definition&&
        MEM32(current+0x18)==c->raw_source&&MEM32(current+0x1C)==c->holder&&
        raven_xml1_guest_entity_valid(NULL,c->source)&&raven_xml1_guest_entity_valid(NULL,c->holder);
}
static void vacuum_contact(void* context,uint32_t target,uint32_t source) {
    vacuum_owner* c=context;uint32_t node=0,current=0,actor=0;
    if(!vacuum_owner_live(c)||!target||!source)return;
    uint32_t target_handle=MEM32(target+0x1C);
    if(raven_xml1_guest_entity_actor(NULL,c->source,&actor)!=RAVEN_FOUND||actor!=source||
       raven_xml1_guest_entity_actor(NULL,target_handle,&actor)!=RAVEN_FOUND||actor!=target)return;
    /* Attached XML2 virtual7C obtains the originating actor's combat node.
     * Resolve it now, then again after event lookup: never retain a borrowed
     * combat node or event across another actor transition. */
    if(powerup_origin_move(c->instance,&node)!=RAVEN_FOUND||!node)return;
    uint32_t sp=g_esp,method=MEM32(MEM32(node)+0x1C);
    g_ecx=node;PUSH32(g_esp,100);PUSH32(g_esp,0);RECOMP_ICALL_SAFE(method,sp);check_stack(sp);
    uint32_t event=g_eax;
    if(!event||!vacuum_owner_live(c)||
       powerup_origin_move(c->instance,&current)!=RAVEN_FOUND||current!=node||
       raven_xml1_guest_entity_actor(NULL,target_handle,&actor)!=RAVEN_FOUND||actor!=target||
       raven_xml1_guest_entity_actor(NULL,c->source,&actor)!=RAVEN_FOUND||actor!=source)return;
    /*153230's native push order is source then pulled target. XML1 event
     * virtual4 is thiscall with those two actor pointers, callee cleanup. */
    method=MEM32(MEM32(event)+4);g_ecx=event;
    PUSH32(g_esp,source);PUSH32(g_esp,target);PUSH32(g_esp,0);
    RECOMP_ICALL_SAFE(method,sp);check_stack(sp);
}
raven_lookup raven_xml1_vacuum_tick(uint32_t instance) {
    const uint32_t sp=g_esp,ax=g_eax,bx=g_ebx,cx=g_ecx,dx=g_edx,si=g_esi,di=g_edi,bp=g_ebp;
    const int top=g_fp_top,cmp=g_fp_cmp;const unsigned cc=g_fp_cc;
    double floats[8];memcpy(floats,g_fp_stack,sizeof(floats));
    raven_lookup result=RAVEN_MISSING;vacuum_owner c={0};c.instance=instance;
    if(raven_xml1_active_powerup_identity(read_guest,NULL,0x4833C0,instance,&c.owner)!=RAVEN_FOUND)goto done;
    c.definition=MEM32(instance+0x2C);c.raw_source=MEM32(instance+0x18);c.holder=MEM32(instance+0x1C);
    /* XML1 2AD03 canonicalizes a self-source to its null handle. Preserve
     * that native representation while supplying the actual sponsor actor. */
    c.source=c.raw_source==MEM32(0x498D90)?c.holder:c.raw_source;
    if(c.definition<0x10000u||(uint64_t)c.definition+0xC0>0x08000000ull){result=RAVEN_INVALID;goto done;}
    if(!raven_xml1_powerup_identity_visit(c.definition,0,vacuum_identity,NULL)||
       !raven_xml1_powerup_class_share_matches(c.definition,MEMF(c.definition+0x4C)))goto done;
    uint32_t holder,source;
    if(raven_xml1_guest_entity_actor(NULL,c.holder,&holder)!=RAVEN_FOUND||
       raven_xml1_guest_entity_actor(NULL,c.source,&source)!=RAVEN_FOUND||!vacuum_owner_live(&c))goto done;
    xml1_vacuum_update(holder,source,&c,vacuum_owner_live,vacuum_contact);result=RAVEN_FOUND;
done:
    check_stack(sp);g_eax=ax;g_ebx=bx;g_ecx=cx;g_edx=dx;g_esi=si;g_edi=di;g_ebp=bp;
    memcpy(g_fp_stack,floats,sizeof(floats));g_fp_top=top;g_fp_cmp=cmp;g_fp_cc=cc;
    return result;
}
/* Private contract fixture: only node lookup/event delivery are substituted.
 * Entity resolution and attached-owner generation checks use native pools. */
static struct {uint32_t token,node,event,source,target;unsigned mode,calls;int failed;} vacuum_fixture;
static void vacuum_fixture_lookup_event(void) {
    uint32_t sp=g_esp;
    if(g_ecx!=vacuum_fixture.node||MEM32(sp+4)!=100)vacuum_fixture.failed=1;
    if(vacuum_fixture.mode==1)MEM32(0x4833C0+0x2224)=0;
    if(vacuum_fixture.mode==2)MEM32(vacuum_fixture.source+0x2F4)=0;
    if(vacuum_fixture.mode==3)MEM32(0x4DB2B8+0x105C+8)=0x402;
    if(vacuum_fixture.mode==4)MEM32(0x4DB2B8+0x105C+4)=0x401;
    g_eax=vacuum_fixture.event;g_esp=sp+8;
}
static void vacuum_fixture_deliver(void) {
    uint32_t sp=g_esp;
    if(g_ecx!=vacuum_fixture.event||MEM32(sp+4)!=vacuum_fixture.target||
       MEM32(sp+8)!=vacuum_fixture.source)vacuum_fixture.failed=1;
    ++vacuum_fixture.calls;g_esp=sp+12;
}
void (*raven_xml1_vacuum_fixture_lookup(uint32_t address))(void) {
    if(vacuum_fixture.token&&address==vacuum_fixture.token)return vacuum_fixture_lookup_event;
    if(vacuum_fixture.token&&address==vacuum_fixture.token+4)return vacuum_fixture_deliver;
    return NULL;
}
int raven_xml1_vacuum_fixture(uint32_t instance,uint32_t actor,uint32_t scratch) {
    uint32_t sp=g_esp,definition=MEM32(instance+0x2C),manager=0x4DB2B8;
    uint32_t old_node=MEM32(actor+0x2F4),old_bits=MEM32(manager+0x1018),
        old_gen=MEM32(manager+0x105C+8),old_actor=MEM32(manager+12),old_center=MEM32(MEM32(actor)+0x24);
    uint32_t old_active=MEM32(0x4833C0+0x2224),old_tick=MEM32(definition+0xA8);
    uint32_t old_source_gen=MEM32(manager+0x105C+4);
    unsigned fp=g_fp_top;int failed=0;
    uint32_t target=scratch,node=scratch+0x1000,event=scratch+0x1100,table=scratch+0x1200;
    memset((void*)XBOX_PTR(scratch),0,0x1500);
    MEM32(target)=MEM32(actor);MEM32(target+0x1C)=0x202;MEM32(target+0x18)=MEM32(actor+0x18);
    MEM32(manager+0x1018)|=4;MEM32(manager+0x105C+8)=0x202;MEM32(manager+12)=target;
    MEM32(node)=table;MEM32(event)=table+0x100;MEM32(actor+0x2F4)=node;
    vacuum_fixture.token=scratch+0x1400;vacuum_fixture.node=node;vacuum_fixture.event=event;
    vacuum_fixture.source=actor;vacuum_fixture.target=target;vacuum_fixture.calls=0;vacuum_fixture.failed=0;
    MEM32(table+0x1C)=vacuum_fixture.token;MEM32(table+0x104)=vacuum_fixture.token+4;
    vacuum_owner c={0};c.instance=instance;c.definition=definition;
    c.holder=MEM32(instance+0x1C);c.source=c.raw_source=MEM32(instance+0x18);
    if(raven_xml1_active_powerup_identity(read_guest,NULL,0x4833C0,instance,&c.owner)!=RAVEN_FOUND)failed=1;
    for(unsigned mode=0;mode<5;++mode) {
        vacuum_fixture.mode=mode;MEM32(0x4833C0+0x2224)=old_active;
        MEM32(actor+0x2F4)=node;MEM32(manager+0x105C+8)=0x202;MEM32(manager+0x105C+4)=old_source_gen;
        vacuum_contact(&c,target,actor);
        if(vacuum_fixture.calls!=1){fprintf(stderr,"[VACUUM FIXTURE] contact mode=%u calls=%u\n",mode,vacuum_fixture.calls);failed=1;}
    }
    MEM32(0x4833C0+0x2224)=old_active;MEM32(manager+0x105C+8)=0x202;MEM32(manager+0x105C+4)=old_source_gen;
    MEM32(actor+0x2F4)=old_node;
    /* Installed think transport with exhausted native query pool. An
     * existing authored callback must survive installation unchanged. */
    raven_xml1_powerup_metadata_reset(definition);
    raven_xml1_powerup_metadata_attribute(definition,"class","vacuum");
    MEM32(definition+0xA8)=0;raven_harming_install_callbacks(definition);
    uint32_t tick=MEM32(definition+0xA8);
    if(!raven_harming_callback_is_code(tick))failed=1;
    MEM32(definition+0xA8)=0x12345678;raven_harming_install_callbacks(definition);
    if(MEM32(definition+0xA8)!=0x12345678)failed=1;
    MEM32(definition+0xA8)=tick;MEM32(MEM32(actor)+0x24)=0x75F40;
    uint32_t initialized=MEM32(0x4C63F8);unsigned char busy[3];MEM32(0x4C63F8)|=1;
    for(unsigned i=0;i<3;++i){uint32_t at=0x4C2AA8+0x50+0x304*i;busy[i]=MEM8(at);MEM8(at)=1;}
    if(raven_xml1_vacuum_tick(instance)!=RAVEN_FOUND)failed=1;
    MEM32(instance+0x18)=MEM32(0x498D90);
    if(raven_xml1_vacuum_tick(instance)!=RAVEN_FOUND)failed=1;
    MEM32(instance+0x18)=c.raw_source;
    PUSH32(g_esp,instance);PUSH32(g_esp,0);RECOMP_ICALL_SAFE(tick,sp);g_esp+=4;
    if(g_esp!=sp||g_fp_top!=fp)failed=1;
    MEM32(0x4833C0+0x2224)=0;
    if(raven_xml1_vacuum_tick(instance)!=RAVEN_MISSING)failed=1;
    for(unsigned i=0;i<3;++i)MEM8(0x4C2AA8+0x50+0x304*i)=busy[i];
    MEM32(0x4C63F8)=initialized;MEM32(0x4833C0+0x2224)=old_active;
    MEM32(MEM32(actor)+0x24)=old_center;MEM32(definition+0xA8)=old_tick;
    MEM32(manager+0x1018)=old_bits;MEM32(manager+0x105C+8)=old_gen;MEM32(manager+12)=old_actor;
    failed|=vacuum_fixture.failed;memset(&vacuum_fixture,0,sizeof(vacuum_fixture));
    printf("%s Vacuum: installed think ABI, authored callback preservation, exhausted query pool, contact target/source order, owner/node/target retirement; contact terminals substituted\n",failed?"FAIL":"PASS");
    return failed;
}
