#include "engine/combat/raven_percent_attack.h"
#include "engine/combat/raven_percent_attack_runtime.h"
#include "engine/progression/raven_imported_talents.h"
#include <cstdio>

namespace raven {
namespace {
std::string field(const PowerupFields& fields,const char* name,const char* fallback) {
    auto it=fields.find(name);
    return it==fields.end()?fallback:it->second;
}
std::string lower(std::string text) {
    for(char& c:text)if(c>='A'&&c<='Z')c=char(c-'A'+'a');
    return text;
}
}
extern "C" int raven_percent_attack_mode(uint32_t definition) {
    try {
        auto fields=raven::xml1_powerup_metadata_snapshot(definition);
        if(!fields||raven::lower(raven::field(*fields,"class",""))!="atk_instant_pct")return 0;
        return raven::lower(raven::field(*fields,"selfonly","false"))=="true"?2:1;
    }catch(...){return 0;}
}
extern "C" raven_lookup raven_percent_attack_sample(raven_guest_read read,
    raven_handle_valid valid,raven_handle_actor resolve,void* context,
    uint32_t definition,uint32_t system,uint32_t handle,uint32_t talents,
    uint32_t null_handle,float* chance,float* percent) {
    if(!chance||!percent)return RAVEN_INVALID;
    try {
        auto profile=raven::imported_talents();
        static const raven::TalentBindings empty({});
        auto operands=raven::bind_xml1_percent_attack(definition,profile?*profile:empty);
        if(!operands)return RAVEN_MISSING;
        raven::PercentAttackValues values{};
        if(operands->evaluate_active(read,valid,resolve,context,system,handle,
            talents,null_handle,&values)!=raven::TalentResult::evaluated)return RAVEN_INVALID;
        *chance=values.chance;*percent=values.percent;
        return RAVEN_FOUND;
    }catch(const std::exception& e){
        std::fprintf(stderr,"[RAVEN PERCENT ATTACK] %s\n",e.what());
        return RAVEN_INVALID;
    }
}
PercentAttackOperands::PercentAttackOperands(const PowerupFields& fields,
    const TalentBindings& bindings):
    // Original constructor158CA0 sets both endpoints to1, selfonly=false.
    chance_(field(fields,"chance","1"),bindings),
    percent_(field(fields,"percent","1"),bindings),
    self_only_(lower(field(fields,"selfonly","false"))=="true") {}
TalentResult PercentAttackOperands::evaluate_active(raven_guest_read read,
    raven_handle_valid valid,raven_handle_actor resolve,void* context,
    uint32_t system,uint32_t handle,uint32_t talents,uint32_t null_handle,
    PercentAttackValues* out) const {
    if(!out)return TalentResult::invalid_state;
    float chance,percent;
    // 14D0C4..14D189 and14D29A..14D35B read the first literal value or
    // evaluate a rank reference with count1. They do not sample the operand
    // range. Their sole RNG call is the subsequent chance roll, owned by
    // the guest callback, not by this immutable operand object.
    auto status=chance_.evaluate_active(read,valid,resolve,context,system,
        handle,talents,0,null_handle,0,&chance);
    if(status!=TalentResult::evaluated)return status;
    status=percent_.evaluate_active(read,valid,resolve,context,system,
        handle,talents,0,null_handle,0,&percent);
    if(status!=TalentResult::evaluated)return status;
    *out={chance,percent,self_only_};
    return TalentResult::evaluated;
}
std::optional<PercentAttackOperands> bind_xml1_percent_attack(
    uint32_t definition,const TalentBindings& bindings) {
    auto fields=xml1_powerup_metadata_snapshot(definition);
    if(!fields||lower(field(*fields,"class",""))!="atk_instant_pct")return std::nullopt;
    return PercentAttackOperands(*fields,bindings);
}
}
