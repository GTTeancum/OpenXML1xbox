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

/* xml1_guest_talent_bonus_rank_set; original guest entry 0x000482F0.
 * Evidence: tests/engine/progression/character_talent_native_test.c
 * Evidence: scripts/guard-talent-ranks.py
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_000482F0
 * Original: 0x000482F0 - 0x000483BE (206 bytes, 75 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_talent_bonus_rank_set(void)
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

loc_000482F0: ;
    PUSH32(esp, ecx);
    eax = MEM32(_character_map+4);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = _character_map;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0004830Bu); RECOMP_ABI_CALL(0x000B3BE0u, sub_000B3BE0); /* call 0x000B3BE0 */

loc_0004830B: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004831D; /* jne: not equal / not zero */

loc_00048315: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000483B5; /* je: equal / zero */

loc_0004831D: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0004832Au); RECOMP_ABI_CALL(0x000B3BE0u, sub_000B3BE0); /* call 0x000B3BE0 */

loc_0004832A: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00048337; /* jne: not equal / not zero */

loc_00048333: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00048346; /* je: equal / zero */

loc_00048337: ;
    SET_LO8(eax, xml1_talent_record_get(MEM32(esi + eax * 4 + _character_values), XML1_TALENT_CURRENT));
    MEM8(esp + 0x18) = LO8(eax);
    goto loc_0004834A;

loc_00048346: ;
    MEM8(esp + 0x18) = LO8(ebx);

loc_0004834A: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00048356u); RECOMP_ABI_CALL(0x000B3BE0u, sub_000B3BE0); /* call 0x000B3BE0 */

loc_00048356: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00048361; /* jne: not equal / not zero */

loc_0004835D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004836B; /* je: equal / zero */

loc_00048361: ;
    SET_LO8(ebx, xml1_talent_record_get(MEM32(esi + eax * 4 + _character_values), XML1_TALENT_PENDING));

loc_0004836B: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00048375u); RECOMP_ABI_CALL(0x00048140u, xml1_guest_talent_rank_limit_get); /* call 0x00048140 */

loc_00048375: ;
    edx = ZX8(MEM8(esp + 0x18));
    ecx = ZX8(LO8(eax));
    eax = ZX8(LO8(ebx));
    edx = edx + eax;
    SET_LO8(eax, MEM8(esp + 0x1C));
    edi = ZX8(LO8(eax));
    edx = edx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    POP32(esp, ebx);
    if (CMP_L(_fas, _fbs)) goto loc_000483B5; /* jl: less (signed <) */

loc_00048390: ;
    xml1_talent_guest_set(esi + ebp * 4 + _character_values, XML1_TALENT_BONUS, LO8(eax));
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_000483B5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}
