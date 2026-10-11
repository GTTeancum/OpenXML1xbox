#pragma once
#include "engine/combat/raven_harming_operand.h"
#include "engine/powers/raven_powerup_metadata.h"

namespace raven {
struct AbsorbValues {
    float chance, damage_percent;
    bool sponsor, energy, inflicted;
    std::string beam_effect;
};
// Own the authored fields independently of guest definition storage. Actor
// handles/lifetimes remain the callback's responsibility; never cache ranks.
class AbsorbOperands {
public:
    AbsorbOperands(const PowerupFields&,const TalentBindings&);
    bool sponsor() const { return sponsor_; }
    TalentResult evaluate(raven_guest_read,void*,uint32_t talent_system,
        uint32_t recipient_actor,uint32_t source_actor,AbsorbValues*) const;
private:
    HarmingOperand chance_,percentage_;
    bool sponsor_,energy_,inflicted_;
    std::string beam_;
};
std::optional<AbsorbOperands> bind_xml1_absorb(uint32_t,const TalentBindings&);
}
