/* Runs real generated progression routines against the mapped retail image.
 * No renderer, OS input, game save, or player data is used by this test.
 * The scratch objects occupy reserved space in this process's guest stack.
 */
#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include "character_limits.h"
#include "character_save.h"
#include "modder_mode.h"
#include "newgame_plus.h"

static int newgame_plus_boundaries(void) {
    unsigned old_manager=MEM32(0x48D59C);
    unsigned char old_init=MEM8(0x4A0540),old_flags=MEM8(0x4A03A5);
    MEM32(0x48D59C)=1;MEM8(0x4A0540)=1;
    for(unsigned flags=0;flags<4;flags++) {
        MEM8(0x4A03A5)=(unsigned char)flags;
        if(!!xml1_newgame_plus_available()!=!!(flags&2))return 1;
    }
    MEM32(0x48D59C)=0;if(xml1_newgame_plus_available())return 1;
    MEM32(0x48D59C)=1;MEM8(0x4A0540)=0;if(xml1_newgame_plus_available())return 1;
    MEM32(0x48D59C)=old_manager;MEM8(0x4A0540)=old_init;MEM8(0x4A03A5)=old_flags;
    unsigned stack=g_esp,buffer=stack-0x60000;
    memset((void*)XBOX_PTR(buffer),0xA5,0x2000);
    xml1_newgame_plus_starting=1;
    g_ecx=buffer;PUSH32(g_esp,0x0018CFD8);RECOMP_ABI_CALL(0x0007E2F0u,sub_0007E2F0);
    if(g_esp!=stack)return 1;
    for(unsigned i=0;i<0x2000;i++)if(MEM8(buffer+i)!=0xA5)return 1;
    g_ecx=buffer;PUSH32(g_esp,0x0018CFFC);RECOMP_ABI_CALL(0x00054A10u,sub_00054A10);
    if(g_esp!=stack)return 1;
    for(unsigned i=0;i<0x2000;i++)if(MEM8(buffer+i)!=0xA5)return 1;
    g_ecx=buffer;PUSH32(g_esp,0x0018CFB5);RECOMP_ABI_CALL(0x000C0700u,sub_000C0700);
    if(g_esp!=stack)return 1;
    for(unsigned i=0;i<0x2000;i++)if(MEM8(buffer+i)!=0xA5)return 1;
    xml1_newgame_plus_finish();if(xml1_newgame_plus_starting)return 1;
    puts("[PROGRESSION] NG+ completion gate, reset inventory/campaign boundaries and stack balance passed");
    return 0;
}

static int save_section_boundaries(void)
{
    unsigned manager = g_esp - 0xB0000u, stream = g_esp - 0x70000u;
    memset((void *)((uintptr_t)g_xbox_mem_offset + manager), 0, XML1_MANAGER_BYTES);
    MEM32(manager + 0x8534u + XML1_MANAGER_DELTA) = 38;
    for (unsigned id = 1; id <= 37; ++id) {
        unsigned meta = manager + 0x6D48u + XML1_MANAGER_DELTA + id * 24u;
        MEM8(meta + 22) = 1;
        MEM32(meta + 16) = 64u + id - 1;
    }
    memset((void *)((uintptr_t)g_xbox_mem_offset + stream), 0xA5, 0x2FC10u);
    MEM32(stream + XML1_SAVE_STREAM_BYTES) = stream;
    if (!xml1_character_save_header(manager, stream) ||
        MEM32(stream + XML1_SAVE_STREAM_BYTES) != stream + 48) return 1;
    xml1_save_layout layout;
    MEM32(stream + XML1_SAVE_STREAM_BYTES) = stream;
    if (!xml1_character_load_header(manager, stream, &layout) || layout.snapshot_count != 48) return 1;
    for (unsigned id = 0; id < 256; ++id)
        if (xml1_saved_definition(&layout, id) != (id >= 1 && id <= 37)) return 1;
    MEM32(stream + XML1_SAVE_STREAM_BYTES) = stream;
    MEM16(stream + 8) = 2; /* Unknown versions must not advance the cursor. */
    if (xml1_character_load_header(manager, stream, &layout) ||
        MEM32(stream + XML1_SAVE_STREAM_BYTES) != stream) return 1;
    MEM16(stream + 8) = 1;
    MEM8(stream + 16 + 10) = 1; /* Missing definition 80. */
    if (xml1_character_load_header(manager, stream, &layout)) return 1;
    memset((void *)((uintptr_t)g_xbox_mem_offset + stream), 0, 48);
    if (!xml1_character_load_header(manager, stream, &layout) ||
        layout.snapshot_count != 17 || MEM32(stream + XML1_SAVE_STREAM_BYTES) != stream) return 1;
    for (unsigned id = 0; id < 256; ++id)
        if (xml1_saved_definition(&layout, id) != (id >= 1 && id <= 16)) return 1;
    MEM32(stream + XML1_SAVE_STREAM_BYTES) = stream + XML1_SAVE_STREAM_BYTES - 24;
    if (xml1_character_save_header(manager, stream) ||
        xml1_character_load_header(manager, stream, &layout)) return 1;
    puts("[PROGRESSION] New/retail save framing, slot-32 bit, unknown version and bounds passed");
    return 0;
}

