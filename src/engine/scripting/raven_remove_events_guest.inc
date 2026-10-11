/* XML2 parser150100 accumulates masks. Resolve names with XML1's existing
 * tables; imported ordinal and bit assignments are not compatible. */
static int remove_events_identity(void* unused,const char* name) {
    (void)unused;return !_stricmp(name,"remove_on_events");
}
static void remove_events_attribute(void* opaque,const char* key,const char* value) {
    raven_remove_events_config* c=(raven_remove_events_config*)opaque;
    if(!strcmp(key,"no_remove")){c->rules.no_remove=!_stricmp(value,"true");return;}
    if(!strcmp(key,"oncombatnode")&&!_stricmp(value,"randomfinisher")) {
        c->random_finisher=1;return; // Native flag is sticky across declarations.
    }
    size_t length=strlen(value)+1;
    if(length>65536)
        { fputs("[RAVEN POWERUP ERROR] Removal operand exceeds native scratch limit\n",stderr);_Exit(4); }
    const uint32_t sp=g_esp;
    g_esp-=(uint32_t)((length+19)&~(size_t)15);uint32_t frame=g_esp;
    memcpy((void*)XBOX_PTR(frame+4),value,length);
    if(!strcmp(key,"oncombatnode")||!strcmp(key,"shared_powerup")) {
        g_ecx=frame;PUSH32(g_esp,frame+4);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x00027EF0u,sub_00027EF0);check_stack(frame);
        if(!strcmp(key,"oncombatnode"))c->combat_node=MEM32(frame);
        else c->shared_powerup=MEM32(frame);
    } else {
        PUSH32(g_esp,frame+4);PUSH32(g_esp,0);
        if(!strncmp(key,"ondamagetype",12)) {
            RECOMP_ABI_CALL(0x00049480u,sub_00049480);
            c->rules.damage_types|=1u<<(g_eax&31);
        } else if(!strncmp(key,"ondamagemod",11)) {
            RECOMP_ABI_CALL(0x00049510u,sub_00049510);
            c->rules.damage_mods|=g_eax;
        } else {
            RECOMP_ABI_CALL(0x00059740u,sub_00059740);
            c->rules.attack_types|=1u<<(g_eax&31);
        }
        g_esp+=4;check_stack(frame);
    }
    g_esp=sp;
}
int raven_xml1_remove_events_config(uint32_t definition,raven_remove_events_config* out) {
    if(!out||!raven_xml1_powerup_identity_visit(definition,0,remove_events_identity,NULL))return 0;
    const uint32_t sp=g_esp,ax=g_eax,bx=g_ebx,cx=g_ecx,dx=g_edx,si=g_esi,di=g_edi,bp=g_ebp;
    const int top=g_fp_top,cmp=g_fp_cmp;const unsigned cc=g_fp_cc;
    double floats[8];memcpy(floats,g_fp_stack,sizeof(floats));
    raven_remove_events_config config={0};
    raven_xml1_powerup_removal_rules_visit(definition,remove_events_attribute,&config);
    check_stack(sp);g_eax=ax;g_ebx=bx;g_ecx=cx;g_edx=dx;g_esi=si;g_edi=di;g_ebp=bp;
    g_fp_top=top;g_fp_cmp=cmp;g_fp_cc=cc;memcpy(g_fp_stack,floats,sizeof(floats));
    *out=config;return 1;
}

/* XML2 14FEA0 caches one choice on the actor, shared by its removal effects.
 * XML1 has no corresponding field to borrow. Keep a bounded generation-keyed
 * cache rather than occupying stock actor bits or choosing on every hit. */
