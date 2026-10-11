#pragma once
#include <stddef.h>
#ifdef __cplusplus
extern "C" {
#endif
/* Parsed native zoneinfo owns the input strings only until this call returns.
 * Publishing new definitions preserves campaign state, including absent mods. */
int raven_extraction_definitions(const char* const* names, size_t count);
typedef struct raven_extraction_point {
    const char* name;
    unsigned char act;
    int town_center;
} raven_extraction_point;
int raven_extraction_points(const raven_extraction_point* points, size_t count);
/* Copies the authored destination. 1 found, 0 absent, -1 invalid output.
 * No borrowed parser/registry string escapes its owner lock. */
int raven_extraction_town_center(unsigned char act, char* output, size_t capacity);
int raven_extraction_has_town_center(unsigned char act);
void raven_extraction_reset(void);
int raven_extraction_unlock(const char* zone);
int raven_extraction_unlocked(const char* zone);
/* Success returns 1 and a byte count excluding the native end marker.
 * Failure returns 0, leaves state/output unchanged, and logs the reason. */
int raven_extraction_save(void* destination, size_t capacity, size_t* written);
int raven_extraction_load(const void* source, size_t available, size_t* consumed);
#ifdef __cplusplus
}
#endif
