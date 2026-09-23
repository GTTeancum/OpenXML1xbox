#pragma once
#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif
int raven_shared_powerups_init(const char *root);
typedef void (*raven_shared_attribute)(uint32_t definition,const char *key,const char *value);
int raven_shared_powerups_apply(uint32_t definition,const char *tag,raven_shared_attribute attribute);
#ifdef __cplusplus
}
#endif
