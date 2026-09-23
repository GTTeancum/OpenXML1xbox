#include "raven_talent_context.h"
#include "raven_talent_binding.h"
#include "raven_event_operands.h"
#include <iostream>
#include <limits>
#include <stdexcept>
#include <fstream>
#include <iterator>
static void check(bool ok,const char *why){if(!ok)throw std::runtime_error(why);}
int main(int argc,char **argv){try {
    if(argc>1) {
        std::vector<raven::TalentDefinition> definitions;
        for(int i=1;i<argc;++i) {
            std::ifstream file(argv[i],std::ios::binary);
            if(!file)throw std::runtime_error("Cannot open talent resource");
            std::string data((std::istreambuf_iterator<char>(file)),{});
            auto loaded=raven::load_talents(data.data(),(unsigned)data.size());
            definitions.insert(definitions.end(),loaded.begin(),loaded.end());
        }
        raven::TalentBindings registry(definitions);raven::TalentContextValues values;
        unsigned count=0;
        for(const auto& definition:definitions) {
            registry.populate(values,1,definition.name,1);
            registry.populate(values,2,definition.name,20);
            for(const auto& value:definition.values) {
                auto binding=registry.bind("%"+value.first);
                check(binding.definition->name==definition.name,"Registered value has the wrong talent owner");
                check(values.contains(1,binding.value_id)&&values.contains(2,binding.value_id),"Publication missing");
                ++count;
            }
        }
        std::cout<<"PASS original resources: "<<definitions.size()<<" talents, "<<count
                 <<" registered values in two rank contexts; not gameplay validation\n";
        return 0;
    }
    raven::TalentContextValues game,other;
    game.set(1,7,11,15);game.set(2,7,21,25);
    check(game.get(1,7)->at(1)==15&&game.get(2,7)->at(0)==21,"Character contexts mixed");
    game.set(1,7,0,0);
    check(game.contains(1,7)&&game.get_with_owner(1,2,7)->at(1)==0,"Present zero fell back or retained old range");
    check(game.get_with_owner(3,2,7)->at(0)==21,"Missing context did not use owner");
    check(!game.get_with_owner(3,std::nullopt,7),"Missing context invented a value");
    game.set(-1,32767,5,9);game.set(32767,1,8,8);
    check(game.get(-1,32767)->at(0)==5&&game.get(32767,1)->at(0)==8,"Signed context boundary collision");
    other.set(1,7,100,200);
    check(game.get(1,7)->at(0)==0&&other.get(1,7)->at(0)==100,"Title profiles mixed");
    game.set(1,8,1,2);game.erase_context(1);
    check(!game.contains(1,7)&&!game.contains(1,8)&&game.contains(2,7),"Context retirement was incomplete or erased another owner");
    game.set(1,8,3,3);check(!game.contains(1,7),"Reused context retained old values");
    for(unsigned bad:{0u,32768u,65535u}){
        bool rejected=false;try{game.set(1,(uint16_t)bad,1,1);}catch(const std::runtime_error&){rejected=true;}
        check(rejected,"Invalid tagged value ID accepted");
    }
    bool rejected=false;try{game.set(2,7,std::numeric_limits<float>::infinity(),1);}catch(const std::runtime_error&){rejected=true;}
    check(rejected&&game.get(2,7)->at(0)==21,"Invalid update changed existing value");
    auto bytes=xml1::compile_xmlb("<talents><talent name='bishop_beam'><talentvalues>"
        "<talentvalue name='bish_beam_dmg' level='1' value='11 15'/>"
        "<talentvalue name='bish_beam_dmg' level='20' value='217 242'/>"
        "<talentvalue name='bish_beam_pwr' level='1' value='14'/>"
        "<talentvalue name='bish_beam_pwr' level='20' value='140'/>"
        "</talentvalues></talent></talents>");
    auto defs=raven::load_talents(bytes.data(),(unsigned)bytes.size());
    std::map<std::string,uint16_t> ids={{"bish_beam_dmg",10},{"bish_beam_pwr",11}};
    game.populate(4,defs[0],ids,1);
    check(game.get(4,10)->at(1)==15&&game.get(4,11)->at(0)==14,"Initial talent publication failed");
    game.populate(5,defs[0],ids,20);
    check(game.get(5,10)->at(1)==242&&game.get(5,11)->at(0)==140&&game.get(4,11)->at(0)==14,
          "Different character rank changed another context");
    auto incomplete=ids;incomplete.erase("bish_beam_pwr");rejected=false;
    try{game.populate(4,defs[0],incomplete,20);}catch(const std::runtime_error&){rejected=true;}
    check(rejected&&game.get(4,10)->at(1)==15,"Failed population partially replaced old values");
    game.populate(4,defs[0],ids,std::nullopt);
    check(game.contains(4,10)&&game.get_with_owner(4,5,10)->at(0)==0,"Explicit reset erased presence or fell back to owner");
    game.clear();check(!game.contains(5,10)&&other.contains(1,7),"Full reset changed another profile");
    raven::TalentBindings registry(defs);
    auto beam=registry.bind("%bish_beam_dmg"),energy=registry.bind("%BISH_BEAM_PWR");
    check(beam.value_id&&energy.value_id&&beam.value_id!=energy.value_id,"Registry assigned invalid or colliding IDs");
    registry.populate(game,9,"bishop_beam",20);
    raven::AffecterDeclaration declaration;
    declaration.level="%bish_beam_dmg";
    check(registry.resolve_affecter_level(game,declaration,9,0)->at(1)==242,
          "Declaration reference did not reach live context");
    declaration.level="2.5 6";
    auto literal=registry.resolve_affecter_level(other,declaration,std::nullopt,0);
    check(literal->at(0)==2.5f&&literal->at(1)==6,
          "Literal affecter incorrectly required actor/profile cache");
    declaration.level="DMG2";
    raven::TalentConstants constants{{"DMG2",{4,8}}};
    check(registry.resolve_affecter_level(other,declaration,std::nullopt,0,&constants)->at(1)==8,
          "Affecter did not resolve selected title's named constant");
    check(registry.resolve_affecter_level(other,declaration,std::nullopt,3)->at(0)==3,
          "Inherited affecter accessed absent constant table");
    check(registry.resolve_affecter_reference(game,"%bish_beam_dmg",9,0)->at(1)==242,
          "Affecter reference did not use actor talent context");
    check(registry.resolve_affecter_reference(game,"%bish_beam_dmg",9,-0.0f)->at(0)==217,
          "Affecter signed zero did not evaluate its own context");
    check(!registry.resolve_affecter_reference(game,"%bish_beam_dmg",10,-0.0f),
          "Affecter borrowed a value from another actor context");
    check(registry.resolve_affecter_reference(game,"%missing",std::nullopt,0)->at(0)==0,
          "Missing actor incorrectly evaluated or used owner");
    check(registry.resolve_affecter_reference(other,"%missing",10,-2.5f)->at(1)==-2.5f,
          "Inherited affecter value incorrectly touched the registry/cache");
    auto passthrough=registry.resolve_affecter_reference(other,"%missing",10,
        std::numeric_limits<float>::quiet_NaN());
    check(passthrough->at(0)!=passthrough->at(0)&&passthrough->at(1)!=passthrough->at(1),
          "Unordered inherited affecter value incorrectly evaluated");
    check(!registry.resolve_affecter_reference(game,"%bish_beam_dmg",10,0),
          "Live affecter cache miss silently became a zero value");
    game.set(9,beam.value_id,-1.0e30f,13);
    auto validated=registry.resolve_affecter_reference(game,"%bish_beam_dmg",9,0);
    check(validated->at(0)==0&&validated->at(1)==13,"Affecter endpoints were not independently validated");
    game.set(9,beam.value_id,-1.0e29f,-1.0e30f);
    validated=registry.resolve_affecter_reference(game,"%bish_beam_dmg",9,0);
    check(validated->at(0)==-1.0e29f&&validated->at(1)==0,"Affecter lower validation boundary changed");
    registry.populate(game,9,"bishop_beam",20);
    check(game.get(9,beam.value_id)->at(1)==242&&game.get(9,energy.value_id)->at(0)==140,
          "Registered reference and publication IDs disagree");
    registry.populate(game,9,"bishop_beam",std::nullopt);
    check(game.contains(9,beam.value_id)&&game.get(9,beam.value_id)->at(1)==0,"Registry reset dropped binding presence");
    raven::TalentBindings reloaded(defs);
    check(reloaded.bind("%bish_beam_dmg").value_id==beam.value_id,"Same-profile registry rebuild changed IDs");
    rejected=false;
    try{reloaded.populate(game,9,"bishop_beam",20);}catch(const std::runtime_error&){rejected=true;}
    check(rejected&&game.get(9,beam.value_id)->at(0)==0,"Equal IDs from another profile contaminated the cache");
    auto copied=registry;copied.populate(game,9,"bishop_beam",1);
    check(game.get(9,beam.value_id)->at(0)==11,"Copying the same immutable profile broke ownership");
    raven::EventOperands events(registry);
    using Field=raven::EventOperand;
    events.begin(0x1000);events.set(0x1000,Field::energy,"%bish_beam_pwr");
    events.set(0x1000,Field::damage,"%bish_beam_dmg");events.clone(0x1000,0x2000);
    events.retire(0x1000);
    check(events.evaluate(0x2000,Field::energy,game,9).value->at(0)==14,
          "Cloned event lost binding when source retired");
    registry.populate(game,10,"bishop_beam",20);
    check(events.evaluate(0x2000,Field::damage,game,10).value->at(1)==242&&
          events.evaluate(0x2000,Field::damage,game,9).value->at(1)==15,
          "Shared event retained another actor's evaluated damage");
    auto missing=events.evaluate(0x2000,Field::energy,game,11);
    auto damage=events.damage(0x2000,game,9);
    check(damage.bound&&damage.value->at(0)==11&&damage.value->at(1)==15,"Damage endpoints changed");
    check(events.damage(0x2000,game,11).bound&&!events.damage(0x2000,game,11).value,
          "Missing damage context became a valid zero range");
    game.set(10,beam.value_id,32768.9f,65535.9f);
    damage=events.damage(0x2000,game,10);
    check(damage.value->at(0)==-32768&&damage.value->at(1)==-1,"Damage low-word conversion clamped or lost sign");
    game.set(10,beam.value_id,-1.0e30f,15.9f);
    damage=events.damage(0x2000,game,10);
    check(damage.value->at(0)==0&&damage.value->at(1)==15,"Damage endpoints not validated independently");
    check(missing.bound&&!missing.value,"Missing bound context became a native/zero operand");
    check(events.evaluate(0x2000,Field::energy,game,11,10).value->at(0)==140,"Owner context not resolved");
    check(events.energy(0x2000,game,11).bound&&!events.energy(0x2000,game,11).value,
          "Missing energy was silently converted to zero");
    check(events.energy(0x2000,game,11,10).value==140,"Energy owner conversion failed");
    game.set(10,energy.value_id,16.9f,99.0f);
    check(events.energy(0x2000,game,10).value==16,"Energy did not truncate the lower endpoint");
    game.set(10,energy.value_id,-1.0e30f,-1.0e30f);
    check(events.energy(0x2000,game,10).value==0,"Native energy invalid-range guard missing");
    events.set(0x2000,Field::energy,"5");
    check(!events.energy(0x2000,game,9).bound,"Native energy field incorrectly intercepted");
    check(!events.evaluate(0x2000,Field::energy,game,9).bound&&events.evaluate(0x2000,Field::damage,game,9).bound,
          "Literal override retained binding or cleared unrelated field");
    events.clone(0x3000,0x2000);
    check(!events.evaluate(0x2000,Field::damage,game,9).bound,"Cloning native event retained stale destination metadata");
    events.set(0x2000,Field::damage,"%bish_beam_dmg");events.begin(0x2000);
    check(!events.evaluate(0x2000,Field::damage,game,9).bound,"Reused event address retained prior binding");
    events.set(0x4000,Field::energy,"%bish_beam_pwr");
    events.set(0x5000,Field::damage,"%bish_beam_dmg");
    events.clone_field(0x4000,0x5000,Field::energy);
    check(events.evaluate(0x5000,Field::damage,game,9).bound&&events.evaluate(0x5000,Field::energy,game,9).bound,
          "Action-only copy destroyed unrelated attack binding");
    events.clone_field(0x6000,0x5000,Field::energy);
    check(!events.evaluate(0x5000,Field::energy,game,9).bound&&events.evaluate(0x5000,Field::damage,game,9).bound,
          "Literal action copy retained stale energy binding or cleared damage");
    // Range follows the same event lifetime, but stays independent of damage.
    events.set(0x4000,Field::max_range,"%bish_beam_dmg");
    events.clone_field(0x4000,0x5000,Field::max_range);
    events.retire(0x4000);
    check(events.evaluate(0x5000,Field::max_range,game,9).value->at(0)==11,
          "Range binding did not survive prototype retirement");
    events.set(0x5000,Field::max_range,"200");
    check(!events.binding(0x5000,Field::max_range)&&events.binding(0x5000,Field::damage),
          "Literal range override retained binding or erased damage");
    events.set(0x5000,Field::max_range,"%bish_beam_dmg");events.begin(0x5000);
    check(!events.binding(0x5000,Field::max_range),"Reused event retained range binding");
    // Projectile count uses the same actor-scoped symbolic evaluation, with
    // independent metadata so a literal override cannot erase attack damage.
    game.set(9,beam.value_id,1,1);game.set(10,beam.value_id,7,7);
    events.set(0x7000,Field::projectile_count,"%bish_beam_dmg");
    events.clone_field(0x7000,0x8000,Field::projectile_count);events.retire(0x7000);
    check(events.evaluate(0x8000,Field::projectile_count,game,9).value->at(0)==1&&
          events.evaluate(0x8000,Field::projectile_count,game,10).value->at(0)==7,
          "Projectile count lost clone ownership or leaked another actor's rank");
    events.set(0x8000,Field::damage,"%bish_beam_dmg");
    events.set(0x8000,Field::projectile_count,"1");
    check(!events.binding(0x8000,Field::projectile_count)&&events.binding(0x8000,Field::damage),
          "Literal projectile count retained binding or removed damage");
    events.set(0x8000,Field::projectile_count,"%bish_beam_dmg");events.begin(0x8000);
    check(!events.binding(0x8000,Field::projectile_count),"Reused event retained projectile count");
    events.set(0x7000,Field::spawn_life,"%bish_beam_dmg");
    events.clone_field(0x7000,0x8000,Field::spawn_life);events.retire(0x7000);
    check(events.evaluate(0x8000,Field::spawn_life,game,9).value->at(0)==1&&
          events.evaluate(0x8000,Field::spawn_life,game,10).value->at(0)==7,
          "Spawn life lost source rank or clone ownership");
    events.set(0x8000,Field::spawn_life,"3");
    check(!events.binding(0x8000,Field::spawn_life),"Literal spawn life retained old binding");
    events.set(0x8000,Field::spawn_life,"%bish_beam_dmg");events.begin(0x8000);
    check(!events.binding(0x8000,Field::spawn_life),"Reused event retained spawn life");
    std::cout<<"PASS context isolation, zero ownership, fallback, range/count replacement and retirement\n";
    return 0;
}catch(const std::exception& e){std::cerr<<e.what()<<'\n';return 1;}}
