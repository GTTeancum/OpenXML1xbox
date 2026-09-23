#pragma once
#include <cstdint>
#include <map>
#include <optional>
#include <array>
#include <memory>
#include "raven_talent_data.h"

namespace raven {
// One instance belongs to one title/data profile. Context identifiers are
// explicit engine identities, not host addresses or cached actor pointers.
class TalentContextValues {
public:
    void set(int16_t context, uint16_t value, float lower, float upper);
    void erase_context(int16_t context);
    void clear();
    // IDs come from this profile's registry. nullopt is the native explicit
    // reset operation, not an inferred zero rank or absent character.
    void populate(int16_t context, const TalentDefinition& definition,
        const std::map<std::string,uint16_t>& ids, std::optional<unsigned> rank);
    bool contains(int16_t context, uint16_t value) const;
    std::optional<std::array<float,2>> get(int16_t context, uint16_t value) const;
    std::optional<std::array<float,2>> get_with_owner(int16_t context,
        std::optional<int16_t> owner, uint16_t value) const;
private:
    friend class TalentBindings;
    std::shared_ptr<const void> profile_;
    using Key=std::pair<int16_t,uint16_t>;
    struct Entry { float lower; std::optional<float> upper; };
    std::map<Key,Entry> values_;
};
}
