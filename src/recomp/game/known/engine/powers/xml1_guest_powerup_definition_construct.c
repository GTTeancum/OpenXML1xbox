#define RECOMP_GENERATED_CODE
#include "engine/powers/raven_victim_event_guest.h"
#include "engine/powers/raven_powerup_metadata.h"
#include "engine/combat/raven_harming_callbacks.h"
#include "engine/powers/raven_powerup_guest.h"
#include "engine/scripting/raven_script_extensions.h"
#include "recomp_funcs.h"
#include <math.h>

/* xml1_guest_powerup_definition_construct; original guest entry 0x00096220.
 * Evidence: tests/engine/powers/raven_powerup_guest_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00096220
 * Original: 0x00096220 - 0x0009636D (333 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_powerup_definition_construct(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00096220: ;
    raven_xml1_powerup_metadata_reset(ecx);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 1;
    eax = 0x3F800000;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = ebx;
    MEM8(esi + 0x76) = LO8(ebx);
    MEM8(esi + 0x1C) = LO8(ebx);
    ecx = MEM32(0x485808);
    MEM32(esi + 0x40) = ecx;
    MEM32(esi + 0x44) = ebx;
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0x30) = ebx;
    MEM32(esi + 0x34) = ebx;
    MEM32(esi + 0x38) = ebx;
    MEM32(esi + 0x3C) = ebx;
    SET_LO8(edx, MEM8(esi + 0x70));
    SET_LO8(ecx, MEM8(esi + 0x72));
    SET_LO8(edx, LO8(edx) & 0xF5);
    SET_LO8(edx, LO8(edx) | 5);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x6C);
    MEM8(esi + 0x70) = LO8(edx);
    SET_LO8(edx, MEM8(esi + 0x71));
    SET_LO8(ecx, LO8(ecx) & 0xF8);
    SET_LO8(edx, LO8(edx) & 0x80);
    MEM8(esi + 0x72) = LO8(ecx);
    MEM32(esi + 0x48) = eax;
    edi = edi & 0xFFFFF000u;
    MEM32(esi + 0x6C) = edi;
    MEM8(esi + 0x71) = LO8(edx);
    SET_LO8(eax, LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 0xE7);
    MEM16(esi + 0x74) = LO16(ebx);
    MEM32(esi + 0x4C) = ebx;
    MEM32(esi + 0x50) = ebx;
    edx = MEM32(0x498D90);
    SET_LO8(eax, LO8(eax) & 0x7F);
    MEM8(esi + 0x72) = LO8(ecx);
    edi = esi + 0x54;
    PUSH32(esp, 0x3C806C);
    ecx = edi;
    MEM32(esi + 0x20) = edx;
    MEM8(esi + 0x71) = LO8(eax);
    PUSH32(esp, 0x000962B6u); RECOMP_ABI_CALL(0x00095280u, sub_00095280); /* call 0x00095280 */

loc_000962B6: ;
    ebp = ebp | 0xFFFFFFFFu;
    MEM32(edi + 4) = ebp;
    MEM32(edi + 8) = ebx;
    edi = esi + 0x60;
    PUSH32(esp, 0x3C806C);
    ecx = edi;
    PUSH32(esp, 0x000962CEu); RECOMP_ABI_CALL(0x00095280u, sub_00095280); /* call 0x00095280 */

loc_000962CE: ;
    MEM32(edi + 4) = ebp;
    MEM32(edi + 8) = ebx;
    edi = esi + 0x78;
    PUSH32(esp, 0x3C806C);
    ecx = edi;
    PUSH32(esp, 0x000962E3u); RECOMP_ABI_CALL(0x00095280u, sub_00095280); /* call 0x00095280 */

loc_000962E3: ;
    MEM32(edi + 4) = ebp;
    MEM32(edi + 8) = ebx;
    edi = esi + 0x84;
    PUSH32(esp, 0x3C806C);
    ecx = edi;
    PUSH32(esp, 0x000962FBu); RECOMP_ABI_CALL(0x00095280u, sub_00095280); /* call 0x00095280 */

loc_000962FB: ;
    MEM32(edi + 4) = ebp;
    MEM32(edi + 8) = ebx;
    edi = esi + 0x90;
    PUSH32(esp, 0x3C806C);
    ecx = edi;
    PUSH32(esp, 0x00096313u); RECOMP_ABI_CALL(0x00095280u, sub_00095280); /* call 0x00095280 */

loc_00096313: ;
    MEM32(edi + 4) = ebp;
    MEM32(edi + 8) = ebx;
    MEM32(esi + 0x9C) = ebx;
    MEM32(esi + 0xA0) = ebx;
    MEM32(esi + 0xA4) = ebx;
    MEM32(esi + 0xB0) = ebx;
    MEM32(esi + 0xB4) = ebx;
    MEM32(esi + 0xB8) = ebx;
    MEM32(esi + 0xA8) = ebx;
    MEM32(esi + 0xAC) = ebx;
    MEM32(esi + 0xBC) = ebx;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    SET_LO8(eax, MEM8(esi + 0x18));
    SET_LO8(eax, LO8(eax) & 0xE2);
    POP32(esp, edi);
    SET_LO8(eax, LO8(eax) | 2);
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = ebx;
    MEM8(esi + 0x18) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
