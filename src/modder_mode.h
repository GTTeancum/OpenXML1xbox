#pragma once
#include "build_settings.h"
#include "character_limits.h"
#include <stdio.h>

/* Mirror setInCampaign -> 0x99460 -> CharacterManager vtable+0x2C (0x552A0):
 * set metadata bit 1, append once to the campaign list, and set GameState's
 * character-unlocked bitmap (0x8C380). Use loaded definitions, never a fixed
 * retail hero count. Default/astral are engine support records, not heroes.
 * Unlocks are ordinary progression state and persist when the user saves.
 * Turning the option off does not revoke unlocks already saved.
 */
static inline void xml1_modder_unlock(unsigned manager)
{
    if (!xml1_build_settings.modder_mode || !manager) return;
    unsigned count=MEM32(manager + XML1_MANAGER_OFFSET(0xDCCC));
    if (count>255) return;
    unsigned added=0;
    for (unsigned i=0;i<count;++i) {
        unsigned id=MEM8(manager + XML1_MANAGER_OFFSET(0xDBCC) + i);
        unsigned meta=manager + 0x6D48 + XML1_MANAGER_DELTA + id*24;
        unsigned handle=MEM32(meta+16);
        if (!id || !handle || !(MEM8(meta+22)&1)) continue;
        unsigned character=manager+4+(handle&63u)*XML1_CHARACTER_BYTES;
        const char *name=(const char *)((uintptr_t)g_xbox_mem_offset+character+0x20C);
        if (!strcmp(name,"default") || !strcmp(name,"ProfXAstral")) continue;
        if (!(MEM8(meta+22)&2)) {
            unsigned n=MEM32(manager+XML1_MANAGER_OFFSET(0xDBC8));
            if (n>=255) continue;
            MEM8(manager+XML1_MANAGER_OFFSET(0xDAC8)+n)=(unsigned char)id;
            MEM32(manager+XML1_MANAGER_OFFSET(0xDBC8))=n+1;
            MEM8(meta+22)|=2;
            ++added;
        }
        if (MEM8(0x4A0540)&1)
            MEM32(0x4A0210+0x150+(id/32)*4)|=1u<<(id%32);
    }
    if (MEM8(0x4A0540)&1) MEM8(0x4A0210+0x195)|=1;
    if (added) fprintf(stderr,"[MODDER MODE] unlocked %u additional characters; all costumes available\n",added);
}
