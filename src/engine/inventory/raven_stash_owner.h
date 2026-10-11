#ifndef RAVEN_STASH_OWNER_H
#define RAVEN_STASH_OWNER_H
#include <stdint.h>
#include <stddef.h>
#ifdef __cplusplus
extern "C" {
#endif
/* Inventory-owned storage. Keys are authored item names, never transient row
 * indices or guest pointers. Slot0 mirrors the persisted inventory snapshot;
 * slot1 mirrors the temporary snapshot. Native integration owns when to call. */
void raven_stash_reset(uint32_t inventory);
void raven_stash_forget(uint32_t inventory);
void raven_stash_clear_live(uint32_t inventory);
int raven_stash_read(uint32_t inventory,const char *name,unsigned *quantity,uint64_t *revision);
int raven_stash_commit(uint32_t inventory,uint64_t revision,const char *name,unsigned quantity);
unsigned raven_stash_total(uint32_t inventory);
int raven_stash_capture(uint32_t inventory,unsigned slot);
int raven_stash_restore(uint32_t inventory,unsigned slot);
/* Explicit little-endian optional save section. With buffer=NULL, save returns
 * the required size. Insufficient capacity writes nothing and returns zero.
 * Load is transactional and leaves the native-unsaved temporary snapshot alone.
 * Guest stream integration must supply the exact section length. */
size_t raven_stash_save(uint32_t inventory,void *buffer,size_t capacity);
int raven_stash_load(uint32_t inventory,const void *buffer,size_t size);
int raven_stash_has_saved_items(uint32_t inventory);
void raven_stash_load_legacy(uint32_t inventory,int persisted_valid);
void raven_stash_menu_set(uint32_t menu,int enabled);
int raven_stash_menu_enabled(uint32_t menu);
#ifdef __cplusplus
}
#endif
#endif
