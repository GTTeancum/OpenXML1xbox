#include "raven_talent_context.h"
#include <cmath>
#include <stdexcept>

namespace raven {
void TalentContextValues::clear() { values_.clear(); }
void TalentContextValues::populate(int16_t context,const TalentDefinition& definition,
    const std::map<std::string,uint16_t>& ids,std::optional<unsigned> rank) {
    if(rank&&(*rank<1||*rank>255))throw std::runtime_error("Invalid talent population rank");
    // CEC10 publishes evaluated pairs through D0E20; its explicit FF reset
    // branch at CED7B publishes zero pairs, retaining presence. Do not erase
    // these entries: that would change owner fallback at E9EA0.
    auto next=*this;
    for(const auto& item:definition.values) {
        auto id=ids.find(item.first);
        if(id==ids.end())throw std::runtime_error("Unregistered talent value: "+item.first);
        float pair[2]={0,0};
        if(rank&&!definition.evaluate(item.first,*rank,pair))
            throw std::runtime_error("Cannot evaluate talent value: "+item.first);
        next.set(context,id->second,pair[0],pair[1]);
    }
    values_.swap(next.values_);
}
void TalentContextValues::set(int16_t context,uint16_t value,float lower,float upper) {
    if(!value||value>0x7fff)throw std::runtime_error("Invalid tagged talent value ID");
    if(!std::isfinite(lower)||!std::isfinite(upper))
        throw std::runtime_error("Nonfinite talent context value");
    // XML2 D0E20 writes endpoint zero, then either writes endpoint one or
    // erases it when both values compare equal. Assignment replaces the
    // whole entry, so an earlier range cannot leak into a later scalar.
    values_[{context,value}]={lower,lower==upper?std::nullopt:std::optional<float>(upper)};
}
void TalentContextValues::erase_context(int16_t context) {
    for(auto it=values_.lower_bound({context,0});it!=values_.end()&&it->first.first==context;)
        it=values_.erase(it);
}
bool TalentContextValues::contains(int16_t context,uint16_t value) const {
    return values_.find({context,value})!=values_.end();
}
std::optional<std::array<float,2>> TalentContextValues::get(int16_t context,uint16_t value) const {
    auto it=values_.find({context,value});
    if(it==values_.end())return std::nullopt;
    return std::array<float,2>{it->second.lower,it->second.upper.value_or(it->second.lower)};
}
std::optional<std::array<float,2>> TalentContextValues::get_with_owner(
    int16_t context,std::optional<int16_t> owner,uint16_t value) const {
    // E9EA0 -> D0AF0 tests presence, not magnitude or talent rank. Only an
    // absent value permits fallback; zero is an owned value. The native
    // adapter must validate/resolve the owner handle before passing it here.
    auto result=get(context,value);
    return result||!owner?result:get(*owner,value);
}
}
