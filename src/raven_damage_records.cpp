#include "raven_damage_records.h"
#include <limits>
#include <stdexcept>

namespace raven {
DamageRecords::Scope DamageRecords::enter() {
    if(next_ == std::numeric_limits<Scope>::max())
        throw std::overflow_error("Damage scope token exhausted");
    scopes_.push_back({++next_, {}});
    return next_;
}
void DamageRecords::leave(Scope scope) {
    if(scopes_.empty() || scopes_.back().token != scope)
        throw std::logic_error("Damage scopes must retire in call order");
    scopes_.pop_back();
}
DamageRecords::Frame& DamageRecords::current(uint32_t record) {
    if(!record || scopes_.empty())
        throw std::logic_error("Damage record needs an address and live scope");
    return scopes_.back();
}
std::optional<DamageValue> DamageRecords::get(uint32_t record) const {
    if(!record)return std::nullopt;
    for(auto it=scopes_.rbegin();it!=scopes_.rend();++it) {
        auto found=it->records.find(record);
        if(found!=it->records.end())return found->second;
    }
    return std::nullopt;
}
void DamageRecords::bind(uint32_t record, DamageValue value) {
    current(record).records[record]=value;
}
void DamageRecords::copy(uint32_t source,uint32_t destination) {
    auto value=get(source);
    current(destination).records[destination]=value;
}
void DamageRecords::copy_back(uint32_t source,uint32_t destination) {
    auto value=get(source);
    current(destination); // Validate a live lifetime and nonzero destination.
    for(auto it=scopes_.rbegin();it!=scopes_.rend();++it) {
        auto found=it->records.find(destination);
        if(found!=it->records.end()){found->second=value;return;}
    }
    scopes_.back().records[destination]=value;
}
bool DamageRecords::update(uint32_t record,float amount) {
    auto& frame=current(record);
    auto value=get(record);
    if(!value)return false;
    // Recipient modifiers operate on their own copy. A child scope must not
    // mutate an outer attack's amount merely because addresses coincide.
    value->amount=amount;
    frame.records[record]=value;
    return true;
}
void DamageRecords::clear(uint32_t record) {
    current(record).records[record]=std::nullopt;
}
}
