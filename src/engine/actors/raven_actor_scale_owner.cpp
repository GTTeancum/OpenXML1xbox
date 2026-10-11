#include "engine/actors/raven_actor_scale_owner.h"
#include <atomic>
#include <mutex>
#include <unordered_map>

namespace {
struct OwnedScale { uint32_t generation; raven_actor_scale_snapshot value; };
std::mutex scale_mutex;
std::unordered_map<uint32_t,OwnedScale> scale_owners;
std::atomic<bool> any_scale_owners{false};
uint64_t scale_revision=0;
}
extern "C" void raven_actor_scale_owner_begin(uint32_t actor,uint32_t generation,
    float current,float requested,float seconds,unsigned clearance) {
    if(!actor)return;
    std::lock_guard<std::mutex> lock(scale_mutex);
    auto &entry=scale_owners[actor];
    entry.generation=generation;
    raven_actor_scale_begin(&entry.value.scale,current,requested,seconds,clearance);
    entry.value.revision=++scale_revision;
    any_scale_owners.store(true,std::memory_order_release);
}
extern "C" int raven_actor_scale_owner_read(uint32_t actor,uint32_t generation,
    raven_actor_scale_snapshot *snapshot) {
    /* Ordinary stock actors do not pay a lock or create a map entry. */
    if(!snapshot||!any_scale_owners.load(std::memory_order_acquire))return 0;
    std::lock_guard<std::mutex> lock(scale_mutex);
    auto it=scale_owners.find(actor);
    if(it==scale_owners.end()||it->second.generation!=generation)return 0;
    *snapshot=it->second.value;return 1;
}
extern "C" int raven_actor_scale_owner_commit(uint32_t actor,uint32_t generation,
    raven_actor_scale_snapshot *snapshot) {
    if(!snapshot||!any_scale_owners.load(std::memory_order_acquire))return 0;
    std::lock_guard<std::mutex> lock(scale_mutex);
    auto it=scale_owners.find(actor);
    if(it==scale_owners.end()||it->second.generation!=generation||
       it->second.value.revision!=snapshot->revision)return 0;
    it->second.value.scale=snapshot->scale;
    it->second.value.revision=++scale_revision;
    snapshot->revision=it->second.value.revision;
    return 1;
}
extern "C" void raven_actor_scale_owner_rate(uint32_t actor,uint32_t generation,float rate) {
    if(!actor)return;
    std::lock_guard<std::mutex> lock(scale_mutex);
    auto &entry=scale_owners[actor];
    if(!entry.value.revision||entry.generation!=generation) {
        // XML2 actor initialization supplies requested=1 and inactive state.
        // The powerup writes velocity (150A18/150A65), not the active flag.
        entry.generation=generation;
        entry.value.scale={1.0f,0.0f,0,0};
    }
    entry.value.scale.rate=rate;
    entry.value.revision=++scale_revision;
    any_scale_owners.store(true,std::memory_order_release);
}
extern "C" void raven_actor_scale_owner_invalidate(uint32_t actor,uint32_t generation,int removing) {
    if(!actor)return;
    std::lock_guard<std::mutex> lock(scale_mutex);
    auto &entry=scale_owners[actor];
    if(!entry.value.revision||entry.generation!=generation) {
        entry.generation=generation;
        entry.value.scale={1.0f,0.0f,0,0};
    }
    // XML2 scale_factor affecter 1445FC/14469C calls actor virtual+1DC
    // (30DC0). Removal additionally clears velocity at 1446A2. Neither
    // operation overwrites the script's requested multiplier or clearance.
    entry.value.scale.active=1;
    if(removing)entry.value.scale.rate=0;
    entry.value.revision=++scale_revision;
    any_scale_owners.store(true,std::memory_order_release);
}
extern "C" void raven_actor_scale_owner_reset(uint32_t actor) {
    if(!any_scale_owners.load(std::memory_order_acquire))return;
    std::lock_guard<std::mutex> lock(scale_mutex);
    scale_owners.erase(actor);
    any_scale_owners.store(!scale_owners.empty(),std::memory_order_release);
}
