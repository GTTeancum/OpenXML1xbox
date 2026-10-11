#define RECOMP_GENERATED_CODE
#include "engine/powers/raven_powerup_guest.h"
#include "diagnostics/raven_operand_trace.h"
#include "recomp_funcs.h"
#include <math.h>

/* xml1_guest_entity_team; original guest entry 0x00026E60.
 * Evidence: src/engine/combat/raven_bishop_guest.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00026E60
 * Original: 0x00026E60 - 0x00026EB5 (85 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_entity_team(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00026E60: ;
    eax = MEM32(ecx + 4);
    edx = eax;
    if (0x1B) _cf = (int)(((edx) >> ((0x1B) - 1)) & 1);
    edx = edx >> 0x1B;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00026E74; /* je: equal / zero */

loc_00026E6D: ;
    eax = 0x1B;
    goto loc_00026E94;

loc_00026E74: ;
    edx = eax;
    if (0x1C) _cf = (int)(((edx) >> ((0x1C) - 1)) & 1);
    edx = edx >> 0x1C;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00026E85; /* je: equal / zero */

loc_00026E7E: ;
    eax = 0x1C;
    goto loc_00026E94;

loc_00026E85: ;
    if (0x1D) _cf = (int)(((eax) >> ((0x1D) - 1)) & 1);
    eax = eax >> 0x1D;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 1);
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x1A)) >> 32) & 1);
    eax = eax + 0x1A;

loc_00026E94: ;
    _fa = (uint32_t)(MEM8(ecx + 0x6C)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x6C), 0x10 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00026EB4; /* je: equal / zero */

loc_00026E9A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1C (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00026EAF; /* je: equal / zero */

loc_00026E9F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1D (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00026EAF; /* je: equal / zero */

loc_00026EA4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00026EB4; /* jne: not equal / not zero */

loc_00026EA9: ;
    eax = 0x1D;
    esp += 4; return; /* ret */

loc_00026EAF: ;
    eax = 0x1B;

loc_00026EB4: ;
    esp += 4; return; /* ret */

}
