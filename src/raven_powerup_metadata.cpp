#include "raven_powerup_metadata.h"
#include <mutex>
#include <set>
#include <stdexcept>
#include <cstdio>
#include <cstdlib>
#include <cstring>

namespace {
struct State {
    std::mutex mutex;
    std::set<uint32_t> shared_copies;
    std::map<uint32_t,raven::PowerupFields> definitions;
    std::map<uint32_t,raven::PowerupEffects> effects;
    std::map<uint32_t,raven::PowerupAffecters> affecters;
    std::map<uint32_t,uint32_t> effect_scopes;
};
State& state(){static State value;return value;}
bool share_matches_role(const raven::PowerupFields& fields,bool recipient,float radius) {
    auto it=fields.find("share_filter");
    if(it==fields.end())return true;
    // XML2 143910 applies owner/shared filtering only while sharing is active.
    // XML1 recipient definitions have radius cleared by 2AEC9, so retain their
    // explicit clone role instead of guessing from source/target handles.
    if(!recipient&&!(radius>0))return true;
    std::string value=it->second;
    for(char& c:value)if(c>='A'&&c<='Z')c=char(c-'A'+'a');
    if(value=="owner")return !recipient;
    if(value=="shared")return recipient;
    return true;
}
// C ABI callbacks must not unwind through recompiled guest stack frames.
[[noreturn]] void fail() {
    std::fputs("[RAVEN POWERUP ERROR] Definition metadata lifecycle failed\n",stderr);
    std::fflush(stderr);std::abort();
}
}
namespace raven {
void xml1_powerup_effects_bind(uint32_t definition,PowerupEffects effects) {
    if(!definition)throw std::invalid_argument("Null effect definition");
    auto& s=state();std::lock_guard<std::mutex> lock(s.mutex);
    if(effects.empty()) {
        s.effects.erase(definition);
        s.effect_scopes.erase(definition);
    }
    else s.effects.insert_or_assign(definition,std::move(effects));
}
PowerupEffects xml1_powerup_effects_snapshot(uint32_t definition) {
    auto& s=state();std::lock_guard<std::mutex> lock(s.mutex);
    auto it=s.effects.find(definition);
    return it==s.effects.end()?PowerupEffects{}:it->second;
}
PowerupAffecters xml1_powerup_affecters_snapshot(uint32_t definition) {
    auto& s=state();std::lock_guard<std::mutex> lock(s.mutex);
    auto it=s.affecters.find(definition);
    return it==s.affecters.end()?PowerupAffecters{}:it->second;
}
void xml1_powerup_metadata_bind(uint32_t definition,PowerupFields fields) {
    if(!definition)throw std::invalid_argument("Null powerup definition");
    auto& s=state();std::lock_guard<std::mutex> lock(s.mutex);
    s.shared_copies.erase(definition);
    if(fields.empty())s.definitions.erase(definition);
    else s.definitions.insert_or_assign(definition,std::move(fields));
}
std::optional<PowerupFields> xml1_powerup_metadata_snapshot(uint32_t definition) {
    auto& s=state();std::lock_guard<std::mutex> lock(s.mutex);
    auto it=s.definitions.find(definition);
    if(it==s.definitions.end())return std::nullopt;
    return it->second; // Never expose storage invalidated by native callbacks.
}
}
extern "C" void raven_xml1_powerup_metadata_reset(uint32_t definition) {
    try {
        auto& s=state();std::lock_guard<std::mutex> lock(s.mutex);
        s.shared_copies.erase(definition);
        s.definitions.erase(definition);
        s.affecters.erase(definition);
        s.effects.erase(definition);
        s.effect_scopes.erase(definition);
    }catch(...){fail();}
}
extern "C" void raven_xml1_powerup_metadata_clone(uint32_t destination,uint32_t source) {
    try {
        if(source==destination)return;
        auto& s=state();std::lock_guard<std::mutex> lock(s.mutex);
        if(s.shared_copies.count(source))s.shared_copies.insert(destination);
        else s.shared_copies.erase(destination);
        auto it=s.definitions.find(source);
        if(it==s.definitions.end())s.definitions.erase(destination);
        else s.definitions.insert_or_assign(destination,it->second);
        // Native 955B7 is a completed definition copy. Own a separate copy of
        // every nested declaration before the source can be retired/reused.
        auto af=s.affecters.find(source);
        if(af==s.affecters.end())s.affecters.erase(destination);
        else s.affecters.insert_or_assign(destination,af->second);
        auto fx=s.effects.find(source);
        if(fx==s.effects.end())s.effects.erase(destination);
        else s.effects.insert_or_assign(destination,fx->second);
        auto scope=s.effect_scopes.find(source);
        if(scope==s.effect_scopes.end())s.effect_scopes.erase(destination);
        else s.effect_scopes.insert_or_assign(destination,scope->second);
    }catch(...){fail();}
}
extern "C" void raven_xml1_powerup_metadata_retire(uint32_t definition) {
    raven_xml1_powerup_metadata_reset(definition);
}
extern "C" void raven_xml1_powerup_effects_clear(uint32_t definition) {
    try {raven::xml1_powerup_effects_bind(definition,{});}catch(...){fail();}
}
extern "C" void raven_xml1_powerup_effect_scope(uint32_t definition,uint32_t scope) {
    try {
        auto& s=state();std::lock_guard<std::mutex> lock(s.mutex);
        // 94FE0 receives the owning native package scope, not a constant.
        // Only imported nested declarations need additional scope storage.
        if(s.effects.count(definition))s.effect_scopes.insert_or_assign(definition,scope);
    }catch(...){fail();}
}
extern "C" int raven_xml1_powerup_effect_scope_get(uint32_t definition,uint32_t *scope) {
    try {
        if(!scope)return 0;
        auto& s=state();std::lock_guard<std::mutex> lock(s.mutex);
        auto found=s.effect_scopes.find(definition);
        if(found==s.effect_scopes.end())return 0;
        *scope=found->second;return 1;
    }catch(...){fail();}
}
extern "C" uint32_t raven_xml1_powerup_effect_begin(uint32_t definition) {
    try {
        if(!definition)fail();
        auto& s=state();std::lock_guard<std::mutex> lock(s.mutex);
        auto& effects=s.effects[definition];
        effects.emplace_back();return static_cast<uint32_t>(effects.size()-1);
    }catch(...){fail();}
}
extern "C" void raven_xml1_powerup_effect_attribute(uint32_t definition,uint32_t index,const char *key,const char *value) {
    try {
        if(!key||!value)fail();
        std::string name(key);
        for(char& c:name)if(c>='A'&&c<='Z')c=char(c-'A'+'a');
        auto& s=state();std::lock_guard<std::mutex> lock(s.mutex);
        auto found=s.effects.find(definition);
        if(found==s.effects.end()||index>=found->second.size())fail();
        found->second[index].insert_or_assign(std::move(name),value);
        if(getenv("XML1_TRACE_HARMING"))
            std::fprintf(stderr,"[RAVEN SPECIAL FX] definition=%08X index=%u %s=%s\n",definition,index,key,value);
    }catch(...){fail();}
}
extern "C" uint32_t raven_xml1_powerup_affecter_begin(uint32_t definition) {
    try {
        if(!definition)fail();
        auto& s=state();std::lock_guard<std::mutex> lock(s.mutex);
        auto& affecters=s.affecters[definition];
        affecters.emplace_back();return static_cast<uint32_t>(affecters.size()-1);
    }catch(...){fail();}
}
extern "C" void raven_xml1_powerup_affecter_attribute(uint32_t definition,uint32_t index,const char *key,const char *value) {
    try {
        if(!key||!value)fail();
        std::string name(key);
        for(char& c:name)if(c>='A'&&c<='Z')c=char(c-'A'+'a');
        auto& s=state();std::lock_guard<std::mutex> lock(s.mutex);
        auto found=s.affecters.find(definition);
        if(found==s.affecters.end()||index>=found->second.size())fail();
        found->second[index].insert_or_assign(std::move(name),value);
        if(getenv("XML1_TRACE_HARMING"))
            std::fprintf(stderr,"[RAVEN AFFECTER] definition=%08X index=%u %s=%s\n",definition,index,key,value);
    }catch(...){fail();}
}
extern "C" void raven_xml1_powerup_metadata_attribute(uint32_t definition,const char *key,const char *value) {
    if(!definition||!key||!value)return;
    // Attribute order is not significant: damage may precede class. Retain
    // operand text, including percent references, without evaluating it in
    // the loader's context. Native life parsing remains authoritative for XML1.
    try {
        // XML2 14E9A0 compares names through case-insensitive 3D66B7.
        // Canonicalize only ASCII field names; keep values byte-for-byte.
        std::string name(key);
        for(char& c:name)if(c>='A'&&c<='Z')c=char(c-'A'+'a');
        if(name!="class"&&name!="damage"&&name!="attacks_per_second"&&
           name!="life"&&name!="share_life"&&name!="share_enemies"&&name!="damagetype"&&name!="use_tint"&&
           name!="use_trait_scale"&&name!="allow_non_actors"&&name!="remove_on_node_end"&&
           name!="damagepercent"&&name!="damagesum"&&name!="mirror"&&name!="std_enhancement")return;
        // CPUAtkAdd (XML2 14CBC0) resolves these operands in the active
        // owner's context. Keep the symbols through clone/reset; parsing
        // alone must not install a callback or mutate an actor's damage.
        auto& s=state();std::lock_guard<std::mutex> lock(s.mutex);
        s.definitions[definition].insert_or_assign(std::move(name),value);
    }catch(...){fail();}
}
extern "C" int raven_xml1_powerup_remove_on_node_end(uint32_t definition) {
    try {
        auto fields=raven::xml1_powerup_metadata_snapshot(definition);
        if(!fields)return 0;
        auto it=fields->find("remove_on_node_end");
        if(it==fields->end())return 0;
        std::string value=it->second;
        for(char& c:value)if(c>='A'&&c<='Z')c=char(c-'A'+'a');
        return value=="true"||value=="1";
    }catch(...){fail();}
}
static void visit_effects(uint32_t definition,float radius,bool filtered,
    raven_powerup_effect_visitor visitor,void *context) {
    if(!visitor)return;
    try {
        auto effects=raven::xml1_powerup_effects_snapshot(definition);
        bool recipient;
        {auto& s=state();std::lock_guard<std::mutex> lock(s.mutex);recipient=s.shared_copies.count(definition)!=0;}
        // Visitor callbacks may retire the definition. Keep its role with
        // this owned declaration snapshot for the whole synchronous visit.
        for(const auto& fields:effects) {
            if(filtered&&!share_matches_role(fields,recipient,radius))continue;
            auto field=[&](const char *key)->const char* {
                auto it=fields.find(key);
                return it==fields.end()?nullptr:it->second.c_str();
            };
            // Original XML2 special-FX constructor 14BF99/14BF9C sets
            // usage=primary and level=0. Shared powerups commonly omit both.
            // Only absence takes a default; retain explicit unsupported values
            // for the runtime to diagnose instead of silently changing them.
            const char *level=field("fxlevel"),*usage=field("how_used");
            visitor(context,field("effect"),field("bolt"),level?level:"0",usage?usage:"primary");
        }
    }catch(...){fail();}
}

