#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/* xml1_guest_effect_group_release; original guest entry 0x00016650.
 * Evidence: src/engine/powers/raven_powerup_guest.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00016650
 * Original: 0x00016650 - 0x00016697 (71 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_effect_group_release(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016650: ;
    eax = MEM32(ecx + 0x6684);
    edx = ecx + 0x4A90;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = eax & esi;
    _fa = (uint32_t)(MEM32(edx + eax * 4 + 0x12C4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + eax * 4 + 0x12C4), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016693; /* jne: not equal / not zero */

loc_0001666C: ;
    ecx = eax;
    PUSH32(esp, edi);
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(edx + eax * 4 + 0x1274)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + eax * 4 + 0x1274), edi (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00016693; /* je: equal / zero */

loc_0001668B: ;
    PUSH32(esp, esi);
    ecx = edx;
    PUSH32(esp, 0x00016693u); RECOMP_ABI_CALL(0x00016420u, sub_00016420); /* call 0x00016420 */

loc_00016693: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
