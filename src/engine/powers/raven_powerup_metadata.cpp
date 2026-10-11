#include "engine/powers/raven_powerup_metadata.h"
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
    std::map<uint32_t,raven::PowerupEffects> triggers;
    std::map<uint32_t,std::vector<std::pair<std::string,std::string>>> removal_rules;
    std::map<uint32_t,uint32_t> effect_scopes;
};
State& state(){static State value;return value;}
bool sound_key(const std::string& key) {
    // Original CPUSound parser151800/table546368. There is no event6 entry.
    return key=="sound_activate"||key=="sound_deactivate"||key=="sound_death"||
        key=="sound_attempt_hit"||key=="sound_damage"||key=="sound_hurt"||
        key=="sound_think"||key=="sound_trail"||key=="sound_touch";
}
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
        s.triggers.erase(definition);
        s.removal_rules.erase(definition);
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
        auto trigger=s.triggers.find(source);
        if(trigger==s.triggers.end())s.triggers.erase(destination);
        else s.triggers.insert_or_assign(destination,trigger->second);
        auto removal=s.removal_rules.find(source);
        if(removal==s.removal_rules.end())s.removal_rules.erase(destination);
        else s.removal_rules.insert_or_assign(destination,removal->second);
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
        // A standalone beam has no nested effect nodes. It still needs the
        // actual package namespace; never fall back to a fixed global scope.
        auto fields=s.definitions.find(definition);
        const bool beam=fields!=s.definitions.end()&&fields->second.count("beameffect")&&
            !fields->second.at("beameffect").empty();
        if(s.effects.count(definition)||beam)s.effect_scopes.insert_or_assign(definition,scope);
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
        // CPURemoveOnEvents150100 ORs each damage/attack declaration.
        // Retain repeated keys and order, including OnCombatNode's sticky
        // randomfinisher flag. A last-value map would silently drop rules.
        if(name=="oncombatnode"||name=="no_remove"||name=="shared_powerup"||
           name.compare(0,12,"ondamagetype")==0||name.compare(0,11,"ondamagemod")==0||
           name.compare(0,12,"onattacktype")==0) {
            auto& s=state();std::lock_guard<std::mutex> lock(s.mutex);
            s.removal_rules[definition].emplace_back(std::move(name),value);
            return;
        }
        // XML2 15F020 removes by CPowerup's interned tag (getter 10FA30).
        // Native parser 154DC0 names its declaration "tag_name", whereas
        // the removal event names its selector "powerup_tag".
        // Keep the authored tag independently of its class, with the owning
        // definition through clone/reset; it is not the combat node's tag.
        if(name!="class"&&name!="tag_name"&&name!="damage"&&name!="attacks_per_second"&&
           name!="life"&&name!="share_life"&&name!="share_enemies"&&name!="damagetype"&&name!="use_tint"&&
           name!="use_trait_scale"&&name!="allow_non_actors"&&name!="remove_on_node_end"&&
           name!="damagepercent"&&name!="damagesum"&&name!="mirror"&&name!="std_enhancement"&&
           name!="percent"&&name!="chance"&&name!="selfonly"&&
           name!="sponsor"&&name!="energy"&&name!="inflicted"&&name!="beameffect"&&
           name!="scaleuprate"&&name!="scaledownrate"&&name!="extra_powerup_shared_tag"&& !sound_key(name))return;
        // CPUAtkAdd (XML2 14CBC0) resolves these operands in the active
        // owner's context. Keep the symbols through clone/reset; parsing
        // alone must not install a callback or mutate an actor's damage.
        auto& s=state();std::lock_guard<std::mutex> lock(s.mutex);
        s.definitions[definition].insert_or_assign(std::move(name),value);
    }catch(...){fail();}
}
extern "C" int raven_xml1_powerup_has_scale_affecter(uint32_t definition,float radius) {
    try {
        for(const auto& fields:raven::xml1_powerup_affecters_snapshot(definition)) {
            auto found=fields.find("attribute");
            if(found==fields.end())continue;
            std::string name=found->second;
            for(char& c:name)if(c>='A'&&c<='Z')c=char(c-'A'+'a');
            if(name=="scale_factor"&&raven::xml1_powerup_share_matches(fields,definition,radius))return 1;
        }
        return 0;
    }catch(...){fail();}
}
extern "C" int raven_xml1_powerup_scale_rates(uint32_t definition,float *up,float *down) {
    if(!up||!down)return 0;
    try {
        auto fields=raven::xml1_powerup_metadata_snapshot(definition);
        if(!fields)return 0;
        auto kind=fields->find("class");
        if(kind==fields->end())return 0;
        std::string name=kind->second;
        for(char& c:name)if(c>='A'&&c<='Z')c=char(c-'A'+'a');
        if(name!="scale_actor")return 0;
        // CPUScaleActor 159750 initializes both rates to +1. Parser 150910
        // uses atof, not the talent operand evaluator. Preserve authored sign:
        // scaledownrate is not implicitly negated or a transition duration.
        auto read=[&](const char *key) {
            auto it=fields->find(key);
            return it==fields->end()?1.0f:static_cast<float>(std::atof(it->second.c_str()));
        };
        *up=read("scaleuprate");*down=read("scaledownrate");return 1;
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
extern "C" int raven_xml1_powerup_identity_visit(uint32_t definition,int tag,
    int (*visitor)(void*,const char*),void *context) {
    if(!definition||!visitor)return 0;
    try {
        auto fields=raven::xml1_powerup_metadata_snapshot(definition);
        if(fields) {
            auto it=fields->find(tag?"tag_name":"class");
            if(it!=fields->end())return visitor(context,it->second.c_str());
        }
        return tag?visitor(context,""):0;
    }catch(...){fail();}
}
extern "C" int raven_xml1_powerup_shared_boost_visit(uint32_t definition,
    int (*visitor)(void*,const char*),void *context) {
    if(!definition||!visitor)return 0;
    try {
        auto fields=raven::xml1_powerup_metadata_snapshot(definition);
        if(!fields)return 0;
        auto kind=fields->find("class"),tag=fields->find("extra_powerup_shared_tag");
        if(kind==fields->end()||tag==fields->end()||tag->second.empty())return 0;
        std::string name=kind->second;
        for(char& c:name)if(c>='A'&&c<='Z')c=char(c-'A'+'a');
        if(name!="boost_when_shared")return 0;
        // Resource parsing/attachment may destroy or replace this definition.
        // The snapshot owns the tag and the metadata mutex is already released.
        return visitor(context,tag->second.c_str());
    }catch(...){fail();}
}
extern "C" uint32_t raven_xml1_powerup_trigger_begin(uint32_t definition) {
    try {
        if(!definition)fail();
        auto& s=state();std::lock_guard<std::mutex> lock(s.mutex);
        auto& entries=s.triggers[definition];entries.emplace_back();return static_cast<uint32_t>(entries.size()-1);
    }catch(...){fail();}
}
extern "C" void raven_xml1_powerup_trigger_attribute(uint32_t definition,uint32_t index,const char* key,const char* value) {
    try {
        if(!key||!value)return;
        std::string name=key;for(char& c:name)if(c>='A'&&c<='Z')c=char(c-'A'+'a');
        if(name!="function"&&name!="triggertag"&&name!="sponsor"&&name!="thirdparty")return;
        auto& s=state();std::lock_guard<std::mutex> lock(s.mutex);
        auto found=s.triggers.find(definition);
        if(found==s.triggers.end()||index>=found->second.size())fail();
        found->second[index][name]=value;
    }catch(...){fail();}
}
extern "C" int raven_xml1_powerup_trigger_get(uint32_t definition,unsigned event,raven_powerup_trigger* out) {
    try {
        static const char* names[]={"activate","deactivate","death","attempt_hit","damage",
            "hurt","hurt_attempt","think","trail","touch"};
        if(!out||event>=10)return 0;
        raven::PowerupEffects entries;
        {auto& s=state();std::lock_guard<std::mutex> lock(s.mutex);
         auto found=s.triggers.find(definition);if(found==s.triggers.end())return 0;entries=found->second;}
        raven_powerup_trigger value={0,0,0};
        //152C70 stores one two-byte entry per event. Later valid entries replace
        // the tag, while absent optional booleans retain their earlier values.
        for(const auto& fields:entries) {
            auto function=fields.find("function"),tag=fields.find("triggertag");
            if(function==fields.end()||tag==fields.end()||_stricmp(function->second.c_str(),names[event]))continue;
            char* end=nullptr;long number=std::strtol(tag->second.c_str(),&end,10);
            if(end==tag->second.c_str()||number<=0)continue;
            value.tag=static_cast<uint8_t>(number);
            auto sponsor=fields.find("sponsor"),third=fields.find("thirdparty");
            if(sponsor!=fields.end())value.sponsor=!_stricmp(sponsor->second.c_str(),"true");
            if(third!=fields.end())value.thirdparty=!_stricmp(third->second.c_str(),"true");
        }
        if(!value.tag)return 0;
        *out=value;return 1;
    }catch(...){fail();}
}
extern "C" int raven_xml1_powerup_sound_visit(uint32_t definition,const char *event,
    int (*visitor)(void*,const char*),void *context) {
    if(!definition||!event||!visitor)return 0;
    try {
        if(!sound_key(event))return 0;
        auto fields=raven::xml1_powerup_metadata_snapshot(definition);
        if(!fields)return 0;
        auto kind=fields->find("class"),sound=fields->find(event);
        if(kind==fields->end()||sound==fields->end()||sound->second.empty())return 0;
        std::string name=kind->second;
        for(char& c:name)if(c>='A'&&c<='Z')c=char(c-'A'+'a');
        if(name!="sound"&&name!="feral_rage")return 0;
        // Keep the authored spelling and own it across resource callbacks.
        // Stock XML1 and other imported classes retain their own callbacks.
        return visitor(context,sound->second.c_str());
    }catch(...){fail();}
}
static void visit_effects(uint32_t definition,float radius,bool filtered,
    raven_powerup_effect_visitor visitor,void *context,int selected_usage=-1,int16_t selected_tag=0) {
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
            if(selected_usage>=0){
                std::string text=usage?usage:"primary";
                for(char& c:text)if(c>='A'&&c<='Z')c=char(c-'A'+'a');
                // Native14ADB0 maps unrecognized explicit usage to custom3.
                const int kind=text=="primary"?0:text=="activation"?1:text=="deactivation"?2:3;
                const char *tag=field("tag");
                // Parser14B659 narrows atoi to a signed short. Constructor
                // 14BF9C defaults tag0 independently of fxlevel at+1A.
                const int16_t number=(int16_t)(uint16_t)(tag?std::strtol(tag,nullptr,10):0);
                if(kind!=selected_usage||number!=selected_tag)continue;
            }
            visitor(context,field("effect"),field("bolt"),level?level:"0",usage?usage:"primary");
        }
    }catch(...){fail();}
}
extern "C" void raven_xml1_powerup_effects_visit_event(uint32_t definition,float radius,
    unsigned usage,int16_t tag,raven_powerup_effect_visitor visitor,void *context) {
    if(usage>3)return;
    visit_effects(definition,radius,true,visitor,context,(int)usage,tag);
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

extern "C" void raven_xml1_powerup_removal_rules_visit(uint32_t definition,
    void (*visitor)(void*,const char*,const char*),void* context) {
    if(!visitor)return;
    try {
        std::vector<std::pair<std::string,std::string>> rules;
        { auto& s=state();std::lock_guard<std::mutex> lock(s.mutex);
          auto found=s.removal_rules.find(definition);
          if(found!=s.removal_rules.end())rules=found->second; }
        // Call outside the lock with owned strings: native resolution may
        // retire or clone the definition while consuming these declarations.
        for(const auto& rule:rules)visitor(context,rule.first.c_str(),rule.second.c_str());
    }catch(...){fail();}
}
