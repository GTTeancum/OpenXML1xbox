#include "engine/combat/raven_absorb.h"
#include "engine/combat/raven_absorb_runtime.h"
#include "engine/progression/raven_imported_talents.h"
#include <cstring>
#include <cstdio>

namespace raven {
namespace {
std::string field(const PowerupFields& fields,const char* key,const char* fallback) {
    auto it=fields.find(key);return it==fields.end()?fallback:it->second;
}
std::string lower(std::string value) {
    for(char& c:value)if(c>='A'&&c<='Z')c=char(c-'A'+'a');
    return value;
}
bool flag(const PowerupFields& fields,const char* key) {
    return lower(field(fields,key,"false"))=="true";
}
}
extern "C" raven_lookup raven_absorb_sample(raven_guest_read read,void* context,
    uint32_t definition,uint32_t talents,uint32_t holder,uint32_t source,
    raven_absorb_values* output) {
    if(!output)return RAVEN_INVALID;
    try {
        auto profile=raven::imported_talents();
        static const raven::TalentBindings empty({});
        auto operands=raven::bind_xml1_absorb(definition,profile?*profile:empty);
        if(!operands)return RAVEN_MISSING;
        raven::AbsorbValues values{};
        if(operands->evaluate(read,context,talents,operands->sponsor()?source:holder,
                source,&values)!=raven::TalentResult::evaluated)return RAVEN_INVALID;
        raven_absorb_values result{};
        if(values.beam_effect.size()>=sizeof(result.beam))return RAVEN_INVALID;
        result.chance=values.chance;result.percentage=values.damage_percent;
        result.sponsor=values.sponsor;result.energy=values.energy;result.inflicted=values.inflicted;
        std::memcpy(result.beam,values.beam_effect.c_str(),values.beam_effect.size()+1);
        *output=result;return RAVEN_FOUND;
    }catch(const std::exception& e) {
        std::fprintf(stderr,"[RAVEN ABSORB] %s\n",e.what());return RAVEN_INVALID;
    }
}
extern "C" int raven_absorb_mode(uint32_t definition) {
    try {
        auto fields=xml1_powerup_metadata_snapshot(definition);
        if(!fields||lower(field(*fields,"class",""))!="absorb")return 0;
        return flag(*fields,"inflicted")?1:2;
    }catch(...){return 0;}
}
extern "C" raven_lookup raven_absorb_beam_path(uint32_t definition,char* path,size_t capacity) {
    if(!path||!capacity)return RAVEN_INVALID;
    try {
        auto fields=xml1_powerup_metadata_snapshot(definition);
        if(!fields||lower(field(*fields,"class",""))!="absorb")return RAVEN_MISSING;
        const auto beam=field(*fields,"beameffect","");
        if(beam.empty())return RAVEN_MISSING;
        if(beam.size()>=capacity)return RAVEN_INVALID;
        std::memcpy(path,beam.c_str(),beam.size()+1);return RAVEN_FOUND;
    }catch(...){return RAVEN_INVALID;}
}
AbsorbOperands::AbsorbOperands(const PowerupFields& fields,const TalentBindings& bindings):
    // Original constructor159590: chance1, percentage0, switches clear.
    chance_(field(fields,"chance","1"),bindings),
    percentage_(field(fields,"damagepercent","0"),bindings),
    sponsor_(flag(fields,"sponsor")),energy_(flag(fields,"energy")),
    inflicted_(flag(fields,"inflicted")),beam_(field(fields,"beameffect","")) {}
TalentResult AbsorbOperands::evaluate(raven_guest_read read,void* context,
    uint32_t talents,uint32_t recipient,uint32_t source,AbsorbValues* output) const {
    if(!output)return TalentResult::invalid_state;
    float chance,percentage;
    // Native14C38F evaluates chance with recipient stats,14C437 evaluates
    // damagePercent with source stats. Both consume endpoint0, not an operand
    // RNG sample. Sharing must not substitute the holder for both contexts.
    auto result=chance_.evaluate(read,context,talents,recipient,0,&chance);
    if(result!=TalentResult::evaluated)return result;
    result=percentage_.evaluate(read,context,talents,source,0,&percentage);
    if(result!=TalentResult::evaluated)return result;
    *output={chance,percentage,sponsor_,energy_,inflicted_,beam_};
    return TalentResult::evaluated;
}
std::optional<AbsorbOperands> bind_xml1_absorb(uint32_t definition,const TalentBindings& bindings) {
    auto fields=xml1_powerup_metadata_snapshot(definition);
    if(!fields||lower(field(*fields,"class",""))!="absorb")return std::nullopt;
    return AbsorbOperands(*fields,bindings);
}
}
