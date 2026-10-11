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

/* xml1_guest_attack_definition_construct; original guest entry 0x000CEEE0.
 * Evidence: tests/engine/powers/raven_powerup_guest_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_000CEEE0
 * Original: 0x000CEEE0 - 0x000CEF35 (85 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_attack_definition_construct(void)
{

loc_000CEEE0: ;
    MEM8(ecx + 0x29) = 0;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM16(eax) = LO16(ecx);
    MEM16(eax + 2) = LO16(ecx);
    MEM16(eax + 4) = LO16(ecx);
    MEM16(eax + 6) = LO16(ecx);
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    edx = 1;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM16(eax + 0x24) = LO16(ecx);
    MEM8(eax + 0x27) = LO8(ecx);
    MEM8(eax + 0x28) = LO8(ecx);
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM16(eax + 0x34) = LO16(ecx);
    MEM16(eax + 0x36) = LO16(ecx);
    SET_LO8(ecx, MEM8(eax + 0x38));
    SET_LO8(ecx, LO8(ecx) & 0xFA);
    SET_LO8(ecx, LO8(ecx) | 2);
    MEM8(eax + 0x26) = LO8(edx);
    MEM8(eax + 0x38) = LO8(ecx);
    esp += 4; return; /* ret */

}
