#include "raven_native_damage.h"
#include "raven_damage_records.h"
#include "raven_native_energy.h"
#include "raven_imported_talents.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <stdexcept>

namespace {
thread_local unsigned imported_depth=0;
bool tracing() {
    static const bool active=[] {
        const char* value=std::getenv("XML1_TEST_DAMAGE_TRANSPORT");
        return value&&!std::strcmp(value,"1");
    }();
    return active;
}
bool enabled() {return imported_depth||tracing();}
struct NativeFrame { uint32_t site,frame; raven::DamageRecords::Scope token; };
struct State {
    raven::DamageRecords records;
    std::vector<NativeFrame> frames;
    unsigned roots=0,copies=0,seeds=0,modifiers=0,observations=0,contexts=0,bonuses=0;
};
thread_local State state;
// Provenance outlives the integer rounding of XML2's imported damage range.
// Track only the active attack record; no per-recipient guest data is retained.
thread_local std::vector<uint32_t> imported_area_roots;
[[noreturn]] void fail(const char* reason) {
    std::fprintf(stderr,"[RAVEN DAMAGE TRANSPORT ERROR] %s\n",reason);
    std::fflush(stderr);std::_Exit(4);
}
}
extern "C" uint64_t raven_native_damage_import_begin(uint32_t event,uint32_t actor,uint32_t record,float amount) {
    try {
        if(!record)throw std::logic_error("Imported damage has no record");
        const auto token=state.records.enter();
        state.frames.push_back({0xffffffffu,record,token});
        state.records.bind(record,{event,actor,amount,true});
        ++imported_depth;return token;
    }catch(const std::exception& e){fail(e.what());}
}
extern "C" void raven_native_damage_import_end(uint64_t token) {
    try {
        if(!imported_depth||state.frames.empty()||state.frames.back().site!=0xffffffffu||
           state.frames.back().token!=token)throw std::logic_error("Imported damage lifetime mismatch");
        state.records.leave(token);state.frames.pop_back();--imported_depth;
    }catch(const std::exception& e){fail(e.what());}
}
extern "C" int raven_native_damage_import_value(uint32_t record,float *amount) {
    if(!amount||!imported_depth)return 0;
    const auto value=state.records.get(record);
    if(!value||!value->imported)return 0;
    *amount=value->amount;return 1;
}
extern "C" int raven_native_damage_imported_event(uint32_t record) {
    return record&&!imported_area_roots.empty()&&imported_area_roots.back()==record;
}
extern "C" double raven_native_damage_amount(uint32_t record,int32_t native_amount) {
    float imported;
    return raven_native_damage_import_value(record,&imported)?(double)imported:(double)native_amount;
}
extern "C" void raven_native_damage_enter(uint32_t site,uint32_t frame) {
    if(site==0xCFDC0 && raven_imported_talents_active())imported_area_roots.push_back(0);
    if(!enabled())return;
    // Two verified synchronous origins: CCEAtk and the native timed bleed
    // callback. Other attack-manager origins still require a traced lifetime.
    const bool root=site==0xCFDC0||site==0x2CE70;
    if(!root&&state.frames.empty())return;
    try {
        const auto token=state.records.enter();
        state.frames.push_back({site,frame,token});
        if(root)++state.roots;
    }catch(const std::exception& e){fail(e.what());}
}
extern "C" void raven_native_damage_leave(uint32_t site,uint32_t frame) {
    if(site==0xCFDC0 && !imported_area_roots.empty())imported_area_roots.pop_back();
    if(!enabled()||state.frames.empty())return;
    try {
        const auto top=state.frames.back();
        if(top.site!=site||top.frame!=frame)
            throw std::logic_error("Native damage frame did not match its entry");
        state.records.leave(top.token);state.frames.pop_back();
        if(tracing()&&(site==0xCFDC0||site==0x2CE70)&&state.roots<=128)
            std::fprintf(stderr,"[RAVEN DAMAGE TRANSPORT RETIRE] frame=%08X depth=%zu roots=%u seeds=%u copies=%u site=%08X\n",
                frame,state.records.depth(),state.roots,state.seeds,state.copies,site);
    }catch(const std::exception& e){fail(e.what());}
}
extern "C" void raven_native_damage_seed(uint32_t event,uint32_t actor,uint32_t record,int32_t amount) {
    if(!imported_area_roots.empty()&&raven_native_attack_damage_bound(event))
        imported_area_roots.back()=record;
    if(!enabled()||state.frames.empty())return;
    try {
        // Audit seed only: the unmodified native sample proves origin/copy
        // lifetime. This is not an XML2 operand result and is never read back
        // into guest damage. Only explicitly hooked modifiers are mirrored.
        state.records.bind(record,{event,actor,(float)amount});++state.seeds;
    }catch(const std::exception& e){fail(e.what());}
}
extern "C" void raven_native_damage_copy(uint32_t source,uint32_t destination) {
    if(!enabled()||state.frames.empty())return;
    try {
        state.records.copy(source,destination);
        if(auto value=state.records.get(destination)) {
            if(tracing()&&++state.copies<=128)
                std::fprintf(stderr,"[RAVEN DAMAGE TRANSPORT COPY] source=%08X destination=%08X event=%08X actor=%08X amount=%.9g depth=%zu\n",
                    source,destination,value->event,value->actor,(double)value->amount,state.records.depth());
        }
    }catch(const std::exception& e){fail(e.what());}
}
extern "C" void raven_native_damage_clear(uint32_t record) {
    if(!enabled()||state.frames.empty())return;
    try {state.records.clear(record);}catch(const std::exception& e){fail(e.what());}
}
extern "C" void raven_native_damage_copy_back(uint32_t source,uint32_t destination) {
    if(!enabled()||state.frames.empty())return;
    try {state.records.copy_back(source,destination);}catch(const std::exception& e){fail(e.what());}
}
namespace {
void adjust(uint32_t site,uint32_t record,double operand,int32_t native_before,int operation) {
    if(!enabled()||state.frames.empty())return;
    try {
        auto value=state.records.get(record);if(!value)return;
        const float result=(float)(operation==1?(double)value->amount*operand:
            operation==2?(double)value->amount+operand:operand);
        state.records.update(record,result);
        if(tracing()&&++state.modifiers<=256)
            std::fprintf(stderr,"[RAVEN DAMAGE MODIFIER] site=%08X record=%08X op=%s operand=%.9g native_before=%d transported_before=%.9g transported_after=%.9g\n",
                site,record,operation==1?"multiply":operation==2?"add":"set",operand,native_before,(double)value->amount,(double)result);
    }catch(const std::exception& e){fail(e.what());}
}
}
extern "C" void raven_native_damage_scale(uint32_t site,uint32_t record,double factor,int32_t native_before) {
    adjust(site,record,factor,native_before,1);
}
extern "C" void raven_native_damage_set(uint32_t site,uint32_t record,double amount,int32_t native_before) {
    adjust(site,record,amount,native_before,0);
}
extern "C" void raven_native_damage_add(uint32_t site,uint32_t record,double amount,int32_t native_before) {
    adjust(site,record,amount,native_before,2);
}
extern "C" void raven_native_damage_observe(uint32_t site,uint32_t record,int32_t native_amount) {
    if(!enabled()||state.frames.empty())return;
    try {
        auto value=state.records.get(record);if(!value)return;
        // Never repair an untraced modifier with the ratio between two
        // observed integers. That would destroy fractional behavior and hide
        // missing branches. Report the divergence for consumer tracing.
        if(tracing()&&++state.observations<=256)
            std::fprintf(stderr,"[RAVEN DAMAGE CHECKPOINT] site=%08X record=%08X native=%d transported=%.9g\n",
                site,record,native_amount,(double)value->amount);
    }catch(const std::exception& e){fail(e.what());}
}
extern "C" void raven_native_damage_context(uint32_t site,uint32_t record,int32_t native_amount,int32_t working,double multiplier,double subtraction) {
    if(!enabled()||state.frames.empty())return;
    try {
        auto value=state.records.get(record);if(!value)return;
        // The character keeps a separate integer accumulator at context+94.
        // Observe it without replacing the still-live record seen by callbacks.
        if(tracing()&&++state.contexts<=256)
            std::fprintf(stderr,"[RAVEN DAMAGE CONTEXT] site=%08X record=%08X native=%d working=%d multiplier=%.9g subtraction=%.9g transported=%.9g\n",
                site,record,native_amount,working,multiplier,subtraction,(double)value->amount);
    }catch(const std::exception& e){fail(e.what());}
}
extern "C" void raven_native_damage_bonus(uint32_t site,uint32_t record,int32_t sample,double scale,int32_t flat,int32_t stat) {
    if(!enabled()||state.frames.empty())return;
    try {
        auto value=state.records.get(record);if(!value)return;
        // stat=-1 means this probe precedes the optional actor-stat lookup.
        // This observes operands; it neither resamples RNG nor invokes callbacks.
        if(tracing()&&++state.bonuses<=256)
            std::fprintf(stderr,"[RAVEN DAMAGE BONUS] site=%08X record=%08X sample=%d scale=%.9g flat=%d stat=%d transported=%.9g\n",
                site,record,sample,scale,flat,stat,(double)value->amount);
    }catch(const std::exception& e){fail(e.what());}
}
