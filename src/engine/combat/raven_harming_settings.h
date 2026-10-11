#pragma once
#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif
typedef struct raven_harming_settings { uint8_t attacks_per_second,flags; } raven_harming_settings;
void raven_harming_settings_init(raven_harming_settings *settings);
/* Only scalar fields from 14E9A0; unrecognized operands remain unconsumed. */
int raven_harming_settings_parse(raven_harming_settings *settings,const char *key,const char *value);
/* Translate only trait scaling: XML2 mode1 requests it, while XML1's
 * record+60 bit0 suppresses it. Preserve unrelated XML1 record bits. */
uint8_t raven_xml1_harming_trait_flags(uint8_t previous,uint8_t definition_flags);
#ifdef __cplusplus
}
#endif
