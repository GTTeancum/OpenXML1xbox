#pragma once
#include <stdint.h>
void xml1_campaign_record_init(uint32_t record);
void xml1_campaign_record_copy(uint32_t destination, uint32_t source);
void xml1_campaign_extra_save(uint32_t stream);
void xml1_campaign_extra_load(uint32_t stream);
int xml1_campaign_extra_fixture(uint32_t pool);
int32_t xml1_campaign_difficulty(void);
void xml1_campaign_set_difficulty(int32_t value);
unsigned xml1_campaign_current_act(void);
/* Stores imported act context; XML1 owns its existing shop/mission behavior. */
void xml1_campaign_store_act(uint32_t value);
/* Zero bonus preserves the native level-dependent pickup allowance. */
unsigned xml1_campaign_pickup_bonus(unsigned energy);
void xml1_campaign_add_pickup_bonus(unsigned health, unsigned energy);
typedef struct xml1_recall_state {
    char zone[32];
    float position[3];
    unsigned char enabled;
    float cooldown;
} xml1_recall_state;
void xml1_campaign_recall_get(xml1_recall_state *out);
int xml1_campaign_recall_set(const xml1_recall_state *value);
int xml1_campaign_recall_step(float simulation_delta);
int xml1_campaign_startup_begin(void);
void xml1_campaign_startup_after_reset(void);
void xml1_campaign_startup_end(void);
int xml1_campaign_prepare_default_stats(void);
int xml1_campaign_start_default(void);
int xml1_campaign_start_selected(void);
void (*xml1_campaign_fixture_lookup(uint32_t address))(void);

void xml1_campaign_install_capacity(void);
void (*xml1_campaign_capacity_lookup(uint32_t address))(void);