typedef struct remove_finisher_choice {uint32_t handle,actor;unsigned choice;} remove_finisher_choice;
static remove_finisher_choice remove_finishers[512];
const char* raven_xml1_remove_events_finisher(uint32_t holder) {
    static const char* names[]={"attackknockback2","attackstun3","attacktrip2","popupattack"};
    const uint32_t sp=g_esp,ax=g_eax,bx=g_ebx,cx=g_ecx,dx=g_edx,si=g_esi,di=g_edi,bp=g_ebp;
    const int top=g_fp_top,cmp=g_fp_cmp;const unsigned cc=g_fp_cc;
    double floats[8];memcpy(floats,g_fp_stack,sizeof(floats));
    const char* result=NULL;uint32_t actor=0;
    if(raven_xml1_guest_entity_actor(NULL,holder,&actor)==RAVEN_FOUND) {
        remove_finisher_choice* cached=&remove_finishers[holder&511];
        if(cached->handle!=holder||cached->actor!=actor) {
            PUSH32(g_esp,3);PUSH32(g_esp,0);PUSH32(g_esp,0);
            RECOMP_ABI_CALL(0x001233C0u,sub_001233C0);g_esp+=8;check_stack(sp);
            const unsigned choice=g_eax;
            uint32_t current=0;
            if(choice<4&&raven_xml1_guest_entity_actor(NULL,holder,&current)==RAVEN_FOUND&&current==actor) {
                cached->handle=holder;cached->actor=actor;cached->choice=choice;
            }
        }
        if(cached->handle==holder&&cached->actor==actor&&cached->choice<4)result=names[cached->choice];
    }
    check_stack(sp);g_eax=ax;g_ebx=bx;g_ecx=cx;g_edx=dx;g_esi=si;g_edi=di;g_ebp=bp;
    g_fp_top=top;g_fp_cmp=cmp;g_fp_cc=cc;memcpy(g_fp_stack,floats,sizeof(floats));return result;
}
static uint32_t remove_events_physical(uint32_t holder) {
    uint32_t ax=g_eax,cx=g_ecx,dx=g_edx;
    uint32_t entity=trigger_physical(holder);
    g_eax=ax;g_ecx=cx;g_edx=dx;return entity;
}
static unsigned remove_events_actor_reaction(unsigned actions,uint32_t holder) {
    uint32_t actor=0;
    // XML2 removes from physical holders before its actor-only delayed
    // reaction branch. Nonactor props still lose the matching powerup.
    if(raven_xml1_guest_entity_actor(NULL,holder,&actor)!=RAVEN_FOUND)
        actions&=~RAVEN_REMOVE_EVENT_REACT;
    return actions;
}
unsigned raven_xml1_remove_events_actions(uint32_t definition,uint32_t holder,uint32_t record) {
    if(record<0x10000u||(uint64_t)record+100>0x08000000ull)return 0;
    if(!remove_events_physical(holder))return 0;
    const uint32_t type=MEM32(record+0x10),attack=MEM32(record+0xC);
    const int recursive=(MEM8(record+0x60)&2)!=0;
    // Native XML1 tables: attack0=direct, damage13=dmg_direct. XML2's
    // synthetic mask10000000 must never be copied into this ordinal field.
    const int synthetic=attack==0&&type==13;
    if(recursive&&synthetic)return 0;
    raven_remove_events_config config;
    if(!raven_xml1_remove_events_config(definition,&config))return 0;
    unsigned result=raven_remove_events_decide(&config.rules,1u<<(type&31),
        MEM32(record+0x18),1u<<(attack&31),0,recursive,synthetic);
    // Match native1502FF..15033B ordering. A mask match does not draw a
    // finisher or look up the hit's originating node.
    if((config.rules.damage_types&(1u<<(type&31)))||
       (config.rules.damage_mods&MEM32(record+0x18))||
       (config.rules.attack_types&(1u<<(attack&31))))return remove_events_actor_reaction(result,holder);
    int node_matches=0;
    if(config.random_finisher) {
        const char* node=raven_xml1_remove_events_finisher(holder);
        if(node)node_matches=rating_scope(NULL,"scope_node",node,record)==RAVEN_FOUND;
    } else if(config.combat_node)node_matches=config.combat_node==MEM32(record+0x48);
    return remove_events_actor_reaction(raven_remove_events_decide(&config.rules,0,0,0,node_matches,recursive,synthetic),holder);
}
int raven_xml1_remove_events_finisher_fixture(uint32_t actor) {
    const uint32_t handle=MEM32(actor+0x1C),slot=handle&511,seed=MEM32(0x50622C),sp=g_esp;
    const uint32_t generation_address=0x4DB2B8+0x105C+4*slot;
    const uint32_t generation=MEM32(generation_address);
    remove_finisher_choice saved=remove_finishers[slot];memset(&remove_finishers[slot],0,sizeof(saved));
    MEM32(0x50622C)=1;
    int failed=0;const char* name=raven_xml1_remove_events_finisher(handle);
    if(!name||strcmp(name,"attackknockback2")||MEM32(0x50622C)!=16807)failed=1;
    if(raven_xml1_remove_events_finisher(handle)!=name||MEM32(0x50622C)!=16807)failed=1;
    const uint32_t replacement=handle+512;
    MEM32(generation_address)=replacement;MEM32(actor+0x1C)=replacement;
    if(raven_xml1_remove_events_finisher(handle)||MEM32(0x50622C)!=16807)failed=1;
    if(!raven_xml1_remove_events_finisher(replacement)||MEM32(0x50622C)!=282475249)failed=1;
    MEM32(generation_address)=generation;MEM32(actor+0x1C)=handle;
    uint32_t record=sp-0x200,definition=sp-0x300;
    memset((void*)XBOX_PTR(record),0,100);
    raven_xml1_powerup_metadata_reset(definition);
    raven_xml1_powerup_metadata_attribute(definition,"class","remove_on_events");
    raven_xml1_powerup_metadata_attribute(definition,"OnDamageType","dmg_fire");
    raven_xml1_powerup_metadata_attribute(definition,"OnCombatNode","randomfinisher");
    MEM32(record+0x10)=4;MEM32(record+0xC)=1;
    uint32_t before_rng=MEM32(0x50622C);
    // Put scratch above the guest call stack so native frames cannot alias it.
    g_esp=sp-0x400;
    if(raven_xml1_remove_events_actions(definition,handle,record)!=3||MEM32(0x50622C)!=before_rng)failed=1;
    raven_xml1_powerup_metadata_attribute(definition,"no_remove","true");
    if(raven_xml1_remove_events_actions(definition,handle,record)!=2)failed=1;
    MEM8(record+0x60)=2;
    if(raven_xml1_remove_events_actions(definition,handle,record)!=0)failed=1;
    raven_xml1_powerup_metadata_attribute(definition,"no_remove","false");
    if(raven_xml1_remove_events_actions(definition,handle,record)!=1)failed=1;
    MEM32(record+0xC)=0;MEM32(record+0x10)=13;
    if(raven_xml1_remove_events_actions(definition,handle,record)||MEM32(0x50622C)!=before_rng)failed=1;
    if(raven_xml1_remove_events_actions(definition,handle+512,record))failed=1;
    raven_xml1_powerup_metadata_reset(definition);
    raven_xml1_powerup_metadata_attribute(definition,"class","remove_on_events");
    raven_xml1_powerup_metadata_attribute(definition,"OnCombatNode","attackknockback2");
    raven_remove_events_config parsed;
    if(!raven_xml1_remove_events_config(definition,&parsed)||!parsed.combat_node)failed=1;
    MEM8(record+0x60)=0;MEM32(record+0xC)=1;MEM32(record+0x10)=0;
    MEM32(record+0x48)=parsed.combat_node;
    if(raven_xml1_remove_events_actions(definition,handle,record)!=3)failed=1;
    MEM32(record+0x48)=0;
    if(raven_xml1_remove_events_actions(definition,handle,record))failed=1;
    raven_xml1_powerup_metadata_attribute(definition,"OnCombatNode","randomfinisher");
    const char* selected=raven_xml1_remove_events_finisher(handle);
    if(!selected)failed=1;
    else {
        raven_remove_events_config selected_node={0};
        remove_events_attribute(&selected_node,"oncombatnode",selected);
        MEM32(record+0x48)=selected_node.combat_node;
        before_rng=MEM32(0x50622C);
        if(raven_xml1_remove_events_actions(definition,handle,record)!=3||MEM32(0x50622C)!=before_rng)failed=1;
        MEM32(record+0x48)=0;
        if(raven_xml1_remove_events_actions(definition,handle,record)||MEM32(0x50622C)!=before_rng)failed=1;
    }
    raven_xml1_powerup_metadata_reset(definition);g_esp=sp;
    remove_finishers[slot]=saved;MEM32(0x50622C)=seed;
    if(g_esp!=sp)failed=1;
    printf("%s RemoveOnEvents finisher: native RNG, cached actor choice, stale-handle exclusion and new generation reroll, native hit conditions and recursion flags\n",failed?"FAIL":"PASS");
    return failed;
}

