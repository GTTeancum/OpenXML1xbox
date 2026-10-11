#include "engine/world/raven_extraction_registry.h"
#include <stdexcept>
#include <cstring>

namespace raven {
namespace {
std::string fold(std::string value) {
    // Native XML2 lookup76B50/76BB0 uses case-insensitive string comparison.
    // Do not also rewrite slashes or asset paths: those are authored identities.
    for (char& c : value) if (c >= 'A' && c <= 'Z') c += 'a' - 'A';
    return value;
}
const std::string* attribute(const xml1::XmlNode& node, const char* name) {
    const std::string* result = nullptr;
    for (const auto& attr : node.attrs) if (fold(attr.first) == name) {
        if (result) throw std::runtime_error("Duplicate extraction attribute: " + std::string(name));
        result = &attr.second;
    }
    return result;
}
void put_u32(xml1::BinaryXml& out, uint32_t value) {
    for (unsigned i=0; i<4; ++i) out.push_back((unsigned char)(value >> (8*i)));
}
}
ExtractionRegistry::ExtractionRegistry(const std::vector<xml1::XmlNode>& roots) {
    if (roots.size() != 1 || fold(roots.front().name) != "zoneinfo")
        throw std::runtime_error("Expected one zoneinfo root");
    for (const auto& zone : roots.front().children) {
        if (fold(zone.name) != "zone") continue;
        const auto* extraction = attribute(zone, "extraction");
        if (!extraction || fold(*extraction) != "true") continue;
        const auto* name = attribute(zone, "name");
        if (!name || name->empty() || name->find('\0') != std::string::npos)
            throw std::runtime_error("Extraction point requires a nonempty zone name");
        auto identity = fold(*name);
        if (!keys_.emplace(identity, identity).second)
            throw std::runtime_error("Duplicate extraction zone: " + *name);
    }
}
std::string ExtractionRegistry::identity(const std::string& zone) const {
    auto found = keys_.find(fold(zone));
    return found == keys_.end() ? std::string{} : found->second;
}
void ExtractionRegistry::travel_metadata(const std::string& zone, unsigned char act, bool town_center) {
    if (identity(zone).empty()) throw std::runtime_error("Undeclared extraction travel point");
    for (const auto& point : travel_) if (fold(point.name) == fold(zone))
        throw std::runtime_error("Duplicate extraction travel metadata");
    travel_.push_back({zone, act, town_center});
}
std::string ExtractionRegistry::town_center(unsigned char act) const {
    // Keep authored order and spelling. The canonical unlock key is not an
    // asset path, and the return destination must not be renamed to that key.
    for (const auto& point : travel_)
        if (point.act == act && point.town_center) return point.name;
    return {};
}
bool ExtractionRegistry::unlock(const std::string& zone) {
    auto name = identity(zone);
    if (name.empty()) return false;
    unlocked_.insert(std::move(name));
    return true;
}
bool ExtractionRegistry::is_unlocked(const std::string& zone) const {
    auto name = identity(zone);
    return !name.empty() && unlocked_.count(name) != 0;
}
xml1::BinaryXml ExtractionRegistry::save() const {
    // Adjunct framing only. Never extend the retail variable table or borrow
    // native padding; the eventual guest save section must frame this payload.
    xml1::BinaryXml out{'X','2','E','X','T','R','0','1'};
    if (unlocked_.size() > UINT32_MAX) throw std::runtime_error("Too many extraction identities");
    put_u32(out, (uint32_t)unlocked_.size());
    for (const auto& name : unlocked_) {
        if (name.size() > UINT32_MAX) throw std::runtime_error("Extraction identity too long");
        put_u32(out, (uint32_t)name.size());
        out.insert(out.end(), name.begin(), name.end());
    }
    return out;
}
void ExtractionRegistry::restore(const void* data, size_t length) {
    if (!data && !length) { unlocked_.clear(); return; }
    if (!data || length < 12 || std::memcmp(data, "X2EXTR01", 8))
        throw std::runtime_error("Invalid extraction save header");
    const auto* bytes = (const unsigned char*)data;
    size_t cursor = 8;
    auto read = [&]() {
        if (length-cursor < 4) throw std::runtime_error("Truncated extraction save");
        uint32_t value = 0;
        for (unsigned i=0; i<4; ++i) value |= uint32_t(bytes[cursor++]) << (8*i);
        return value;
    };
    uint32_t count = read();
    if (count > (length-cursor)/5) throw std::runtime_error("Invalid extraction save count");
    std::set<std::string> next;
    for (uint32_t i=0; i<count; ++i) {
        auto size = read();
        if (!size || size > length-cursor) throw std::runtime_error("Invalid extraction identity length");
        std::string name((const char*)bytes+cursor, size); cursor += size;
        if (name.find('\0') != std::string::npos || name != fold(name) || !next.insert(name).second)
            throw std::runtime_error("Invalid/duplicate extraction identity");
    }
    if (cursor != length) throw std::runtime_error("Trailing extraction save bytes");
    unlocked_.swap(next);
}
namespace {
constexpr size_t native_marker_bytes = 52;
constexpr char section_magic[] = "XML1EXT";
bool end_marker(const unsigned char* bytes, size_t length) {
    // XML1 6E880 writes newline + 50-byte formatted label + newline.
    // Validate the boundary before allowing 6E920 to consume it on load.
    constexpr char label[] = "[SAVEGAMEEND:";
    return length >= native_marker_bytes && bytes[0] == '\n' &&
        bytes[51] == '\n' && !std::memcmp(bytes+1, label, sizeof(label)-1);
}
}
size_t ExtractionRegistry::write_campaign_section(void* destination, size_t capacity) const {
    // Retail 70350 emits the trailing marker after all subsystem saves. Reserve
    // its bytes here; do not borrow the cursor/label storage at stream+2FC00.
    // Its admission checks use <, not <=, so leave one byte beyond the marker.
    constexpr size_t reserved = native_marker_bytes+1;
    if (capacity < reserved) throw std::runtime_error("No room for campaign end marker");
    if (unlocked_.empty()) return 0; // Stock/untouched campaigns stay byte-identical.
    auto payload = save();
    if (!destination || payload.size() > UINT32_MAX || capacity-reserved < 12 ||
        payload.size() > capacity-reserved-12)
        throw std::runtime_error("Extraction campaign section exceeds save capacity");
    auto* out = (unsigned char*)destination;
    std::memcpy(out, section_magic, 8);
    uint32_t size = (uint32_t)payload.size();
    for (unsigned i=0; i<4; ++i) out[8+i] = (unsigned char)(size >> (8*i));
    std::memcpy(out+12, payload.data(), payload.size());
    return 12+payload.size();
}
size_t ExtractionRegistry::read_campaign_section(const void* source, size_t available) {
    if (!source) throw std::runtime_error("Missing campaign end boundary");
    const auto* in = (const unsigned char*)source;
    if (end_marker(in, available)) { restore(nullptr, 0); return 0; }
    if (available < 12 || std::memcmp(in, section_magic, 8))
        throw std::runtime_error("Invalid extraction campaign section");
    uint32_t size = 0;
    for (unsigned i=0; i<4; ++i) size |= uint32_t(in[8+i]) << (8*i);
    if (size > available-12 || !end_marker(in+12+size, available-12-size))
        throw std::runtime_error("Invalid extraction campaign section boundary");
    restore(in+12, size); // Transactional, after framing and native marker validation.
    return 12+size;
}
}
