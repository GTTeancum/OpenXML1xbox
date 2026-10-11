/* XML2 B7360 collectible reward. Collection flags are queried, never changed
 * here: map scripts own those flags and their existing save persistence. */
typedef struct disc_reward_plan {
    unsigned progress,health,energy,xp;
} disc_reward_plan;
static disc_reward_plan disc_reward_for_count(unsigned count) {
    disc_reward_plan result={count%4?count%4:4,0,0,0};
    switch(count) {
    case 4: result.health=2;result.xp=500;break;
    case 8: result.energy=2;result.xp=750;break;
    case 12: result.health=4;result.xp=1000;break;
    case 16: result.energy=4;result.xp=1500;break;
    case 20: result.health=result.energy=6;result.xp=2500;break;
    }
    return result;
}
static uint32_t (*disc_reward_call)(uint32_t,uint32_t,unsigned,const uint32_t*,int)=spawner_call;
static void (*disc_reward_add_bonus)(unsigned,unsigned)=xml1_campaign_add_pickup_bonus;
static void disc_reward_refill(uint32_t inventory,unsigned energy) {
    uint32_t level=0xffffffffu;
    uint32_t capacity=disc_reward_call(inventory,
        MEM32(MEM32(inventory)+0x34+energy*4),1,&level,0);
    uint32_t args[]={MEM8(inventory+0x1696+energy),(uint16_t)capacity};
    /* Native inventory quantity setter validates the ID and clamps to the
     * authored storage maximum; never write counts or item limits directly. */
    if(!(disc_reward_call(inventory,0x7e450,2,args,0)&255u))
        extension_failure("collectible refill missing native inventory item");
}
static void disc_reward_apply(unsigned count) {
    disc_reward_plan plan=disc_reward_for_count(count);
    if(plan.health||plan.energy) {
        disc_reward_add_bonus(plan.health,plan.energy);
        uint32_t inventory=disc_reward_call(0,0x7f850,0,NULL,0);
        if(plan.health)disc_reward_refill(inventory,0);
        if(plan.energy)disc_reward_refill(inventory,1);
        uint32_t manager=disc_reward_call(0,0x56e90,0,NULL,0),args[]={plan.xp,1};
        /* Native awardXPToPlayable98AC0 owns the existing XP rules. Same
         * two calls, including its notification, without an XML2 XP system. */
        disc_reward_call(manager,MEM32(MEM32(manager)+0xcc),2,args,0);
        args[1]=0;disc_reward_call(0,0x2fcf0,2,args,1);
    }
    uint32_t entry=g_esp;g_esp-=512;uint32_t message=g_esp;
    char *text=(char*)XBOX_PTR(message);
    int used=snprintf(text,512,"Data discs collected: %u / 4",plan.progress);
    /* XML2's localization IDs belong to a different table. These new labels
     * must not resolve against unrelated XML1 strings or replace stock data. */
    if(plan.health)used+=snprintf(text+used,512-(unsigned)used,
        "\nHealth pack capacity increased by %u.",plan.health);
    if(plan.energy)snprintf(text+used,512-(unsigned)used,
        "\nEnergy pack capacity increased by %u.",plan.energy);
    uint32_t popup=disc_reward_call(0,0x187af0,0,NULL,0),page=0;
    disc_reward_call(popup,MEM32(MEM32(popup)+0x10),1,&page,0);
    /* XML1 v0C=1873D0 takes text and duration (two arguments). It builds
     * the native acknowledgement button and copies text through186BC0;
     * do not copy XML2's three-argument popup signature into this interface. */
    uint32_t args[]={message,0xbf800000u};
    disc_reward_call(popup,MEM32(MEM32(popup)+0x0c),2,args,0);
    g_esp=entry;
}
static uint32_t (*disc_reward_variable)(uint32_t)=game_variable;
static void data_disc_reward(void) {
    uint32_t entry=g_esp,name=argument(MEM32(g_esp+4),0,0x14);
    disc_reward_apply(flag_count(disc_reward_variable(name)));
    g_eax=0;g_esp=entry+4;
}

/* Programmatic integration fixture. Inventory quantity writes are real;
 * capacity, XP and popup terminals are substituted and checked explicitly. */
