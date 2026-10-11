/* CPUTriggerEvents152DE0 delegates to the originating combat node's native
 * tagged-event dispatcher, which retains XML1 actor/nonactor event routing.
 * IDs0..9 come from546628; hurt_attempt(6) needs an extra incoming-hit hook. */
static uint32_t trigger_event_guard[128];
static int trigger_removal_identity(void* unused,const char* name) {
    (void)unused;return !_stricmp(name,"remove_on_events");
}
static int trigger_events_identity(void* unused,const char* name) {
    (void)unused;return !_stricmp(name,"callevents");
}
static uint32_t trigger_physical(uint32_t handle) {
    uint32_t sp=g_esp;PUSH32(g_esp,handle);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x0002B810u,sub_0002B810);check_stack(sp-4);
    uint32_t entity=g_eax;g_esp=sp;return entity;
}
static raven_lookup trigger_events_inner(uint32_t instance,unsigned event,uint32_t other) {
    uint32_t owner;
    if(event>=10)return RAVEN_INVALID;
    if(raven_xml1_active_powerup_identity(read_guest,NULL,0x4833C0,instance,&owner)!=RAVEN_FOUND)return RAVEN_MISSING;
    uint32_t definition=MEM32(instance+0x2C),raw_source=MEM32(instance+0x18),holder=MEM32(instance+0x1C);
    if(definition<0x10000u||(uint64_t)definition+0xC0>0x08000000ull)return RAVEN_INVALID;
    if(!raven_xml1_powerup_identity_visit(definition,0,trigger_events_identity,NULL)||
       !raven_xml1_powerup_class_share_matches(definition,MEMF(definition+0x4C)))return RAVEN_MISSING;
    raven_powerup_trigger entry;
    if(!raven_xml1_powerup_trigger_get(definition,event,&entry))return RAVEN_MISSING;
    const unsigned slot=owner&127;
    const int guarded=(event>=3&&event<=6)||event==9;
    if(guarded&&trigger_event_guard[slot]==owner)return RAVEN_MISSING;
    // XML1 self-source canonicalization is an integration detail, not an
    // authored choice to remove the source actor from triggered events.
    uint32_t source_handle=raw_source==MEM32(0x498D90)?holder:raw_source,source=0;
    raven_xml1_guest_entity_actor(NULL,source_handle,&source);
    uint32_t selected_handle=entry.thirdparty?other:entry.sponsor?source_handle:holder;
    if(entry.thirdparty&&(!other||!raven_xml1_guest_entity_valid(NULL,other)))return RAVEN_MISSING;
    uint32_t selected=entry.sponsor&&!entry.thirdparty?source:trigger_physical(selected_handle);
    if(!selected)return RAVEN_MISSING;
    uint32_t node=0,current=0;
    if(powerup_origin_move(instance,&node)!=RAVEN_FOUND||!node)return RAVEN_MISSING;
    if(raven_xml1_active_powerup(read_guest,NULL,0x4833C0,owner,&current)!=RAVEN_FOUND||current!=instance||
       MEM32(instance+0x2C)!=definition||MEM32(instance+0x18)!=raw_source||MEM32(instance+0x1C)!=holder)
        return RAVEN_MISSING;
    uint32_t saved_guard=trigger_event_guard[slot];
    if(guarded)trigger_event_guard[slot]=owner;
    uint32_t sp=g_esp,method=MEM32(MEM32(node)+0x14);
    // XML1 E20B0(tag,selected,source) looks up the tag and invokes E1D90.
    // E1D90 chooses virtual4 for actors or virtual8 for physical nonactors.
    // Do not reduce this to Vacuum's actor-only event-virtual4 shortcut.
    g_ecx=node;PUSH32(g_esp,source);PUSH32(g_esp,selected);PUSH32(g_esp,entry.tag);PUSH32(g_esp,0);
    RECOMP_ICALL_SAFE(method,sp);check_stack(sp);
    // A nested callback may retire/reuse the attached slot. Full generation
    // ownership keeps the old call from clearing another owner's guard.
    if(guarded&&trigger_event_guard[slot]==owner)trigger_event_guard[slot]=saved_guard;
    return RAVEN_FOUND;
}
raven_lookup raven_xml1_trigger_event(uint32_t instance,unsigned event,uint32_t other) {
    uint32_t sp=g_esp,ax=g_eax,bx=g_ebx,cx=g_ecx,dx=g_edx,si=g_esi,di=g_edi,bp=g_ebp;
    int top=g_fp_top,cmp=g_fp_cmp;unsigned cc=g_fp_cc;double floats[8];memcpy(floats,g_fp_stack,sizeof(floats));
    raven_lookup result=trigger_events_inner(instance,event,other);
    check_stack(sp);g_eax=ax;g_ebx=bx;g_ecx=cx;g_edx=dx;g_esi=si;g_edi=di;g_ebp=bp;
    g_fp_top=top;g_fp_cmp=cmp;g_fp_cc=cc;memcpy(g_fp_stack,floats,sizeof(floats));return result;
}
void raven_xml1_trigger_hurt_attempt(uint32_t receiver,uint32_t record) {
    if(receiver<0x10000u||(uint64_t)receiver+0x244>0x08000000ull||
       record<0x10000u||(uint64_t)record+100>0x08000000ull||!(MEMF(receiver+0x240)>0))return;
    const uint32_t sp=g_esp,ax=g_eax,bx=g_ebx,cx=g_ecx,dx=g_edx,si=g_esi,di=g_edi,bp=g_ebp;
    const int top=g_fp_top,cmp=g_fp_cmp;const unsigned cc=g_fp_cc;
    double floats[8];memcpy(floats,g_fp_stack,sizeof(floats));
    // Both actor44130 and nonactor92386 ingress own a physical receiver.
    // The native physical resolver retains full generation/type validation.
    const uint32_t receiver_handle=MEM32(receiver+0x1C);uint32_t current=0;
    if(trigger_physical(receiver_handle)!=receiver)goto done;
    uint32_t handles[128],count=0,next=MEM32(receiver+0x1FC);
    while(next!=UINT32_MAX&&count<128) {
        uint32_t instance;
        if(raven_xml1_active_powerup(read_guest,NULL,0x4833C0,next,&instance)!=RAVEN_FOUND)break;
        int duplicate=0;for(unsigned i=0;i<count;++i)if(handles[i]==next){duplicate=1;break;}
        if(duplicate)break;
        handles[count++]=next;next=MEM32(instance);
    }
    // Snapshot full generations before any event: callbacks can remove this
    // effect, its successor, or the receiver. Newly attached effects wait until
    // the next attempted hit, rather than extending this traversal forever.
    for(unsigned i=0;i<count;++i) {
        if(trigger_physical(receiver_handle)!=receiver)break;
        uint32_t instance;
        if(raven_xml1_active_powerup(read_guest,NULL,0x4833C0,handles[i],&instance)!=RAVEN_FOUND||
           MEM32(instance+0x1C)!=receiver_handle)continue;
        uint32_t definition=MEM32(instance+0x2C);raven_powerup_trigger entry;
        const int removal=raven_xml1_powerup_identity_visit(definition,0,trigger_removal_identity,NULL);
        if(!removal&&(!raven_xml1_powerup_identity_visit(definition,0,trigger_events_identity,NULL)||
           !raven_xml1_powerup_trigger_get(definition,6,&entry)))continue;
        if(definition<0x10000u||(uint64_t)definition+0xC0>0x08000000ull)continue;
        // XML2 dispatcher154A8E filters the incoming record before invoking
        // virtual20. XML1's existing filter94F00 is authoritative here.
        g_ecx=definition+4;PUSH32(g_esp,record);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x00094F00u,sub_00094F00);check_stack(sp);
        if(!(g_eax&255))continue;
        if(raven_xml1_active_powerup(read_guest,NULL,0x4833C0,handles[i],&current)!=RAVEN_FOUND||current!=instance||
           MEM32(instance+0x2C)!=definition||MEM32(instance+0x1C)!=receiver_handle)continue;
        if(removal)raven_xml1_remove_events_hurt(instance,record);
        else raven_xml1_trigger_event(instance,6,MEM32(record));
    }
