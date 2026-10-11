#include "engine/scripting/raven_remove_events.h"
unsigned raven_remove_events_decide(const raven_remove_events_rules* rules,
    uint32_t damage_type,uint32_t damage_mod,uint32_t attack_bit,
    int node_matches,int recursive_reaction,int synthetic_reaction) {
    if(!rules)return 0;
    /* XML2 1502DD..1502F1 ignores its synthetic recursive follow-up before
     * evaluating masks. Ordinary marked hits can still remove the effect,
     * but150376 suppresses a second follow-up reaction. */
    if(synthetic_reaction&&recursive_reaction)return 0;
    if(!(rules->damage_types&damage_type)&&!(rules->damage_mods&damage_mod)&&
       !(rules->attack_types&attack_bit)&&!node_matches)return 0;
    return (rules->no_remove?0:RAVEN_REMOVE_EVENT_REMOVE)|
        (recursive_reaction?0:RAVEN_REMOVE_EVENT_REACT);
}