/* One owned tag per native delayed-hit pool slot. Never borrow stock hit
 * fields: +50 already names the originating event resource. Pool release and
 * reset discard undelivered tags, including rejected/cancelled reactions. */
typedef struct remove_pending_shared {uint32_t target,serial;char* tag;} remove_pending_shared;
static remove_pending_shared remove_pending[32];
void raven_xml1_remove_events_clear_pending(uint32_t index) {
    if(index>=32)return;
    free(remove_pending[index].tag);memset(&remove_pending[index],0,sizeof(remove_pending[index]));
}
void raven_xml1_remove_events_reset_pending(void) {
    for(uint32_t i=0;i<32;++i)raven_xml1_remove_events_clear_pending(i);
}
static char* remove_events_take_pending(uint32_t target,uint32_t serial) {
    for(unsigned i=0;i<32;++i) {
        remove_pending_shared* p=&remove_pending[i];
        if(p->tag&&p->target==target&&p->serial==serial) {
            char* tag=p->tag;p->tag=NULL;p->target=p->serial=0;return tag;
        }
    }
    return NULL;
}
void raven_xml1_remove_events_deliver(uint32_t context) {
    if(context<0x10000u||(uint64_t)context+0xAC>0x08000000ull)return;
    uint32_t actor=MEM32(context),record=context+0xC;
    if(actor<0x10000u||(uint64_t)actor+0x244>0x08000000ull)return;
    uint32_t target=MEM32(actor+0x1C);
    char* tag=remove_events_take_pending(target,MEM32(record+0x44));
    if(!tag)return;
    // Remove association BEFORE attachment: activation may synchronously
    // cause another hit or reuse the queue slot. This delivery is once-only.
    raven_xml1_remove_events_shared(target,MEM32(record),tag);free(tag);
}

/* Queue the copied reaction through XML1's existing physical hit scheduler.
 * The tag is copied into owned pool metadata only after queue acceptance. */
