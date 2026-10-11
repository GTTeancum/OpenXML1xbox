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

/* xml1_guest_character_stats_construct; original guest entry 0x00048EF0.
 * Evidence: tests/engine/progression/character_talent_map_native_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00048EF0
 * Original: 0x00048EF0 - 0x00048F8C (156 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_character_stats_construct(void)
{
    /* XML1 OWNED CHARACTER TALENT MAP */
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00048EF0: ;
#ifdef XML1_PERMANENT_VITALITY
    xml1_vitality_construct(ecx);
#endif
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34E59B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    MEM32(esp + 0xC) = esi;
    edx = esi + 4;
    MEM32(esi) = 0x3CADB0;
    MEM8(edx + 0xC) = MEM8(edx + 0xC) & 0xFE;
    ebp = 0; /* xor self */
    eax = 0; /* xor self */
    edi = edx;
    MEM32(edx) = ebp;
    MEM32(edx + 4) = ebp;
    MEM32(edx + 8) = 0xFFFFFFFFu;
    ecx = 0xB;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    SET_LO8(ecx, MEM8(edx + 0x2A));
    SET_LO8(ecx, LO8(ecx) & 0xFE);
    SET_LO8(eax, 1);
    MEM8(edx + 0x2A) = LO8(ecx);
    edi = esi + 0x30;
    ecx = edi;
    MEM8(edx + 0x16) = 0xFF;
    MEM8(edx + 0x14) = LO8(eax);
    MEM8(edx + 0x15) = LO8(eax);
    MEM32(edx + 0x10) = ebp;
    MEM8(edx + 0x29) = LO8(eax);
    PUSH32(esp, 0x00048F5Au); RECOMP_ABI_CALL(0x00048C00u, xml1_guest_character_talent_map_construct); /* call 0x00048C00 */

loc_00048F5A: ;
    MEM32(xml1_character_talent_map_resolve(edi)) = 0x3CAD98;
    MEM32(esi + 0x1E0) = ebp;
    ecx = esi;
    MEM32(esp + 0x18) = ebp;
    MEM32(esi + 0x1B) = 0x1010101;
    PUSH32(esp, 0x00048F78u); RECOMP_ABI_CALL(0x00048CE0u, sub_00048CE0); /* call 0x00048CE0 */

loc_00048F78: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}
