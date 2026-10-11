/* XML2 7D390 multiplies each playable party member's cache F4/F8.
 * Keep this calculation separate from native item selection/spawning: ordinary
 * loot remains owned by XML1, and evaluating a bonus must never consume RNG.
 * The caller resolves party handles; this helper resolves the generation-
 * checked active powerup list on each member on every request. No bonus cache
 * survives powerup removal, character replacement or a loaded save. */
raven_lookup raven_xml1_drop_scales(const uint32_t *actors,unsigned count,
    float *potions,float *money) {
    if(!potions||!money||count>4||(!actors&&count))return RAVEN_INVALID;
    float combined[2]={1,1};int found=0;
    const char *names[]={"extra_potions","extra_money"};
    for(unsigned a=0;a<count;++a) {
        if(actors[a]<0x10000u||actors[a]>0x07fff800u)return RAVEN_INVALID;
        uint32_t handles[128];unsigned active=0;
        raven_lookup list=raven_xml1_actor_powerups(read_guest,NULL,0x4833c0,
            actors[a],handles,&active);
        if(list==RAVEN_INVALID)return list;
        if(list!=RAVEN_FOUND)continue;
        for(unsigned i=0;i<active;++i) {
            uint32_t instance;
            if(raven_xml1_active_powerup(read_guest,NULL,0x4833c0,handles[i],
                &instance)!=RAVEN_FOUND)continue;
            for(unsigned kind=0;kind<2;++kind) {
                float value=1;
                raven_lookup status=raven_rating_drop_scale(read_guest,
                    raven_xml1_guest_entity_valid,raven_xml1_guest_talent_actor,
                    NULL,MEM32(instance+0x2c),0x4833c0,handles[i],
                    MEM32(0x4d7300),MEM32(0x498d90),names[kind],&value);
                if(status==RAVEN_INVALID)return status;
                if(status==RAVEN_FOUND) {
                    combined[kind]*=value;
                    if(!isfinite(combined[kind]))return RAVEN_INVALID;
                    found=1;
                }
            }
        }
    }
    /* XML2 clamps the combined party factors to at least one at7D472/7D48B.
     * A negative or sub-unit factor must not remove normal XML1 drops. */
    *potions=fmaxf(1,combined[0]);*money=fmaxf(1,combined[1]);
    return found?RAVEN_FOUND:RAVEN_MISSING;
}

/* Query original XML1 potion capacities/quantities through the inventory
 * methods, not guessed constants or the unrelated Xtreme-meter accessors.
 * A nonnegative level is useful for isolated tests; -1 asks the native
 * capacity method for the current party level, exactly as normal gameplay. */
unsigned raven_xml1_drop_potion_room(uint32_t inventory,int32_t level) {
    if(inventory<0x10000u||inventory>0x07ffe800u)return 0;
    const uint32_t saved[]={g_eax,g_ebx,g_ecx,g_edx,g_esi,g_edi,g_ebp,g_esp,g_seh_ebp};
    const int top=g_fp_top,cmp=g_fp_cmp;const unsigned cc=g_fp_cc;
    double floats[8];memcpy(floats,g_fp_stack,sizeof floats);
    uint32_t capacity[2],quantity[2];
    for(unsigned kind=0;kind<2;++kind) {
        uint32_t method=MEM32(MEM32(inventory)+(kind?0x38:0x34));
        g_ecx=inventory;PUSH32(g_esp,(uint32_t)level);PUSH32(g_esp,0);
        RECOMP_ICALL_SAFE(method,saved[7]);check_stack(saved[7]);
        capacity[kind]=g_eax&0xffffu;
        method=MEM32(MEM32(inventory)+(kind?0x40:0x3c));
        g_ecx=inventory;PUSH32(g_esp,0);
        RECOMP_ICALL_SAFE(method,saved[7]);check_stack(saved[7]);
        quantity[kind]=g_eax&0xffffu;
    }
    unsigned available=(quantity[0]<capacity[0]?1u:0u)|(quantity[1]<capacity[1]?2u:0u);
    memcpy(g_fp_stack,floats,sizeof floats);g_fp_top=top;g_fp_cmp=cmp;g_fp_cc=cc;
    g_eax=saved[0];g_ebx=saved[1];g_ecx=saved[2];g_edx=saved[3];
    g_esi=saved[4];g_edi=saved[5];g_ebp=saved[6];g_esp=saved[7];g_seh_ebp=saved[8];
    return available;
}

