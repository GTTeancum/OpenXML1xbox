#ifndef XML1_CHARACTER_TALENT_MAP_OWNER_H
#define XML1_CHARACTER_TALENT_MAP_OWNER_H
#include <stdint.h>
#include <stddef.h>
#ifdef __cplusplus
extern "C" {
#endif

/* Keep original CharacterState/CharacterDef addresses and sizes. Each embedded
 * map (including a temporary native copy) owns separate expanded guest storage.
 * Freed storage is reused up to the peak simultaneous map count; neither actor
 * names nor transient talent IDs are ownership keys. No shallow sharing. */
#define XML1_CHARACTER_TALENT_MAP_BYTES 0x1834u
#define XML1_CHARACTER_TALENT_MAP_CAPACITY 254u
#define XML1_CHARACTER_TALENT_MAP_VALUES 0x141cu
#define XML1_CHARACTER_TALENT_MAP_CONSTRUCTED 0x1814u
typedef uint32_t (*xml1_character_map_allocate)(void *context,unsigned bytes);
typedef struct xml1_character_map_slot xml1_character_map_slot;
typedef struct xml1_character_map_owner {
    xml1_character_map_slot *slots;
    xml1_character_map_allocate allocate;
    void *context;
    size_t active, allocated;
} xml1_character_map_owner;

/* Failure is zero and leaves existing ownership unchanged. The caller must
 * initialize the native map in the returned storage, including its bitmaps.
 * Reconstructing a live original address is rejected, exposing missing cleanup
 * instead of erasing earned ranks or keeping stale references silently. */
uint32_t xml1_character_map_create(xml1_character_map_owner *,uint32_t original);
uint32_t xml1_character_map_find(const xml1_character_map_owner *,uint32_t original);
int xml1_character_map_retire(xml1_character_map_owner *,uint32_t original);
int xml1_character_map_contains(const xml1_character_map_owner *,uint32_t address);
/* Host metadata teardown after the guest address space is destroyed. */
void xml1_character_map_owner_destroy(xml1_character_map_owner *);
/* One guest address space is active per process. Binding is explicit so the
 * read-only combat/rotation view shares the native maps without allocating or
 * constructing anything. Never replace a live owner with another one. */
int xml1_character_map_bind(xml1_character_map_owner *);
uint32_t xml1_character_map_current_resolve(uint32_t original);
int xml1_character_map_current_contains(uint32_t address);
#ifdef __cplusplus
}
#endif
#endif
