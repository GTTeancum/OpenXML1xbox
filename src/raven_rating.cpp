#include "raven_rating.h"
#include "raven_powerup_metadata.h"
#include "raven_harming_operand.h"
#include "raven_imported_talents.h"
#include <cmath>
#include <cstdio>
static std::string field(const raven::PowerupFields& fields,const char *key) {
    auto it=fields.find(key);return it==fields.end()?std::string{}:it->second;
}
static std::string lower(std::string text) {
    for(char& c:text)if(c>='A'&&c<='Z')c=char(c-'A'+'a');return text;
}
static raven_lookup rating_query(raven_guest_read read,raven_handle_valid valid,
    raven_handle_actor resolve,void *context,uint32_t definition,uint32_t system,
    uint32_t handle,uint32_t talents,uint32_t null_handle,const char *attribute,uint32_t record,
    raven_rating_damage_scope scope_match,int mode,float *output) {
    if(!attribute||!output||(mode!=0&&mode!=1))return RAVEN_INVALID;
    try {
        auto fields=raven::xml1_powerup_affecters_snapshot(definition);
        auto profile=raven::imported_talents();
        static const raven::TalentBindings literals({});
        float combined=mode==1?1.0f:0.0f;bool found=false;
        for(const auto& f:fields) {
            const auto name=lower(field(f,"attribute"));
            // XML2 5D549/5D559 queries attribute62 in the outgoing hit's
            // context before its attack-rating calculation. Existing XML1
            // attack_rating declarations keep their behavior.
            // XML2's original name table at 545998 gives damage and
            // atk_damage the same attribute ID (57); 62530 queries that
            // ID for outgoing damage. Accept the authored alias here,
            // using the existing damage bridge exactly once.
            if(name!=attribute&&
               !(std::string(attribute)=="attack_rating"&&name=="atk_attack_rating")&&
               !(std::string(attribute)=="damage"&&name=="atk_damage"))continue;
            const auto damage_scope=field(f,"scope_damage");
            if(!damage_scope.empty()) {
                if(!scope_match)return RAVEN_INVALID;
                const auto match=scope_match(context,damage_scope.c_str(),record);
                if(match==RAVEN_INVALID)return match;
                if(match!=RAVEN_FOUND)continue;
            }
            if(!field(f,"share_filter").empty()) {
                float radius;
                if(!read||!read(context,definition+0x4C,&radius,4))return RAVEN_INVALID;
                if(!raven::xml1_powerup_share_matches(f,definition,radius))continue;
            }
            // XML2 15E8C0 selects exact query mode. An absent affect_type is
            // native mode 0 (add); "scale" is mode 1. Do not coerce one into
            // the other, even if its level happens to be numerically equal.
            const auto type=lower(field(f,"affect_type"));
            const int authored_mode=type.empty()||type=="add"?0:
                type=="scale"?1:type=="max"?2:type=="min"?3:-1;
            if(authored_mode<0)return RAVEN_INVALID;
            if(authored_mode!=mode)continue;
            raven::HarmingOperand operand(field(f,"level"),profile?*profile:literals);
            float value;
            if(operand.evaluate_active(read,valid,resolve,context,system,handle,talents,
                0,null_handle,0,&value)!=raven::TalentResult::evaluated || !std::isfinite(value))
                return RAVEN_INVALID;
            if(mode==1)combined*=value;
            else combined+=value;
            if(!std::isfinite(combined))return RAVEN_INVALID;
            found=true;
        }
        if(!found)return RAVEN_MISSING;
        *output=combined;return RAVEN_FOUND;
    }catch(const std::exception& e){
        std::fprintf(stderr,"[RAVEN RATING ERROR] definition=%08X: %s\n",definition,e.what());
        return RAVEN_INVALID;
    }
}
extern "C" raven_lookup raven_rating_scale(raven_guest_read read,raven_handle_valid valid,
    raven_handle_actor resolve,void *context,uint32_t definition,uint32_t system,
    uint32_t handle,uint32_t talents,uint32_t null_handle,const char *attribute,uint32_t record,
    raven_rating_damage_scope scope_match,float *scale) {
    return rating_query(read,valid,resolve,context,definition,system,handle,talents,
        null_handle,attribute,record,scope_match,1,scale);
}
extern "C" raven_lookup raven_rating_add(raven_guest_read read,raven_handle_valid valid,
    raven_handle_actor resolve,void *context,uint32_t definition,uint32_t system,
    uint32_t handle,uint32_t talents,uint32_t null_handle,const char *attribute,uint32_t record,
    raven_rating_damage_scope scope_match,float *amount) {
    return rating_query(read,valid,resolve,context,definition,system,handle,talents,
        null_handle,attribute,record,scope_match,0,amount);
}
