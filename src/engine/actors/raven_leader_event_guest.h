#pragma once
#include <stdint.h>
/* Uses XML1's scheduler and entity generations. No new clock or timer queue.
 * Scope is supplied by the owning resource; selection is the leader table ID.
 * A live generation is armed only once until explicitly cancelled/reset. */
int xml1_leader_event_schedule(uint32_t handle,uint8_t selection,uint32_t scope);
int xml1_leader_event_restore(uint32_t handle,uint8_t selection,uint32_t scope);
void xml1_leader_event_cancel(uint32_t handle);
void xml1_leader_event_retire_actor(uint32_t actor);
void xml1_leader_event_reset(void);
/* Adjunct to the existing seven-zone cache; never changes native record bytes. */
void xml1_leader_zone_bind(uint32_t native_base);
void xml1_leader_zone_reset(uint32_t native_snapshot);
void xml1_leader_zone_capture(uint32_t actor,uint32_t native_record);
int xml1_leader_zone_selection(uint32_t native_record,uint8_t *selection);
void xml1_leader_zone_save(uint32_t stream,uint32_t native_base);
void xml1_leader_zone_load(uint32_t stream,uint32_t native_base);
int xml1_leader_event_is_code(uint32_t address);
void (*xml1_leader_event_lookup(uint32_t address))(void);
int xml1_leader_event_fixture(uint32_t scratch,uint32_t actor);