int raven_xml1_remove_events_queue_shared(uint32_t holder,uint32_t record,const char* tag) {
    if(record<0x10000u||(uint64_t)record+100>0x08000000ull)return 0;
    uint32_t actor=0;
    if(raven_xml1_guest_entity_actor(NULL,holder,&actor)!=RAVEN_FOUND)return 0;
    const uint32_t sp=g_esp,ax=g_eax,bx=g_ebx,cx=g_ecx,dx=g_edx,si=g_esi,di=g_edi,bp=g_ebp;
    const int top=g_fp_top,cmp=g_fp_cmp;const unsigned cc=g_fp_cc;
    double floats[8];memcpy(floats,g_fp_stack,sizeof(floats));
    int accepted=0;int16_t amount;char* owned=NULL;
    if(tag&&*tag) {owned=_strdup(tag);if(!owned)abort();}
    if(!raven_xml1_imported_damage_short((float)SMEM16(record+8)*3.0f,&amount))goto done;
    g_esp-=112;uint32_t copy=g_esp;
    memset((void*)XBOX_PTR(copy),0,100);
    g_ecx=copy;PUSH32(g_esp,record);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x0002B720u,sub_0002B720);check_stack(copy);
    raven_native_damage_set(0x15038A,record,0,SMEM16(record+8));MEM16(record+8)=0;
    raven_native_damage_set(0x1503E2,copy,amount,SMEM16(copy+8));MEM16(copy+8)=(uint16_t)amount;
    MEM32(copy+0xC)=0;MEM32(copy+0x10)=13;MEM8(copy+0x60)|=2;
    PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00059CE0u,sub_00059CE0);check_stack(copy);
    uint32_t manager=g_eax,method=MEM32(MEM32(manager)+0x1C);
    g_ecx=manager;PUSH32(g_esp,0);RECOMP_ICALL_SAFE(method,copy);check_stack(copy);
    MEM32(copy+0x44)=g_eax;
    uint32_t current=0;
    if(raven_xml1_guest_entity_actor(NULL,holder,&current)==RAVEN_FOUND&&current==actor) {
        // Existing93BE0 handles pending hits, the32-slot pool and native
        // simulation-time scheduling. Never create a host timer or queue.
        g_ecx=actor;PUSH32(g_esp,0x3DCCCCCD);PUSH32(g_esp,copy);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x00093BE0u,sub_00093BE0);check_stack(copy);accepted=!!(g_eax&255);
        if(accepted&&owned) {
            uint32_t queued=MEM32(actor+0x2A4);
            if(queued<0x4BFD30u||queued>=0x4BFD30u+3200u||
               (queued-0x4BFD30u)%100u)abort();
            unsigned slot=(queued-0x4BFD30u)/100u;
            raven_xml1_remove_events_clear_pending(slot);
            remove_pending[slot].target=holder;
            remove_pending[slot].serial=MEM32(queued+0x44);
            remove_pending[slot].tag=owned;owned=NULL;
        }
    }
    g_esp=sp;
