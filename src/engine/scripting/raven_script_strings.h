#ifndef RAVEN_SCRIPT_STRINGS_H
#define RAVEN_SCRIPT_STRINGS_H
#include <stdint.h>
/* XML2's native commands return no value when the 128-byte buffer would
   overflow. strcatint reserves eleven characters even for a short integer. */
int raven_script_concat(char output[128], const char *left, const char *right);
int raven_script_concat_int(char output[128], const char *left, int32_t right);
int raven_script_vector_int(char output[128], int32_t x, int32_t y, int32_t z);
#endif
