#include "raven_power_bindings.h"
#include <set>
#include <stdexcept>

namespace raven {
PowerBindings::PowerBindings(const std::vector<xml1::XmlNode>& roots) {
    if(roots.size()!=1 || roots[0].name!="characters")
        throw std::runtime_error("Expected herostat characters root");
    std::set<std::string> names;
    for(const auto& node:roots[0].children) {
        if(node.name!="stats")continue;
        std::string name;
        std::array<std::string,4> slots{};
        std::set<std::string> seen;
        bool bound=false;
        for(const auto& attr:node.attrs) {
            const bool slot=attr.first.size()==6 && attr.first.compare(0,5,"power")==0 &&
                attr.first[5]>='1' && attr.first[5]<='4';
            if(attr.first!="name" && !slot)continue;
            if(!seen.insert(attr.first).second)
                throw std::runtime_error("Duplicate character power binding attribute: "+attr.first);
            if(attr.first=="name")name=attr.second;
            else {
                // XML2 copies 20 bytes then writes NUL at byte19. Reject
                // ambiguous truncation rather than dispatch a different move.
                if(attr.second.size()>19 || attr.second.find('\0')!=std::string::npos)
                    throw std::runtime_error("Power binding exceeds native move-name capacity");
                slots[attr.first[5]-'1']=attr.second;
                bound=true;
            }
        }
        if(name.empty() || !names.insert(name).second)
            throw std::runtime_error("Missing or duplicate herostat character name");
        if(bound)entries.emplace(std::move(name),std::move(slots));
    }
}
const std::string* PowerBindings::resolve(const std::string& character,
    unsigned action,bool default_chain) const {
    // XML2 110A42..110A84 substitutes only default action chains5..8.
    // An explicitly named chain must keep its original target.
    if(!default_chain || action<5 || action>8)return nullptr;
    auto found=entries.find(character);
    if(found==entries.end())return nullptr;
    return &found->second[action-5];
}
}
