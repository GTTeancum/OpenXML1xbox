#pragma once
#include <stddef.h>
#include <stdint.h>
#include <string.h>

/* This adjunct is independent of the original 0x194-byte progress record.
 * Explicit bytes avoid host padding/endian dependence. Omit it when no added
 * progress exists, so unmodified campaigns/options retain their old layout. */
#define RAVEN_PROGRESS_SECTION_BYTES 16u
static inline int raven_progress_section_present(const void* source, size_t available) {
    return source && available >= 8 && !memcmp(source, "XML1PRG", 8);
}
static inline int raven_progress_section_write(void* destination, size_t capacity, int unlocked, size_t* written) {
    static const unsigned char unlocked_record[16] = {'X','M','L','1','P','R','G',0,1,0,0,0,1,0,0,0};
    if (!written) return 0;
    if (!unlocked) { *written=0; return 1; }
    if (!destination || capacity < sizeof(unlocked_record)) return 0;
    memcpy(destination, unlocked_record, sizeof(unlocked_record));
    *written=sizeof(unlocked_record);
    return 1;
}
static inline int raven_progress_section_read(const void* source, size_t available, int* unlocked) {
    if (!unlocked || available < RAVEN_PROGRESS_SECTION_BYTES ||
        !raven_progress_section_present(source, available)) return 0;
    const unsigned char* p=(const unsigned char*)source;
    if (p[8]!=1 || p[9] || p[10] || p[11] || p[12]>1 || p[13] || p[14] || p[15]) return 0;
    *unlocked=p[12];
    return 1;
}
