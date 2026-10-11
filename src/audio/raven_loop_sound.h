#pragma once
#include <cstddef>
#include <cstdint>
#include <map>
#include <utility>

namespace raven {
// The native backend owns voices. Actor keys are full generation-bearing
// handles, never entity addresses or masked slot indices.
struct LoopSoundBackend {
    virtual ~LoopSoundBackend() = default;
    virtual bool actor_valid(uint32_t actor) = 0;
    virtual uint32_t play(uint32_t actor, uint32_t sound) = 0;
    virtual void position(uint32_t voice, uint32_t actor) = 0;
    virtual void stop(uint32_t voice) = 0;
};

class LoopSounds {
public:
    explicit LoopSounds(LoopSoundBackend& backend) : backend_(backend) {}
    bool start(uint32_t actor, uint32_t sound, float timeout, float now);
    bool stop(uint32_t actor, uint32_t sound);
    void update(float now);
    void clear();
    std::size_t size() const { return voices_.size(); }
private:
    struct Voice { uint32_t handle; float deadline; };
    using Key = std::pair<uint32_t, uint32_t>;
    std::map<Key, Voice> voices_;
    LoopSoundBackend& backend_;
    bool have_time_ = false;
    float previous_time_ = 0;
    void observe_time(float now);
};
}
