#include "raven_add_attack.h"
#include "raven_numeric.h"
#include "raven_add_attack_runtime.h"
#include "raven_imported_talents.h"
#include <cstdio>
#include <algorithm>
#include <cmath>
namespace raven {
static std::string field(const PowerupFields& fields,const char *key,const char *fallback) {
    auto it=fields.find(key);return it==fields.end()?fallback:it->second;
}
static std::string lower(std::string value) {
    for(char& c:value)if(c>='A'&&c<='Z')c=char(c-'A'+'a');
    return value;
}
AddAttackOperands::AddAttackOperands(const PowerupFields& fields,const TalentBindings& bindings):
    // XML2 158A60 initializes both operand ranges to zero and mirror false.
    percentage_(field(fields,"damagepercent","0"),bindings),
    flat_(field(fields,"damagesum","0"),bindings),
    mirror_(lower(field(fields,"mirror","false"))=="true"),
    damage_type_(field(fields,"damagetype","")) {}
TalentResult AddAttackOperands::evaluate_active(raven_guest_read read,raven_handle_valid valid,
    raven_handle_actor resolve,void *context,uint32_t system,uint32_t handle,
    uint32_t talents,uint32_t null_handle,double percent_rng,double flat_rng,AddAttackValues *out) const {
    if(!out||!std::isfinite(percent_rng)||!std::isfinite(flat_rng)||
       percent_rng<0||percent_rng>=1||flat_rng<0||flat_rng>=1)return TalentResult::invalid_state;
    auto evaluate=[&](const HarmingOperand& operand,double sample,float *value){
        return operand.evaluate_active(read,valid,resolve,context,system,handle,
            talents,0,null_handle,sample,value);
    };
    float percent,lo,hi;
    auto status=evaluate(percentage_,percent_rng,&percent);
    if(status!=TalentResult::evaluated)return status;
    status=evaluate(flat_,0,&lo);if(status!=TalentResult::evaluated)return status;
    status=evaluate(flat_,1,&hi);if(status!=TalentResult::evaluated)return status;
    // XML2 14CDBF uses signed-short endpoints, then 16E1C0's inclusive
    // integer range. RNG ownership remains with the native caller.
    int low=raven_xml2_energy_short(lo),high=raven_xml2_energy_short(hi);
    if(low>high)std::swap(low,high);
    int16_t flat=raven_xml2_energy_short(low+flat_rng*(high-low+1));
    *out={percent,flat,mirror_,damage_type_};return TalentResult::evaluated;
}
std::optional<AddAttackOperands> bind_xml1_add_attack(uint32_t definition,const TalentBindings& bindings) {
    auto fields=xml1_powerup_metadata_snapshot(definition);
    if(!fields||lower(field(*fields,"class",""))!="add_attack")return std::nullopt;
    return AddAttackOperands(*fields,bindings);
}
}
extern "C" int raven_add_attack_definition(uint32_t definition) {
    try {
        auto fields=raven::xml1_powerup_metadata_snapshot(definition);
        return fields&&raven::lower(raven::field(*fields,"class",""))=="add_attack";
    }catch(...){return 0;}
}
extern "C" raven_lookup raven_add_attack_sample(raven_guest_read read,raven_handle_valid valid,
    raven_handle_actor resolve,void *context,uint32_t definition,uint32_t system,
    uint32_t handle,uint32_t talents,uint32_t null_handle,double percent_random,
    double flat_random,float *percentage,int16_t *flat,int *mirror) {
    if(!percentage||!flat||!mirror)return RAVEN_INVALID;
    try {
        auto profile=raven::imported_talents();
        static const raven::TalentBindings empty({});
        auto operand=raven::bind_xml1_add_attack(definition,profile?*profile:empty);
        if(!operand)return RAVEN_MISSING;
        raven::AddAttackValues values;
        if(operand->evaluate_active(read,valid,resolve,context,system,handle,talents,
            null_handle,percent_random,flat_random,&values)!=raven::TalentResult::evaluated)
            return RAVEN_INVALID;
        *percentage=values.percentage;*flat=values.flat;*mirror=values.mirror;
        return RAVEN_FOUND;
    }catch(const std::exception& e){
        std::fprintf(stderr,"[RAVEN ADD ATTACK ERROR] definition=%08X: %s\n",definition,e.what());
        return RAVEN_INVALID;
    }
}