static int pool_boundaries(unsigned pool)
{
    /* Poison the whole region: missing initialization of the second bitmap
     * must fail even when a fresh OS allocation would happen to be zero. */
    memset((void *)((uintptr_t)g_xbox_mem_offset + pool), 0xA5, XML1_POOL_BYTES + 16);
    g_ecx = pool; PUSH32(g_esp, 0);
    RECOMP_ABI_CALL(0x00055E30u, sub_00055E30);
    if (MEM32(pool + XML1_POOL_INDEX_MASK) != 63 ||
        MEM32(pool + XML1_POOL_INDEX_BITS) != 6 ||
        MEM32(pool + XML1_POOL_CONSTRUCTED + 4) != 0 ||
        MEM32(pool + XML1_POOL_ALLOCATED + 4) != 0) return 1;
    for (unsigned slot = 0; slot < XML1_CHARACTER_POOL_CAPACITY; ++slot) {
        g_ecx = pool; PUSH32(g_esp, 0);
        RECOMP_ABI_CALL(0x00054AC0u, sub_00054AC0);
        if (g_eax != slot || MEM32(pool + XML1_POOL_HANDLES + slot*4) != (64 | slot)) return 1;
    }
    if (MEM32(pool + XML1_POOL_LIVE_COUNT) != 48 ||
        MEM32(pool + XML1_POOL_FREE_COUNT) != 0 ||
        MEM32(pool + XML1_POOL_ALLOCATED) != UINT_MAX ||
        MEM32(pool + XML1_POOL_ALLOCATED + 4) != 0xFFFF) return 1;
    /* No constructors ran, so the reset must retire handles without trying
     * to destroy poisoned character storage. Its unrolled loop visits 48. */
    g_ecx = pool; PUSH32(g_esp, 0);
    RECOMP_ABI_CALL(0x00055F70u, sub_00055F70);
    for (unsigned slot = 0; slot < 48; ++slot)
        if (MEM32(pool + XML1_POOL_HANDLES + slot*4) != (128 | slot)) return 1;
    if (MEM32(pool + XML1_POOL_BYTES) != 0xA5A5A5A5 ||
        MEM32(pool + XML1_POOL_LIVE_COUNT) != 0 ||
        MEM32(pool + XML1_POOL_ALLOCATED + 4) != 0 ||
        MEM32(pool + XML1_POOL_FREE_COUNT) != 48) return 1;
    puts("[PROGRESSION] 48-slot allocation/reset and slot-32 bitmap boundary passed");
    return 0;
}

