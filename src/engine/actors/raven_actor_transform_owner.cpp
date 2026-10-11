#include "engine/actors/raven_actor_transform_owner.h"
#include <cstring>
#include <array>
#include <mutex>
#include <string>
#include <unordered_map>
#include <utility>
namespace {
struct Transformation {
    uint32_t generation,category;
    uint64_t revision;
    bool active;
    std::string name,character;
};
std::mutex transform_mutex;
std::unordered_map<uint32_t,Transformation> transformations;
uint64_t revision_counter=0;
struct DefinitionPowers { std::array<std::string,4> names; unsigned present=0; };
std::unordered_map<uint32_t,DefinitionPowers> definition_powers;
}
extern "C" uint64_t raven_actor_transform_capture(uint32_t actor,uint32_t generation,
    uint32_t category,const char *name) {
    if(!actor||!generation||!name||!*name)return 0;
    std::lock_guard<std::mutex> lock(transform_mutex);
    auto found=transformations.find(actor);
    if(found!=transformations.end()&&found->second.generation==generation)
        return found->second.revision;
    /* Own names instead of XML2's fixed per-party-slot arrays. Party reorder
     * and long mod resource paths must not redirect restoration to a teammate.
     * Category stays native XML1 metadata, not a copied XML2 numeric constant. */
    Transformation value{generation,category,++revision_counter,false,name,{}};
    auto inserted=transformations.insert_or_assign(actor,std::move(value));
    return inserted.first->second.revision;
}
extern "C" int raven_actor_transform_read(uint32_t actor,uint32_t generation,
    raven_actor_transform_snapshot *snapshot,char *name,size_t capacity) {
    if(!snapshot)return 0;
    std::lock_guard<std::mutex> lock(transform_mutex);
    auto found=transformations.find(actor);
    if(found==transformations.end()||found->second.generation!=generation)return 0;
    const auto &value=found->second;
    size_t bytes=value.name.size()+1;
    if(name&&capacity<bytes)return 0;
    if(name)std::memcpy(name,value.name.c_str(),bytes);
    *snapshot={value.revision,value.category,value.active?1u:0u,bytes};return 1;
}
extern "C" uint64_t raven_actor_transform_activate(uint32_t actor,uint32_t generation,uint64_t revision,const char *character) {
    if(!character||!*character)return 0;
    std::lock_guard<std::mutex> lock(transform_mutex);
    auto found=transformations.find(actor);
    if(found==transformations.end()||found->second.generation!=generation||
       found->second.revision!=revision)return 0;
    found->second.character=character;
    found->second.active=true;found->second.revision=++revision_counter;
    return found->second.revision;
}
extern "C" int raven_actor_transform_character(uint32_t actor,uint32_t generation,char *name,size_t capacity) {
    if(!name)return 0;
    std::lock_guard<std::mutex> lock(transform_mutex);
    auto found=transformations.find(actor);
    if(found==transformations.end()||found->second.generation!=generation||!found->second.active)return 0;
    const auto &character=found->second.character;
    if(character.empty()||capacity<=character.size())return 0;
    std::memcpy(name,character.c_str(),character.size()+1);return 1;
}
extern "C" uint64_t raven_actor_transform_deactivate(uint32_t actor,uint32_t generation,uint64_t revision) {
    std::lock_guard<std::mutex> lock(transform_mutex);
    auto found=transformations.find(actor);
    if(found==transformations.end()||found->second.generation!=generation||found->second.revision!=revision)return 0;
    if(found->second.active) {
        found->second.active=false;found->second.character.clear();
        found->second.revision=++revision_counter;
    }
    return found->second.revision;
}
extern "C" int raven_actor_transform_forget(uint32_t actor,uint32_t generation,uint64_t revision) {
    std::lock_guard<std::mutex> lock(transform_mutex);
    auto found=transformations.find(actor);
    if(found==transformations.end()||found->second.generation!=generation||
       found->second.revision!=revision)return 0;
    transformations.erase(found);return 1;
}
extern "C" void raven_actor_transform_reset(uint32_t actor) {
    std::lock_guard<std::mutex> lock(transform_mutex);
    transformations.erase(actor);
}

extern "C" int raven_transform_definition_set(uint32_t definition,unsigned slot,const char *name) {
    if(!definition||slot>=4||!name||std::strlen(name)>19)return 0;
    std::lock_guard<std::mutex> lock(transform_mutex);
    auto &entry=definition_powers[definition];
    entry.names[slot]=name;entry.present|=1u<<slot;return 1;
}
extern "C" int raven_transform_definition_get(uint32_t definition,unsigned slot,char name[20]) {
    if(slot>=4||!name)return 0;
    std::lock_guard<std::mutex> lock(transform_mutex);
    auto found=definition_powers.find(definition);
    if(found==definition_powers.end()||!(found->second.present&(1u<<slot)))return 0;
    const auto &value=found->second.names[slot];
    std::memcpy(name,value.c_str(),value.size()+1);return 1;
}
extern "C" void raven_transform_definition_reset(uint32_t definition) {
    std::lock_guard<std::mutex> lock(transform_mutex);
    definition_powers.erase(definition);
}
