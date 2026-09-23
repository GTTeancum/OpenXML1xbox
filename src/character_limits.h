#ifndef XML1_CHARACTER_LIMITS_H
#define XML1_CHARACTER_LIMITS_H
#include <string.h>

/* Retail CharacterDef is 0x484 bytes. Keep every original member at its
 * original offset; appended bytes +484..486 hold aoa/astonishing/90s skins.
 * Byte +487 holds imported character combat flags; constructor clears all four.
 * The selected physical skin remains the existing byte at +0x1E. */
#define XML1_CHARACTER_BYTES 0x488u
#define XML1_CHARACTER_COMBAT_FLAGS 0x487u
#define XML1_CHARACTER_NONHUMANOID_SKELETON 1u
#define XML1_CHARACTER_POOL_CAPACITY 48u
#define XML1_SKIN_CATEGORY_COUNT 11u

/* CharacterManager embeds its definition pool at +4. It must hold all
 * 35 playable definitions, default/astral records and transient NPCs.
 * 48 preserves the retail six-at-a-time generation reset; 35 would overrun
 * that loop. Both bitmaps grow to TWO words and handles now use six bits.
 * None of these process-local handles are a replacement for saved hero IDs. */
#define XML1_POOL_CONSTRUCTED 0xD980u
#define XML1_POOL_FREE_SLOTS  0xD988u
#define XML1_POOL_TAIL        0xDA4Cu
#define XML1_POOL_HEAD        0xDA50u
#define XML1_POOL_FREE_COUNT  0xDA54u
#define XML1_POOL_ALLOCATED   0xDA58u
#define XML1_POOL_LIVE_COUNT  0xDA60u
#define XML1_POOL_HANDLES     0xDA64u
#define XML1_POOL_INDEX_MASK  0xDB24u
#define XML1_POOL_INDEX_BITS  0xDB28u
#define XML1_POOL_BYTES       0xDB2Cu
#define XML1_MANAGER_DELTA   0x6DE8u
/* Two retail snapshots contain 17 CharacterState objects each. They are
 * indexed by definition ID, including default/astral, rather than party slot.
 * Grow both to 48; leave the 0x1E4-byte state and its selected-skin byte intact. */
#define XML1_SNAPSHOT_COUNT 48u
#define XML1_SNAPSHOT_EXTRA ((XML1_SNAPSHOT_COUNT - 17u) * 0x1E4u)
#define XML1_SNAPSHOT_BYTES (0x2028u + XML1_SNAPSHOT_EXTRA)
#define XML1_MANAGER_OFFSET(old) ((old) + XML1_MANAGER_DELTA + \
    ((old) >= 0xDAC0u ? 2u * XML1_SNAPSHOT_EXTRA : \
     (old) >= 0xBA98u ? XML1_SNAPSHOT_EXTRA : 0u))
#define XML1_MANAGER_CORE_BYTES XML1_MANAGER_OFFSET(0xDDD0u)
/* Blackbird's separate sorted-name cache originally stored 16 x 20 bytes at
 * 0x571448, immediately followed by live UI state. Keep that UI state in place
 * and own the enlarged primitive cache at the end of CharacterManager. */
#define XML1_MENU_ROSTER_CAPACITY 48u
#define XML1_MENU_ROSTER_BYTES (XML1_MENU_ROSTER_CAPACITY * 20u)
#define XML1_MENU_ROSTER_BASE (MEM32(0x48D59C) + XML1_MANAGER_CORE_BYTES)
#define XML1_MANAGER_BYTES (XML1_MANAGER_CORE_BYTES + XML1_MENU_ROSTER_BYTES)

/* Eight retail category bytes remain in place. New categories live in the
 * appended word, never in the neighboring flags at +0x37A..+0x37F.
 * Mission-default categories are a separate packed field; manual selection
 * already stores the physical skin number in the existing +0x1E save byte. */
#define XML1_SKIN_BYTE(character, category) \
    MEM8((character) + ((category) < 8 ? 0x372u + (category) : 0x484u + (category) - 8))

static inline int xml1_extra_skin_category(const char *name)
{
    if (!_stricmp(name, "aoa")) return 8;
    if (!_stricmp(name, "astonishing")) return 9;
    if (!_stricmp(name, "90s")) return 10;
    return -1;
}

static inline unsigned xml1_next_character_skin(unsigned character)
{
    unsigned base = MEM8(character + 0x371), current = MEM8(character + 0x1E);
    unsigned first = base, next = 256;
    if (base < 1 || base > 99) base = first = 1;
    if (current == 255) current = base;
    if (base > current) next = base;
    for (unsigned category = 0; category < XML1_SKIN_CATEGORY_COUNT; ++category) {
        unsigned stored = XML1_SKIN_BYTE(character, category);
        if (!stored) continue; /* Zero means absent or the default skin 01. */
        unsigned physical = stored + 1;
        if (physical > 99) continue; /* Native package names use two digits. */
        if (physical < first) first = physical;
        if (physical > current && physical < next) next = physical;
    }
    return next == 256 ? first : next;
}

#endif
