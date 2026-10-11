#include "engine/combat/raven_rating.h"
#include "engine/powers/raven_powerup_metadata.h"
#include "engine/combat/raven_harming_operand.h"
#include "engine/progression/raven_imported_talents.h"
#include "engine/powers/raven_xml1_powerup_view.h"
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
    raven_rating_scope scope_match,int mode,float *output) {
    if(!attribute||!output||(mode<0||mode>5))return RAVEN_INVALID;
    try {
        auto fields=raven::xml1_powerup_affecters_snapshot(definition);
        auto profile=raven::imported_talents();
        static const raven::TalentBindings literals({});
        float combined=mode==2?*output:(mode==1||mode==4)?1.0f:0.0f;bool found=false;
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
            // Nested affecters retain their own scopes; the outer native
            // definition scope cannot stand in for each child's restriction.
            bool scope_matches=true;
            for(const char *kind:{"scope_damage","scope_node"}) {
                const auto scope=field(f,kind);
                // Cache refresh14AAE0 uses the share-role filter143910,
                // not the hit-scope test144380. Drop rewards have no hit.
                if(mode==4||mode==5||scope.empty())continue;
                if(!scope_match)return RAVEN_INVALID;
                const auto match=scope_match(context,kind,scope.c_str(),record);
                if(match==RAVEN_INVALID)return match;
                if(match!=RAVEN_FOUND){scope_matches=false;break;}
            }
            if(!scope_matches)continue;
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
            // The missing scale-factor consumer (XML2 14A8ED..14A99C)
            // applies add and multiply in declaration order. Grouping all
            // additions before all multipliers changes stacked powerups.
            // Its native switch ignores max/min. Modes 0/1 keep their existing
            // single-operation queries; mode 2 is only this new ordered path.
            // Kill-reward cache cases1498D3/149918 accumulate the resolved
            // value directly; they do not branch on the affect operation.
            if(mode!=3&&mode!=5&&(mode==2 ? authored_mode>1 : authored_mode!=(mode==4?1:mode)))continue;
            raven::HarmingOperand operand(field(f,"level"),profile?*profile:literals);
            float value;
            if(operand.evaluate_active(read,valid,resolve,context,system,handle,talents,
                0,null_handle,0,&value)!=raven::TalentResult::evaluated || !std::isfinite(value))
                return RAVEN_INVALID;
            if(mode==5)combined=value;
            else if(mode==1||mode==4||(mode==2&&authored_mode==1))combined*=value;
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
    raven_rating_scope scope_match,float *scale) {
    return rating_query(read,valid,resolve,context,definition,system,handle,talents,
        null_handle,attribute,record,scope_match,1,scale);
}
extern "C" raven_lookup raven_rating_add(raven_guest_read read,raven_handle_valid valid,
    raven_handle_actor resolve,void *context,uint32_t definition,uint32_t system,
    uint32_t handle,uint32_t talents,uint32_t null_handle,const char *attribute,uint32_t record,
    raven_rating_scope scope_match,float *amount) {
    return rating_query(read,valid,resolve,context,definition,system,handle,talents,
        null_handle,attribute,record,scope_match,0,amount);
}
extern "C" raven_lookup raven_rating_actor_scale(raven_guest_read read,raven_handle_valid valid,
    raven_handle_actor resolve,void *context,uint32_t definition,uint32_t system,
    uint32_t handle,uint32_t talents,uint32_t null_handle,float *factor) {
    if(!factor||!std::isfinite(*factor))return RAVEN_INVALID;
    return rating_query(read,valid,resolve,context,definition,system,handle,talents,
        null_handle,"scale_factor",0,nullptr,2,factor);
}
extern "C" raven_lookup raven_rating_kill_reward(raven_guest_read read,raven_handle_valid valid,
    raven_handle_actor resolve,void *context,uint32_t definition,uint32_t system,
    uint32_t handle,uint32_t talents,uint32_t null_handle,const char *attribute,
    uint32_t record,raven_rating_scope scope_match,float *amount) {
    return rating_query(read,valid,resolve,context,definition,system,handle,talents,
        null_handle,attribute,record,scope_match,3,amount);
}

extern "C" raven_lookup raven_rating_drop_scale(raven_guest_read read,raven_handle_valid valid,
    raven_handle_actor resolve,void *context,uint32_t definition,uint32_t system,
    uint32_t handle,uint32_t talents,uint32_t null_handle,const char *attribute,float *scale) {
    if(!attribute||(std::string(attribute)!="extra_potions"&&std::string(attribute)!="extra_money"))
        return RAVEN_INVALID;
    return rating_query(read,valid,resolve,context,definition,system,handle,talents,
        null_handle,attribute,0,nullptr,4,scale);
}

extern "C" raven_lookup raven_rating_damage_reserve(raven_guest_read read,raven_handle_valid valid,
    raven_handle_actor resolve,void *context,uint32_t definition,uint32_t system,
    uint32_t handle,uint32_t talents,uint32_t null_handle,uint32_t record,
    raven_rating_scope scope_match,float endpoints[2]) {
    try {
        const auto fields=raven::xml1_powerup_affecters_snapshot(definition);
        for(const auto& f:fields) {
            if(lower(field(f,"attribute"))!="spend_damage")continue;
            uint32_t instance=0,current_definition=0;
            const auto live=raven_xml1_active_powerup(read,context,system,handle,&instance);
            if(live!=RAVEN_FOUND)return live;
            if(!read(context,instance+0x2C,&current_definition,4))return RAVEN_INVALID;
            if(current_definition!=definition)return RAVEN_MISSING;
            // Native attachment146826 selects the declaration by attribute,
            // independently of affect_type. The incoming query15BEF0 applies
            // hit scope when selecting an attachment, but does not recompute
            // its remaining reserve from the source's current talent rank.
            if(record) {
                bool matches=true;
                for(const char* kind:{"scope_damage","scope_node"}) {
                    const auto value=field(f,kind);
                    if(value.empty())continue;
                    if(!scope_match)return RAVEN_INVALID;
                    const auto result=scope_match(context,kind,value.c_str(),record);
                    if(result==RAVEN_INVALID)return result;
                    if(result!=RAVEN_FOUND){matches=false;break;}
                }
                if(!matches)continue;
            }
            if(!endpoints)return RAVEN_FOUND;
            auto profile=raven::imported_talents();
            static const raven::TalentBindings literals({});
            const auto level=field(f,"level");
            raven::HarmingOperand operand(level.empty()?"0":level,profile?*profile:literals);
            float values[2];
            for(unsigned i=0;i<2;++i)
                if(operand.evaluate_active(read,valid,resolve,context,system,handle,
                    talents,0,null_handle,(double)i,&values[i])!=raven::TalentResult::evaluated||
                   !std::isfinite(values[i]))return RAVEN_INVALID;
            // RNG and mutable capacity belong to the guest lifecycle adapter,
            // never this shared definition snapshot. Commit both or neither.
            endpoints[0]=values[0];endpoints[1]=values[1];return RAVEN_FOUND;
        }
        return RAVEN_MISSING;
    }catch(const std::exception& e) {
        std::fprintf(stderr,"[RAVEN RESERVE ERROR] definition=%08X: %s\n",definition,e.what());
        return RAVEN_INVALID;
    }
}

extern "C" raven_lookup raven_rating_energy_shield(raven_guest_read read,raven_handle_valid valid,
    raven_handle_actor resolve,void *context,uint32_t definition,uint32_t system,
    uint32_t handle,uint32_t talents,uint32_t null_handle,float *factor) {
    // Native149A12 assigns the cache scalar for each eligible declaration.
    // It is neither an additive query nor a product of scale modifiers.
    return rating_query(read,valid,resolve,context,definition,system,handle,talents,
        null_handle,"damage_to_energy",0,nullptr,5,factor);
}
