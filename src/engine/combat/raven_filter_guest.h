#pragma once
#include <stdint.h>
int xml1_filter_event_construct(uint32_t event,uint32_t name);
int xml1_filter_event_is_code(uint32_t address);
void (*xml1_filter_event_lookup(uint32_t address))(void);
/* Diagnostic storage is private mapped guest memory, never a host address. */
void xml1_filter_event_test_storage(uint32_t address);
uint32_t xml1_filter_event_test_owner_method(void);
