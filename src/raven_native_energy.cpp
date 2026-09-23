#include "raven_native_energy.h"
#include "raven_event_operands.h"
#include "raven_numeric.h"
#include "raven_imported_talents.h"
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iterator>
#include <memory>
#include <stdexcept>
#include <cmath>
#include <map>

namespace {
// Nodes and events have distinct native lifetimes. Do not share their keys.
std::map<uint32_t,std::string> held_operands;
struct ExplosionOperand {std::string damage;int primary=-1,secondary=-1;};
std::map<uint32_t,ExplosionOperand> explosion_operands;
std::map<uint32_t,uint8_t> projectile_fire_events;
std::map<uint32_t,std::string> lightning_operands;
std::map<uint32_t,std::string> held_chains;
std::map<uint32_t,uint64_t> held_revisions;
uint64_t held_revision=0;
bool diagnostic(){const char *value=std::getenv("XML1_TEST_ENERGY_TALENTS");return value&&*value;}
[[noreturn]] void fail(const char *reason) {
    std::fprintf(stderr,"[RAVEN ENERGY ERROR] %s\n",reason);
    std::fflush(stderr);std::_Exit(4);
}
raven::EventOperands* events() {
    // Prefer the startup-loaded character catalog. The explicit environment
    // resource remains available for isolated fixtures with no installed
    // character catalog; never infer one from XML1's shared_talents file.
    static auto state=[]()->std::unique_ptr<raven::EventOperands> {
        if(auto profile=raven::imported_talents())
            return std::make_unique<raven::EventOperands>(*profile);
        const char *path=std::getenv("XML1_TEST_ENERGY_TALENTS");
        if(!path||!*path)return {};
        std::ifstream file(path,std::ios::binary);
        if(!file)throw std::runtime_error("Cannot open energy talent catalog");
        std::string bytes((std::istreambuf_iterator<char>(file)),{});
        return std::make_unique<raven::EventOperands>(raven::TalentBindings(
            raven::load_talents(bytes.data(),(unsigned)bytes.size())));
    }();
    return state.get();
}
}
extern "C" int raven_native_energy_parse(uint32_t event,const char *field,const char *value) {
    try {
        auto state=events();
        if(!state||_stricmp(field,"powerusage"))return 0;
        state->set(event,raven::EventOperand::energy,value);
        if(value[0]!='%')return 0; // Native P2/P3 and literal conversion remain native.
        if(diagnostic())std::fprintf(stderr,"[RAVEN ENERGY BIND] event=%08X value=%s\n",event,value);
        return 1;
    }catch(const std::exception& e){fail(e.what());}
}
extern "C" int raven_native_held_parse(uint32_t node,const char *field,const char *value) {
    if(_stricmp(field,"energypersecond"))return 0;
    try {
        if(!node||!value||!*value)fail("Invalid held-energy operand");
        if(value[0]=='%') {
            auto profile=raven::imported_talents();
            if(!profile)fail("Held-energy symbol requires imported talent catalog");
            profile->bind(value);
        } else {
            char *end=nullptr;double number=std::strtod(value,&end);
            if(!end||*end||!std::isfinite(number))fail("Invalid literal held-energy rate");
        }
        held_operands[node]=value;held_revisions[node]=++held_revision;return 1;
    }catch(const std::exception& e){fail(e.what());}
}
extern "C" int raven_native_held_chain_parse(uint32_t node,const char *action,const char *result) {
    if(!action||_stricmp(action,"samepowerhold"))return 0;
    try {
        if(!node||!result||!*result)fail("Invalid held-power chain");
        // XML1 E25B0 bounds its inline table to 29 actions. Keep the XML2-only
        // declaration outside that table, preserving the declared destination.
        held_chains[node]=result;
        if(diagnostic())std::fprintf(stderr,"[RAVEN HELD CHAIN] node=%08X result=%s\n",node,result);
        return 1;
    }catch(const std::exception& e){fail(e.what());}
}
extern "C" const char *raven_native_held_chain(uint32_t node) {
    auto it=held_chains.find(node);return it==held_chains.end()?nullptr:it->second.c_str();
}
extern "C" void raven_native_held_retire(uint32_t node) {held_operands.erase(node);held_revisions.erase(node);held_chains.erase(node);}
extern "C" uint64_t raven_native_held_revision(uint32_t node) {
    auto it=held_revisions.find(node);return it==held_revisions.end()?0:it->second;
}
extern "C" int raven_native_held_bound(uint32_t node) {return held_operands.count(node)!=0;}
extern "C" int raven_native_held_rate(raven_guest_read read,void *context,uint32_t system,
    uint32_t node,uint32_t actor,int16_t *rate) {
    try {
        auto found=held_operands.find(node);if(found==held_operands.end())return 0;
        double value;
        if(found->second[0]=='%') {
            auto profile=raven::imported_talents();
            if(!profile)fail("Missing held-energy talent catalog");
            auto binding=profile->bind(found->second);float values[2];
            if(binding.evaluate(read,context,system,actor,values)!=raven::TalentResult::evaluated)
                fail("Held-energy rate has no learned actor rank");
            value=values[0];
        } else value=std::strtod(found->second.c_str(),nullptr);
        if(!rate)fail("Missing held-energy output");
        *rate=raven_xml2_energy_short(value);return 1;
    }catch(const std::exception& e){fail(e.what());}
}
extern "C" void raven_native_energy_lifetime(uint32_t event,int kind) {
    lightning_operands.erase(event);
    explosion_operands.erase(event);
    projectile_fire_events.erase(event);
    try {if(auto state=events()) {
        if(diagnostic()&&state->binding(event,raven::EventOperand::max_range))
            std::fprintf(stderr,"[RAVEN RANGE LIFETIME] event=%08X kind=%d\n",event,kind);
        if(kind<2)state->begin(event);else state->retire(event);
    }}
    catch(const std::exception& e){fail(e.what());}
}
extern "C" void raven_lightning_operand_set(uint32_t event,const char *value) {
    if(value)lightning_operands[event]=value;else lightning_operands.erase(event);
}
extern "C" void raven_lightning_operand_copy(uint32_t destination,uint32_t source) {
    auto it=lightning_operands.find(source);
    if(it==lightning_operands.end())lightning_operands.erase(destination);
    else lightning_operands[destination]=it->second;
}
extern "C" int raven_lightning_operand_count(raven_guest_read read,uint32_t system,uint32_t event,uint32_t actor) {
    auto it=lightning_operands.find(event);if(it==lightning_operands.end())return 2;
    try {
        double value;
        if(!it->second.empty()&&it->second[0]=='%') {
            auto profile=raven::imported_talents();if(!profile)fail("Lightning target count requires imported talent catalog");
            auto binding=profile->bind(it->second);float values[2];
            if(binding.evaluate(read,nullptr,system,actor,values)!=raven::TalentResult::evaluated)
                fail("Lightning target count has no actor talent rank");
            value=values[0];
        } else {
            char *end=nullptr;value=std::strtod(it->second.c_str(),&end);
            if(end==it->second.c_str()||!end||*end)fail("Invalid lightning target count");
        }
        if(!std::isfinite(value))fail("Non-finite lightning target count");
        return (int)std::round(std::fmax(0.0,std::fmin(32767.0,value)));
    }catch(const std::exception& e){fail(e.what());}
}
extern "C" void raven_native_energy_copy(uint32_t destination,uint32_t source) {
    auto explosion=explosion_operands.find(source);
    if(explosion==explosion_operands.end())explosion_operands.erase(destination);
    else explosion_operands[destination]=explosion->second;
    auto fire=projectile_fire_events.find(source);
    if(fire==projectile_fire_events.end())projectile_fire_events.erase(destination);
    else projectile_fire_events[destination]=fire->second;
    try {if(auto state=events()) {
        if(diagnostic()&&(state->binding(source,raven::EventOperand::max_range)||
                          state->binding(destination,raven::EventOperand::max_range)))
            std::fprintf(stderr,"[RAVEN RANGE COPY] source=%08X destination=%08X bound=%d\n",
                source,destination,(int)state->binding(source,raven::EventOperand::max_range).has_value());
        state->clone_field(source,destination,raven::EventOperand::energy);
        state->clone_field(source,destination,raven::EventOperand::damage);
        state->clone_field(source,destination,raven::EventOperand::max_range);
        state->clone_field(source,destination,raven::EventOperand::projectile_count);
        state->clone_field(source,destination,raven::EventOperand::spawn_life);
    }}
    catch(const std::exception& e){fail(e.what());}
}
// CCEAtk derives from the action carrying energy; both operands must share
// the same constructor/clone/destructor lifetime, including pool reuse.
extern "C" int raven_native_attack_parse(uint32_t event,const char *value) {
    try {
        auto state=events();if(!state)return 0;
        state->set(event,raven::EventOperand::damage,value);
        return value[0]=='%';
    }catch(const std::exception& e){fail(e.what());}
}
extern "C" int raven_native_projectile_count_parse(uint32_t event,const char *value) {
    try {
        auto state=events();if(!state)return 0;
        state->set(event,raven::EventOperand::projectile_count,value);
        return value[0]=='%';
    }catch(const std::exception& e){fail(e.what());}
}
extern "C" int raven_native_spawn_life_parse(uint32_t event,const char *value) {
    try {
        auto state=events();if(!state)return 0;
        state->set(event,raven::EventOperand::spawn_life,value);
        return value[0]=='%';
    }catch(const std::exception& e){fail(e.what());}
}
extern "C" int raven_native_spawn_life(raven_guest_read read,uint32_t system,uint32_t event,uint32_t actor,float *value) {
    try {
        auto state=events();if(!state)return 0;
        auto binding=state->binding(event,raven::EventOperand::spawn_life);
        if(!binding)return 0;
        float values[2];
        if(binding->evaluate(read,nullptr,system,actor,values)!=raven::TalentResult::evaluated)
            fail("Spawn life has no learned actor rank");
        if(!std::isfinite(values[0])||values[0]<0)fail("Invalid spawn life");
        *value=values[0];return 1;
    }catch(const std::exception& e){fail(e.what());}
}
extern "C" int raven_native_projectile_count(raven_guest_read read,uint32_t system,uint32_t event,uint32_t actor) {
    try {
        auto state=events();if(!state)return -1;
        auto binding=state->binding(event,raven::EventOperand::projectile_count);
        if(!binding)return -1;
        float values[2];
        if(binding->evaluate(read,nullptr,system,actor,values)!=raven::TalentResult::evaluated)
            fail("Projectile count has no learned actor rank");
        if(!std::isfinite(values[0])||values[0]<0||values[0]>255)
            fail("Projectile count cannot fit the native unsigned byte");
        return (int)std::round(values[0]);
    }catch(const std::exception& e){fail(e.what());}
}
extern "C" int raven_native_attack_maxrange_parse(uint32_t event,const char *value) {
    try {
        auto state=events();if(!state)return 0;
        state->set(event,raven::EventOperand::max_range,value);
        if(diagnostic()&&value[0]=='%')
            std::fprintf(stderr,"[RAVEN RANGE BIND] event=%08X value=%s\n",event,value);
        return value[0]=='%';
    }catch(const std::exception& e){fail(e.what());}
}
extern "C" int32_t raven_native_attack_maxrange(raven_guest_read read,void *context,
    uint32_t system,uint32_t event,uint32_t actor,int32_t fallback) {
    try {
        auto state=events();if(!state)return fallback;
        auto binding=state->binding(event,raven::EventOperand::max_range);
        if(!binding)return fallback;
        float values[2];
        if(binding->evaluate(read,context,system,actor,values)!=raven::TalentResult::evaluated)
            fail("Bound attack maxrange has no learned XML1 actor rank");
        if(!std::isfinite(values[0])||values[0]<0||values[0]>32767)
            fail("Imported maxrange cannot fit the native signed range");
        int32_t result=(int32_t)std::round(values[0]);
        if(diagnostic())std::fprintf(stderr,"[RAVEN MAXRANGE] event=%08X actor=%08X native=%d resolved=%d\n",event,actor,fallback,result);
        return result;
    }catch(const std::exception& e){fail(e.what());}
}
extern "C" int raven_native_attack_range(raven_guest_read read,void *context,
    uint32_t system,uint32_t event,uint32_t actor,int32_t *lower,int32_t *upper) {
    try {
        auto state=events();if(!state)return 0;
        auto binding=state->binding(event,raven::EventOperand::damage);
        if(!binding)return 0;
        float values[2];int16_t rounded[2];
        if(binding->evaluate(read,context,system,actor,values)!=raven::TalentResult::evaluated)
            fail("Bound attack damage has no supported learned XML1 actor rank");
        if(!lower||!upper||!raven_xml1_imported_damage_short(values[0],rounded)||
           !raven_xml1_imported_damage_short(values[1],rounded+1))
            fail("Imported attack range cannot fit an XML1 damage record");
        // Resolve only dispatch-local endpoints. Never alter the shared
        // attack descriptor: another actor can use it at a different rank.
        *lower=rounded[0];*upper=rounded[1];return 1;
    }catch(const std::exception& e){fail(e.what());}
}
extern "C" int raven_native_attack_damage_bound(uint32_t event) {
    try {auto state=events();return state&&state->binding(event,raven::EventOperand::damage).has_value();}
    catch(const std::exception& e){fail(e.what());}
}
extern "C" int raven_native_energy_bound(uint32_t event) {
    try {auto state=events();return state&&state->binding(event,raven::EventOperand::energy).has_value();}
    catch(const std::exception& e){fail(e.what());}
}
extern "C" int32_t raven_native_energy_resolve(raven_guest_read read,void *context,
    uint32_t system,uint32_t event,uint32_t actor,int32_t fallback) {
    try {
        auto state=events();if(!state)return fallback;
        auto binding=state->binding(event,raven::EventOperand::energy);
        if(!binding)return fallback;
        // XML1 adapter reads this actor's current native rank on every use.
        // No synthetic rank and no shared guest operand overwrite. XML2's
        // context publication/owner semantics require a separate adapter;
        // non-character/unlearned XML1 contexts fail rather than charge zero.
        float values[2];auto status=binding->evaluate(read,context,system,actor,values);
        if(status!=raven::TalentResult::evaluated)fail("Bound energy has no supported learned XML1 actor rank");
        float lower=values[0];if(!(lower>=-1.0e29f)||!std::isfinite(lower))lower=0;
        int32_t cost=raven_xml2_energy_short(lower);
        if(diagnostic())std::fprintf(stderr,"[RAVEN ENERGY RESOLVE] event=%08X actor=%08X symbol=%s cost=%d native=%d\n",
            event,actor,binding->symbol.c_str(),cost,fallback);
        return cost;
    }catch(const std::exception& e){fail(e.what());}
}

