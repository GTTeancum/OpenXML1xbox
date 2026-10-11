#include "engine/inventory/raven_auto_equip_selection.h"

static uint32_t (*auto_equip_call)(uint32_t,uint32_t,unsigned,const uint32_t*,int)=spawner_call;
static int auto_equip_busy;
static int auto_equip_eligible(void *unused,uint32_t character,unsigned item) {
    uint32_t args[2]={item,character};(void)unused;
    return (auto_equip_call(0,0x166790,2,args,0)&255u)!=0;
}
static int auto_equip_assign(void *unused,uint32_t character,unsigned item) {
    uint32_t stats=auto_equip_call(character,0x801F0,0,NULL,0);(void)unused;
    return (auto_equip_call(stats,0x47B70,1,&item,0)&255u)!=0;
}

/* The caller supplies unique participating character owners, never actors or
 * roster IDs. Do not use the menu transfer166880: it borrows global selection
 * and UI rows. Native stats insert/remove plus an independently accounted
 * shared pool preserve ownership without changing the player's open menu.
 * Party discovery and preference filtering belong at the invocation boundary.
 */
static int auto_equip_transaction(const uint32_t *characters,unsigned count) {
    struct equipment_snapshot { uint32_t stats,items[3];unsigned count; } old[5];
    raven_auto_equip_inventory pool;
    raven_auto_equip_candidate candidates[RAVEN_AUTO_EQUIP_ITEMS];
    uint8_t quantity[RAVEN_AUTO_EQUIP_ITEMS],maximum[RAVEN_AUTO_EQUIP_ITEMS];
    uint8_t output[RAVEN_AUTO_EQUIP_ITEMS];
    unsigned candidate_count=0;
    if(!count)return 1;
    if(!characters||count>5)return 0;
    uint32_t inventory=auto_equip_call(0,0x7F850,0,NULL,0);
    unsigned definitions=auto_equip_call(inventory,0x7E130,0,NULL,0);
    if(definitions>RAVEN_AUTO_EQUIP_ITEMS)return 0;
    for(unsigned item=0;item<definitions;++item) {
        quantity[item]=(uint8_t)auto_equip_call(inventory,0x7E430,1,&item,0);
        maximum[item]=(uint8_t)auto_equip_call(inventory,0x7E4A0,1,&item,0);
        uint32_t record=auto_equip_call(inventory,0x7E270,1,&item,0);
        if(!record)return 0;
        if(MEM32(record+0xc)!=1)continue; /* Existing XML1 equipment type. */
        candidates[candidate_count].item=item;
        candidates[candidate_count].category=(int32_t)auto_equip_call(inventory,0x7EFB0,1,&item,0);
        candidates[candidate_count].cost=(int32_t)auto_equip_call(inventory,0x7EF50,1,&item,0);
        ++candidate_count;
    }
    if(!raven_auto_equip_inventory_begin(&pool,quantity,maximum,definitions))return 0;
    /* Validate and snapshot everything before the first native mutation. */
    for(unsigned h=0;h<count;++h) {
        if(!characters[h])return 0;
        for(unsigned j=0;j<h;++j)if(characters[h]==characters[j])return 0;
        old[h].stats=auto_equip_call(characters[h],0x801F0,0,NULL,0);
        old[h].count=auto_equip_call(old[h].stats,0x47690,0,NULL,0);
        if(old[h].count>3)return 0;
        for(unsigned i=0;i<old[h].count;++i) {
            unsigned item=auto_equip_call(old[h].stats,0x47820,1,&i,0);
            if(!raven_auto_equip_inventory_release(&pool,item))return 0;
            old[h].items[i]=item;
        }
    }
    for(unsigned h=0;h<count;++h) {
        /* Clear active effects while the old equipment list still exists;
         * XML1 B11E0 owns actor effect detach and effect-handle retirement. */
        auto_equip_call(characters[h],0xB11E0,0,NULL,0);
        for(unsigned i=0;i<old[h].count;++i)
            if(!(auto_equip_call(old[h].stats,0x47E10,1,&old[h].items[i],0)&255u))
                goto rollback;
    }
    if(!raven_auto_equip_select(&pool,candidates,candidate_count,characters,count,
                               auto_equip_eligible,auto_equip_assign,NULL) ||
       !raven_auto_equip_inventory_finish(&pool,output,definitions))goto rollback;
    for(unsigned item=0;item<definitions;++item) {
        if(quantity[item]==output[item])continue;
        uint32_t args[2]={item,output[item]};
        if(!(auto_equip_call(inventory,0x7E450,2,args,0)&255u))
            extension_failure("auto-equip validated inventory commit");
    }
    for(unsigned h=0;h<count;++h) {
        uint32_t args[2]={0,13};
        auto_equip_call(characters[h],0xB2490,2,args,0);
    }
    return 1;
rollback:
    /* No native quantities were published yet. Restore every participant's
     * original IDs and then rebuild effects, including those not yet visited
     * by the removal loop. A broken native restore is fatal, never a partial
     * 'success' that silently duplicates or loses the player's equipment. */
    for(unsigned h=0;h<count;++h) {
        unsigned equipped=auto_equip_call(old[h].stats,0x47690,0,NULL,0);
        if(equipped>3)extension_failure("auto-equip rollback capacity");
        while(equipped--) {
            uint32_t index=0,item=auto_equip_call(old[h].stats,0x47820,1,&index,0);
            if(!(auto_equip_call(old[h].stats,0x47E10,1,&item,0)&255u))
                extension_failure("auto-equip rollback removal");
        }
        for(unsigned i=0;i<old[h].count;++i)
            if(!(auto_equip_call(old[h].stats,0x47B70,1,&old[h].items[i],0)&255u))
                extension_failure("auto-equip rollback restoration");
    }
    for(unsigned h=0;h<count;++h) {
        uint32_t args[2]={0,13};
        auto_equip_call(characters[h],0xB2490,2,args,0);
    }
    return 0;
}