done:
    free(owned);
    check_stack(sp);g_eax=ax;g_ebx=bx;g_ecx=cx;g_edx=dx;g_esi=si;g_edi=di;g_ebp=bp;
    g_fp_top=top;g_fp_cmp=cmp;g_fp_cc=cc;memcpy(g_fp_stack,floats,sizeof(floats));return accepted;
}
int raven_xml1_remove_events_queue_reaction(uint32_t holder,uint32_t record) {
    return raven_xml1_remove_events_queue_shared(holder,record,NULL);
}
static struct {uint32_t token,actor;unsigned lookups,plays;int failed;} removal_feedback_fixture;
static void removal_feedback_lookup(void) {
    uint32_t sp=g_esp;
    if(g_ecx!=0x55ADF8||MEM32(sp+8)||MEM32(sp+12)||
       strcmp((char*)XBOX_PTR(MEM32(sp+4)),"common/game/break_shield"))removal_feedback_fixture.failed=1;
    ++removal_feedback_fixture.lookups;g_eax=123;g_esp=sp+16;
}
static void removal_feedback_position(void) {
    uint32_t sp=g_esp,out=MEM32(sp+4);
    if(g_ecx!=removal_feedback_fixture.actor)removal_feedback_fixture.failed=1;
    MEMF(out)=11;MEMF(out+4)=22;MEMF(out+8)=33;g_eax=out;g_esp=sp+8;
}
static void removal_feedback_play(void) {
    uint32_t sp=g_esp,position=MEM32(sp+8);
    if(g_ecx!=0x55ADF8||MEM32(sp+4)!=123||MEMF(position)!=11||MEMF(position+4)!=22||
       MEMF(position+8)!=33||MEMF(sp+12)!=1||MEMF(sp+16)!=1300||MEMF(sp+20)!=150)
        removal_feedback_fixture.failed=1;
    ++removal_feedback_fixture.plays;g_esp=sp+24;
}
void (*raven_xml1_remove_events_fixture_lookup(uint32_t address))(void) {
    if(!removal_feedback_fixture.token)return NULL;
    if(address==removal_feedback_fixture.token)return removal_feedback_lookup;
    if(address==removal_feedback_fixture.token+4)return removal_feedback_position;
    if(address==removal_feedback_fixture.token+8)return removal_feedback_play;
    return NULL;
}
int raven_xml1_remove_events_queue_fixture(uint32_t instance,uint32_t actor,uint32_t scratch) {
    const uint32_t sp=g_esp,handle=MEM32(actor+0x1C),pending=MEM32(actor+0x2A4);
    unsigned char scheduler[0x7120],pool[0xD1C],manager[0xC0];
    memcpy(scheduler,(void*)XBOX_PTR(0x4C9A88),sizeof(scheduler));
    memcpy(pool,(void*)XBOX_PTR(0x4BFD30),sizeof(pool));
    memcpy(manager,(void*)XBOX_PTR(0x48D750),sizeof(manager));
    uint32_t init=MEM32(0x4D0BA8),clock=MEM32(0x48D8E8);
    memset((void*)XBOX_PTR(0x4C9A88),0,sizeof(scheduler));
    MEM32(0x4C9A88)=0x3D349C;MEM32(0x4D0BA8)=init|1;
    g_ecx=0x4C9A8C;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x000A9F60u,sub_000A9F60);
    g_ecx=0x4BFD30;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00093BA0u,sub_00093BA0);
    MEM32(0x48D8E8)=0x498E88;MEM32(0x48D80C)|=1;MEM32(0x48D750)=0x3CBCF4;
    MEM32(actor+0x2A4)=0;memset((void*)XBOX_PTR(scratch),0,100);
    MEM32(scratch)=0x202;MEM16(scratch+8)=7;MEM32(scratch+0xC)=1;
    MEM32(scratch+0x10)=4;MEM32(scratch+0x48)=0x123456;
    MEM8(scratch+0x55)=77;MEM8(scratch+0x56)=78;
    char authored_tag[]="fixture_pending_missing";
    int failed=!raven_xml1_remove_events_queue_shared(handle,scratch,authored_tag);
    authored_tag[0]='X';
    uint32_t queued=MEM32(actor+0x2A4);
    if(!queued||MEM16(scratch+8)||MEM16(queued+8)!=21||MEM32(queued)!=0x202||
       MEM32(queued+0xC)||MEM32(queued+0x10)!=13||!(MEM8(queued+0x60)&2)||
       MEM32(queued+0x48)!=0x123456||MEM8(queued+0x55)!=77||MEM8(queued+0x56)!=78||
       MEM32(0x4C9A88+4+0x5110)!=1)failed=1;
    unsigned pending_slot=queued>=0x4BFD30u?(queued-0x4BFD30u)/100u:32;
    if(pending_slot>=32)return 1;
    if(!remove_pending[pending_slot].tag||strcmp(remove_pending[pending_slot].tag,"fixture_pending_missing")||
       remove_events_take_pending(handle+512,MEM32(queued+0x44))||
       remove_events_take_pending(handle,MEM32(queued+0x44)+1))failed=1;
    MEM16(scratch+8)=9;
    if(raven_xml1_remove_events_queue_reaction(handle,scratch)||MEM32(actor+0x2A4)!=queued||
       MEM32(0x4C9A88+4+0x5110)!=1)failed=1;
    MEM16(scratch+8)=11;
    if(raven_xml1_remove_events_queue_reaction(handle+512,scratch)||MEM16(scratch+8)!=11)failed=1;
    // The consumer sees the native context's copied record, not the pool
    // pointer. A matching serial/full owner consumes exactly once.
    uint32_t context=scratch+0x100;
    memset((void*)XBOX_PTR(context),0,0xAC);MEM32(context)=actor;
    memcpy((void*)XBOX_PTR(context+0xC),(void*)XBOX_PTR(queued),100);
    raven_xml1_remove_events_deliver(context);
    if(remove_pending[pending_slot].tag)failed=1;
    raven_xml1_remove_events_deliver(context);
    g_ecx=actor;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00093A30u,sub_00093A30);
    MEM16(scratch+8)=5;
    if(!raven_xml1_remove_events_queue_shared(handle,scratch,"cancelled"))failed=1;
    queued=MEM32(actor+0x2A4);pending_slot=(queued-0x4BFD30u)/100u;
    if(pending_slot>=32||!remove_pending[pending_slot].tag)failed=1;
    g_ecx=actor;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00093A30u,sub_00093A30);
    if(pending_slot<32&&remove_pending[pending_slot].tag)failed=1;
    // Exercise authored no_remove through the actual callback, native queue
    // and spatial-feedback ABI. Only audio lookup/play and position terminals
    // are substituted; source record mutation and scheduling are native.
    uint32_t definition=MEM32(instance+0x2C),table=MEM32(actor);
    uint32_t old_sound=MEM32(0x55ADF8),old_sound_flag=MEM32(0x566830),old_position=MEM32(table+0x24);
    uint32_t old_radius=MEM32(definition+0x4C);
    raven_xml1_powerup_metadata_clone(scratch+0x800,definition);
    raven_xml1_powerup_metadata_reset(definition);
    raven_xml1_powerup_metadata_attribute(definition,"class","remove_on_events");
    raven_xml1_powerup_metadata_attribute(definition,"OnDamageType1","dmg_fire");
    raven_xml1_powerup_metadata_attribute(definition,"no_remove","true");
    raven_xml1_powerup_metadata_attribute(definition,"shared_powerup","fixture_pending_missing");
    MEMF(definition+0x4C)=0;
    memset(&removal_feedback_fixture,0,sizeof(removal_feedback_fixture));
    removal_feedback_fixture.token=scratch+0x700;removal_feedback_fixture.actor=actor;
    memset((void*)XBOX_PTR(scratch+0x400),0,0x80);
    MEM32(scratch+0x434)=removal_feedback_fixture.token;
    MEM32(scratch+0x45C)=removal_feedback_fixture.token+8;
    MEM32(0x55ADF8)=scratch+0x400;MEM32(0x566830)=old_sound_flag|1;
    MEM32(table+0x24)=removal_feedback_fixture.token+4;
    MEM16(scratch+8)=4;MEM8(scratch+0x60)=0;
    raven_xml1_remove_events_hurt(instance,scratch);
    queued=MEM32(actor+0x2A4);
    if(!queued||MEM16(queued+8)!=12||MEM16(scratch+8)||
       removal_feedback_fixture.lookups!=1||removal_feedback_fixture.plays!=1||removal_feedback_fixture.failed)failed=1;
    if(queued) {
        pending_slot=(queued-0x4BFD30u)/100u;
        memcpy((void*)XBOX_PTR(context+0xC),(void*)XBOX_PTR(queued),100);
        raven_xml1_remove_events_deliver(context);
        if(pending_slot>=32||remove_pending[pending_slot].tag)failed=1;
        g_ecx=actor;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00093A30u,sub_00093A30);
    }
    removal_feedback_fixture.token=0;
    MEM32(0x55ADF8)=old_sound;MEM32(0x566830)=old_sound_flag;MEM32(table+0x24)=old_position;
    MEM32(definition+0x4C)=old_radius;
    raven_xml1_powerup_metadata_clone(definition,scratch+0x800);
    raven_xml1_powerup_metadata_reset(scratch+0x800);
    memcpy((void*)XBOX_PTR(0x4C9A88),scheduler,sizeof(scheduler));
    memcpy((void*)XBOX_PTR(0x4BFD30),pool,sizeof(pool));
    memcpy((void*)XBOX_PTR(0x48D750),manager,sizeof(manager));
    MEM32(0x4D0BA8)=init;MEM32(0x48D8E8)=clock;MEM32(actor+0x2A4)=pending;
    if(g_esp!=sp)failed=1;
    printf("%s RemoveOnEvents reaction queue: native copy, triple integer damage, source/node/tags, recursion marker, scheduled entry, pending-hit limit, stale owner, owned delayed tag, once-only consumption, native cancellation cleanup and nonrecursive callback/spatial sound ABI\n",failed?"FAIL":"PASS");
    return failed;
}

