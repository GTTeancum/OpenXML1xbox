#pragma once
#include "engine/progression/raven_talent_binding.h"
#include "engine/powers/raven_power_bindings.h"

namespace raven {
// Snapshot the actor's live learned powers; never cache recycled native IDs,
// actor pointers or ranks. Missing/unloaded declarations are not candidates.
// Invalid state throws before a caller can mutate the active selection.
std::vector<LearnedPower> xml1_learned_powers(const TalentBindings& catalog,
    raven_guest_read read,void *context,uint32_t system,uint32_t actor);
bool rotate_xml1_power(PowerBindings& bindings,const TalentBindings& catalog,
    raven_guest_read read,void *context,uint32_t system,uint32_t actor,
    unsigned slot,int direction=1);
}
