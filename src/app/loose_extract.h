#pragma once
#include <stddef.h>
#ifdef __cplusplus
extern "C" {
#endif
/* Return nonzero to continue, zero to cancel. Runs on the caller's thread. */
typedef int (*Xml1ExtractProgress)(void *context, unsigned done, unsigned total, const char *resource);
int xml1_extract_loose(const wchar_t *archive, const wchar_t *destination,
    Xml1ExtractProgress progress, void *context, char *error, unsigned error_size);
#ifdef __cplusplus
}
#endif
