#pragma once
#include "raven_talent_binding.h"

namespace raven {
enum class EventOperand { energy, damage, max_range, projectile_count, spawn_life };
struct EventValue {
    bool bound=false;
    std::optional<std::array<float,2>> value;
};
struct EventEnergy {
    bool bound=false;
    std::optional<int16_t> value;
};
struct EventDamageRange {
    bool bound=false;
    std::optional<std::array<int16_t,2>> value;
};
// This stores metadata, never overwrites a shared guest event's numeric fields.
// Native adapters must call begin/retire at verified object lifecycle boundaries.
class EventOperands {
public:
    explicit EventOperands(TalentBindings profile):profile_(std::move(profile)){}
    void begin(uint32_t event);
    void set(uint32_t event,EventOperand field,const std::string& text);
    void clone(uint32_t source,uint32_t destination);
    void clone_field(uint32_t source,uint32_t destination,EventOperand field);
    void retire(uint32_t event);
    std::optional<TalentBinding> binding(uint32_t event,EventOperand field) const;
    EventValue evaluate(uint32_t event,EventOperand field,const TalentContextValues& values,
        int16_t context,std::optional<int16_t> owner=std::nullopt) const;
    EventEnergy energy(uint32_t event,const TalentContextValues& values,
        int16_t context,std::optional<int16_t> owner=std::nullopt) const;
    // XML2's damage range uses this actor's context directly (EB693), unlike
    // the presence-based energy owner fallback. No owner parameter here.
    EventDamageRange damage(uint32_t event,const TalentContextValues& values,int16_t context) const;
private:
    TalentBindings profile_;
    std::map<uint32_t,std::map<EventOperand,std::string>> events_;
};
}