int raven_xml1_remove_events_detach(uint32_t instance) {
    uint32_t owner=0;
    if(raven_xml1_active_powerup_identity(read_guest,NULL,0x4833C0,instance,&owner)!=RAVEN_FOUND)return 0;
    uint32_t definition=MEM32(instance+0x2C),holder=MEM32(instance+0x1C),actor=0;
    if(!raven_xml1_powerup_identity_visit(definition,0,remove_events_identity,NULL))return 0;
    actor=remove_events_physical(holder);if(!actor)return 0;
    const uint32_t sp=g_esp,ax=g_eax,bx=g_ebx,cx=g_ecx,dx=g_edx,si=g_esi,di=g_edi,bp=g_ebp;
    const int top=g_fp_top,cmp=g_fp_cmp;const unsigned cc=g_fp_cc;
    double floats[8];memcpy(floats,g_fp_stack,sizeof(floats));
    // Native2AF30 owns deactivation, FX cleanup, list unlink, generation
    // advance and definition release. Never clear the active slot by hand.
    g_ecx=actor;PUSH32(g_esp,instance);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x0002AF30u,sub_0002AF30);check_stack(sp);
    int result=!!(g_eax&255);
    // The instance is no longer ours. Even on success, no instance/definition
    // memory may be used after a native deactivation callback runs.
    g_eax=ax;g_ebx=bx;g_ecx=cx;g_edx=dx;g_esi=si;g_edi=di;g_ebp=bp;
    g_fp_top=top;g_fp_cmp=cmp;g_fp_cc=cc;memcpy(g_fp_stack,floats,sizeof(floats));return result;
}
int raven_xml1_remove_events_detach_fixture(uint32_t instance,uint32_t actor,uint32_t scratch) {
    unsigned char pool[0x2440],definition_bytes[0xC0];
    uint32_t definition=MEM32(instance+0x2C),head=MEM32(actor+0x1FC);
    uint32_t mask0=MEM32(actor+0x1F4),mask1=MEM32(actor+0x1F8),handle=MEM32(actor+0x1C);
    uint32_t owner=0,current=0,sp=g_esp;
    if(raven_xml1_active_powerup_identity(read_guest,NULL,0x4833C0,instance,&owner)!=RAVEN_FOUND)return 1;
    memcpy(pool,(void*)XBOX_PTR(0x4833C0),sizeof(pool));
    memcpy(definition_bytes,(void*)XBOX_PTR(definition),sizeof(definition_bytes));
    raven_xml1_powerup_metadata_clone(scratch,definition);
    raven_xml1_powerup_metadata_reset(definition);
    raven_xml1_powerup_metadata_attribute(definition,"class","remove_on_events");
    memset((void*)XBOX_PTR(definition),0,0xC0);
    MEM32(instance)=UINT32_MAX;MEM32(instance+0x1C)=handle;
    MEM32(instance+0x28)=0;MEM32(instance+0x30)=0;MEM8(instance+0x3C)=0;
    MEM32(actor+0x1FC)=owner;
    raven_xml1_powerup_metadata_attribute(definition,"OnDamageType1","dmg_fire");
    uint32_t hit=scratch+0x200;memset((void*)XBOX_PTR(hit),0,100);
    MEM32(hit+0x10)=4;MEM32(hit+0xC)=1;MEM8(hit+0x60)=2;
    raven_xml1_remove_events_hurt(instance,hit);
    int failed=0;
    if(MEM32(actor+0x1FC)!=UINT32_MAX||MEM32(actor+0x1F4)||MEM32(actor+0x1F8)||
       raven_xml1_active_powerup(read_guest,NULL,0x4833C0,owner,&current)==RAVEN_FOUND||
       raven_xml1_remove_events_detach(instance))failed=1;
    memcpy((void*)XBOX_PTR(0x4833C0),pool,sizeof(pool));
    memcpy((void*)XBOX_PTR(definition),definition_bytes,sizeof(definition_bytes));
    raven_xml1_powerup_metadata_clone(definition,scratch);raven_xml1_powerup_metadata_retire(scratch);
    MEM32(actor+0x1FC)=head;MEM32(actor+0x1F4)=mask0;MEM32(actor+0x1F8)=mask1;
    if(g_esp!=sp)failed=1;
    printf("%s RemoveOnEvents hurt callback: matching recursive ordinary hit, native unlink, cached type-mask rebuild, generation retirement and duplicate rejection; borrowed definition fixture\n",failed?"FAIL":"PASS");
    return failed;
}

