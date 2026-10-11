#pragma once
#include <stdint.h>
#include <stddef.h>

/* Runtime byte IDs and generation-bearing handles are not persistent names.
 * Save the native name, source filename and selector verbatim so loading can
 * make definitions resident and resolve their current IDs before acquiring
 * character references. This codec does not register or rename resources. */
#define XML1_SAVED_TALENT_LIMIT 254u
typedef struct xml1_saved_talent_identity {
    uint8_t id;
    char name[32];
    char source[32];
    char selector[64];
} xml1_saved_talent_identity;
size_t xml1_talent_identities_write(void *output,size_t capacity,
    const xml1_saved_talent_identity *entries,unsigned count);
/* Transactional: malformed/truncated input leaves output/count unchanged.
 * Return consumed bytes, allowing a separately framed following section. */
size_t xml1_talent_identities_read(const void *input,size_t size,
    xml1_saved_talent_identity *output,unsigned capacity,unsigned *count);
