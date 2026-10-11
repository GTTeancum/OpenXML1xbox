#pragma once
#ifdef __cplusplus
extern "C" {
#endif
/* Caller owns the native save stream and advances it only on success.
 * Returns bytes written, or zero on failure; never throws through guest C.
 * A legacy load passes (NULL,0), resetting selections to roster defaults. */
unsigned raven_power_selections_write(void *output,unsigned capacity);
int raven_power_selections_read(const void *input,unsigned size);
#ifdef __cplusplus
}
#endif
