#ifndef RAVEN_ACTOR_TRANSFORM_OWNER_H
#define RAVEN_ACTOR_TRANSFORM_OWNER_H
#include <stddef.h>
#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif
typedef struct raven_actor_transform_snapshot {
    uint64_t revision;
    uint32_t category;
    unsigned active;
    size_t name_bytes;
} raven_actor_transform_snapshot;
/* Capture once per actor generation. A repeated enable must never replace the
 * original resource name with the transformation's resource name. No borrowed
 * guest pointer is retained; the native resource manager may reload its pool. */
uint64_t raven_actor_transform_capture(uint32_t actor,uint32_t generation,
    uint32_t category,const char *name);
/* Metadata can be queried without a buffer. A provided buffer must fit the
 * entire name, including NUL; failure writes neither metadata nor output. */
int raven_actor_transform_read(uint32_t actor,uint32_t generation,
    raven_actor_transform_snapshot *snapshot,char *name,size_t capacity);
/* Resource callbacks may retire/reuse an actor. A stale transaction cannot
 * activate or erase a later occupant, even if its address has been recycled. */
uint64_t raven_actor_transform_activate(uint32_t actor,uint32_t generation,uint64_t revision,const char *character);
/* Copy only the active, generation-matched temporary character identity.
 * This never replaces the actor's original CharacterDef or save identity. */
int raven_actor_transform_character(uint32_t actor,uint32_t generation,char *name,size_t capacity);
uint64_t raven_actor_transform_deactivate(uint32_t actor,uint32_t generation,uint64_t revision);
int raven_actor_transform_forget(uint32_t actor,uint32_t generation,uint64_t revision);
void raven_actor_transform_reset(uint32_t actor);
/* Missing per-definition XML2 power names, independent of roster selections.
 * Explicit empty values are distinguishable from absent declarations. */
int raven_transform_definition_set(uint32_t definition,unsigned slot,const char *name);
int raven_transform_definition_get(uint32_t definition,unsigned slot,char name[20]);
void raven_transform_definition_reset(uint32_t definition);
void xml1_transform_definition_capture(uint32_t definition,uint32_t node);
int xml1_transform_definition_fixture(uint32_t pool);
#ifdef __cplusplus
}
#endif
#endif
