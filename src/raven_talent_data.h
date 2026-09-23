#pragma once
#include "xmlb.h"
#include "raven_talent_curve.h"
#include <map>
#include <array>
#include <optional>

namespace raven {
// Per-title values.xmlb data, never a process-global XML1/XML2 mixture.
using TalentConstants = std::map<std::string, std::array<float, 2>>;
// Declaration decoding only. Runtime dispatch and scope eligibility belong
// to the selected title's adapter; these IDs must never index XML1's table.
struct AffecterDeclaration {
    xml1::XmlNode source;
    std::string attribute;
    std::optional<uint8_t> attribute_id=0;
    std::string level="0";
    uint8_t mode=0; // Native 0/add, 1/scale, 2/max, 3/min.
    uint8_t share_filter=0; // Native 0/default, 1/owner, 2/shared.
    std::vector<std::pair<std::string,std::string>> scopes;
    std::vector<std::pair<std::string,std::string>> unhandled;
};
AffecterDeclaration read_xml2_affecter(const xml1::XmlNode& node);
std::optional<uint8_t> xml2_affecter_attribute(const std::string& name);
// Scope_damage/damageType declarations OR their masks; the test uses any
// overlapping bit. nullopt means another scope still needs its consumer.
std::optional<bool> xml2_damage_scope_matches(const AffecterDeclaration& declaration,
                                            uint32_t damage_flags);
bool xml2_share_filter_matches(uint8_t filter,bool enabled,bool owner_matches);
TalentConstants load_talent_constants(const void *bytes, unsigned length);
// XML2 D3BF0 literal branch. References belong to the binding registry.
std::array<float,2> read_xml2_literal(const std::string& text,
                                    const TalentConstants *constants=nullptr);
struct TalentDefinition {
    std::string name;
    // Original descriptions, power names, rank counts, prerequisites and
    // passive powerups stay together. The game adapter must consume them;
    // this reader does not rewrite XML2 ranks into XML1's power tiers.
    xml1::XmlNode source;
    std::map<std::string,std::vector<raven_talent_point>> values;
    bool evaluate(const std::string& symbol, unsigned rank, float output[2]) const;
};

// Load one XML2 talent resource. Numeric literals (scalar or pair) are
// supported. Named constants require an explicit values.xmlb table;
// unsupported/missing values fail explicitly, never silently becoming zero.
std::vector<TalentDefinition> load_talents(const void *bytes, unsigned length,
                                        const TalentConstants *constants=nullptr);
}
