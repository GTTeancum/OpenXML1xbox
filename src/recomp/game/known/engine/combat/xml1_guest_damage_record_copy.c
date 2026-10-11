#define RECOMP_GENERATED_CODE
#include "engine/actors/raven_actor_transform_owner.h"
#include "engine/actors/raven_leader_event_guest.h"
#include "engine/powers/raven_victim_event_guest.h"
#include "engine/powers/raven_powerup_metadata.h"
#include "engine/combat/raven_native_damage.h"
#include "engine/powers/raven_powerup_guest.h"
#include "engine/actors/raven_actor_scale_owner.h"
#include "engine/scripting/raven_script_extensions.h"
#include "engine/combat/raven_bishop_guest.h"
#include "engine/actors/raven_leader_actor.h"
#include "recomp_funcs.h"
#include <math.h>

/* xml1_guest_damage_record_copy; original guest entry 0x0002B720.
 * Evidence: tests/engine/powers/raven_powerup_guest_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_0002B720
 * Original: 0x0002B720 - 0x0002B805 (229 bytes, 79 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_damage_record_copy(void)
{

loc_0002B720: ;
    raven_native_damage_copy(MEM32(esp + 4), ecx);
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi);
    MEM32(eax) = ecx;
    edx = MEM32(esi + 4);
    MEM32(eax + 4) = edx;
    SET_LO16(ecx, MEM16(esi + 8));
    MEM16(eax + 8) = LO16(ecx);
    SET_LO16(edx, MEM16(esi + 0xA));
    MEM16(eax + 0xA) = LO16(edx);
    ecx = MEM32(esi + 0xC);
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(esi + 0x10);
    MEM32(eax + 0x10) = edx;
    SET_LO16(ecx, MEM16(esi + 0x14));
    MEM16(eax + 0x14) = LO16(ecx);
    edx = MEM32(esi + 0x18);
    MEM32(eax + 0x18) = edx;
    ecx = MEM32(esi + 0x1C);
    MEM32(eax + 0x1C) = ecx;
    edx = MEM32(esi + 0x20);
    MEM32(eax + 0x20) = edx;
    ecx = MEM32(esi + 0x24);
    MEM32(eax + 0x24) = ecx;
    edx = MEM32(esi + 0x28);
    MEM32(eax + 0x28) = edx;
    ecx = MEM32(esi + 0x2C);
    MEM32(eax + 0x2C) = ecx;
    edx = MEM32(esi + 0x30);
    MEM32(eax + 0x30) = edx;
    ecx = MEM32(esi + 0x34);
    MEM32(eax + 0x34) = ecx;
    edx = MEM32(esi + 0x38);
    MEM32(eax + 0x38) = edx;
    ecx = MEM32(esi + 0x3C);
    MEM32(eax + 0x3C) = ecx;
    edx = MEM32(esi + 0x40);
    MEM32(eax + 0x40) = edx;
    ecx = MEM32(esi + 0x44);
    MEM32(eax + 0x44) = ecx;
    edx = MEM32(esi + 0x48);
    MEM32(eax + 0x48) = edx;
    ecx = MEM32(esi + 0x4C);
    MEM32(eax + 0x4C) = ecx;
    edx = MEM32(esi + 0x50);
    MEM32(eax + 0x50) = edx;
    SET_LO8(ecx, MEM8(esi + 0x54));
    MEM8(eax + 0x54) = LO8(ecx);
    SET_LO8(edx, MEM8(esi + 0x55));
    MEM8(eax + 0x55) = LO8(edx);
    MEM8(eax + 0x56) = MEM8(esi + 0x56);
    ecx = MEM32(esi + 0x58);
    MEM32(eax + 0x58) = ecx;
    edx = MEM32(esi + 0x5C);
    MEM32(eax + 0x5C) = edx;
    SET_LO8(edx, MEM8(esi + 0x60));
    SET_LO8(ecx, MEM8(eax + 0x60));
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(edx, MEM8(eax + 0x60));
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(eax + 0x60) = LO8(edx);
    SET_LO8(ecx, MEM8(esi + 0x60));
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 2);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    MEM8(eax + 0x60) = LO8(ecx);
    SET_LO8(edx, MEM8(esi + 0x60));
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    SET_LO8(edx, LO8(edx) & 4);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(eax + 0x60) = LO8(edx);
    SET_LO8(ecx, MEM8(esi + 0x60));
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 8);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    MEM8(eax + 0x60) = LO8(ecx);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
