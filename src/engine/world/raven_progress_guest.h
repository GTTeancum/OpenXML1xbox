#pragma once
#include <stdint.h>
/* Called only at the verified CProgress singleton lifecycle boundaries. */
void xml1_progress_construct(uint32_t owner);
void xml1_progress_snapshot(uint32_t owner, unsigned groups);
void xml1_progress_restore(uint32_t owner, unsigned groups);
void xml1_progress_merge(uint32_t owner, unsigned groups);
void xml1_progress_campaign_save(uint32_t stream);
void xml1_progress_campaign_load(uint32_t owner, uint32_t stream);
/* Returns 1 after handling and popping the original thiscall arguments. */
int xml1_progress_options_io(int reading);
uint32_t xml1_progress_options_disposition(uint32_t buffer);
int xml1_progress_hard_unlocked(void);
void xml1_progress_unlock_hard(void);
/* Native completion setter supplies its owner and original boolean argument. */
void xml1_progress_campaign_completed(uint32_t owner,unsigned completed);
int xml1_progress_fixture(uint32_t pool);
