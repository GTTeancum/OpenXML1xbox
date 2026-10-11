#define RECOMP_GENERATED_CODE
#include "audio/raven_loop_sound_runtime.h"
#include "engine/powers/raven_victim_event_guest.h"
#include "engine/powers/raven_powerup_guest.h"
#include "engine/combat/raven_native_damage.h"
#include "engine/combat/raven_native_energy_guest.h"
#include "engine/combat/raven_native_energy.h"
#include "diagnostics/raven_operand_trace.h"
#include "engine/scripting/raven_script_extensions.h"
#include "engine/actors/raven_ai_modes.h"
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include <math.h>

/* xml1_guest_attack_definition_copy; original guest entry 0x000CFD00.
 * Evidence: tests/engine/powers/raven_powerup_guest_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_000CFD00
 * Original: 0x000CFD00 - 0x000CFDB9 (185 bytes, 61 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_attack_definition_copy(void)
{

loc_000CFD00: ;
    MEM8(ecx + 0x29) = MEM8(MEM32(esp + 4) + 0x29);
    eax = ecx;
    ecx = MEM32(esp + 4);
    SET_LO16(edx, MEM16(ecx));
    MEM16(eax) = LO16(edx);
    SET_LO16(edx, MEM16(ecx + 2));
    MEM16(eax + 2) = LO16(edx);
    SET_LO16(edx, MEM16(ecx + 4));
    MEM16(eax + 4) = LO16(edx);
    SET_LO16(edx, MEM16(ecx + 6));
    MEM16(eax + 6) = LO16(edx);
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 0x2C);
    MEM32(eax + 0x2C) = edx;
    SET_LO16(edx, MEM16(ecx + 0x34));
    MEM16(eax + 0x34) = LO16(edx);
    SET_LO16(edx, MEM16(ecx + 0x36));
    MEM16(eax + 0x36) = LO16(edx);
    edx = MEM32(ecx + 0x30);
    MEM32(eax + 0x30) = edx;
    SET_LO8(edx, MEM8(ecx + 0x26));
    MEM8(eax + 0x26) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x28));
    MEM8(eax + 0x28) = LO8(edx);
    edx = MEM32(ecx + 0x18);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ecx + 0x20);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(ecx + 0x1C);
    MEM32(eax + 0x1C) = edx;
    SET_LO16(edx, MEM16(ecx + 0x24));
    MEM16(eax + 0x24) = LO16(edx);
    SET_LO8(edx, MEM8(eax + 0x38));
    PUSH32(esp, ebx);
    SET_LO8(edx, LO8(edx) ^ MEM8(ecx + 0x38));
    SET_LO8(ebx, MEM8(eax + 0x38));
    SET_LO8(edx, LO8(edx) & 1);
    SET_LO8(ebx, LO8(ebx) ^ LO8(edx));
    MEM8(eax + 0x38) = LO8(ebx);
    SET_LO8(edx, MEM8(ecx + 0x27));
    MEM8(eax + 0x27) = LO8(edx);
    SET_LO8(edx, LO8(ebx));
    SET_LO8(edx, LO8(edx) ^ MEM8(ecx + 0x38));
    SET_LO8(ebx, MEM8(eax + 0x38));
    SET_LO8(edx, LO8(edx) & 2);
    SET_LO8(ebx, LO8(ebx) ^ LO8(edx));
    MEM8(eax + 0x38) = LO8(ebx);
    SET_LO8(ecx, MEM8(ecx + 0x38));
    SET_LO8(edx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 4);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    MEM8(eax + 0x38) = LO8(ecx);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}
