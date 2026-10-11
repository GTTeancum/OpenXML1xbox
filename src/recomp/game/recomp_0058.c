/**
 * X-Men Legends - Recompiled code chunk 58
 * Functions: 250 (0x002504E0 - 0x002564E0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_002504E0
 * Original: 0x002504E0 - 0x00250507 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002504E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002504E0: ;
    eax = MEM32(0x5BD91C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002504F4; /* je: equal / zero */

loc_002504E9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250506; /* jne: not equal / not zero */

loc_002504F4: ;
    PUSH32(esp, 0x27B0A0);
    PUSH32(esp, 0x002504FEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002504FE: ;
    eax = MEM32(0x5BD91C);
    esp = esp + 4;

loc_00250506: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250510
 * Original: 0x00250510 - 0x00250537 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250510: ;
    eax = MEM32(0x5BD918);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250524; /* je: equal / zero */

loc_00250519: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250536; /* jne: not equal / not zero */

loc_00250524: ;
    PUSH32(esp, 0x285D00);
    PUSH32(esp, 0x0025052Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025052E: ;
    eax = MEM32(0x5BD918);
    esp = esp + 4;

loc_00250536: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250540
 * Original: 0x00250540 - 0x00250567 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250540: ;
    eax = MEM32(0x5BD914);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250554; /* je: equal / zero */

loc_00250549: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250566; /* jne: not equal / not zero */

loc_00250554: ;
    PUSH32(esp, 0x288270);
    PUSH32(esp, 0x0025055Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025055E: ;
    eax = MEM32(0x5BD914);
    esp = esp + 4;

loc_00250566: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250570
 * Original: 0x00250570 - 0x00250597 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250570: ;
    eax = MEM32(0x5BD924);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250584; /* je: equal / zero */

loc_00250579: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250596; /* jne: not equal / not zero */

loc_00250584: ;
    PUSH32(esp, 0x285D50);
    PUSH32(esp, 0x0025058Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025058E: ;
    eax = MEM32(0x5BD924);
    esp = esp + 4;

loc_00250596: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002505A0
 * Original: 0x002505A0 - 0x002505C7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002505A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002505A0: ;
    eax = MEM32(0x5BD948);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002505B4; /* je: equal / zero */

loc_002505A9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002505C6; /* jne: not equal / not zero */

loc_002505B4: ;
    PUSH32(esp, 0x285DB0);
    PUSH32(esp, 0x002505BEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002505BE: ;
    eax = MEM32(0x5BD948);
    esp = esp + 4;

loc_002505C6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002505D0
 * Original: 0x002505D0 - 0x002505F7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002505D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002505D0: ;
    eax = MEM32(0x5BD928);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002505E4; /* je: equal / zero */

loc_002505D9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002505F6; /* jne: not equal / not zero */

loc_002505E4: ;
    PUSH32(esp, 0x2874A0);
    PUSH32(esp, 0x002505EEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002505EE: ;
    eax = MEM32(0x5BD928);
    esp = esp + 4;

loc_002505F6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250600
 * Original: 0x00250600 - 0x00250627 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250600: ;
    eax = MEM32(0x5BD930);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250614; /* je: equal / zero */

loc_00250609: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250626; /* jne: not equal / not zero */

loc_00250614: ;
    PUSH32(esp, 0x2874F0);
    PUSH32(esp, 0x0025061Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025061E: ;
    eax = MEM32(0x5BD930);
    esp = esp + 4;

loc_00250626: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250630
 * Original: 0x00250630 - 0x00250657 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250630: ;
    eax = MEM32(0x5BD934);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250644; /* je: equal / zero */

loc_00250639: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250656; /* jne: not equal / not zero */

loc_00250644: ;
    PUSH32(esp, 0x252C40);
    PUSH32(esp, 0x0025064Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025064E: ;
    eax = MEM32(0x5BD934);
    esp = esp + 4;

loc_00250656: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250660
 * Original: 0x00250660 - 0x00250687 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250660: ;
    eax = MEM32(0x5BDA60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250674; /* je: equal / zero */

loc_00250669: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250686; /* jne: not equal / not zero */

loc_00250674: ;
    PUSH32(esp, 0x2884A0);
    PUSH32(esp, 0x0025067Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025067E: ;
    eax = MEM32(0x5BDA60);
    esp = esp + 4;

loc_00250686: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250690
 * Original: 0x00250690 - 0x002506B7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250690: ;
    eax = MEM32(0x5BD940);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002506A4; /* je: equal / zero */

loc_00250699: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002506B6; /* jne: not equal / not zero */

loc_002506A4: ;
    PUSH32(esp, 0x25F5C0);
    PUSH32(esp, 0x002506AEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002506AE: ;
    eax = MEM32(0x5BD940);
    esp = esp + 4;

loc_002506B6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002506C0
 * Original: 0x002506C0 - 0x002506E7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002506C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002506C0: ;
    eax = MEM32(0x5BD938);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002506D4; /* je: equal / zero */

loc_002506C9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002506E6; /* jne: not equal / not zero */

loc_002506D4: ;
    PUSH32(esp, 0x27B1D0);
    PUSH32(esp, 0x002506DEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002506DE: ;
    eax = MEM32(0x5BD938);
    esp = esp + 4;

loc_002506E6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002506F0
 * Original: 0x002506F0 - 0x00250717 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002506F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002506F0: ;
    eax = MEM32(0x5BD950);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250704; /* je: equal / zero */

loc_002506F9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250716; /* jne: not equal / not zero */

loc_00250704: ;
    PUSH32(esp, 0x285E00);
    PUSH32(esp, 0x0025070Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025070E: ;
    eax = MEM32(0x5BD950);
    esp = esp + 4;

loc_00250716: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250720
 * Original: 0x00250720 - 0x00250747 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250720: ;
    eax = MEM32(0x5BD980);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250734; /* je: equal / zero */

loc_00250729: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250746; /* jne: not equal / not zero */

loc_00250734: ;
    PUSH32(esp, 0x285E50);
    PUSH32(esp, 0x0025073Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025073E: ;
    eax = MEM32(0x5BD980);
    esp = esp + 4;

loc_00250746: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250750
 * Original: 0x00250750 - 0x00250777 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250750: ;
    eax = MEM32(0x5BD984);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250764; /* je: equal / zero */

loc_00250759: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250776; /* jne: not equal / not zero */

loc_00250764: ;
    PUSH32(esp, 0x285EA0);
    PUSH32(esp, 0x0025076Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025076E: ;
    eax = MEM32(0x5BD984);
    esp = esp + 4;

loc_00250776: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250780
 * Original: 0x00250780 - 0x002507A7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250780: ;
    eax = MEM32(0x5BD988);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250794; /* je: equal / zero */

loc_00250789: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002507A6; /* jne: not equal / not zero */

loc_00250794: ;
    PUSH32(esp, 0x2882C0);
    PUSH32(esp, 0x0025079Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025079E: ;
    eax = MEM32(0x5BD988);
    esp = esp + 4;

loc_002507A6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002507B0
 * Original: 0x002507B0 - 0x002507D7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002507B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002507B0: ;
    eax = MEM32(0x5BD998);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002507C4; /* je: equal / zero */

loc_002507B9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002507D6; /* jne: not equal / not zero */

loc_002507C4: ;
    PUSH32(esp, 0x25F750);
    PUSH32(esp, 0x002507CEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002507CE: ;
    eax = MEM32(0x5BD998);
    esp = esp + 4;

loc_002507D6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002507E0
 * Original: 0x002507E0 - 0x00250807 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002507E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002507E0: ;
    eax = MEM32(0x5BD994);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002507F4; /* je: equal / zero */

loc_002507E9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250806; /* jne: not equal / not zero */

loc_002507F4: ;
    PUSH32(esp, 0x27B4A0);
    PUSH32(esp, 0x002507FEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002507FE: ;
    eax = MEM32(0x5BD994);
    esp = esp + 4;

loc_00250806: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250810
 * Original: 0x00250810 - 0x00250837 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250810: ;
    eax = MEM32(0x5BD99C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250824; /* je: equal / zero */

loc_00250819: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250836; /* jne: not equal / not zero */

loc_00250824: ;
    PUSH32(esp, 0x25F7F0);
    PUSH32(esp, 0x0025082Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025082E: ;
    eax = MEM32(0x5BD99C);
    esp = esp + 4;

loc_00250836: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250840
 * Original: 0x00250840 - 0x00250867 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250840: ;
    eax = MEM32(0x5BD9A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250854; /* je: equal / zero */

loc_00250849: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250866; /* jne: not equal / not zero */

loc_00250854: ;
    PUSH32(esp, 0x288310);
    PUSH32(esp, 0x0025085Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025085E: ;
    eax = MEM32(0x5BD9A0);
    esp = esp + 4;

loc_00250866: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250870
 * Original: 0x00250870 - 0x00250897 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250870: ;
    eax = MEM32(0x5BDB0C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250884; /* je: equal / zero */

loc_00250879: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250896; /* jne: not equal / not zero */

loc_00250884: ;
    PUSH32(esp, 0x289490);
    PUSH32(esp, 0x0025088Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025088E: ;
    eax = MEM32(0x5BDB0C);
    esp = esp + 4;

loc_00250896: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002508A0
 * Original: 0x002508A0 - 0x002508C7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002508A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002508A0: ;
    eax = MEM32(0x5BD9A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002508B4; /* je: equal / zero */

loc_002508A9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002508C6; /* jne: not equal / not zero */

loc_002508B4: ;
    PUSH32(esp, 0x28C900);
    PUSH32(esp, 0x002508BEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002508BE: ;
    eax = MEM32(0x5BD9A4);
    esp = esp + 4;

loc_002508C6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002508D0
 * Original: 0x002508D0 - 0x002508F7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002508D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002508D0: ;
    eax = MEM32(0x5BD9A8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002508E4; /* je: equal / zero */

loc_002508D9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002508F6; /* jne: not equal / not zero */

loc_002508E4: ;
    PUSH32(esp, 0x25F890);
    PUSH32(esp, 0x002508EEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002508EE: ;
    eax = MEM32(0x5BD9A8);
    esp = esp + 4;

loc_002508F6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250900
 * Original: 0x00250900 - 0x00250927 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250900: ;
    eax = MEM32(0x5BD9AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250914; /* je: equal / zero */

loc_00250909: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250926; /* jne: not equal / not zero */

loc_00250914: ;
    PUSH32(esp, 0x285EF0);
    PUSH32(esp, 0x0025091Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025091E: ;
    eax = MEM32(0x5BD9AC);
    esp = esp + 4;

loc_00250926: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250930
 * Original: 0x00250930 - 0x00250957 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250930: ;
    eax = MEM32(0x5BD9B0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250944; /* je: equal / zero */

loc_00250939: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250956; /* jne: not equal / not zero */

loc_00250944: ;
    PUSH32(esp, 0x275680);
    PUSH32(esp, 0x0025094Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025094E: ;
    eax = MEM32(0x5BD9B0);
    esp = esp + 4;

loc_00250956: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250960
 * Original: 0x00250960 - 0x00250987 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250960: ;
    eax = MEM32(0x5BD9CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250974; /* je: equal / zero */

loc_00250969: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250986; /* jne: not equal / not zero */

loc_00250974: ;
    PUSH32(esp, 0x285F50);
    PUSH32(esp, 0x0025097Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025097E: ;
    eax = MEM32(0x5BD9CC);
    esp = esp + 4;

loc_00250986: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250990
 * Original: 0x00250990 - 0x002509B7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250990: ;
    eax = MEM32(0x5BDA78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002509A4; /* je: equal / zero */

loc_00250999: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002509B6; /* jne: not equal / not zero */

loc_002509A4: ;
    PUSH32(esp, 0x254F90);
    PUSH32(esp, 0x002509AEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002509AE: ;
    eax = MEM32(0x5BDA78);
    esp = esp + 4;

loc_002509B6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002509C0
 * Original: 0x002509C0 - 0x002509E7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002509C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002509C0: ;
    eax = MEM32(0x5BDA74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002509D4; /* je: equal / zero */

loc_002509C9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002509E6; /* jne: not equal / not zero */

loc_002509D4: ;
    PUSH32(esp, 0x275DF0);
    PUSH32(esp, 0x002509DEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002509DE: ;
    eax = MEM32(0x5BDA74);
    esp = esp + 4;

loc_002509E6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002509F0
 * Original: 0x002509F0 - 0x00250A17 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002509F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002509F0: ;
    eax = MEM32(0x5BDA70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250A04; /* je: equal / zero */

loc_002509F9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250A16; /* jne: not equal / not zero */

loc_00250A04: ;
    PUSH32(esp, 0x281620);
    PUSH32(esp, 0x00250A0Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00250A0E: ;
    eax = MEM32(0x5BDA70);
    esp = esp + 4;

loc_00250A16: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250A20
 * Original: 0x00250A20 - 0x00250A47 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250A20: ;
    eax = MEM32(0x5BD9E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250A34; /* je: equal / zero */

loc_00250A29: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250A46; /* jne: not equal / not zero */

loc_00250A34: ;
    PUSH32(esp, 0x2875A0);
    PUSH32(esp, 0x00250A3Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00250A3E: ;
    eax = MEM32(0x5BD9E4);
    esp = esp + 4;

loc_00250A46: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250A50
 * Original: 0x00250A50 - 0x00250A77 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250A50: ;
    eax = MEM32(0x5BD9E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250A64; /* je: equal / zero */

loc_00250A59: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250A76; /* jne: not equal / not zero */

loc_00250A64: ;
    PUSH32(esp, 0x2892C0);
    PUSH32(esp, 0x00250A6Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00250A6E: ;
    eax = MEM32(0x5BD9E0);
    esp = esp + 4;

loc_00250A76: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250A80
 * Original: 0x00250A80 - 0x00250AA7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250A80: ;
    eax = MEM32(0x5BD9DC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250A94; /* je: equal / zero */

loc_00250A89: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250AA6; /* jne: not equal / not zero */

loc_00250A94: ;
    PUSH32(esp, 0x25FA40);
    PUSH32(esp, 0x00250A9Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00250A9E: ;
    eax = MEM32(0x5BD9DC);
    esp = esp + 4;

loc_00250AA6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250AB0
 * Original: 0x00250AB0 - 0x00250AD7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250AB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250AB0: ;
    eax = MEM32(0x5BD9D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250AC4; /* je: equal / zero */

loc_00250AB9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250AD6; /* jne: not equal / not zero */

loc_00250AC4: ;
    PUSH32(esp, 0x27B8D0);
    PUSH32(esp, 0x00250ACEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00250ACE: ;
    eax = MEM32(0x5BD9D8);
    esp = esp + 4;

loc_00250AD6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250AE0
 * Original: 0x00250AE0 - 0x00250B07 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250AE0: ;
    eax = MEM32(0x5BD9D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250AF4; /* je: equal / zero */

loc_00250AE9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250B06; /* jne: not equal / not zero */

loc_00250AF4: ;
    PUSH32(esp, 0x27B880);
    PUSH32(esp, 0x00250AFEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00250AFE: ;
    eax = MEM32(0x5BD9D4);
    esp = esp + 4;

loc_00250B06: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250B10
 * Original: 0x00250B10 - 0x00250B37 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250B10: ;
    eax = MEM32(0x5BD9D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250B24; /* je: equal / zero */

loc_00250B19: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250B36; /* jne: not equal / not zero */

loc_00250B24: ;
    PUSH32(esp, 0x285FA0);
    PUSH32(esp, 0x00250B2Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00250B2E: ;
    eax = MEM32(0x5BD9D0);
    esp = esp + 4;

loc_00250B36: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250B40
 * Original: 0x00250B40 - 0x00250B67 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250B40: ;
    eax = MEM32(0x5BD9F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250B54; /* je: equal / zero */

loc_00250B49: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250B66; /* jne: not equal / not zero */

loc_00250B54: ;
    PUSH32(esp, 0x25FB40);
    PUSH32(esp, 0x00250B5Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00250B5E: ;
    eax = MEM32(0x5BD9F8);
    esp = esp + 4;

loc_00250B66: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250B70
 * Original: 0x00250B70 - 0x00250B97 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250B70: ;
    eax = MEM32(0x5BD9EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250B84; /* je: equal / zero */

loc_00250B79: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250B96; /* jne: not equal / not zero */

loc_00250B84: ;
    PUSH32(esp, 0x2875F0);
    PUSH32(esp, 0x00250B8Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00250B8E: ;
    eax = MEM32(0x5BD9EC);
    esp = esp + 4;

loc_00250B96: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250BA0
 * Original: 0x00250BA0 - 0x00250BC7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250BA0: ;
    eax = MEM32(0x5BDA18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250BB4; /* je: equal / zero */

loc_00250BA9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250BC6; /* jne: not equal / not zero */

loc_00250BB4: ;
    PUSH32(esp, 0x25FCD0);
    PUSH32(esp, 0x00250BBEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00250BBE: ;
    eax = MEM32(0x5BDA18);
    esp = esp + 4;

loc_00250BC6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250BD0
 * Original: 0x00250BD0 - 0x00250BF7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250BD0: ;
    eax = MEM32(0x5BDA14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250BE4; /* je: equal / zero */

loc_00250BD9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250BF6; /* jne: not equal / not zero */

loc_00250BE4: ;
    PUSH32(esp, 0x2876A0);
    PUSH32(esp, 0x00250BEEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00250BEE: ;
    eax = MEM32(0x5BDA14);
    esp = esp + 4;

loc_00250BF6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250C00
 * Original: 0x00250C00 - 0x00250C27 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250C00: ;
    eax = MEM32(0x5BDA0C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250C14; /* je: equal / zero */

loc_00250C09: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250C26; /* jne: not equal / not zero */

loc_00250C14: ;
    PUSH32(esp, 0x25FC20);
    PUSH32(esp, 0x00250C1Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00250C1E: ;
    eax = MEM32(0x5BDA0C);
    esp = esp + 4;

loc_00250C26: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250C30
 * Original: 0x00250C30 - 0x00250C57 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250C30: ;
    eax = MEM32(0x5BDA08);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250C44; /* je: equal / zero */

loc_00250C39: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250C56; /* jne: not equal / not zero */

loc_00250C44: ;
    PUSH32(esp, 0x27B9B0);
    PUSH32(esp, 0x00250C4Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00250C4E: ;
    eax = MEM32(0x5BDA08);
    esp = esp + 4;

loc_00250C56: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250C60
 * Original: 0x00250C60 - 0x00250C87 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250C60: ;
    eax = MEM32(0x5BDA04);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250C74; /* je: equal / zero */

loc_00250C69: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250C86; /* jne: not equal / not zero */

loc_00250C74: ;
    PUSH32(esp, 0x285FF0);
    PUSH32(esp, 0x00250C7Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00250C7E: ;
    eax = MEM32(0x5BDA04);
    esp = esp + 4;

loc_00250C86: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250C90
 * Original: 0x00250C90 - 0x00250CB7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250C90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250C90: ;
    eax = MEM32(0x5BDA10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250CA4; /* je: equal / zero */

loc_00250C99: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250CB6; /* jne: not equal / not zero */

loc_00250CA4: ;
    PUSH32(esp, 0x287650);
    PUSH32(esp, 0x00250CAEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00250CAE: ;
    eax = MEM32(0x5BDA10);
    esp = esp + 4;

loc_00250CB6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250CC0
 * Original: 0x00250CC0 - 0x00250CE7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250CC0: ;
    eax = MEM32(0x5BDA20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250CD4; /* je: equal / zero */

loc_00250CC9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250CE6; /* jne: not equal / not zero */

loc_00250CD4: ;
    PUSH32(esp, 0x286040);
    PUSH32(esp, 0x00250CDEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00250CDE: ;
    eax = MEM32(0x5BDA20);
    esp = esp + 4;

loc_00250CE6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250CF0
 * Original: 0x00250CF0 - 0x00250D17 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250CF0: ;
    eax = MEM32(0x5BDA1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250D04; /* je: equal / zero */

loc_00250CF9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250D16; /* jne: not equal / not zero */

loc_00250D04: ;
    PUSH32(esp, 0x288370);
    PUSH32(esp, 0x00250D0Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00250D0E: ;
    eax = MEM32(0x5BDA1C);
    esp = esp + 4;

loc_00250D16: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250D20
 * Original: 0x00250D20 - 0x00250D47 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250D20: ;
    eax = MEM32(0x5BDA24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250D34; /* je: equal / zero */

loc_00250D29: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250D46; /* jne: not equal / not zero */

loc_00250D34: ;
    PUSH32(esp, 0x286090);
    PUSH32(esp, 0x00250D3Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00250D3E: ;
    eax = MEM32(0x5BDA24);
    esp = esp + 4;

loc_00250D46: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250D50
 * Original: 0x00250D50 - 0x00250D77 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250D50: ;
    eax = MEM32(0x5BDA28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250D64; /* je: equal / zero */

loc_00250D59: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250D76; /* jne: not equal / not zero */

loc_00250D64: ;
    PUSH32(esp, 0x2860E0);
    PUSH32(esp, 0x00250D6Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00250D6E: ;
    eax = MEM32(0x5BDA28);
    esp = esp + 4;

loc_00250D76: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250D80
 * Original: 0x00250D80 - 0x00250DA7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250D80: ;
    eax = MEM32(0x5BDBB8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250D94; /* je: equal / zero */

loc_00250D89: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250DA6; /* jne: not equal / not zero */

loc_00250D94: ;
    PUSH32(esp, 0x27C4F0);
    PUSH32(esp, 0x00250D9Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00250D9E: ;
    eax = MEM32(0x5BDBB8);
    esp = esp + 4;

loc_00250DA6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250DB0
 * Original: 0x00250DB0 - 0x00250DD7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250DB0: ;
    eax = MEM32(0x5BDBB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250DC4; /* je: equal / zero */

loc_00250DB9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250DD6; /* jne: not equal / not zero */

loc_00250DC4: ;
    PUSH32(esp, 0x286470);
    PUSH32(esp, 0x00250DCEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00250DCE: ;
    eax = MEM32(0x5BDBB0);
    esp = esp + 4;

loc_00250DD6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250DE0
 * Original: 0x00250DE0 - 0x00250E07 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250DE0: ;
    eax = MEM32(0x5BDBDC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250DF4; /* je: equal / zero */

loc_00250DE9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250E06; /* jne: not equal / not zero */

loc_00250DF4: ;
    PUSH32(esp, 0x261DE0);
    PUSH32(esp, 0x00250DFEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00250DFE: ;
    eax = MEM32(0x5BDBDC);
    esp = esp + 4;

loc_00250E06: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250E10
 * Original: 0x00250E10 - 0x00250E37 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250E10: ;
    eax = MEM32(0x5BDBD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250E24; /* je: equal / zero */

loc_00250E19: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250E36; /* jne: not equal / not zero */

loc_00250E24: ;
    PUSH32(esp, 0x27C560);
    PUSH32(esp, 0x00250E2Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00250E2E: ;
    eax = MEM32(0x5BDBD8);
    esp = esp + 4;

loc_00250E36: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250E40
 * Original: 0x00250E40 - 0x00250E67 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250E40: ;
    eax = MEM32(0x5BDBD4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250E54; /* je: equal / zero */

loc_00250E49: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250E66; /* jne: not equal / not zero */

loc_00250E54: ;
    PUSH32(esp, 0x257030);
    PUSH32(esp, 0x00250E5Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00250E5E: ;
    eax = MEM32(0x5BDBD4);
    esp = esp + 4;

loc_00250E66: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250E70
 * Original: 0x00250E70 - 0x00250E97 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250E70: ;
    eax = MEM32(0x5BDBD0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250E84; /* je: equal / zero */

loc_00250E79: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250E96; /* jne: not equal / not zero */

loc_00250E84: ;
    PUSH32(esp, 0x276E80);
    PUSH32(esp, 0x00250E8Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00250E8E: ;
    eax = MEM32(0x5BDBD0);
    esp = esp + 4;

loc_00250E96: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250EA0
 * Original: 0x00250EA0 - 0x00250EC7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250EA0: ;
    eax = MEM32(0x5BDBCC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250EB4; /* je: equal / zero */

loc_00250EA9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250EC6; /* jne: not equal / not zero */

loc_00250EB4: ;
    PUSH32(esp, 0x2819D0);
    PUSH32(esp, 0x00250EBEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00250EBE: ;
    eax = MEM32(0x5BDBCC);
    esp = esp + 4;

loc_00250EC6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250ED0
 * Original: 0x00250ED0 - 0x00250EF7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250ED0: ;
    eax = MEM32(0x5BDBC8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250EE4; /* je: equal / zero */

loc_00250ED9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250EF6; /* jne: not equal / not zero */

loc_00250EE4: ;
    PUSH32(esp, 0x2879B0);
    PUSH32(esp, 0x00250EEEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00250EEE: ;
    eax = MEM32(0x5BDBC8);
    esp = esp + 4;

loc_00250EF6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250F00
 * Original: 0x00250F00 - 0x00250F27 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250F00: ;
    eax = MEM32(0x5BDBC4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250F14; /* je: equal / zero */

loc_00250F09: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250F26; /* jne: not equal / not zero */

loc_00250F14: ;
    PUSH32(esp, 0x2895A0);
    PUSH32(esp, 0x00250F1Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00250F1E: ;
    eax = MEM32(0x5BDBC4);
    esp = esp + 4;

loc_00250F26: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250F30
 * Original: 0x00250F30 - 0x00250F57 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250F30: ;
    eax = MEM32(0x5BDBBC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250F44; /* je: equal / zero */

loc_00250F39: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250F56; /* jne: not equal / not zero */

loc_00250F44: ;
    PUSH32(esp, 0x276DD0);
    PUSH32(esp, 0x00250F4Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00250F4E: ;
    eax = MEM32(0x5BDBBC);
    esp = esp + 4;

loc_00250F56: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250F60
 * Original: 0x00250F60 - 0x00250F87 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250F60: ;
    eax = MEM32(0x5BDA4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250F74; /* je: equal / zero */

loc_00250F69: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250F86; /* jne: not equal / not zero */

loc_00250F74: ;
    PUSH32(esp, 0x28F2E0);
    PUSH32(esp, 0x00250F7Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00250F7E: ;
    eax = MEM32(0x5BDA4C);
    esp = esp + 4;

loc_00250F86: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250F90
 * Original: 0x00250F90 - 0x00250FB7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250F90: ;
    eax = MEM32(0x5BDA34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250FA4; /* je: equal / zero */

loc_00250F99: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250FB6; /* jne: not equal / not zero */

loc_00250FA4: ;
    PUSH32(esp, 0x28F810);
    PUSH32(esp, 0x00250FAEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00250FAE: ;
    eax = MEM32(0x5BDA34);
    esp = esp + 4;

loc_00250FB6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250FC0
 * Original: 0x00250FC0 - 0x00250FE7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250FC0: ;
    eax = MEM32(0x5BDA48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00250FD4; /* je: equal / zero */

loc_00250FC9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00250FE6; /* jne: not equal / not zero */

loc_00250FD4: ;
    PUSH32(esp, 0x289330);
    PUSH32(esp, 0x00250FDEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00250FDE: ;
    eax = MEM32(0x5BDA48);
    esp = esp + 4;

loc_00250FE6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250FF0
 * Original: 0x00250FF0 - 0x00251017 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250FF0: ;
    eax = MEM32(0x5BDA44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00251004; /* je: equal / zero */

loc_00250FF9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00251016; /* jne: not equal / not zero */

loc_00251004: ;
    PUSH32(esp, 0x28DBB0);
    PUSH32(esp, 0x0025100Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025100E: ;
    eax = MEM32(0x5BDA44);
    esp = esp + 4;

loc_00251016: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00251020
 * Original: 0x00251020 - 0x00251047 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00251020: ;
    eax = MEM32(0x5BDA38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00251034; /* je: equal / zero */

loc_00251029: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00251046; /* jne: not equal / not zero */

loc_00251034: ;
    PUSH32(esp, 0x28E190);
    PUSH32(esp, 0x0025103Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025103E: ;
    eax = MEM32(0x5BDA38);
    esp = esp + 4;

loc_00251046: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00251050
 * Original: 0x00251050 - 0x00251077 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00251050: ;
    eax = MEM32(0x5BDA40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00251064; /* je: equal / zero */

loc_00251059: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00251076; /* jne: not equal / not zero */

loc_00251064: ;
    PUSH32(esp, 0x286180);
    PUSH32(esp, 0x0025106Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025106E: ;
    eax = MEM32(0x5BDA40);
    esp = esp + 4;

loc_00251076: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00251080
 * Original: 0x00251080 - 0x002510A7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00251080: ;
    eax = MEM32(0x5BDA3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00251094; /* je: equal / zero */

loc_00251089: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002510A6; /* jne: not equal / not zero */

loc_00251094: ;
    PUSH32(esp, 0x288400);
    PUSH32(esp, 0x0025109Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025109E: ;
    eax = MEM32(0x5BDA3C);
    esp = esp + 4;

loc_002510A6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002510B0
 * Original: 0x002510B0 - 0x002510D7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002510B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002510B0: ;
    eax = MEM32(0x5BDA58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002510C4; /* je: equal / zero */

loc_002510B9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002510D6; /* jne: not equal / not zero */

loc_002510C4: ;
    PUSH32(esp, 0x2602E0);
    PUSH32(esp, 0x002510CEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002510CE: ;
    eax = MEM32(0x5BDA58);
    esp = esp + 4;

loc_002510D6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002510E0
 * Original: 0x002510E0 - 0x00251107 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002510E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002510E0: ;
    eax = MEM32(0x5BDA54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002510F4; /* je: equal / zero */

loc_002510E9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00251106; /* jne: not equal / not zero */

loc_002510F4: ;
    PUSH32(esp, 0x288450);
    PUSH32(esp, 0x002510FEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002510FE: ;
    eax = MEM32(0x5BDA54);
    esp = esp + 4;

loc_00251106: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00251110
 * Original: 0x00251110 - 0x00251137 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00251110: ;
    eax = MEM32(0x5BDA5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00251124; /* je: equal / zero */

loc_00251119: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00251136; /* jne: not equal / not zero */

loc_00251124: ;
    PUSH32(esp, 0x260330);
    PUSH32(esp, 0x0025112Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025112E: ;
    eax = MEM32(0x5BDA5C);
    esp = esp + 4;

loc_00251136: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00251140
 * Original: 0x00251140 - 0x00251167 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00251140: ;
    eax = MEM32(0x5BDA64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00251154; /* je: equal / zero */

loc_00251149: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00251166; /* jne: not equal / not zero */

loc_00251154: ;
    PUSH32(esp, 0x287780);
    PUSH32(esp, 0x0025115Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025115E: ;
    eax = MEM32(0x5BDA64);
    esp = esp + 4;

loc_00251166: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00251170
 * Original: 0x00251170 - 0x00251197 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00251170: ;
    eax = MEM32(0x5BDA68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00251184; /* je: equal / zero */

loc_00251179: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00251196; /* jne: not equal / not zero */

loc_00251184: ;
    PUSH32(esp, 0x28F100);
    PUSH32(esp, 0x0025118Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025118E: ;
    eax = MEM32(0x5BDA68);
    esp = esp + 4;

loc_00251196: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002511A0
 * Original: 0x002511A0 - 0x002511C7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002511A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002511A0: ;
    eax = MEM32(0x5BDA6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002511B4; /* je: equal / zero */

loc_002511A9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002511C6; /* jne: not equal / not zero */

loc_002511B4: ;
    PUSH32(esp, 0x289390);
    PUSH32(esp, 0x002511BEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002511BE: ;
    eax = MEM32(0x5BDA6C);
    esp = esp + 4;

loc_002511C6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002511D0
 * Original: 0x002511D0 - 0x002511F7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002511D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002511D0: ;
    eax = MEM32(0x5BDA7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002511E4; /* je: equal / zero */

loc_002511D9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002511F6; /* jne: not equal / not zero */

loc_002511E4: ;
    PUSH32(esp, 0x2861D0);
    PUSH32(esp, 0x002511EEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002511EE: ;
    eax = MEM32(0x5BDA7C);
    esp = esp + 4;

loc_002511F6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00251200
 * Original: 0x00251200 - 0x00251227 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00251200: ;
    eax = MEM32(0x5BDA88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00251214; /* je: equal / zero */

loc_00251209: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00251226; /* jne: not equal / not zero */

loc_00251214: ;
    PUSH32(esp, 0x27BDC0);
    PUSH32(esp, 0x0025121Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025121E: ;
    eax = MEM32(0x5BDA88);
    esp = esp + 4;

loc_00251226: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00251230
 * Original: 0x00251230 - 0x00251257 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00251230: ;
    eax = MEM32(0x5BDA84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00251244; /* je: equal / zero */

loc_00251239: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00251256; /* jne: not equal / not zero */

loc_00251244: ;
    PUSH32(esp, 0x286220);
    PUSH32(esp, 0x0025124Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025124E: ;
    eax = MEM32(0x5BDA84);
    esp = esp + 4;

loc_00251256: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00251260
 * Original: 0x00251260 - 0x00251287 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00251260: ;
    eax = MEM32(0x5BDA98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00251274; /* je: equal / zero */

loc_00251269: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00251286; /* jne: not equal / not zero */

loc_00251274: ;
    PUSH32(esp, 0x28F970);
    PUSH32(esp, 0x0025127Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025127E: ;
    eax = MEM32(0x5BDA98);
    esp = esp + 4;

loc_00251286: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00251290
 * Original: 0x00251290 - 0x002512B7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00251290: ;
    eax = MEM32(0x5BDAA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002512A4; /* je: equal / zero */

loc_00251299: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002512B6; /* jne: not equal / not zero */

loc_002512A4: ;
    PUSH32(esp, 0x2893F0);
    PUSH32(esp, 0x002512AEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002512AE: ;
    eax = MEM32(0x5BDAA0);
    esp = esp + 4;

loc_002512B6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002512C0
 * Original: 0x002512C0 - 0x002512E7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002512C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002512C0: ;
    eax = MEM32(0x5BDA9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002512D4; /* je: equal / zero */

loc_002512C9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002512E6; /* jne: not equal / not zero */

loc_002512D4: ;
    PUSH32(esp, 0x28DC00);
    PUSH32(esp, 0x002512DEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002512DE: ;
    eax = MEM32(0x5BDA9C);
    esp = esp + 4;

loc_002512E6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002512F0
 * Original: 0x002512F0 - 0x00251317 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002512F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002512F0: ;
    eax = MEM32(0x5BDABC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00251304; /* je: equal / zero */

loc_002512F9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00251316; /* jne: not equal / not zero */

loc_00251304: ;
    PUSH32(esp, 0x276080);
    PUSH32(esp, 0x0025130Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025130E: ;
    eax = MEM32(0x5BDABC);
    esp = esp + 4;

loc_00251316: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00251320
 * Original: 0x00251320 - 0x00251347 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00251320: ;
    eax = MEM32(0x5BDAA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00251334; /* je: equal / zero */

loc_00251329: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00251346; /* jne: not equal / not zero */

loc_00251334: ;
    PUSH32(esp, 0x281700);
    PUSH32(esp, 0x0025133Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025133E: ;
    eax = MEM32(0x5BDAA4);
    esp = esp + 4;

loc_00251346: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00251350
 * Original: 0x00251350 - 0x00251377 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00251350: ;
    eax = MEM32(0x5BDAA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00251364; /* je: equal / zero */

loc_00251359: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00251376; /* jne: not equal / not zero */

loc_00251364: ;
    PUSH32(esp, 0x2606B0);
    PUSH32(esp, 0x0025136Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025136E: ;
    eax = MEM32(0x5BDAA8);
    esp = esp + 4;

loc_00251376: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00251380
 * Original: 0x00251380 - 0x002513A7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00251380: ;
    eax = MEM32(0x5BDBA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00251394; /* je: equal / zero */

loc_00251389: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002513A6; /* jne: not equal / not zero */

loc_00251394: ;
    PUSH32(esp, 0x276CC0);
    PUSH32(esp, 0x0025139Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025139E: ;
    eax = MEM32(0x5BDBA4);
    esp = esp + 4;

loc_002513A6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002513B0
 * Original: 0x002513B0 - 0x002513D7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002513B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002513B0: ;
    eax = MEM32(0x5BDBA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002513C4; /* je: equal / zero */

loc_002513B9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002513D6; /* jne: not equal / not zero */

loc_002513C4: ;
    PUSH32(esp, 0x281920);
    PUSH32(esp, 0x002513CEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002513CE: ;
    eax = MEM32(0x5BDBA0);
    esp = esp + 4;

loc_002513D6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002513E0
 * Original: 0x002513E0 - 0x00251407 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002513E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002513E0: ;
    eax = MEM32(0x5BDB9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002513F4; /* je: equal / zero */

loc_002513E9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00251406; /* jne: not equal / not zero */

loc_002513F4: ;
    PUSH32(esp, 0x287950);
    PUSH32(esp, 0x002513FEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002513FE: ;
    eax = MEM32(0x5BDB9C);
    esp = esp + 4;

loc_00251406: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00251410
 * Original: 0x00251410 - 0x00251437 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00251410: ;
    eax = MEM32(0x5BDB98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00251424; /* je: equal / zero */

loc_00251419: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00251436; /* jne: not equal / not zero */

loc_00251424: ;
    PUSH32(esp, 0x2818D0);
    PUSH32(esp, 0x0025142Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025142E: ;
    eax = MEM32(0x5BDB98);
    esp = esp + 4;

loc_00251436: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00251440
 * Original: 0x00251440 - 0x00251467 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00251440: ;
    eax = MEM32(0x5BDB64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00251454; /* je: equal / zero */

loc_00251449: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00251466; /* jne: not equal / not zero */

loc_00251454: ;
    PUSH32(esp, 0x261930);
    PUSH32(esp, 0x0025145Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025145E: ;
    eax = MEM32(0x5BDB64);
    esp = esp + 4;

loc_00251466: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00251470
 * Original: 0x00251470 - 0x00251497 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00251470: ;
    eax = MEM32(0x5BDB54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00251484; /* je: equal / zero */

loc_00251479: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00251496; /* jne: not equal / not zero */

loc_00251484: ;
    PUSH32(esp, 0x27C270);
    PUSH32(esp, 0x0025148Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025148E: ;
    eax = MEM32(0x5BDB54);
    esp = esp + 4;

loc_00251496: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002514A0
 * Original: 0x002514A0 - 0x002514C7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002514A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002514A0: ;
    eax = MEM32(0x5BDB50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002514B4; /* je: equal / zero */

loc_002514A9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002514C6; /* jne: not equal / not zero */

loc_002514B4: ;
    PUSH32(esp, 0x27C220);
    PUSH32(esp, 0x002514BEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002514BE: ;
    eax = MEM32(0x5BDB50);
    esp = esp + 4;

loc_002514C6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002514D0
 * Original: 0x002514D0 - 0x002514F7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002514D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002514D0: ;
    eax = MEM32(0x5BDAAC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002514E4; /* je: equal / zero */

loc_002514D9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002514F6; /* jne: not equal / not zero */

loc_002514E4: ;
    PUSH32(esp, 0x288760);
    PUSH32(esp, 0x002514EEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002514EE: ;
    eax = MEM32(0x5BDAAC);
    esp = esp + 4;

loc_002514F6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00251500
 * Original: 0x00251500 - 0x00251527 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00251500: ;
    eax = MEM32(0x5BDAC0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00251514; /* je: equal / zero */

loc_00251509: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00251526; /* jne: not equal / not zero */

loc_00251514: ;
    PUSH32(esp, 0x281750);
    PUSH32(esp, 0x0025151Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025151E: ;
    eax = MEM32(0x5BDAC0);
    esp = esp + 4;

loc_00251526: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00251530
 * Original: 0x00251530 - 0x00251557 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00251530: ;
    eax = MEM32(0x5BDACC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00251544; /* je: equal / zero */

loc_00251539: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00251556; /* jne: not equal / not zero */

loc_00251544: ;
    PUSH32(esp, 0x276140);
    PUSH32(esp, 0x0025154Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025154E: ;
    eax = MEM32(0x5BDACC);
    esp = esp + 4;

loc_00251556: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00251560
 * Original: 0x00251560 - 0x00251587 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00251560: ;
    eax = MEM32(0x5BDAC8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00251574; /* je: equal / zero */

loc_00251569: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00251586; /* jne: not equal / not zero */

loc_00251574: ;
    PUSH32(esp, 0x27BE80);
    PUSH32(esp, 0x0025157Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025157E: ;
    eax = MEM32(0x5BDAC8);
    esp = esp + 4;

loc_00251586: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00251590
 * Original: 0x00251590 - 0x002515B7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00251590: ;
    eax = MEM32(0x5BDAE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002515A4; /* je: equal / zero */

loc_00251599: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002515B6; /* jne: not equal / not zero */

loc_002515A4: ;
    PUSH32(esp, 0x2608E0);
    PUSH32(esp, 0x002515AEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002515AE: ;
    eax = MEM32(0x5BDAE0);
    esp = esp + 4;

loc_002515B6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002515C0
 * Original: 0x002515C0 - 0x002515E7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002515C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002515C0: ;
    eax = MEM32(0x5BDADC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002515D4; /* je: equal / zero */

loc_002515C9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002515E6; /* jne: not equal / not zero */

loc_002515D4: ;
    PUSH32(esp, 0x27BF50);
    PUSH32(esp, 0x002515DEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002515DE: ;
    eax = MEM32(0x5BDADC);
    esp = esp + 4;

loc_002515E6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002515F0
 * Original: 0x002515F0 - 0x00251617 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002515F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002515F0: ;
    eax = MEM32(0x5BDAD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00251604; /* je: equal / zero */

loc_002515F9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00251616; /* jne: not equal / not zero */

loc_00251604: ;
    PUSH32(esp, 0x28DEB0);
    PUSH32(esp, 0x0025160Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025160E: ;
    eax = MEM32(0x5BDAD8);
    esp = esp + 4;

loc_00251616: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00251620
 * Original: 0x00251620 - 0x00251647 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00251620: ;
    eax = MEM32(0x5BDAF8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00251634; /* je: equal / zero */

loc_00251629: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00251646; /* jne: not equal / not zero */

loc_00251634: ;
    PUSH32(esp, 0x261480);
    PUSH32(esp, 0x0025163Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025163E: ;
    eax = MEM32(0x5BDAF8);
    esp = esp + 4;

loc_00251646: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00251650
 * Original: 0x00251650 - 0x00251677 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00251650: ;
    eax = MEM32(0x5BDAFC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00251664; /* je: equal / zero */

loc_00251659: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00251676; /* jne: not equal / not zero */

loc_00251664: ;
    PUSH32(esp, 0x289440);
    PUSH32(esp, 0x0025166Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025166E: ;
    eax = MEM32(0x5BDAFC);
    esp = esp + 4;

loc_00251676: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00251680
 * Original: 0x00251680 - 0x002516A7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00251680: ;
    eax = MEM32(0x5BDB04);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00251694; /* je: equal / zero */

loc_00251689: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002516A6; /* jne: not equal / not zero */

loc_00251694: ;
    PUSH32(esp, 0x2817C0);
    PUSH32(esp, 0x0025169Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025169E: ;
    eax = MEM32(0x5BDB04);
    esp = esp + 4;

loc_002516A6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002516B0
 * Original: 0x002516B0 - 0x002516D7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002516B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002516B0: ;
    eax = MEM32(0x5BDB00);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002516C4; /* je: equal / zero */

loc_002516B9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002516D6; /* jne: not equal / not zero */

loc_002516C4: ;
    PUSH32(esp, 0x286310);
    PUSH32(esp, 0x002516CEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002516CE: ;
    eax = MEM32(0x5BDB00);
    esp = esp + 4;

loc_002516D6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002516E0
 * Original: 0x002516E0 - 0x00251707 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002516E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002516E0: ;
    eax = MEM32(0x5BDB10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002516F4; /* je: equal / zero */

loc_002516E9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00251706; /* jne: not equal / not zero */

loc_002516F4: ;
    PUSH32(esp, 0x261580);
    PUSH32(esp, 0x002516FEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002516FE: ;
    eax = MEM32(0x5BDB10);
    esp = esp + 4;

loc_00251706: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00251710
 * Original: 0x00251710 - 0x00251737 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00251710: ;
    eax = MEM32(0x5BDB20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00251724; /* je: equal / zero */

loc_00251719: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00251736; /* jne: not equal / not zero */

loc_00251724: ;
    PUSH32(esp, 0x261610);
    PUSH32(esp, 0x0025172Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025172E: ;
    eax = MEM32(0x5BDB20);
    esp = esp + 4;

loc_00251736: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00251740
 * Original: 0x00251740 - 0x00251767 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00251740: ;
    eax = MEM32(0x5BDB28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00251754; /* je: equal / zero */

loc_00251749: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00251766; /* jne: not equal / not zero */

loc_00251754: ;
    PUSH32(esp, 0x281810);
    PUSH32(esp, 0x0025175Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025175E: ;
    eax = MEM32(0x5BDB28);
    esp = esp + 4;

loc_00251766: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00251770
 * Original: 0x00251770 - 0x00251797 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00251770: ;
    eax = MEM32(0x5BDB48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00251784; /* je: equal / zero */

loc_00251779: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00251796; /* jne: not equal / not zero */

loc_00251784: ;
    PUSH32(esp, 0x2894F0);
    PUSH32(esp, 0x0025178Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025178E: ;
    eax = MEM32(0x5BDB48);
    esp = esp + 4;

loc_00251796: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002517A0
 * Original: 0x002517A0 - 0x002517C7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002517A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002517A0: ;
    eax = MEM32(0x5BDB44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002517B4; /* je: equal / zero */

loc_002517A9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002517C6; /* jne: not equal / not zero */

loc_002517B4: ;
    PUSH32(esp, 0x28DC60);
    PUSH32(esp, 0x002517BEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002517BE: ;
    eax = MEM32(0x5BDB44);
    esp = esp + 4;

loc_002517C6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002517D0
 * Original: 0x002517D0 - 0x002517F7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002517D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002517D0: ;
    eax = MEM32(0x5BDB4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002517E4; /* je: equal / zero */

loc_002517D9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002517F6; /* jne: not equal / not zero */

loc_002517E4: ;
    PUSH32(esp, 0x276AD0);
    PUSH32(esp, 0x002517EEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002517EE: ;
    eax = MEM32(0x5BDB4C);
    esp = esp + 4;

loc_002517F6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00251800
 * Original: 0x00251800 - 0x00251827 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00251800: ;
    eax = MEM32(0x5BDB7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00251814; /* je: equal / zero */

loc_00251809: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00251826; /* jne: not equal / not zero */

loc_00251814: ;
    PUSH32(esp, 0x261A30);
    PUSH32(esp, 0x0025181Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025181E: ;
    eax = MEM32(0x5BDB7C);
    esp = esp + 4;

loc_00251826: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00251830
 * Original: 0x00251830 - 0x00251857 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00251830: ;
    eax = MEM32(0x5BDB78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00251844; /* je: equal / zero */

loc_00251839: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00251856; /* jne: not equal / not zero */

loc_00251844: ;
    PUSH32(esp, 0x27C2E0);
    PUSH32(esp, 0x0025184Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025184E: ;
    eax = MEM32(0x5BDB78);
    esp = esp + 4;

loc_00251856: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00251860
 * Original: 0x00251860 - 0x00251887 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00251860: ;
    eax = MEM32(0x5BDB74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00251874; /* je: equal / zero */

loc_00251869: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00251886; /* jne: not equal / not zero */

loc_00251874: ;
    PUSH32(esp, 0x286410);
    PUSH32(esp, 0x0025187Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025187E: ;
    eax = MEM32(0x5BDB74);
    esp = esp + 4;

loc_00251886: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00251890
 * Original: 0x00251890 - 0x002518B7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00251890: ;
    eax = MEM32(0x5BDB94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002518A4; /* je: equal / zero */

loc_00251899: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002518B6; /* jne: not equal / not zero */

loc_002518A4: ;
    PUSH32(esp, 0x28E620);
    PUSH32(esp, 0x002518AEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002518AE: ;
    eax = MEM32(0x5BDB94);
    esp = esp + 4;

loc_002518B6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002518C0
 * Original: 0x002518C0 - 0x002518E7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002518C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002518C0: ;
    eax = MEM32(0x5BDB90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002518D4; /* je: equal / zero */

loc_002518C9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002518E6; /* jne: not equal / not zero */

loc_002518D4: ;
    PUSH32(esp, 0x28F150);
    PUSH32(esp, 0x002518DEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002518DE: ;
    eax = MEM32(0x5BDB90);
    esp = esp + 4;

loc_002518E6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002518F0
 * Original: 0x002518F0 - 0x00251917 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002518F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002518F0: ;
    eax = MEM32(0x5BDBAC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00251904; /* je: equal / zero */

loc_002518F9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00251916; /* jne: not equal / not zero */

loc_00251904: ;
    PUSH32(esp, 0x28C990);
    PUSH32(esp, 0x0025190Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025190E: ;
    eax = MEM32(0x5BDBAC);
    esp = esp + 4;

loc_00251916: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00251920
 * Original: 0x00251920 - 0x00251947 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00251920: ;
    eax = MEM32(0x5BDBA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00251934; /* je: equal / zero */

loc_00251929: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00251946; /* jne: not equal / not zero */

loc_00251934: ;
    PUSH32(esp, 0x28DFA0);
    PUSH32(esp, 0x0025193Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025193E: ;
    eax = MEM32(0x5BDBA8);
    esp = esp + 4;

loc_00251946: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00251950
 * Original: 0x00251950 - 0x00251977 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00251950: ;
    eax = MEM32(0x5BDBE4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00251964; /* je: equal / zero */

loc_00251959: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00251976; /* jne: not equal / not zero */

loc_00251964: ;
    PUSH32(esp, 0x28F8C0);
    PUSH32(esp, 0x0025196Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025196E: ;
    eax = MEM32(0x5BDBE4);
    esp = esp + 4;

loc_00251976: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00251980
 * Original: 0x00251980 - 0x002519A7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00251980: ;
    eax = MEM32(0x5BDBE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00251994; /* je: equal / zero */

loc_00251989: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002519A6; /* jne: not equal / not zero */

loc_00251994: ;
    PUSH32(esp, 0x28F9C0);
    PUSH32(esp, 0x0025199Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0025199E: ;
    eax = MEM32(0x5BDBE0);
    esp = esp + 4;

loc_002519A6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002519B0
 * Original: 0x002519B0 - 0x002519D7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002519B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002519B0: ;
    eax = MEM32(0x5BDBEC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002519C4; /* je: equal / zero */

loc_002519B9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002519D6; /* jne: not equal / not zero */

loc_002519C4: ;
    PUSH32(esp, 0x28E690);
    PUSH32(esp, 0x002519CEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002519CE: ;
    eax = MEM32(0x5BDBEC);
    esp = esp + 4;

loc_002519D6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002519E0
 * Original: 0x002519E0 - 0x00251A07 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002519E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002519E0: ;
    eax = MEM32(0x5BDBE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002519F4; /* je: equal / zero */

loc_002519E9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00251A06; /* jne: not equal / not zero */

loc_002519F4: ;
    PUSH32(esp, 0x28F330);
    PUSH32(esp, 0x002519FEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002519FE: ;
    eax = MEM32(0x5BDBE8);
    esp = esp + 4;

loc_00251A06: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00251A10
 * Original: 0x00251A10 - 0x00251A34 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251A10(void)
{

loc_00251A10: ;
    esp = esp - 8;
    ecx = esp;
    PUSH32(esp, 0x00251A1Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00251A1B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3FDBC0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00251A40
 * Original: 0x00251A40 - 0x00251A81 (65 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00251A40: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00251A50; /* jne: not equal / not zero */

loc_00251A49: ;
    MEM8(0x5BDF6C) = 1;

loc_00251A50: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x251A10);
    PUSH32(esp, 8);
    PUSH32(esp, 0x3FEDF4);
    PUSH32(esp, 0x24F920);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BD884);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00251A7Du); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00251A7D: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00251A90
 * Original: 0x00251A90 - 0x00251B06 (118 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00251A90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BD888);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00251AA0u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00251AA0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x46EE04);
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0x00251AB0u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00251AB0: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00251AB8u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00251AB8: ;
    edi = eax;
    eax = MEM32(0x5BD994);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00251ADC; /* jne: not equal / not zero */

loc_00251AC3: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00251ACEu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00251ACE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00251AD4u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00251AD4: ;
    esp = esp + 8;
    MEM32(0x5BD994) = eax;

loc_00251ADC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x46EE00);
    PUSH32(esp, 0x46EDFC);
    PUSH32(esp, 0x46EDF8);
    ecx = esi;
    MEM32(edi + 0x38) = eax;
    MEM8(edi + 0x34) = 1;
    MEM8(edi + 0x28) = 0;
    MEM8(edi + 0x27) = 2;
    PUSH32(esp, 0x00251B02u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00251B02: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251B10
 * Original: 0x00251B10 - 0x00251B16 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251B10(void)
{

loc_00251B10: ;
    eax = MEM32(0x5BD88C);
    esp += 4; return; /* ret */

}

/**
 * sub_00251B20
 * Original: 0x00251B20 - 0x00251B39 (25 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251B20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00251B20: ;
    SET_LO8(eax, MEM8(ecx + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00251B32; /* jne: not equal / not zero */

loc_00251B27: ;
    ecx = MEM32(0x5BC568);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x60)); return; /* indirect tail jmp */

loc_00251B32: ;
    eax = MEM32(ecx + 0x10);
    edx = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_00251B40
 * Original: 0x00251B40 - 0x00251B51 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251B40(void)
{

loc_00251B40: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00251B60
 * Original: 0x00251B60 - 0x00251B82 (34 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251B60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00251B60: ;
    eax = MEM32(0x5BDED0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00251B81; /* je: equal / zero */

loc_00251B6B: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00251B81; /* jne: not equal / not zero */

loc_00251B7C: ;
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_00251B81: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00251B90
 * Original: 0x00251B90 - 0x00251B96 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251B90(void)
{

loc_00251B90: ;
    eax = MEM32(0x5BD944);
    esp += 4; return; /* ret */

}

/**
 * sub_00251BA0
 * Original: 0x00251BA0 - 0x00251D3E (414 bytes, 146 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251BA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00251BA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BD890);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3FEF08);
    ecx = esi;
    PUSH32(esp, 0x00251BB6u); RECOMP_ABI_CALL(0x001EA4A0u, sub_001EA4A0); /* call 0x001EA4A0 */

loc_00251BB6: ;
    ecx = MEM32(esi + 0x28);
    edi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00251BC1u); RECOMP_ABI_CALL(0x001E8890u, sub_001E8890); /* call 0x001E8890 */

loc_00251BC1: ;
    ebp = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x00251BCCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00251BCC: ;
    edi = eax;
    PUSH32(esp, 0x00251BD3u); RECOMP_ABI_CALL(0x00292950u, sub_00292950); /* call 0x00292950 */

loc_00251BD3: ;
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    PUSH32(esp, ebp);
    ecx = esi;
    MEM32(edi + 0x38) = eax;
    MEM8(edi + 0x34) = 1;
    MEM8(edi + 0x26) = LO8(ebx);
    MEM32(edi + 0x1C) = 0x5BD1F4;
    PUSH32(esp, 0x00251BEFu); RECOMP_ABI_CALL(0x002093F0u, sub_002093F0); /* call 0x002093F0 */

loc_00251BEF: ;
    edx = MEM32(edi + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00251C06; /* jne: not equal / not zero */

loc_00251BFF: ;
    ecx = edi;
    PUSH32(esp, 0x00251C06u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00251C06: ;
    PUSH32(esp, 0x3FEEF8);
    ecx = esi;
    PUSH32(esp, 0x00251C12u); RECOMP_ABI_CALL(0x001EA4A0u, sub_001EA4A0); /* call 0x001EA4A0 */

loc_00251C12: ;
    ecx = MEM32(esi + 0x28);
    edi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00251C1Du); RECOMP_ABI_CALL(0x001E8890u, sub_001E8890); /* call 0x001E8890 */

loc_00251C1D: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    ebp = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00251C28u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00251C28: ;
    edi = eax;
    PUSH32(esp, 0x00251C2Fu); RECOMP_ABI_CALL(0x00292950u, sub_00292950); /* call 0x00292950 */

loc_00251C2F: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = esi;
    MEM32(edi + 0x38) = eax;
    MEM8(edi + 0x34) = 1;
    MEM8(edi + 0x26) = LO8(ebx);
    MEM32(edi + 0x1C) = 0x5BCDF0;
    PUSH32(esp, 0x00251C49u); RECOMP_ABI_CALL(0x002093F0u, sub_002093F0); /* call 0x002093F0 */

loc_00251C49: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00251C60; /* jne: not equal / not zero */

loc_00251C59: ;
    ecx = edi;
    PUSH32(esp, 0x00251C60u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00251C60: ;
    PUSH32(esp, 0x3FEEEC);
    ecx = esi;
    PUSH32(esp, 0x00251C6Cu); RECOMP_ABI_CALL(0x001EA4A0u, sub_001EA4A0); /* call 0x001EA4A0 */

loc_00251C6C: ;
    ecx = MEM32(esi + 0x28);
    edi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00251C77u); RECOMP_ABI_CALL(0x001E8890u, sub_001E8890); /* call 0x001E8890 */

loc_00251C77: ;
    ebp = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x00251C82u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00251C82: ;
    edi = eax;
    PUSH32(esp, 0x00251C89u); RECOMP_ABI_CALL(0x001A52E0u, sub_001A52E0); /* call 0x001A52E0 */

loc_00251C89: ;
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(edi + 0x38) = eax;
    PUSH32(esp, 0x00251C94u); RECOMP_ABI_CALL(0x0020E920u, sub_0020E920); /* call 0x0020E920 */

loc_00251C94: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = esi;
    MEM8(edi + 0x26) = LO8(ebx);
    MEM32(edi + 0x1C) = 0x5BCCA8;
    PUSH32(esp, 0x00251CA7u); RECOMP_ABI_CALL(0x002093F0u, sub_002093F0); /* call 0x002093F0 */

loc_00251CA7: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00251CBE; /* jne: not equal / not zero */

loc_00251CB7: ;
    ecx = edi;
    PUSH32(esp, 0x00251CBEu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00251CBE: ;
    PUSH32(esp, 0x3FEEE0);
    ecx = esi;
    PUSH32(esp, 0x00251CCAu); RECOMP_ABI_CALL(0x001EA4A0u, sub_001EA4A0); /* call 0x001EA4A0 */

loc_00251CCA: ;
    ecx = MEM32(esi + 0x28);
    edi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00251CD5u); RECOMP_ABI_CALL(0x001E8890u, sub_001E8890); /* call 0x001E8890 */

loc_00251CD5: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    ebp = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00251CE0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00251CE0: ;
    edi = eax;
    eax = MEM32(0x5BD9BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00251D04; /* jne: not equal / not zero */

loc_00251CEB: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00251CF6u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00251CF6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00251CFCu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00251CFC: ;
    esp = esp + 8;
    MEM32(0x5BD9BC) = eax;

loc_00251D04: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = esi;
    MEM32(edi + 0x38) = eax;
    MEM8(edi + 0x34) = 1;
    MEM8(edi + 0x26) = LO8(ebx);
    MEM32(edi + 0x1C) = 0x5BD5E8;
    PUSH32(esp, 0x00251D1Eu); RECOMP_ABI_CALL(0x002093F0u, sub_002093F0); /* call 0x002093F0 */

loc_00251D1E: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00251D39; /* jne: not equal / not zero */

loc_00251D2E: ;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_00251D39: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251D40
 * Original: 0x00251D40 - 0x00251D7E (62 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251D40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00251D40: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00251D50; /* jne: not equal / not zero */

loc_00251D49: ;
    MEM8(0x5BDF6C) = 1;

loc_00251D50: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, 0x3FEF18);
    PUSH32(esp, 0x24FCA0);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BD894);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00251D7Au); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00251D7A: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00251D80
 * Original: 0x00251D80 - 0x00251DBE (62 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00251D80: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00251D90; /* jne: not equal / not zero */

loc_00251D89: ;
    MEM8(0x5BDF6C) = 1;

loc_00251D90: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, 0x3FEF34);
    PUSH32(esp, 0x24FCD0);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BD898);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00251DBAu); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00251DBA: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00251DC0
 * Original: 0x00251DC0 - 0x00251DD7 (23 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251DC0(void)
{

loc_00251DC0: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00251DD4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00251DD4: ;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00251DE0
 * Original: 0x00251DE0 - 0x00251DEA (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251DE0(void)
{

loc_00251DE0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x20) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00251DF0
 * Original: 0x00251DF0 - 0x00251DF8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251DF0(void)
{

loc_00251DF0: ;
    MEM32(ecx + 0x28) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00251E00
 * Original: 0x00251E00 - 0x00251F59 (345 bytes, 117 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251E00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00251E00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BD89C);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00251E11u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00251E11: ;
    PUSH32(esp, 9);
    PUSH32(esp, 0x46EE74);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00251E21u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00251E21: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00251E29u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00251E29: ;
    ebx = eax;
    PUSH32(esp, 0x00251E30u); RECOMP_ABI_CALL(0x002230E0u, sub_002230E0); /* call 0x002230E0 */

loc_00251E30: ;
    PUSH32(esp, 0x3E25E0);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x34) = 1;
    PUSH32(esp, 0x00251E43u); RECOMP_ABI_CALL(0x001EA4A0u, sub_001EA4A0); /* call 0x001EA4A0 */

loc_00251E43: ;
    ecx = MEM32(esi + 0x28);
    ebx = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00251E4Eu); RECOMP_ABI_CALL(0x001E8890u, sub_001E8890); /* call 0x001E8890 */

loc_00251E4E: ;
    ebp = eax;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x00251E59u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00251E59: ;
    ebx = eax;
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, 0x00251E64u); RECOMP_ABI_CALL(0x0020E920u, sub_0020E920); /* call 0x0020E920 */

loc_00251E64: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    MEM8(ebx + 0x34) = 0;
    MEM32(ebx + 0x1C) = 0x5BD86C;
    PUSH32(esp, 0x00251E78u); RECOMP_ABI_CALL(0x002093F0u, sub_002093F0); /* call 0x002093F0 */

loc_00251E78: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00251E8F; /* jne: not equal / not zero */

loc_00251E88: ;
    ecx = ebx;
    PUSH32(esp, 0x00251E8Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00251E8F: ;
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00251E9Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00251E9A: ;
    ebx = eax;
    PUSH32(esp, 0x00251EA1u); RECOMP_ABI_CALL(0x0023B790u, sub_0023B790); /* call 0x0023B790 */

loc_00251EA1: ;
    edx = edi + 2;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x00251EAFu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00251EAF: ;
    ebx = eax;
    PUSH32(esp, 0x00251EB6u); RECOMP_ABI_CALL(0x0023B790u, sub_0023B790); /* call 0x0023B790 */

loc_00251EB6: ;
    MEM32(ebx + 0x38) = eax;
    eax = edi + 3;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00251EC4u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00251EC4: ;
    ebx = eax;
    PUSH32(esp, 0x00251ECBu); RECOMP_ABI_CALL(0x0023B790u, sub_0023B790); /* call 0x0023B790 */

loc_00251ECB: ;
    ecx = edi + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x00251ED9u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00251ED9: ;
    PUSH32(esp, 0xB);
    ecx = eax;
    PUSH32(esp, 0x00251EE2u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00251EE2: ;
    edx = edi + 5;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00251EEDu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00251EED: ;
    MEM32(eax + 0x34) = 3;
    eax = edi + 7;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00251EFFu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00251EFF: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    PUSH32(esp, 0x00251F0Au); RECOMP_ABI_CALL(0x001E7D60u, sub_001E7D60); /* call 0x001E7D60 */

loc_00251F0A: ;
    ecx = edi + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00251F15u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00251F15: ;
    ebx = eax;
    eax = MEM32(0x5BDAC4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00251F3A; /* jne: not equal / not zero */

loc_00251F20: ;
    edx = MEM32(0x46A684);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00251F2Cu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00251F2C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00251F32u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00251F32: ;
    esp = esp + 8;
    MEM32(0x5BDAC4) = eax;

loc_00251F3A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46EE50);
    PUSH32(esp, 0x46EE2C);
    PUSH32(esp, 0x46EE08);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x00251F54u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00251F54: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251F60
 * Original: 0x00251F60 - 0x00251F9E (62 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00251F60: ;
    ecx = MEM32(0x5BD89C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00251F9D; /* je: equal / zero */

loc_00251F6A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x3FE6C4);
    PUSH32(esp, 0x00251F75u); RECOMP_ABI_CALL(0x001EA4A0u, sub_001EA4A0); /* call 0x001EA4A0 */

loc_00251F75: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00251F9C; /* je: equal / zero */

loc_00251F7B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00251F86u); RECOMP_ABI_CALL(0x001E79B0u, sub_001E79B0); /* call 0x001E79B0 */

loc_00251F86: ;
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00251F91u); RECOMP_ABI_CALL(0x001E79B0u, sub_001E79B0); /* call 0x001E79B0 */

loc_00251F91: ;
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x00251F9Cu); RECOMP_ABI_CALL(0x001E79B0u, sub_001E79B0); /* call 0x001E79B0 */

loc_00251F9C: ;
    POP32(esp, esi);

loc_00251F9D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00251FA0
 * Original: 0x00251FA0 - 0x00252056 (182 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00251FA0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BD8D8);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00251FB1u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00251FB1: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x46EEBC);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00251FC1u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00251FC1: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00251FC9u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00251FC9: ;
    ebx = eax;
    eax = MEM32(0x5BD8DC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00251FED; /* jne: not equal / not zero */

loc_00251FD4: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00251FDFu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00251FDF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00251FE5u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00251FE5: ;
    esp = esp + 8;
    MEM32(0x5BD8DC) = eax;

loc_00251FED: ;
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x34) = 1;
    PUSH32(esp, 0x00251FFFu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00251FFF: ;
    fp_push(MEMD(0x3E1ED0)); /* fld double */
    esp = esp - 8;
    ecx = eax;
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00252012u); RECOMP_ABI_CALL(0x001E7D60u, sub_001E7D60); /* call 0x001E7D60 */

loc_00252012: ;
    edx = edi + 2;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0025201Du); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025201D: ;
    ebx = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00252033u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00252033: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46EEB0);
    PUSH32(esp, 0x46EEA4);
    PUSH32(esp, 0x46EE98);
    ecx = esi;
    MEM32(ebx + 0x34) = 0x2493B0;
    PUSH32(esp, 0x00252051u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00252051: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00252060
 * Original: 0x00252060 - 0x00252066 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252060(void)
{

loc_00252060: ;
    eax = MEM32(0x5BD8E0);
    esp += 4; return; /* ret */

}

/**
 * sub_00252070
 * Original: 0x00252070 - 0x002520C9 (89 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252070(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00252070: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025208F; /* je: equal / zero */

loc_0025207A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025208F; /* jne: not equal / not zero */

loc_0025208A: ;
    PUSH32(esp, 0x0025208Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025208F: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002520AB; /* je: equal / zero */

loc_00252096: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002520AB; /* jne: not equal / not zero */

loc_002520A6: ;
    PUSH32(esp, 0x002520ABu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002520AB: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_002520C8; /* je: equal / zero */

loc_002520B3: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002520C8; /* jne: not equal / not zero */

loc_002520C3: ;
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_002520C8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002520D0
 * Original: 0x002520D0 - 0x00252207 (311 bytes, 108 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002520D0(void)
{

loc_002520D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BD8E0);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002520E0u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_002520E0: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x46EF88);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x002520F0u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_002520F0: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002520F8u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002520F8: ;
    MEM32(eax + 0x30) = 0x24EB20;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0025210Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025210A: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x00252113u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00252113: ;
    ecx = edi + 2;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0025211Eu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025211E: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x00252127u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00252127: ;
    edx = edi + 3;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00252132u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00252132: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x0025213Bu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0025213B: ;
    eax = edi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00252146u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00252146: ;
    ebx = eax;
    PUSH32(esp, 0x0025214Du); RECOMP_ABI_CALL(0x00290AF0u, sub_00290AF0); /* call 0x00290AF0 */

loc_0025214D: ;
    ecx = edi + 5;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x0025215Bu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025215B: ;
    ebx = eax;
    PUSH32(esp, 0x00252162u); RECOMP_ABI_CALL(0x00290AF0u, sub_00290AF0); /* call 0x00290AF0 */

loc_00252162: ;
    edx = edi + 7;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x00252170u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00252170: ;
    ebx = eax;
    PUSH32(esp, 0x00252177u); RECOMP_ABI_CALL(0x002909F0u, sub_002909F0); /* call 0x002909F0 */

loc_00252177: ;
    MEM32(ebx + 0x38) = eax;
    eax = edi + 8;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00252185u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00252185: ;
    ecx = edi + 9;
    PUSH32(esp, ecx);
    SET_LO8(ebx, 0); /* xor self */
    ecx = esi;
    MEM8(eax + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00252195u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00252195: ;
    edx = edi + 0xA;
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(eax + 0x26) = LO8(ebx);
    PUSH32(esp, 0x002521A3u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002521A3: ;
    MEM8(eax + 0x26) = LO8(ebx);
    eax = edi + 0xB;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002521B1u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002521B1: ;
    ecx = edi + 0xC;
    PUSH32(esp, ecx);
    MEM8(eax + 0x26) = LO8(ebx);
    ecx = esi;
    PUSH32(esp, 0x002521BFu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002521BF: ;
    edx = edi + 0xD;
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(eax + 0x26) = LO8(ebx);
    PUSH32(esp, 0x002521CDu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002521CD: ;
    MEM8(eax + 0x26) = LO8(ebx);
    eax = edi + 0xE;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002521DBu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002521DB: ;
    ecx = edi + 0xF;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(eax + 0x26) = LO8(ebx);
    PUSH32(esp, 0x002521E9u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002521E9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46EF48);
    PUSH32(esp, 0x46EF08);
    PUSH32(esp, 0x46EEC8);
    ecx = esi;
    MEM8(eax + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00252203u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00252203: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252210
 * Original: 0x00252210 - 0x0025227E (110 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00252210: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BD8E8);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00252220u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00252220: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x46EFD4);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00252230u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00252230: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00252238u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00252238: ;
    ebx = eax;
    eax = MEM32(0x5BDB18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025225C; /* jne: not equal / not zero */

loc_00252243: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025224Eu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0025224E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00252254u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00252254: ;
    esp = esp + 8;
    MEM32(0x5BDB18) = eax;

loc_0025225C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46EFD0);
    PUSH32(esp, 0x46EFCC);
    PUSH32(esp, 0x46EFC8);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x34) = 1;
    PUSH32(esp, 0x0025227Au); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0025227A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252280
 * Original: 0x00252280 - 0x00252286 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252280(void)
{

loc_00252280: ;
    eax = MEM32(0x5BD8EC);
    esp += 4; return; /* ret */

}

/**
 * sub_00252290
 * Original: 0x00252290 - 0x00252296 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252290(void)
{

loc_00252290: ;
    eax = MEM32(0x5BD8F0);
    esp += 4; return; /* ret */

}

/**
 * sub_002522A0
 * Original: 0x002522A0 - 0x002522FF (95 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002522A0(void)
{

loc_002522A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002522A8u); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_002522A8: ;
    eax = 0; /* xor self */
    MEM32(esi) = 0x3FF228;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 0x54) = eax;
    MEM32(esi + 0x58) = eax;
    MEM32(esi + 0x5C) = eax;
    MEM32(esi + 0x60) = eax;
    MEM32(esi + 0x64) = eax;
    MEM32(esi + 0x68) = eax;
    MEM32(esi + 0x6C) = eax;
    MEM32(esi + 0x74) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00252300
 * Original: 0x00252300 - 0x00252306 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252300(void)
{

loc_00252300: ;
    eax = MEM32(0x5BD8FC);
    esp += 4; return; /* ret */

}

/**
 * sub_00252310
 * Original: 0x00252310 - 0x002525D1 (705 bytes, 254 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252310(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00252310: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x74);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025232F; /* je: equal / zero */

loc_0025231A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025232F; /* jne: not equal / not zero */

loc_0025232A: ;
    PUSH32(esp, 0x0025232Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025232F: ;
    ecx = MEM32(esi + 0x6C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025234B; /* je: equal / zero */

loc_00252336: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025234B; /* jne: not equal / not zero */

loc_00252346: ;
    PUSH32(esp, 0x0025234Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025234B: ;
    ecx = MEM32(esi + 0x68);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00252367; /* je: equal / zero */

loc_00252352: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00252367; /* jne: not equal / not zero */

loc_00252362: ;
    PUSH32(esp, 0x00252367u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00252367: ;
    ecx = MEM32(esi + 0x64);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00252383; /* je: equal / zero */

loc_0025236E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00252383; /* jne: not equal / not zero */

loc_0025237E: ;
    PUSH32(esp, 0x00252383u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00252383: ;
    ecx = MEM32(esi + 0x60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025239F; /* je: equal / zero */

loc_0025238A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025239F; /* jne: not equal / not zero */

loc_0025239A: ;
    PUSH32(esp, 0x0025239Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025239F: ;
    ecx = MEM32(esi + 0x5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002523BB; /* je: equal / zero */

loc_002523A6: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002523BB; /* jne: not equal / not zero */

loc_002523B6: ;
    PUSH32(esp, 0x002523BBu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002523BB: ;
    ecx = MEM32(esi + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002523D7; /* je: equal / zero */

loc_002523C2: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002523D7; /* jne: not equal / not zero */

loc_002523D2: ;
    PUSH32(esp, 0x002523D7u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002523D7: ;
    ecx = MEM32(esi + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002523F3; /* je: equal / zero */

loc_002523DE: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002523F3; /* jne: not equal / not zero */

loc_002523EE: ;
    PUSH32(esp, 0x002523F3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002523F3: ;
    ecx = MEM32(esi + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025240F; /* je: equal / zero */

loc_002523FA: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025240F; /* jne: not equal / not zero */

loc_0025240A: ;
    PUSH32(esp, 0x0025240Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025240F: ;
    ecx = MEM32(esi + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025242B; /* je: equal / zero */

loc_00252416: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025242B; /* jne: not equal / not zero */

loc_00252426: ;
    PUSH32(esp, 0x0025242Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025242B: ;
    ecx = MEM32(esi + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00252447; /* je: equal / zero */

loc_00252432: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00252447; /* jne: not equal / not zero */

loc_00252442: ;
    PUSH32(esp, 0x00252447u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00252447: ;
    ecx = MEM32(esi + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00252463; /* je: equal / zero */

loc_0025244E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00252463; /* jne: not equal / not zero */

loc_0025245E: ;
    PUSH32(esp, 0x00252463u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00252463: ;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025247F; /* je: equal / zero */

loc_0025246A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025247F; /* jne: not equal / not zero */

loc_0025247A: ;
    PUSH32(esp, 0x0025247Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025247F: ;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025249B; /* je: equal / zero */

loc_00252486: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025249B; /* jne: not equal / not zero */

loc_00252496: ;
    PUSH32(esp, 0x0025249Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025249B: ;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002524B7; /* je: equal / zero */

loc_002524A2: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002524B7; /* jne: not equal / not zero */

loc_002524B2: ;
    PUSH32(esp, 0x002524B7u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002524B7: ;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002524D3; /* je: equal / zero */

loc_002524BE: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002524D3; /* jne: not equal / not zero */

loc_002524CE: ;
    PUSH32(esp, 0x002524D3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002524D3: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002524EF; /* je: equal / zero */

loc_002524DA: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002524EF; /* jne: not equal / not zero */

loc_002524EA: ;
    PUSH32(esp, 0x002524EFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002524EF: ;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025250B; /* je: equal / zero */

loc_002524F6: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025250B; /* jne: not equal / not zero */

loc_00252506: ;
    PUSH32(esp, 0x0025250Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025250B: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00252527; /* je: equal / zero */

loc_00252512: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00252527; /* jne: not equal / not zero */

loc_00252522: ;
    PUSH32(esp, 0x00252527u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00252527: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00252543; /* je: equal / zero */

loc_0025252E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00252543; /* jne: not equal / not zero */

loc_0025253E: ;
    PUSH32(esp, 0x00252543u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00252543: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025255F; /* je: equal / zero */

loc_0025254A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025255F; /* jne: not equal / not zero */

loc_0025255A: ;
    PUSH32(esp, 0x0025255Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025255F: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025257B; /* je: equal / zero */

loc_00252566: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025257B; /* jne: not equal / not zero */

loc_00252576: ;
    PUSH32(esp, 0x0025257Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025257B: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00252597; /* je: equal / zero */

loc_00252582: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00252597; /* jne: not equal / not zero */

loc_00252592: ;
    PUSH32(esp, 0x00252597u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00252597: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002525B3; /* je: equal / zero */

loc_0025259E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002525B3; /* jne: not equal / not zero */

loc_002525AE: ;
    PUSH32(esp, 0x002525B3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002525B3: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_002525D0; /* je: equal / zero */

loc_002525BB: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002525D0; /* jne: not equal / not zero */

loc_002525CB: ;
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_002525D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002525E0
 * Original: 0x002525E0 - 0x002529A4 (964 bytes, 316 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002525E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002525E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BD8FC);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002525F1u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_002525F1: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x46F188);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00252601u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00252601: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00252609u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00252609: ;
    ebp = eax;
    PUSH32(esp, 0x00252610u); RECOMP_ABI_CALL(0x00291F20u, sub_00291F20); /* call 0x00291F20 */

loc_00252610: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 2;
    SET_LO8(ebx, 1);
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00252623u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00252623: ;
    ebp = eax;
    eax = MEM32(0x5BD904);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00252648; /* jne: not equal / not zero */

loc_0025262E: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025263Au); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0025263A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00252640u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00252640: ;
    esp = esp + 8;
    MEM32(0x5BD904) = eax;

loc_00252648: ;
    edx = edi + 3;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00252659u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00252659: ;
    ebp = eax;
    PUSH32(esp, 0x00252660u); RECOMP_ABI_CALL(0x00292980u, sub_00292980); /* call 0x00292980 */

loc_00252660: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00252671u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00252671: ;
    ebp = eax;
    eax = MEM32(0x5BD900);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00252696; /* jne: not equal / not zero */

loc_0025267C: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00252688u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00252688: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025268Eu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0025268E: ;
    esp = esp + 8;
    MEM32(0x5BD900) = eax;

loc_00252696: ;
    edx = edi + 5;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x002526A7u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002526A7: ;
    ebp = eax;
    eax = MEM32(0x5BD900);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002526CB; /* jne: not equal / not zero */

loc_002526B2: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002526BDu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002526BD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002526C3u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_002526C3: ;
    esp = esp + 8;
    MEM32(0x5BD900) = eax;

loc_002526CB: ;
    ecx = edi + 6;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x002526DCu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002526DC: ;
    ebp = eax;
    eax = MEM32(0x5BD900);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00252701; /* jne: not equal / not zero */

loc_002526E7: ;
    edx = MEM32(0x46A684);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002526F3u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002526F3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002526F9u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_002526F9: ;
    esp = esp + 8;
    MEM32(0x5BD900) = eax;

loc_00252701: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 7;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00252712u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00252712: ;
    ebp = eax;
    PUSH32(esp, 0x00252719u); RECOMP_ABI_CALL(0x00291F20u, sub_00291F20); /* call 0x00291F20 */

loc_00252719: ;
    ecx = edi + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x0025272Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025272A: ;
    ebp = eax;
    PUSH32(esp, 0x00252731u); RECOMP_ABI_CALL(0x00291F20u, sub_00291F20); /* call 0x00291F20 */

loc_00252731: ;
    edx = edi + 9;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00252742u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00252742: ;
    ebp = eax;
    PUSH32(esp, 0x00252749u); RECOMP_ABI_CALL(0x00291F20u, sub_00291F20); /* call 0x00291F20 */

loc_00252749: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 0xA;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x0025275Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025275A: ;
    ebp = eax;
    PUSH32(esp, 0x00252761u); RECOMP_ABI_CALL(0x00291F20u, sub_00291F20); /* call 0x00291F20 */

loc_00252761: ;
    ecx = edi + 0xB;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00252772u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00252772: ;
    ebp = eax;
    PUSH32(esp, 0x00252779u); RECOMP_ABI_CALL(0x001F33C0u, sub_001F33C0); /* call 0x001F33C0 */

loc_00252779: ;
    edx = edi + 0xC;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x0025278Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025278A: ;
    ebp = eax;
    PUSH32(esp, 0x00252791u); RECOMP_ABI_CALL(0x001F33C0u, sub_001F33C0); /* call 0x001F33C0 */

loc_00252791: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 0xD;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x002527A2u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002527A2: ;
    ebp = eax;
    PUSH32(esp, 0x002527A9u); RECOMP_ABI_CALL(0x001F33C0u, sub_001F33C0); /* call 0x001F33C0 */

loc_002527A9: ;
    ecx = edi + 0xE;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x002527BAu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002527BA: ;
    ebp = eax;
    PUSH32(esp, 0x002527C1u); RECOMP_ABI_CALL(0x00292050u, sub_00292050); /* call 0x00292050 */

loc_002527C1: ;
    edx = edi + 0xF;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x002527D2u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002527D2: ;
    ebp = eax;
    PUSH32(esp, 0x002527D9u); RECOMP_ABI_CALL(0x002921E0u, sub_002921E0); /* call 0x002921E0 */

loc_002527D9: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 0x10;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x002527EAu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002527EA: ;
    ebp = eax;
    PUSH32(esp, 0x002527F1u); RECOMP_ABI_CALL(0x002921E0u, sub_002921E0); /* call 0x002921E0 */

loc_002527F1: ;
    MEM32(ebp + 0x38) = eax;
    ecx = edi + 0x12;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00252802u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00252802: ;
    ebp = eax;
    eax = MEM32(0x5BD908);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00252827; /* jne: not equal / not zero */

loc_0025280D: ;
    edx = MEM32(0x46A684);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00252819u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00252819: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025281Fu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0025281F: ;
    esp = esp + 8;
    MEM32(0x5BD908) = eax;

loc_00252827: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 0x13;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00252838u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00252838: ;
    ebp = eax;
    eax = MEM32(0x5BD900);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025285D; /* jne: not equal / not zero */

loc_00252843: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025284Fu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0025284F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00252855u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00252855: ;
    esp = esp + 8;
    MEM32(0x5BD900) = eax;

loc_0025285D: ;
    edx = edi + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x0025286Eu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025286E: ;
    ebp = eax;
    PUSH32(esp, 0x00252875u); RECOMP_ABI_CALL(0x001F33C0u, sub_001F33C0); /* call 0x001F33C0 */

loc_00252875: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 0x15;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00252886u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00252886: ;
    ebp = eax;
    PUSH32(esp, 0x0025288Du); RECOMP_ABI_CALL(0x00291F20u, sub_00291F20); /* call 0x00291F20 */

loc_0025288D: ;
    ecx = edi + 0x16;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x0025289Eu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025289E: ;
    ebp = eax;
    PUSH32(esp, 0x002528A5u); RECOMP_ABI_CALL(0x00291F20u, sub_00291F20); /* call 0x00291F20 */

loc_002528A5: ;
    edx = edi + 0x17;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x002528B6u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002528B6: ;
    ebp = eax;
    eax = MEM32(0x5BDA90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002528DA; /* jne: not equal / not zero */

loc_002528C1: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002528CCu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002528CC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002528D2u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_002528D2: ;
    esp = esp + 8;
    MEM32(0x5BDA90) = eax;

loc_002528DA: ;
    ecx = edi + 0x18;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x002528EBu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002528EB: ;
    ebp = eax;
    PUSH32(esp, 0x002528F2u); RECOMP_ABI_CALL(0x001F33C0u, sub_001F33C0); /* call 0x001F33C0 */

loc_002528F2: ;
    edx = edi + 0x19;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00252903u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00252903: ;
    ebp = eax;
    PUSH32(esp, 0x0025290Au); RECOMP_ABI_CALL(0x001F33C0u, sub_001F33C0); /* call 0x001F33C0 */

loc_0025290A: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 0x1D;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x0025291Bu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025291B: ;
    ebx = eax;
    eax = MEM32(0x5BD908);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00252940; /* jne: not equal / not zero */

loc_00252926: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00252932u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00252932: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00252938u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00252938: ;
    esp = esp + 8;
    MEM32(0x5BD908) = eax;

loc_00252940: ;
    edx = edi + 0x1F;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x0025294Eu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025294E: ;
    ebx = eax;
    eax = MEM32(0x5BD908);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00252972; /* jne: not equal / not zero */

loc_00252959: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00252964u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00252964: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025296Au); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0025296A: ;
    esp = esp + 8;
    MEM32(0x5BD908) = eax;

loc_00252972: ;
    ecx = edi + 0x23;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x3C) = 0;
    PUSH32(esp, 0x00252984u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00252984: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46F0F8);
    PUSH32(esp, 0x46F068);
    PUSH32(esp, 0x46EFD8);
    ecx = esi;
    MEM8(eax + 0x26) = 0;
    PUSH32(esp, 0x0025299Fu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0025299F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002529B0
 * Original: 0x002529B0 - 0x00252A09 (89 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002529B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002529B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002529CF; /* je: equal / zero */

loc_002529BA: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002529CF; /* jne: not equal / not zero */

loc_002529CA: ;
    PUSH32(esp, 0x002529CFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002529CF: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002529EB; /* je: equal / zero */

loc_002529D6: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002529EB; /* jne: not equal / not zero */

loc_002529E6: ;
    PUSH32(esp, 0x002529EBu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002529EB: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00252A08; /* je: equal / zero */

loc_002529F3: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00252A08; /* jne: not equal / not zero */

loc_00252A03: ;
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_00252A08: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00252A10
 * Original: 0x00252A10 - 0x00252A16 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252A10(void)
{

loc_00252A10: ;
    eax = MEM32(0x5BD910);
    esp += 4; return; /* ret */

}

/**
 * sub_00252A20
 * Original: 0x00252A20 - 0x00252A9F (127 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00252A20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BD910);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00252A30u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00252A30: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x46F230);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00252A40u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00252A40: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00252A48u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00252A48: ;
    ebx = eax;
    eax = MEM32(0x5BD9C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00252A6C; /* jne: not equal / not zero */

loc_00252A53: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00252A5Eu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00252A5E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00252A64u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00252A64: ;
    esp = esp + 8;
    MEM32(0x5BD9C8) = eax;

loc_00252A6C: ;
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x00252A7Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00252A7A: ;
    ebx = eax;
    PUSH32(esp, 0x00252A81u); RECOMP_ABI_CALL(0x0023B7C0u, sub_0023B7C0); /* call 0x0023B7C0 */

loc_00252A81: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46F228);
    PUSH32(esp, 0x46F220);
    PUSH32(esp, 0x46F218);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x00252A9Bu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00252A9B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252AA0
 * Original: 0x00252AA0 - 0x00252B2F (143 bytes, 50 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252AA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00252AA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x5BD918);
    ecx = edi;
    PUSH32(esp, 0x00252AB1u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00252AB1: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x46F25C);
    ecx = edi;
    ebp = eax;
    PUSH32(esp, 0x00252AC1u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00252AC1: ;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x00252AC9u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00252AC9: ;
    esi = eax;
    eax = MEM32(0x5BD91C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00252AED; /* jne: not equal / not zero */

loc_00252AD4: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00252ADFu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00252ADF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00252AE5u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00252AE5: ;
    esp = esp + 8;
    MEM32(0x5BD91C) = eax;

loc_00252AED: ;
    ecx = ebp + 1;
    PUSH32(esp, ecx);
    SET_LO8(ebx, 1);
    ecx = edi;
    MEM32(esi + 0x38) = eax;
    MEM8(esi + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00252B00u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00252B00: ;
    esi = eax;
    PUSH32(esp, 0x00252B07u); RECOMP_ABI_CALL(0x002459E0u, sub_002459E0); /* call 0x002459E0 */

loc_00252B07: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x46F250);
    PUSH32(esp, 0x46F244);
    PUSH32(esp, 0x46F238);
    ecx = edi;
    MEM32(esi + 0x3C) = eax;
    MEM8(esi + 0x35) = LO8(ebx);
    MEM8(esi + 0x40) = LO8(ebx);
    MEM8(esi + 0x41) = LO8(ebx);
    PUSH32(esp, 0x00252B2Au); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00252B2A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252B30
 * Original: 0x00252B30 - 0x00252B36 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252B30(void)
{

loc_00252B30: ;
    eax = MEM32(0x5BD920);
    esp += 4; return; /* ret */

}

/**
 * sub_00252B40
 * Original: 0x00252B40 - 0x00252C36 (246 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252B40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00252B40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BD928);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00252B51u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00252B51: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x46F298);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00252B61u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00252B61: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00252B69u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00252B69: ;
    ebp = eax;
    eax = MEM32(0x5BD944);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00252B8D; /* jne: not equal / not zero */

loc_00252B74: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00252B7Fu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00252B7F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00252B85u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00252B85: ;
    esp = esp + 8;
    MEM32(0x5BD944) = eax;

loc_00252B8D: ;
    ecx = edi + 1;
    PUSH32(esp, ecx);
    SET_LO8(ebx, 1);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00252BA0u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00252BA0: ;
    ebp = eax;
    eax = MEM32(0x5BD92C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00252BC5; /* jne: not equal / not zero */

loc_00252BAB: ;
    edx = MEM32(0x46A684);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00252BB7u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00252BB7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00252BBDu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00252BBD: ;
    esp = esp + 8;
    MEM32(0x5BD92C) = eax;

loc_00252BC5: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 2;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00252BD6u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00252BD6: ;
    ebp = eax;
    eax = MEM32(0x5BDB18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00252BFB; /* jne: not equal / not zero */

loc_00252BE1: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00252BEDu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00252BED: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00252BF3u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00252BF3: ;
    esp = esp + 8;
    MEM32(0x5BDB18) = eax;

loc_00252BFB: ;
    edx = edi + 3;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00252C0Cu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00252C0C: ;
    ebx = eax;
    PUSH32(esp, 0x00252C13u); RECOMP_ABI_CALL(0x001A5270u, sub_001A5270); /* call 0x001A5270 */

loc_00252C13: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46F288);
    PUSH32(esp, 0x46F278);
    PUSH32(esp, 0x46F268);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x26) = 0;
    PUSH32(esp, 0x00252C31u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00252C31: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252C40
 * Original: 0x00252C40 - 0x00252C7E (62 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00252C40: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00252C50; /* jne: not equal / not zero */

loc_00252C49: ;
    MEM8(0x5BDF6C) = 1;

loc_00252C50: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, 0x3FF6A0);
    PUSH32(esp, 0x250630);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BD934);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00252C7Au); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00252C7A: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00252C80
 * Original: 0x00252C80 - 0x00252C86 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252C80(void)
{

loc_00252C80: ;
    eax = MEM32(0x5BD940);
    esp += 4; return; /* ret */

}

/**
 * sub_00252C90
 * Original: 0x00252C90 - 0x00252CE8 (88 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252C90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00252C90: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00252CAF; /* je: equal / zero */

loc_00252C9A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00252CAF; /* jne: not equal / not zero */

loc_00252CAA: ;
    PUSH32(esp, 0x00252CAFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00252CAF: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00252CCB; /* je: equal / zero */

loc_00252CB6: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00252CCB; /* jne: not equal / not zero */

loc_00252CC6: ;
    PUSH32(esp, 0x00252CCBu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00252CCB: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00252CE6; /* je: equal / zero */

loc_00252CD2: ;
    ecx = MEM32(esi + -4);
    eax = esi + -8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_00252CE6; /* jne: not equal / not zero */

loc_00252CDE: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00252CE6u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_00252CE6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00252CF0
 * Original: 0x00252CF0 - 0x00252D36 (70 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252CF0(void)
{

loc_00252CF0: ;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x00252CFDu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00252CFD: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x3FEE80;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x00252D2Fu); RECOMP_ABI_CALL(0x00254530u, sub_00254530); /* call 0x00254530 */

loc_00252D2F: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00252D40
 * Original: 0x00252D40 - 0x00252DF5 (181 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00252D40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00252D40: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BD944);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00252D50u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00252D50: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x46F2D8);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00252D60u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00252D60: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00252D68u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00252D68: ;
    ebp = eax;
    PUSH32(esp, 0x00252D6Fu); RECOMP_ABI_CALL(0x00292950u, sub_00292950); /* call 0x00292950 */

loc_00252D6F: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = 1;
    PUSH32(esp, 0x00252D81u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00252D81: ;
    ebp = eax;
    PUSH32(esp, 0x00252D88u); RECOMP_ABI_CALL(0x00292950u, sub_00292950); /* call 0x00292950 */

loc_00252D88: ;
    ecx = edi + 2;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    PUSH32(esp, 0x00252D9Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00252D9A: ;
    ebp = eax;
    PUSH32(esp, 0x00252DA1u); RECOMP_ABI_CALL(0x001A52E0u, sub_001A52E0); /* call 0x001A52E0 */

loc_00252DA1: ;
    edx = edi + 3;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    PUSH32(esp, 0x00252DAFu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00252DAF: ;
    ebp = eax;
    eax = MEM32(0x5BD9BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00252DD3; /* jne: not equal / not zero */

loc_00252DBA: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00252DC5u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00252DC5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00252DCBu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00252DCB: ;
    esp = esp + 8;
    MEM32(0x5BD9BC) = eax;

loc_00252DD3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46F2C8);
    PUSH32(esp, 0x46F2B8);
    PUSH32(esp, 0x46F2A8);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    PUSH32(esp, 0x00252DF1u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00252DF1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00252E00
 * Original: 0x00252E00 - 0x00252F0C (268 bytes, 90 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252E00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00252E00: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BD950);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00252E12u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00252E12: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x46F33C);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00252E22u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00252E22: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00252E2Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00252E2A: ;
    ebp = eax;
    PUSH32(esp, 0x00252E31u); RECOMP_ABI_CALL(0x00292950u, sub_00292950); /* call 0x00292950 */

loc_00252E31: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 1;
    ebx = 0; /* xor self */
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x28) = LO8(ebx);
    MEM8(ebp + 0x27) = 2;
    PUSH32(esp, 0x00252E4Cu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00252E4C: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    PUSH32(esp, 0x00252E55u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00252E55: ;
    ecx = edi + 3;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00252E60u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00252E60: ;
    ebp = eax;
    PUSH32(esp, 0x00252E67u); RECOMP_ABI_CALL(0x0023B6A0u, sub_0023B6A0); /* call 0x0023B6A0 */

loc_00252E67: ;
    edx = edi + 4;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x28) = LO8(ebx);
    MEM8(ebp + 0x27) = LO8(ebx);
    PUSH32(esp, 0x00252E7Fu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00252E7F: ;
    ebp = eax;
    PUSH32(esp, 0x00252E86u); RECOMP_ABI_CALL(0x002919B0u, sub_002919B0); /* call 0x002919B0 */

loc_00252E86: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 5;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x28) = LO8(ebx);
    MEM8(ebp + 0x27) = 2;
    PUSH32(esp, 0x00252E9Fu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00252E9F: ;
    ebp = eax;
    eax = MEM32(0x5BDB18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00252EC4; /* jne: not equal / not zero */

loc_00252EAA: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00252EB6u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00252EB6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00252EBCu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00252EBC: ;
    esp = esp + 8;
    MEM32(0x5BDB18) = eax;

loc_00252EC4: ;
    edx = edi + 6;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    PUSH32(esp, 0x00252ED6u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00252ED6: ;
    ebp = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = ebp;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x00252EE8u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00252EE8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46F320);
    PUSH32(esp, 0x46F304);
    PUSH32(esp, 0x46F2E8);
    ecx = esi;
    MEM32(ebp + 0x34) = 0x221530;
    PUSH32(esp, 0x00252F06u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00252F06: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252F10
 * Original: 0x00252F10 - 0x002533C0 (1200 bytes, 377 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252F10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00252F10: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BD980);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00252F24u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00252F24: ;
    PUSH32(esp, 0x29);
    PUSH32(esp, 0x46F550);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00252F34u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00252F34: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00252F3Cu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00252F3C: ;
    ebx = 0; /* xor self */
    MEM8(eax + 0x26) = LO8(ebx);
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00252F4Cu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00252F4C: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = 0x40800000;
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0x00252F68u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00252F68: ;
    edx = edi + 2;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00252F73u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00252F73: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = 0xBF800000u;
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0x00252F8Fu); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00252F8F: ;
    edx = edi + 3;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00252F9Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00252F9A: ;
    PUSH32(esp, 0x41F00000);
    ecx = eax;
    PUSH32(esp, 0x00252FA6u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00252FA6: ;
    eax = edi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00252FB1u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00252FB1: ;
    PUSH32(esp, 0x3DCCCCCD);
    ecx = eax;
    PUSH32(esp, 0x00252FBDu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00252FBD: ;
    ecx = edi + 5;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00252FC8u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00252FC8: ;
    PUSH32(esp, 0x447A0000);
    ecx = eax;
    PUSH32(esp, 0x00252FD4u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00252FD4: ;
    edx = edi + 6;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00252FDFu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00252FDF: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x14) = 0x3F800000;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0x00252FFBu); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00252FFB: ;
    edx = edi + 7;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00253006u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253006: ;
    ebp = eax;
    eax = MEM32(0x5BD9C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025302A; /* jne: not equal / not zero */

loc_00253011: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025301Cu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0025301C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00253022u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00253022: ;
    esp = esp + 8;
    MEM32(0x5BD9C0) = eax;

loc_0025302A: ;
    ecx = edi + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    PUSH32(esp, 0x0025303Cu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025303C: ;
    ebp = eax;
    eax = MEM32(0x5BD9C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00253061; /* jne: not equal / not zero */

loc_00253047: ;
    edx = MEM32(0x46A684);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00253053u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00253053: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00253059u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00253059: ;
    esp = esp + 8;
    MEM32(0x5BD9C0) = eax;

loc_00253061: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 9;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0025306Fu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025306F: ;
    ebp = eax;
    PUSH32(esp, 0x00253076u); RECOMP_ABI_CALL(0x002919F0u, sub_002919F0); /* call 0x002919F0 */

loc_00253076: ;
    ecx = edi + 0xA;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x0025308Bu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025308B: ;
    ebp = eax;
    PUSH32(esp, 0x00253092u); RECOMP_ABI_CALL(0x00291550u, sub_00291550); /* call 0x00291550 */

loc_00253092: ;
    edx = edi + 0xB;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x002530A7u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002530A7: ;
    ebp = eax;
    PUSH32(esp, 0x002530AEu); RECOMP_ABI_CALL(0x00290AF0u, sub_00290AF0); /* call 0x00290AF0 */

loc_002530AE: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x002530C3u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002530C3: ;
    ebp = eax;
    PUSH32(esp, 0x002530CAu); RECOMP_ABI_CALL(0x00290AF0u, sub_00290AF0); /* call 0x00290AF0 */

loc_002530CA: ;
    ecx = edi + 0xD;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x002530DFu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002530DF: ;
    PUSH32(esp, 0xBDCCCCCDu);
    ecx = eax;
    PUSH32(esp, 0x002530EBu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_002530EB: ;
    edx = edi + 0xE;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x002530F6u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002530F6: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x14) = 0x3ECCCCCD;
    MEM32(esp + 0x18) = 0x3ECCCCCD;
    MEM32(esp + 0x1C) = 0x3ECCCCCD;
    MEM32(esp + 0x20) = 0x3F800000;
    PUSH32(esp, 0x00253122u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00253122: ;
    edx = edi + 0xF;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0025312Du); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025312D: ;
    PUSH32(esp, 0x200);
    ecx = eax;
    PUSH32(esp, 0x00253139u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00253139: ;
    eax = edi + 0x10;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00253144u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253144: ;
    PUSH32(esp, 0x200);
    ecx = eax;
    PUSH32(esp, 0x00253150u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00253150: ;
    ecx = edi + 0x11;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0025315Bu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025315B: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x00253164u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00253164: ;
    edx = edi + 0x12;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0025316Fu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025316F: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x00253178u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00253178: ;
    eax = edi + 0x13;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00253183u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253183: ;
    ebp = eax;
    PUSH32(esp, 0x0025318Au); RECOMP_ABI_CALL(0x00291330u, sub_00291330); /* call 0x00291330 */

loc_0025318A: ;
    ecx = edi + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x0025319Fu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025319F: ;
    ebp = eax;
    PUSH32(esp, 0x002531A6u); RECOMP_ABI_CALL(0x002910F0u, sub_002910F0); /* call 0x002910F0 */

loc_002531A6: ;
    edx = edi + 0x15;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x002531BBu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002531BB: ;
    ebp = eax;
    PUSH32(esp, 0x002531C2u); RECOMP_ABI_CALL(0x00290CD0u, sub_00290CD0); /* call 0x00290CD0 */

loc_002531C2: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 0x16;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x002531D7u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002531D7: ;
    ebp = eax;
    PUSH32(esp, 0x002531DEu); RECOMP_ABI_CALL(0x00290CA0u, sub_00290CA0); /* call 0x00290CA0 */

loc_002531DE: ;
    ecx = edi + 0x17;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x002531F3u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002531F3: ;
    ebp = eax;
    PUSH32(esp, 0x002531FAu); RECOMP_ABI_CALL(0x00290CA0u, sub_00290CA0); /* call 0x00290CA0 */

loc_002531FA: ;
    edx = edi + 0x18;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x0025320Fu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025320F: ;
    ebp = eax;
    PUSH32(esp, 0x00253216u); RECOMP_ABI_CALL(0x00290CA0u, sub_00290CA0); /* call 0x00290CA0 */

loc_00253216: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 0x19;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x0025322Bu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025322B: ;
    ebp = eax;
    PUSH32(esp, 0x00253232u); RECOMP_ABI_CALL(0x002922C0u, sub_002922C0); /* call 0x002922C0 */

loc_00253232: ;
    ecx = edi + 0x1A;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00253247u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253247: ;
    ebp = eax;
    PUSH32(esp, 0x0025324Eu); RECOMP_ABI_CALL(0x001AB0E0u, sub_001AB0E0); /* call 0x001AB0E0 */

loc_0025324E: ;
    edx = edi + 0x1B;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00253263u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253263: ;
    ebp = eax;
    PUSH32(esp, 0x0025326Au); RECOMP_ABI_CALL(0x002905F0u, sub_002905F0); /* call 0x002905F0 */

loc_0025326A: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 0x1C;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x0025327Fu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025327F: ;
    ebp = eax;
    PUSH32(esp, 0x00253286u); RECOMP_ABI_CALL(0x002909F0u, sub_002909F0); /* call 0x002909F0 */

loc_00253286: ;
    ecx = edi + 0x1D;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00253297u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253297: ;
    ebp = eax;
    PUSH32(esp, 0x0025329Eu); RECOMP_ABI_CALL(0x00290CA0u, sub_00290CA0); /* call 0x00290CA0 */

loc_0025329E: ;
    edx = edi + 0x1E;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x002532B3u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002532B3: ;
    ebp = eax;
    PUSH32(esp, 0x002532BAu); RECOMP_ABI_CALL(0x002929F0u, sub_002929F0); /* call 0x002929F0 */

loc_002532BA: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 0x1F;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x002532CBu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002532CB: ;
    ebp = eax;
    PUSH32(esp, 0x002532D2u); RECOMP_ABI_CALL(0x00291D00u, sub_00291D00); /* call 0x00291D00 */

loc_002532D2: ;
    ecx = edi + 0x20;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    PUSH32(esp, 0x002532E0u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002532E0: ;
    ebp = eax;
    PUSH32(esp, 0x002532E7u); RECOMP_ABI_CALL(0x00290D80u, sub_00290D80); /* call 0x00290D80 */

loc_002532E7: ;
    edx = edi + 0x21;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x002532FCu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002532FC: ;
    ebp = eax;
    PUSH32(esp, 0x00253303u); RECOMP_ABI_CALL(0x00290D80u, sub_00290D80); /* call 0x00290D80 */

loc_00253303: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 0x22;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00253318u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253318: ;
    ebp = eax;
    PUSH32(esp, 0x0025331Fu); RECOMP_ABI_CALL(0x002924E0u, sub_002924E0); /* call 0x002924E0 */

loc_0025331F: ;
    ecx = edi + 0x24;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00253334u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253334: ;
    PUSH32(esp, 0x40A00000);
    ecx = eax;
    PUSH32(esp, 0x00253340u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00253340: ;
    edx = edi + 0x25;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0025334Bu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025334B: ;
    PUSH32(esp, 0xC0A00000u);
    ecx = eax;
    PUSH32(esp, 0x00253357u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00253357: ;
    eax = edi + 0x26;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00253362u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253362: ;
    PUSH32(esp, 0x40A00000);
    ecx = eax;
    PUSH32(esp, 0x0025336Eu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0025336E: ;
    ecx = edi + 0x27;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00253379u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253379: ;
    PUSH32(esp, 0xC0A00000u);
    ecx = eax;
    PUSH32(esp, 0x00253385u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00253385: ;
    edx = edi + 0x28;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00253390u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253390: ;
    ebp = eax;
    PUSH32(esp, 0x00253397u); RECOMP_ABI_CALL(0x002905F0u, sub_002905F0); /* call 0x002905F0 */

loc_00253397: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46F4A8);
    PUSH32(esp, 0x46F400);
    PUSH32(esp, 0x46F358);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x002533B8u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002533B8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_002533C0
 * Original: 0x002533C0 - 0x002533D0 (16 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002533C0(void)
{

loc_002533C0: ;
    eax = MEM32(0x5BD988);
    esp += 4; return; /* ret */

}

/**
 * sub_002533D0
 * Original: 0x002533D0 - 0x00253460 (144 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002533D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002533D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002533EF; /* je: equal / zero */

loc_002533DA: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002533EF; /* jne: not equal / not zero */

loc_002533EA: ;
    PUSH32(esp, 0x002533EFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002533EF: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025340B; /* je: equal / zero */

loc_002533F6: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025340B; /* jne: not equal / not zero */

loc_00253406: ;
    PUSH32(esp, 0x0025340Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025340B: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00253427; /* je: equal / zero */

loc_00253412: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00253427; /* jne: not equal / not zero */

loc_00253422: ;
    PUSH32(esp, 0x00253427u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00253427: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00253443; /* je: equal / zero */

loc_0025342E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00253443; /* jne: not equal / not zero */

loc_0025343E: ;
    PUSH32(esp, 0x00253443u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00253443: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025345E; /* je: equal / zero */

loc_0025344A: ;
    ecx = MEM32(esi + -4);
    eax = esi + -8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_0025345E; /* jne: not equal / not zero */

loc_00253456: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025345Eu); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_0025345E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00253460
 * Original: 0x00253460 - 0x00253595 (309 bytes, 95 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253460(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253460: ;
    esp = esp - 0xC;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BD988);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00253473u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00253473: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x46F648);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00253483u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00253483: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0025348Bu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025348B: ;
    ebp = eax;
    eax = MEM32(0x5BD9C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002534AF; /* jne: not equal / not zero */

loc_00253496: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002534A1u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002534A1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002534A7u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_002534A7: ;
    esp = esp + 8;
    MEM32(0x5BD9C8) = eax;

loc_002534AF: ;
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    PUSH32(esp, 0x002534BDu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002534BD: ;
    ebp = eax;
    PUSH32(esp, 0x002534C4u); RECOMP_ABI_CALL(0x002928C0u, sub_002928C0); /* call 0x002928C0 */

loc_002534C4: ;
    edx = edi + 2;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x28) = 0;
    MEM8(ebp + 0x27) = 2;
    PUSH32(esp, 0x002534DEu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002534DE: ;
    ebp = eax;
    eax = MEM32(0x5BDA84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00253502; /* jne: not equal / not zero */

loc_002534E9: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002534F4u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002534F4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002534FAu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_002534FA: ;
    esp = esp + 8;
    MEM32(0x5BDA84) = eax;

loc_00253502: ;
    ecx = edi + 5;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x28) = 0;
    MEM8(ebp + 0x27) = 2;
    PUSH32(esp, 0x0025351Cu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025351C: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0x3F800000;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x00253540u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00253540: ;
    eax = edi + 6;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0025354Bu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025354B: ;
    ebp = eax;
    eax = MEM32(0x5BD9C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00253570; /* jne: not equal / not zero */

loc_00253556: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00253562u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00253562: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00253568u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00253568: ;
    esp = esp + 8;
    MEM32(0x5BD9C0) = eax;

loc_00253570: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46F62C);
    PUSH32(esp, 0x46F610);
    PUSH32(esp, 0x46F5F4);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    PUSH32(esp, 0x0025358Eu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0025358E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_002535A0
 * Original: 0x002535A0 - 0x002535DE (62 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002535A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002535A0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002535B0; /* jne: not equal / not zero */

loc_002535A9: ;
    MEM8(0x5BDF6C) = 1;

loc_002535B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, 0x3FFA98);
    PUSH32(esp, 0x24FF70);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BD98C);
    PUSH32(esp, 1);
    PUSH32(esp, 0x002535DAu); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002535DA: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002535E0
 * Original: 0x002535E0 - 0x0025361E (62 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002535E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002535E0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002535F0; /* jne: not equal / not zero */

loc_002535E9: ;
    MEM8(0x5BDF6C) = 1;

loc_002535F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, 0x3FFAA8);
    PUSH32(esp, 0x24FFD0);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BD990);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0025361Au); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0025361A: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00253620
 * Original: 0x00253620 - 0x00253626 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253620(void)
{

loc_00253620: ;
    eax = MEM32(0x5BD998);
    esp += 4; return; /* ret */

}

/**
 * sub_00253630
 * Original: 0x00253630 - 0x00253636 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253630(void)
{

loc_00253630: ;
    eax = MEM32(0x5BD99C);
    esp += 4; return; /* ret */

}

/**
 * sub_00253640
 * Original: 0x00253640 - 0x00253699 (89 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253640(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253640: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025365F; /* je: equal / zero */

loc_0025364A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025365F; /* jne: not equal / not zero */

loc_0025365A: ;
    PUSH32(esp, 0x0025365Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025365F: ;
    ecx = MEM32(esi + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025367B; /* je: equal / zero */

loc_00253666: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025367B; /* jne: not equal / not zero */

loc_00253676: ;
    PUSH32(esp, 0x0025367Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025367B: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00253698; /* je: equal / zero */

loc_00253683: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00253698; /* jne: not equal / not zero */

loc_00253693: ;
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_00253698: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002536A0
 * Original: 0x002536A0 - 0x00253807 (359 bytes, 105 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002536A0(void)
{

loc_002536A0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BD99C);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002536B3u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_002536B3: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x46F6DC);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x002536C3u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_002536C3: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002536CBu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002536CB: ;
    ebx = eax;
    PUSH32(esp, 0x002536D2u); RECOMP_ABI_CALL(0x00290AF0u, sub_00290AF0); /* call 0x00290AF0 */

loc_002536D2: ;
    MEM32(ebx + 0x38) = eax;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebx + 0x26) = 0;
    PUSH32(esp, 0x002536E4u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002536E4: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x00253708u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00253708: ;
    edx = edi + 2;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00253713u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253713: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0x3F800000;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x00253737u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00253737: ;
    edx = edi + 3;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00253742u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253742: ;
    PUSH32(esp, 0x42340000);
    ecx = eax;
    PUSH32(esp, 0x0025374Eu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0025374E: ;
    eax = edi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00253759u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253759: ;
    PUSH32(esp, 0x3F800000);
    ecx = eax;
    PUSH32(esp, 0x00253765u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00253765: ;
    ecx = edi + 5;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00253770u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253770: ;
    PUSH32(esp, 0x447A0000);
    ecx = eax;
    PUSH32(esp, 0x0025377Cu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0025377C: ;
    edx = edi + 6;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00253787u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253787: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x10) = 0x3F800000;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x002537ABu); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_002537AB: ;
    edx = edi + 7;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x002537B6u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002537B6: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x002537BFu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_002537BF: ;
    eax = edi + 8;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002537CAu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002537CA: ;
    ebx = eax;
    PUSH32(esp, 0x002537D1u); RECOMP_ABI_CALL(0x00291D00u, sub_00291D00); /* call 0x00291D00 */

loc_002537D1: ;
    ecx = edi + 9;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x002537DFu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002537DF: ;
    ebx = eax;
    PUSH32(esp, 0x002537E6u); RECOMP_ABI_CALL(0x00290CD0u, sub_00290CD0); /* call 0x00290CD0 */

loc_002537E6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46F6B4);
    PUSH32(esp, 0x46F68C);
    PUSH32(esp, 0x46F664);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x00253800u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00253800: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00253810
 * Original: 0x00253810 - 0x00253D80 (1392 bytes, 438 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253810(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253810: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BD9A0);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00253824u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00253824: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x46F948);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00253834u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00253834: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0025383Cu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025383C: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0x40800000;
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x00253860u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00253860: ;
    edx = edi + 1;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0025386Bu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025386B: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0xBF800000u;
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x0025388Fu); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_0025388F: ;
    edx = edi + 2;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0025389Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025389A: ;
    PUSH32(esp, 0x41F00000);
    ecx = eax;
    PUSH32(esp, 0x002538A6u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_002538A6: ;
    eax = edi + 3;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002538B1u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002538B1: ;
    ebp = eax;
    eax = MEM32(0x5BD9C0);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002538D8; /* jne: not equal / not zero */

loc_002538BE: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002538CAu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002538CA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002538D0u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_002538D0: ;
    esp = esp + 8;
    MEM32(0x5BD9C0) = eax;

loc_002538D8: ;
    edx = edi + 4;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    PUSH32(esp, 0x002538EAu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002538EA: ;
    ebp = eax;
    eax = MEM32(0x5BD9C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025390E; /* jne: not equal / not zero */

loc_002538F5: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00253900u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00253900: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00253906u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00253906: ;
    esp = esp + 8;
    MEM32(0x5BD9C0) = eax;

loc_0025390E: ;
    ecx = edi + 5;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    PUSH32(esp, 0x0025391Cu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025391C: ;
    PUSH32(esp, 0x3E99999A);
    ecx = eax;
    PUSH32(esp, 0x00253928u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00253928: ;
    edx = edi + 6;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00253933u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253933: ;
    PUSH32(esp, 0x80);
    ecx = eax;
    PUSH32(esp, 0x0025393Fu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0025393F: ;
    eax = edi + 7;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0025394Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025394A: ;
    PUSH32(esp, 0x80);
    ecx = eax;
    PUSH32(esp, 0x00253956u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00253956: ;
    ecx = edi + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00253961u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253961: ;
    PUSH32(esp, 0x3F000000);
    ecx = eax;
    PUSH32(esp, 0x0025396Du); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0025396D: ;
    edx = edi + 9;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00253978u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253978: ;
    ebp = eax;
    PUSH32(esp, 0x0025397Fu); RECOMP_ABI_CALL(0x00292980u, sub_00292980); /* call 0x00292980 */

loc_0025397F: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 0xA;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00253994u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253994: ;
    ebp = eax;
    PUSH32(esp, 0x0025399Bu); RECOMP_ABI_CALL(0x002919F0u, sub_002919F0); /* call 0x002919F0 */

loc_0025399B: ;
    ecx = edi + 0xB;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x002539B0u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002539B0: ;
    ebp = eax;
    PUSH32(esp, 0x002539B7u); RECOMP_ABI_CALL(0x00291550u, sub_00291550); /* call 0x00291550 */

loc_002539B7: ;
    edx = edi + 0xC;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x002539CCu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002539CC: ;
    ebp = eax;
    PUSH32(esp, 0x002539D3u); RECOMP_ABI_CALL(0x002919F0u, sub_002919F0); /* call 0x002919F0 */

loc_002539D3: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 0xD;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x002539E8u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002539E8: ;
    ebp = eax;
    PUSH32(esp, 0x002539EFu); RECOMP_ABI_CALL(0x00291550u, sub_00291550); /* call 0x00291550 */

loc_002539EF: ;
    ecx = edi + 0xE;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00253A04u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253A04: ;
    ebp = eax;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x00253A0Eu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00253A0E: ;
    edx = edi + 0xF;
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00253A1Cu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253A1C: ;
    ebp = eax;
    eax = MEM32(0x5BDA90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00253A40; /* jne: not equal / not zero */

loc_00253A27: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00253A32u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00253A32: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00253A38u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00253A38: ;
    esp = esp + 8;
    MEM32(0x5BDA90) = eax;

loc_00253A40: ;
    ecx = edi + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00253A55u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253A55: ;
    ebp = eax;
    PUSH32(esp, 0x00253A5Cu); RECOMP_ABI_CALL(0x00291E00u, sub_00291E00); /* call 0x00291E00 */

loc_00253A5C: ;
    edx = edi + 0x11;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00253A6Du); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253A6D: ;
    ebp = eax;
    PUSH32(esp, 0x00253A74u); RECOMP_ABI_CALL(0x002924E0u, sub_002924E0); /* call 0x002924E0 */

loc_00253A74: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 0x12;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00253A89u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253A89: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x00253A92u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00253A92: ;
    ecx = edi + 0x13;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00253A9Du); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253A9D: ;
    PUSH32(esp, 0x3DCCCCCD);
    ecx = eax;
    PUSH32(esp, 0x00253AA9u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00253AA9: ;
    edx = edi + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00253AB4u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253AB4: ;
    PUSH32(esp, 0x447A0000);
    ecx = eax;
    PUSH32(esp, 0x00253AC0u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00253AC0: ;
    eax = edi + 0x15;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00253ACBu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253ACB: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x14) = 0x3F800000;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x00253AEFu); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00253AEF: ;
    edx = edi + 0x16;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00253AFAu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253AFA: ;
    ebp = eax;
    PUSH32(esp, 0x00253B01u); RECOMP_ABI_CALL(0x00290AF0u, sub_00290AF0); /* call 0x00290AF0 */

loc_00253B01: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 0x17;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00253B16u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253B16: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x00253B1Fu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00253B1F: ;
    ecx = edi + 0x18;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00253B2Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253B2A: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x00253B33u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00253B33: ;
    edx = edi + 0x19;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00253B3Eu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253B3E: ;
    ebp = eax;
    PUSH32(esp, 0x00253B45u); RECOMP_ABI_CALL(0x00291330u, sub_00291330); /* call 0x00291330 */

loc_00253B45: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 0x1A;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00253B5Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253B5A: ;
    ebp = eax;
    PUSH32(esp, 0x00253B61u); RECOMP_ABI_CALL(0x002910F0u, sub_002910F0); /* call 0x002910F0 */

loc_00253B61: ;
    ecx = edi + 0x1B;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00253B76u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253B76: ;
    ebp = eax;
    PUSH32(esp, 0x00253B7Du); RECOMP_ABI_CALL(0x00290CD0u, sub_00290CD0); /* call 0x00290CD0 */

loc_00253B7D: ;
    edx = edi + 0x1C;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00253B92u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253B92: ;
    ebp = eax;
    PUSH32(esp, 0x00253B99u); RECOMP_ABI_CALL(0x00290CA0u, sub_00290CA0); /* call 0x00290CA0 */

loc_00253B99: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 0x1D;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00253BAEu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253BAE: ;
    ebp = eax;
    PUSH32(esp, 0x00253BB5u); RECOMP_ABI_CALL(0x00291330u, sub_00291330); /* call 0x00291330 */

loc_00253BB5: ;
    ecx = edi + 0x1E;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00253BCAu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253BCA: ;
    ebp = eax;
    PUSH32(esp, 0x00253BD1u); RECOMP_ABI_CALL(0x002910F0u, sub_002910F0); /* call 0x002910F0 */

loc_00253BD1: ;
    edx = edi + 0x1F;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00253BE6u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253BE6: ;
    ebp = eax;
    PUSH32(esp, 0x00253BEDu); RECOMP_ABI_CALL(0x00290CD0u, sub_00290CD0); /* call 0x00290CD0 */

loc_00253BED: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 0x20;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00253C02u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253C02: ;
    ebp = eax;
    PUSH32(esp, 0x00253C09u); RECOMP_ABI_CALL(0x00290CA0u, sub_00290CA0); /* call 0x00290CA0 */

loc_00253C09: ;
    ecx = edi + 0x21;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00253C1Eu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253C1E: ;
    ebp = eax;
    PUSH32(esp, 0x00253C25u); RECOMP_ABI_CALL(0x002922C0u, sub_002922C0); /* call 0x002922C0 */

loc_00253C25: ;
    edx = edi + 0x22;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00253C3Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253C3A: ;
    ebp = eax;
    PUSH32(esp, 0x00253C41u); RECOMP_ABI_CALL(0x001AB0E0u, sub_001AB0E0); /* call 0x001AB0E0 */

loc_00253C41: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 0x23;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00253C56u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253C56: ;
    ebp = eax;
    PUSH32(esp, 0x00253C5Du); RECOMP_ABI_CALL(0x002905F0u, sub_002905F0); /* call 0x002905F0 */

loc_00253C5D: ;
    ecx = edi + 0x24;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00253C72u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253C72: ;
    ebp = eax;
    PUSH32(esp, 0x00253C79u); RECOMP_ABI_CALL(0x002905F0u, sub_002905F0); /* call 0x002905F0 */

loc_00253C79: ;
    edx = edi + 0x25;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00253C8Eu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253C8E: ;
    ebp = eax;
    PUSH32(esp, 0x00253C95u); RECOMP_ABI_CALL(0x00291D00u, sub_00291D00); /* call 0x00291D00 */

loc_00253C95: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 0x26;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00253CA3u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253CA3: ;
    ebp = eax;
    PUSH32(esp, 0x00253CAAu); RECOMP_ABI_CALL(0x00290CA0u, sub_00290CA0); /* call 0x00290CA0 */

loc_00253CAA: ;
    ecx = edi + 0x28;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00253CBFu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253CBF: ;
    PUSH32(esp, 0x40A00000);
    ecx = eax;
    PUSH32(esp, 0x00253CCBu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00253CCB: ;
    edx = edi + 0x29;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00253CD6u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253CD6: ;
    PUSH32(esp, 0xC0A00000u);
    ecx = eax;
    PUSH32(esp, 0x00253CE2u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00253CE2: ;
    eax = edi + 0x2A;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00253CEDu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253CED: ;
    PUSH32(esp, 0x40A00000);
    ecx = eax;
    PUSH32(esp, 0x00253CF9u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00253CF9: ;
    ecx = edi + 0x2B;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00253D04u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253D04: ;
    PUSH32(esp, 0xC0A00000u);
    ecx = eax;
    PUSH32(esp, 0x00253D10u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00253D10: ;
    edx = edi + 0x2C;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00253D1Bu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253D1B: ;
    ebp = eax;
    PUSH32(esp, 0x00253D22u); RECOMP_ABI_CALL(0x00290AC0u, sub_00290AC0); /* call 0x00290AC0 */

loc_00253D22: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 0x2D;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00253D37u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253D37: ;
    ebp = eax;
    PUSH32(esp, 0x00253D3Eu); RECOMP_ABI_CALL(0x00290AC0u, sub_00290AC0); /* call 0x00290AC0 */

loc_00253D3E: ;
    MEM32(ebp + 0x38) = eax;
    ecx = edi + 0x2F;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00253D53u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253D53: ;
    ebp = eax;
    PUSH32(esp, 1);
    ecx = ebp;
    PUSH32(esp, 0x00253D5Eu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00253D5E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46F888);
    PUSH32(esp, 0x46F7C8);
    PUSH32(esp, 0x46F708);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00253D78u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00253D78: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00253D80
 * Original: 0x00253D80 - 0x00253F3C (444 bytes, 135 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253D80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253D80: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BD9A4);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00253D94u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00253D94: ;
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x46FAA4);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00253DA4u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00253DA4: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00253DACu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253DAC: ;
    ebx = eax;
    PUSH32(esp, 0x00253DB3u); RECOMP_ABI_CALL(0x00291CC0u, sub_00291CC0); /* call 0x00291CC0 */

loc_00253DB3: ;
    MEM32(ebx + 0x38) = eax;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebx + 0x34) = 1;
    PUSH32(esp, 0x00253DC5u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253DC5: ;
    ebx = eax;
    PUSH32(esp, 0x00253DCCu); RECOMP_ABI_CALL(0x002919B0u, sub_002919B0); /* call 0x002919B0 */

loc_00253DCC: ;
    ecx = edi + 2;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x34) = 1;
    PUSH32(esp, 0x00253DDEu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253DDE: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = eax;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0x3F800000;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0x00253E0Au); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00253E0A: ;
    eax = edi + 3;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00253E15u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253E15: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0x3F800000;
    PUSH32(esp, 0x00253E41u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00253E41: ;
    edx = edi + 6;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00253E4Cu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253E4C: ;
    ebp = eax;
    PUSH32(esp, 0x00253E53u); RECOMP_ABI_CALL(0x002919B0u, sub_002919B0); /* call 0x002919B0 */

loc_00253E53: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 7;
    ebx = 0; /* xor self */
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00253E6Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253E6A: ;
    ebp = eax;
    eax = MEM32(0x5BDA8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00253E8F; /* jne: not equal / not zero */

loc_00253E75: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00253E81u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00253E81: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00253E87u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00253E87: ;
    esp = esp + 8;
    MEM32(0x5BDA8C) = eax;

loc_00253E8F: ;
    edx = edi + 8;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00253EA4u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253EA4: ;
    ebp = eax;
    PUSH32(esp, 0x00253EABu); RECOMP_ABI_CALL(0x002929C0u, sub_002929C0); /* call 0x002929C0 */

loc_00253EAB: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 9;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00253EC0u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253EC0: ;
    ebp = eax;
    PUSH32(esp, 0x00253EC7u); RECOMP_ABI_CALL(0x0023B180u, sub_0023B180); /* call 0x0023B180 */

loc_00253EC7: ;
    ecx = edi + 0xA;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00253ED8u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253ED8: ;
    ebp = eax;
    PUSH32(esp, 0x00253EDFu); RECOMP_ABI_CALL(0x0023B180u, sub_0023B180); /* call 0x0023B180 */

loc_00253EDF: ;
    edx = edi + 0xB;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00253EF0u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253EF0: ;
    ebp = eax;
    PUSH32(esp, 0x00253EF7u); RECOMP_ABI_CALL(0x002924E0u, sub_002924E0); /* call 0x002924E0 */

loc_00253EF7: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00253F0Cu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253F0C: ;
    ebp = eax;
    PUSH32(esp, 0x00253F13u); RECOMP_ABI_CALL(0x00290E50u, sub_00290E50); /* call 0x00290E50 */

loc_00253F13: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46FA70);
    PUSH32(esp, 0x46FA3C);
    PUSH32(esp, 0x46FA08);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00253F34u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00253F34: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00253F40
 * Original: 0x00253F40 - 0x00253F46 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253F40(void)
{

loc_00253F40: ;
    eax = MEM32(0x5BD9A8);
    esp += 4; return; /* ret */

}

/**
 * sub_00253F50
 * Original: 0x00253F50 - 0x00253FA9 (89 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253F50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253F50: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00253F6F; /* je: equal / zero */

loc_00253F5A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00253F6F; /* jne: not equal / not zero */

loc_00253F6A: ;
    PUSH32(esp, 0x00253F6Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00253F6F: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00253F8B; /* je: equal / zero */

loc_00253F76: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00253F8B; /* jne: not equal / not zero */

loc_00253F86: ;
    PUSH32(esp, 0x00253F8Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00253F8B: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00253FA8; /* je: equal / zero */

loc_00253F93: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00253FA8; /* jne: not equal / not zero */

loc_00253FA3: ;
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_00253FA8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00253FB0
 * Original: 0x00253FB0 - 0x002540E0 (304 bytes, 89 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253FB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253FB0: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BD9A8);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00253FC4u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00253FC4: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x46FB2C);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00253FD4u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00253FD4: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00253FDCu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253FDC: ;
    ebp = eax;
    PUSH32(esp, 0x00253FE3u); RECOMP_ABI_CALL(0x002919F0u, sub_002919F0); /* call 0x002919F0 */

loc_00253FE3: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 1;
    SET_LO8(ebx, 0); /* xor self */
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00253FF6u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00253FF6: ;
    ebp = eax;
    PUSH32(esp, 0x00253FFDu); RECOMP_ABI_CALL(0x00291550u, sub_00291550); /* call 0x00291550 */

loc_00253FFD: ;
    ecx = edi + 2;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x0025400Eu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025400E: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = eax;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0x3F800000;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0x0025403Au); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_0025403A: ;
    eax = edi + 3;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00254045u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00254045: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x00254069u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00254069: ;
    edx = edi + 4;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00254074u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00254074: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0x3F800000;
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x00254098u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00254098: ;
    edx = edi + 5;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x002540A3u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002540A3: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x002540ACu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_002540AC: ;
    eax = edi + 6;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002540B7u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002540B7: ;
    ebx = eax;
    PUSH32(esp, 0x002540BEu); RECOMP_ABI_CALL(0x00291D00u, sub_00291D00); /* call 0x00291D00 */

loc_002540BE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46FB10);
    PUSH32(esp, 0x46FAF4);
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x46FAD8);
    ecx = esi;
    PUSH32(esp, 0x002540D8u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002540D8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_002540E0
 * Original: 0x002540E0 - 0x002540F0 (16 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002540E0(void)
{

loc_002540E0: ;
    eax = MEM32(0x5BD9BC);
    esp += 4; return; /* ret */

}

/**
 * sub_002540F0
 * Original: 0x002540F0 - 0x002540F6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002540F0(void)
{

loc_002540F0: ;
    eax = MEM32(0x5BD9D4);
    esp += 4; return; /* ret */

}

/**
 * sub_00254100
 * Original: 0x00254100 - 0x002541FD (253 bytes, 80 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00254100(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00254100: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BD9D4);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00254110u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00254110: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x46FB84);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00254120u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00254120: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0025412Bu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025412B: ;
    ebp = eax;
    eax = MEM32(0x5BD9E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00254150; /* jne: not equal / not zero */

loc_00254136: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00254142u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00254142: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00254148u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00254148: ;
    esp = esp + 8;
    MEM32(0x5BD9E4) = eax;

loc_00254150: ;
    edx = edi + 2;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM32(ebp + 0x44) = 2;
    MEM8(ebp + 0x3C) = 0;
    PUSH32(esp, 0x00254169u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00254169: ;
    ebp = eax;
    eax = MEM32(0x5BD9DC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025418D; /* jne: not equal / not zero */

loc_00254174: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025417Fu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0025417F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00254185u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00254185: ;
    esp = esp + 8;
    MEM32(0x5BD9DC) = eax;

loc_0025418D: ;
    ecx = edi + 3;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM32(ebp + 0x44) = 2;
    MEM8(ebp + 0x3C) = 0;
    PUSH32(esp, 0x002541A6u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002541A6: ;
    ebp = eax;
    eax = MEM32(0x5BD9E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002541CB; /* jne: not equal / not zero */

loc_002541B1: ;
    edx = MEM32(0x46A684);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002541BDu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002541BD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002541C3u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_002541C3: ;
    esp = esp + 8;
    MEM32(0x5BD9E4) = eax;

loc_002541CB: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002541D9u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002541D9: ;
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x002541E2u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_002541E2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46FB70);
    PUSH32(esp, 0x46FB5C);
    PUSH32(esp, 0x46FB48);
    ecx = esi;
    PUSH32(esp, 0x002541F9u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002541F9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00254200
 * Original: 0x00254200 - 0x00254206 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254200(void)
{

loc_00254200: ;
    eax = MEM32(0x5BD9DC);
    esp += 4; return; /* ret */

}

/**
 * sub_00254210
 * Original: 0x00254210 - 0x00254234 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254210(void)
{

loc_00254210: ;
    esp = esp - 0x24;
    ecx = esp;
    PUSH32(esp, 0x0025421Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0025421B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3FDFA8;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_00254240
 * Original: 0x00254240 - 0x0025432A (234 bytes, 73 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00254240(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00254240: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BD9DC);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00254250u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00254250: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x46FBBC);
    ecx = esi;
    ebp = eax;
    PUSH32(esp, 0x00254260u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00254260: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00254268u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00254268: ;
    edi = eax;
    eax = MEM32(0x5BD9E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025428C; /* jne: not equal / not zero */

loc_00254273: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025427Eu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0025427E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00254284u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00254284: ;
    esp = esp + 8;
    MEM32(0x5BD9E4) = eax;

loc_0025428C: ;
    ecx = ebp + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(edi + 0x38) = eax;
    MEM32(edi + 0x44) = 3;
    MEM8(edi + 0x3C) = 0;
    PUSH32(esp, 0x002542A5u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002542A5: ;
    edi = eax;
    eax = MEM32(0x5BD9E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002542CA; /* jne: not equal / not zero */

loc_002542B0: ;
    edx = MEM32(0x46A684);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002542BCu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002542BC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002542C2u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_002542C2: ;
    esp = esp + 8;
    MEM32(0x5BD9E4) = eax;

loc_002542CA: ;
    MEM32(edi + 0x38) = eax;
    eax = ebp + 2;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(edi + 0x44) = 3;
    MEM8(edi + 0x3C) = 0;
    PUSH32(esp, 0x002542E3u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002542E3: ;
    edi = eax;
    eax = MEM32(0x5BD9E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00254308; /* jne: not equal / not zero */

loc_002542EE: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002542FAu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002542FA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00254300u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00254300: ;
    esp = esp + 8;
    MEM32(0x5BD9E4) = eax;

loc_00254308: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x46FBB0);
    PUSH32(esp, 0x46FBA4);
    PUSH32(esp, 0x46FB98);
    ecx = esi;
    MEM32(edi + 0x38) = eax;
    MEM8(edi + 0x3C) = 0;
    PUSH32(esp, 0x00254326u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00254326: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00254330
 * Original: 0x00254330 - 0x00254336 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254330(void)
{

loc_00254330: ;
    eax = MEM32(0x5BD9E4);
    esp += 4; return; /* ret */

}

/**
 * sub_00254340
 * Original: 0x00254340 - 0x002543ED (173 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254340(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00254340: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025435F; /* je: equal / zero */

loc_0025434A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025435F; /* jne: not equal / not zero */

loc_0025435A: ;
    PUSH32(esp, 0x0025435Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025435F: ;
    ecx = MEM32(esi + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025437B; /* je: equal / zero */

loc_00254366: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025437B; /* jne: not equal / not zero */

loc_00254376: ;
    PUSH32(esp, 0x0025437Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025437B: ;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00254397; /* je: equal / zero */

loc_00254382: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00254397; /* jne: not equal / not zero */

loc_00254392: ;
    PUSH32(esp, 0x00254397u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00254397: ;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002543B3; /* je: equal / zero */

loc_0025439E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002543B3; /* jne: not equal / not zero */

loc_002543AE: ;
    PUSH32(esp, 0x002543B3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002543B3: ;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002543CF; /* je: equal / zero */

loc_002543BA: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002543CF; /* jne: not equal / not zero */

loc_002543CA: ;
    PUSH32(esp, 0x002543CFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002543CF: ;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_002543EC; /* je: equal / zero */

loc_002543D7: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002543EC; /* jne: not equal / not zero */

loc_002543E7: ;
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_002543EC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002543F0
 * Original: 0x002543F0 - 0x0025451C (300 bytes, 99 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002543F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002543F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BD9EC);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00254402u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00254402: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x46FC58);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00254412u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00254412: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0025441Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025441A: ;
    ebx = eax;
    eax = MEM32(0x5BD9F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025443E; /* jne: not equal / not zero */

loc_00254425: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00254430u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00254430: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00254436u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00254436: ;
    esp = esp + 8;
    MEM32(0x5BD9F8) = eax;

loc_0025443E: ;
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x0025444Cu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025444C: ;
    ebp = eax;
    PUSH32(esp, 0x00254453u); RECOMP_ABI_CALL(0x001AB050u, sub_001AB050); /* call 0x001AB050 */

loc_00254453: ;
    edx = edi + 2;
    SET_LO8(ebx, 1);
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00254466u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00254466: ;
    ebp = eax;
    PUSH32(esp, 0x0025446Du); RECOMP_ABI_CALL(0x00222FF0u, sub_00222FF0); /* call 0x00222FF0 */

loc_0025446D: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 3;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x0025447Eu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025447E: ;
    ebp = eax;
    eax = MEM32(0x5BDB18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002544A3; /* jne: not equal / not zero */

loc_00254489: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00254495u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00254495: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025449Bu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0025449B: ;
    esp = esp + 8;
    MEM32(0x5BDB18) = eax;

loc_002544A3: ;
    edx = edi + 8;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x002544B4u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002544B4: ;
    ebx = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x002544CAu); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_002544CA: ;
    ecx = edi + 0xA;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x34) = 0x221530;
    PUSH32(esp, 0x002544DCu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002544DC: ;
    PUSH32(esp, 0x3DCCCCCD);
    ecx = eax;
    PUSH32(esp, 0x002544E8u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_002544E8: ;
    edx = edi + 0xB;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x002544F3u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002544F3: ;
    PUSH32(esp, 0x447A0000);
    ecx = eax;
    PUSH32(esp, 0x002544FFu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_002544FF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46FC28);
    PUSH32(esp, 0x46FBF8);
    PUSH32(esp, 0x46FBC8);
    ecx = esi;
    PUSH32(esp, 0x00254516u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00254516: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00254520
 * Original: 0x00254520 - 0x00254526 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254520(void)
{

loc_00254520: ;
    eax = MEM32(0x5BD9F8);
    esp += 4; return; /* ret */

}

/**
 * sub_00254530
 * Original: 0x00254530 - 0x002545A5 (117 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254530(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00254530: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025454F; /* je: equal / zero */

loc_0025453A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025454F; /* jne: not equal / not zero */

loc_0025454A: ;
    PUSH32(esp, 0x0025454Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025454F: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025456B; /* je: equal / zero */

loc_00254556: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025456B; /* jne: not equal / not zero */

loc_00254566: ;
    PUSH32(esp, 0x0025456Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025456B: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00254587; /* je: equal / zero */

loc_00254572: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00254587; /* jne: not equal / not zero */

loc_00254582: ;
    PUSH32(esp, 0x00254587u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00254587: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_002545A4; /* je: equal / zero */

loc_0025458F: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002545A4; /* jne: not equal / not zero */

loc_0025459F: ;
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_002545A4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002545B0
 * Original: 0x002545B0 - 0x002545B6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002545B0(void)
{

loc_002545B0: ;
    eax = MEM32(0x5BDA04);
    esp += 4; return; /* ret */

}

/**
 * sub_002545C0
 * Original: 0x002545C0 - 0x002546AF (239 bytes, 79 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002545C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002545C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDA04);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002545D2u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_002545D2: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x46FD0C);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x002545E2u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_002545E2: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002545EAu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002545EA: ;
    ebx = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x00254600u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00254600: ;
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x34) = 0x249D50;
    PUSH32(esp, 0x00254612u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00254612: ;
    ebp = eax;
    edx = esp + 0x10;
    ebx = 1;
    PUSH32(esp, edx);
    ecx = ebp;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x00254629u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00254629: ;
    eax = edi + 3;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(ebp + 0x34) = 0x249D20;
    PUSH32(esp, 0x0025463Bu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025463B: ;
    ebp = eax;
    eax = MEM32(0x5BDA08);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00254660; /* jne: not equal / not zero */

loc_00254646: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00254652u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00254652: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00254658u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00254658: ;
    esp = esp + 8;
    MEM32(0x5BDA08) = eax;

loc_00254660: ;
    edx = edi + 4;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00254671u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00254671: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    PUSH32(esp, 0x0025467Au); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0025467A: ;
    eax = edi + 5;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00254685u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00254685: ;
    ebp = eax;
    PUSH32(esp, 0x0025468Cu); RECOMP_ABI_CALL(0x00223090u, sub_00223090); /* call 0x00223090 */

loc_0025468C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46FCE0);
    PUSH32(esp, 0x46FCB4);
    PUSH32(esp, 0x46FC88);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x002546A9u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002546A9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002546B0
 * Original: 0x002546B0 - 0x002546B6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002546B0(void)
{

loc_002546B0: ;
    eax = MEM32(0x5BDA0C);
    esp += 4; return; /* ret */

}

/**
 * sub_002546C0
 * Original: 0x002546C0 - 0x00254719 (89 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002546C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002546C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002546DF; /* je: equal / zero */

loc_002546CA: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002546DF; /* jne: not equal / not zero */

loc_002546DA: ;
    PUSH32(esp, 0x002546DFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002546DF: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002546FB; /* je: equal / zero */

loc_002546E6: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002546FB; /* jne: not equal / not zero */

loc_002546F6: ;
    PUSH32(esp, 0x002546FBu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002546FB: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00254718; /* je: equal / zero */

loc_00254703: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00254718; /* jne: not equal / not zero */

loc_00254713: ;
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_00254718: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00254720
 * Original: 0x00254720 - 0x002548B9 (409 bytes, 132 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00254720(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00254720: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDA14);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00254730u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00254730: ;
    PUSH32(esp, 9);
    PUSH32(esp, 0x46FDA4);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00254740u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00254740: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00254748u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00254748: ;
    ebp = eax;
    eax = MEM32(0x5BDA18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025476C; /* jne: not equal / not zero */

loc_00254753: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025475Eu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0025475E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00254764u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00254764: ;
    esp = esp + 8;
    MEM32(0x5BDA18) = eax;

loc_0025476C: ;
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    PUSH32(esp, 0x0025477Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025477A: ;
    ebp = eax;
    PUSH32(esp, 0x00254781u); RECOMP_ABI_CALL(0x00222F00u, sub_00222F00); /* call 0x00222F00 */

loc_00254781: ;
    edx = edi + 2;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    PUSH32(esp, 0x0025478Fu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025478F: ;
    ebp = eax;
    PUSH32(esp, 0x00254796u); RECOMP_ABI_CALL(0x00222F00u, sub_00222F00); /* call 0x00222F00 */

loc_00254796: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 3;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002547A4u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002547A4: ;
    ebp = eax;
    PUSH32(esp, 0x002547ABu); RECOMP_ABI_CALL(0x00222F50u, sub_00222F50); /* call 0x00222F50 */

loc_002547AB: ;
    ecx = edi + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    PUSH32(esp, 0x002547B9u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002547B9: ;
    ebp = eax;
    eax = MEM32(0x5BDB18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002547DE; /* jne: not equal / not zero */

loc_002547C4: ;
    edx = MEM32(0x46A684);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002547D0u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002547D0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002547D6u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_002547D6: ;
    esp = esp + 8;
    MEM32(0x5BDB18) = eax;

loc_002547DE: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 5;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = 0;
    PUSH32(esp, 0x002547F4u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002547F4: ;
    ebp = eax;
    PUSH32(esp, 0x002547FBu); RECOMP_ABI_CALL(0x001AABC0u, sub_001AABC0); /* call 0x001AABC0 */

loc_002547FB: ;
    ecx = edi + 6;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    PUSH32(esp, 0x00254809u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00254809: ;
    ebp = eax;
    eax = MEM32(0x5BDA04);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025482E; /* jne: not equal / not zero */

loc_00254814: ;
    edx = MEM32(0x46A684);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00254820u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00254820: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00254826u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00254826: ;
    esp = esp + 8;
    MEM32(0x5BDA04) = eax;

loc_0025482E: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 7;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0025483Cu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025483C: ;
    ebp = eax;
    eax = MEM32(0x5BDA18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00254861; /* jne: not equal / not zero */

loc_00254847: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00254853u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00254853: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00254859u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00254859: ;
    esp = esp + 8;
    MEM32(0x5BDA18) = eax;

loc_00254861: ;
    edx = edi + 8;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    PUSH32(esp, 0x0025486Fu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025486F: ;
    ebp = eax;
    eax = MEM32(0x5BDB18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00254893; /* jne: not equal / not zero */

loc_0025487A: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00254885u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00254885: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025488Bu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0025488B: ;
    esp = esp + 8;
    MEM32(0x5BDB18) = eax;

loc_00254893: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46FD80);
    PUSH32(esp, 0x46FD5C);
    PUSH32(esp, 0x46FD38);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = 0;
    PUSH32(esp, 0x002548B5u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002548B5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002548C0
 * Original: 0x002548C0 - 0x002548C6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002548C0(void)
{

loc_002548C0: ;
    eax = MEM32(0x5BDA18);
    esp += 4; return; /* ret */

}

/**
 * sub_002548D0
 * Original: 0x002548D0 - 0x002548D8 (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002548D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002548D0: ;
    ecx = MEM32(ecx + 0x38);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x60)); return; /* indirect tail jmp */

}

/**
 * sub_002548E0
 * Original: 0x002548E0 - 0x002548E8 (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002548E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002548E0: ;
    ecx = MEM32(ecx + 0x38);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x64)); return; /* indirect tail jmp */

}

/**
 * sub_002548F0
 * Original: 0x002548F0 - 0x002549D5 (229 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002548F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002548F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025490F; /* je: equal / zero */

loc_002548FA: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025490F; /* jne: not equal / not zero */

loc_0025490A: ;
    PUSH32(esp, 0x0025490Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025490F: ;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025492B; /* je: equal / zero */

loc_00254916: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025492B; /* jne: not equal / not zero */

loc_00254926: ;
    PUSH32(esp, 0x0025492Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025492B: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00254947; /* je: equal / zero */

loc_00254932: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00254947; /* jne: not equal / not zero */

loc_00254942: ;
    PUSH32(esp, 0x00254947u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00254947: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00254963; /* je: equal / zero */

loc_0025494E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00254963; /* jne: not equal / not zero */

loc_0025495E: ;
    PUSH32(esp, 0x00254963u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00254963: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025497F; /* je: equal / zero */

loc_0025496A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025497F; /* jne: not equal / not zero */

loc_0025497A: ;
    PUSH32(esp, 0x0025497Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025497F: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025499B; /* je: equal / zero */

loc_00254986: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025499B; /* jne: not equal / not zero */

loc_00254996: ;
    PUSH32(esp, 0x0025499Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025499B: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002549B7; /* je: equal / zero */

loc_002549A2: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002549B7; /* jne: not equal / not zero */

loc_002549B2: ;
    PUSH32(esp, 0x002549B7u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002549B7: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_002549D4; /* je: equal / zero */

loc_002549BF: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002549D4; /* jne: not equal / not zero */

loc_002549CF: ;
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_002549D4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002549E0
 * Original: 0x002549E0 - 0x00254B05 (293 bytes, 97 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002549E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002549E0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDA24);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002549F4u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_002549F4: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x46FE1C);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00254A04u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00254A04: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00254A0Cu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00254A0C: ;
    ebp = eax;
    PUSH32(esp, 0x00254A13u); RECOMP_ABI_CALL(0x00222F00u, sub_00222F00); /* call 0x00222F00 */

loc_00254A13: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 1;
    ebx = 0; /* xor self */
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x28) = LO8(ebx);
    MEM8(ebp + 0x27) = 2;
    PUSH32(esp, 0x00254A2Eu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00254A2E: ;
    ebp = eax;
    eax = MEM32(0x5BD9C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00254A53; /* jne: not equal / not zero */

loc_00254A39: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00254A45u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00254A45: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00254A4Bu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00254A4B: ;
    esp = esp + 8;
    MEM32(0x5BD9C8) = eax;

loc_00254A53: ;
    edx = edi + 2;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00254A64u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00254A64: ;
    ebp = eax;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = ebp;
    PUSH32(esp, 0x00254A6Fu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00254A6F: ;
    eax = edi + 3;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00254A7Du); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00254A7D: ;
    ebp = eax;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x00254A87u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00254A87: ;
    ecx = edi + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00254A95u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00254A95: ;
    ebp = eax;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x00254A9Fu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00254A9F: ;
    edx = edi + 5;
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00254AADu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00254AAD: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x00254AD1u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00254AD1: ;
    edx = edi + 6;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00254ADCu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00254ADC: ;
    ebx = eax;
    PUSH32(esp, 0x00254AE3u); RECOMP_ABI_CALL(0x00222F00u, sub_00222F00); /* call 0x00222F00 */

loc_00254AE3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46FE00);
    PUSH32(esp, 0x46FDE4);
    PUSH32(esp, 0x46FDC8);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x00254AFDu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00254AFD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00254B10
 * Original: 0x00254B10 - 0x00254B16 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254B10(void)
{

loc_00254B10: ;
    eax = MEM32(0x5BDA34);
    esp += 4; return; /* ret */

}

/**
 * sub_00254B20
 * Original: 0x00254B20 - 0x00254B9D (125 bytes, 42 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00254B20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00254B20: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDA34);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00254B30u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00254B30: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x46FE5C);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00254B40u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00254B40: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00254B48u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00254B48: ;
    ebp = eax;
    eax = MEM32(0x5BDA4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00254B6C; /* jne: not equal / not zero */

loc_00254B53: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00254B5Eu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00254B5E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00254B64u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00254B64: ;
    esp = esp + 8;
    MEM32(0x5BDA4C) = eax;

loc_00254B6C: ;
    ecx = edi + 2;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x3C) = 0;
    PUSH32(esp, 0x00254B7Eu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00254B7E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46FE50);
    PUSH32(esp, 0x46FE44);
    PUSH32(esp, 0x46FE38);
    ecx = esi;
    MEM8(eax + 0x26) = 0;
    PUSH32(esp, 0x00254B99u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00254B99: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00254BA0
 * Original: 0x00254BA0 - 0x00254C0E (110 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00254BA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDA38);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00254BB0u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00254BB0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x46FE74);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00254BC0u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00254BC0: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00254BC8u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00254BC8: ;
    ebx = eax;
    eax = MEM32(0x5BDA44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00254BEC; /* jne: not equal / not zero */

loc_00254BD3: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00254BDEu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00254BDE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00254BE4u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00254BE4: ;
    esp = esp + 8;
    MEM32(0x5BDA44) = eax;

loc_00254BEC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46FE70);
    PUSH32(esp, 0x46FE6C);
    PUSH32(esp, 0x46FE68);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x34) = 1;
    PUSH32(esp, 0x00254C0Au); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00254C0A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00254C10
 * Original: 0x00254C10 - 0x00254CA0 (144 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254C10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00254C10: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00254C2F; /* je: equal / zero */

loc_00254C1A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00254C2F; /* jne: not equal / not zero */

loc_00254C2A: ;
    PUSH32(esp, 0x00254C2Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00254C2F: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00254C4B; /* je: equal / zero */

loc_00254C36: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00254C4B; /* jne: not equal / not zero */

loc_00254C46: ;
    PUSH32(esp, 0x00254C4Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00254C4B: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00254C67; /* je: equal / zero */

loc_00254C52: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00254C67; /* jne: not equal / not zero */

loc_00254C62: ;
    PUSH32(esp, 0x00254C67u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00254C67: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00254C83; /* je: equal / zero */

loc_00254C6E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00254C83; /* jne: not equal / not zero */

loc_00254C7E: ;
    PUSH32(esp, 0x00254C83u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00254C83: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00254C9E; /* je: equal / zero */

loc_00254C8A: ;
    ecx = MEM32(esi + -4);
    eax = esi + -8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_00254C9E; /* jne: not equal / not zero */

loc_00254C96: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00254C9Eu); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_00254C9E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00254CA0
 * Original: 0x00254CA0 - 0x00254CB0 (16 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254CA0(void)
{

loc_00254CA0: ;
    eax = MEM32(0x5BDA54);
    esp += 4; return; /* ret */

}

/**
 * sub_00254CB0
 * Original: 0x00254CB0 - 0x00254D5D (173 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254CB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00254CB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00254CCF; /* je: equal / zero */

loc_00254CBA: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00254CCF; /* jne: not equal / not zero */

loc_00254CCA: ;
    PUSH32(esp, 0x00254CCFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00254CCF: ;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00254CEB; /* je: equal / zero */

loc_00254CD6: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00254CEB; /* jne: not equal / not zero */

loc_00254CE6: ;
    PUSH32(esp, 0x00254CEBu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00254CEB: ;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00254D07; /* je: equal / zero */

loc_00254CF2: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00254D07; /* jne: not equal / not zero */

loc_00254D02: ;
    PUSH32(esp, 0x00254D07u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00254D07: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00254D23; /* je: equal / zero */

loc_00254D0E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00254D23; /* jne: not equal / not zero */

loc_00254D1E: ;
    PUSH32(esp, 0x00254D23u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00254D23: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00254D3F; /* je: equal / zero */

loc_00254D2A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00254D3F; /* jne: not equal / not zero */

loc_00254D3A: ;
    PUSH32(esp, 0x00254D3Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00254D3F: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00254D5C; /* je: equal / zero */

loc_00254D47: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00254D5C; /* jne: not equal / not zero */

loc_00254D57: ;
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_00254D5C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00254D60
 * Original: 0x00254D60 - 0x00254D82 (34 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254D60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00254D60: ;
    eax = MEM32(0x5BDD74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00254D81; /* je: equal / zero */

loc_00254D6B: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00254D81; /* jne: not equal / not zero */

loc_00254D7C: ;
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_00254D81: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00254D90
 * Original: 0x00254D90 - 0x00254D96 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254D90(void)
{

loc_00254D90: ;
    eax = MEM32(0x5BDA58);
    esp += 4; return; /* ret */

}

/**
 * sub_00254DA0
 * Original: 0x00254DA0 - 0x00254DC4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254DA0(void)
{

loc_00254DA0: ;
    esp = esp - 8;
    ecx = esp;
    PUSH32(esp, 0x00254DABu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00254DAB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3FE2F8;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00254DD0
 * Original: 0x00254DD0 - 0x00254DF4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254DD0(void)
{

loc_00254DD0: ;
    esp = esp - 8;
    ecx = esp;
    PUSH32(esp, 0x00254DDBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00254DDB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3FE388;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00254E00
 * Original: 0x00254E00 - 0x00254E06 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254E00(void)
{

loc_00254E00: ;
    eax = MEM32(0x5BDA6C);
    esp += 4; return; /* ret */

}

/**
 * sub_00254E10
 * Original: 0x00254E10 - 0x00254EF9 (233 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254E10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00254E10: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00254E2F; /* je: equal / zero */

loc_00254E1A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00254E2F; /* jne: not equal / not zero */

loc_00254E2A: ;
    PUSH32(esp, 0x00254E2Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00254E2F: ;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00254E4B; /* je: equal / zero */

loc_00254E36: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00254E4B; /* jne: not equal / not zero */

loc_00254E46: ;
    PUSH32(esp, 0x00254E4Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00254E4B: ;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00254E67; /* je: equal / zero */

loc_00254E52: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00254E67; /* jne: not equal / not zero */

loc_00254E62: ;
    PUSH32(esp, 0x00254E67u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00254E67: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00254E83; /* je: equal / zero */

loc_00254E6E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00254E83; /* jne: not equal / not zero */

loc_00254E7E: ;
    PUSH32(esp, 0x00254E83u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00254E83: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00254E9E; /* je: equal / zero */

loc_00254E8A: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_00254E9E; /* jne: not equal / not zero */

loc_00254E96: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00254E9Eu); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_00254E9E: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00254EBA; /* je: equal / zero */

loc_00254EA5: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00254EBA; /* jne: not equal / not zero */

loc_00254EB5: ;
    PUSH32(esp, 0x00254EBAu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00254EBA: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00254ED6; /* je: equal / zero */

loc_00254EC1: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00254ED6; /* jne: not equal / not zero */

loc_00254ED1: ;
    PUSH32(esp, 0x00254ED6u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00254ED6: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00254EF1; /* je: equal / zero */

loc_00254EDD: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_00254EF1; /* jne: not equal / not zero */

loc_00254EE9: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00254EF1u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_00254EF1: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00252C90(); return; /* tail jmp 0x00252C90 */

}

/**
 * sub_00254F00
 * Original: 0x00254F00 - 0x00254F06 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254F00(void)
{

loc_00254F00: ;
    eax = MEM32(0x5BDA70);
    esp += 4; return; /* ret */

}

/**
 * sub_00254F10
 * Original: 0x00254F10 - 0x00254F7E (110 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00254F10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDA70);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00254F20u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00254F20: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x46FE84);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00254F30u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00254F30: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00254F38u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00254F38: ;
    ebx = eax;
    eax = MEM32(0x5BDA74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00254F5C; /* jne: not equal / not zero */

loc_00254F43: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00254F4Eu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00254F4E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00254F54u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00254F54: ;
    esp = esp + 8;
    MEM32(0x5BDA74) = eax;

loc_00254F5C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46FE80);
    PUSH32(esp, 0x46FE7C);
    PUSH32(esp, 0x46FE78);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x34) = 1;
    PUSH32(esp, 0x00254F7Au); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00254F7A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00254F80
 * Original: 0x00254F80 - 0x00254F86 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254F80(void)
{

loc_00254F80: ;
    eax = MEM32(0x5BDA78);
    esp += 4; return; /* ret */

}

/**
 * sub_00254F90
 * Original: 0x00254F90 - 0x00254FD4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00254F90: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00254FA0; /* jne: not equal / not zero */

loc_00254F99: ;
    MEM8(0x5BDF6C) = 1;

loc_00254FA0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x24A5A0);
    PUSH32(esp, 0x24A570);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x40055C);
    PUSH32(esp, 0x250990);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BDA78);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00254FD0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00254FD0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00254FE0
 * Original: 0x00254FE0 - 0x00254FFE (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254FE0(void)
{

loc_00254FE0: ;
    PUSH32(esp, 0x281670);
    PUSH32(esp, 0x00254FEAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00254FEA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BDA80);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00254FFDu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00254FFD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00255000
 * Original: 0x00255000 - 0x00255006 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255000(void)
{

loc_00255000: ;
    eax = MEM32(0x5BDA88);
    esp += 4; return; /* ret */

}

/**
 * sub_00255010
 * Original: 0x00255010 - 0x002550CE (190 bytes, 58 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00255010: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDA88);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00255023u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00255023: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x46FEAC);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00255033u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00255033: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0025503Bu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025503B: ;
    ebx = eax;
    eax = MEM32(0x5BD9C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025505F; /* jne: not equal / not zero */

loc_00255046: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00255051u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00255051: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00255057u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00255057: ;
    esp = esp + 8;
    MEM32(0x5BD9C0) = eax;

loc_0025505F: ;
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x24) = 3;
    MEM8(ebx + 0x34) = 1;
    PUSH32(esp, 0x00255075u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00255075: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x00255099u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00255099: ;
    eax = edi + 2;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002550A4u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002550A4: ;
    PUSH32(esp, 0x3F800000);
    ecx = eax;
    PUSH32(esp, 0x002550B0u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_002550B0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46FEA0);
    PUSH32(esp, 0x46FE94);
    PUSH32(esp, 0x46FE88);
    ecx = esi;
    PUSH32(esp, 0x002550C7u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002550C7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_002550D0
 * Original: 0x002550D0 - 0x00255189 (185 bytes, 46 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002550D0(void)
{

loc_002550D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x002550D9u); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_002550D9: ;
    edi = 0; /* xor self */
    MEM32(esi + 0x1C) = edi;
    MEM32(esi) = 0x4005C8;
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x34) = edi;
    MEM32(esi + 0x38) = edi;
    MEM32(esi + 0x3C) = edi;
    MEM32(esi + 0x40) = edi;
    MEM32(esi + 0x44) = edi;
    MEM32(esi + 0x48) = edi;
    MEM32(esi + 0x4C) = edi;
    MEM32(esi + 0x50) = edi;
    MEM32(esi + 0x54) = edi;
    MEM32(esi + 0x58) = edi;
    MEM32(esi + 0x5C) = edi;
    ecx = esi + 0x64;
    MEM32(esi + 0x60) = edi;
    PUSH32(esp, 0x00255116u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_00255116: ;
    ecx = esi + 0xA4;
    PUSH32(esp, 0x00255121u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_00255121: ;
    MEM32(esi + 0xE8) = edi;
    MEM32(esi + 0xEC) = edi;
    MEM32(esi + 0xF0) = edi;
    MEM32(esi + 0xF4) = edi;
    MEM32(esi + 0xF8) = edi;
    MEM32(esi + 0xFC) = edi;
    MEM32(esi + 0x100) = edi;
    MEM32(esi + 0x104) = edi;
    MEM32(esi + 0x108) = edi;
    ecx = esi + 0x110;
    MEM32(esi + 0x10C) = edi;
    PUSH32(esp, 0x00255168u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_00255168: ;
    ecx = esi + 0x158;
    MEM32(esi + 0x150) = edi;
    PUSH32(esp, 0x00255179u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_00255179: ;
    ecx = esi + 0x198;
    PUSH32(esp, 0x00255184u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_00255184: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00255190
 * Original: 0x00255190 - 0x00255196 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255190(void)
{

loc_00255190: ;
    eax = MEM32(0x5BDAF4);
    esp += 4; return; /* ret */

}

/**
 * sub_002551A0
 * Original: 0x002551A0 - 0x002551B3 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002551A0(void)
{

loc_002551A0: ;
    ecx = MEM32(ecx + 0xF0);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002551B0u); RECOMP_ABI_CALL(0x002551C0u, sub_002551C0); /* call 0x002551C0 */

loc_002551B0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002551C0
 * Original: 0x002551C0 - 0x002551FB (59 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002551C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002551C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002551D4; /* jge: greater or equal (signed >=) */

loc_002551CC: ;
    eax = esi + 1;
    MEM32(edi + 8) = eax;
    goto loc_002551E1;

loc_002551D4: ;
    PUSH32(esp, 8);
    ecx = esi + 1;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x002551E1u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_002551E1: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax);
    edx = MEM32(edi + 0x10);
    MEM32(edx + esi * 8) = ecx;
    eax = MEM32(eax + 4);
    MEM32(edx + esi * 8 + 4) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00255200
 * Original: 0x00255200 - 0x0025520A (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255200(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00255200: ;
    eax = MEM32(ecx + 0xF0);
    MEM32(eax + 8) = MEM32(eax + 8) - 1;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00255210
 * Original: 0x00255210 - 0x0025526F (95 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00255210: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xF0);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025525F; /* jne: not equal / not zero */

loc_00255220: ;
    SET_LO8(eax, MEM8(esi + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00255257; /* jne: not equal / not zero */

loc_00255227: ;
    SET_LO8(eax, MEM8(esi + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00255242; /* je: equal / zero */

loc_0025522E: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(esi + 0x10);
    MEM32(esi + 0x2C) = ecx;
    MEM32(esi + 0x28) = eax;
    MEM8(esi + 0x30) = 1;
    edx = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00255242: ;
    ecx = MEM32(0x5BC568);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x0025524Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0025524D: ;
    MEM32(esi + 0x2C) = edx;
    MEM32(esi + 0x28) = eax;
    MEM8(esi + 0x30) = 1;

loc_00255257: ;
    eax = MEM32(esi + 0x28);
    edx = MEM32(esi + 0x2C);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0025525F: ;
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + ecx * 8 + -8);
    edx = MEM32(edx + ecx * 8 + -4);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00255270
 * Original: 0x00255270 - 0x002552AB (59 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00255270: ;
    eax = MEM32(ecx + 0xF0);
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00255292; /* jne: not equal / not zero */

loc_0025527D: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM8(ecx + 0x30) = 0;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = edx;
    esp += 12; return; /* ret 8 */

loc_00255292: ;
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0x10);
    eax = MEM32(esp + 4);
    MEM32(edx + ecx * 8 + -8) = eax;
    eax = MEM32(esp + 8);
    MEM32(edx + ecx * 8 + -4) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002552B0
 * Original: 0x002552B0 - 0x002555AE (766 bytes, 264 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002552B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002552B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x150);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002552D2; /* je: equal / zero */

loc_002552BD: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002552D2; /* jne: not equal / not zero */

loc_002552CD: ;
    PUSH32(esp, 0x002552D2u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002552D2: ;
    ecx = MEM32(esi + 0x10C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002552F1; /* je: equal / zero */

loc_002552DC: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002552F1; /* jne: not equal / not zero */

loc_002552EC: ;
    PUSH32(esp, 0x002552F1u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002552F1: ;
    ecx = MEM32(esi + 0x108);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00255310; /* je: equal / zero */

loc_002552FB: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00255310; /* jne: not equal / not zero */

loc_0025530B: ;
    PUSH32(esp, 0x00255310u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00255310: ;
    ecx = MEM32(esi + 0x104);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025532F; /* je: equal / zero */

loc_0025531A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025532F; /* jne: not equal / not zero */

loc_0025532A: ;
    PUSH32(esp, 0x0025532Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025532F: ;
    ecx = MEM32(esi + 0x100);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025534E; /* je: equal / zero */

loc_00255339: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025534E; /* jne: not equal / not zero */

loc_00255349: ;
    PUSH32(esp, 0x0025534Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025534E: ;
    ecx = MEM32(esi + 0xFC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025536D; /* je: equal / zero */

loc_00255358: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025536D; /* jne: not equal / not zero */

loc_00255368: ;
    PUSH32(esp, 0x0025536Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025536D: ;
    ecx = MEM32(esi + 0xF8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025538C; /* je: equal / zero */

loc_00255377: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025538C; /* jne: not equal / not zero */

loc_00255387: ;
    PUSH32(esp, 0x0025538Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025538C: ;
    ecx = MEM32(esi + 0xF4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002553AB; /* je: equal / zero */

loc_00255396: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002553AB; /* jne: not equal / not zero */

loc_002553A6: ;
    PUSH32(esp, 0x002553ABu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002553AB: ;
    ecx = MEM32(esi + 0xF0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002553CA; /* je: equal / zero */

loc_002553B5: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002553CA; /* jne: not equal / not zero */

loc_002553C5: ;
    PUSH32(esp, 0x002553CAu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002553CA: ;
    ecx = MEM32(esi + 0xEC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002553E9; /* je: equal / zero */

loc_002553D4: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002553E9; /* jne: not equal / not zero */

loc_002553E4: ;
    PUSH32(esp, 0x002553E9u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002553E9: ;
    ecx = MEM32(esi + 0xE8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00255408; /* je: equal / zero */

loc_002553F3: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00255408; /* jne: not equal / not zero */

loc_00255403: ;
    PUSH32(esp, 0x00255408u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00255408: ;
    ecx = MEM32(esi + 0x60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00255424; /* je: equal / zero */

loc_0025540F: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00255424; /* jne: not equal / not zero */

loc_0025541F: ;
    PUSH32(esp, 0x00255424u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00255424: ;
    ecx = MEM32(esi + 0x5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00255440; /* je: equal / zero */

loc_0025542B: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00255440; /* jne: not equal / not zero */

loc_0025543B: ;
    PUSH32(esp, 0x00255440u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00255440: ;
    ecx = MEM32(esi + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025545C; /* je: equal / zero */

loc_00255447: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025545C; /* jne: not equal / not zero */

loc_00255457: ;
    PUSH32(esp, 0x0025545Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025545C: ;
    ecx = MEM32(esi + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00255478; /* je: equal / zero */

loc_00255463: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00255478; /* jne: not equal / not zero */

loc_00255473: ;
    PUSH32(esp, 0x00255478u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00255478: ;
    ecx = MEM32(esi + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00255494; /* je: equal / zero */

loc_0025547F: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00255494; /* jne: not equal / not zero */

loc_0025548F: ;
    PUSH32(esp, 0x00255494u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00255494: ;
    ecx = MEM32(esi + 0x4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002554B0; /* je: equal / zero */

loc_0025549B: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002554B0; /* jne: not equal / not zero */

loc_002554AB: ;
    PUSH32(esp, 0x002554B0u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002554B0: ;
    ecx = MEM32(esi + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002554CC; /* je: equal / zero */

loc_002554B7: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002554CC; /* jne: not equal / not zero */

loc_002554C7: ;
    PUSH32(esp, 0x002554CCu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002554CC: ;
    ecx = MEM32(esi + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002554E8; /* je: equal / zero */

loc_002554D3: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002554E8; /* jne: not equal / not zero */

loc_002554E3: ;
    PUSH32(esp, 0x002554E8u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002554E8: ;
    ecx = MEM32(esi + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00255504; /* je: equal / zero */

loc_002554EF: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00255504; /* jne: not equal / not zero */

loc_002554FF: ;
    PUSH32(esp, 0x00255504u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00255504: ;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00255520; /* je: equal / zero */

loc_0025550B: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00255520; /* jne: not equal / not zero */

loc_0025551B: ;
    PUSH32(esp, 0x00255520u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00255520: ;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025553C; /* je: equal / zero */

loc_00255527: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025553C; /* jne: not equal / not zero */

loc_00255537: ;
    PUSH32(esp, 0x0025553Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025553C: ;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00255558; /* je: equal / zero */

loc_00255543: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00255558; /* jne: not equal / not zero */

loc_00255553: ;
    PUSH32(esp, 0x00255558u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00255558: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00255574; /* je: equal / zero */

loc_0025555F: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00255574; /* jne: not equal / not zero */

loc_0025556F: ;
    PUSH32(esp, 0x00255574u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00255574: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00255590; /* je: equal / zero */

loc_0025557B: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00255590; /* jne: not equal / not zero */

loc_0025558B: ;
    PUSH32(esp, 0x00255590u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00255590: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_002555AD; /* je: equal / zero */

loc_00255598: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002555AD; /* jne: not equal / not zero */

loc_002555A8: ;
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_002555AD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002555B0
 * Original: 0x002555B0 - 0x002555D2 (34 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002555B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002555B0: ;
    eax = MEM32(0x5BDD6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_002555D1; /* je: equal / zero */

loc_002555BB: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002555D1; /* jne: not equal / not zero */

loc_002555CC: ;
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_002555D1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002555E0
 * Original: 0x002555E0 - 0x002555E6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002555E0(void)
{

loc_002555E0: ;
    eax = MEM32(0x5BDAA0);
    esp += 4; return; /* ret */

}

/**
 * sub_002555F0
 * Original: 0x002555F0 - 0x002555F6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002555F0(void)
{

loc_002555F0: ;
    eax = MEM32(0x5BDAA4);
    esp += 4; return; /* ret */

}

/**
 * sub_00255600
 * Original: 0x00255600 - 0x0025567F (127 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00255600: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDAA4);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00255610u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00255610: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x46FED0);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00255620u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00255620: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00255628u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00255628: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    PUSH32(esp, 0x00255631u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00255631: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0025563Cu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025563C: ;
    ebx = eax;
    eax = MEM32(0x5BDABC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00255661; /* jne: not equal / not zero */

loc_00255647: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00255653u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00255653: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00255659u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00255659: ;
    esp = esp + 8;
    MEM32(0x5BDABC) = eax;

loc_00255661: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46FEC8);
    PUSH32(esp, 0x46FEC0);
    PUSH32(esp, 0x46FEB8);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x0025567Bu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0025567B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00255680
 * Original: 0x00255680 - 0x00255686 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255680(void)
{

loc_00255680: ;
    eax = MEM32(0x5BDAA8);
    esp += 4; return; /* ret */

}

/**
 * sub_00255690
 * Original: 0x00255690 - 0x002556E9 (89 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255690(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00255690: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x78);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002556AF; /* je: equal / zero */

loc_0025569A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002556AF; /* jne: not equal / not zero */

loc_002556AA: ;
    PUSH32(esp, 0x002556AFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002556AF: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002556CB; /* je: equal / zero */

loc_002556B6: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002556CB; /* jne: not equal / not zero */

loc_002556C6: ;
    PUSH32(esp, 0x002556CBu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002556CB: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_002556E8; /* je: equal / zero */

loc_002556D3: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002556E8; /* jne: not equal / not zero */

loc_002556E3: ;
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_002556E8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002556F0
 * Original: 0x002556F0 - 0x00255714 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002556F0(void)
{

loc_002556F0: ;
    esp = esp - 0x28;
    ecx = esp;
    PUSH32(esp, 0x002556FBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_002556FB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3FE4A8;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_00255720
 * Original: 0x00255720 - 0x00255729 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255720(void)
{

loc_00255720: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00255727u); RECOMP_ABI_CALL(0x0033BA80u, sub_0033BA80); /* call 0x0033BA80 */

loc_00255727: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00255730
 * Original: 0x00255730 - 0x00255736 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255730(void)
{

loc_00255730: ;
    eax = MEM32(0x5BDAC4);
    esp += 4; return; /* ret */

}

/**
 * sub_00255740
 * Original: 0x00255740 - 0x00255746 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255740(void)
{

loc_00255740: ;
    eax = MEM32(0x5BDACC);
    esp += 4; return; /* ret */

}

/**
 * sub_00255750
 * Original: 0x00255750 - 0x00255754 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255750(void)
{

loc_00255750: ;
    SET_LO8(eax, MEM8(ecx + 0x38));
    esp += 4; return; /* ret */

}

/**
 * sub_00255760
 * Original: 0x00255760 - 0x00255767 (7 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255760(void)
{

loc_00255760: ;
    eax = MEM32(ecx + 0x28);
    edx = MEM32(ecx + 0x2C);
    esp += 4; return; /* ret */

}

/**
 * sub_00255770
 * Original: 0x00255770 - 0x00255781 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255770(void)
{

loc_00255770: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00255790
 * Original: 0x00255790 - 0x002557CB (59 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255790(void)
{

loc_00255790: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    esp = esp - 0x40;
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x58);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x58);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x58);
    PUSH32(esp, edx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x002557B2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002557B2: ;
    ecx = MEM32(esp + 0x48);
    SET_LO8(ebx, LO8(eax));
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002557C2u); RECOMP_ABI_CALL(0x0023F330u, sub_0023F330); /* call 0x0023F330 */

loc_002557C2: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_002557D0
 * Original: 0x002557D0 - 0x00255812 (66 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002557D0(void)
{

loc_002557D0: ;
    esp = esp - 0x40;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x002557DDu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_002557DD: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x400808;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0025580Bu); RECOMP_ABI_CALL(0x00297A30u, sub_00297A30); /* call 0x00297A30 */

loc_0025580B: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_00255820
 * Original: 0x00255820 - 0x00255A5F (575 bytes, 187 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255820(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00255820: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDAD8);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00255832u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00255832: ;
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x46FF8C);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00255842u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00255842: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0025584Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025584A: ;
    ebp = eax;
    PUSH32(esp, 0x00255851u); RECOMP_ABI_CALL(0x00292980u, sub_00292980); /* call 0x00292980 */

loc_00255851: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 1;
    ebx = 0; /* xor self */
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00255868u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00255868: ;
    ebp = eax;
    PUSH32(esp, 0x0025586Fu); RECOMP_ABI_CALL(0x001F33C0u, sub_001F33C0); /* call 0x001F33C0 */

loc_0025586F: ;
    ecx = edi + 2;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00255884u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00255884: ;
    ebp = eax;
    PUSH32(esp, 0x0025588Bu); RECOMP_ABI_CALL(0x00292980u, sub_00292980); /* call 0x00292980 */

loc_0025588B: ;
    edx = edi + 3;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x002558A0u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002558A0: ;
    ebp = eax;
    PUSH32(esp, 0x002558A7u); RECOMP_ABI_CALL(0x00292980u, sub_00292980); /* call 0x00292980 */

loc_002558A7: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x002558BCu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002558BC: ;
    ebp = eax;
    eax = MEM32(0x5BDADC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002558E1; /* jne: not equal / not zero */

loc_002558C7: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002558D3u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002558D3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002558D9u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_002558D9: ;
    esp = esp + 8;
    MEM32(0x5BDADC) = eax;

loc_002558E1: ;
    edx = edi + 5;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x002558F6u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002558F6: ;
    ebp = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = ebp;
    MEM32(esp + 0x14) = 2;
    PUSH32(esp, 0x0025590Cu); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_0025590C: ;
    ecx = edi + 6;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x34) = 0x24ABF0;
    PUSH32(esp, 0x0025591Eu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025591E: ;
    ebp = eax;
    PUSH32(esp, 0x00255925u); RECOMP_ABI_CALL(0x00292980u, sub_00292980); /* call 0x00292980 */

loc_00255925: ;
    edx = edi + 7;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x0025593Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025593A: ;
    ebp = eax;
    PUSH32(esp, 0x00255941u); RECOMP_ABI_CALL(0x00292980u, sub_00292980); /* call 0x00292980 */

loc_00255941: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 8;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00255956u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00255956: ;
    ebp = eax;
    PUSH32(esp, 0x0025595Du); RECOMP_ABI_CALL(0x002929C0u, sub_002929C0); /* call 0x002929C0 */

loc_0025595D: ;
    ecx = edi + 9;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00255972u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00255972: ;
    ebp = eax;
    PUSH32(esp, 0x00255979u); RECOMP_ABI_CALL(0x002919B0u, sub_002919B0); /* call 0x002919B0 */

loc_00255979: ;
    edx = edi + 0xA;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x0025598Eu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025598E: ;
    ebp = eax;
    eax = MEM32(0x5BDAE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002559B2; /* jne: not equal / not zero */

loc_00255999: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002559A4u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002559A4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002559AAu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_002559AA: ;
    esp = esp + 8;
    MEM32(0x5BDAE8) = eax;

loc_002559B2: ;
    ecx = edi + 0xB;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x002559C7u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002559C7: ;
    edx = edi + 0xC;
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(eax + 0x26) = LO8(ebx);
    PUSH32(esp, 0x002559D5u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002559D5: ;
    ebp = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = ebp;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x002559E7u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_002559E7: ;
    ecx = edi + 0xD;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    MEM32(ebp + 0x34) = 0x24ABC0;
    PUSH32(esp, 0x002559FCu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002559FC: ;
    ebp = eax;
    PUSH32(esp, 0x00255A03u); RECOMP_ABI_CALL(0x00291AA0u, sub_00291AA0); /* call 0x00291AA0 */

loc_00255A03: ;
    edx = edi + 0xE;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00255A14u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00255A14: ;
    ebp = eax;
    eax = MEM32(0x5BDA9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00255A38; /* jne: not equal / not zero */

loc_00255A1F: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00255A2Au); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00255A2A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00255A30u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00255A30: ;
    esp = esp + 8;
    MEM32(0x5BDA9C) = eax;

loc_00255A38: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46FF50);
    PUSH32(esp, 0x46FF14);
    PUSH32(esp, 0x46FED8);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00255A59u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00255A59: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00255A60
 * Original: 0x00255A60 - 0x00255A66 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255A60(void)
{

loc_00255A60: ;
    eax = MEM32(0x5BDAE0);
    esp += 4; return; /* ret */

}

/**
 * sub_00255A70
 * Original: 0x00255A70 - 0x00255A76 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255A70(void)
{

loc_00255A70: ;
    eax = MEM32(0x5BDAE4);
    esp += 4; return; /* ret */

}

/**
 * sub_00255A80
 * Original: 0x00255A80 - 0x00255B64 (228 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255A80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00255A80: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1F8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00255AA2; /* je: equal / zero */

loc_00255A8D: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00255AA2; /* jne: not equal / not zero */

loc_00255A9D: ;
    PUSH32(esp, 0x00255AA2u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00255AA2: ;
    ecx = MEM32(esi + 0x1F4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00255AC1; /* je: equal / zero */

loc_00255AAC: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00255AC1; /* jne: not equal / not zero */

loc_00255ABC: ;
    PUSH32(esp, 0x00255AC1u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00255AC1: ;
    ecx = MEM32(esi + 0x1EC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00255AE0; /* je: equal / zero */

loc_00255ACB: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00255AE0; /* jne: not equal / not zero */

loc_00255ADB: ;
    PUSH32(esp, 0x00255AE0u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00255AE0: ;
    ecx = MEM32(esi + 0x1E8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00255AFF; /* je: equal / zero */

loc_00255AEA: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00255AFF; /* jne: not equal / not zero */

loc_00255AFA: ;
    PUSH32(esp, 0x00255AFFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00255AFF: ;
    ecx = MEM32(esi + 0x1E0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00255B1E; /* je: equal / zero */

loc_00255B09: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00255B1E; /* jne: not equal / not zero */

loc_00255B19: ;
    PUSH32(esp, 0x00255B1Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00255B1E: ;
    ecx = MEM32(esi + 0x1DC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00255B3D; /* je: equal / zero */

loc_00255B28: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00255B3D; /* jne: not equal / not zero */

loc_00255B38: ;
    PUSH32(esp, 0x00255B3Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00255B3D: ;
    ecx = MEM32(esi + 0x1D8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00255B5C; /* je: equal / zero */

loc_00255B47: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00255B5C; /* jne: not equal / not zero */

loc_00255B57: ;
    PUSH32(esp, 0x00255B5Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00255B5C: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002552B0(); return; /* tail jmp 0x002552B0 */

}

/**
 * sub_00255B70
 * Original: 0x00255B70 - 0x00255B92 (34 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255B70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00255B70: ;
    eax = MEM32(0x5BDCA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00255B91; /* je: equal / zero */

loc_00255B7B: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00255B91; /* jne: not equal / not zero */

loc_00255B8C: ;
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_00255B91: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00255BA0
 * Original: 0x00255BA0 - 0x00255BA6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255BA0(void)
{

loc_00255BA0: ;
    eax = MEM32(0x5BDAEC);
    esp += 4; return; /* ret */

}

/**
 * sub_00255BB0
 * Original: 0x00255BB0 - 0x00255BE2 (50 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255BB0(void)
{

loc_00255BB0: ;
    esp = esp - 0x1D8;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x00255BC0u); RECOMP_ABI_CALL(0x002550D0u, sub_002550D0); /* call 0x002550D0 */

loc_00255BC0: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x00255BD8u); RECOMP_ABI_CALL(0x002552B0u, sub_002552B0); /* call 0x002552B0 */

loc_00255BD8: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x1D8;
    esp += 4; return; /* ret */

}

/**
 * sub_00255BF0
 * Original: 0x00255BF0 - 0x00255C12 (34 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255BF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00255BF0: ;
    eax = MEM32(0x5BDC9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00255C11; /* je: equal / zero */

loc_00255BFB: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00255C11; /* jne: not equal / not zero */

loc_00255C0C: ;
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_00255C11: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00255C20
 * Original: 0x00255C20 - 0x00255C26 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255C20(void)
{

loc_00255C20: ;
    eax = MEM32(0x5BDAF8);
    esp += 4; return; /* ret */

}

/**
 * sub_00255C30
 * Original: 0x00255C30 - 0x00255C89 (89 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255C30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00255C30: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00255C4F; /* je: equal / zero */

loc_00255C3A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00255C4F; /* jne: not equal / not zero */

loc_00255C4A: ;
    PUSH32(esp, 0x00255C4Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00255C4F: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00255C6B; /* je: equal / zero */

loc_00255C56: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00255C6B; /* jne: not equal / not zero */

loc_00255C66: ;
    PUSH32(esp, 0x00255C6Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00255C6B: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00255C88; /* je: equal / zero */

loc_00255C73: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00255C88; /* jne: not equal / not zero */

loc_00255C83: ;
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_00255C88: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00255C90
 * Original: 0x00255C90 - 0x00255D6B (219 bytes, 65 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255C90(void)
{

loc_00255C90: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDAF8);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00255CA3u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00255CA3: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x470004);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00255CB3u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00255CB3: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00255CBBu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00255CBB: ;
    ebx = eax;
    PUSH32(esp, 0x00255CC2u); RECOMP_ABI_CALL(0x00290AF0u, sub_00290AF0); /* call 0x00290AF0 */

loc_00255CC2: ;
    MEM32(ebx + 0x38) = eax;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00255CD0u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00255CD0: ;
    ebx = eax;
    PUSH32(esp, 0x00255CD7u); RECOMP_ABI_CALL(0x00290CD0u, sub_00290CD0); /* call 0x00290CD0 */

loc_00255CD7: ;
    ecx = edi + 2;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x00255CE5u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00255CE5: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0x3F800000;
    PUSH32(esp, 0x00255D09u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00255D09: ;
    eax = edi + 3;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00255D14u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00255D14: ;
    ebx = eax;
    PUSH32(esp, 0x00255D1Bu); RECOMP_ABI_CALL(0x00291D00u, sub_00291D00); /* call 0x00291D00 */

loc_00255D1B: ;
    ecx = edi + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x00255D29u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00255D29: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0x3F800000;
    PUSH32(esp, 0x00255D4Du); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00255D4D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46FFF0);
    PUSH32(esp, 0x46FFDC);
    PUSH32(esp, 0x46FFC8);
    ecx = esi;
    PUSH32(esp, 0x00255D64u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00255D64: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00255D70
 * Original: 0x00255D70 - 0x00255F36 (454 bytes, 144 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255D70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00255D70: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDAFC);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00255D84u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00255D84: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x4700C0);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00255D94u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00255D94: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00255D9Cu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00255D9C: ;
    ebx = eax;
    PUSH32(esp, 0x00255DA3u); RECOMP_ABI_CALL(0x00290CA0u, sub_00290CA0); /* call 0x00290CA0 */

loc_00255DA3: ;
    MEM32(ebx + 0x38) = eax;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00255DB1u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00255DB1: ;
    ebx = eax;
    PUSH32(esp, 0x00255DB8u); RECOMP_ABI_CALL(0x00290CA0u, sub_00290CA0); /* call 0x00290CA0 */

loc_00255DB8: ;
    ecx = edi + 2;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x00255DC6u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00255DC6: ;
    ebp = eax;
    PUSH32(esp, 0x00255DCDu); RECOMP_ABI_CALL(0x002919B0u, sub_002919B0); /* call 0x002919B0 */

loc_00255DCD: ;
    edx = edi + 3;
    SET_LO8(ebx, 1);
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    MEM8(ebp + 0x26) = 0;
    PUSH32(esp, 0x00255DE4u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00255DE4: ;
    ebp = eax;
    eax = MEM32(0x5BDA8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00255E08; /* jne: not equal / not zero */

loc_00255DEF: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00255DFAu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00255DFA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00255E00u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00255E00: ;
    esp = esp + 8;
    MEM32(0x5BDA8C) = eax;

loc_00255E08: ;
    ecx = edi + 6;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    MEM8(ebp + 0x26) = 0;
    PUSH32(esp, 0x00255E1Du); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00255E1D: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = eax;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0x3F800000;
    PUSH32(esp, 0x00255E49u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00255E49: ;
    eax = edi + 8;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00255E54u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00255E54: ;
    ebp = eax;
    eax = MEM32(0x5BD898);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00255E79; /* jne: not equal / not zero */

loc_00255E5F: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00255E6Bu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00255E6B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00255E71u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00255E71: ;
    esp = esp + 8;
    MEM32(0x5BD898) = eax;

loc_00255E79: ;
    edx = edi + 9;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    PUSH32(esp, 0x00255E87u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00255E87: ;
    ebp = eax;
    PUSH32(esp, 0x00255E8Eu); RECOMP_ABI_CALL(0x00291D00u, sub_00291D00); /* call 0x00291D00 */

loc_00255E8E: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 0xA;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00255E9Cu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00255E9C: ;
    ebp = eax;
    eax = MEM32(0x5BD97C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00255EC1; /* jne: not equal / not zero */

loc_00255EA7: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00255EB3u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00255EB3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00255EB9u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00255EB9: ;
    esp = esp + 8;
    MEM32(0x5BD97C) = eax;

loc_00255EC1: ;
    edx = edi + 0xB;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00255ED2u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00255ED2: ;
    ebp = eax;
    PUSH32(esp, 0x00255ED9u); RECOMP_ABI_CALL(0x00222DC0u, sub_00222DC0); /* call 0x00222DC0 */

loc_00255ED9: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00255EEAu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00255EEA: ;
    ebp = eax;
    PUSH32(esp, 0x00255EF1u); RECOMP_ABI_CALL(0x00290C60u, sub_00290C60); /* call 0x00290C60 */

loc_00255EF1: ;
    ecx = edi + 0xD;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    MEM8(ebp + 0x26) = 0;
    PUSH32(esp, 0x00255F06u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00255F06: ;
    ebp = eax;
    PUSH32(esp, 0x00255F0Du); RECOMP_ABI_CALL(0x00290C60u, sub_00290C60); /* call 0x00290C60 */

loc_00255F0D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x470088);
    PUSH32(esp, 0x470050);
    PUSH32(esp, 0x470018);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    MEM8(ebp + 0x26) = 0;
    PUSH32(esp, 0x00255F2Eu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00255F2E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00255F40
 * Original: 0x00255F40 - 0x00255FB9 (121 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255F40(void)
{

loc_00255F40: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDB04);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00255F51u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00255F51: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x47014C);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00255F61u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00255F61: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00255F69u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00255F69: ;
    ebx = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00255F7Fu); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00255F7F: ;
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x34) = 0x24AE30;
    PUSH32(esp, 0x00255F91u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00255F91: ;
    PUSH32(esp, 0x42340000);
    ecx = eax;
    PUSH32(esp, 0x00255F9Du); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00255F9D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x470130);
    PUSH32(esp, 0x470114);
    PUSH32(esp, 0x4700F8);
    ecx = esi;
    PUSH32(esp, 0x00255FB4u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00255FB4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00255FC0
 * Original: 0x00255FC0 - 0x0025629F (735 bytes, 238 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255FC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00255FC0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDB0C);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00255FD4u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00255FD4: ;
    PUSH32(esp, 0x19);
    PUSH32(esp, 0x4702A0);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00255FE4u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00255FE4: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00255FECu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00255FEC: ;
    ebx = eax;
    PUSH32(esp, 0x00255FF3u); RECOMP_ABI_CALL(0x00290CA0u, sub_00290CA0); /* call 0x00290CA0 */

loc_00255FF3: ;
    MEM32(ebx + 0x38) = eax;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00256001u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00256001: ;
    ebx = eax;
    PUSH32(esp, 0x00256008u); RECOMP_ABI_CALL(0x00290CA0u, sub_00290CA0); /* call 0x00290CA0 */

loc_00256008: ;
    ecx = edi + 2;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x00256016u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00256016: ;
    ebp = eax;
    PUSH32(esp, 0x0025601Du); RECOMP_ABI_CALL(0x002919B0u, sub_002919B0); /* call 0x002919B0 */

loc_0025601D: ;
    edx = edi + 3;
    SET_LO8(ebx, 1);
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    MEM8(ebp + 0x26) = 0;
    PUSH32(esp, 0x00256034u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00256034: ;
    ebp = eax;
    eax = MEM32(0x5BDA8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00256058; /* jne: not equal / not zero */

loc_0025603F: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025604Au); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0025604A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00256050u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00256050: ;
    esp = esp + 8;
    MEM32(0x5BDA8C) = eax;

loc_00256058: ;
    ecx = edi + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    MEM8(ebp + 0x26) = 0;
    PUSH32(esp, 0x0025606Du); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025606D: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    PUSH32(esp, 0x00256076u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00256076: ;
    edx = edi + 5;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00256081u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00256081: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    PUSH32(esp, 0x0025608Au); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0025608A: ;
    eax = edi + 6;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00256095u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00256095: ;
    ebp = eax;
    PUSH32(esp, 0x0025609Cu); RECOMP_ABI_CALL(0x0023B790u, sub_0023B790); /* call 0x0023B790 */

loc_0025609C: ;
    ecx = edi + 7;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x002560ADu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002560AD: ;
    ebp = eax;
    PUSH32(esp, 0x002560B4u); RECOMP_ABI_CALL(0x00222F00u, sub_00222F00); /* call 0x00222F00 */

loc_002560B4: ;
    edx = edi + 8;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x002560C5u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002560C5: ;
    PUSH32(esp, 0xFF);
    ecx = eax;
    PUSH32(esp, 0x002560D1u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_002560D1: ;
    eax = edi + 9;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002560DCu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002560DC: ;
    PUSH32(esp, 0x3F800000);
    ecx = eax;
    PUSH32(esp, 0x002560E8u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_002560E8: ;
    ecx = edi + 0xA;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x002560F3u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002560F3: ;
    PUSH32(esp, 0x10);
    ecx = eax;
    PUSH32(esp, 0x002560FCu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_002560FC: ;
    edx = edi + 0xB;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00256107u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00256107: ;
    PUSH32(esp, 0x3E4CCCCD);
    ecx = eax;
    PUSH32(esp, 0x00256113u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00256113: ;
    eax = edi + 0xD;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0025611Eu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025611E: ;
    ebp = eax;
    eax = MEM32(0x5BD898);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00256143; /* jne: not equal / not zero */

loc_00256129: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00256135u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00256135: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025613Bu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0025613B: ;
    esp = esp + 8;
    MEM32(0x5BD898) = eax;

loc_00256143: ;
    edx = edi + 0xE;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    PUSH32(esp, 0x00256151u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00256151: ;
    ebp = eax;
    PUSH32(esp, 0x00256158u); RECOMP_ABI_CALL(0x00291CC0u, sub_00291CC0); /* call 0x00291CC0 */

loc_00256158: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 0xF;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00256169u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00256169: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x14) = 0x3F800000;
    MEM32(esp + 0x18) = 0x3F800000;
    MEM32(esp + 0x1C) = 0x3F800000;
    PUSH32(esp, 0x0025618Du); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_0025618D: ;
    edx = edi + 0x10;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00256198u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00256198: ;
    ebp = eax;
    PUSH32(esp, 0x0025619Fu); RECOMP_ABI_CALL(0x001AB0E0u, sub_001AB0E0); /* call 0x001AB0E0 */

loc_0025619F: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 0x11;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002561ADu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002561AD: ;
    ebp = eax;
    PUSH32(esp, 0x002561B4u); RECOMP_ABI_CALL(0x00290CA0u, sub_00290CA0); /* call 0x00290CA0 */

loc_002561B4: ;
    ecx = edi + 0x12;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x26) = 0;
    PUSH32(esp, 0x002561C6u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002561C6: ;
    ebp = eax;
    PUSH32(esp, 0x002561CDu); RECOMP_ABI_CALL(0x00290CA0u, sub_00290CA0); /* call 0x00290CA0 */

loc_002561CD: ;
    edx = edi + 0x13;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x26) = 0;
    PUSH32(esp, 0x002561DFu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002561DF: ;
    ebp = eax;
    PUSH32(esp, 0x002561E6u); RECOMP_ABI_CALL(0x00290CA0u, sub_00290CA0); /* call 0x00290CA0 */

loc_002561E6: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x26) = 0;
    PUSH32(esp, 0x002561F8u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002561F8: ;
    ebp = eax;
    PUSH32(esp, 0x002561FFu); RECOMP_ABI_CALL(0x00290C60u, sub_00290C60); /* call 0x00290C60 */

loc_002561FF: ;
    ecx = edi + 0x15;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00256210u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00256210: ;
    ebp = eax;
    PUSH32(esp, 0x00256217u); RECOMP_ABI_CALL(0x00290C60u, sub_00290C60); /* call 0x00290C60 */

loc_00256217: ;
    edx = edi + 0x16;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00256228u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00256228: ;
    ebp = eax;
    eax = MEM32(0x5BDB18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025624C; /* jne: not equal / not zero */

loc_00256233: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025623Eu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0025623E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00256244u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00256244: ;
    esp = esp + 8;
    MEM32(0x5BDB18) = eax;

loc_0025624C: ;
    ecx = edi + 0x17;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    MEM8(ebp + 0x26) = 0;
    PUSH32(esp, 0x00256261u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00256261: ;
    ebx = eax;
    PUSH32(esp, 0x00256268u); RECOMP_ABI_CALL(0x00290CA0u, sub_00290CA0); /* call 0x00290CA0 */

loc_00256268: ;
    edx = edi + 0x18;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x00256276u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00256276: ;
    ebx = eax;
    PUSH32(esp, 0x0025627Du); RECOMP_ABI_CALL(0x00290CA0u, sub_00290CA0); /* call 0x00290CA0 */

loc_0025627D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x470238);
    PUSH32(esp, 0x4701D0);
    PUSH32(esp, 0x470168);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x00256297u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00256297: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_002562A0
 * Original: 0x002562A0 - 0x002562A6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002562A0(void)
{

loc_002562A0: ;
    eax = MEM32(0x5BDB10);
    esp += 4; return; /* ret */

}

/**
 * sub_002562B0
 * Original: 0x002562B0 - 0x00256325 (117 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002562B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002562B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002562CF; /* je: equal / zero */

loc_002562BA: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002562CF; /* jne: not equal / not zero */

loc_002562CA: ;
    PUSH32(esp, 0x002562CFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002562CF: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002562EB; /* je: equal / zero */

loc_002562D6: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002562EB; /* jne: not equal / not zero */

loc_002562E6: ;
    PUSH32(esp, 0x002562EBu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002562EB: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00256307; /* je: equal / zero */

loc_002562F2: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00256307; /* jne: not equal / not zero */

loc_00256302: ;
    PUSH32(esp, 0x00256307u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00256307: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00256324; /* je: equal / zero */

loc_0025630F: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00256324; /* jne: not equal / not zero */

loc_0025631F: ;
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_00256324: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00256330
 * Original: 0x00256330 - 0x00256336 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256330(void)
{

loc_00256330: ;
    eax = MEM32(0x5BDB20);
    esp += 4; return; /* ret */

}

/**
 * sub_00256340
 * Original: 0x00256340 - 0x00256419 (217 bytes, 62 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256340(void)
{

loc_00256340: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDB20);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00256353u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00256353: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x470334);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00256363u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00256363: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0025636Bu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025636B: ;
    ebx = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x10) = 3;
    PUSH32(esp, 0x00256381u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00256381: ;
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x34) = 0x24AFF0;
    PUSH32(esp, 0x00256393u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00256393: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = eax;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0x3F800000;
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x002563B7u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_002563B7: ;
    eax = edi + 2;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002563C2u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002563C2: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x002563E6u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_002563E6: ;
    edx = edi + 3;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x002563F1u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002563F1: ;
    ebx = eax;
    PUSH32(esp, 0x002563F8u); RECOMP_ABI_CALL(0x002919F0u, sub_002919F0); /* call 0x002919F0 */

loc_002563F8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x470324);
    PUSH32(esp, 0x470314);
    PUSH32(esp, 0x470304);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x00256412u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00256412: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00256420
 * Original: 0x00256420 - 0x002564D8 (184 bytes, 53 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256420(void)
{

loc_00256420: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDB28);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00256433u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00256433: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x470374);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00256443u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00256443: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0025644Eu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025644E: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0x3F800000;
    PUSH32(esp, 0x00256472u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00256472: ;
    edx = edi + 2;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0025647Du); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0025647D: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x002564A1u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_002564A1: ;
    edx = edi + 3;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x002564ACu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002564AC: ;
    ebx = eax;
    PUSH32(esp, 0x002564B3u); RECOMP_ABI_CALL(0x002919F0u, sub_002919F0); /* call 0x002919F0 */

loc_002564B3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x470364);
    PUSH32(esp, 0x470354);
    PUSH32(esp, 0x470344);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x26) = 0;
    PUSH32(esp, 0x002564D1u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002564D1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_002564E0
 * Original: 0x002564E0 - 0x00256619 (313 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002564E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002564E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002564FF; /* je: equal / zero */

loc_002564EA: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002564FF; /* jne: not equal / not zero */

loc_002564FA: ;
    PUSH32(esp, 0x002564FFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002564FF: ;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025651B; /* je: equal / zero */

loc_00256506: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025651B; /* jne: not equal / not zero */

loc_00256516: ;
    PUSH32(esp, 0x0025651Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025651B: ;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00256537; /* je: equal / zero */

loc_00256522: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00256537; /* jne: not equal / not zero */

loc_00256532: ;
    PUSH32(esp, 0x00256537u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00256537: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00256553; /* je: equal / zero */

loc_0025653E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00256553; /* jne: not equal / not zero */

loc_0025654E: ;
    PUSH32(esp, 0x00256553u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00256553: ;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025656F; /* je: equal / zero */

loc_0025655A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025656F; /* jne: not equal / not zero */

loc_0025656A: ;
    PUSH32(esp, 0x0025656Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025656F: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025658B; /* je: equal / zero */

loc_00256576: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0025658B; /* jne: not equal / not zero */

loc_00256586: ;
    PUSH32(esp, 0x0025658Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0025658B: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002565A7; /* je: equal / zero */

loc_00256592: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002565A7; /* jne: not equal / not zero */

loc_002565A2: ;
    PUSH32(esp, 0x002565A7u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002565A7: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002565C3; /* je: equal / zero */

loc_002565AE: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002565C3; /* jne: not equal / not zero */

loc_002565BE: ;
    PUSH32(esp, 0x002565C3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002565C3: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002565DF; /* je: equal / zero */

loc_002565CA: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002565DF; /* jne: not equal / not zero */

loc_002565DA: ;
    PUSH32(esp, 0x002565DFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002565DF: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002565FB; /* je: equal / zero */

loc_002565E6: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002565FB; /* jne: not equal / not zero */

loc_002565F6: ;
    PUSH32(esp, 0x002565FBu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002565FB: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00256618; /* je: equal / zero */

loc_00256603: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00256618; /* jne: not equal / not zero */

loc_00256613: ;
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_00256618: ;
    esp += 4; return; /* ret */

}
