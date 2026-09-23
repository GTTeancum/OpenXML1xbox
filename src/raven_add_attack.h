#pragma once
#include "raven_harming_operand.h"
#include "raven_powerup_metadata.h"
namespace raven {
struct AddAttackValues {
    float percentage;
    int16_t flat;
    bool mirror;
    std::string damage_type; // Empty: native unspecified damage type.
};
class AddAttackOperands {
public:
    AddAttackOperands(const PowerupFields& fields,const TalentBindings& bindings);
    TalentResult evaluate_active(raven_guest_read read,raven_handle_valid valid,
        raven_handle_actor resolve,void *context,uint32_t powerup_system,
        uint32_t active_handle,uint32_t talent_system,uint32_t null_handle,
        double percentage_random,double flat_random,AddAttackValues *out) const;
private:
    HarmingOperand percentage_,flat_;
    bool mirror_;
    std::string damage_type_;
};
std::optional<AddAttackOperands> bind_xml1_add_attack(uint32_t definition,const TalentBindings& bindings);
}
