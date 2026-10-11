#include "engine/powers/raven_power_rotation.h"
#include <stdexcept>
#include <cstring>

namespace raven {
namespace {
uint32_t component_for(raven_guest_read read,void *context,uint32_t actor) {
    unsigned char bytes[4];
    // Same traced XML1 character ownership as evaluate_xml1_actor.
    if(!read||!actor||actor>UINT32_MAX-0x2dbu||
       !read(context,actor+0x2d8,bytes,4))
        throw std::runtime_error("Unreadable rotation actor");
    uint32_t component=uint32_t(bytes[0])|(uint32_t(bytes[1])<<8)|
        (uint32_t(bytes[2])<<16)|(uint32_t(bytes[3])<<24);
    if(!component||component>UINT32_MAX-0x223u)
        throw std::runtime_error("Invalid rotation character component");
    return component;
}
}
std::vector<LearnedPower> xml1_learned_powers(const TalentBindings& catalog,
    raven_guest_read read,void *context,uint32_t system,uint32_t actor) {
    const uint32_t stats=component_for(read,context,actor)+4;
    std::vector<LearnedPower> learned;
    for(const auto& definition:catalog.ordered_definitions()) {
        std::string move,type;
        for(const auto& attr:definition->source.attrs) {
            if(attr.first=="power")move=attr.second;
            if(attr.first=="type")type=attr.second;
        }
        if(move.empty()||type=="passive")continue;
        // XML2's declaration table defaults to attack (1); the other
        // active categories are boost (2) and xtreme (0). Do not reinterpret
        // an unknown mod category as a combat move.
        unsigned category;
        if(type.empty()||type=="attack")category=1;
        else if(type=="boost")category=2;
        else if(type=="xtreme")category=0;
        else continue;
        uint8_t id=255,rank=0;
        auto found=raven_xml1_talent_id(read,context,system,definition->name.c_str(),&id);
        if(found==RAVEN_MISSING)continue;
        if(found!=RAVEN_FOUND)throw std::runtime_error("Invalid rotation talent registry");
        found=raven_xml1_talent_effective_rank(read,context,stats,id,&rank);
        if(found==RAVEN_MISSING)continue; // Another character's definition.
        if(found!=RAVEN_FOUND)throw std::runtime_error("Invalid rotation talent rank");
        if(rank)learned.push_back({std::move(move),category,rank});
    }
    return learned;
}
bool rotate_xml1_power(PowerBindings& bindings,const TalentBindings& catalog,
    raven_guest_read read,void *context,uint32_t system,uint32_t actor,
    unsigned slot,int direction) {
    const auto component=component_for(read,context,actor);
    char character[20];
    if(!read(context,component+0x20c,character,sizeof(character))||
       !std::memchr(character,0,sizeof(character)))
        throw std::runtime_error("Invalid rotation character identity");
    // Stock characters exit before scanning imported definitions or touching
    // their native tier system. Identity comes from the live component.
    if(!bindings.resolve(character,5,true))return false;
    auto learned=xml1_learned_powers(catalog,read,context,system,actor);
    return bindings.rotate(character,learned,slot,direction);
}
}
