#pragma once
#include "raven_actor_talent.h"
#include <memory>
#include "raven_talent_context.h"
#include "raven_xml2_powerup_view.h"

namespace raven {
// A bound operand owns immutable definition data, but never owns/caches an
// actor or rank. Copies remain valid when event descriptors are cloned.
struct TalentBinding {
    std::shared_ptr<const TalentDefinition> definition;
    std::string symbol;
    uint16_t value_id=0;
    TalentResult evaluate(raven_guest_read read, void *context,
        uint32_t system, uint32_t actor, float output[2]) const;
};
// One live instance, in native traversal order. Eligibility and sharing
// booleans must come from the title adapter, never inferred from the roster.
struct AffecterQueryEntry {
    const AffecterDeclaration *declaration;
    bool eligible;
    std::optional<int16_t> context;
    float inherited;
    bool sharing_enabled;
    bool owner_matches;
};
struct AffecterQueryResult {
    std::array<float,2> endpoints;
    unsigned applied=0;
};
struct NativeAffecterQueryResult : AffecterQueryResult {
    bool native_return=false;
    unsigned missing_references=0;
};
// Read-only 15E8C0 collection traversal. Native missing values become zero,
// with a diagnostic count; invalid memory/layout throws. No RNG or mutation.
NativeAffecterQueryResult query_xml2_native_affecters(raven_guest_read read,void *context,
    const raven_xml2_scope_runtime& runtime,uint32_t provider,uint32_t sentinel,
    uint32_t actor,uint8_t attribute,uint8_t mode,uint32_t query);
// Reads actor +21C/+220 and follows validated attached-pool nodes. Cycles
// and unreadable state are errors; a retired/end handle terminates natively.
std::vector<raven_xml2_powerup_node> read_xml2_actor_powerup_list(
    raven_guest_read read,void *context,uint32_t actor);
std::optional<std::vector<raven_xml2_affecter_node>> read_xml2_definition_affecters(
    raven_guest_read read,void *context,uint32_t pool,uint32_t handle);
// Caller establishes live collection membership and supplies both native
// type globals independently. Unsupported/unreadable guest state throws.
AffecterQueryEntry read_xml2_powerup_query_entry(raven_guest_read read,void *context,
    uint32_t manager,uint32_t source_actor_type,uint32_t affecter_actor_type,
    uint32_t sentinel,uint32_t powerup,uint32_t queried_actor,
    const AffecterDeclaration& declaration,bool live,bool sharing_enabled,bool owner_matches);

// One catalog per selected title/data profile. Do not merge XML1 and XML2
// shared_talents by filename or use a process-global last-loaded catalog.
class TalentBindings {
public:
    explicit TalentBindings(std::vector<TalentDefinition> definitions);
    TalentBinding bind(const std::string& operand) const;
    // Resolve a catalog operand's identity in the currently loaded guest
    // registry. No cross-profile ID substitution and no cached guest ID.
    std::optional<uint16_t> native_xml2_value_id(raven_guest_read read,void *context,
        uint32_t provider,const std::string& operand) const;
    // Resolve the current native ID and actor endpoints together; do not cache
    // IDs across native registry rebuilds or substitute shared catalog IDs.
    std::optional<std::array<float,2>> native_xml2_value(raven_guest_read read,void *context,
        uint32_t provider,const std::string& operand,int16_t actor_context) const;
    void populate(TalentContextValues& values,int16_t context,
        const std::string& talent,std::optional<unsigned> rank) const;
    std::optional<std::array<float,2>> resolve(const TalentContextValues& values,
        const std::string& operand,int16_t context,std::optional<int16_t> owner) const;
    // CAffecter 143940 -> 1446C0 -> F6CD0: a nonzero inherited value
    // bypasses reference evaluation. null context represents the native
    // rejected/missing actor, not a missing entry in an otherwise live cache.
    // There is no owner fallback on this path (unlike the energy caller).
    // Reference operands only; literal CValues remain a separate parser path.
    std::optional<std::array<float,2>> resolve_affecter_reference(
        const TalentContextValues& values,const std::string& operand,
        std::optional<int16_t> context,float inherited) const;
    std::optional<std::array<float,2>> resolve_affecter_level(
        const TalentContextValues& values,const AffecterDeclaration& declaration,
        std::optional<int16_t> context,float inherited,
        const TalentConstants *constants=nullptr) const;
    // Composes the traced damage-scope subset of 15E8C0. No RNG is consumed.
    // Missing publication or an unsupported scope returns no result, never
    // a partially accumulated modifier. Native lifecycle is caller-owned.
    std::optional<AffecterQueryResult> query_damage_affecters(
        const TalentContextValues& values,const std::vector<AffecterQueryEntry>& entries,
        uint8_t attribute,uint8_t mode,uint32_t damage_flags,
        const TalentConstants *constants=nullptr) const;
private:
    std::shared_ptr<const void> profile_=std::make_shared<const int>(0);
    std::map<std::string,TalentBinding> symbols_;
    std::map<std::string,std::shared_ptr<const TalentDefinition>> talents_;
    std::map<std::string,uint16_t> ids_;
};
}
