#pragma once
#include "engine/resources/xmlb.h"
#include <map>
#include <set>
#include <string>

namespace raven {
// Only XML2's additional extraction declarations enter this registry. Ordinary
// XML1 zone metadata and its native loading/save-name consumer are untouched.
class ExtractionRegistry {
public:
    explicit ExtractionRegistry(const std::vector<xml1::XmlNode>& roots);
    // Empty means no declared extraction point. This owned identity is NOT a
    // native game-variable name: that store admits only 11-byte names/16 slots.
    std::string identity(const std::string& zone) const;
    // Metadata is resolved by the native parser, then copied before its tree
    // is destroyed. First authored town center for an act wins (76C10).
    void travel_metadata(const std::string& zone, unsigned char act, bool town_center);
    std::string town_center(unsigned char act) const;
    bool unlock(const std::string& zone);
    bool is_unlocked(const std::string& zone) const;
    xml1::BinaryXml save() const;
    // Exact, separately framed payload; malformed input leaves state intact.
    // (nullptr,0) clears adjunct state when loading a legacy save/new campaign.
    // Unknown saved identities survive round trips but cannot unlock an
    // undeclared zone. This avoids losing mod state when definitions change.
    void restore(const void* data, size_t length);
    // Campaign boundary immediately before the native 52-byte SAVEGAMEEND
    // marker. Return consumed/written bytes, never include the native marker.
    size_t write_campaign_section(void* destination, size_t capacity) const;
    size_t read_campaign_section(const void* source, size_t available);
    size_t size() const { return keys_.size(); }
private:
    std::map<std::string, std::string> keys_;
    std::set<std::string> unlocked_;
    struct TravelPoint { std::string name; unsigned char act; bool town_center; };
    std::vector<TravelPoint> travel_;
};
}
