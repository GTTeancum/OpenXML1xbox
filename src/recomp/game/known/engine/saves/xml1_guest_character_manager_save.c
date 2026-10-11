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

/* xml1_guest_character_manager_save; original guest entry 0x00054D40.
 * Evidence: docs/ROSTER-COSTUME-EXPANSION.md
 * Evidence: scripts/guard-character-limits.py
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00054D40
 * Original: 0x00054D40 - 0x00054E07 (199 bytes, 61 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_character_manager_save(void)
{
    /* XML1 versioned character save section */
    /* XML1 CHARACTER LAYOUT v2 */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00054D40: ;
    xml1_modder_unlock(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0xF31C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xF31C), 1 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (!xml1_character_save_header(esi, edi)) xml1_character_save_rejected();
    SET_LO8(ebx, 1);
    if (CMP_LE(_fas, _fbs)) goto loc_00054DA4; /* jle: less or equal (signed <=) */

loc_00054D54: ;
    eax = 1;
    /* nop */

loc_00054D60: ;
    eax = eax + eax * 2;
    SET_LO8(ecx, MEM8(esi + eax * 8 + 0xDB46));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    eax = esi + eax * 8;
    if (TEST_Z(_fa, _fb)) goto loc_00054D95; /* je: equal / zero */

loc_00054D72: ;
    edx = MEM32(eax + 0xDB40);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00054D95; /* je: equal / zero */

loc_00054D7C: ;
    ecx = MEM32(esi + 0xDB28);
    eax = esi + 4;
    ecx = ecx & edx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x488);
    PUSH32(esp, edi);
    ecx = ecx + eax;
    PUSH32(esp, 0x00054D95u); RECOMP_ABI_CALL(0x000AF6E0u, sub_000AF6E0); /* call 0x000AF6E0 */

loc_00054D95: ;
    ecx = MEM32(esi + 0xF31C);
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    eax = ZX8(LO8(ebx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00054D60; /* jl: less (signed <) */

loc_00054DA4: ;
    PUSH32(esp, 0x3CB72C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00054DAFu); RECOMP_ABI_CALL(0x0006E880u, sub_0006E880); /* call 0x0006E880 */

loc_00054DAF: ;
    esp = esp + 8;
    PUSH32(esp, 0x104);
    ecx = esi + 0x1BDE8;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00054DC5u); RECOMP_ABI_CALL(0x0006E7E0u, sub_0006E7E0); /* call 0x0006E7E0 */

loc_00054DC5: ;
    PUSH32(esp, 0x3CB718);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00054DD0u); RECOMP_ABI_CALL(0x0006E880u, sub_0006E880); /* call 0x0006E880 */

loc_00054DD0: ;
    esp = esp + 8;
    PUSH32(esp, 1);
    edx = esi + 0x1BDE5;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00054DE3u); RECOMP_ABI_CALL(0x0006E7E0u, sub_0006E7E0); /* call 0x0006E7E0 */

loc_00054DE3: ;
    esi = esi + 0x1631C;
    ebx = XML1_SNAPSHOT_COUNT;
    edi = edi;

loc_00054DF0: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00054DF8u); RECOMP_ABI_CALL(0x00047F80u, xml1_guest_character_stats_save); /* call 0x00047F80 */

loc_00054DF8: ;
    esi = esi + 0x1E4;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00054DF0; /* jne: not equal / not zero */

loc_00054E01: ;
#ifdef XML1_PERMANENT_VITALITY
    xml1_vitality_stream_reset();
#endif
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}