/* XML2 44762..44834 consumes shared_powerup after the native actor reaction
 * gate. The pending-hit bridge supplies a copied tag; no definition pointer
 * may outlive the removal callback. Existing XML1 attachment owns filtering,
 * callbacks, source normalization and definition retirement. */
int raven_xml1_remove_events_shared(uint32_t target,uint32_t source,const char* tag) {
    uint32_t actor=0,definition=0,source_actor=0;
    if(!tag||!*tag||raven_xml1_guest_entity_actor(NULL,target,&actor)!=RAVEN_FOUND||
       !(MEMF(actor+0x240)>0.0f))return 0;
    const uint32_t sp=g_esp,ax=g_eax,bx=g_ebx,cx=g_ecx,dx=g_edx,si=g_esi,di=g_edi,bp=g_ebp;
    const int top=g_fp_top,cmp=g_fp_cmp;const unsigned cc=g_fp_cc;
    double floats[8];memcpy(floats,g_fp_stack,sizeof(floats));
    int accepted=0;
    if(raven_xml1_shared_powerup_create(tag,12,&definition)!=RAVEN_FOUND)goto done;
    // Resource loading can retire either entity. Resolve complete handles
    // again; XML2 uses a null sponsor when the source is not a live actor.
    if(raven_xml1_guest_entity_actor(NULL,target,&actor)!=RAVEN_FOUND||
       !(MEMF(actor+0x240)>0.0f))goto release;
    if(raven_xml1_guest_entity_actor(NULL,source,&source_actor)!=RAVEN_FOUND)
        source=MEM32(0x498D90);
    g_esp-=16;const uint32_t frame=g_esp;MEM32(frame)=0xFFFFFFFFu;
    g_ecx=actor;PUSH32(g_esp,source);PUSH32(g_esp,frame);
    PUSH32(g_esp,1);PUSH32(g_esp,definition);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x0002AA90u,sub_0002AA90);check_stack(frame);
    accepted=(g_eax&255)!=0;
    if(accepted) {
        uint32_t active=0;
        // Activation is reentrant: only the returned generation may receive
        // the override. A callback may already have removed/reused the slot.
        // XML2 hit byte34=FF resolves to -1 via435A0. XML1 stores duration
        // in active+4 (native28FF0); keep its existing start time at+8.
        if(raven_xml1_active_powerup(read_guest,NULL,0x4833C0,MEM32(frame),&active)==RAVEN_FOUND&&
           MEM32(active+0x2C)==definition&&MEM32(active+0x1C)==target)
            MEMF(active+4)=-1.0f;
    }
    g_esp=sp;
release:
    // A successful native call transferred ownership even if its activation
    // callback subsequently retired the effect. Never release that twice.
    if(!accepted)raven_xml1_shared_powerup_release(definition);