static int snapshot_boundaries(unsigned snapshot)
{
    /* Real retail constructor/destructor, expanded iteration count. Poison
     * every slot so a seventeen-entry loop cannot pass by zero initialization. */
    memset((void *)((uintptr_t)g_xbox_mem_offset + snapshot), 0xA5, XML1_SNAPSHOT_BYTES + 16);
    g_ecx = snapshot; PUSH32(g_esp, 0);
    RECOMP_ABI_CALL(0x000549A0u, sub_000549A0);
    for (unsigned slot = 0; slot < XML1_SNAPSHOT_COUNT; ++slot) {
        unsigned state = snapshot + slot * 0x1E4u;
        if (MEM8(state + 0x18) != 1 || MEM8(state + 0x1A) != 255) return 1;
    }
    if (MEM32(snapshot + XML1_SNAPSHOT_BYTES) != 0xA5A5A5A5) return 1;
    /* Exercise the actual variable-length retail serializer, not a memcpy
     * substitute. Ten-costume physical IDs and slot 47 must survive while XP
     * retains its existing 32-bit representation and level 45 remains intact.
     * This checks state records; full manager/save-file compatibility is a
     * separate integration requirement. Empty inventories isolate the layout. */
    unsigned stream = g_esp - 0x70000u, stack = g_esp;
    memset((void *)((uintptr_t)g_xbox_mem_offset + stream), 0xA5, 0x2FC10u);
    MEM32(stream + 0x2FC00u) = stream;
    for (unsigned slot = 0; slot < XML1_SNAPSHOT_COUNT; ++slot) {
        unsigned state = snapshot + slot * 0x1E4u;
        MEM32(state + 0x14) = 589255845u;
        MEM8(state + 0x18) = 45;
        MEM8(state + 0x1A) = (uint8_t)(slot == 47 ? 99 : slot + 1);
        g_ecx = state; PUSH32(g_esp, stream); PUSH32(g_esp, 0);
        RECOMP_ABI_CALL(0x00047F80u, sub_00047F80);
        if (g_esp != stack) return 1;
    }
    unsigned end = MEM32(stream + 0x2FC00u);
    if (end != stream + XML1_SNAPSHOT_COUNT * 46u) return 1;
    MEM32(stream + 0x2FC00u) = stream;
    for (unsigned slot = 0; slot < XML1_SNAPSHOT_COUNT; ++slot) {
        unsigned state = snapshot + slot * 0x1E4u;
        memset((void *)((uintptr_t)g_xbox_mem_offset + state + 4), 0, 44);
        g_ecx = state; PUSH32(g_esp, stream); PUSH32(g_esp, 0);
        RECOMP_ABI_CALL(0x00049280u, sub_00049280);
        if (g_esp != stack || MEM32(state + 0x14) != 589255845u ||
            MEM8(state + 0x18) != 45 ||
            MEM8(state + 0x1A) != (slot == 47 ? 99 : slot + 1)) return 1;
    }
    if (MEM32(stream + 0x2FC00u) != end || MEM32(end) != 0xA5A5A5A5 ||
        MEM32(stream + 0x2FC04u) != 0xA5A5A5A5) return 1;
    puts("[PROGRESSION] 48 native state records round-trip level 45, XP and physical skins through 99");
    g_ecx = snapshot; PUSH32(g_esp, 0);
    RECOMP_ABI_CALL(0x00054AA0u, sub_00054AA0);
    if (MEM32(snapshot + XML1_SNAPSHOT_BYTES) != 0xA5A5A5A5) return 1;
    puts("[PROGRESSION] 48-slot snapshot construction/destruction passed");
    return 0;
}

static int costume_boundaries(unsigned character)
{
    static const unsigned skins[11] = {1, 3, 3, 2, 5, 6, 7, 8, 20, 98, 99};
    static const unsigned expected[10] = {2, 3, 5, 6, 7, 8, 20, 98, 99, 1};
    memset((void *)((uintptr_t)g_xbox_mem_offset + character), 0, XML1_CHARACTER_BYTES);
    MEM32(character + 0x37A) = 0xDEADBEEF;
    MEM8(character + 0x371) = 1;
    MEM8(character + 0x1E) = 255;
    for (unsigned i = 0; i < 11; ++i) XML1_SKIN_BYTE(character, i) = skins[i] - 1;
    for (unsigned i = 0; i < 10; ++i) {
        unsigned next = xml1_next_character_skin(character);
        if (next != expected[i]) return 1;
        MEM8(character + 0x1E) = next;
    }
    if (MEM32(character + 0x37A) != 0xDEADBEEF ||
        xml1_extra_skin_category("aoa") != 8 ||
        xml1_extra_skin_category("ASTONISHING") != 9 ||
        xml1_extra_skin_category("90s") != 10 ||
        xml1_extra_skin_category("future") != -1) return 1;
    puts("[PROGRESSION] Ten distinct skins, sparse IDs, duplicate categories and wrap passed");
    return 0;
}

static unsigned threshold(unsigned manager, unsigned level)
{
    unsigned sp = g_esp;
    g_ecx = manager;
    PUSH32(g_esp, level);
    PUSH32(g_esp, 0);
    RECOMP_ABI_CALL(0x000541E0u, sub_000541E0);
    if (g_esp != sp) { fprintf(stderr, "[PROGRESSION] XP ABI mismatch\n"); return UINT_MAX; }
    return g_eax;
}

