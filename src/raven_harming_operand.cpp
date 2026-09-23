#include "raven_harming_operand.h"
#include "raven_powerup_metadata.h"
#include "raven_xml1_powerup_view.h"
#include "raven_imported_talents.h"
#include "raven_harming_runtime.h"
#include "raven_add_attack_runtime.h"
#include <cstdio>

namespace raven {
std::optional<raven_harming_settings> read_xml1_harming_settings(uint32_t definition) {
    auto fields=xml1_powerup_metadata_snapshot(definition);
    if(!fields)return std::nullopt;
    auto type=fields->find("class");
    if(type==fields->end())return std::nullopt;
    std::string name=type->second;
    for(char& c:name)if(c>='A'&&c<='Z')c=char(c-'A'+'a');
    if(name!="harming")return std::nullopt;
    raven_harming_settings settings;raven_harming_settings_init(&settings);
    for(const auto& field:*fields)
        raven_harming_settings_parse(&settings,field.first.c_str(),field.second.c_str());
    return settings;
}
TalentResult HarmingOperand::evaluate_active(raven_guest_read read,raven_handle_valid valid,
    raven_handle_actor resolve,void *context,uint32_t powerup_system,
    uint32_t active_handle,uint32_t talent_system,uint32_t queried_actor,
    uint32_t null_handle,double random_unit,float *output) const {
    uint32_t instance=0;
    if(!read||!valid||!resolve||!output||
       raven_xml1_active_powerup(read,context,powerup_system,active_handle,&instance)!=RAVEN_FOUND)
        return TalentResult::invalid_state;
    unsigned char references[8];
    if(!read(context,instance+0x18,references,sizeof(references)))return TalentResult::invalid_state;
    auto word=[](const unsigned char *p){return uint32_t(p[0])|(uint32_t(p[1])<<8)|
        (uint32_t(p[2])<<16)|(uint32_t(p[3])<<24);};
    const uint32_t source=word(references),target=word(references+4);
    int source_valid=source?valid(context,source):0;
    if(source_valid<0)return TalentResult::invalid_state;
    // XML2 15E124/146F00 rejects an invalid non-sentinel primary source.
    if(source!=null_handle&&!source_valid)return TalentResult::invalid_state;
    uint32_t selected=source_valid?source:0,actor=queried_actor;
    if(!selected&&target) {
        int target_valid=valid(context,target);
        if(target_valid<0)return TalentResult::invalid_state;
        if(target_valid)selected=target;
    }
    if(selected) {
        actor=0;
        const auto status=resolve(context,selected,&actor);
        if(status==RAVEN_INVALID)return TalentResult::invalid_state;
        if(status==RAVEN_MISSING)actor=0;
    }
    // C31A0 with no eligible context returns zero for a reference, but still
    // evaluates literal endpoints. An unreadable/stale context is not this
    // legitimate no-actor case and has already returned an explicit error.
    if(!actor&&reference_) {*output=0;return TalentResult::evaluated;}
    return evaluate(read,context,talent_system,actor,random_unit,output);
}
std::optional<HarmingOperand> bind_xml1_harming_damage(uint32_t definition,
    const TalentBindings& bindings,const TalentConstants *constants) {
    auto fields=xml1_powerup_metadata_snapshot(definition);
    if(!fields)return std::nullopt;
    auto type=fields->find("class");
    if(type==fields->end())return std::nullopt;
    std::string name=type->second;
    for(char& c:name)if(c>='A'&&c<='Z')c=char(c-'A'+'a');
    if(name!="harming")return std::nullopt;
    auto damage=fields->find("damage");
    // Original 158F90 initializes both damage endpoints to zero.
    return HarmingOperand(damage==fields->end()?"0":damage->second,bindings,constants);
}
HarmingOperand::HarmingOperand(const std::string& text,const TalentBindings& bindings,
                               const TalentConstants *constants) {
    if(!text.empty()&&text[0]=='%')reference_=bindings.bind(text);
    else literal_=read_xml2_literal(text,constants);
}

TalentResult HarmingOperand::evaluate(raven_guest_read read,void *context,
    uint32_t system,uint32_t actor,double random_unit,float *output) const {
    if(!output)return TalentResult::invalid_state;
    float endpoints[2]={literal_[0],literal_[1]};
    if(reference_) {
        const auto result=reference_->evaluate(read,context,system,actor,endpoints);
        if(result!=TalentResult::evaluated)return result;
    }
    // 16E190 always consumes its native RNG, even for equal/reversed ranges.
    // The adapter supplies that one sample; this evaluator owns no RNG state.
    // Preserve fractional endpoints and the float store at 14EF77. Do not
    // reuse EventOperands::damage, which deliberately narrows attack ranges.
    volatile double scaled=random_unit*((double)endpoints[1]-(double)endpoints[0]);
    *output=(float)(scaled+(double)endpoints[0]);
    return TalentResult::evaluated;
}
}
extern "C" raven_lookup raven_harming_runtime_sample(raven_guest_read read,raven_handle_valid valid,
    raven_handle_actor resolve,void *context,uint32_t definition,uint32_t system,
    uint32_t handle,uint32_t talents,uint32_t null_handle,double random_unit,
    float *sample,raven_harming_settings *settings) {
    if(!sample||!settings)return RAVEN_INVALID;
    try {
        auto parsed=raven::read_xml1_harming_settings(definition);
        if(!parsed)return RAVEN_MISSING;
        auto profile=raven::imported_talents();
        // Literal-only definitions do not require a character catalog. Unknown
        // references still fail binding explicitly; never invent a zero value.
        static const raven::TalentBindings empty({});
        auto operand=raven::bind_xml1_harming_damage(definition,profile?*profile:empty);
        if(!operand)return RAVEN_MISSING;
        float amount;
        const auto status=operand->evaluate_active(read,valid,resolve,context,system,handle,
            talents,0,null_handle,random_unit,&amount);
        if(status!=raven::TalentResult::evaluated)return RAVEN_INVALID;
        *sample=amount;*settings=*parsed;return RAVEN_FOUND;
    }catch(const std::exception& e){
        std::fprintf(stderr,"[RAVEN HARMING ERROR] definition=%08X: %s\n",definition,e.what());
        return RAVEN_INVALID;
    }
}
extern "C" int raven_harming_runtime_definition(uint32_t definition) {
    try{return raven::read_xml1_harming_settings(definition).has_value();}
    catch(...){return 0;}
}
extern "C" int raven_imported_powerup_life_definition(uint32_t definition) {
    // Imported durations also occur on ordinary buffs (Absorption, Flaming
    // Fury), not only harming/add_attack classes. Recognize catalog-owned
    // references only; native XML1 durations and literals stay native.
    try {
        auto fields=raven::xml1_powerup_metadata_snapshot(definition);
        auto profile=raven::imported_talents();
        if(!fields||!profile)return 0;
        auto it=fields->find("life");
        if(it==fields->end()||it->second.empty()||it->second[0]!='%')return 0;
        profile->bind(it->second);
        return 1;
    }catch(...){return 0;}
}
extern "C" raven_lookup raven_harming_runtime_life(raven_guest_read read,raven_handle_valid valid,
    raven_handle_actor resolve,void *context,uint32_t definition,uint32_t system,
    uint32_t handle,uint32_t talents,uint32_t null_handle,float *life) {
    if(!life)return RAVEN_INVALID;
    try {
        if(!raven::read_xml1_harming_settings(definition)&&!raven_add_attack_definition(definition)&&
           !raven_imported_powerup_life_definition(definition))return RAVEN_MISSING;
        auto fields=raven::xml1_powerup_metadata_snapshot(definition);
        auto it=fields->find("life");
        if(it==fields->end()||it->second.empty()||it->second[0]!='%')return RAVEN_MISSING;
        auto profile=raven::imported_talents();
        if(!profile)return RAVEN_INVALID;
        raven::HarmingOperand operand(it->second,*profile);
        float value;
        // XML2 14674B calls definition+98 ->150C90 ->C31A0 with no upper
        // output: duration uses the lower endpoint, without consuming RNG.
        const auto result=operand.evaluate_active(read,valid,resolve,context,system,
            handle,talents,0,null_handle,0,&value);
        if(result!=raven::TalentResult::evaluated)return RAVEN_INVALID;
        *life=value;return RAVEN_FOUND;
    }catch(const std::exception& e){
        std::fprintf(stderr,"[RAVEN HARMING ERROR] lifetime definition=%08X: %s\n",definition,e.what());
        return RAVEN_INVALID;
    }
}
