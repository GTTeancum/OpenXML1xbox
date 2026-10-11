#define RECOMP_GENERATED_CODE
#include "engine/powers/raven_victim_event_guest.h"
#include "engine/powers/raven_powerup_metadata.h"
#include "engine/combat/raven_harming_callbacks.h"
#include "engine/powers/raven_powerup_guest.h"
#include "engine/scripting/raven_script_extensions.h"
#include "recomp_funcs.h"
#include <math.h>

/* xml1_guest_powerup_definition_copy; original guest entry 0x000953A0.
 * Evidence: tests/engine/powers/raven_powerup_guest_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_000953A0
 * Original: 0x000953A0 - 0x000955BE (542 bytes, 170 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_powerup_definition_copy(void)
{

loc_000953A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0x24);
    MEM32(esi + 0x24) = eax;
    ecx = MEM32(edi + 0x28);
    MEM32(esi + 0x28) = ecx;
    SET_LO8(edx, MEM8(edi + 0x76));
    MEM8(esi + 0x76) = LO8(edx);
    SET_LO8(eax, MEM8(edi + 0x1C));
    MEM8(esi + 0x1C) = LO8(eax);
    ecx = MEM32(edi + 0x40);
    MEM32(esi + 0x40) = ecx;
    edx = MEM32(edi + 0x44);
    MEM32(esi + 0x44) = edx;
    eax = MEM32(edi + 0x2C);
    MEM32(esi + 0x2C) = eax;
    ecx = MEM32(edi + 0x30);
    MEM32(esi + 0x30) = ecx;
    edx = MEM32(edi + 0x34);
    MEM32(esi + 0x34) = edx;
    eax = MEM32(edi + 0x38);
    MEM32(esi + 0x38) = eax;
    ecx = MEM32(edi + 0x3C);
    MEM32(esi + 0x3C) = ecx;
    SET_LO8(eax, MEM8(edi + 0x72));
    SET_LO8(edx, MEM8(esi + 0x72));
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    SET_LO8(eax, MEM8(esi + 0x72));
    ecx = MEM32(esi + 0x6C);
    SET_LO8(edx, LO8(edx) & 2);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    MEM8(esi + 0x72) = LO8(eax);
    eax = MEM32(edi + 0x6C);
    eax = eax << 0x1C;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x1C) & 31u));
    eax = eax ^ ecx;
    eax = eax & 0xF;
    ecx = ecx ^ eax;
    MEM32(esi + 0x6C) = ecx;
    ecx = MEM32(edi + 0x48);
    eax = MEM32(esi + 0x6C);
    MEM32(esi + 0x48) = ecx;
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(edi + 0x6C));
    edx = edx ^ eax;
    edx = edx & 0xF0;
    eax = eax ^ edx;
    MEM32(esi + 0x6C) = eax;
    SET_LO8(ecx, MEM8(edi + 0x70));
    SET_LO8(eax, MEM8(esi + 0x70));
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(ecx, MEM8(esi + 0x70));
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    MEM8(esi + 0x70) = LO8(ecx);
    SET_LO8(eax, MEM8(edi + 0x70));
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(eax, LO8(eax) & 2);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    MEM8(esi + 0x70) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x70));
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 4);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    MEM8(esi + 0x70) = LO8(ecx);
    SET_LO8(edx, MEM8(edi + 0x70));
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    SET_LO8(edx, LO8(edx) & 8);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    ecx = MEM32(esi + 0x6C);
    MEM8(esi + 0x70) = LO8(edx);
    eax = MEM32(edi + 0x6C);
    eax = eax << 0x14;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x14) & 31u));
    eax = eax ^ ecx;
    eax = eax & 0xF00;
    ecx = ecx ^ eax;
    MEM32(esi + 0x6C) = ecx;
    ecx = edi + 4;
    PUSH32(esp, ecx);
    ecx = esi + 4;
    PUSH32(esp, 0x0009548Au); RECOMP_ABI_CALL(0x000947E0u, sub_000947E0); /* call 0x000947E0 */

