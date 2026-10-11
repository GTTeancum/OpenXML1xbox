#pragma once
#include <cstddef>
#include <cstdint>
#include <map>
#include <optional>
#include <vector>

namespace raven {
struct DamageValue {
    uint32_t event;
    uint32_t actor;
    float amount;
    bool imported=false; // Only explicitly imported hits may drive float consumers.
};

// Per-execution-context transport for synchronous native damage records.
// Guest addresses are reused between attacks and recipient callbacks. A copy
// belongs to the scope that made it, not forever to its numerical address.
// Adapters must bracket VERIFIED lifetimes; queued/persistent records require
// a separate ownership path. This class does not read or write guest memory.
class DamageRecords {
public:
    using Scope = uint64_t;
    Scope enter();
    void leave(Scope scope);
    void bind(uint32_t record, DamageValue value);
    void copy(uint32_t source, uint32_t destination);
    // Explicit native output write: update the frame that owns destination.
    // Ordinary copies remain local; only traced copy-back sites use this.
    void copy_back(uint32_t source,uint32_t destination);
    bool update(uint32_t record, float amount);
    void clear(uint32_t record);
    std::optional<DamageValue> get(uint32_t record) const;
    std::size_t depth() const noexcept { return scopes_.size(); }
private:
    struct Frame {
        Scope token;
        // An empty value masks an outer binding: copying an ordinary XML1
        // record must not inherit an XML2 value at a recycled destination.
        std::map<uint32_t, std::optional<DamageValue>> records;
    };
    Frame& current(uint32_t record);
    Scope next_ = 0;
    std::vector<Frame> scopes_;
};
}
