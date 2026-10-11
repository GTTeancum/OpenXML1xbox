#include "engine/powers/raven_power_bindings.h"
#include <set>
#include <stdexcept>
#include <cstring>

namespace raven {
std::string rotate_power(const std::array<std::string,4>& selected,
    const std::vector<LearnedPower>& learned,unsigned slot,int direction) {
    if(slot>=selected.size()||(direction!=1&&direction!=-1))
        throw std::invalid_argument("Invalid power rotation slot/direction");
    // Recovered XML2 00110BC0 filters learned ranks, category and assignments
    // to other slots. 00110B30 then advances/wraps; an absent current entry
    // chooses the first candidate, and an empty list preserves the current.
    static constexpr unsigned categories[]={1,1,2,0};
    std::vector<const std::string*> eligible;
    std::set<std::string> seen;
    for(const auto& power:learned) {
        if(!power.rank||power.category!=categories[slot]||power.move.empty())continue;
        if(power.move.size()>19||power.move.find('\0')!=std::string::npos)
            throw std::invalid_argument("Power rotation move exceeds native name capacity");
        bool occupied=false;
        for(unsigned i=0;i<selected.size();++i)
            if(i!=slot&&selected[i]==power.move)occupied=true;
        if(!occupied&&seen.insert(power.move).second)eligible.push_back(&power.move);
    }
    if(eligible.empty())return selected[slot];
    for(size_t i=0;i<eligible.size();++i)if(*eligible[i]==selected[slot]) {
        const size_t next=direction>0?(i+1)%eligible.size():
            (i?i-1:eligible.size()-1);
        return *eligible[next];
    }
    return *eligible.front();
}
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
    defaults=entries;
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
bool PowerBindings::rotate(const std::string& character,const std::vector<LearnedPower>& learned,
    unsigned slot,int direction) {
    auto found=entries.find(character);
    if(found==entries.end())return false; // Stock characters retain their native system.
    auto next=rotate_power(found->second,learned,slot,direction);
    if(next==found->second[slot])return false;
    found->second[slot]=std::move(next);
    return true;
}
PowerBindings::Selections PowerBindings::changes() const {
    Selections result;
    for(const auto& entry:entries)
        if(entry.second!=defaults.at(entry.first))result.insert(entry);
    return result;
}
void PowerBindings::restore(const Selections& changes) {
    auto next=defaults;
    for(const auto& entry:changes) {
        auto found=next.find(entry.first);
        if(found==next.end())throw std::runtime_error("Saved power selection names an unavailable imported character: "+entry.first);
        for(const auto& move:entry.second)
            if(move.size()>19||move.find('\0')!=std::string::npos)
                throw std::runtime_error("Saved power selection exceeds native move-name capacity");
        found->second=entry.second;
    }
    entries=std::move(next); // A rejected load never leaves a partial selection state.
}
void PowerBindings::reset(){entries=defaults;}
std::vector<unsigned char> PowerBindings::save() const {
    const auto selected=changes();
    if(selected.size()>254)throw std::runtime_error("Too many saved power selections");
    std::vector<unsigned char> bytes(2+selected.size()*100,0);
    bytes[0]=static_cast<unsigned char>(selected.size());
    size_t offset=2;
    for(const auto& entry:selected) {
        if(entry.first.empty()||entry.first.size()>19||entry.first.find('\0')!=std::string::npos)
            throw std::runtime_error("Saved character name exceeds native capacity");
        std::memcpy(bytes.data()+offset,entry.first.data(),entry.first.size());offset+=20;
        for(const auto& move:entry.second) {
            std::memcpy(bytes.data()+offset,move.data(),move.size());offset+=20;
        }
    }
    return bytes;
}
void PowerBindings::load(const void *data,size_t size) {
    if(!data||size<2)throw std::runtime_error("Truncated power selection save");
    const auto* bytes=static_cast<const unsigned char*>(data);
    const unsigned count=bytes[0]|(unsigned(bytes[1])<<8);
    if(count>254||size!=2+size_t(count)*100)
        throw std::runtime_error("Invalid power selection save size");
    size_t offset=2;
    auto string=[&]() {
        const auto* begin=bytes+offset;
        const auto* end=static_cast<const unsigned char*>(std::memchr(begin,0,20));
        if(!end)throw std::runtime_error("Unterminated saved power selection");
        for(const auto* tail=end;tail!=begin+20;++tail)
            if(*tail)throw std::runtime_error("Invalid power selection padding");
        offset+=20;
        return std::string(reinterpret_cast<const char*>(begin),size_t(end-begin));
    };
    Selections selected;
    for(unsigned i=0;i<count;++i) {
        auto name=string();Slots slots;
        for(auto& move:slots)move=string();
        if(name.empty()||!selected.emplace(name,std::move(slots)).second)
            throw std::runtime_error("Missing or duplicate saved power character");
    }
    restore(selected); // Validate everything before changing the live state.
}
}