static void auto_equip_set_preferences(int enabled) {
    uint32_t manager=auto_equip_call(0,0x56E90,0,NULL,0);
    unsigned count=auto_equip_call(manager,0x56C90,0,NULL,0);
    if(count>255)extension_failure("auto-equip definition count");
    for(unsigned id=0;id<count;++id) {
        /* XML2 AF350 tests its character-manager available flag. XML1 owns
         * that flag at virtual80, distinct from virtual7C's instantiated test.
         * Use the existing accessors so expanded roster layout remains owned
         * by the established character guards, not copied offsets here. */
        if(!(auto_equip_call(manager,0x56DB0,1,&id,0)&255u) ||
           !(auto_equip_call(manager,0x56D90,1,&id,0)&255u))continue;
        uint32_t character=auto_equip_call(manager,0x56E60,1,&id,0);
        uint32_t stats=auto_equip_call(character,0x801F0,0,NULL,0);
        if(!raven_auto_equip_set(xml1_vitality_owner(),stats,enabled))
            extension_failure("auto-equip preference owner");
    }
}

static int auto_equip_run(void) {
    uint32_t sp=g_esp,characters[5];unsigned participants=0;
    if(auto_equip_busy)return 1;
    auto_equip_busy=1;
    g_esp-=32;uint32_t list=g_esp;
    auto_equip_call(list,0x322B0,0,NULL,0);
    uint32_t game=auto_equip_call(0,0x72CF0,0,NULL,0),args[3]={list,0xffffffffu,0};
    auto_equip_call(game,0x72470,3,args,0);
    unsigned count=MEM32(list+0x14);
    if(count>5)extension_failure("auto-equip party capacity");
    for(unsigned i=0;i<count;++i) {
        uint32_t actor=auto_equip_call(list+i*4,0x6BF80,0,NULL,0);
        if(!entity_has_type(actor,0x485878) || !(MEMF(actor+0x240)>0))continue;
        uint32_t character=MEM32(actor+0x2d8);
        if(!character)continue;
        uint32_t stats=auto_equip_call(character,0x801F0,0,NULL,0);
        uint8_t enabled=0;
        if(!raven_auto_equip_get(xml1_vitality_owner(),stats,&enabled)||!enabled)continue;
        unsigned j=0;while(j<participants && characters[j]!=character)++j;
        if(j==participants)characters[participants++]=character;
    }
    int ok=auto_equip_transaction(characters,participants);
    g_esp=sp;auto_equip_busy=0;return ok;
}
static void set_auto_equip(void) {
    uint32_t sp=g_esp,args=MEM32(sp+4);
    int enabled=argument(args,0,0x10)!=0;
    auto_equip_set_preferences(enabled);
    if(!auto_equip_run())fprintf(stderr,"[AUTO EQUIP] Transfer rolled back; original equipment retained\n");
    g_eax=0;g_esp=sp+4;
}
void xml1_auto_equip_pickup(uint32_t record) {
    if(!record || MEM32(record+0xc)!=1 || auto_equip_busy)return;
    uint32_t saved[]={g_eax,g_ebx,g_ecx,g_edx,g_esi,g_edi,g_ebp,g_esp,g_seh_ebp};
    int fp=g_fp_top;
    if(!auto_equip_run())fprintf(stderr,"[AUTO EQUIP] Pickup transfer rolled back; original equipment retained\n");
    if(g_fp_top!=fp)extension_failure("auto-equip pickup FPU balance");
    g_eax=saved[0];g_ebx=saved[1];g_ecx=saved[2];g_edx=saved[3];
    g_esi=saved[4];g_edi=saved[5];g_ebp=saved[6];g_esp=saved[7];g_seh_ebp=saved[8];
}