done:
    check_stack(sp);g_eax=ax;g_ebx=bx;g_ecx=cx;g_edx=dx;g_esi=si;g_edi=di;g_ebp=bp;
    g_fp_top=top;g_fp_cmp=cmp;g_fp_cc=cc;memcpy(g_fp_stack,floats,sizeof(floats));return accepted;
}

static void remove_events_feedback(uint32_t holder) {
    const uint32_t sp=g_esp;
    g_esp-=64;uint32_t frame=g_esp;
    strcpy((char*)XBOX_PTR(frame+16),"common/game/break_shield");
    PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00151EF0u,sub_00151EF0);check_stack(frame);
    uint32_t manager=g_eax,method=MEM32(MEM32(manager)+0x34);
    g_ecx=manager;PUSH32(g_esp,0);PUSH32(g_esp,0);PUSH32(g_esp,frame+16);PUSH32(g_esp,0);
    RECOMP_ICALL_SAFE(method,frame);check_stack(frame);
    uint32_t sound=g_eax,actor=0;
    if(sound==MEM32(0x3DD050)||raven_xml1_guest_entity_actor(NULL,holder,&actor)!=RAVEN_FOUND)goto done;
    method=MEM32(MEM32(actor)+0x24);g_ecx=actor;PUSH32(g_esp,frame);PUSH32(g_esp,0);
    RECOMP_ICALL_SAFE(method,frame);check_stack(frame);
    // Native5CA20 plays a spatial one-shot: ID, position, volume, far, near.
    // XML2 sound index15 is absent from XML1's14-entry combat sound table.
    // Resolve its authored name instead of reading past that existing table.
    method=MEM32(MEM32(manager)+0x5C);g_ecx=manager;
    PUSH32(g_esp,0x43160000);PUSH32(g_esp,0x44A28000);PUSH32(g_esp,0x3F800000);
    PUSH32(g_esp,frame);PUSH32(g_esp,sound);PUSH32(g_esp,0);
    RECOMP_ICALL_SAFE(method,frame);check_stack(frame);
done:
    g_esp=sp;
}
static uint32_t remove_events_guard[128];
static void remove_events_copy_tag(void* opaque,const char* key,const char* value) {
    if(strcmp(key,"shared_powerup"))return;
    char** tag=(char**)opaque;free(*tag);*tag=_strdup(value);if(!*tag)abort();
}
void raven_xml1_remove_events_hurt(uint32_t instance,uint32_t record) {
    uint32_t owner=0;
    if(raven_xml1_active_powerup_identity(read_guest,NULL,0x4833C0,instance,&owner)!=RAVEN_FOUND)return;
    uint32_t definition=MEM32(instance+0x2C),holder=MEM32(instance+0x1C);
    if(!raven_xml1_powerup_identity_visit(definition,0,remove_events_identity,NULL)||
       !raven_xml1_powerup_class_share_matches(definition,MEMF(definition+0x4C)))return;
    unsigned slot=owner&127;if(remove_events_guard[slot]==owner)return;
    const uint32_t sp=g_esp,ax=g_eax,bx=g_ebx,cx=g_ecx,dx=g_edx,si=g_esi,di=g_edi,bp=g_ebp;
    const int top=g_fp_top,cmp=g_fp_cmp;const unsigned cc=g_fp_cc;
    double floats[8];memcpy(floats,g_fp_stack,sizeof(floats));
    unsigned actions=raven_xml1_remove_events_actions(definition,holder,record);
    char* tag=NULL;uint32_t current=0;
    if(!actions)goto done;
    if(raven_xml1_active_powerup(read_guest,NULL,0x4833C0,owner,&current)!=RAVEN_FOUND||
       current!=instance||MEM32(instance+0x2C)!=definition||MEM32(instance+0x1C)!=holder)goto done;
    // Native removal can release the definition. Snapshot its only later
    // operand first, and never read this instance/definition after detach.
    if(actions&RAVEN_REMOVE_EVENT_REACT)
        raven_xml1_powerup_removal_rules_visit(definition,remove_events_copy_tag,&tag);
    uint32_t old_guard=remove_events_guard[slot];remove_events_guard[slot]=owner;
    if(actions&RAVEN_REMOVE_EVENT_REMOVE)raven_xml1_remove_events_detach(instance);
    if(actions&RAVEN_REMOVE_EVENT_REACT) {
        raven_xml1_remove_events_queue_shared(holder,record,tag);
        uint32_t actor=0;
        if(raven_xml1_guest_entity_actor(NULL,holder,&actor)==RAVEN_FOUND)remove_events_feedback(holder);
    }
    if(remove_events_guard[slot]==owner)remove_events_guard[slot]=old_guard;
done:
    free(tag);check_stack(sp);g_eax=ax;g_ebx=bx;g_ecx=cx;g_edx=dx;g_esi=si;g_edi=di;g_ebp=bp;
    g_fp_top=top;g_fp_cmp=cmp;g_fp_cc=cc;memcpy(g_fp_stack,floats,sizeof(floats));
}
