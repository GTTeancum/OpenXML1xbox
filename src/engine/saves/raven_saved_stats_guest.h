#pragma once
#include <stdint.h>
/* Borrow a decoded, rewound native save stream. The caller owns/frees it.
 * Returns zero on prefix rejection before touching live character state.
 * Success restores characters/inventory only; it does not start a mission.
 * Script selection and native completion use the separate entry points below. */
int xml1_saved_stats_read(uint32_t stream);
/* Arm only after native load selection (mode3) starts with no owned buffer.
 * Detach transfers an abandoned buffer to the caller for release, exactly once.
 * These are import-specific: unrelated native save operations are untouched. */
int xml1_saved_stats_arm(uint32_t owner);
uint32_t xml1_saved_stats_detach(uint32_t owner);
void xml1_saved_stats_cancel(uint32_t owner);
/* Native hooks: return nonzero when an import consumed load completion.
 * after_reset runs only inside the synchronous native newgame command. */
int xml1_saved_stats_complete(uint32_t owner);
void xml1_saved_stats_after_reset(void);
int xml1_saved_stats_begin(void);
void xml1_saved_stats_script(void);