static int modder_boundaries(void)
{
    unsigned manager=g_esp-0xB0000;
    memset((void *)((uintptr_t)g_xbox_mem_offset+manager),0,XML1_MANAGER_BYTES);
    MEM32(manager+XML1_MANAGER_OFFSET(0xDCCC))=3;
    const unsigned ids[]={1,2,37};
    const char *names[]={"default","Beast","DummyNPC21"};
    for(unsigned i=0;i<3;++i) {
        MEM8(manager+XML1_MANAGER_OFFSET(0xDBCC)+i)=ids[i];
        unsigned meta=manager+0x6D48+XML1_MANAGER_DELTA+ids[i]*24;
        MEM32(meta+16)=64+i; MEM8(meta+22)=1;
        strcpy((char *)((uintptr_t)g_xbox_mem_offset+manager+4+i*XML1_CHARACTER_BYTES+0x20C),names[i]);
    }
    int mode=xml1_build_settings.modder_mode;
    unsigned char init=MEM8(0x4A0540),flags=MEM8(0x4A03A5);
    unsigned bits0=MEM32(0x4A0360),bits1=MEM32(0x4A0364);
    MEM8(0x4A0540)|=1; MEM8(0x4A03A5)=0; MEM32(0x4A0360)=0;MEM32(0x4A0364)=0;
    xml1_build_settings.modder_mode=0;xml1_modder_unlock(manager);
    int failed=MEM32(manager+XML1_MANAGER_OFFSET(0xDBC8))!=0;
    xml1_build_settings.modder_mode=1;xml1_modder_unlock(manager);xml1_modder_unlock(manager);
    failed|=MEM32(manager+XML1_MANAGER_OFFSET(0xDBC8))!=2;
    failed|=MEM8(manager+XML1_MANAGER_OFFSET(0xDAC8))!=2;
    failed|=MEM8(manager+XML1_MANAGER_OFFSET(0xDAC8)+1)!=37;
    failed|=MEM32(0x4A0360)!=4 || MEM32(0x4A0364)!=32 || MEM8(0x4A03A5)!=1;
    MEM8(0x4A0540)=init;MEM8(0x4A03A5)=flags;MEM32(0x4A0360)=bits0;MEM32(0x4A0364)=bits1;
    xml1_build_settings.modder_mode=mode;
    if(!failed) puts("[MODDER MODE] disabled/enabled, definition 37, bitmap, costumes and repeat application passed");
    return failed;
}

int xml1_progression_test(void)
{
    unsigned scratch = g_esp - 0x30000;
    unsigned manager = scratch, character = scratch + 0x100;
    unsigned cap, previous = 0;
    memset((void *)((uintptr_t)g_xbox_mem_offset + scratch), 0, 0x1000);
    /* CharacterManager::XPThreshold only calls vtable + C4 (XP curve).
     * Level reconciliation also retrieves this singleton and this vtable.
     * It does not need the manager's pools or a fabricated game world. */
    MEM32(manager) = 0x003CB824;
    MEM32(0x0048D59C) = manager;
    g_ecx = manager; PUSH32(g_esp, 0);
    RECOMP_ABI_CALL(0x00056C80u, sub_00056C80);
    cap = g_eax;
    printf("[PROGRESSION] level-cap=%u\n", cap);
    if (cap != 45) return 1;
    for (unsigned level = 1; level <= cap; ++level) {
        unsigned xp = threshold(manager, level);
        printf("[PROGRESSION] threshold level=%u xp=%u\n", level, xp);
        /* Retail XP grows exponentially: level 2 is 100; level 45 is
         * 589255845. Preserve that curve and its signed-32-bit sentinel. */
        if (xp >= INT_MAX || (level > 1 && xp <= previous)) return 1;
        previous = xp;
    }
    if (threshold(manager, cap + 1) != INT_MAX) return 1;
    for (unsigned level = 3; level <= cap; ++level) {
        unsigned xp = threshold(manager, level);
        for (unsigned below = 0; below < 2; ++below) {
            MEM8(character + 0x1C) = 2;
            MEM32(character + 0x18) = xp - below;
            g_ecx = character; PUSH32(g_esp, 0);
            RECOMP_ABI_CALL(0x000AF950u, sub_000AF950);
            if (MEM8(character + 0x1C) != level - below) {
                fprintf(stderr, "[PROGRESSION] level boundary failed %u below=%u actual=%u\n",
                    level, below, MEM8(character + 0x1C));
                return 1;
            }
        }
    }
    puts("[PROGRESSION] XP thresholds and level boundaries passed");
    if (pool_boundaries(scratch + 0x2000)) {
        fputs("[PROGRESSION] Character pool boundary failed\n", stderr);
        return 1;
    }
    if (snapshot_boundaries(scratch + 0x11000)) {
        fputs("[PROGRESSION] Snapshot boundary failed\n", stderr);
        return 1;
    }
    if (costume_boundaries(character)) {
        fputs("[PROGRESSION] Costume boundary failed\n", stderr);
        return 1;
    }
    if (modder_boundaries()) return 1;
    if (newgame_plus_boundaries()) return 1;
    if (save_section_boundaries()) {
        fputs("[PROGRESSION] Save section boundary failed\n", stderr);
        return 1;
    }
    return 0;
}
