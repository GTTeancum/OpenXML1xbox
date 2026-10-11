#ifndef RAVEN_VITALITY_BONUS_H
#define RAVEN_VITALITY_BONUS_H
#include <stddef.h>
#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif
/* Adjunct state belongs to a native character-stats lifetime, including each
 * snapshot/copy. Actor addresses, roster positions and skin IDs are not keys.
 * Guest construction/destruction/copy and save hooks must supply that lifetime
 * before this module is enabled in the runtime. */
typedef struct raven_vitality_slot raven_vitality_slot;
typedef struct raven_vitality_owner {
    raven_vitality_slot *slots;
    size_t active, allocated;
} raven_vitality_owner;
int raven_vitality_create(raven_vitality_owner *,uint32_t stats);
int raven_vitality_retire(raven_vitality_owner *,uint32_t stats);
int raven_vitality_copy(raven_vitality_owner *,uint32_t destination,uint32_t source);
int raven_vitality_get(const raven_vitality_owner *,uint32_t stats,unsigned kind,uint8_t *value);
int raven_vitality_add(raven_vitality_owner *,uint32_t stats,unsigned kind,uint8_t amount);
/* Auto-equip shares the already audited complete-stats lifetime, not the bonus
 * arithmetic. Keeping this flag here lets native copy/reset/retirement hooks
 * preserve snapshot isolation without a second map with competing lifetimes.
 * XML2 C7CE0/C8EA0 save/load the flag in stats+43; XML1 uses a versioned byte. */
int raven_auto_equip_get(const raven_vitality_owner *,uint32_t stats,uint8_t *enabled);
int raven_auto_equip_set(raven_vitality_owner *,uint32_t stats,int enabled);
/* Two independently stored bytes: health, energy. XML2 hero58AA0..58AD7
 * owns byte counters; its scriptB211F/B2184 adds through the low byte.
 * Do not enlarge native XML1 fields or silently borrow unused padding.
 * Read is transactional. (NULL,0) resets an owned record for legacy saves.
 * Outer save framing/versioning is deliberately the caller's responsibility. */
int raven_vitality_write(const raven_vitality_owner *,uint32_t stats,void *out,size_t size);
int raven_vitality_read(raven_vitality_owner *,uint32_t stats,const void *in,size_t size);
void raven_vitality_destroy(raven_vitality_owner *);
/* Process-local guest bridge. Only audited native stats lifecycle hooks may
 * create/copy/retire records. They never call guest code or change registers. */
raven_vitality_owner *xml1_vitality_owner(void);
void xml1_vitality_construct(uint32_t stats);
void xml1_vitality_assign(uint32_t destination,uint32_t source);
void xml1_vitality_retire(uint32_t stats);
void xml1_vitality_reset_if_owned(uint32_t stats);
unsigned xml1_vitality_value(uint32_t stats,unsigned kind);
/* Scope additional record bytes to a successfully admitted CharacterManager
 * section. An unframed native serializer call must retain its original layout. */
void xml1_vitality_stream_reset(void);
int xml1_vitality_stream_begin(uint32_t stream,unsigned version);
int xml1_vitality_stream_version(uint32_t stream);
#ifdef __cplusplus
}
#endif
#endif
