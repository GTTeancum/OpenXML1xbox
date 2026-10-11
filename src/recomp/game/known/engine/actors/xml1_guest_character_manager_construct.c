#define RECOMP_GENERATED_CODE
#include "engine/combat/raven_vitality_bonus.h"
#include "engine/powers/raven_power_selection_save.h"
#include "engine/actors/raven_leader_definition.h"
#include "engine/actors/raven_ai_modes.h"
#include "engine/actors/raven_actor_transform_owner.h"
#include "engine/actors/raven_character_race.h"
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include "game/xml1/newgame_plus.h"
#include "game/xml1/character_limits.h"
#include <math.h>
#include "engine/progression/character_save.h"
#include "game/xml1/modder_mode.h"

/* xml1_guest_character_manager_construct; original guest entry 0x00056B70.
 * Evidence: docs/ROSTER-COSTUME-EXPANSION.md
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00056B70
 * Original: 0x00056B70 - 0x00056C53 (227 bytes, 52 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_character_manager_construct(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00056B70: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34E91B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 4;
    MEM32(esp + 8) = esi;
    MEM32(esi) = 0x3CB824;
    PUSH32(esp, 0x00056B9Cu); RECOMP_ABI_CALL(0x00055E30u, xml1_guest_character_pool_construct); /* call 0x00055E30 */

loc_00056B9C: ;
    ebx = 0; /* xor self */
    MEM32(esp + 0x14) = ebx;
    eax = esi + 0xDB38;
    ecx = 0xFF;
    /* nop */

loc_00056BB0: ;
    MEM32(eax + -8) = ebx;
    MEM32(eax + -4) = ebx;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    eax = eax + 0x18;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00056BB0; /* jne: not equal / not zero */

loc_00056BC1: ;
    MEM32(esi + 0xF31C) = ebx;
    ecx = esi + 0xF32C;
    MEM32(esi + 0xF324) = 0x3FFFFFFF;
    MEM32(esi + 0xF328) = 0xFFFFFFFFu;
    MEM32(esi + 0xF320) = 0x3CB7A0;
    PUSH32(esp, 0x00056BF0u); RECOMP_ABI_CALL(0x00055A30u, sub_00055A30); /* call 0x00055A30 */

loc_00056BF0: ;
    PUSH32(esp, 0x54AA0);
    PUSH32(esp, 0x549A0);
    PUSH32(esp, 2);
    PUSH32(esp, XML1_SNAPSHOT_BYTES);
    eax = esi + 0x10858;
    MEM32(esi + 0xF320) = 0x3CB80C;
    PUSH32(esp, eax);
    MEM32(esi + 0x10850) = 0x3FFFFFFF;
    MEM32(esi + 0x10854) = ebx;
    PUSH32(esp, 0x00056C27u); RECOMP_ABI_CALL(0x003418A8u, sub_003418A8); /* call 0x003418A8 */

loc_00056C27: ;
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x1BEE8) = ebx;
    MEM32(esi + 0x1BFEC) = ebx;
    MEM8(esi + 0x1BFF0) = LO8(ebx);
    MEM16(esi + 0x1BDE4) = LO16(ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}
