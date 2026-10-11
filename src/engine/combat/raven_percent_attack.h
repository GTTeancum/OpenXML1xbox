#pragma once
#include "engine/combat/raven_harming_operand.h"
#include "engine/powers/raven_powerup_metadata.h"

namespace raven {
struct PercentAttackValues {
    float chance, percent;
    bool self_only;
};
// Owned authored operands; actor rank is resolved anew for each invocation.
class PercentAttackOperands {
public:
    PercentAttackOperands(const PowerupFields&,const TalentBindings&);
    TalentResult evaluate_active(raven_guest_read,raven_handle_valid,
        raven_handle_actor,void*,uint32_t system,uint32_t handle,
        uint32_t talents,uint32_t null_handle,PercentAttackValues*) const;
private:
    HarmingOperand chance_,percent_;
    bool self_only_;
};
std::optional<PercentAttackOperands> bind_xml1_percent_attack(
    uint32_t definition,const TalentBindings&);
}