extern "C" int raven_xml1_powerup_share_enemies(uint32_t definition) {
    try {
        auto fields=raven::xml1_powerup_metadata_snapshot(definition);
        if(!fields)return 0;
        auto it=fields->find("share_enemies");
        if(it==fields->end())return 0;
        std::string value=it->second;
        for(char& c:value)if(c>='A'&&c<='Z')c=char(c-'A'+'a');
        return value=="true"||value=="1";
    }catch(...){fail();}
}
extern "C" void raven_xml1_powerup_metadata_shared_copy(uint32_t definition) {
    try {
        auto& s=state();std::lock_guard<std::mutex> lock(s.mutex);
        s.shared_copies.insert(definition);
        auto found=s.definitions.find(definition);
        if(found==s.definitions.end())return;
        auto& fields=found->second;
        auto life=fields.find("share_life");
        if(life==fields.end())fields.erase("life");
        else fields.insert_or_assign("life",life->second);
        // XML1 also clears native radius/life on this copy, preventing a
        // recipient from propagating the original aura a second time.
        fields.erase("share_life");
    }catch(...){fail();}
}

namespace raven {
bool xml1_powerup_share_matches(const PowerupFields& fields,uint32_t definition,float radius) {
    bool recipient;
    {auto& s=state();std::lock_guard<std::mutex> lock(s.mutex);recipient=s.shared_copies.count(definition)!=0;}
    return share_matches_role(fields,recipient,radius);
}
}
extern "C" int raven_xml1_powerup_class_share_matches(uint32_t definition,float radius) {
    try {
        // XML2 definition virtual88 (1543B0) retrieves powerup_scope (91)
        // before providing the class callback. Its share filter is independent
        // of the affecter's damage/node scopes, which are evaluated elsewhere.
        for(const auto& f:raven::xml1_powerup_affecters_snapshot(definition)) {
            auto it=f.find("attribute");if(it==f.end())continue;
            std::string name=it->second;
            for(char& c:name)if(c>='A'&&c<='Z')c=char(c-'A'+'a');
            if(name=="powerup_scope")return raven::xml1_powerup_share_matches(f,definition,radius);
        }
        return 1;
    }catch(...){fail();}
}
extern "C" void raven_xml1_powerup_effects_visit(uint32_t definition,
    raven_powerup_effect_visitor visitor,void *context) {
    visit_effects(definition,0,false,visitor,context);
}
extern "C" void raven_xml1_powerup_effects_visit_shared(uint32_t definition,float radius,
    raven_powerup_effect_visitor visitor,void *context) {
    visit_effects(definition,radius,true,visitor,context);
}
