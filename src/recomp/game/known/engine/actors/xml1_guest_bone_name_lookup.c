#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/* xml1_guest_bone_name_lookup; original guest entry 0x00138870.
 * Evidence: src/engine/powers/raven_powerup_guest.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00138870
 * Original: 0x00138870 - 0x001388B3 (67 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_bone_name_lookup(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00138870: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = 0; /* xor self */
    goto loc_00138880;

    /* nop */

loc_00138880: ;
    eax = MEM32(esi * 4 + 0x455D54);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0013888Eu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0013888E: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001388A7; /* je: equal / zero */

loc_00138895: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xD (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00138880; /* jl: less (signed <) */

loc_0013889B: ;
    edx = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM8(edx) = 0;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001388A7: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    eax = esi;
    MEM8(ecx) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
