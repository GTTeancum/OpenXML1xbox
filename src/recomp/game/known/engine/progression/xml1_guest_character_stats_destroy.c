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

/* xml1_guest_character_stats_destroy; original guest entry 0x00048F90.
 * Evidence: tests/engine/progression/progression_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00048F90
 * Original: 0x00048F90 - 0x00049014 (132 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_character_stats_destroy(void)
{
    /* XML1 OWNED CHARACTER TALENT MAP */
    const uint32_t _character_original=ecx+0x30u;
    const uint32_t _character_map=xml1_character_talent_map_resolve(_character_original);
    const int _character_expanded=xml1_character_talent_map_contains(_character_map);

loc_00048F90: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34E59B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    MEM32(esi) = 0x3CADB0;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x00048FC1u); RECOMP_ABI_CALL(0x00048C60u, xml1_guest_character_stats_reset); /* call 0x00048C60 */

loc_00048FC1: ;
    edx = esi + 4;
    MEM32(esi + 0x1E0) = 0;
    eax = 0; /* xor self */
    edi = edx;
    ecx = 0xB;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    SET_LO8(ecx, MEM8(edx + 0x2A));
    SET_LO8(ecx, LO8(ecx) & 0xFE);
    SET_LO8(eax, 1);
    MEM8(edx + 0x2A) = LO8(ecx);
    ecx = _character_map + (_character_expanded?0x141cu:0x168u);
    MEM8(edx + 0x16) = 0xFF;
    MEM8(edx + 0x14) = LO8(eax);
    MEM8(edx + 0x15) = LO8(eax);
    MEM32(edx + 0x10) = 0;
    MEM8(edx + 0x29) = LO8(eax);
    PUSH32(esp, 0x00049003u); RECOMP_ABI_CALL(0x000476E0u, xml1_guest_character_talent_records_clear); /* call 0x000476E0 */

loc_00049003: ;
#ifdef XML1_PERMANENT_VITALITY
    xml1_vitality_retire(esi);
#endif
    if (_character_expanded) xml1_character_talent_map_retire(_character_original);
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}
