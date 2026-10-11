#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "engine/world/raven_campaign_state_guest.h"
#include "engine/scripting/raven_script_extensions.h"
#include "engine/world/raven_recall_flow.h"
#include "game/xml1/character_limits.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* CGame72CF0 owns live, baseline and retained campaign records. Follow XML1's
 * actual copies; do not replace its three-record policy with XML2's two.
 * XML2 record775C0 defaults difficulty to1; 7BA90 copies it as an integer. */
static const uint32_t records[3]={0x498E88u+0x4F8,0x498E88u+0x580,0x498E88u+0x608};
static int32_t difficulty[3]={1,1,1};
/* XML2 CGame+53C owns its record;775C0 initializes record+A4 (act) to1.
 * XML1 retains its own three-record lifecycle and native memory layout. */
static uint8_t current_act[3]={1,1,1};
/* Additional collectible allowances follow campaign ownership. XML1 keeps its
 * level-derived allowance (7E0B0) and authored item storage limits. Never
 * serialize a level-derived total or overwrite an item's authored capacity. */
static uint8_t pickup_bonus[3][2];
/* XML2 record+78/+98/+DA: owned return zone, departure position and recall
 * enabled bit. Keep them beside each XML1 campaign record, never in padding. */
static const xml1_recall_state recall_default={"none",{0,0,0},1};
static xml1_recall_state recall[3]={
    {"none",{0,0,0},1},{"none",{0,0,0},1},{"none",{0,0,0},1}};
static int startup_active;
static int default_startup_pending;
static int32_t startup_difficulty;
static void campaign_abi(uint32_t expected) {
    if(g_esp!=expected) {
        fprintf(stderr,"[CAMPAIGN EXTRA ERROR] Character startup ABI\n");_Exit(4);
    }
}
static uint32_t character_method(uint32_t manager,uint32_t method) {
    uint32_t sp=g_esp,target=MEM32(MEM32(manager)+method);
    g_ecx=manager;PUSH32(g_esp,0);RECOMP_ICALL_SAFE(target,sp);
    campaign_abi(sp);return g_eax;
}
static void require_game(void) {
    const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
    PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00072CF0u,sub_00072CF0);
    if(g_esp!=sp || g_eax!=0x498E88u) {
        fprintf(stderr,"[CAMPAIGN EXTRA ERROR] Game owner ABI\n");_Exit(4);
    }
    g_eax=ax;g_ecx=cx;g_edx=dx;
}
int32_t xml1_campaign_difficulty(void) {
    require_game();return difficulty[0];
}
void xml1_campaign_set_difficulty(int32_t value) {
    require_game();difficulty[0]=value;
}
unsigned xml1_campaign_current_act(void) {require_game();return current_act[0];}
void xml1_campaign_store_act(uint32_t value) {
    require_game();current_act[0]=(uint8_t)value; /* native784DC stores BL */
}
unsigned xml1_campaign_pickup_bonus(unsigned energy) {
    require_game();return pickup_bonus[0][energy?1:0];
}
void xml1_campaign_add_pickup_bonus(unsigned health,unsigned energy) {
    require_game();
    /* Native item quantities are bytes. Repeated mod-script rewards must not
     * wrap the added capacity. Consumers still honor authored item limits. */
    unsigned add[2]={health,energy};
    for(unsigned i=0;i<2;++i) {
        unsigned room=255u-pickup_bonus[0][i];
        pickup_bonus[0][i]+=(uint8_t)(add[i]<room?add[i]:room);
    }
}
/* The two native inventory methods share7E0B0. Distinct thunk tokens retain
 * which allowance is being queried without inferring it from a caller address.
 * All virtual consumers (pickup checks and UI) receive the same added value. */
