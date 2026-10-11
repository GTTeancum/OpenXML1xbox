#pragma once
#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif
/* CharacterDef-owned authored name. XML2's actor consumer copies63 bytes;
 * keep an owned, terminated copy and never retain parsed XML pointers. */
void raven_leader_definition_reset(uint32_t definition);
void raven_leader_definition_set(uint32_t definition,const char *name);
int raven_leader_definition_get(uint32_t definition,char name[64]);
void xml1_leader_definition_capture(uint32_t definition,uint32_t node);
int xml1_leader_definition_fixture(uint32_t pool);
#ifdef __cplusplus
}
#endif
