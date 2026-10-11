#define RECOMP_GENERATED_CODE
#include "engine/powers/raven_victim_event_guest.h"
#include "engine/powers/raven_powerup_metadata.h"
#include "engine/combat/raven_harming_callbacks.h"
#include "engine/powers/raven_powerup_guest.h"
#include "engine/scripting/raven_script_extensions.h"
#include "recomp_funcs.h"
#include <math.h>

/* xml1_guest_projectile_set_damage_record; original guest entry 0x00096810.
 * Evidence: tests/engine/powers/raven_powerup_guest_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00096810
 * Original: 0x00096810 - 0x00096862 (82 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_projectile_set_damage_record(void)
{

loc_00096810: ;
    raven_projectile_victim_store(ecx, MEM32(esp + 4));
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x2C4) = edx;
    SET_LO8(edx, MEM8(eax + 0x14));
    MEM8(ecx + 0x342) = LO8(edx);
    SET_LO16(edx, MEM16(eax + 8));
    MEM16(ecx + 0x336) = LO16(edx);
    edx = MEM32(eax + 0x10);
    MEM32(ecx + 0x2DC) = edx;
    edx = MEM32(eax + 0x18);
    MEM32(ecx + 0x2E4) = edx;
    SET_LO16(edx, MEM16(eax + 0xA));
    MEM16(ecx + 0x33C) = LO16(edx);
    edx = MEM32(eax + 0x5C);
    MEM32(ecx + 0x2D0) = edx;
    eax = MEM32(eax + 0x48);
    MEM32(ecx + 0x2D8) = eax;
    esp += 8; return; /* ret 4 */

}
