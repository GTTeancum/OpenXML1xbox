#pragma once
#include <stdint.h>

/* Native talent metadata stores a source index in one byte; FF is invalid.
 * Keep that wire identity and original 32-byte path representation. The
 * native array held only three filenames. Leave one padding entry because
 * B53A0 copies 64 bytes from a slot before terminating the key at byte 31. */
#define XML1_TALENT_SOURCE_CAPACITY 255u
#define XML1_TALENT_SOURCE_BYTES 32u
#define XML1_TALENT_SOURCE_ALLOCATION ((XML1_TALENT_SOURCE_CAPACITY+1u)*XML1_TALENT_SOURCE_BYTES)
uint32_t xml1_talent_source_table(void);
int xml1_talent_source_path_valid(uint32_t path);
