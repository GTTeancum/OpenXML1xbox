#pragma once
#include <stdint.h>

/* Additional progress only: none of XML1's existing options, campaign-complete
 * or costume flags belongs here. Keep the live and saved-options snapshot
 * separate, matching the native progress owner's lifetime.
 *
 * XML2 9ECE0 snapshots group 1, 9EE20 restores it, and 9EA50/9EA80 merges
 * earned progress with OR. Group 2 is preferences and must not touch unlocks.
 * XML1 exposes those integration points at 8C820, 8C930 and 8C5F0 respectively.
 * This object is NOT a serialized native struct. Disk framing and guest hooks
 * must be supplied before exposing the hard-difficulty script commands.
 */
typedef struct raven_progress_extension {
    uint8_t hard_unlocked;
    uint8_t snapshot_hard_unlocked;
} raven_progress_extension;

static inline void raven_progress_extension_init(raven_progress_extension* state) {
    state->hard_unlocked = 0;
    state->snapshot_hard_unlocked = 0;
}

static inline void raven_progress_extension_set_hard(raven_progress_extension* state, int enabled) {
    /* XML2 9E7B0 accepts a boolean; it does not change campaign completion. */
    state->hard_unlocked = enabled != 0;
}

static inline void raven_progress_extension_snapshot(raven_progress_extension* state, unsigned groups) {
    if (groups & 1u) state->snapshot_hard_unlocked = state->hard_unlocked;
}

static inline void raven_progress_extension_restore(raven_progress_extension* state, unsigned groups) {
    if (groups & 1u) state->hard_unlocked = state->snapshot_hard_unlocked;
}

static inline void raven_progress_extension_merge(raven_progress_extension* state, unsigned groups) {
    /* Restoring an options snapshot replaces; merging earned progress keeps
     * either source's unlock. Conflating them loses progress or defeats cancel. */
    if (groups & 1u) state->hard_unlocked |= state->snapshot_hard_unlocked;
}
