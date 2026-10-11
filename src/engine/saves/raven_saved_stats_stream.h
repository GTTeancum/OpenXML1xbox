#ifndef RAVEN_SAVED_STATS_STREAM_H
#define RAVEN_SAVED_STATS_STREAM_H
#include <stddef.h>
#include <string.h>

/* Locate character data in an already decoded native campaign payload.
 * XML1 70570 consumes a 52-byte marker, play time, two game records and
 * mission state. C0790 then consumes 100 two-byte course entries, eight
 * grade bytes and two credit bytes, separated by native 52-byte markers.
 * Skip these records rather than running their loaders: importing characters
 * must not restore the source campaign's story or Danger Room progress.
 * Do not scan for magic strings inside arbitrary record data, and do not
 * decode character records here; the existing native reader owns their
 * retail/expanded layouts, talent identities and permanent vitality fields.
 */
static inline int raven_saved_stats_marker(const unsigned char* p,
                                           const char* label, int suffix) {
    size_t n = strlen(label), end;
    if (p[0] != '\n' || p[51] != '\n' || n >= 50 ||
        memcmp(p + 1, label, n)) return 0;
    end = n;
    if (suffix) {
        while (end < 50 && p[1 + end] && p[1 + end] != ']') ++end;
        if (end >= 49 || p[1 + end] != ']') return 0;
        ++end;
    }
    return end < 50 && p[1 + end] == 0;
}
static inline int raven_saved_stats_character_offset(const void* payload,
                                                      size_t size, size_t* offset) {
    const unsigned char* p = (const unsigned char*)payload;
    enum { courses = 52 + 4 + 0x88 + 0x88 + 0x310,
           grades = courses + 52 + 100 * 2,
           credits = grades + 52 + 8,
           characters = credits + 52 + 2 };
    /* At least one character byte must remain. Do not change the caller's
     * cursor/result on malformed input; source file bytes are never changed. */
    if (!p || !offset || size <= characters || size > 0x2fc00) return 0;
    if (!raven_saved_stats_marker(p, "[SAVEGAMEBEGIN:", 1) ||
        !raven_saved_stats_marker(p + courses, "[DANGERROOM: COURSES]", 0) ||
        !raven_saved_stats_marker(p + grades, "[DANGERROOM: GRADES]", 0) ||
        !raven_saved_stats_marker(p + credits, "[DANGERROOM: CREDITS]", 0)) return 0;
    *offset = characters;
    return 1;
}
#endif