static uint32_t pickup_capacity_code;
static void pickup_capacity(unsigned energy) {
    uint32_t inventory=g_ecx,entry=g_esp;
    RECOMP_ABI_CALL(0x0007E0B0u,sub_0007E0B0);
    campaign_abi(entry+8); /* native thiscall consumes return address and level */
    unsigned bonus=xml1_campaign_pickup_bonus(energy);
    if(!bonus)return; /* Stock return value and level policy remain exact. */
    unsigned id=MEM8(inventory+0x1696+energy);
    if(id>=MEM8(inventory+0x1688))return;
    unsigned maximum=MEM8(inventory+4+id*0x24+0x1d);
    unsigned original=(uint16_t)g_eax,total=original+bonus;
    /* Do not reduce an existing native allowance if a mod's authored storage
     * cap is lower. That cap already clamps actual quantities in7DEC0/7E450. */
    if(total>maximum)total=maximum;
    if(total>original)g_eax=(g_eax&0xffff0000u)|total;
}
static void pickup_health_capacity(void) {pickup_capacity(0);}
static void pickup_energy_capacity(void) {pickup_capacity(1);}
void (*xml1_campaign_capacity_lookup(uint32_t address))(void) {
    if(pickup_capacity_code&&address==pickup_capacity_code)return pickup_health_capacity;
    if(pickup_capacity_code&&address==pickup_capacity_code+4)return pickup_energy_capacity;
    return NULL;
}
void xml1_campaign_install_capacity(void) {
    /* Inventory constructor7F760 always installs this verified native table.
     * Patch only its two shared capacity entries; quantity and item ownership
     * interfaces remain native. Tokens live for the process like the table. */
    if(!pickup_capacity_code) {
        pickup_capacity_code=xbox_HeapAlloc(8,16);
        if(!pickup_capacity_code)_Exit(4);
    }
    for(unsigned i=0;i<2;++i) {
        uint32_t slot=0x3ce064+0x34+i*4,original=MEM32(slot);
        if(original!=0x7e0b0&&original!=pickup_capacity_code+i*4) {
            fputs("[CAMPAIGN EXTRA ERROR] Changed inventory capacity interface\n",stderr);_Exit(4);
        }
        MEM32(slot)=pickup_capacity_code+i*4;
    }
}
void xml1_campaign_recall_get(xml1_recall_state *out) {
    require_game();if(out)*out=recall[0];
}
int xml1_campaign_recall_set(const xml1_recall_state *value) {
    if(!value||!memchr(value->zone,0,sizeof(value->zone))||value->enabled>1)return 0;
    require_game();recall[0]=*value;return 1;
}
int xml1_campaign_recall_step(float simulation_delta) {
    require_game();
    return raven_recall_cooldown_step(&recall[0].cooldown,simulation_delta);
}
static int recall_is_default(const xml1_recall_state *value) {
    return !strcmp(value->zone,"none")&&value->position[0]==0&&
        value->position[1]==0&&value->position[2]==0&&value->enabled==1&&value->cooldown==0;
}
int xml1_campaign_startup_begin(void) {
    if(startup_active)return 0;
    startup_difficulty=difficulty[0];startup_active=1;return 1;
}
void xml1_campaign_startup_after_reset(void) {
    if(!startup_active)return;
    /* The added startup flow chooses before calling XML1's synchronous
     * newgame command. Reapply only this armed choice after native reset;
     * unrelated stock new games keep their native/default state. */
    difficulty[0]=startup_difficulty;startup_active=0;
    if(default_startup_pending) {
        default_startup_pending=0;
        /* As with useSavedStats, the chosen live definitions must become the
         * new baseline at beginmission, not be replaced by an older snapshot.
         * Touch validity only for this explicitly armed additional startup. */
        uint32_t manager=MEM32(0x48d59c);
        if(!manager) {fputs("[CAMPAIGN EXTRA ERROR] No startup character owner\n",stderr);_Exit(4);}
        MEM8(manager+XML1_MANAGER_OFFSET(0xdac4))=0;
    }
}
void xml1_campaign_startup_end(void) {
    /* A command that failed to run must not affect some future new game. */
    startup_active=0;
    default_startup_pending=0;
}
static int prepare_definition_levels(uint32_t manager,uint32_t rules) {
    uint32_t frame=g_esp;
    int ok=1;
    uint32_t count=character_method(manager,0x44);
    for(uint32_t id=1;id<count;++id) {
        uint32_t target=MEM32(MEM32(manager)+0x7c);
        g_ecx=manager;PUSH32(g_esp,id);PUSH32(g_esp,0);
        RECOMP_ICALL_SAFE(target,frame);campaign_abi(frame);
        if(!(g_eax&0xff))continue;
        target=MEM32(MEM32(manager)+0x78);
        g_ecx=manager;PUSH32(g_esp,id);PUSH32(g_esp,0);
        RECOMP_ICALL_SAFE(target,frame);campaign_abi(frame);
        uint32_t definition=g_eax;
        /* Native57250 deliberately stops advancement from below35 at35.
         * Re-enter its ordinary interface for the remaining levels; never
         * patch that boundary, cap45, XP curve or allocation semantics. */
        for(unsigned attempt=0;attempt<2;++attempt) {
            g_ecx=definition;PUSH32(g_esp,0);
            RECOMP_ABI_CALL(0x000AF700u,sub_000AF700);campaign_abi(frame);
            int level=(int16_t)g_eax;
            if(level>=45)break;
            target=MEM32(MEM32(manager)+0xd0);
            g_ecx=manager;
            PUSH32(g_esp,0); /* fractional XP */
            PUSH32(g_esp,0); /* allocate all definitions after level preparation */
            PUSH32(g_esp,(uint32_t)(45-level));PUSH32(g_esp,definition);
            PUSH32(g_esp,rules);PUSH32(g_esp,0);
            RECOMP_ICALL_SAFE(target,frame);campaign_abi(frame);
        }
        g_ecx=definition;PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x000AF700u,sub_000AF700);campaign_abi(frame);
        if((int16_t)g_eax!=45)ok=0;
    }
    return ok;
}
static void allocate_definition_stats(uint32_t manager,uint32_t rules) {
    uint32_t sp=g_esp,count=character_method(manager,0x44);
    for(uint32_t id=1;id<count;++id) {
        uint32_t target=MEM32(MEM32(manager)+0x7c);
        g_ecx=manager;PUSH32(g_esp,id);PUSH32(g_esp,0);
        RECOMP_ICALL_SAFE(target,sp);campaign_abi(sp);
        if(!(g_eax&0xff))continue;
        target=MEM32(MEM32(manager)+0x78);
        g_ecx=manager;PUSH32(g_esp,id);PUSH32(g_esp,0);
        RECOMP_ICALL_SAFE(target,sp);campaign_abi(sp);
        uint32_t definition=g_eax;
        /* The native auto=true tail of57250, also applied to definitions
         * that were already45. Advancing by zero is not equivalent because
         * its XP operation would discard fractional level progress. */
        g_ecx=rules;PUSH32(g_esp,definition);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x000AF4E0u,sub_000AF4E0);campaign_abi(sp);
        g_ecx=definition;PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x000801F0u,sub_000801F0);campaign_abi(sp);
        g_ecx=g_eax;PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x00048950u,sub_00048950);campaign_abi(sp);
    }
}
static int rules_resource_ready(uint32_t rules) {
    uint32_t document=MEM32(rules+4),sp=g_esp;
    /* AE120 returns1 even when its underlying127510 load failed. Do not
     * advance XP before noticing a missing/invalid rules document.127510's
     * own parse-error byte is+2C;125F40 is its native first-child accessor.
     * This checks load readiness, not particular class names or mod content. */
    if(!document || MEM8(document+0x2c))return 0;
    g_ecx=document;PUSH32(g_esp,0);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x00125F40u,sub_00125F40);campaign_abi(sp);
    return g_eax!=0;
}
int xml1_campaign_prepare_default_stats(void) {
    /* XML2's missing default-stat startup promotes available definitions to45.
     * Its subsequent bit10 requests deferred auto allocation in the team menu
     * (1F1B9E..1F1BD0). XML1 already has stat/power allocation: keep its native
     * rules and allocator, rather than importing XML2 allocation or formulas. */
    if(xml1_campaign_difficulty()!=2)return 1;
    uint32_t saved[]={g_eax,g_ebx,g_ecx,g_edx,g_esi,g_edi,g_ebp,g_esp,g_seh_ebp};
    PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00056E90u,sub_00056E90);
    campaign_abi(saved[7]);uint32_t manager=g_eax;
    g_esp-=16;uint32_t rules=g_esp;
    /* Native55BC0 initializes this owning CStatRules value in precisely this
     * manner. AE120(-1) loads data/stat_rules.xml through normal resources;
     * AE0F0 releases its parsed resource with the native allocator. */
    MEM32(rules)=0x3cb6cc;MEM32(rules+4)=0;
    g_ecx=rules;PUSH32(g_esp,0xffffffffu);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x000AE120u,sub_000AE120);campaign_abi(rules);
    int ok=rules_resource_ready(rules);
    if(ok)ok=prepare_definition_levels(manager,rules);
    else fputs("[CAMPAIGN EXTRA ERROR] Default-stat rules resource missing or invalid\n",stderr);
    if(ok)allocate_definition_stats(manager,rules);
    g_ecx=rules;PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x000AE0F0u,sub_000AE0F0);campaign_abi(rules);
    g_eax=saved[0];g_ebx=saved[1];g_ecx=saved[2];g_edx=saved[3];
    g_esi=saved[4];g_edi=saved[5];g_ebp=saved[6];g_esp=saved[7];g_seh_ebp=saved[8];
    if(!ok)fputs("[CAMPAIGN EXTRA ERROR] Default character level preparation incomplete\n",stderr);
    return ok;
}
static int start_campaign(int prepare_stats) {
    if(!xml1_campaign_startup_begin())return 0;
    uint32_t saved[]={g_eax,g_ebx,g_ecx,g_edx,g_esi,g_edi,g_ebp,g_esp,g_seh_ebp};
    int ok=!prepare_stats || xml1_campaign_prepare_default_stats();
    if(ok) {
        /* Follow XML2 AE110's prepare-before-first-mission order, using XML1's
         * existing newgame command/roster/first mission. That native command
         * synchronously calls18CF90 then our existing18D102 reset boundary. */
        /* B069C's locked-campaign branch starts immediately, without AE110's
         * stat preparation. Preserve native baseline selection in that case;
         * only an explicit default-stat choice owns prepared live records. */
        default_startup_pending=prepare_stats;
        PUSH32(g_esp,0);RECOMP_ABI_CALL(0x0011CD90u,sub_0011CD90);
        campaign_abi(saved[7]);
        uint32_t target=MEM32(MEM32(g_eax)+0x14);
        g_ecx=g_eax;PUSH32(g_esp,0x3d2df8u);PUSH32(g_esp,0); /* newgame 1 */
        RECOMP_ICALL_SAFE(target,saved[7]);campaign_abi(saved[7]);
        ok=!startup_active;
    }
    xml1_campaign_startup_end();
    g_eax=saved[0];g_ebx=saved[1];g_ecx=saved[2];g_edx=saved[3];
    g_esi=saved[4];g_edi=saved[5];g_ebp=saved[6];g_esp=saved[7];g_seh_ebp=saved[8];
    return ok;
}
int xml1_campaign_start_default(void) {return start_campaign(1);}
int xml1_campaign_start_selected(void) {return start_campaign(0);}
static int record_index(uint32_t record) {
    for(int i=0;i<3;++i)if(records[i]==record)return i;
    return -1;
}
void xml1_campaign_record_init(uint32_t record) {
    int i=record_index(record);if(i>=0){difficulty[i]=1;current_act[i]=1;recall[i]=recall_default;}
    if(i>=0)memset(pickup_bonus[i],0,sizeof(pickup_bonus[i]));
    if(i==0)xml1_recall_cancel();
}
void xml1_campaign_record_copy(uint32_t destination,uint32_t source) {
    int to=record_index(destination),from=record_index(source);
    if(to>=0)difficulty[to]=from>=0?difficulty[from]:1;
    if(to>=0)current_act[to]=from>=0?current_act[from]:1;
    if(to>=0)recall[to]=from>=0?recall[from]:recall_default;
    if(to>=0)for(unsigned i=0;i<2;++i)pickup_bonus[to][i]=from>=0?pickup_bonus[from][i]:0;
}
static uint32_t cursor_and_room(uint32_t stream,uint32_t* room) {
    if(stream<0x10000 || stream>0x08000000u-0x2fc04)goto invalid;
    uint32_t cursor=MEM32(stream+0x2fc00);
    if(cursor<stream || cursor-stream>=0x2fc00)goto invalid;
    *room=0x2fc00-(cursor-stream);return cursor;
invalid:
    fprintf(stderr,"[CAMPAIGN EXTRA ERROR] Invalid stream\n");_Exit(4);
}
void xml1_campaign_extra_save(uint32_t stream) {
    unsigned version=(current_act[0]!=1||current_act[2]!=1)?2:1;
    if(!recall_is_default(&recall[0])||!recall_is_default(&recall[2]))version=3;
    if(recall[0].cooldown!=0||recall[2].cooldown!=0)version=4;
    if(pickup_bonus[0][0]||pickup_bonus[0][1]||pickup_bonus[2][0]||pickup_bonus[2][1])version=5;
    unsigned size=version==5?124:version==4?120:version==3?112:version==2?22:20;
    if(version==1 && difficulty[0]==1 && difficulty[2]==1)return;
    uint32_t room,cursor=cursor_and_room(stream,&room);
    if(room<=size) { fprintf(stderr,"[CAMPAIGN EXTRA ERROR] Save capacity\n");_Exit(4); }
    memcpy((void*)XBOX_PTR(cursor),"XML1DIF",8);
    MEM32(cursor+8)=version;
    MEM32(cursor+12)=(uint32_t)difficulty[0];MEM32(cursor+16)=(uint32_t)difficulty[2];
    if(version>=2){MEM8(cursor+20)=current_act[0];MEM8(cursor+21)=current_act[2];}
    if(version>=3)for(unsigned i=0;i<2;++i) {
        const xml1_recall_state *value=&recall[i?2:0];uint32_t dest=cursor+22+i*45;
        /* Explicit wire fields exclude compiler padding; always zero unused
         * name bytes so saves don't leak stale names after a shorter update. */
        memset((void*)XBOX_PTR(dest),0,32);
        memcpy((void*)XBOX_PTR(dest),value->zone,strlen(value->zone));
        memcpy((void*)XBOX_PTR(dest+32),value->position,12);MEM8(dest+44)=value->enabled;
    }
    /* Keep the v3 record prefix stable. Two explicit floats follow it only
     * when nondefault cooldown state needs persistence. Old readers are not
     * expected to accept a newer optional-section version. */
    if(version>=4){MEMF(cursor+112)=recall[0].cooldown;MEMF(cursor+116)=recall[2].cooldown;}
    if(version>=5) {
        memcpy((void*)XBOX_PTR(cursor+120),pickup_bonus[0],2);
        memcpy((void*)XBOX_PTR(cursor+122),pickup_bonus[2],2);
    }
    MEM32(stream+0x2fc00)=cursor+size;
}
void xml1_campaign_extra_load(uint32_t stream) {
    uint32_t room,cursor=cursor_and_room(stream,&room);
    int32_t live=1,retained=1;
    uint8_t live_act=1,retained_act=1;
    uint8_t next_bonus[2][2]={{0,0},{0,0}};
    xml1_recall_state next_recall[2]={recall_default,recall_default};
    if(room>=8 && !memcmp((const void*)XBOX_PTR(cursor),"XML1DIF",8)) {
        unsigned version=room>=12?MEM32(cursor+8):0;
        if(room<20 || version<1||version>5 ||
           (version==2&&room<22)||(version==3&&room<112)||(version==4&&room<120)||(version==5&&room<124)) {
            fprintf(stderr,"[CAMPAIGN EXTRA ERROR] Invalid difficulty section\n");_Exit(4);
        }
        live=(int32_t)MEM32(cursor+12);retained=(int32_t)MEM32(cursor+16);
        unsigned size=20;
        if(version>=2){live_act=MEM8(cursor+20);retained_act=MEM8(cursor+21);size=22;}
        if(version>=3) {
            size=112;
            for(unsigned i=0;i<2;++i) {
                uint32_t src=cursor+22+i*45;
                if(!memchr((const void*)XBOX_PTR(src),0,32)||MEM8(src+44)>1) {
                    fputs("[CAMPAIGN EXTRA ERROR] Invalid recall state\n",stderr);_Exit(4);
                }
                memcpy(next_recall[i].zone,(const void*)XBOX_PTR(src),32);
                memcpy(next_recall[i].position,(const void*)XBOX_PTR(src+32),12);
                next_recall[i].enabled=MEM8(src+44);
            }
        }
        if(version>=4) {
            next_recall[0].cooldown=MEMF(cursor+112);
            next_recall[1].cooldown=MEMF(cursor+116);size=120;
        }
        if(version>=5) {
            memcpy(next_bonus[0],(const void*)XBOX_PTR(cursor+120),2);
            memcpy(next_bonus[1],(const void*)XBOX_PTR(cursor+122),2);size=124;
        }
        MEM32(stream+0x2fc00)=cursor+size;
    }
    /* Native70350/70570 persist live+4F8 and retained+608, not baseline+580.
     * Leave the latter alone, exactly as the native record loader does. */
    difficulty[0]=live;difficulty[2]=retained;
    current_act[0]=live_act;current_act[2]=retained_act;
    recall[0]=next_recall[0];recall[2]=next_recall[1];
    memcpy(pickup_bonus[0],next_bonus[0],2);memcpy(pickup_bonus[2],next_bonus[1],2);
}
static uint32_t preparation_fixture_code,preparation_fixture_manager,preparation_fixture_rules;
static unsigned preparation_fixture_calls,preparation_fixture_failed,preparation_fixture_stuck;
static unsigned default_fixture_calls,default_fixture_reset,default_fixture_prepare;
static void default_fixture_command(void) {
    if(g_ecx!=0x5016f0 || MEM32(g_esp+4)!=0x3d2df8 ||
       !startup_active || default_startup_pending!=(int)default_fixture_prepare || default_fixture_calls++)
        preparation_fixture_failed=1;
    if(xml1_campaign_start_default())preparation_fixture_failed=1; /* no reentry */
    if(xml1_campaign_start_selected())preparation_fixture_failed=1;
    if(default_fixture_reset) {
        xml1_campaign_record_init(records[0]);
        xml1_campaign_startup_after_reset();
    }
    g_eax=0x123;g_ecx=0x456;g_edx=0x789;g_esp+=8;
}
static void preparation_fixture_advance(void) {
    uint32_t definition=MEM32(g_esp+8),delta=MEM32(g_esp+12);
    uint32_t first=preparation_fixture_manager+4+XML1_CHARACTER_BYTES;
    if(g_ecx!=preparation_fixture_manager || MEM32(g_esp+4)!=preparation_fixture_rules ||
       MEM32(g_esp+16)!=0 || MEM32(g_esp+20)!=0 ||
       definition<first || definition>first+3*XML1_CHARACTER_BYTES ||
       (definition-first)%XML1_CHARACTER_BYTES)preparation_fixture_failed=1;
    unsigned before=MEM8(definition+0x1c);
    if(delta!=45-before)preparation_fixture_failed=1;
    if(!(preparation_fixture_stuck && definition==first))
        MEM8(definition+0x1c)=(uint8_t)(before<35?35:45);
    ++preparation_fixture_calls;
    g_eax=0x123;g_ecx=0x456;g_edx=0x789;g_esp+=24;
}
void (*xml1_campaign_fixture_lookup(uint32_t address))(void) {
    if(preparation_fixture_code && address==preparation_fixture_code)return preparation_fixture_advance;
    if(preparation_fixture_code && address==preparation_fixture_code+4)return default_fixture_command;
    return NULL;
}
static int default_startup_fixture(uint32_t pool) {
    uint32_t original_table=MEM32(0x5016f0),initialized=MEM32(0x501d5c);
    uint32_t prior_owner=MEM32(0x48d59c),sp=g_esp;
    uint32_t manager=xbox_HeapAlloc(XML1_MANAGER_BYTES,16);
    if(!manager)_Exit(4);
    memset((void*)XBOX_PTR(manager),0,XML1_MANAGER_BYTES);
    preparation_fixture_code=pool+0x200;preparation_fixture_failed=0;
    MEM32(pool+0x14)=preparation_fixture_code+4;
    MEM32(0x5016f0)=pool;MEM32(0x501d5c)=initialized|1;MEM32(0x48d59c)=manager;
    int failed=0;
    for(unsigned prepare=0;prepare<2;++prepare)
    for(int mode=0;mode<=(prepare?1:2);++mode)for(unsigned reset=0;reset<2;++reset) {
        difficulty[0]=mode;startup_active=default_startup_pending=0;
        MEM8(manager+XML1_MANAGER_OFFSET(0xdac4))=1;
        default_fixture_calls=0;default_fixture_reset=reset;default_fixture_prepare=prepare;
        int result=prepare?xml1_campaign_start_default():xml1_campaign_start_selected();
        if(result!=(int)reset || default_fixture_calls!=1 ||
           preparation_fixture_failed || g_esp!=sp || difficulty[0]!=mode ||
           startup_active || default_startup_pending ||
           MEM8(manager+XML1_MANAGER_OFFSET(0xdac4))!=((reset&&prepare)?0:1))failed=1;
        /* A missed command must not leave a future stock reset armed. */
        MEM8(manager+XML1_MANAGER_OFFSET(0xdac4))=1;
        xml1_campaign_startup_after_reset();
        if(MEM8(manager+XML1_MANAGER_OFFSET(0xdac4))!=1)failed=1;
    }
    preparation_fixture_code=0;
    MEM32(0x5016f0)=original_table;MEM32(0x501d5c)=initialized;
    MEM32(0x48d59c)=prior_owner;xbox_HeapFree(manager);
    fprintf(stderr,"[DEFAULT STARTUP] %s native console owner, reset ownership, reentry rejection and baseline selection; command terminal substituted\n",failed?"FAIL":"PASS");
    return failed;
}
static int preparation_loop_fixture(uint32_t pool) {
    uint32_t manager=xbox_HeapAlloc(XML1_MANAGER_BYTES,16);
    if(!manager)_Exit(4);
    uint32_t table=pool,sp=g_esp;
    unsigned char demo=MEM8(0x4e7ab0);
    MEM8(0x4e7ab0)=0;
    memcpy((void*)XBOX_PTR(table),(const void*)XBOX_PTR(0x3cb824),0xd8);
    preparation_fixture_code=pool+0x200;
    preparation_fixture_manager=manager;preparation_fixture_rules=pool+0x300;
    MEM32(table+0xd0)=preparation_fixture_code;
    int failed=0;
    {
        uint32_t rules=pool+0x300,document=pool+0x400;
        memset((void*)XBOX_PTR(document),0,0x44);
        MEM32(rules+4)=0;
        if(rules_resource_ready(rules))failed=1;
        MEM32(rules+4)=document;
        if(rules_resource_ready(rules))failed=1;
        MEM32(document+0xc)=pool+0x500;
        if(!rules_resource_ready(rules))failed=1;
        MEM8(document+0x2c)=1;
        if(rules_resource_ready(rules) || g_esp!=sp)failed=1;
    }
    for(unsigned stuck=0;stuck<2;++stuck) {
        static const unsigned ids[]={1,2,35,37},levels[]={1,35,45,44};
        memset((void*)XBOX_PTR(manager),0,XML1_MANAGER_BYTES);
        MEM32(manager)=table;
        MEM32(manager+XML1_MANAGER_OFFSET(0x8534))=38;
        MEM32(manager+4+XML1_POOL_INDEX_MASK)=63;
        /* ID0 and unavailable definitions must not be advanced. Native
         * count/handle/definition getters exercise the expanded manager,
         * including IDs beyond the retail playable roster. Only the final
         * advancement operation is a contract terminal, not real stat math. */
        MEM32(manager+XML1_MANAGER_OFFSET(0x6d58))=64;
        MEM8(manager+4+0x1c)=9;
        for(unsigned i=0;i<4;++i) {
            MEM32(manager+XML1_MANAGER_OFFSET(0x6d58)+ids[i]*0x18)=65+i;
            MEM8(manager+4+(i+1)*XML1_CHARACTER_BYTES+0x1c)=(uint8_t)levels[i];
        }
        MEM8(manager+4+5*XML1_CHARACTER_BYTES+0x1c)=7;
        preparation_fixture_calls=preparation_fixture_failed=0;
        preparation_fixture_stuck=stuck;
        int ok=prepare_definition_levels(manager,preparation_fixture_rules);
        if(ok!=(stuck?0:1) || preparation_fixture_calls!=4 || preparation_fixture_failed ||
           g_esp!=sp || MEM8(manager+4+0x1c)!=9 ||
           MEM8(manager+4+5*XML1_CHARACTER_BYTES+0x1c)!=7)failed=1;
        for(unsigned i=0;i<4;++i)
            if(MEM8(manager+4+(i+1)*XML1_CHARACTER_BYTES+0x1c)!=(stuck&&i==0?1:45))failed=1;
    }
    preparation_fixture_code=0;
    {
        /* Separately execute the real level/XP operation and curve. Null
         * rules and auto=false deliberately isolate it from asset-backed
         * allocation; the loop test above checks the production arguments. */
        uint32_t prior_owner=MEM32(0x48d59c),definition=manager+4+XML1_CHARACTER_BYTES;
        unsigned char prior_curve[0xc0];
        memcpy(prior_curve,(const void*)XBOX_PTR(0x48d5b8),sizeof(prior_curve));
        MEM32(0x48d59c)=manager;MEM8(0x48d674)=0;
        memset((void*)XBOX_PTR(definition),0,XML1_CHARACTER_BYTES);
        MEM8(definition+0x1c)=1;
        for(unsigned step=0;step<2;++step) {
            g_ecx=manager;PUSH32(g_esp,0);PUSH32(g_esp,0);
            PUSH32(g_esp,45-MEM8(definition+0x1c));PUSH32(g_esp,definition);
            PUSH32(g_esp,0);PUSH32(g_esp,0);
            RECOMP_ABI_CALL(0x00057250u,sub_00057250);
            if(g_esp!=sp || MEM8(definition+0x1c)!=(step?45:35))failed=1;
        }
        g_ecx=manager;PUSH32(g_esp,45);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x000541E0u,sub_000541E0);
        if(g_esp!=sp || MEM32(definition+0x18)!=g_eax)failed=1;
        MEM32(0x48d59c)=prior_owner;
        memcpy((void*)XBOX_PTR(0x48d5b8),prior_curve,sizeof(prior_curve));
    }
    MEM8(0x4e7ab0)=demo;xbox_HeapFree(manager);
    fprintf(stderr,"[CAMPAIGN PREPARATION] %s native roster/level/XP curve, expanded IDs, advancement ABI and stalled-result detection; resource-backed allocation untested\n",failed?"FAIL":"PASS");
    return failed;
}
#include "engine/inventory/raven_stash_owner.h"
#include "engine/inventory/raven_stash_stream_guest.h"
#include "game/xml1/newgame_plus.h"
static int stash_fixture_set(uint32_t owner,unsigned quantity) {
    unsigned old;uint64_t revision;
    return raven_stash_read(owner,"mod_authored_equipment",&old,&revision)&&
           raven_stash_commit(owner,revision,"mod_authored_equipment",quantity);
}
static void stash_inventory_fixture_call(uint32_t owner,uint32_t code,uint32_t stream) {
    uint32_t sp=g_esp;
    if(stream)PUSH32(g_esp,stream);
    g_ecx=owner;PUSH32(g_esp,0);RECOMP_ICALL_SAFE(code,sp);
    campaign_abi(sp);
}
static int stash_inventory_lifecycle_fixture(void) {
    /* Trace-backed integration evidence for stash ownership. Execute the
     * native inventory snapshot/save/load routines, not copies of their
     * implementation. No real inventory, files or player saves are used. */
    uint32_t inventory=xbox_HeapAlloc(0x1a70,16),stream=xbox_HeapAlloc(0x2fc04,16);
    if(!inventory||!stream)_Exit(4);
    memset((void*)XBOX_PTR(inventory),0,0x1a70);
    memset((void*)XBOX_PTR(stream),0,0x2fc04);
    uint32_t sp=g_esp;int fp=g_fp_top,failed=0;
    raven_stash_reset(inventory);
    if(!stash_fixture_set(inventory,3))failed=7;
    MEM32(inventory)=0x3ce064;MEM8(inventory+0x1688)=160;
    MEM8(inventory+0x20)=3;MEM8(inventory+159*0x24+0x20)=7;
    MEM8(inventory+0x24)=0x90;MEM32(inventory+0x1690)=100;
    stash_inventory_fixture_call(inventory,0x7e7f0,0);
    if(!stash_fixture_set(inventory,4))failed=7;
    MEM8(inventory+0x20)=4;MEM32(inventory+0x1690)=200;
    stash_inventory_fixture_call(inventory,0x7e9b0,0);
    if(!stash_fixture_set(inventory,5))failed=7;
    MEM8(inventory+0x20)=5;MEM32(inventory+0x1690)=300;
    MEM32(stream+0x2fc00)=stream;
    stash_inventory_fixture_call(inventory,0x7e5a0,stream);
    if(MEM32(stream+0x2fc00)!=stream+0x289)failed=1;
    xml1_stash_stream_save(inventory,stream);
    uint32_t stash_end=MEM32(stream+0x2fc00);
    if(stash_end<=stream+0x289||!stash_fixture_set(inventory,9))failed=8;
    MEM8(inventory+0x20)=6;MEM8(inventory+159*0x24+0x20)=0;
    MEM8(inventory+0x24)=0x80;MEM32(inventory+0x1690)=400;
    MEM32(stream+0x2fc00)=stream;
    stash_inventory_fixture_call(inventory,0x7e6e0,stream);
    if(MEM32(stream+0x2fc00)!=stream+0x289||MEM8(inventory+0x20)!=5||
       MEM8(inventory+159*0x24+0x20)!=7||MEM8(inventory+0x24)!=0x90||
       MEM32(inventory+0x1690)!=300||!MEM8(inventory+0x1918))failed=2;
    xml1_stash_stream_load(inventory,stream);
    if(MEM32(stream+0x2fc00)!=stash_end||raven_stash_total(inventory)!=5)failed=8;
    stash_inventory_fixture_call(inventory,0x7e8e0,0);
    if(raven_stash_total(inventory)!=3||!stash_fixture_set(inventory,6))failed=7;
    if(MEM8(inventory+0x20)!=3||MEM32(inventory+0x1690)!=100||MEM8(inventory+0x1918))failed=3;
    MEM8(inventory+0x20)=6;stash_inventory_fixture_call(inventory,0x7e8e0,0);
    if(raven_stash_total(inventory)!=6)failed=7;
    if(MEM8(inventory+0x20)!=6)failed=4;
    stash_inventory_fixture_call(inventory,0x7eaa0,0);
    if(raven_stash_total(inventory)!=4||!stash_fixture_set(inventory,6))failed=7;
    if(MEM8(inventory+0x20)!=4||MEM32(inventory+0x1690)!=200||MEM8(inventory+0x1a64))failed=5;
    MEM8(inventory+0x20)=6;stash_inventory_fixture_call(inventory,0x7eaa0,0);
    if(raven_stash_total(inventory)!=6)failed=7;
    if(MEM8(inventory+0x20)!=6||g_esp!=sp||g_fp_top!=fp)failed=6;
    /* A false guest flag must leave the adjunct snapshot available until
     * the native operation is actually permitted to restore it. */
    stash_inventory_fixture_call(inventory,0x7e7f0,0);
    if(!stash_fixture_set(inventory,8))failed=7;
    MEM8(inventory+0x1918)=0;
    stash_inventory_fixture_call(inventory,0x7e8e0,0);
    if(raven_stash_total(inventory)!=8)failed=7;
    MEM8(inventory+0x1918)=1;
    stash_inventory_fixture_call(inventory,0x7e8e0,0);
    if(raven_stash_total(inventory)!=6)failed=7;
    /* Legacy saves have no marker here. Verify that loading one replaces
     * live/permanent ownership without consuming bytes or clearing temporary
     * rollback state, and that a valid empty snapshot restores empty once. */
    stash_inventory_fixture_call(inventory,0x7e9b0,0);
    if(!stash_fixture_set(inventory,9))failed=8;
    MEM32(stream+0x2fc00)=stream;MEM32(stream)=0xa5a5a5a5u;
    MEM8(inventory+0x1918)=1;
    xml1_stash_stream_load(inventory,stream);
    if(raven_stash_total(inventory)||MEM32(stream+0x2fc00)!=stream)failed=8;
    xml1_stash_stream_save(inventory,stream);
    if(MEM32(stream+0x2fc00)!=stream||MEM32(stream)!=0xa5a5a5a5u)failed=8;
    if(!stash_fixture_set(inventory,10))failed=8;
    stash_inventory_fixture_call(inventory,0x7e8e0,0);
    if(raven_stash_total(inventory))failed=8;
    stash_inventory_fixture_call(inventory,0x7eaa0,0);
    if(raven_stash_total(inventory)!=6)failed=8;
    /* Execute the native reset with no authored definitions (starter potion
     * lookup returns no item). Its quantity reset still traverses all160 slots.
     * The existing NG+ bypass must leave both native and stash items intact. */
    stash_inventory_fixture_call(inventory,0x7e7f0,0);
    stash_inventory_fixture_call(inventory,0x7e9b0,0);
    if(!stash_fixture_set(inventory,12))failed=9;
    MEM8(inventory+0x1688)=0;
    int prior_ng=xml1_newgame_plus_starting;
    xml1_newgame_plus_starting=1;
    g_ecx=inventory;PUSH32(g_esp,0x0018CFD8u);
    RECOMP_ABI_CALL(0x0007E2F0u,sub_0007E2F0);
    if(raven_stash_total(inventory)!=12||g_esp!=sp)failed=9;
    xml1_newgame_plus_starting=0;
    stash_inventory_fixture_call(inventory,0x7e2f0,0);
    xml1_newgame_plus_starting=prior_ng;
    if(raven_stash_total(inventory)||MEM32(inventory+0x1690)||
       !MEM8(inventory+0x1918)||!MEM8(inventory+0x1a64))failed=9;
    stash_inventory_fixture_call(inventory,0x7e8e0,0);
    if(raven_stash_total(inventory)!=6)failed=9;
    if(!stash_fixture_set(inventory,13))failed=9;
    stash_inventory_fixture_call(inventory,0x7eaa0,0);
    if(raven_stash_total(inventory)!=6)failed=9;
    /* Resource pointer and all string handles in this allocation are zero;
     * execute the actual destructor to check adjunct retirement and ABI. */
    stash_inventory_fixture_call(inventory,0x7df80,0);
    unsigned retired_quantity;uint64_t retired_revision;
    if(raven_stash_read(inventory,"mod_authored_equipment",&retired_quantity,&retired_revision)||
       g_esp!=sp||g_fp_top!=fp)failed=9;
    xbox_HeapFree(stream);xbox_HeapFree(inventory);
    fprintf(stderr,"[STASH INVENTORY LIFECYCLE] %s native snapshots/save/load with stash roundtrip, legacy load, reset with NG+ bypass, destructor retirement, snapshot preservation, guest-valid gating, one-shot restore, 160th item, independent flags and ABI; disk I/O untested\n",failed?"FAIL":"PASS");
    return failed;
}
static int pickup_capacity_fixture(void) {
    uint32_t inventory=xbox_HeapAlloc(0x1a70,16),manager=xbox_HeapAlloc(XML1_MANAGER_BYTES,16);
    if(!inventory||!manager)_Exit(4);
    uint32_t old_owner=MEM32(0x48d59c),old_slots[2]={MEM32(0x3ce098),MEM32(0x3ce09c)};
    uint8_t old_bonus[2];memcpy(old_bonus,pickup_bonus[0],2);
    uint32_t sp=g_esp;int fp=g_fp_top,failed=0;
    memset((void*)XBOX_PTR(inventory),0,0x1a70);
    memset((void*)XBOX_PTR(manager),0,XML1_MANAGER_BYTES);
    MEM32(inventory)=0x3ce064;MEM8(inventory+0x1688)=2;
    MEM8(inventory+0x1696)=0;MEM8(inventory+0x1697)=1;
    MEM32(manager)=0x3cb824;MEM32(0x48d59c)=manager;
    MEM32(manager+XML1_MANAGER_OFFSET(0xdccc))=1;
    MEM8(manager+XML1_MANAGER_OFFSET(0xdbcc))=1;
    MEM32(manager+4+XML1_POOL_INDEX_MASK)=63;
    MEM32(manager+XML1_MANAGER_OFFSET(0x6d58)+0x18)=1;
    MEM8(manager+4+XML1_CHARACTER_BYTES+0x1c)=35;
    xml1_campaign_install_capacity();xml1_campaign_install_capacity();
    static const int levels[]={0,9,10,35,45,-1};
    static const unsigned normal[]={10,10,15,25,30,25};
    for(unsigned bonus=0;bonus<3;++bonus)for(unsigned limit=0;limit<3;++limit)
    for(unsigned energy=0;energy<2;++energy)for(unsigned n=0;n<6;++n) {
        unsigned maximum=limit==0?99:limit==1?255:12;
        pickup_bonus[0][0]=(uint8_t)(bonus==0?0:bonus==1?2:255);
        pickup_bonus[0][1]=(uint8_t)(bonus==0?0:bonus==1?6:255);
        MEM8(inventory+4+energy*0x24+0x1d)=(uint8_t)maximum;
        uint32_t target=MEM32(0x3ce098+energy*4);
        if(!xml1_script_extension_is_code(target)||!xml1_script_extension_lookup(target))failed=1;
        g_ecx=inventory;PUSH32(g_esp,(uint32_t)levels[n]);PUSH32(g_esp,0);
        RECOMP_ICALL_SAFE(target,sp);
        unsigned expected=normal[n];
        if(bonus) {
            unsigned sum=expected+pickup_bonus[0][energy];
            if(sum>maximum)sum=maximum;
            if(sum>expected)expected=sum;
        }
        if((uint16_t)g_eax!=expected||g_esp!=sp||g_fp_top!=fp||
           MEM8(inventory+4+energy*0x24+0x1d)!=maximum)failed=1;
    }
    MEM32(0x3ce098)=old_slots[0];MEM32(0x3ce09c)=old_slots[1];
    MEM32(0x48d59c)=old_owner;memcpy(pickup_bonus[0],old_bonus,2);
    xbox_HeapFree(inventory);xbox_HeapFree(manager);
    fprintf(stderr,"[PICKUP CAPACITY] %s native level/party queries through both virtual interfaces, independent bonuses, authored ceilings, zero-bonus preservation and ABI\n",failed?"FAIL":"PASS");
    return failed;
}
int xml1_campaign_extra_fixture(uint32_t pool) {
    const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
    int32_t saved_difficulty[3];unsigned char saved_native[3*0x88];
    uint8_t saved_act[3];memcpy(saved_act,current_act,sizeof(current_act));
    uint8_t saved_bonus[3][2];memcpy(saved_bonus,pickup_bonus,sizeof(pickup_bonus));
    xml1_recall_state saved_recall[3];memcpy(saved_recall,recall,sizeof(recall));
    int saved_startup=startup_active,saved_default=default_startup_pending;int32_t saved_startup_difficulty=startup_difficulty;
    const uint32_t initialized=MEM32(0x49954C);
    memcpy(saved_difficulty,difficulty,sizeof(difficulty));
    memcpy(saved_native,(const void*)XBOX_PTR(records[0]),sizeof(saved_native));
    memset((void*)XBOX_PTR(records[0]),0,sizeof(saved_native));
    int failed=0;
    if(preparation_loop_fixture(pool))failed=1;
    MEM32(0x49954C)=initialized|1;
    if(default_startup_fixture(pool))failed=1;
    if(pickup_capacity_fixture())failed=1;
    if(stash_inventory_lifecycle_fixture())failed=1;
    for(int normal=0;normal<=1;++normal) {
        uint32_t character_owner=MEM32(0x48d59c);
        difficulty[0]=normal;
        if(!xml1_campaign_prepare_default_stats() || g_esp!=sp ||
           MEM32(0x48d59c)!=character_owner || difficulty[0]!=normal)failed=1;
    }
    xml1_campaign_set_difficulty(2);
    if(xml1_campaign_difficulty()!=2 || g_esp!=sp)failed=1;
    startup_active=0;
    if(!xml1_campaign_startup_begin() || xml1_campaign_startup_begin())failed=1;
    xml1_campaign_record_init(records[0]);
    xml1_campaign_startup_after_reset();
    if(difficulty[0]!=2)failed=1;
    xml1_campaign_record_init(records[0]);
    xml1_campaign_startup_after_reset();
    if(difficulty[0]!=1)failed=1;
    difficulty[0]=0;
    if(!xml1_campaign_startup_begin())failed=1;
    xml1_campaign_startup_end();
    xml1_campaign_record_init(records[0]);xml1_campaign_startup_after_reset();
    if(difficulty[0]!=1)failed=1;
    for(unsigned i=0;i<3;++i) {
        strcpy(recall[i].zone,"dirty");recall[i].enabled=0;recall[i].position[0]=99;recall[i].cooldown=300;
        pickup_bonus[i][0]=12;pickup_bonus[i][1]=8;
        difficulty[i]=2;current_act[i]=5;g_ecx=records[i];PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x0006EB00u,sub_0006EB00);
        if(g_esp!=sp || difficulty[i]!=1 || current_act[i]!=1||!recall_is_default(&recall[i])||
           pickup_bonus[i][0]||pickup_bonus[i][1])failed=1;
    }
    for(unsigned from=0;from<3;++from)for(unsigned to=0;to<3;++to) {
        difficulty[from]=(int32_t)(10+from);
        current_act[from]=(uint8_t)(3+from);
        pickup_bonus[from][0]=(uint8_t)(2+from);pickup_bonus[from][1]=(uint8_t)(8+from);
        snprintf(recall[from].zone,32,"act%u_field",from);
        recall[from].position[0]=(float)(10+from);recall[from].enabled=0;recall[from].cooldown=100.25f+from;
        g_ecx=records[to];PUSH32(g_esp,records[from]);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x0006F940u,sub_0006F940);
        if(g_esp!=sp || difficulty[to]!=(int32_t)(10+from)||current_act[to]!=3+from||
           pickup_bonus[to][0]!=2+from||pickup_bonus[to][1]!=8+from)failed=1;
        if(strcmp(recall[to].zone,recall[from].zone)||recall[to].position[0]!=10+from||recall[to].enabled||recall[to].cooldown!=100.25f+from)failed=1;
    }
    for(unsigned i=0;i<3;++i)recall[i]=recall_default;
    memset(pickup_bonus,0,sizeof(pickup_bonus));
    uint32_t stream=xbox_HeapAlloc(0x2fc80,16);
    if(!stream)_Exit(4);
    const struct {int32_t live,retained;uint8_t act,retained_act;unsigned bytes;} cases[]={
        {1,1,1,1,0},{0,2,1,1,20},{0,2,255,0,22},
        {1,1,3,1,22},{1,1,1,5,22}
    };
    for(unsigned test=0;test<sizeof(cases)/sizeof(cases[0]);++test) {
        memset((void*)XBOX_PTR(stream),0xa5,0x2fc80);MEM32(stream+0x2fc00)=stream;
        difficulty[0]=cases[test].live;difficulty[1]=7;difficulty[2]=cases[test].retained;
        current_act[0]=cases[test].act;current_act[1]=9;current_act[2]=cases[test].retained_act;
        xml1_campaign_extra_save(stream);
        uint32_t end=stream+cases[test].bytes;
        if(MEM32(stream+0x2fc00)!=end || MEM32(end)!=0xa5a5a5a5u)failed=1;
        difficulty[0]=difficulty[2]=-1;MEM32(stream+0x2fc00)=stream;
        current_act[0]=current_act[2]=77;
        strcpy(recall[0].zone,"stale");recall[2].enabled=0;
        pickup_bonus[0][0]=99;pickup_bonus[2][1]=88;pickup_bonus[1][0]=42;
        xml1_campaign_extra_load(stream);
        if(difficulty[0]!=cases[test].live || difficulty[2]!=cases[test].retained || difficulty[1]!=7 ||
           MEM32(stream+0x2fc00)!=end || MEM32(end)!=0xa5a5a5a5u ||
           current_act[0]!=cases[test].act||current_act[2]!=cases[test].retained_act||current_act[1]!=9)failed=1;
        if(!recall_is_default(&recall[0])||!recall_is_default(&recall[2])||
           pickup_bonus[0][0]||pickup_bonus[0][1]||pickup_bonus[2][0]||pickup_bonus[2][1]||
           pickup_bonus[1][0]!=42)failed=1;
    }
    for(unsigned timed=0;timed<3;++timed)for(unsigned slot=0;slot<2;++slot) {
        difficulty[0]=difficulty[2]=1;current_act[0]=current_act[2]=1;
        recall[0]=recall[2]=recall_default;
        xml1_recall_state expected={"act3_departure",{1.25f,-80.5f,93.0f},0};
        if(timed==2)expected=recall_default;
        expected.cooldown=timed?300.25f:0;
        unsigned bytes=timed?120:112;
        recall[slot?2:0]=expected;
        strcpy(recall[1].zone,"baseline");
        memset((void*)XBOX_PTR(stream),0xa5,0x2fc80);MEM32(stream+0x2fc00)=stream;
        xml1_campaign_extra_save(stream);
        if(MEM32(stream+8)!=(timed?4u:3u)||MEM32(stream+0x2fc00)!=stream+bytes||MEM32(stream+bytes)!=0xa5a5a5a5)failed=1;
        recall[0]=recall[2]=recall_default;MEM32(stream+0x2fc00)=stream;
        pickup_bonus[0][0]=99;pickup_bonus[2][1]=88;
        xml1_campaign_extra_load(stream);
        if(pickup_bonus[0][0]||pickup_bonus[0][1]||pickup_bonus[2][0]||pickup_bonus[2][1])failed=1;
        const xml1_recall_state *loaded=&recall[slot?2:0];
        if(strcmp(loaded->zone,expected.zone)||memcmp(loaded->position,expected.position,12)||loaded->enabled!=expected.enabled||loaded->cooldown!=expected.cooldown||
           !recall_is_default(&recall[slot?0:2])||strcmp(recall[1].zone,"baseline")||
           MEM32(stream+0x2fc00)!=stream+bytes||MEM32(stream+bytes)!=0xa5a5a5a5)failed=1;
    }
    {
        xml1_recall_state value=recall_default,readback;
        strcpy(value.zone,"act4_field");value.position[1]=42;value.enabled=0;
        if(!xml1_campaign_recall_set(&value))failed=1;
        xml1_campaign_recall_get(&readback);
        if(strcmp(readback.zone,value.zone)||readback.position[1]!=42||readback.enabled)failed=1;
        memset(value.zone,'x',32);
        if(xml1_campaign_recall_set(&value))failed=1;
        value=recall_default;value.enabled=2;
        if(xml1_campaign_recall_set(&value))failed=1;
        xml1_campaign_recall_get(&readback);
        if(strcmp(readback.zone,"act4_field"))failed=1;
        readback.cooldown=1.5f;xml1_campaign_recall_set(&readback);
        float baseline_cooldown=recall[1].cooldown,retained_cooldown=recall[2].cooldown;
        if(xml1_campaign_recall_step(0.5f))failed=1;
        xml1_campaign_recall_get(&readback);
        if(readback.cooldown!=1||strcmp(readback.zone,"act4_field")||readback.enabled||readback.position[1]!=42)
            failed=1;
        if(!xml1_campaign_recall_step(1)||xml1_campaign_recall_step(1)||recall[0].cooldown!=0||
           recall[1].cooldown!=baseline_cooldown||recall[2].cooldown!=retained_cooldown)failed=1;

    }
    /* v5 extends the unchanged v4 prefix. Exercise both persisted owners,
     * each independent allowance and byte maxima; baseline remains native
     * snapshot state rather than being silently replaced by a loaded save. */
    for(unsigned slot=0;slot<2;++slot)for(unsigned energy=0;energy<2;++energy) {
        memset(pickup_bonus,0,sizeof(pickup_bonus));
        pickup_bonus[slot?2:0][energy]=255;pickup_bonus[1][0]=37;
        recall[0].cooldown=17.25f;recall[2].cooldown=23.5f;
        memset((void*)XBOX_PTR(stream),0xa5,0x2fc80);MEM32(stream+0x2fc00)=stream;
        xml1_campaign_extra_save(stream);
        if(MEM32(stream+8)!=5||MEM32(stream+0x2fc00)!=stream+124||
           MEM32(stream+124)!=0xa5a5a5a5)failed=1;
        memset(pickup_bonus[0],0,2);memset(pickup_bonus[2],0,2);
        recall[0].cooldown=recall[2].cooldown=0;MEM32(stream+0x2fc00)=stream;
        xml1_campaign_extra_load(stream);
        if(pickup_bonus[slot?2:0][energy]!=255||pickup_bonus[slot?2:0][!energy]||
           pickup_bonus[slot?0:2][0]||pickup_bonus[slot?0:2][1]||pickup_bonus[1][0]!=37||
           recall[0].cooldown!=17.25f||recall[2].cooldown!=23.5f||
           MEM32(stream+0x2fc00)!=stream+124||MEM32(stream+124)!=0xa5a5a5a5)failed=1;
    }
    memset(pickup_bonus,0,sizeof(pickup_bonus));
    xml1_campaign_add_pickup_bonus(2,0);xml1_campaign_add_pickup_bonus(4,6);
    if(xml1_campaign_pickup_bonus(0)!=6||xml1_campaign_pickup_bonus(1)!=6)failed=1;
    xml1_campaign_add_pickup_bonus(0xffffffffu,250);
    if(xml1_campaign_pickup_bonus(0)!=255||xml1_campaign_pickup_bonus(1)!=255||
       pickup_bonus[1][0]||pickup_bonus[1][1]||pickup_bonus[2][0]||pickup_bonus[2][1]||g_esp!=sp)failed=1;
    xml1_campaign_record_copy(records[0],0);
    if(xml1_campaign_pickup_bonus(0)||xml1_campaign_pickup_bonus(1))failed=1;
    xml1_campaign_store_act(0x103);
    if(xml1_campaign_current_act()!=3||g_esp!=sp)failed=1;
    xbox_HeapFree(stream);
    memcpy(difficulty,saved_difficulty,sizeof(difficulty));
    memcpy(current_act,saved_act,sizeof(current_act));
    memcpy(pickup_bonus,saved_bonus,sizeof(pickup_bonus));
    memcpy(recall,saved_recall,sizeof(recall));
    startup_active=saved_startup;startup_difficulty=saved_startup_difficulty;
    default_startup_pending=saved_default;
    MEM32(0x49954C)=initialized;
    memcpy((void*)XBOX_PTR(records[0]),saved_native,sizeof(saved_native));
    g_esp=sp;g_eax=ax;g_ecx=cx;g_edx=dx;
    (void)pool;
    fprintf(stderr,"[CAMPAIGN EXTRA] %s native difficulty/act/recall record init/copy, legacy/v1/v2/v3/v4/v5 stream, collectible bonus ownership/saturation, owned cooldown step and ABI; recall travel and gameplay/disk I/O untested\n",failed?"FAIL":"PASS");
    return failed;
}
