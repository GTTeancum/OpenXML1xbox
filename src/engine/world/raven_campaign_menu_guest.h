#pragma once
#include <stdint.h>
/* Registered script commands use the native popup and campaign startup paths. */
void xml1_campaign_choose_difficulty(void);
void xml1_campaign_choose_statistics(void);
int xml1_campaign_select_difficulty(int32_t value);
int xml1_campaign_menu_fixture(uint32_t pool);