static uint32_t drop_native_call(uint32_t receiver,uint32_t method,
    const uint32_t *args,unsigned count,int caller_cleanup) {
    uint32_t sp=g_esp;
    for(unsigned i=count;i;--i)PUSH32(g_esp,args[i-1]);
    g_ecx=receiver;PUSH32(g_esp,0);RECOMP_ICALL_SAFE(method,sp);
    if(caller_cleanup)g_esp+=4*count;
    check_stack(sp);return g_eax;
}
static uint32_t (*drop_call)(uint32_t,uint32_t,const uint32_t*,unsigned,int)=drop_native_call;
static unsigned (*drop_room)(uint32_t,int32_t)=raven_xml1_drop_potion_room;
static float drop_random(void) {
    drop_call(0,0x123330,NULL,0,0);
    float result=(float)g_fp_stack[g_fp_top];g_fp_top=(g_fp_top+1)&7;
    return result;
}
static unsigned drop_extra(float factor,unsigned limit) {
    if(!(factor>1)||!limit)return 0;
    double extra=(double)factor-1,whole=floor(extra);
    if(whole>=limit)return limit;
    unsigned count=(unsigned)whole;
    if(extra>whole&&drop_random()<extra-whole)++count;
    return count;
}
static unsigned drop_nearby(uint32_t position,uint32_t frame) {
    MEM32(frame+4)=0;
    uint32_t args[4]={0x4997E8,frame+4,0,0};
    drop_call(frame,0xA2A70,args,2,0);
    uint32_t query=MEM32(frame);
    if(!query)return 20; /* An exhausted native query pool cannot prove room. */
    args[0]=position;args[1]=0x43160000;args[2]=0;args[3]=0;
    drop_call(query,MEM32(MEM32(query)+0x68),args,4,0);
    MEM32(frame+8)=0x3C898C;args[0]=query;args[1]=frame+8;
    uint32_t list=drop_call(0,0xA2B10,args,2,1),count=20;
    if(list) {
        count=drop_call(list,MEM32(MEM32(list)),NULL,0,0);
        drop_call(0,0xA2B70,&list,1,1);
    }
    drop_call(frame,0xA2AC0,NULL,0,0);
    return count;
}
static void drop_run(uint32_t game,int32_t category,uint32_t source_handle) {
    /* The caller is already past XML1's mission/arena exclusions. XML2 also
     * requires a positive drop category before attempting any bonus. */
    if(category<=0)return;
    uint32_t base=g_esp;g_esp-=128;uint32_t frame=g_esp;
    uint32_t args[4]={frame,0xffffffffu,0,0},actors[4];unsigned used=0;
    drop_call(frame,0x322B0,NULL,0,0);
    drop_call(game,0x72470,args,3,0);
    unsigned count=MEM32(frame+20);
    if(count>5){fputs("[DROP BONUS] Invalid party list\n",stderr);_Exit(4);}
    for(unsigned i=0;i<count&&used<4;++i) {
        uint32_t entity=drop_call(frame+i*4,0x6BF80,NULL,0,0);
        if(!entity)continue;
        uint32_t actor=drop_call(0,0x27620,&entity,1,1);
        if(actor)actors[used++]=actor;
    }
    float potions=1,money=1;
    if(raven_xml1_drop_scales(actors,used,&potions,&money)==RAVEN_INVALID) {
        fputs("[DROP BONUS] Invalid active affecter metadata\n",stderr);_Exit(4);
    }
    /* This exit precedes all spatial queries, inventory queries, random draws
     * and spawning. Stock parties do not change the loot RNG sequence. */
    if(potions<=1&&money<=1){g_esp=base;return;}
    MEM32(frame+24)=source_handle;
    uint32_t source=drop_call(frame+24,0x6BF80,NULL,0,0);
    if(!source){g_esp=base;return;}
    args[0]=frame+32;
    drop_call(source,MEM32(MEM32(source)+0x24),args,1,0);
    unsigned nearby=drop_nearby(frame+32,frame+64);
    if(nearby>=20){g_esp=base;return;}
    unsigned room=20-nearby;
    uint32_t inventory=drop_call(0,0x7F850,NULL,0,0);
    unsigned potion_count=drop_extra(potions,room);
    for(unsigned i=0;i<potion_count&&room;++i) {
        if(!drop_call(frame+24,0x6BF80,NULL,0,0))break;
        unsigned available=drop_room(inventory,-1);
        if(!available)break;
        unsigned energy=available==2||(available==3&&drop_random()>=0.5f);
        args[0]=MEM8(inventory+(energy?0x1697:0x1696));
        args[1]=1;args[2]=frame+32;
        if(drop_call(game,0x715A0,args,3,0)&255u)--room;
    }
    if(room&&money>1) {
        /* Reuse XML1's source-dependent money base (71303..7135E), retaining
         * its native character value and ordinary loot random generator. */
        // Item creation may invoke authored callbacks. Resolve the source
        // handle again rather than borrowing its earlier entity pointer.
        source=drop_call(frame+24,0x6BF80,NULL,0,0);
        if(!source){g_esp=base;return;}
        uint32_t actor=drop_call(0,0x27620,&source,1,1);double value;
        if(actor&&MEM32(actor+0x2d8)) {
            int base_value=(int16_t)drop_call(MEM32(actor+0x2d8),0xAF700,NULL,0,0);
            value=base_value-(int)(drop_random()*base_value*MEMF(0x3cd038));
        } else {
            int level=(int16_t)drop_call(inventory,0x7E060,NULL,0,0);
            int square=level*level;
            value=square+(int)(drop_random()*square*MEMF(0x3c9754));
        }
        value*=drop_extra(money,0x7fffffffu);
        if(value>0&&isfinite(value)) {
            if(value>2147483647.0){fputs("[DROP BONUS] Money quantity overflow\n",stderr);_Exit(4);}
            uint32_t total=(uint32_t)value;
            args[0]=2;args[1]=4;
            unsigned pieces=drop_call(0,0x1233C0,args,2,1);
            if(pieces>room)pieces=room;if(pieces>total)pieces=total;
            args[0]=0x3cd048;uint32_t item=drop_call(inventory,0x7EBE0,args,1,0)&255u;
            /* Integer remainder stays in the last pickup; no authored reward
             * disappears merely because a drop was split across entities. */
            for(unsigned i=0;i<pieces;++i) {
                if(!drop_call(frame+24,0x6BF80,NULL,0,0))break;
                args[0]=item;args[1]=total/(pieces-i);args[2]=frame+32;
                if(!(drop_call(game,0x715A0,args,3,0)&255u))break;
                total-=args[1];
            }
        }
    }
    g_esp=base;
}
void raven_xml1_bonus_drops(uint32_t game,int32_t category,uint32_t source_handle) {
    const uint32_t saved[]={g_eax,g_ebx,g_ecx,g_edx,g_esi,g_edi,g_ebp,g_esp,g_seh_ebp};
    const int top=g_fp_top,cmp=g_fp_cmp;const unsigned cc=g_fp_cc;
    double floats[8];memcpy(floats,g_fp_stack,sizeof floats);
    drop_run(game,category,source_handle);
    check_stack(saved[7]);
    if(g_fp_top!=top){fputs("[DROP BONUS] FPU imbalance\n",stderr);_Exit(4);}
    memcpy(g_fp_stack,floats,sizeof floats);g_fp_cmp=cmp;g_fp_cc=cc;
    g_eax=saved[0];g_ebx=saved[1];g_ecx=saved[2];g_edx=saved[3];
    g_esi=saved[4];g_edi=saved[5];g_ebp=saved[6];g_esp=saved[7];g_seh_ebp=saved[8];
}

