#include "raven_event_operands.h"
#include "raven_numeric.h"
#include <cmath>
#include <stdexcept>
namespace raven {
EventDamageRange EventOperands::damage(uint32_t event,const TalentContextValues& values,int16_t context) const {
    auto result=evaluate(event,EventOperand::damage,values,context);
    if(!result.value)return {result.bound,std::nullopt};
    std::array<int16_t,2> endpoints;
    // C3330 requests both cached components through D0950, which validates
    // each independently. Both undergo 228110 signed-qword truncation;
    // 624D0 then sign-extends their low words before float interpolation.
    for(unsigned i=0;i<2;++i) {
        float value=result.value->at(i);
        if(!(value>=-1.0e29f)||!std::isfinite(value))value=0;
        endpoints[i]=raven_xml2_energy_short(value);
    }
    return {true,endpoints};
}
std::optional<TalentBinding> EventOperands::binding(uint32_t event,EventOperand field) const {
    auto found=events_.find(event);
    if(found==events_.end())return std::nullopt;
    auto value=found->second.find(field);
    if(value==found->second.end())return std::nullopt;
    return profile_.bind(value->second);
}
EventEnergy EventOperands::energy(uint32_t event,const TalentContextValues& values,
    int16_t context,std::optional<int16_t> owner) const {
    auto result=evaluate(event,EventOperand::energy,values,context,owner);
    if(!result.value)return {result.bound,std::nullopt};
    // E9D60 calls D0950 with no upper-endpoint output. Its return is the
    // lower cached float, not a random sample or an average of the range.
    // D0950 rejects values below the float at 49E4D0 and non-finite values.
    float lower=result.value->at(0);
    if(!(lower>=-1.0e29f)||!std::isfinite(lower))lower=0;
    return {true,raven_xml2_energy_short(lower)};
}
void EventOperands::begin(uint32_t event) {
    if(!event)throw std::runtime_error("Null event identity");
    events_.erase(event);
}
void EventOperands::retire(uint32_t event) {events_.erase(event);}
void EventOperands::set(uint32_t event,EventOperand field,const std::string& text) {
    if(!event)throw std::runtime_error("Null event identity");
    if(!text.empty()&&text[0]=='%') {
        profile_.bind(text); // Diagnose an unresolved symbol at parse time.
        events_[event][field]=text;
    } else {
        auto it=events_.find(event);
        if(it!=events_.end()) {
            it->second.erase(field);
            if(it->second.empty())events_.erase(it);
        }
    }
}
void EventOperands::clone(uint32_t source,uint32_t destination) {
    if(!source||!destination)throw std::runtime_error("Null event clone identity");
    if(source==destination)return;
    auto it=events_.find(source);
    if(it==events_.end())events_.erase(destination);
    else events_[destination]=it->second;
}
void EventOperands::clone_field(uint32_t source,uint32_t destination,EventOperand field) {
    if(!source||!destination)throw std::runtime_error("Null event clone identity");
    if(source==destination)return;
    // XML1 CFC80 copies action and attack members after separate RTTI
    // checks. The adapter must call this only for a copy that occurred.
    auto it=events_.find(source);
    if(it!=events_.end()) {
        auto item=it->second.find(field);
        if(item!=it->second.end()){events_[destination][field]=item->second;return;}
    }
    set(destination,field,"");
}
EventValue EventOperands::evaluate(uint32_t event,EventOperand field,
    const TalentContextValues& values,int16_t context,std::optional<int16_t> owner) const {
    auto found=events_.find(event);
    if(found==events_.end())return {};
    auto operand=found->second.find(field);
    if(operand==found->second.end())return {};
    // A bound-but-missing context is distinct from an ordinary native
    // operand. The consumer must not silently charge zero or use old data.
    return {true,profile_.resolve(values,operand->second,context,owner)};
}
}
