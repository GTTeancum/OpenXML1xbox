#include "raven_loop_sound.h"
#include <cstdio>
#include <limits>
#include <map>
#include <set>
#include <stdexcept>
#include <vector>

static void check(bool ok, const char* message) {
    if (!ok) throw std::runtime_error(message);
}
struct Backend : raven::LoopSoundBackend {
    std::set<uint32_t> actors{0xA01, 0xB01, 0xA02};
    std::map<uint32_t, std::pair<uint32_t, uint32_t>> active;
    std::vector<uint32_t> stopped;
    unsigned plays = 0, positions = 0;
    uint32_t next = 1;
    bool fail = false;
    bool actor_valid(uint32_t actor) override { return actors.count(actor) != 0; }
    uint32_t play(uint32_t actor, uint32_t sound) override {
        ++plays;
        if (fail) return 0;
        const auto handle = next++;
        active.emplace(handle, std::make_pair(actor, sound));
        return handle;
    }
    void position(uint32_t voice, uint32_t actor) override {
        check(active.at(voice).first == actor, "Position changed another actor's voice");
        ++positions;
    }
    void stop(uint32_t voice) override {
        check(active.erase(voice) == 1, "Voice stopped twice or not owned");
        stopped.push_back(voice);
    }
};
int main() { try {
    Backend b;
    raven::LoopSounds loops(b);
    for (int i = 0; i < 17; ++i) {
        const float now = float(i) * .3f;
        check(loops.start(0xA01, 8, 1.5f, now), "Held loop start/refresh failed");
        loops.update(now);
    }
    check(b.plays == 1 && b.positions == 17, "Repeated hold created duplicate voices");
    loops.update(6.29f);
    check(loops.size() == 1, "Loop expired before refreshed timeout");
    loops.update(6.31f);
    check(loops.size() == 0 && b.stopped.size() == 1, "Released loop failed to expire");
    check(loops.start(0xA01, 8, 1.5f, 7), "Loop failed to restart after release");
    check(loops.start(0xA02, 8, 1.5f, 7), "Second actor failed");
    check(loops.start(0xA01, 9, 1.5f, 7), "Second sound failed");
    check(loops.stop(0xA01, 8) && !loops.stop(0xA01, 8), "Explicit stop not scoped/idempotent");
    check(loops.size() == 2, "Explicit stop removed another loop");
    b.actors.erase(0xA01);
    loops.update(7.1f);
    check(loops.size() == 1, "Deleted actor retained a voice");
    check(loops.start(0xB01, 8, 1, 7.1f), "Reused actor slot failed");
    check(!loops.stop(0xA01, 8) && loops.size() == 2, "Stale generation stopped replacement actor");
    loops.update(0);
    check(loops.size() == 0 && b.active.empty(), "Timeline reset retained voices");
    b.fail = true;
    check(!loops.start(0xB01, 8, 1, 0) && loops.size() == 0, "Failed play cached invalid handle");
    b.fail = false;
    check(loops.start(0xB01, 8, 0, 0), "Zero timeout start failed");
    loops.update(0);
    check(loops.size() == 0, "Deadline equality must expire");
    const auto before = b.plays;
    check(!loops.start(0xDEAD, 8, 1, 0) && b.plays == before, "Invalid actor reached playback");
    bool rejected = false;
    try { loops.start(0xB01, 8, std::numeric_limits<float>::infinity(), 0); }
    catch (const std::invalid_argument&) { rejected = true; }
    check(rejected, "Non-finite timeout accepted");
    loops.start(0xB01, 8, 1, 0);
    loops.clear(); loops.clear();
    check(b.active.empty(), "Explicit cleanup retained a voice");
    std::puts("PASS loop sound refresh, expiry, stop, ownership, generation reuse, reset and failed playback");
    return 0;
} catch (const std::exception& e) { std::fprintf(stderr, "FAIL: %s\n", e.what()); return 1; } }
