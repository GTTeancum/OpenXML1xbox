#pragma once
#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif
/* Masks are resolved in XML1's native identifier space by the guest adapter.
 * No XML2 enum IDs are copied into an XML1 hit record. */
typedef struct raven_remove_events_rules {
    uint32_t damage_types,damage_mods,attack_types;
    int no_remove;
} raven_remove_events_rules;
typedef struct raven_remove_events_config {
    raven_remove_events_rules rules;
    uint32_t combat_node,shared_powerup;
    int random_finisher;
} raven_remove_events_config;
/* Native guest adapter; reads only explicitly authored remove_on_events. */
int raven_xml1_remove_events_config(uint32_t definition,raven_remove_events_config* out);
const char* raven_xml1_remove_events_finisher(uint32_t holder);
unsigned raven_xml1_remove_events_actions(uint32_t definition,uint32_t holder,uint32_t record);
int raven_xml1_remove_events_finisher_fixture(uint32_t actor);
void raven_xml1_remove_events_clear_pending(uint32_t index);
void raven_xml1_remove_events_reset_pending(void);
void raven_xml1_remove_events_deliver(uint32_t context);
void raven_xml1_remove_events_hurt(uint32_t instance,uint32_t record);
int raven_xml1_remove_events_queue_shared(uint32_t holder,uint32_t record,const char* tag);
int raven_xml1_remove_events_queue_reaction(uint32_t holder,uint32_t record);
int raven_xml1_remove_events_queue_fixture(uint32_t instance,uint32_t actor,uint32_t scratch);
void (*raven_xml1_remove_events_fixture_lookup(uint32_t address))(void);
int raven_xml1_remove_events_shared(uint32_t target,uint32_t source,const char* tag);
int raven_xml1_remove_events_detach(uint32_t instance);
int raven_xml1_remove_events_detach_fixture(uint32_t instance,uint32_t actor,uint32_t scratch);

enum { RAVEN_REMOVE_EVENT_REMOVE=1, RAVEN_REMOVE_EVENT_REACT=2 };
/* Caller resolves authored combat-node/random-finisher selection. The
 * recursive_reaction flag is the native hit's secondary-reaction marker. */
unsigned raven_remove_events_decide(const raven_remove_events_rules* rules,
    uint32_t damage_type,uint32_t damage_mod,uint32_t attack_bit,
    int node_matches,int recursive_reaction,int synthetic_reaction);
#ifdef __cplusplus
}
#endif