static uint32_t disc_fixture_pool;
static unsigned disc_fixture_health,disc_fixture_energy,disc_fixture_xp,disc_fixture_awards;
static unsigned disc_fixture_notifications,disc_fixture_popups,disc_fixture_failed;
static char disc_fixture_message[512];
static uint32_t disc_fixture_flags;
static unsigned disc_fixture_reads;
static uint32_t disc_fixture_variable(uint32_t name) {
    if(strcmp((const char*)XBOX_PTR(name),"collectible_fixture")||disc_fixture_reads++)disc_fixture_failed=1;
    return disc_fixture_flags;
}
static void disc_fixture_bonus(unsigned health,unsigned energy) {
    disc_fixture_health+=health;disc_fixture_energy+=energy;
}
static uint32_t disc_fixture_call(uint32_t receiver,uint32_t target,unsigned count,
                                  const uint32_t *args,int caller_pop) {
    uint32_t inv=disc_fixture_pool,manager=inv+0x1b00,popup=manager+0x100;
    uint32_t tokens=popup+0x200;
    if(target==0x7f850||target==0x56e90||target==0x187af0) {
        if(receiver||count||caller_pop)disc_fixture_failed=1;
        return target==0x7f850?inv:target==0x56e90?manager:popup;
    }
    if(target==tokens||target==tokens+4) {
        if(receiver!=inv||count!=1||args[0]!=0xffffffffu||caller_pop)disc_fixture_failed=1;
        return 30+(target==tokens?disc_fixture_health:disc_fixture_energy);
    }
    if(target==0x7e450) {
        if(receiver!=inv||count!=2||caller_pop)disc_fixture_failed=1;
        return spawner_call(receiver,target,count,args,caller_pop);
    }
    if(target==tokens+8) {
        if(receiver!=manager||count!=2||args[1]!=1||caller_pop||disc_fixture_awards++)disc_fixture_failed=1;
        disc_fixture_xp=args[0];return 0;
    }
    if(target==0x2fcf0) {
        if(receiver||count!=2||args[0]!=disc_fixture_xp||args[1]||!caller_pop||
           disc_fixture_awards!=1||disc_fixture_notifications++)disc_fixture_failed=1;
        return 0;
    }
    if(target==tokens+12) {
        if(receiver!=popup||count!=1||args[0]||caller_pop)disc_fixture_failed=1;
        return 0;
    }
    if(target==tokens+16) {
        if(receiver!=popup||count!=2||args[1]!=0xbf800000u||caller_pop||disc_fixture_popups++)disc_fixture_failed=1;
        snprintf(disc_fixture_message,sizeof(disc_fixture_message),"%s",(const char*)XBOX_PTR(args[0]));
        return 0;
    }
    disc_fixture_failed=1;return 0;
}
static int disc_reward_fixture(uint32_t pool,void (*command)(void)) {
    uint32_t inv=pool,manager=inv+0x1b00,popup=manager+0x100,table=popup+0x10,tokens=popup+0x200;
    uint32_t sp=g_esp;int fp=g_fp_top;
    memset((void*)XBOX_PTR(pool),0,0x2000);
    MEM32(inv)=table;MEM32(manager)=table;MEM32(popup)=table;
    MEM32(table+0x34)=tokens;MEM32(table+0x38)=tokens+4;MEM32(table+0xcc)=tokens+8;
    MEM32(table+0x10)=tokens+12;MEM32(table+0xc)=tokens+16;
    MEM8(inv+0x1688)=2;MEM8(inv+0x1696)=0;MEM8(inv+0x1697)=1;
    MEM8(inv+4+0x1d)=99;MEM8(inv+4+0x24+0x1d)=99;
    disc_fixture_pool=pool;disc_fixture_failed=0;
    disc_reward_call=disc_fixture_call;disc_reward_add_bonus=disc_fixture_bonus;
    disc_reward_variable=disc_fixture_variable;
    uint32_t argv=pool+0x1e00,value=argv+0x30,name=value+0x10;
    MEM32(argv)=value;MEM32(argv+0x1c)=1;MEM32(value)=0x3d5980;MEM32(value+4)=name;
    strcpy((char*)XBOX_PTR(name),"collectible_fixture");
    for(unsigned n=0;n<=32;++n) {
        unsigned health=n==4?2:n==12?4:n==20?6:0;
        unsigned energy=n==8?2:n==16?4:n==20?6:0;
        unsigned xp=n==4?500:n==8?750:n==12?1000:n==16?1500:n==20?2500:0;
        disc_fixture_health=disc_fixture_energy=disc_fixture_xp=disc_fixture_awards=0;
        disc_fixture_notifications=disc_fixture_popups=0;
        MEM8(inv+4+0x1c)=3;MEM8(inv+4+0x24+0x1c)=7;
        uint32_t flags=n==32?0xffffffffu:(1u<<n)-1u;
        disc_fixture_flags=flags;disc_fixture_reads=0;
        PUSH32(g_esp,argv);PUSH32(g_esp,0);command();
        if(g_eax||g_esp!=sp-4||MEM32(g_esp)!=argv||disc_fixture_reads!=1||disc_fixture_flags!=flags)
            disc_fixture_failed=1;
        g_esp+=4;
        if(disc_fixture_health!=health||disc_fixture_energy!=energy||disc_fixture_xp!=xp||
           disc_fixture_awards!=(xp!=0)||disc_fixture_notifications!=(xp!=0)||disc_fixture_popups!=1||
           MEM8(inv+4+0x1c)!=(health?30+health:3)||MEM8(inv+4+0x24+0x1c)!=(energy?30+energy:7)||
           g_esp!=sp||g_fp_top!=fp)disc_fixture_failed=1;
        char expected[64];snprintf(expected,sizeof(expected),"Data discs collected: %u / 4",n%4?n%4:4);
        if(strncmp(disc_fixture_message,expected,strlen(expected))||
           (!!strstr(disc_fixture_message,"Health pack"))!=(health!=0)||
           (!!strstr(disc_fixture_message,"Energy pack"))!=(energy!=0))disc_fixture_failed=1;
    }
    disc_reward_call=spawner_call;disc_reward_add_bonus=xml1_campaign_add_pickup_bonus;
    disc_reward_variable=game_variable;
    fprintf(stderr,"[DISC REWARD] %s registered dispatch/native string conversion, unchanged flags/counts0..32, milestone bonuses/refills, actual native quantity writes, XP/popup contracts and ABI; presentation terminals substituted\n",disc_fixture_failed?"FAIL":"PASS");
    return disc_fixture_failed;
}
