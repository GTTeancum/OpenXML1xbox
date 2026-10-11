#include "engine/progression/talent_registry_layout.h"
#include "engine/progression/character_talent_record.h"
#include "engine/combat/raven_harming_operand.h"
#include "engine/combat/raven_add_attack.h"
#include "engine/combat/raven_percent_attack.h"
#include "engine/combat/raven_absorb.h"
#include "engine/combat/raven_absorb_runtime.h"
#include "engine/combat/raven_vacuum.h"
#include "engine/scripting/raven_remove_events.h"
#include <limits>
#include <cmath>
#include "engine/powers/raven_powerup_metadata.h"
#include "engine/combat/raven_harming_runtime.h"
#include "engine/progression/raven_imported_talents.h"
#include <filesystem>
#include <fstream>
#include <cstring>
#include <iostream>
#include <stdexcept>

static unsigned char memory[0xb000];
static void check(bool b,const char *why){if(!b)throw std::runtime_error(why);}
static int read_guest(void*,uint32_t at,void *out,size_t n){
    if(at>sizeof(memory)||n>sizeof(memory)-at)return 0;
    memcpy(out,memory+at,n);return 1;
}
static void word(unsigned at,uint32_t v){memcpy(memory+at,&v,4);}
static void legacy_rank(unsigned at,unsigned packed){
    uint8_t b[3]={(uint8_t)packed,0,0};
    word(at,xml1_talent_record_from_legacy(b));
}
static int valid(void*,uint32_t h){return h>=10&&h<=12;}
static raven_lookup resolve(void*,uint32_t h,uint32_t *out){
    if(h==12)return RAVEN_MISSING;
    if(h!=10&&h!=11)return RAVEN_INVALID;
    *out=h==10?0x2000:0x4000;return RAVEN_FOUND;
}
static void actor(unsigned at,unsigned stats,unsigned rank){
    word(at+0x2d8,stats-4);word(stats+0x40,0x3fffffff);word(stats+0x44,0x3fffffff);
    memory[stats+0x48]=107;legacy_rank(stats+0x198,0xa0|rank);
}
int main(){try {
    {
        raven_remove_events_rules rules={8,0x40,4,0};
        check(raven_remove_events_decide(&rules,8,0,0,0,0,0)==3,
            "Removal damage-type condition did not produce removal and reaction");
        check(raven_remove_events_decide(&rules,0,0x40,0,0,0,0)==3&&
              raven_remove_events_decide(&rules,0,0,4,0,0,0)==3&&
              raven_remove_events_decide(&rules,0,0,0,1,0,0)==3,
            "Independent removal conditions were incorrectly ANDed");
        check(!raven_remove_events_decide(&rules,2,1,8,0,0,0),
            "Nonmatching hit triggered removal");
        rules.no_remove=1;
        check(raven_remove_events_decide(&rules,8,0,0,0,0,0)==2,
            "no_remove incorrectly suppressed follow-up reaction");
        rules.no_remove=0;
        check(raven_remove_events_decide(&rules,8,0,0,0,1,0)==1,
            "Marked ordinary hit lost removal or recursively reacted");
        check(!raven_remove_events_decide(&rules,8,0,0,1,1,1),
            "Synthetic recursive reaction retriggered removal");
        check(raven_remove_events_decide(&rules,8,0,0,0,0,1)==3,
            "Unmarked synthetic hit was incorrectly excluded");
        check(!raven_remove_events_decide(nullptr,8,0,0,1,0,0),
            "Missing removal rules produced an action");
    }
    {
        const float centre[3]={0,0,0},target[3]={30,40,120},moving[3]={10,20,30},zero[3]={0,0,0};
        float distance=-1,velocity[3]={-1,-1,-1};
        check(raven_vacuum_motion(centre,target,moving,36,&distance,velocity)&&distance==130&&
            std::fabs(velocity[0]-(-300.f*30/130+10)*.5f)<.0001f&&
            std::fabs(velocity[2]-(-300.f*120/130+30)*.5f)<.0001f,
            "Vacuum lost three-dimensional normalization or current velocity");
        check(raven_vacuum_motion(centre,target,zero,35,&distance,velocity)&&velocity[2]==150,
            "Vacuum grounded lift missing");
        check(raven_vacuum_motion(centre,centre,zero,36,&distance,velocity)&&distance==0&&
            velocity[0]==0&&velocity[1]==0&&velocity[2]==0,"Vacuum coincident centres produced invalid motion");
        const float bad[3]={std::numeric_limits<float>::infinity(),0,0};
        distance=-123;velocity[0]=-123;
        check(!raven_vacuum_motion(centre,bad,zero,0,&distance,velocity)&&distance==-123&&velocity[0]==-123,
            "Invalid Vacuum geometry partially published output");
        std::cout<<"PASS Vacuum motion: 3D pull, current velocity, ground threshold, coincident centres and invalid-input rejection\n";
    }
    auto bytes=xml1::compile_xmlb("<talents><talent name='sun_flmthrow'><talentvalues>"
        "<talentvalue name='sun_flmthrow_sdmg' level='1' value='6.25 9.75'/>"
        "<talentvalue name='sun_flmthrow_sdmg' level='15' value='117.25 132.75'/>"
        "</talentvalues></talent></talents>");
    raven::TalentBindings bindings(raven::load_talents(bytes.data(),(unsigned)bytes.size()));
    word(0x108,0);word(0x114,0x3fffffff);word(0x118,0x3fffffff);
    strcpy((char*)memory+0x11c,"sun_flmthrow");memory[0x100+4+XML1_TALENT_NAME_VALUES]=107;
    actor(0x2000,0x3000,1);actor(0x4000,0x5000,15);
    raven::HarmingOperand damage("%sun_flmthrow_sdmg",bindings);
    float result=-123;
    using R=raven::TalentResult;
    auto evaluate=[&](uint32_t who,double rng){return damage.evaluate(read_guest,nullptr,0x100,who,rng,&result);};
    check(evaluate(0x2000,0.25)==R::evaluated&&result==7.125f,"Fractional low-rank range lost");
    check(evaluate(0x4000,0.25)==R::evaluated&&result==121.125f,"Second actor used wrong rank");
    legacy_rank(0x3198,0xaf);
    check(evaluate(0x2000,0.25)==R::evaluated&&result==121.125f,"Rank change was cached");
    legacy_rank(0x3198,0xa0);result=-123;
    check(evaluate(0x2000,0.25)==R::unlearned&&result==-123,"Unlearned reference silently produced damage");
    word(0x22d8,0);check(evaluate(0x2000,0.25)==R::invalid_state&&result==-123,"Destroyed actor produced damage");
    raven::HarmingOperand literal("9.75 6.25",bindings);
    check(literal.evaluate(nullptr,nullptr,0,0,0.25,&result)==R::evaluated&&result==8.875f,"Reversed literal range sorted or narrowed");
    raven::HarmingOperand large("40000.25 40000.75",bindings);
    check(large.evaluate(nullptr,nullptr,0,0,0.5,&result)==R::evaluated&&result==40000.5f,"Harming range wrapped to signed short");
    bool rejected=false;
    try{raven::HarmingOperand unknown("%missing",bindings);}catch(const std::runtime_error&){rejected=true;}
    check(rejected,"Unknown damage reference accepted");
    check(!raven::bind_xml1_harming_damage(0x10000,bindings),"Unbound native definition acquired handler");
    raven_xml1_powerup_metadata_attribute(0x10000,"class","harming");
    raven_xml1_powerup_metadata_attribute(0x10000,"damage","%sun_flmthrow_sdmg");
    raven_xml1_powerup_metadata_clone(0x10100,0x10000);
    auto imported=raven::bind_xml1_harming_damage(0x10100,bindings);
    check(imported.has_value(),"Captured cloned definition lost operand");
    raven_xml1_powerup_metadata_retire(0x10000);
    check(imported->evaluate(read_guest,nullptr,0x100,0x4000,0.25,&result)==R::evaluated&&result==121.125f,
          "Source retirement invalidated cloned damage binding");
    raven_xml1_powerup_metadata_reset(0x10100);
    check(!raven::bind_xml1_harming_damage(0x10100,bindings),"Reused definition retained binding");
    actor(0x2000,0x3000,1);
    const uint32_t pool=0x6000,active=pool+4;
    word(pool+0x2438,127);word(pool+0x2238,128);word(pool+0x2224,1);
    word(active+0x18,10);word(active+0x1c,11);
    auto active_damage=[&](){return damage.evaluate_active(read_guest,valid,resolve,nullptr,
        pool,128,0x100,0x4000,0,0.25,&result);};
    check(active_damage()==R::evaluated&&result==7.125f,"Victim rank replaced the live source rank");
    word(active+0x18,0);
    check(active_damage()==R::evaluated&&result==121.125f,"Sentinel source failed target fallback");
    word(active+0x18,12);
    check(active_damage()==R::evaluated&&result==0,"Valid non-actor source fell back to victim rank");
    check(literal.evaluate_active(read_guest,valid,resolve,nullptr,pool,128,0x100,
        0x4000,0,0.25,&result)==R::evaluated&&result==8.875f,"Non-actor source suppressed literal damage");
    word(active+0x18,13);result=-123;
    check(active_damage()==R::invalid_state&&result==-123,"Stale non-sentinel source silently used victim");
    word(active+0x18,10);word(pool+0x2238,256);
    check(active_damage()==R::invalid_state&&result==-123,"Recycled active instance produced damage");
    std::cout<<"PASS harming operands: XMLB/current XML1 actor rank, fractional and reversed ranges, no signed-short narrowing, changed/unlearned/destroyed actors; active source/target precedence, non-actor reference/literal distinction and stale-instance rejection\n";
    word(pool+0x2238,128);
    raven::xml1_powerup_metadata_bind(0x10200,{{"class","add_attack"},
        {"damagepercent","%sun_flmthrow_sdmg"},{"damagesum","2 4"},
        {"mirror","TRUE"},{"damagetype","dmg_energy"}});
    auto attack=raven::bind_xml1_add_attack(0x10200,bindings);
    check(attack.has_value(),"Add-attack binding missing");
    raven::AddAttackValues values{};
    auto sample=[&](){return attack->evaluate_active(read_guest,valid,resolve,nullptr,
        pool,128,0x100,0,.25,.75,&values);};
    check(sample()==R::evaluated&&values.percentage==7.125f&&values.flat==4&&
        values.mirror&&values.damage_type=="dmg_energy","Add-attack operands lost source rank or settings");
    legacy_rank(0x3198,0xaf);
    check(sample()==R::evaluated&&values.percentage==121.125f,"Add-attack cached source rank");
    word(pool+0x2238,256);values.percentage=-123;
    check(sample()==R::invalid_state&&values.percentage==-123,"Stale add-attack owner mutated output");
    raven_xml1_powerup_metadata_reset(0x10200);
    check(!raven::bind_xml1_add_attack(0x10200,bindings),"Reset retained add-attack binding");
    std::cout<<"PASS add-attack live source rank, flat range, settings and stale-owner rejection\n";
    word(pool+0x2238,128);
    raven_xml1_powerup_metadata_attribute(0x10400,"class","ATK_INSTANT_PCT");
    auto percentage=raven::bind_xml1_percent_attack(0x10400,bindings);
    raven::PercentAttackValues percent_values{};
    auto percent_sample=[&](){return percentage->evaluate_active(read_guest,valid,resolve,
        nullptr,pool,128,0x100,0,&percent_values);};
    check(percentage&&percent_sample()==R::evaluated&&percent_values.chance==1&&
        percent_values.percent==1&&!percent_values.self_only,"Percentage native defaults lost");
    raven_xml1_powerup_metadata_attribute(0x10400,"CHANCE","0.25 0.75");
    raven_xml1_powerup_metadata_attribute(0x10400,"PERCENT","%sun_flmthrow_sdmg");
    raven_xml1_powerup_metadata_attribute(0x10400,"SELFONLY","TrUe");
    raven_xml1_powerup_metadata_clone(0x10500,0x10400);
    percentage=raven::bind_xml1_percent_attack(0x10500,bindings);
    raven_xml1_powerup_metadata_retire(0x10400);
    raven_xml1_powerup_metadata_reset(0x10500);
    legacy_rank(0x3198,0xa1);
    check(percent_sample()==R::evaluated&&percent_values.chance==.25f&&
        percent_values.percent==6.25f&&percent_values.self_only,
        "Owned percentage operands lost parser fields, first endpoint or live source rank");
    legacy_rank(0x3198,0xaf);
    check(percent_sample()==R::evaluated&&percent_values.percent==117.25f,
        "Percentage operand cached actor rank");
    word(pool+0x2238,256);percent_values={-123,-123,false};
    check(percent_sample()==R::invalid_state&&percent_values.chance==-123&&
        percent_values.percent==-123,"Stale percentage owner mutated output");
    check(!raven::bind_xml1_percent_attack(0x10500,bindings),"Reset retained percentage binding");
    raven_xml1_powerup_metadata_attribute(0x10400,"class","harming");
    check(!raven::bind_xml1_percent_attack(0x10400,bindings),"Existing class acquired percentage behavior");
    raven_xml1_powerup_metadata_reset(0x10400);
    word(pool+0x2238,128);
    std::cout<<"PASS percentage operands: native defaults, parser/clone ownership, live rank, first endpoint, stale owner and unrelated class exclusion\n";
    raven_xml1_powerup_metadata_attribute(0x10600,"class","ABSORB");
    auto absorb=raven::bind_xml1_absorb(0x10600,bindings);
    raven::AbsorbValues absorbed{};
    auto absorb_sample=[&](){return absorb->evaluate(read_guest,nullptr,0x100,
        0x4000,0x2000,&absorbed);};
    check(absorb&&absorb_sample()==R::evaluated&&absorbed.chance==1&&
        absorbed.damage_percent==0&&!absorbed.sponsor&&!absorbed.energy&&
        !absorbed.inflicted&&absorbed.beam_effect.empty(),"Absorb native defaults lost");
    raven_xml1_powerup_metadata_attribute(0x10600,"CHANCE","%sun_flmthrow_sdmg");
    raven_xml1_powerup_metadata_attribute(0x10600,"DAMAGEPERCENT","%sun_flmthrow_sdmg");
    raven_xml1_powerup_metadata_attribute(0x10600,"SPONSOR","TrUe");
    raven_xml1_powerup_metadata_attribute(0x10600,"ENERGY","TRUE");
    raven_xml1_powerup_metadata_attribute(0x10600,"INFLICTED","true");
    raven_xml1_powerup_metadata_attribute(0x10600,"BEAMEFFECT","effects/OriginalBeam");
    raven_xml1_powerup_metadata_clone(0x10700,0x10600);
    absorb=raven::bind_xml1_absorb(0x10700,bindings);
    raven_xml1_powerup_metadata_retire(0x10600);
    raven_xml1_powerup_metadata_reset(0x10700);
    actor(0x2000,0x3000,1);actor(0x4000,0x5000,15);
    check(absorb_sample()==R::evaluated&&absorbed.chance==117.25f&&
        absorbed.damage_percent==6.25f&&absorbed.sponsor&&absorbed.energy&&
        absorbed.inflicted&&absorbed.beam_effect=="effects/OriginalBeam",
        "Absorb lost separate recipient/source rank, ownership or original beam path");
    actor(0x2000,0x3000,15);actor(0x4000,0x5000,1);
    check(absorb_sample()==R::evaluated&&absorbed.chance==6.25f&&
        absorbed.damage_percent==117.25f,"Absorb cached actor ranks");
    absorbed.chance=-123;absorbed.damage_percent=-123;
    check(absorb->evaluate(read_guest,nullptr,0x100,0x4000,0xffffffff,&absorbed)!=R::evaluated&&
        absorbed.chance==-123&&absorbed.damage_percent==-123,
        "Absorb partially published values after unreadable source");
    check(!raven::bind_xml1_absorb(0x10700,bindings),"Reset retained Absorb binding");
    raven_xml1_powerup_metadata_attribute(0x10600,"class","harming");
    check(!raven::bind_xml1_absorb(0x10600,bindings),"Existing class acquired Absorb behavior");
    raven_xml1_powerup_metadata_reset(0x10600);
    std::cout<<"PASS Absorb owned operands: defaults, distinct live contexts, first endpoint, clone/retirement, original beam path and failure atomicity\n";
    const auto fixture=std::filesystem::temp_directory_path()/"xml1-imported-duration-test";
    std::filesystem::create_directories(fixture/"data/talents");
    {std::ofstream f(fixture/"data/talents/duration.engb",std::ios::binary);
     f.write(reinterpret_cast<const char*>(bytes.data()),bytes.size());}
    char error[512]={0};
    check(raven_imported_talents_init(fixture.string().c_str(),"eng",error,sizeof(error)),error);
    raven_xml1_powerup_metadata_attribute(0x10600,"class","absorb");
    raven_xml1_powerup_metadata_attribute(0x10600,"chance","%sun_flmthrow_sdmg");
    raven_xml1_powerup_metadata_attribute(0x10600,"damagePercent","%sun_flmthrow_sdmg");
    actor(0x2000,0x3000,1);actor(0x4000,0x5000,15);
    raven_absorb_values bridge{};
    auto bridge_sample=[&](){return raven_absorb_sample(read_guest,nullptr,0x10600,
        0x100,0x4000,0x2000,&bridge);};
    check(bridge_sample()==RAVEN_FOUND&&bridge.chance==117.25f&&bridge.percentage==6.25f,
        "Absorb C interface lost holder/source context");
    raven_xml1_powerup_metadata_attribute(0x10600,"sponsor","true");
    check(bridge_sample()==RAVEN_FOUND&&bridge.sponsor&&bridge.chance==6.25f&&bridge.percentage==6.25f,
        "Absorb sponsor did not select the source for recipient chance");
    const std::string long_beam(256,'x');
    raven_xml1_powerup_metadata_attribute(0x10600,"beameffect",long_beam.c_str());
    bridge.chance=-123;
    check(bridge_sample()==RAVEN_INVALID&&bridge.chance==-123,
        "Absorb silently truncated a resource path or partially published its result");
    raven_xml1_powerup_metadata_attribute(0x10600,"beameffect","effects/OriginalBeam");
    check(bridge_sample()==RAVEN_FOUND&&!strcmp(bridge.beam,"effects/OriginalBeam"),
        "Absorb C interface changed the resource path");
    raven_xml1_powerup_metadata_retire(0x10600);
    bridge.chance=-123;
    check(bridge_sample()==RAVEN_MISSING&&bridge.chance==-123,
        "Absorb C interface retained a retired definition");
    std::cout<<"PASS Absorb C interface: sponsor recipient selection, current ranks, exact resource path, oversized path rejection and retirement\n";
    raven_xml1_powerup_metadata_attribute(0x10300,"life","%sun_flmthrow_sdmg");
    check(raven_imported_powerup_life_definition(0x10300),"Ordinary imported buff duration omitted");
    word(pool+0x2238,128);
    word(active+0x18,10);actor(0x2000,0x3000,1);
    check(raven_harming_runtime_life(read_guest,valid,resolve,nullptr,0x10300,pool,
        128,0x100,0,&result)==RAVEN_FOUND&&result==6.25f,"Buff duration lost source rank/lower endpoint");
    raven_xml1_powerup_metadata_clone(0x10400,0x10300);
    raven_xml1_powerup_metadata_retire(0x10300);
    actor(0x2000,0x3000,15);
    check(raven_harming_runtime_life(read_guest,valid,resolve,nullptr,0x10400,pool,
        128,0x100,0,&result)==RAVEN_FOUND&&result==117.25f,"Cloned buff duration cached rank");
    raven_xml1_powerup_metadata_attribute(0x10400,"life","%xml1_native_only");
    check(!raven_imported_powerup_life_definition(0x10400),"Native duration intercepted");
    raven_xml1_powerup_metadata_attribute(0x10400,"life","-1");
    check(!raven_imported_powerup_life_definition(0x10400),"Native indefinite duration intercepted");
    std::filesystem::remove(fixture/"data/talents/duration.engb");
    std::cout<<"PASS ordinary imported buff durations, live rank, clone lifetime and native exclusions\n";
    return 0;
}catch(const std::exception& e){std::cerr<<e.what()<<'\n';return 1;}}
