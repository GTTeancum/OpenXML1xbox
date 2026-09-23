#include "raven_actor_talent.h"

namespace raven {
TalentResult evaluate_xml1_actor(const TalentDefinition& definition,
    const std::string& symbol,raven_guest_read read,void *context,
    uint32_t talent_system,uint32_t actor,float output[2]) {
    if(!read||!actor||!output)return TalentResult::invalid_state;
    if(definition.values.find(symbol)==definition.values.end())return TalentResult::unknown_value;
    uint8_t id=255,rank=255;
    auto lookup=raven_xml1_talent_id(read,context,talent_system,definition.name.c_str(),&id);
    if(lookup==RAVEN_MISSING)return TalentResult::unknown_talent;
    if(lookup!=RAVEN_FOUND)return TalentResult::invalid_state;
    // XML1 00046000 -> 000801F0: actor+0x2D8 is the character component;
    // the stats object starts at component+4. Verified against native rank
    // reads during gameplay. Do not use actor+0x2F4 (attack component).
    uint8_t bytes[4];
    if(actor>UINT32_MAX-0x2DBu||!read(context,actor+0x2D8,bytes,4))return TalentResult::invalid_state;
    uint32_t component=(uint32_t)bytes[0]|((uint32_t)bytes[1]<<8)|
                       ((uint32_t)bytes[2]<<16)|((uint32_t)bytes[3]<<24);
    if(!component||component>UINT32_MAX-4)return TalentResult::invalid_state;
    lookup=raven_xml1_talent_rank(read,context,component+4,id,&rank);
    if(lookup==RAVEN_MISSING)return TalentResult::unlearned;
    if(lookup!=RAVEN_FOUND)return TalentResult::invalid_state;
    if(!rank)return TalentResult::unlearned;
    // XML1 rank remains 0..15. Supporting XML2 ranks 16+ requires its own
    // migrated rank/persistence path; never truncate such a rank into XML1.
    float evaluated[2];
    if(!definition.evaluate(symbol,rank,evaluated))return TalentResult::invalid_state;
    output[0]=evaluated[0];output[1]=evaluated[1];
    return TalentResult::evaluated;
}
}
