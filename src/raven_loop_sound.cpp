#include "raven_loop_sound.h"
#include <cmath>
#include <stdexcept>

namespace raven {
void LoopSounds::observe_time(float now) {
    if (!std::isfinite(now)) throw std::invalid_argument("Non-finite loop sound time");
    // A new simulation timeline cannot inherit the previous map's voices.
    if (have_time_ && now < previous_time_) clear();
    previous_time_ = now;
    have_time_ = true;
}
bool LoopSounds::start(uint32_t actor, uint32_t sound, float timeout, float now) {
    if (!std::isfinite(timeout) || !std::isfinite(now + timeout))
        throw std::invalid_argument("Invalid loop sound timeout");
    observe_time(now);
    if (!backend_.actor_valid(actor)) {
        stop(actor, sound);
        return false;
    }
    const Key key{actor, sound};
    auto found = voices_.find(key);
    if (found != voices_.end()) {
        // XML2 86980 / 86A16: matching actor+sound refreshes the deadline;
        // it does not restart the sample or create another sound instance.
        found->second.deadline = now + timeout;
        return true;
    }
    const uint32_t voice = backend_.play(actor, sound);
    if (!voice) return false;
    try { voices_.emplace(key, Voice{voice, now + timeout}); }
    catch (...) { backend_.stop(voice); throw; }
    return true;
}
bool LoopSounds::stop(uint32_t actor, uint32_t sound) {
    auto found = voices_.find({actor, sound});
    if (found == voices_.end()) return false;
    const uint32_t voice = found->second.handle;
    voices_.erase(found);
    backend_.stop(voice);
    return true;
}
void LoopSounds::update(float now) {
    observe_time(now);
    for (auto it = voices_.begin(); it != voices_.end();) {
        const auto actor = it->first.first;
        const auto voice = it->second.handle;
        // XML2 86594..8662D: validate the full actor handle, expire at
        // now >= deadline, otherwise follow the actor's current position.
        if (!backend_.actor_valid(actor) || now >= it->second.deadline) {
            it = voices_.erase(it);
            backend_.stop(voice);
        } else {
            backend_.position(voice, actor);
            ++it;
        }
    }
}
void LoopSounds::clear() {
    while (!voices_.empty()) {
        const auto it = voices_.begin();
        const uint32_t voice = it->second.handle;
        voices_.erase(it);
        backend_.stop(voice);
    }
    have_time_ = false;
}
}