// XML2 F21EB delegates the Explode prefix to EB2B0. Implement the fields
// authored by the original Bishop/Sunfire files, with the same native event
// reset/clone/destruction ownership as their other imported attack operands.
extern "C" int raven_native_explosion_parse(uint32_t event,const char *field,const char *value) {
    if(!event||!field||!value)return 0;
    if(!_stricmp(field,"explodedamage"))explosion_operands[event].damage=value;
    else if(!_stricmp(field,"explodevictimeventtag")||!_stricmp(field,"explodevictimeventtag1"))
        explosion_operands[event].primary=(uint8_t)std::strtol(value,nullptr,10);
    else if(!_stricmp(field,"explodevictimeventtag2"))
        explosion_operands[event].secondary=(uint8_t)std::strtol(value,nullptr,10);
    else return 0;
    return 1;
}
extern "C" int raven_native_explosion_resolve(raven_guest_read read,uint32_t system,uint32_t event,
    uint32_t actor,int16_t *damage,uint8_t *primary,uint8_t *secondary) {
    auto found=explosion_operands.find(event);if(found==explosion_operands.end())return 0;
    if(!damage||!primary||!secondary)fail("Missing explosion output");
    const auto& spec=found->second;
    if(!spec.damage.empty()) {
        float value;
        if(spec.damage[0]=='%') {
            auto profile=raven::imported_talents();if(!profile)fail("Explosion damage requires talent catalog");
            auto binding=profile->bind(spec.damage);float values[2];
            if(binding.evaluate(read,nullptr,system,actor,values)!=raven::TalentResult::evaluated)
                fail("Explosion damage has no actor talent rank");
            if(values[0]!=values[1])fail("Ranged explosion damage requires native range integration");
            value=values[0];
        } else {
            char *end=nullptr;value=std::strtof(spec.damage.c_str(),&end);
            if(end==spec.damage.c_str()||!end||*end)fail("Invalid explosion damage operand");
        }
        if(!raven_xml1_imported_damage_short(value,damage))fail("Explosion damage outside native range");
    }
    // Explosions have their own tags, never inherit direct-hit callbacks.
    *primary=spec.primary<0?0:(uint8_t)spec.primary;
    *secondary=spec.secondary<0?0:(uint8_t)spec.secondary;
    return 1;
}

// XML2 F275F parses the authored fire_event byte at event+48. F19B2
// dispatches it on the originating fight node before projectile spawning.
extern "C" int raven_native_projectile_fire_parse(uint32_t event,const char *value) {
    if(!event||!value)return 0;
    projectile_fire_events[event]=(uint8_t)std::strtol(value,nullptr,10);
    return 1;
}
extern "C" uint8_t raven_native_projectile_fire_tag(uint32_t event) {
    auto found=projectile_fire_events.find(event);
    return found==projectile_fire_events.end()?0:found->second;
}