done:
    check_stack(sp);g_eax=ax;g_ebx=bx;g_ecx=cx;g_edx=dx;g_esi=si;g_edi=di;g_ebp=bp;
    g_fp_top=top;g_fp_cmp=cmp;g_fp_cc=cc;memcpy(g_fp_stack,floats,sizeof(floats));
}
static struct {
    uint32_t token,node,event,instance,selected,source,other;
    unsigned selector,calls,physical;int failed,recurse;
} trigger_fixture;
static void trigger_fixture_find(void) {
    if(g_ecx!=trigger_fixture.node||MEM32(g_esp+4)!=101+trigger_fixture.selector)trigger_fixture.failed=1;
    g_eax=trigger_fixture.event;g_esp+=8;
}
static void trigger_fixture_deliver(int physical) {
    if(g_ecx!=trigger_fixture.event||MEM32(g_esp+4)!=trigger_fixture.selected||
       MEM32(g_esp+8)!=trigger_fixture.source)trigger_fixture.failed=1;
    ++trigger_fixture.calls;if(physical)++trigger_fixture.physical;
    if(trigger_fixture.recurse&&raven_xml1_trigger_event(trigger_fixture.instance,
       trigger_fixture.selector,trigger_fixture.other)!=RAVEN_MISSING)trigger_fixture.failed=1;
    g_esp+=12;
}
static void trigger_fixture_actor(void){trigger_fixture_deliver(0);}
static void trigger_fixture_physical(void){trigger_fixture_deliver(1);}
void (*raven_xml1_trigger_fixture_lookup(uint32_t address))(void) {
    if(trigger_fixture.token&&address==trigger_fixture.token)return trigger_fixture_find;
    if(trigger_fixture.token&&address==trigger_fixture.token+4)return trigger_fixture_actor;
    if(trigger_fixture.token&&address==trigger_fixture.token+8)return trigger_fixture_physical;
    return NULL;
}
int raven_xml1_trigger_fixture(uint32_t instance,uint32_t actor,uint32_t scratch) {
    const uint32_t manager=0x4DB2B8,definition=MEM32(instance+0x2C),sp=g_esp;
    const uint32_t addresses[]={manager+0x1018,manager+0x105C+8,manager+0x105C+12,manager+12,manager+16,
        actor+0x18,actor+0x2F4,instance+0x1C,instance+0x18,0x4C0A60};
    uint32_t saved[10];for(unsigned i=0;i<10;++i)saved[i]=MEM32(addresses[i]);
    uint32_t holder=scratch,prop=scratch+0x600,node=scratch+0xC00,event=scratch+0xE00,table=scratch+0x1000;
    memset((void*)XBOX_PTR(scratch),0,0x1400);
    MEM32(holder)=MEM32(prop)=MEM32(actor);MEM32(holder+0x1C)=0x202;MEM32(prop+0x1C)=0x203;
    MEM32(holder+0x18)=6;MEM32(prop+0x18)=4;MEM32(actor+0x18)|=4;MEM32(0x4C0A60)=1;
    MEM32(manager+0x1018)|=12;MEM32(manager+0x105C+8)=0x202;MEM32(manager+0x105C+12)=0x203;
    MEM32(manager+12)=holder;MEM32(manager+16)=prop;MEM32(instance+0x1C)=0x202;MEM32(instance+0x18)=0x201;
    trigger_fixture.token=scratch+0x1300;trigger_fixture.node=node;trigger_fixture.event=event;
    trigger_fixture.instance=instance;trigger_fixture.source=actor;trigger_fixture.calls=trigger_fixture.physical=0;
    trigger_fixture.failed=trigger_fixture.recurse=0;MEM32(actor+0x2F4)=node;
    MEM32(node)=table;MEM32(table+0x14)=0xE20B0;MEM32(table+0x1C)=trigger_fixture.token;
    MEM32(event)=table+0x100;MEM32(table+0x104)=trigger_fixture.token+4;MEM32(table+0x108)=trigger_fixture.token+8;
    raven_xml1_powerup_metadata_reset(definition);
    raven_xml1_powerup_metadata_attribute(definition,"class","callevents");
    const char* names[]={"activate","deactivate","death","attempt_hit","damage","hurt","hurt_attempt","think","trail","touch"};
    unsigned fp=g_fp_top;int failed=0;
    for(unsigned e=0;e<10;++e) {
        uint32_t index=raven_xml1_powerup_trigger_begin(definition);char tag[16];snprintf(tag,sizeof(tag),"%u",101+e);
        raven_xml1_powerup_trigger_attribute(definition,index,"function",names[e]);
        raven_xml1_powerup_trigger_attribute(definition,index,"triggertag",tag);
        if(e==1)raven_xml1_powerup_trigger_attribute(definition,index,"sponsor","true");
        if(e==9){raven_xml1_powerup_trigger_attribute(definition,index,"sponsor","true");
            raven_xml1_powerup_trigger_attribute(definition,index,"thirdparty","true");}
        trigger_fixture.selector=e;trigger_fixture.other=e==9?0x203:0;
        trigger_fixture.selected=e==9?prop:e==1?actor:holder;
        trigger_fixture.recurse=(e>=3&&e<=6)||e==9;
        if(raven_xml1_trigger_event(instance,e,trigger_fixture.other)!=RAVEN_FOUND||trigger_fixture.calls!=e+1)failed=1;
    }
    if(trigger_fixture.physical!=1)failed=1;
    if(raven_xml1_trigger_event(instance,9,0)!=RAVEN_MISSING||raven_xml1_trigger_event(instance,9,0x403)!=RAVEN_MISSING||
       raven_xml1_trigger_event(instance,10,0)!=RAVEN_INVALID||trigger_fixture.calls!=10)failed=1;
    /* Exercise XML1's real owner traversal and selector-specific cdecl
     * stacks; a direct call to the shared helper cannot establish this ABI. */
    uint32_t callbacks[9];for(unsigned i=0;i<9;++i){callbacks[i]=MEM32(definition+0x9C+4*i);MEM32(definition+0x9C+4*i)=0;}
    raven_harming_install_callbacks(definition);
    const unsigned native_selector[]={0,1,2,6,7,4,3,5,8},event_id[]={0,1,2,7,8,4,3,5,9};
    uint32_t record=scratch+0x1400;memset((void*)XBOX_PTR(record),0,100);
    MEM32(record)=0x203;MEM16(record+8)=1;MEM32(record+0x10)=2;
    for(unsigned i=0;i<9;++i) {
        unsigned e=event_id[i];trigger_fixture.selector=e;trigger_fixture.other=0x203;
        trigger_fixture.selected=e==9?prop:e==1?actor:holder;
        trigger_fixture.recurse=(e>=3&&e<=6)||e==9;
        if(e==4) {
            // The real native dispatcher, not just the added callback, must
            // suppress outgoing damage for every attached powerup class.
            MEM32(record+0x18)=0x10000000u;
            g_ecx=actor;PUSH32(g_esp,0);PUSH32(g_esp,record);PUSH32(g_esp,0x203);PUSH32(g_esp,native_selector[i]);PUSH32(g_esp,0);
            RECOMP_ABI_CALL(0x00029DC0u,sub_00029DC0);
            if(trigger_fixture.calls!=10+i||g_esp!=sp||g_fp_top!=fp)failed=1;
        }
        // Incoming hurt remains enabled even when this modifier is set.
        MEM32(record+0x18)=e==5?0x10000000u:0;
        g_ecx=actor;PUSH32(g_esp,0);PUSH32(g_esp,record);PUSH32(g_esp,0x203);PUSH32(g_esp,native_selector[i]);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x00029DC0u,sub_00029DC0);
        if(trigger_fixture.calls!=11+i){fprintf(stderr,"[TRIGGER FIXTURE] native selector=%u calls=%u\n",native_selector[i],trigger_fixture.calls);failed=1;}
        MEM32(record+0x18)=0;
    }
    for(unsigned i=0;i<9;++i)MEM32(definition+0x9C+4*i)=callbacks[i];
    uint32_t health=MEM32(actor+0x240),holder_before=MEM32(instance+0x1C);
    MEMF(actor+0x240)=40;MEM32(instance+0x1C)=MEM32(actor+0x1C);
    trigger_fixture.selector=6;trigger_fixture.selected=actor;trigger_fixture.other=0x203;trigger_fixture.recurse=1;
    raven_xml1_trigger_hurt_attempt(actor,record);
    if(trigger_fixture.calls!=20)failed=1;
    MEMF(actor+0x240)=0;raven_xml1_trigger_hurt_attempt(actor,record);
    if(trigger_fixture.calls!=20)failed=1;
    MEM32(actor+0x240)=health;
    MEMF(prop+0x240)=40;MEM32(prop+0x1FC)=MEM32(actor+0x1FC);
    MEM32(instance+0x1C)=0x203;trigger_fixture.selected=prop;
    raven_xml1_trigger_hurt_attempt(prop,record);
    if(trigger_fixture.calls!=21||trigger_fixture.physical!=3)failed=1;
    MEM32(instance+0x1C)=holder_before;
    MEM32(manager+0x105C+12)=0x403;
    if(raven_xml1_trigger_event(instance,9,0x203)!=RAVEN_MISSING||trigger_fixture.calls!=21)failed=1;
    if(g_esp!=sp||g_fp_top!=fp||trigger_fixture.failed)failed=1;
    memset(&trigger_fixture,0,sizeof(trigger_fixture));
    for(unsigned i=0;i<10;++i)MEM32(addresses[i])=saved[i];
    printf("%s TriggerEvents: ten selectors, nine native callbacks, no_on_damage suppresses outgoing callbacks but preserves incoming hurt, actor/physical incoming hurt_attempt traversal/health gate, holder/sponsor/third-party precedence, nonactor routing, recursion and stale-target exclusion; lookup and delivery terminals substituted\n",failed?"FAIL":"PASS");
    return failed;
}