/* Process-local fixture: only world enumeration/spawn terminals are replaced.
 * Active affecter traversal and the orchestration above remain the real code. */
static struct {
    uint32_t actor,inventory,query,list;
    unsigned nearby,available,stale,empty_list,fail_spawn,retire_after_spawn,randoms,spawns,
        potions,money,queries,releases,query_releases,parties;
} drop_test;
static unsigned drop_test_room(uint32_t inventory,int32_t level) {
    if(inventory!=drop_test.inventory||level!=-1)abort();
    return drop_test.available;
}
static uint32_t drop_test_call(uint32_t receiver,uint32_t method,
    const uint32_t *args,unsigned count,int caller_cleanup) {
    (void)caller_cleanup;
    switch(method) {
    case 0x322B0:MEM32(receiver+20)=0;return receiver;
    case 0x72470:
        if(count!=3||args[1]!=0xffffffffu||args[2])abort();
        MEM32(args[0])=0x201;MEM32(args[0]+20)=1;++drop_test.parties;return args[0];
    case 0x6BF80:return MEM32(receiver)==0x201?drop_test.actor:
        MEM32(receiver)==0x999&&!drop_test.stale?drop_test.actor:0;
    case 0x27620:return args[0]==drop_test.actor?drop_test.actor:0;
    case 0xA2A70:
        if(count!=2||args[0]!=0x4997e8||MEM32(args[1]))abort();
        MEM32(receiver)=drop_test.query;++drop_test.queries;return receiver;
    case 0xD001:
        if(count!=4||receiver!=drop_test.query||args[1]!=0x43160000||args[2]||args[3])abort();
        if(MEMF(args[0])!=10||MEMF(args[0]+4)!=20||MEMF(args[0]+8)!=30)abort();
        return 0;
    case 0xA2B10:
        if(count!=2||args[0]!=drop_test.query||MEM32(args[1])!=0x3c898c)abort();
        return drop_test.empty_list?0:drop_test.list;
    case 0xD002:return drop_test.nearby;
    case 0xA2B70:if(count!=1||args[0]!=drop_test.list)abort();++drop_test.releases;return 0;
    case 0xA2AC0:++drop_test.query_releases;return 0;
    case 0x7F850:return drop_test.inventory;
    case 0xAF700:return 100;
    case 0x7E060:return 10;
    case 0x7EBE0:if(count!=1||args[0]!=0x3cd048)abort();return 3;
    case 0x123330:
        ++drop_test.randoms;g_fp_top=(g_fp_top-1)&7;g_fp_stack[g_fp_top]=0.25;return 0;
    case 0x1233C0:if(count!=2||args[0]!=2||args[1]!=4)abort();++drop_test.randoms;return 2;
    case 0x715A0:
        if(count!=3||!args[1]||MEMF(args[2])!=10)abort();
        ++drop_test.spawns;if(drop_test.fail_spawn)return 0;
        if(drop_test.retire_after_spawn)drop_test.stale=1;
        if(args[0]==3)drop_test.money+=args[1];
        else if(args[0]==1||args[0]==2)drop_test.potions+=args[1];else abort();
        return 1;
    default:
        if(receiver==drop_test.actor&&count==1) {
            MEMF(args[0])=10;MEMF(args[0]+4)=20;MEMF(args[0]+8)=30;return args[0];
        }
        abort();
    }
}
static void drop_test_counts(void) {
    drop_test.randoms=drop_test.spawns=drop_test.potions=drop_test.money=0;
    drop_test.queries=drop_test.releases=drop_test.query_releases=drop_test.parties=0;
}
int raven_xml1_drop_fixture(uint32_t actor,uint32_t definition,uint32_t scratch) {
    memset(&drop_test,0,sizeof drop_test);drop_test.actor=actor;
    drop_test.inventory=scratch;drop_test.query=scratch+0x1800;drop_test.list=scratch+0x1900;
    MEM32(drop_test.query)=scratch+0x1a00;MEM32(scratch+0x1a68)=0xD001;
    MEM32(drop_test.list)=scratch+0x1b00;MEM32(scratch+0x1b00)=0xD002;
    MEM8(scratch+0x1696)=1;MEM8(scratch+0x1697)=2;
    drop_test.available=3;drop_call=drop_test_call;drop_room=drop_test_room;
    int failed=0;uint32_t sp=g_esp;int top=g_fp_top;
    raven_xml1_bonus_drops(0x498E88,1,0x999);
    if(drop_test.randoms||drop_test.spawns||drop_test.queries||drop_test.parties!=1)failed=1;
    unsigned p=raven_xml1_powerup_affecter_begin(definition);
    raven_xml1_powerup_affecter_attribute(definition,p,"attribute","extra_potions");
    raven_xml1_powerup_affecter_attribute(definition,p,"affect_type","scale");
    raven_xml1_powerup_affecter_attribute(definition,p,"level","2");
    unsigned m=raven_xml1_powerup_affecter_begin(definition);
    raven_xml1_powerup_affecter_attribute(definition,m,"attribute","extra_money");
    raven_xml1_powerup_affecter_attribute(definition,m,"affect_type","scale");
    raven_xml1_powerup_affecter_attribute(definition,m,"level","2");
    drop_test_counts();raven_xml1_bonus_drops(0x498E88,1,0x999);
    if(drop_test.potions!=1||!drop_test.money||drop_test.spawns!=3||
       drop_test.releases!=1||drop_test.query_releases!=1)failed=2;
    drop_test_counts();drop_test.available=0;raven_xml1_bonus_drops(0x498E88,1,0x999);
    if(drop_test.potions||!drop_test.money||drop_test.spawns!=2)failed=3;
    drop_test_counts();drop_test.nearby=20;raven_xml1_bonus_drops(0x498E88,1,0x999);
    if(drop_test.randoms||drop_test.spawns||drop_test.releases!=1||drop_test.query_releases!=1)failed=4;
    drop_test_counts();drop_test.nearby=0;drop_test.empty_list=1;
    raven_xml1_bonus_drops(0x498E88,1,0x999);
    if(drop_test.randoms||drop_test.spawns||drop_test.releases||drop_test.query_releases!=1)failed=5;
    drop_test_counts();drop_test.empty_list=0;drop_test.stale=1;
    raven_xml1_bonus_drops(0x498E88,1,0x999);
    if(drop_test.randoms||drop_test.spawns||drop_test.queries)failed=6;
    drop_test_counts();drop_test.stale=0;raven_xml1_bonus_drops(0x498E88,0,0x999);
    if(drop_test.parties||drop_test.randoms||drop_test.spawns)failed=7;
    drop_test_counts();drop_test.nearby=19;drop_test.available=3;
    raven_xml1_bonus_drops(0x498E88,1,0x999);
    if(drop_test.spawns!=1||drop_test.potions!=1||drop_test.money)failed=8;
    drop_test_counts();drop_test.nearby=0;drop_test.fail_spawn=1;
    raven_xml1_bonus_drops(0x498E88,1,0x999);
    if(drop_test.potions||drop_test.money||drop_test.spawns!=2||drop_test.query_releases!=1)failed=9;
    drop_test_counts();drop_test.fail_spawn=0;drop_test.retire_after_spawn=1;
    raven_xml1_bonus_drops(0x498E88,1,0x999);
    if(drop_test.spawns!=1||drop_test.potions!=1||drop_test.money)failed=11;
    drop_test_counts();drop_test.retire_after_spawn=0;drop_test.stale=0;
    raven_xml1_powerup_affecter_attribute(definition,p,"level","1.5");
    raven_xml1_powerup_affecter_attribute(definition,m,"level","1");
    raven_xml1_bonus_drops(0x498E88,1,0x999);
    if(drop_test.spawns!=1||drop_test.potions!=1||drop_test.money)failed=12;
    if(g_esp!=sp||g_fp_top!=top)failed=10;
    raven_xml1_powerup_metadata_reset(definition);
    drop_call=drop_native_call;drop_room=raven_xml1_drop_potion_room;
    printf("%s bonus-drop orchestration: no-bonus/category neutrality, potion/money output, full inventory, nearby limit, stale source, exhausted result pool, spawn failure, source retirement, fractional bonus and query cleanup; world/party/inventory selection/spawn terminals substituted (%d)\n",failed?"FAIL":"PASS",failed);
    return failed;
}
