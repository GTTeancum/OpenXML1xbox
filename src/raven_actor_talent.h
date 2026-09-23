#pragma once
#include "raven_talent_data.h"
#include "raven_xml1_talent_view.h"

namespace raven {
enum class TalentResult { evaluated, unknown_value, unknown_talent, unlearned, invalid_state };
// Evaluate an original XML2 definition using this XML1 actor's actual native
// rank. This is an explicit adapter, not a replacement for global CValues.
// No output is written unless evaluation succeeds. No rank cache is retained:
// actor destruction, pool reuse and rank changes cannot leave stale values.
// The caller must select the definition for the actor's intended game/data
// profile. Matching names across XML1/XML2 do not prove identical powers.
TalentResult evaluate_xml1_actor(const TalentDefinition& definition,
    const std::string& symbol, raven_guest_read read, void *context,
    uint32_t talent_system, uint32_t actor, float output[2]);
}
