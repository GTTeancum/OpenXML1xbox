#pragma once
#include "engine/resources/xmlb.h"
#include <array>
#include <map>
#include <string>
#include <vector>

namespace raven {
// Categories passed by XML2 00110BC0, in combat-slot order: 1,1,2,0.
// Pass the actor's effective learned rank, not a menu preview rank.
struct LearnedPower {
    std::string move;
    unsigned category;
    unsigned rank;
};
// Pure selection: the caller owns per-character state and decides whether
// gameplay input may act. No actor-address cache or implicit slot mutation.
std::string rotate_power(const std::array<std::string,4>& selected,
    const std::vector<LearnedPower>& learned,unsigned slot,int direction=1);

// XML2 C7AC0/C7B50: four per-character bindings. These are host metadata;
// never overlay XML2's larger character layout onto an XML1 stats object.
class PowerBindings {
public:
    using Slots=std::array<std::string,4>;
    using Selections=std::map<std::string,Slots>;
    explicit PowerBindings(const std::vector<xml1::XmlNode>& roots);
    const std::string* resolve(const std::string& character, unsigned action,
        bool default_chain) const;
    bool rotate(const std::string& character,const std::vector<LearnedPower>& learned,
        unsigned slot,int direction=1);
    // Save identities are character and move names, never recycled actor
    // addresses or runtime talent IDs. Only changes to defaults are saved.
    Selections changes() const;
    void restore(const Selections& changes);
    void reset();
    // Bounded, little-endian save extension: u16 count followed by fixed
    // character[20], move[4][20] records. No host pointers or runtime IDs.
    std::vector<unsigned char> save() const;
    void load(const void *bytes,size_t size);
private:
    Selections defaults,entries;
};
}