loc_0009548A: ;
    SET_LO16(edx, MEM16(edi + 0x74));
    SET_LO8(eax, MEM8(esi + 0x71));
    MEM16(esi + 0x74) = LO16(edx);
    SET_LO8(eax, LO8(eax) ^ MEM8(edi + 0x71));
    SET_LO8(edx, MEM8(esi + 0x71));
    SET_LO8(eax, LO8(eax) & 0x7F);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    SET_LO8(eax, MEM8(esi + 0x72));
    MEM8(esi + 0x71) = LO8(edx);
    ecx = MEM32(edi + 0x4C);
    MEM32(esi + 0x4C) = ecx;
    edx = MEM32(edi + 0x50);
    MEM32(esi + 0x50) = edx;
    SET_LO8(eax, LO8(eax) ^ MEM8(edi + 0x72));
    SET_LO8(ecx, MEM8(esi + 0x72));
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    MEM8(esi + 0x72) = LO8(ecx);
    eax = MEM32(edi + 0x20);
    MEM32(esi + 0x20) = eax;
    SET_LO8(ecx, LO8(ecx) ^ MEM8(edi + 0x72));
    SET_LO8(edx, MEM8(esi + 0x72));
    SET_LO8(ecx, LO8(ecx) & 4);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    SET_LO8(ecx, MEM8(esi + 0x71));
    MEM8(esi + 0x72) = LO8(edx);
    SET_LO8(eax, LO8(edx));
    SET_LO8(edx, MEM8(edi + 0x72));
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    SET_LO8(edx, LO8(edx) & 8);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    MEM8(esi + 0x72) = LO8(edx);
    SET_LO8(eax, MEM8(edi + 0x71));
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(ecx, MEM8(edi + 0x71));
    SET_LO8(eax, LO8(eax) & 0x7F);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    MEM8(esi + 0x71) = LO8(eax);
    SET_LO8(ecx, LO8(edx));
    SET_LO8(ecx, LO8(ecx) ^ MEM8(edi + 0x72));
    SET_LO8(edx, MEM8(esi + 0x72));
    SET_LO8(ecx, LO8(ecx) & 0x10);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(esi + 0x72) = LO8(edx);
    edx = MEM32(edi + 0x9C);
    MEM32(esi + 0x9C) = edx;
    eax = MEM32(edi + 0xA0);
    MEM32(esi + 0xA0) = eax;
    ecx = MEM32(edi + 0xA4);
    MEM32(esi + 0xA4) = ecx;
    edx = MEM32(edi + 0xB0);
    MEM32(esi + 0xB0) = edx;
    eax = MEM32(edi + 0xB4);
    MEM32(esi + 0xB4) = eax;
    ecx = MEM32(edi + 0xB8);
    MEM32(esi + 0xB8) = ecx;
    edx = MEM32(edi + 0xA8);
    MEM32(esi + 0xA8) = edx;
    eax = MEM32(edi + 0xAC);
    MEM32(esi + 0xAC) = eax;
    ecx = MEM32(edi + 0xBC);
    edx = edi + 0x54;
    MEM32(esi + 0xBC) = ecx;
    PUSH32(esp, edx);
    ecx = esi + 0x54;
    PUSH32(esp, 0x0009557Bu); RECOMP_ABI_CALL(0x00095330u, sub_00095330); /* call 0x00095330 */

loc_0009557B: ;
    eax = edi + 0x60;
    PUSH32(esp, eax);
    ecx = esi + 0x60;
    PUSH32(esp, 0x00095587u); RECOMP_ABI_CALL(0x00095330u, sub_00095330); /* call 0x00095330 */

loc_00095587: ;
    ecx = edi + 0x78;
    PUSH32(esp, ecx);
    ecx = esi + 0x78;
    PUSH32(esp, 0x00095593u); RECOMP_ABI_CALL(0x00095330u, sub_00095330); /* call 0x00095330 */

loc_00095593: ;
    edx = edi + 0x84;
    PUSH32(esp, edx);
    ecx = esi + 0x84;
    PUSH32(esp, 0x000955A5u); RECOMP_ABI_CALL(0x00095330u, sub_00095330); /* call 0x00095330 */

loc_000955A5: ;
    edi = edi + 0x90;
    PUSH32(esp, edi);
    ecx = esi + 0x90;
    PUSH32(esp, 0x000955B7u); RECOMP_ABI_CALL(0x00095330u, sub_00095330); /* call 0x00095330 */

loc_000955B7: ;
    raven_xml1_powerup_metadata_clone(esi, MEM32(esp + 0xC));
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
