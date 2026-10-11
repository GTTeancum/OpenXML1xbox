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

/* xml1_guest_talent_baseline_rank_set; original guest entry 0x000481A0.
 * Evidence: tests/engine/progression/character_talent_native_test.c
 * Evidence: scripts/guard-talent-ranks.py
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_000481A0
 * Original: 0x000481A0 - 0x000481EE (78 bytes, 28 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_talent_baseline_rank_set(void)
{
    /* XML1 OWNED CHARACTER TALENT MAP */
    const uint32_t _character_original=ecx;
    const uint32_t _character_map=xml1_character_talent_map_resolve(ecx+0x30u);
    const uint32_t _character_values=xml1_character_talent_map_contains(_character_map)?0x141cu:0x168u;
    /* XML1 SIX BIT TALENT RECORD */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000481A0: ;
    eax = MEM32(_character_map + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = _character_map;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    SET_LO8(ebx, 0); /* xor self */
    PUSH32(esp, 0x000481B7u); RECOMP_ABI_CALL(0x000B3BE0u, sub_000B3BE0); /* call 0x000B3BE0 */

loc_000481B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000481C2; /* jne: not equal / not zero */

loc_000481BE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000481E7; /* je: equal / zero */

loc_000481C2: ;
    xml1_talent_guest_set(esi + eax * 4 + _character_values, XML1_TALENT_BASELINE, MEM8(esp + 0x10));
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000481E7: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}