/* Contract fixture: native stats methods and their ABI execute unchanged;
 * inventory definitions, requirement evaluation and world effect endpoints
 * are isolated. This does not claim an in-game pickup/animation test. */
static struct {
    uint32_t records,characters[2];
    uint32_t actors[5];
    uint8_t quantity[3],maximum[3];
    unsigned clear,refresh,commits;
} auto_equip_fixture;
static uint32_t auto_equip_fixture_call(uint32_t receiver,uint32_t code,
                                      unsigned count,const uint32_t *args,int cdecl_call) {
    static const int category[3]={0,1,0},cost[3]={10,20,100};
    if(code==0x56E90)return 0x123457;
    if(code==0x56C90)return 4;
    if(code==0x56DB0 || code==0x56D90 || code==0x56E60) {
        if(receiver!=0x123457 || count!=1 || args[0]>=4)
            extension_failure("auto-equip fixture character manager ABI");
        if(code==0x56DB0)return args[0]==1||args[0]==2;
        if(code==0x56D90)return args[0]!=0;
        if(args[0]!=1&&args[0]!=2)extension_failure("auto-equip unavailable character dereference");
        return auto_equip_fixture.characters[args[0]-1];
    }
    if(code==0x72CF0)return 0x123458;
    if(code==0x72470) {
        if(receiver!=0x123458 || count!=3 || args[1]!=0xffffffffu || args[2])
            extension_failure("auto-equip fixture party selector ABI");
        for(unsigned i=0;i<5;++i)MEM32(args[0]+i*4)=100+i;
        MEM32(args[0]+0x14)=5;return args[0];
    }
    if(code==0x6BF80) {
        unsigned handle=MEM32(receiver);
        if(count||handle<100||handle>=105)extension_failure("auto-equip fixture generation handle ABI");
        return auto_equip_fixture.actors[handle-100];
    }
    if(code==0x7F850)return 0x123456;
    if(code==0x7E130)return 3;
    if(code==0x7E430 || code==0x7E4A0 || code==0x7E270 || code==0x7EFB0 || code==0x7EF50) {
        if(receiver!=0x123456 || count!=1 || args[0]>=3)
            extension_failure("auto-equip fixture inventory ABI");
        unsigned item=args[0];
        if(code==0x7E430)return auto_equip_fixture.quantity[item];
        if(code==0x7E4A0)return auto_equip_fixture.maximum[item];
        if(code==0x7E270)return auto_equip_fixture.records+item*0x24;
        if(code==0x7EFB0)return category[item];
        return cost[item];
    }
    if(code==0x7E450) {
        if(receiver!=0x123456 || count!=2 || args[0]>=3 ||
           args[1]>auto_equip_fixture.maximum[args[0]])
            extension_failure("auto-equip fixture quantity publication");
        auto_equip_fixture.quantity[args[0]]=(uint8_t)args[1];
        ++auto_equip_fixture.commits;return 1;
    }
    if(code==0x166790) {
        if(count!=2 || args[0]>=3 ||
           (args[1]!=auto_equip_fixture.characters[0] && args[1]!=auto_equip_fixture.characters[1]))
            extension_failure("auto-equip fixture eligibility ABI");
        uint32_t stats=args[1]+4;unsigned n=MEM32(stats+0x1e0);
        if(n>=3)return 0;
        for(unsigned i=0;i<n;++i)
            if(category[MEM8(stats+0x1dc+i)]==category[args[0]])return 0;
        return 1;
    }
    if(code==0xB11E0 || code==0xB2490) {
        if(receiver!=auto_equip_fixture.characters[0] && receiver!=auto_equip_fixture.characters[1])
            extension_failure("auto-equip fixture effect owner");
        if(code==0xB11E0) {
            if(count)extension_failure("auto-equip fixture detach ABI");
            ++auto_equip_fixture.clear;
        } else {
            if(count!=2 || args[0]!=0 || args[1]!=13)
                extension_failure("auto-equip fixture refresh ABI");
            ++auto_equip_fixture.refresh;
        }
        return 0;
    }
    return spawner_call(receiver,code,count,args,cdecl_call);
}
static void auto_equip_transaction_fixture(void (*script)(void)) {
    uint32_t sp=g_esp;g_esp-=0x2200;
    memset((void*)XBOX_PTR(g_esp),0,0x2200);
    memset(&auto_equip_fixture,0,sizeof auto_equip_fixture);
    auto_equip_fixture.characters[0]=g_esp;
    auto_equip_fixture.characters[1]=g_esp+0x500;
    auto_equip_fixture.records=g_esp+0xa00;
    for(unsigned i=0;i<3;++i)MEM32(auto_equip_fixture.records+i*0x24+0xc)=1;
    auto_equip_call=auto_equip_fixture_call;
    for(unsigned pass=0;pass<2;++pass) {
        for(unsigned h=0;h<2;++h) {
            uint32_t stats=auto_equip_fixture.characters[h]+4;
            MEM32(stats+0x1e0)=1;MEM8(stats+0x1dc)=0;
        }
        auto_equip_fixture.quantity[0]=0;
        auto_equip_fixture.quantity[1]=2;
        auto_equip_fixture.quantity[2]=1;
        auto_equip_fixture.maximum[0]=pass?0:2;
        auto_equip_fixture.maximum[1]=auto_equip_fixture.maximum[2]=2;
        auto_equip_fixture.clear=auto_equip_fixture.refresh=auto_equip_fixture.commits=0;
        int ok=auto_equip_transaction(auto_equip_fixture.characters,2);
        if(ok!=(pass==0) || auto_equip_fixture.clear!=2 || auto_equip_fixture.refresh!=2)
            extension_failure("auto-equip native transaction result/effect lifecycle");
        for(unsigned h=0;h<2;++h) {
            uint32_t stats=auto_equip_fixture.characters[h]+4;
            if(pass) {
                if(MEM32(stats+0x1e0)!=1 || MEM8(stats+0x1dc)!=0)
                    extension_failure("auto-equip native rollback ownership");
            } else {
                /* Native insertion sorts byte IDs, independent of pick order. */
                if(MEM32(stats+0x1e0)!=2 || MEM8(stats+0x1dc)!=(h?0:1) ||
                   MEM8(stats+0x1dd)!=(h?1:2))
                    extension_failure("auto-equip native selection ownership");
            }
        }
        if(pass) {
            if(auto_equip_fixture.commits || auto_equip_fixture.quantity[0]!=0 ||
               auto_equip_fixture.quantity[1]!=2 || auto_equip_fixture.quantity[2]!=1)
                extension_failure("auto-equip rollback published inventory");
        } else if(auto_equip_fixture.quantity[0]!=1 || auto_equip_fixture.quantity[1] ||
                  auto_equip_fixture.quantity[2] || auto_equip_fixture.commits!=3)
            extension_failure("auto-equip native copy conservation");
    }
    uint32_t saved_type=MEM32(0x485878);MEM32(0x485878)=0;
    uint32_t methods=g_esp+0xb00;MEM32(methods)=0x2E6B0;
    for(unsigned i=0;i<5;++i) {
        uint32_t actor=g_esp+0xc00+i*0x400;
        auto_equip_fixture.actors[i]=actor;MEM32(actor)=methods;MEM32(actor+0x18)=2;
        MEMF(actor+0x240)=100;
        MEM32(actor+0x2d8)=auto_equip_fixture.characters[i==1];
    }
    MEMF(auto_equip_fixture.actors[3]+0x240)=0; /* dead */
    auto_equip_fixture.actors[4]=0; /* stale generation handle */
    for(unsigned h=0;h<2;++h) {
        uint32_t stats=auto_equip_fixture.characters[h]+4;
        xml1_vitality_construct(stats);MEM32(stats+0x1e0)=1;MEM8(stats+0x1dc)=0;
    }
    auto_equip_set_preferences(1);
    uint8_t enabled=0;
    if(!raven_auto_equip_get(xml1_vitality_owner(),auto_equip_fixture.characters[1]+4,&enabled)||!enabled)
        extension_failure("auto-equip roster preference setter");
    raven_auto_equip_set(xml1_vitality_owner(),auto_equip_fixture.characters[1]+4,0);
    auto_equip_fixture.quantity[0]=0;auto_equip_fixture.quantity[1]=2;auto_equip_fixture.quantity[2]=1;
    auto_equip_fixture.maximum[0]=2;
    auto_equip_fixture.clear=auto_equip_fixture.refresh=auto_equip_fixture.commits=0;
    uint32_t saved[]={g_eax,g_ebx,g_ecx,g_edx,g_esi,g_edi,g_ebp,g_esp,g_seh_ebp};
    int fp=g_fp_top;
    xml1_auto_equip_pickup(auto_equip_fixture.records);
    uint32_t after[]={g_eax,g_ebx,g_ecx,g_edx,g_esi,g_edi,g_ebp,g_esp,g_seh_ebp};
    if(memcmp(saved,after,sizeof saved)||g_fp_top!=fp || auto_equip_fixture.clear!=1 ||
       auto_equip_fixture.refresh!=1 || MEM32(auto_equip_fixture.characters[1]+4+0x1e0)!=1 ||
       MEM8(auto_equip_fixture.characters[1]+4+0x1dc)!=0 ||
       auto_equip_fixture.quantity[0]!=1 ||auto_equip_fixture.quantity[1]!=1 ||auto_equip_fixture.quantity[2])
        extension_failure("auto-equip pickup ABI/participant ownership");
    auto_equip_set_preferences(0);
    unsigned commits=auto_equip_fixture.commits;
    xml1_auto_equip_pickup(auto_equip_fixture.records);
    if(commits!=auto_equip_fixture.commits || auto_equip_fixture.clear!=1)
        extension_failure("auto-equip disabled pickup changed equipment");
    /* The caller resolves this callback from the populated extension table.
     * Native CValueFloat virtual10 performs integer conversion; both zero and
     * a negative nonzero exercise script truth handling and void-result ABI. */
    uint32_t args=g_esp+0xb40,value=g_esp+0xb80,entry=g_esp;
    MEM32(args)=value;MEM32(args+0x1c)=1;MEM32(value)=0x3D57C4;
    for(unsigned pass=0;pass<2;++pass) {
        MEMF(value+4)=pass?-2.0f:0.0f;
        PUSH32(g_esp,args);PUSH32(g_esp,0);script();
        if(g_eax || g_esp!=entry-4 || MEM32(g_esp)!=args || g_fp_top!=fp)
            extension_failure("registered auto-equip script ABI");
        g_esp=entry;
        for(unsigned h=0;h<2;++h) {
            uint8_t flag=99;
            if(!raven_auto_equip_get(xml1_vitality_owner(),auto_equip_fixture.characters[h]+4,&flag) || flag!=pass)
                extension_failure("registered auto-equip integer conversion/preferences");
        }
    }
    for(unsigned h=0;h<2;++h)xml1_vitality_retire(auto_equip_fixture.characters[h]+4);
    MEM32(0x485878)=saved_type;
    auto_equip_call=spawner_call;g_esp=sp;
    fprintf(stderr,"PASS auto-equip native stats transaction: ownership, copy conservation, effect endpoints and overflow rollback\n");
    fprintf(stderr,"PASS auto-equip pickup/roster integration: persisted preferences, dead/stale/duplicate filtering, disabled ownership and register/FPU balance\n");
    fprintf(stderr,"PASS registered setAutoEquip: native argument conversion, zero/nonzero preferences, immediate selection and void-result ABI\n");
}
