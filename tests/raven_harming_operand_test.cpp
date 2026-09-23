#include "raven_harming_operand.h"
#include "raven_add_attack.h"
#include "raven_powerup_metadata.h"
#include "raven_harming_runtime.h"
#include "raven_imported_talents.h"
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
static int valid(void*,uint32_t h){return h>=10&&h<=12;}
static raven_lookup resolve(void*,uint32_t h,uint32_t *out){
    if(h==12)return RAVEN_MISSING;
    if(h!=10&&h!=11)return RAVEN_INVALID;
    *out=h==10?0x2000:0x4000;return RAVEN_FOUND;
}
static void actor(unsigned at,unsigned stats,unsigned rank){
    word(at+0x2d8,stats-4);word(stats+0x40,0x3fffffff);word(stats+0x44,0x3fffffff);
    memory[stats+0x48]=107;memory[stats+0x198]=(unsigned char)(0xa0|rank);
}
int main(){try {
    auto bytes=xml1::compile_xmlb("<talents><talent name='sun_flmthrow'><talentvalues>"
        "<talentvalue name='sun_flmthrow_sdmg' level='1' value='6.25 9.75'/>"
        "<talentvalue name='sun_flmthrow_sdmg' level='15' value='117.25 132.75'/>"
        "</talentvalues></talent></talents>");
    raven::TalentBindings bindings(raven::load_talents(bytes.data(),(unsigned)bytes.size()));
    word(0x108,0);word(0x114,0x3fffffff);word(0x118,0x3fffffff);
    strcpy((char*)memory+0x11c,"sun_flmthrow");memory[0x1d5c]=107;
    actor(0x2000,0x3000,1);actor(0x4000,0x5000,15);
    raven::HarmingOperand damage("%sun_flmthrow_sdmg",bindings);
    float result=-123;
    using R=raven::TalentResult;
    auto evaluate=[&](uint32_t who,double rng){return damage.evaluate(read_guest,nullptr,0x100,who,rng,&result);};
    check(evaluate(0x2000,0.25)==R::evaluated&&result==7.125f,"Fractional low-rank range lost");
    check(evaluate(0x4000,0.25)==R::evaluated&&result==121.125f,"Second actor used wrong rank");
    memory[0x3198]=0xaf;
    check(evaluate(0x2000,0.25)==R::evaluated&&result==121.125f,"Rank change was cached");
    memory[0x3198]=0xa0;result=-123;
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
    memory[0x3198]=0xaf;
    check(sample()==R::evaluated&&values.percentage==121.125f,"Add-attack cached source rank");
    word(pool+0x2238,256);values.percentage=-123;
    check(sample()==R::invalid_state&&values.percentage==-123,"Stale add-attack owner mutated output");
    raven_xml1_powerup_metadata_reset(0x10200);
    check(!raven::bind_xml1_add_attack(0x10200,bindings),"Reset retained add-attack binding");
    std::cout<<"PASS add-attack live source rank, flat range, settings and stale-owner rejection\n";
    const auto fixture=std::filesystem::temp_directory_path()/"xml1-imported-duration-test";
    std::filesystem::create_directories(fixture/"data/talents");
    {std::ofstream f(fixture/"data/talents/duration.engb",std::ios::binary);
     f.write(reinterpret_cast<const char*>(bytes.data()),bytes.size());}
    char error[512]={0};
    check(raven_imported_talents_init(fixture.string().c_str(),"eng",error,sizeof(error)),error);
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
