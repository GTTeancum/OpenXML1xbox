#pragma once
#include <stdint.h>
#include <stddef.h>
#ifdef __cplusplus
extern "C" {
#endif
/* Read-only bridge over XML1 guest state. No native calls, allocations,
 * register changes or host pointer casts. The caller supplies bounded reads.
 * Missing entries and corrupt/unreadable state are distinct outcomes. */
typedef int (*raven_guest_read)(void *context, uint32_t address, void *out, size_t size);
typedef enum raven_lookup { RAVEN_INVALID=-1, RAVEN_MISSING=0, RAVEN_FOUND=1 } raven_lookup;
raven_lookup raven_xml1_talent_id(raven_guest_read read, void *context,
                                uint32_t system, const char *name, uint8_t *id);
raven_lookup raven_xml1_talent_rank(raven_guest_read read, void *context,
                                  uint32_t stats, uint8_t id, uint8_t *rank);
#ifdef __cplusplus
}
#endif
