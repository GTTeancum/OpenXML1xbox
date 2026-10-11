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

/* xml1_guest_talent_pending_rank_get; original guest entry 0x00048270.
 * Evidence: tests/engine/progression/character_talent_native_test.c
 * Evidence: scripts/guard-talent-ranks.py
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00048270
 * Original: 0x00048270 - 0x000482A3 (51 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_talent_pending_rank_get(void)
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

loc_00048270: ;
    eax = MEM32(_character_map + 4);
    PUSH32(esp, esi);
    esi = _character_map;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00048284u); RECOMP_ABI_CALL(0x000B3BE0u, sub_000B3BE0); /* call 0x000B3BE0 */

loc_00048284: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004828F; /* jne: not equal / not zero */

loc_0004828B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004829D; /* je: equal / zero */

loc_0004828F: ;
    SET_LO8(eax, xml1_talent_record_get(MEM32(esi + eax * 4 + _character_values), XML1_TALENT_PENDING));
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0004829D: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
