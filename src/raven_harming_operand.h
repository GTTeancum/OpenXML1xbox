#pragma once
#include "raven_talent_binding.h"
#include "raven_harming_settings.h"

namespace raven {
// CPUHarming 14EF58 calls C31A0, not C3330: retain floating endpoints.
// The immutable operand may belong to a shared definition, but its actor's
// rank and random sample must be supplied anew for each eligible tick.
class HarmingOperand {
public:
    HarmingOperand(const std::string& text,const TalentBindings& bindings,
                   const TalentConstants *constants=nullptr);
    TalentResult evaluate(raven_guest_read read,void *context,uint32_t system,
                          uint32_t actor,double random_unit,float *output) const;
    // Resolve XML2 source precedence over an XML1 active slot. valid/resolve
    // must use XML1's current entity handles and eligible actor classification.
    // Never replace a valid non-actor source with the victim's talent rank.
    TalentResult evaluate_active(raven_guest_read read,raven_handle_valid valid,
        raven_handle_actor resolve,void *context,uint32_t powerup_system,
        uint32_t active_handle,uint32_t talent_system,uint32_t queried_actor,
        uint32_t null_handle,double random_unit,float *output) const;
private:
    std::optional<TalentBinding> reference_;
    std::array<float,2> literal_{};
};
// Read metadata captured by XML1's real definition parser. Unrelated native
// definitions stay unbound. Unresolved imported references are explicit errors.
std::optional<HarmingOperand> bind_xml1_harming_damage(uint32_t definition,
    const TalentBindings& bindings,const TalentConstants *constants=nullptr);
std::optional<raven_harming_settings> read_xml1_harming_settings(uint32_t definition);
}
