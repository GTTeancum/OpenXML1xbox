#include "engine/actors/raven_leader_definition.h"
#include <array>
#include <map>
#include <mutex>
#include <cstdio>
#include <cstdlib>

namespace {
struct Definitions {std::mutex mutex;std::map<uint32_t,std::array<char,64>> names;};
Definitions& definitions(){static Definitions value;return value;}
[[noreturn]] void fail(){std::fputs("[LEADER DEFINITION ERROR] Metadata ownership failure\n",stderr);std::abort();}
}
extern "C" void raven_leader_definition_reset(uint32_t definition) {
    try {auto& state=definitions();std::lock_guard<std::mutex> lock(state.mutex);state.names.erase(definition);}
    catch(...){fail();}
}
extern "C" void raven_leader_definition_set(uint32_t definition,const char *name) {
    if(!definition||!name)return;
    if(!*name){raven_leader_definition_reset(definition);return;}
    std::array<char,64> copy{};
    for(unsigned i=0;i<63&&name[i];++i)copy[i]=name[i];
    try {auto& state=definitions();std::lock_guard<std::mutex> lock(state.mutex);state.names[definition]=copy;}
    catch(...){fail();}
}
extern "C" int raven_leader_definition_get(uint32_t definition,char name[64]) {
    if(!name)return 0;
    try {
        auto& state=definitions();std::lock_guard<std::mutex> lock(state.mutex);
        auto found=state.names.find(definition);if(found==state.names.end())return 0;
        for(unsigned i=0;i<64;++i)name[i]=found->second[i];return 1;
    }catch(...){fail();}
}
