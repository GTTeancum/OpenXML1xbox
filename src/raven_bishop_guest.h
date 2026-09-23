#pragma once
#include "raven_bishop_drain.h"
/* Returns whether the new handler selected its follow-up. The caller must
 * invoke the ordinary handler on false. Preserves guest registers/stacks. */
int xml1_bishop_drain_decide(uint32_t actor,
    const raven_bishop_contact_history *history);
void xml1_bishop_contact_reset(uint32_t actor);
void xml1_bishop_contact_record(uint32_t actor,uint32_t target,float time);
int xml1_bishop_contact_snapshot(uint32_t actor,raven_bishop_contact_history *out);
void xml1_bishop_hit_contact(uint32_t context);
void xml1_bishop_trigger_contact(uint32_t trigger,uint32_t recipient_handle);
void xml1_bishop_register(void);
int xml1_bishop_is_code(uint32_t address);
void (*xml1_bishop_lookup(uint32_t address))(void);
int xml1_bishop_registration_fixture(uint32_t pool);

int xml1_block_active(uint32_t actor);
int xml1_block_attack_gate(uint32_t actor,uint32_t record);
void xml1_block_parse_modifier(uint32_t name,uint32_t output);

int xml1_missing_animation_index(void);
uint32_t xml1_power13_animation(uint32_t actor);

int xml1_lightning_event_construct(uint32_t event,uint32_t name);
