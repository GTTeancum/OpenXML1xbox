#define RECOMP_GENERATED_CODE
#include "engine/combat/raven_vitality_bonus.h"
#include "engine/powers/raven_victim_event_guest.h"
#include "engine/scripting/raven_remove_events.h"
#include "engine/powers/raven_powerup_guest.h"
#include "engine/combat/raven_native_damage.h"
#include "engine/actors/raven_actor_scale_owner.h"
#include "engine/combat/raven_native_energy_guest.h"
#include "engine/combat/raven_native_energy.h"
#include "diagnostics/raven_operand_trace.h"
#include "engine/combat/raven_bishop_guest.h"
#include "engine/actors/raven_ai_modes.h"
#include "ui/pc_menu.h"
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include "engine/combat/raven_vitality_save_guest.h"
#include "engine/progression/character_talent_guest.h"
#include <math.h>

/* xml1_guest_talent_pending_rank_set; original guest entry 0x00048860.
 * Evidence: tests/engine/progression/character_talent_native_test.c
 * Evidence: scripts/guard-talent-ranks.py
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00048860
 * Original: 0x00048860 - 0x00048946 (230 bytes, 84 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_talent_pending_rank_set(void)
{
    /* XML1 OWNED CHARACTER TALENT MAP */
    const uint32_t _character_map=xml1_character_talent_map_resolve(ecx+0x30u);
    const int _character_expanded=xml1_character_talent_map_contains(_character_map);
    const uint32_t _character_values=_character_expanded?0x141cu:0x168u;
    /* XML1 SIX BIT TALENT RECORD */
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00048860: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0x00048871u); RECOMP_ABI_CALL(0x000B5980u, xml1_guest_talent_manager_get); /* call 0x000B5980 */

loc_00048871: ;
    edi = MEM32(esp + 0x1C);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0004887Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004887D: ;
    esi = _character_map;
    ebx = eax;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0004888Eu); RECOMP_ABI_CALL(0x000B3BE0u, sub_000B3BE0); /* call 0x000B3BE0 */

loc_0004888E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0004893B; /* je: equal / zero */

loc_0004889A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000488A9; /* jne: not equal / not zero */

loc_000488A1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004893B; /* je: equal / zero */

loc_000488A9: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000488B5u); RECOMP_ABI_CALL(0x000B3BE0u, sub_000B3BE0); /* call 0x000B3BE0 */

loc_000488B5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000488C0; /* jne: not equal / not zero */

loc_000488BC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000488CB; /* je: equal / zero */

loc_000488C0: ;
    SET_LO8(eax, xml1_talent_record_get(MEM32(esi + eax * 4 + _character_values), XML1_TALENT_CURRENT));
    goto loc_000488CD;

loc_000488CB: ;
    SET_LO8(eax, 0); /* xor self */

loc_000488CD: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esi;
    ebp = ZX8(LO8(eax));
    PUSH32(esp, 0x000488DDu); RECOMP_ABI_CALL(0x000B3BE0u, sub_000B3BE0); /* call 0x000B3BE0 */

loc_000488DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000488E8; /* jne: not equal / not zero */

loc_000488E4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000488F4; /* je: equal / zero */

loc_000488E8: ;
    SET_LO8(ebx, xml1_talent_record_get(MEM32(esi + eax * 4 + _character_values), XML1_TALENT_BONUS));
    goto loc_000488F6;

loc_000488F4: ;
    SET_LO8(ebx, 0); /* xor self */

loc_000488F6: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00048900u); RECOMP_ABI_CALL(0x00048140u, xml1_guest_talent_rank_limit_get); /* call 0x00048140 */

loc_00048900: ;
    ecx = ZX8(LO8(eax));
    SET_LO8(eax, MEM8(esp + 0x24));
    edx = ZX8(LO8(ebx));
    edi = ZX8(LO8(eax));
    edx = edx + ebp;
    edi = edi + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    POP32(esp, ebp);
    if (CMP_L(_fas, _fbs)) goto loc_0004893B; /* jl: less (signed <) */

loc_00048916: ;
    ecx = MEM32(esp + 0x10);
    xml1_talent_guest_set(esi + ecx * 4 + _character_values, XML1_TALENT_PENDING, LO8(eax));
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

loc_0004893B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

}
