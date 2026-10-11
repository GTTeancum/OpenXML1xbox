#include "engine/actors/raven_character_race.h"
#include <map>
#include <mutex>
#include <cstdio>
#include <cstdlib>
#include <cstring>

namespace {
struct Races { std::mutex mutex; std::map<uint32_t,uint16_t> masks; };
Races& races() { static Races value;return value; }
[[noreturn]] void fail() {
    std::fputs("[CHARACTER RACE ERROR] Metadata ownership failure\n",stderr);
    std::abort();
}
}
extern "C" void raven_character_race_reset(uint32_t definition) {
    try { auto& state=races();std::lock_guard<std::mutex> lock(state.mutex);
        state.masks.erase(definition);
    } catch(...) {fail();}
}
extern "C" int raven_character_race_add(uint32_t definition,const char *name) {
    /* XML2 C7940 / table 5412D8: repeated Race children accumulate flags.
     * Unknown names do not clear earlier flags. No stock hero-name inference. */
    static const char *const names[]={"none","human","mutant","robot","sentinel",
        "morlock","shadow","astral","xmen","brotherhood"};
    if(!definition||!name)return 0;
    char lower[33];unsigned i=0;
    for(;i<32&&name[i];++i)lower[i]=(name[i]>='A'&&name[i]<='Z')?char(name[i]+32):name[i];
    lower[i]=0;
    for(unsigned bit=0;bit<10;++bit)if(!std::strcmp(lower,names[bit])) {
        try {auto& state=races();std::lock_guard<std::mutex> lock(state.mutex);
            state.masks[definition]|=uint16_t(1u<<bit);
        } catch(...) {fail();}
        return 1;
    }
    return 0;
}
extern "C" uint16_t raven_character_race_mask(uint32_t definition) {
    try {auto& state=races();std::lock_guard<std::mutex> lock(state.mutex);
        const auto it=state.masks.find(definition);
        return it==state.masks.end()?0:it->second;
    } catch(...) {fail();}
}
