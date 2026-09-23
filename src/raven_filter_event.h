#pragma once
#include <stdint.h>
#include "raven_xml1_talent_view.h"
#ifdef __cplusplus
extern "C" {
#endif
typedef struct raven_filter_event {
    uint8_t pass_tag,fail_tag,max_danger,flags;
    uint32_t team_filter;
} raven_filter_event;
typedef struct raven_filter_target {
    uint32_t team;
    int skirmish,character_path,is_actor;
    /* Original noboss predicate: entity handle equals the selected handle
     * (null sentinel in multiplayer). This is NOT a boss character class. */
    int is_boss,is_nonhumanoid;
    float danger;
} raven_filter_target;
/* XML2 CCEFilterEvent decision only. The XML1 adapter must resolve live target
 * properties and dispatch the selected tag through its native event owner.
 * Tag0 means no dispatch, not successful execution. No actor is cached here. */
/* Translate the result of native XML1 GetTeam (26E60), including charm.
 * Input is that getter's closed range 26..29, not raw entity flags. */
uint32_t raven_filter_event_xml1_team(uint32_t native_team);
/* Character definition field required by XML2 filterhumanoid. */
int raven_character_filter_parse(volatile uint8_t *flags,const char *key,const char *value);
void raven_filter_event_init(raven_filter_event *event);
/* Copies subtype fields after the adapter validates source event type and
 * invokes XML1 base copying. Reserved destination flag bits remain owned there. */
void raven_filter_event_copy(raven_filter_event *destination,const raven_filter_event *source);
/* Returns one for a consumed XML2 field; zero requires native base parsing. */
int raven_filter_event_parse(raven_filter_event *event,const char *key,const char *value);
/* Read live XML1 CharacterDef via actor+2D8. Only danger/skeleton outputs
 * change, and only after both reads succeed; unreadable state is not a pass. */
/* Requires native CMultiplayer initialization; rejects uninitialized state.
 * Implements noboss via setDefaultTarget's handle, never class identity. */
int raven_filter_xml1_default_target(raven_guest_read read,void *context,uint32_t actor,raven_filter_target *target);
int raven_filter_xml1_character(raven_guest_read read,void *context,uint32_t actor,raven_filter_target *target);
uint8_t raven_filter_event_tag(const raven_filter_event *event,const raven_filter_target *target);
#ifdef __cplusplus
}
#endif
