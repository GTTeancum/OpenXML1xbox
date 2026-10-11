/**
 * X-Men Legends - Recompiled code chunk 47
 * Functions: 250 (0x001F1F70 - 0x001F7DA0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001F1F70
 * Original: 0x001F1F70 - 0x001F1F97 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1F70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F1F70: ;
    eax = MEM32(0x5BC2F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F1F84; /* je: equal / zero */

loc_001F1F79: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F1F96; /* jne: not equal / not zero */

loc_001F1F84: ;
    PUSH32(esp, 0x22E040);
    PUSH32(esp, 0x001F1F8Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F1F8E: ;
    eax = MEM32(0x5BC2F8);
    esp = esp + 4;

loc_001F1F96: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F1FA0
 * Original: 0x001F1FA0 - 0x001F1FC7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F1FA0: ;
    eax = MEM32(0x5BC2F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F1FB4; /* je: equal / zero */

loc_001F1FA9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F1FC6; /* jne: not equal / not zero */

loc_001F1FB4: ;
    PUSH32(esp, 0x2307D0);
    PUSH32(esp, 0x001F1FBEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F1FBE: ;
    eax = MEM32(0x5BC2F4);
    esp = esp + 4;

loc_001F1FC6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F1FD0
 * Original: 0x001F1FD0 - 0x001F1FF7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F1FD0: ;
    eax = MEM32(0x5BC144);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F1FE4; /* je: equal / zero */

loc_001F1FD9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F1FF6; /* jne: not equal / not zero */

loc_001F1FE4: ;
    PUSH32(esp, 0x227FE0);
    PUSH32(esp, 0x001F1FEEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F1FEE: ;
    eax = MEM32(0x5BC144);
    esp = esp + 4;

loc_001F1FF6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2000
 * Original: 0x001F2000 - 0x001F2027 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2000: ;
    eax = MEM32(0x5BC154);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2014; /* je: equal / zero */

loc_001F2009: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2026; /* jne: not equal / not zero */

loc_001F2014: ;
    PUSH32(esp, 0x228060);
    PUSH32(esp, 0x001F201Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F201E: ;
    eax = MEM32(0x5BC154);
    esp = esp + 4;

loc_001F2026: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2030
 * Original: 0x001F2030 - 0x001F2057 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2030: ;
    eax = MEM32(0x5BC164);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2044; /* je: equal / zero */

loc_001F2039: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2056; /* jne: not equal / not zero */

loc_001F2044: ;
    PUSH32(esp, 0x2280E0);
    PUSH32(esp, 0x001F204Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F204E: ;
    eax = MEM32(0x5BC164);
    esp = esp + 4;

loc_001F2056: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2060
 * Original: 0x001F2060 - 0x001F2087 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2060: ;
    eax = MEM32(0x5BC174);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2074; /* je: equal / zero */

loc_001F2069: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2086; /* jne: not equal / not zero */

loc_001F2074: ;
    PUSH32(esp, 0x228160);
    PUSH32(esp, 0x001F207Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F207E: ;
    eax = MEM32(0x5BC174);
    esp = esp + 4;

loc_001F2086: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2090
 * Original: 0x001F2090 - 0x001F20B7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2090: ;
    eax = MEM32(0x5BC184);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F20A4; /* je: equal / zero */

loc_001F2099: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F20B6; /* jne: not equal / not zero */

loc_001F20A4: ;
    PUSH32(esp, 0x2281E0);
    PUSH32(esp, 0x001F20AEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F20AE: ;
    eax = MEM32(0x5BC184);
    esp = esp + 4;

loc_001F20B6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F20C0
 * Original: 0x001F20C0 - 0x001F20E7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F20C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F20C0: ;
    eax = MEM32(0x5BC18C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F20D4; /* je: equal / zero */

loc_001F20C9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F20E6; /* jne: not equal / not zero */

loc_001F20D4: ;
    PUSH32(esp, 0x2333C0);
    PUSH32(esp, 0x001F20DEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F20DE: ;
    eax = MEM32(0x5BC18C);
    esp = esp + 4;

loc_001F20E6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F20F0
 * Original: 0x001F20F0 - 0x001F2117 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F20F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F20F0: ;
    eax = MEM32(0x5BC190);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2104; /* je: equal / zero */

loc_001F20F9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2116; /* jne: not equal / not zero */

loc_001F2104: ;
    PUSH32(esp, 0x227F50);
    PUSH32(esp, 0x001F210Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F210E: ;
    eax = MEM32(0x5BC190);
    esp = esp + 4;

loc_001F2116: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2120
 * Original: 0x001F2120 - 0x001F2147 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2120: ;
    eax = MEM32(0x5BC268);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2134; /* je: equal / zero */

loc_001F2129: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2146; /* jne: not equal / not zero */

loc_001F2134: ;
    PUSH32(esp, 0x2285E0);
    PUSH32(esp, 0x001F213Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F213E: ;
    eax = MEM32(0x5BC268);
    esp = esp + 4;

loc_001F2146: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2150
 * Original: 0x001F2150 - 0x001F2177 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2150: ;
    eax = MEM32(0x5BC1B0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2164; /* je: equal / zero */

loc_001F2159: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2176; /* jne: not equal / not zero */

loc_001F2164: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x001F216Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F216E: ;
    eax = MEM32(0x5BC1B0);
    esp = esp + 4;

loc_001F2176: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2180
 * Original: 0x001F2180 - 0x001F21A7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2180: ;
    eax = MEM32(0x5BC1AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2194; /* je: equal / zero */

loc_001F2189: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F21A6; /* jne: not equal / not zero */

loc_001F2194: ;
    PUSH32(esp, 0x227DC0);
    PUSH32(esp, 0x001F219Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F219E: ;
    eax = MEM32(0x5BC1AC);
    esp = esp + 4;

loc_001F21A6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F21B0
 * Original: 0x001F21B0 - 0x001F21D7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F21B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F21B0: ;
    eax = MEM32(0x5BC1A8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F21C4; /* je: equal / zero */

loc_001F21B9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F21D6; /* jne: not equal / not zero */

loc_001F21C4: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x001F21CEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F21CE: ;
    eax = MEM32(0x5BC1A8);
    esp = esp + 4;

loc_001F21D6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F21E0
 * Original: 0x001F21E0 - 0x001F2207 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F21E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F21E0: ;
    eax = MEM32(0x5BC1B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F21F4; /* je: equal / zero */

loc_001F21E9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2206; /* jne: not equal / not zero */

loc_001F21F4: ;
    PUSH32(esp, 0x22F420);
    PUSH32(esp, 0x001F21FEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F21FE: ;
    eax = MEM32(0x5BC1B4);
    esp = esp + 4;

loc_001F2206: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2210
 * Original: 0x001F2210 - 0x001F2237 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2210: ;
    eax = MEM32(0x5BC1B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2224; /* je: equal / zero */

loc_001F2219: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2236; /* jne: not equal / not zero */

loc_001F2224: ;
    PUSH32(esp, 0x223A00);
    PUSH32(esp, 0x001F222Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F222E: ;
    eax = MEM32(0x5BC1B8);
    esp = esp + 4;

loc_001F2236: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2240
 * Original: 0x001F2240 - 0x001F2267 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2240: ;
    eax = MEM32(0x5BC1C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2254; /* je: equal / zero */

loc_001F2249: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2266; /* jne: not equal / not zero */

loc_001F2254: ;
    PUSH32(esp, 0x22B850);
    PUSH32(esp, 0x001F225Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F225E: ;
    eax = MEM32(0x5BC1C0);
    esp = esp + 4;

loc_001F2266: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2270
 * Original: 0x001F2270 - 0x001F2297 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2270: ;
    eax = MEM32(0x5BC1C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2284; /* je: equal / zero */

loc_001F2279: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2296; /* jne: not equal / not zero */

loc_001F2284: ;
    PUSH32(esp, 0x228260);
    PUSH32(esp, 0x001F228Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F228E: ;
    eax = MEM32(0x5BC1C8);
    esp = esp + 4;

loc_001F2296: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F22A0
 * Original: 0x001F22A0 - 0x001F22C7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F22A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F22A0: ;
    eax = MEM32(0x5BC1D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F22B4; /* je: equal / zero */

loc_001F22A9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F22C6; /* jne: not equal / not zero */

loc_001F22B4: ;
    PUSH32(esp, 0x2282E0);
    PUSH32(esp, 0x001F22BEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F22BE: ;
    eax = MEM32(0x5BC1D0);
    esp = esp + 4;

loc_001F22C6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F22D0
 * Original: 0x001F22D0 - 0x001F22F7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F22D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F22D0: ;
    eax = MEM32(0x5BC1CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F22E4; /* je: equal / zero */

loc_001F22D9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F22F6; /* jne: not equal / not zero */

loc_001F22E4: ;
    PUSH32(esp, 0x22A3C0);
    PUSH32(esp, 0x001F22EEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F22EE: ;
    eax = MEM32(0x5BC1CC);
    esp = esp + 4;

loc_001F22F6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2300
 * Original: 0x001F2300 - 0x001F2327 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2300: ;
    eax = MEM32(0x5BC1DC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2314; /* je: equal / zero */

loc_001F2309: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2326; /* jne: not equal / not zero */

loc_001F2314: ;
    PUSH32(esp, 0x228360);
    PUSH32(esp, 0x001F231Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F231E: ;
    eax = MEM32(0x5BC1DC);
    esp = esp + 4;

loc_001F2326: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2330
 * Original: 0x001F2330 - 0x001F2357 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2330: ;
    eax = MEM32(0x5BC1E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2344; /* je: equal / zero */

loc_001F2339: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2356; /* jne: not equal / not zero */

loc_001F2344: ;
    PUSH32(esp, 0x2315D0);
    PUSH32(esp, 0x001F234Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F234E: ;
    eax = MEM32(0x5BC1E4);
    esp = esp + 4;

loc_001F2356: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2360
 * Original: 0x001F2360 - 0x001F2387 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2360: ;
    eax = MEM32(0x5BC1F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2374; /* je: equal / zero */

loc_001F2369: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2386; /* jne: not equal / not zero */

loc_001F2374: ;
    PUSH32(esp, 0x2283E0);
    PUSH32(esp, 0x001F237Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F237E: ;
    eax = MEM32(0x5BC1F0);
    esp = esp + 4;

loc_001F2386: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2390
 * Original: 0x001F2390 - 0x001F23B7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2390: ;
    eax = MEM32(0x5BC1F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F23A4; /* je: equal / zero */

loc_001F2399: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F23B6; /* jne: not equal / not zero */

loc_001F23A4: ;
    PUSH32(esp, 0x226660);
    PUSH32(esp, 0x001F23AEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F23AE: ;
    eax = MEM32(0x5BC1F8);
    esp = esp + 4;

loc_001F23B6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F23C0
 * Original: 0x001F23C0 - 0x001F23E7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F23C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F23C0: ;
    eax = MEM32(0x5BC364);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F23D4; /* je: equal / zero */

loc_001F23C9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F23E6; /* jne: not equal / not zero */

loc_001F23D4: ;
    PUSH32(esp, 0x230880);
    PUSH32(esp, 0x001F23DEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F23DE: ;
    eax = MEM32(0x5BC364);
    esp = esp + 4;

loc_001F23E6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F23F0
 * Original: 0x001F23F0 - 0x001F2417 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F23F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F23F0: ;
    eax = MEM32(0x5BC200);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2404; /* je: equal / zero */

loc_001F23F9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2416; /* jne: not equal / not zero */

loc_001F2404: ;
    PUSH32(esp, 0x231650);
    PUSH32(esp, 0x001F240Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F240E: ;
    eax = MEM32(0x5BC200);
    esp = esp + 4;

loc_001F2416: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2420
 * Original: 0x001F2420 - 0x001F2447 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2420: ;
    eax = MEM32(0x5BC3B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2434; /* je: equal / zero */

loc_001F2429: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2446; /* jne: not equal / not zero */

loc_001F2434: ;
    PUSH32(esp, 0x228D60);
    PUSH32(esp, 0x001F243Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F243E: ;
    eax = MEM32(0x5BC3B4);
    esp = esp + 4;

loc_001F2446: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2450
 * Original: 0x001F2450 - 0x001F2477 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2450: ;
    eax = MEM32(0x5BC3A8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2464; /* je: equal / zero */

loc_001F2459: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2476; /* jne: not equal / not zero */

loc_001F2464: ;
    PUSH32(esp, 0x2370B0);
    PUSH32(esp, 0x001F246Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F246E: ;
    eax = MEM32(0x5BC3A8);
    esp = esp + 4;

loc_001F2476: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2480
 * Original: 0x001F2480 - 0x001F24A7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2480: ;
    eax = MEM32(0x5BC3A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2494; /* je: equal / zero */

loc_001F2489: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F24A6; /* jne: not equal / not zero */

loc_001F2494: ;
    PUSH32(esp, 0x228CE0);
    PUSH32(esp, 0x001F249Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F249E: ;
    eax = MEM32(0x5BC3A4);
    esp = esp + 4;

loc_001F24A6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F24B0
 * Original: 0x001F24B0 - 0x001F24D7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F24B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F24B0: ;
    eax = MEM32(0x5BC210);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F24C4; /* je: equal / zero */

loc_001F24B9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F24D6; /* jne: not equal / not zero */

loc_001F24C4: ;
    PUSH32(esp, 0x2299F0);
    PUSH32(esp, 0x001F24CEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F24CE: ;
    eax = MEM32(0x5BC210);
    esp = esp + 4;

loc_001F24D6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F24E0
 * Original: 0x001F24E0 - 0x001F2507 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F24E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F24E0: ;
    eax = MEM32(0x5BC20C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F24F4; /* je: equal / zero */

loc_001F24E9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2506; /* jne: not equal / not zero */

loc_001F24F4: ;
    PUSH32(esp, 0x22B8E0);
    PUSH32(esp, 0x001F24FEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F24FE: ;
    eax = MEM32(0x5BC20C);
    esp = esp + 4;

loc_001F2506: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2510
 * Original: 0x001F2510 - 0x001F2537 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2510: ;
    eax = MEM32(0x5BC208);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2524; /* je: equal / zero */

loc_001F2519: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2536; /* jne: not equal / not zero */

loc_001F2524: ;
    PUSH32(esp, 0x2316D0);
    PUSH32(esp, 0x001F252Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F252E: ;
    eax = MEM32(0x5BC208);
    esp = esp + 4;

loc_001F2536: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2540
 * Original: 0x001F2540 - 0x001F2567 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2540: ;
    eax = MEM32(0x5BC21C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2554; /* je: equal / zero */

loc_001F2549: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2566; /* jne: not equal / not zero */

loc_001F2554: ;
    PUSH32(esp, 0x21EFB0);
    PUSH32(esp, 0x001F255Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F255E: ;
    eax = MEM32(0x5BC21C);
    esp = esp + 4;

loc_001F2566: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2570
 * Original: 0x001F2570 - 0x001F2597 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2570: ;
    eax = MEM32(0x5BC224);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2584; /* je: equal / zero */

loc_001F2579: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2596; /* jne: not equal / not zero */

loc_001F2584: ;
    PUSH32(esp, 0x228460);
    PUSH32(esp, 0x001F258Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F258E: ;
    eax = MEM32(0x5BC224);
    esp = esp + 4;

loc_001F2596: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F25A0
 * Original: 0x001F25A0 - 0x001F25C7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F25A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F25A0: ;
    eax = MEM32(0x5BC22C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F25B4; /* je: equal / zero */

loc_001F25A9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F25C6; /* jne: not equal / not zero */

loc_001F25B4: ;
    PUSH32(esp, 0x22DEA0);
    PUSH32(esp, 0x001F25BEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F25BE: ;
    eax = MEM32(0x5BC22C);
    esp = esp + 4;

loc_001F25C6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F25D0
 * Original: 0x001F25D0 - 0x001F25F7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F25D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F25D0: ;
    eax = MEM32(0x5BC320);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F25E4; /* je: equal / zero */

loc_001F25D9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F25F6; /* jne: not equal / not zero */

loc_001F25E4: ;
    PUSH32(esp, 0x22E0C0);
    PUSH32(esp, 0x001F25EEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F25EE: ;
    eax = MEM32(0x5BC320);
    esp = esp + 4;

loc_001F25F6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2600
 * Original: 0x001F2600 - 0x001F2627 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2600: ;
    eax = MEM32(0x5BC23C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2614; /* je: equal / zero */

loc_001F2609: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2626; /* jne: not equal / not zero */

loc_001F2614: ;
    PUSH32(esp, 0x2284E0);
    PUSH32(esp, 0x001F261Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F261E: ;
    eax = MEM32(0x5BC23C);
    esp = esp + 4;

loc_001F2626: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2630
 * Original: 0x001F2630 - 0x001F2657 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2630: ;
    eax = MEM32(0x5BC234);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2644; /* je: equal / zero */

loc_001F2639: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2656; /* jne: not equal / not zero */

loc_001F2644: ;
    PUSH32(esp, 0x22A470);
    PUSH32(esp, 0x001F264Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F264E: ;
    eax = MEM32(0x5BC234);
    esp = esp + 4;

loc_001F2656: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2660
 * Original: 0x001F2660 - 0x001F2687 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2660: ;
    eax = MEM32(0x5BC230);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2674; /* je: equal / zero */

loc_001F2669: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2686; /* jne: not equal / not zero */

loc_001F2674: ;
    PUSH32(esp, 0x236340);
    PUSH32(esp, 0x001F267Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F267E: ;
    eax = MEM32(0x5BC230);
    esp = esp + 4;

loc_001F2686: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2690
 * Original: 0x001F2690 - 0x001F26B7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2690: ;
    eax = MEM32(0x5BC314);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F26A4; /* je: equal / zero */

loc_001F2699: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F26B6; /* jne: not equal / not zero */

loc_001F26A4: ;
    PUSH32(esp, 0x228960);
    PUSH32(esp, 0x001F26AEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F26AE: ;
    eax = MEM32(0x5BC314);
    esp = esp + 4;

loc_001F26B6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F26C0
 * Original: 0x001F26C0 - 0x001F26E7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F26C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F26C0: ;
    eax = MEM32(0x5BC240);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F26D4; /* je: equal / zero */

loc_001F26C9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F26E6; /* jne: not equal / not zero */

loc_001F26D4: ;
    PUSH32(esp, 0x237270);
    PUSH32(esp, 0x001F26DEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F26DE: ;
    eax = MEM32(0x5BC240);
    esp = esp + 4;

loc_001F26E6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F26F0
 * Original: 0x001F26F0 - 0x001F2717 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F26F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F26F0: ;
    eax = MEM32(0x5BC244);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2704; /* je: equal / zero */

loc_001F26F9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2716; /* jne: not equal / not zero */

loc_001F2704: ;
    PUSH32(esp, 0x22A4F0);
    PUSH32(esp, 0x001F270Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F270E: ;
    eax = MEM32(0x5BC244);
    esp = esp + 4;

loc_001F2716: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2720
 * Original: 0x001F2720 - 0x001F2747 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2720: ;
    eax = MEM32(0x5BC248);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2734; /* je: equal / zero */

loc_001F2729: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2746; /* jne: not equal / not zero */

loc_001F2734: ;
    PUSH32(esp, 0x222230);
    PUSH32(esp, 0x001F273Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F273E: ;
    eax = MEM32(0x5BC248);
    esp = esp + 4;

loc_001F2746: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2750
 * Original: 0x001F2750 - 0x001F2785 (53 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2750: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_001F277B; /* je: equal / zero */

loc_001F275A: ;
    eax = MEM32(esi);
    edi = MEM32(0x5BC248);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001F2767u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F2767: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F277B; /* je: equal / zero */

loc_001F276B: ;
    goto loc_001F2770;

    /* nop */

loc_001F2770: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F2780; /* je: equal / zero */

loc_001F2774: ;
    eax = MEM32(eax + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2770; /* jne: not equal / not zero */

loc_001F277B: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001F2780: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F2790
 * Original: 0x001F2790 - 0x001F27B7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2790: ;
    eax = MEM32(0x5BC250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F27A4; /* je: equal / zero */

loc_001F2799: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F27B6; /* jne: not equal / not zero */

loc_001F27A4: ;
    PUSH32(esp, 0x228560);
    PUSH32(esp, 0x001F27AEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F27AE: ;
    eax = MEM32(0x5BC250);
    esp = esp + 4;

loc_001F27B6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F27C0
 * Original: 0x001F27C0 - 0x001F27E7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F27C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F27C0: ;
    eax = MEM32(0x5BC264);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F27D4; /* je: equal / zero */

loc_001F27C9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F27E6; /* jne: not equal / not zero */

loc_001F27D4: ;
    PUSH32(esp, 0x2372F0);
    PUSH32(esp, 0x001F27DEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F27DE: ;
    eax = MEM32(0x5BC264);
    esp = esp + 4;

loc_001F27E6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F27F0
 * Original: 0x001F27F0 - 0x001F2817 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F27F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F27F0: ;
    eax = MEM32(0x5BC278);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2804; /* je: equal / zero */

loc_001F27F9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2816; /* jne: not equal / not zero */

loc_001F2804: ;
    PUSH32(esp, 0x237370);
    PUSH32(esp, 0x001F280Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F280E: ;
    eax = MEM32(0x5BC278);
    esp = esp + 4;

loc_001F2816: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2820
 * Original: 0x001F2820 - 0x001F2847 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2820: ;
    eax = MEM32(0x5BC290);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2834; /* je: equal / zero */

loc_001F2829: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2846; /* jne: not equal / not zero */

loc_001F2834: ;
    PUSH32(esp, 0x220870);
    PUSH32(esp, 0x001F283Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F283E: ;
    eax = MEM32(0x5BC290);
    esp = esp + 4;

loc_001F2846: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2850
 * Original: 0x001F2850 - 0x001F2877 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2850: ;
    eax = MEM32(0x5BC294);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2864; /* je: equal / zero */

loc_001F2859: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2876; /* jne: not equal / not zero */

loc_001F2864: ;
    PUSH32(esp, 0x221900);
    PUSH32(esp, 0x001F286Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F286E: ;
    eax = MEM32(0x5BC294);
    esp = esp + 4;

loc_001F2876: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2880
 * Original: 0x001F2880 - 0x001F28A7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2880: ;
    eax = MEM32(0x5BC29C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2894; /* je: equal / zero */

loc_001F2889: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F28A6; /* jne: not equal / not zero */

loc_001F2894: ;
    PUSH32(esp, 0x228660);
    PUSH32(esp, 0x001F289Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F289E: ;
    eax = MEM32(0x5BC29C);
    esp = esp + 4;

loc_001F28A6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F28B0
 * Original: 0x001F28B0 - 0x001F28D7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F28B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F28B0: ;
    eax = MEM32(0x5BC2A8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F28C4; /* je: equal / zero */

loc_001F28B9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F28D6; /* jne: not equal / not zero */

loc_001F28C4: ;
    PUSH32(esp, 0x2373F0);
    PUSH32(esp, 0x001F28CEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F28CE: ;
    eax = MEM32(0x5BC2A8);
    esp = esp + 4;

loc_001F28D6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F28E0
 * Original: 0x001F28E0 - 0x001F2907 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F28E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F28E0: ;
    eax = MEM32(0x5BC2A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F28F4; /* je: equal / zero */

loc_001F28E9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2906; /* jne: not equal / not zero */

loc_001F28F4: ;
    PUSH32(esp, 0x2385E0);
    PUSH32(esp, 0x001F28FEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F28FE: ;
    eax = MEM32(0x5BC2A4);
    esp = esp + 4;

loc_001F2906: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2910
 * Original: 0x001F2910 - 0x001F2937 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2910: ;
    eax = MEM32(0x5BC2AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2924; /* je: equal / zero */

loc_001F2919: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2936; /* jne: not equal / not zero */

loc_001F2924: ;
    PUSH32(esp, 0x239260);
    PUSH32(esp, 0x001F292Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F292E: ;
    eax = MEM32(0x5BC2AC);
    esp = esp + 4;

loc_001F2936: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2940
 * Original: 0x001F2940 - 0x001F2967 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2940: ;
    eax = MEM32(0x5BC2B0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2954; /* je: equal / zero */

loc_001F2949: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2966; /* jne: not equal / not zero */

loc_001F2954: ;
    PUSH32(esp, 0x239DD0);
    PUSH32(esp, 0x001F295Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F295E: ;
    eax = MEM32(0x5BC2B0);
    esp = esp + 4;

loc_001F2966: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2970
 * Original: 0x001F2970 - 0x001F2997 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2970: ;
    eax = MEM32(0x5BC2C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2984; /* je: equal / zero */

loc_001F2979: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2996; /* jne: not equal / not zero */

loc_001F2984: ;
    PUSH32(esp, 0x2286E0);
    PUSH32(esp, 0x001F298Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F298E: ;
    eax = MEM32(0x5BC2C0);
    esp = esp + 4;

loc_001F2996: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F29A0
 * Original: 0x001F29A0 - 0x001F29C7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F29A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F29A0: ;
    eax = MEM32(0x5BC2BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F29B4; /* je: equal / zero */

loc_001F29A9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F29C6; /* jne: not equal / not zero */

loc_001F29B4: ;
    PUSH32(esp, 0x22A590);
    PUSH32(esp, 0x001F29BEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F29BE: ;
    eax = MEM32(0x5BC2BC);
    esp = esp + 4;

loc_001F29C6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F29D0
 * Original: 0x001F29D0 - 0x001F29F7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F29D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F29D0: ;
    eax = MEM32(0x5BC2B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F29E4; /* je: equal / zero */

loc_001F29D9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F29F6; /* jne: not equal / not zero */

loc_001F29E4: ;
    PUSH32(esp, 0x2306D0);
    PUSH32(esp, 0x001F29EEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F29EE: ;
    eax = MEM32(0x5BC2B8);
    esp = esp + 4;

loc_001F29F6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2A00
 * Original: 0x001F2A00 - 0x001F2A27 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2A00: ;
    eax = MEM32(0x5BC450);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2A14; /* je: equal / zero */

loc_001F2A09: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2A26; /* jne: not equal / not zero */

loc_001F2A14: ;
    PUSH32(esp, 0x21C070);
    PUSH32(esp, 0x001F2A1Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F2A1E: ;
    eax = MEM32(0x5BC450);
    esp = esp + 4;

loc_001F2A26: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2A30
 * Original: 0x001F2A30 - 0x001F2A57 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2A30: ;
    eax = MEM32(0x5BC2C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2A44; /* je: equal / zero */

loc_001F2A39: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2A56; /* jne: not equal / not zero */

loc_001F2A44: ;
    PUSH32(esp, 0x22B9E0);
    PUSH32(esp, 0x001F2A4Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F2A4E: ;
    eax = MEM32(0x5BC2C8);
    esp = esp + 4;

loc_001F2A56: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2A60
 * Original: 0x001F2A60 - 0x001F2A87 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2A60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2A60: ;
    eax = MEM32(0x5BC2CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2A74; /* je: equal / zero */

loc_001F2A69: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2A86; /* jne: not equal / not zero */

loc_001F2A74: ;
    PUSH32(esp, 0x230750);
    PUSH32(esp, 0x001F2A7Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F2A7E: ;
    eax = MEM32(0x5BC2CC);
    esp = esp + 4;

loc_001F2A86: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2A90
 * Original: 0x001F2A90 - 0x001F2AB7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2A90: ;
    eax = MEM32(0x5BC2D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2AA4; /* je: equal / zero */

loc_001F2A99: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2AB6; /* jne: not equal / not zero */

loc_001F2AA4: ;
    PUSH32(esp, 0x228760);
    PUSH32(esp, 0x001F2AAEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F2AAE: ;
    eax = MEM32(0x5BC2D4);
    esp = esp + 4;

loc_001F2AB6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2AC0
 * Original: 0x001F2AC0 - 0x001F2AE7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2AC0: ;
    eax = MEM32(0x5BC2D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2AD4; /* je: equal / zero */

loc_001F2AC9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2AE6; /* jne: not equal / not zero */

loc_001F2AD4: ;
    PUSH32(esp, 0x22A610);
    PUSH32(esp, 0x001F2ADEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F2ADE: ;
    eax = MEM32(0x5BC2D0);
    esp = esp + 4;

loc_001F2AE6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2AF0
 * Original: 0x001F2AF0 - 0x001F2B17 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2AF0: ;
    eax = MEM32(0x5BC2E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2B04; /* je: equal / zero */

loc_001F2AF9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2B16; /* jne: not equal / not zero */

loc_001F2B04: ;
    PUSH32(esp, 0x228860);
    PUSH32(esp, 0x001F2B0Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F2B0E: ;
    eax = MEM32(0x5BC2E4);
    esp = esp + 4;

loc_001F2B16: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2B20
 * Original: 0x001F2B20 - 0x001F2B47 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2B20: ;
    eax = MEM32(0x5BC2EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2B34; /* je: equal / zero */

loc_001F2B29: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2B46; /* jne: not equal / not zero */

loc_001F2B34: ;
    PUSH32(esp, 0x22DFC0);
    PUSH32(esp, 0x001F2B3Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F2B3E: ;
    eax = MEM32(0x5BC2EC);
    esp = esp + 4;

loc_001F2B46: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2B50
 * Original: 0x001F2B50 - 0x001F2B77 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2B50: ;
    eax = MEM32(0x5BC2F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2B64; /* je: equal / zero */

loc_001F2B59: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2B76; /* jne: not equal / not zero */

loc_001F2B64: ;
    PUSH32(esp, 0x235F60);
    PUSH32(esp, 0x001F2B6Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F2B6E: ;
    eax = MEM32(0x5BC2F0);
    esp = esp + 4;

loc_001F2B76: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2B80
 * Original: 0x001F2B80 - 0x001F2BA7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2B80: ;
    eax = MEM32(0x5BC30C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2B94; /* je: equal / zero */

loc_001F2B89: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2BA6; /* jne: not equal / not zero */

loc_001F2B94: ;
    PUSH32(esp, 0x2288E0);
    PUSH32(esp, 0x001F2B9Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F2B9E: ;
    eax = MEM32(0x5BC30C);
    esp = esp + 4;

loc_001F2BA6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2BB0
 * Original: 0x001F2BB0 - 0x001F2BD7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2BB0: ;
    eax = MEM32(0x5BC31C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2BC4; /* je: equal / zero */

loc_001F2BB9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2BD6; /* jne: not equal / not zero */

loc_001F2BC4: ;
    PUSH32(esp, 0x237130);
    PUSH32(esp, 0x001F2BCEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F2BCE: ;
    eax = MEM32(0x5BC31C);
    esp = esp + 4;

loc_001F2BD6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2BE0
 * Original: 0x001F2BE0 - 0x001F2C07 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2BE0: ;
    eax = MEM32(0x5BC32C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2BF4; /* je: equal / zero */

loc_001F2BE9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2C06; /* jne: not equal / not zero */

loc_001F2BF4: ;
    PUSH32(esp, 0x228A60);
    PUSH32(esp, 0x001F2BFEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F2BFE: ;
    eax = MEM32(0x5BC32C);
    esp = esp + 4;

loc_001F2C06: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2C10
 * Original: 0x001F2C10 - 0x001F2C37 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2C10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2C10: ;
    eax = MEM32(0x5BC370);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2C24; /* je: equal / zero */

loc_001F2C19: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2C36; /* jne: not equal / not zero */

loc_001F2C24: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x001F2C2Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F2C2E: ;
    eax = MEM32(0x5BC370);
    esp = esp + 4;

loc_001F2C36: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2C40
 * Original: 0x001F2C40 - 0x001F2C67 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2C40: ;
    eax = MEM32(0x5BC374);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2C54; /* je: equal / zero */

loc_001F2C49: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2C66; /* jne: not equal / not zero */

loc_001F2C54: ;
    PUSH32(esp, 0x220710);
    PUSH32(esp, 0x001F2C5Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F2C5E: ;
    eax = MEM32(0x5BC374);
    esp = esp + 4;

loc_001F2C66: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2C70
 * Original: 0x001F2C70 - 0x001F2C97 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2C70: ;
    eax = MEM32(0x5BC37C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2C84; /* je: equal / zero */

loc_001F2C79: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2C96; /* jne: not equal / not zero */

loc_001F2C84: ;
    PUSH32(esp, 0x228AE0);
    PUSH32(esp, 0x001F2C8Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F2C8E: ;
    eax = MEM32(0x5BC37C);
    esp = esp + 4;

loc_001F2C96: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2CA0
 * Original: 0x001F2CA0 - 0x001F2CC7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2CA0: ;
    eax = MEM32(0x5BC440);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2CB4; /* je: equal / zero */

loc_001F2CA9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2CC6; /* jne: not equal / not zero */

loc_001F2CB4: ;
    PUSH32(esp, 0x2294E0);
    PUSH32(esp, 0x001F2CBEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F2CBE: ;
    eax = MEM32(0x5BC440);
    esp = esp + 4;

loc_001F2CC6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2CD0
 * Original: 0x001F2CD0 - 0x001F2CF7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2CD0: ;
    eax = MEM32(0x5BC390);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2CE4; /* je: equal / zero */

loc_001F2CD9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2CF6; /* jne: not equal / not zero */

loc_001F2CE4: ;
    PUSH32(esp, 0x228B60);
    PUSH32(esp, 0x001F2CEEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F2CEE: ;
    eax = MEM32(0x5BC390);
    esp = esp + 4;

loc_001F2CF6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2D00
 * Original: 0x001F2D00 - 0x001F2D27 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2D00: ;
    eax = MEM32(0x5BC38C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2D14; /* je: equal / zero */

loc_001F2D09: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2D26; /* jne: not equal / not zero */

loc_001F2D14: ;
    PUSH32(esp, 0x233490);
    PUSH32(esp, 0x001F2D1Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F2D1E: ;
    eax = MEM32(0x5BC38C);
    esp = esp + 4;

loc_001F2D26: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2D30
 * Original: 0x001F2D30 - 0x001F2D57 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2D30: ;
    eax = MEM32(0x5BC394);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2D44; /* je: equal / zero */

loc_001F2D39: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2D56; /* jne: not equal / not zero */

loc_001F2D44: ;
    PUSH32(esp, 0x228BE0);
    PUSH32(esp, 0x001F2D4Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F2D4E: ;
    eax = MEM32(0x5BC394);
    esp = esp + 4;

loc_001F2D56: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2D60
 * Original: 0x001F2D60 - 0x001F2D87 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2D60: ;
    eax = MEM32(0x5BC39C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2D74; /* je: equal / zero */

loc_001F2D69: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2D86; /* jne: not equal / not zero */

loc_001F2D74: ;
    PUSH32(esp, 0x228C60);
    PUSH32(esp, 0x001F2D7Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F2D7E: ;
    eax = MEM32(0x5BC39C);
    esp = esp + 4;

loc_001F2D86: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2D90
 * Original: 0x001F2D90 - 0x001F2DB7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2D90: ;
    eax = MEM32(0x5BC448);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2DA4; /* je: equal / zero */

loc_001F2D99: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2DB6; /* jne: not equal / not zero */

loc_001F2DA4: ;
    PUSH32(esp, 0x22A130);
    PUSH32(esp, 0x001F2DAEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F2DAE: ;
    eax = MEM32(0x5BC448);
    esp = esp + 4;

loc_001F2DB6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2DC0
 * Original: 0x001F2DC0 - 0x001F2DE7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2DC0: ;
    eax = MEM32(0x5BC3C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2DD4; /* je: equal / zero */

loc_001F2DC9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2DE6; /* jne: not equal / not zero */

loc_001F2DD4: ;
    PUSH32(esp, 0x22A770);
    PUSH32(esp, 0x001F2DDEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F2DDE: ;
    eax = MEM32(0x5BC3C0);
    esp = esp + 4;

loc_001F2DE6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2DF0
 * Original: 0x001F2DF0 - 0x001F2E17 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2DF0: ;
    eax = MEM32(0x5BC3BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2E04; /* je: equal / zero */

loc_001F2DF9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2E16; /* jne: not equal / not zero */

loc_001F2E04: ;
    PUSH32(esp, 0x22F570);
    PUSH32(esp, 0x001F2E0Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F2E0E: ;
    eax = MEM32(0x5BC3BC);
    esp = esp + 4;

loc_001F2E16: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2E20
 * Original: 0x001F2E20 - 0x001F2E47 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2E20: ;
    eax = MEM32(0x5BC3B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2E34; /* je: equal / zero */

loc_001F2E29: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2E46; /* jne: not equal / not zero */

loc_001F2E34: ;
    PUSH32(esp, 0x2317A0);
    PUSH32(esp, 0x001F2E3Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F2E3E: ;
    eax = MEM32(0x5BC3B8);
    esp = esp + 4;

loc_001F2E46: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2E50
 * Original: 0x001F2E50 - 0x001F2E77 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2E50: ;
    eax = MEM32(0x5BC43C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2E64; /* je: equal / zero */

loc_001F2E59: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2E76; /* jne: not equal / not zero */

loc_001F2E64: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x001F2E6Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F2E6E: ;
    eax = MEM32(0x5BC43C);
    esp = esp + 4;

loc_001F2E76: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2E80
 * Original: 0x001F2E80 - 0x001F2EA7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2E80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2E80: ;
    eax = MEM32(0x5BC438);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2E94; /* je: equal / zero */

loc_001F2E89: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2EA6; /* jne: not equal / not zero */

loc_001F2E94: ;
    PUSH32(esp, 0x226590);
    PUSH32(esp, 0x001F2E9Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F2E9E: ;
    eax = MEM32(0x5BC438);
    esp = esp + 4;

loc_001F2EA6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2EB0
 * Original: 0x001F2EB0 - 0x001F2ED7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2EB0: ;
    eax = MEM32(0x5BC434);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2EC4; /* je: equal / zero */

loc_001F2EB9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2ED6; /* jne: not equal / not zero */

loc_001F2EC4: ;
    PUSH32(esp, 0x226620);
    PUSH32(esp, 0x001F2ECEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F2ECE: ;
    eax = MEM32(0x5BC434);
    esp = esp + 4;

loc_001F2ED6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2EE0
 * Original: 0x001F2EE0 - 0x001F2F07 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2EE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2EE0: ;
    eax = MEM32(0x5BC430);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2EF4; /* je: equal / zero */

loc_001F2EE9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2F06; /* jne: not equal / not zero */

loc_001F2EF4: ;
    PUSH32(esp, 0x224A80);
    PUSH32(esp, 0x001F2EFEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F2EFE: ;
    eax = MEM32(0x5BC430);
    esp = esp + 4;

loc_001F2F06: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2F10
 * Original: 0x001F2F10 - 0x001F2F37 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2F10: ;
    eax = MEM32(0x5BC458);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2F24; /* je: equal / zero */

loc_001F2F19: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2F36; /* jne: not equal / not zero */

loc_001F2F24: ;
    PUSH32(esp, 0x229560);
    PUSH32(esp, 0x001F2F2Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F2F2E: ;
    eax = MEM32(0x5BC458);
    esp = esp + 4;

loc_001F2F36: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2F40
 * Original: 0x001F2F40 - 0x001F2F67 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2F40: ;
    eax = MEM32(0x5BC460);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2F54; /* je: equal / zero */

loc_001F2F49: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2F66; /* jne: not equal / not zero */

loc_001F2F54: ;
    PUSH32(esp, 0x22E3C0);
    PUSH32(esp, 0x001F2F5Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F2F5E: ;
    eax = MEM32(0x5BC460);
    esp = esp + 4;

loc_001F2F66: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2F70
 * Original: 0x001F2F70 - 0x001F2F97 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2F70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2F70: ;
    eax = MEM32(0x5BC464);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2F84; /* je: equal / zero */

loc_001F2F79: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2F96; /* jne: not equal / not zero */

loc_001F2F84: ;
    PUSH32(esp, 0x22AC70);
    PUSH32(esp, 0x001F2F8Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F2F8E: ;
    eax = MEM32(0x5BC464);
    esp = esp + 4;

loc_001F2F96: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2FA0
 * Original: 0x001F2FA0 - 0x001F2FC7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2FA0: ;
    eax = MEM32(0x5BC470);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2FB4; /* je: equal / zero */

loc_001F2FA9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2FC6; /* jne: not equal / not zero */

loc_001F2FB4: ;
    PUSH32(esp, 0x2295E0);
    PUSH32(esp, 0x001F2FBEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F2FBE: ;
    eax = MEM32(0x5BC470);
    esp = esp + 4;

loc_001F2FC6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F2FD0
 * Original: 0x001F2FD0 - 0x001F2FF7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F2FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F2FD0: ;
    eax = MEM32(0x5BC47C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F2FE4; /* je: equal / zero */

loc_001F2FD9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F2FF6; /* jne: not equal / not zero */

loc_001F2FE4: ;
    PUSH32(esp, 0x22E440);
    PUSH32(esp, 0x001F2FEEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F2FEE: ;
    eax = MEM32(0x5BC47C);
    esp = esp + 4;

loc_001F2FF6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F3000
 * Original: 0x001F3000 - 0x001F3027 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3000: ;
    eax = MEM32(0x5BC49C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F3014; /* je: equal / zero */

loc_001F3009: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F3026; /* jne: not equal / not zero */

loc_001F3014: ;
    PUSH32(esp, 0x236020);
    PUSH32(esp, 0x001F301Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F301E: ;
    eax = MEM32(0x5BC49C);
    esp = esp + 4;

loc_001F3026: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F3030
 * Original: 0x001F3030 - 0x001F3057 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3030: ;
    eax = MEM32(0x5BC4A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F3044; /* je: equal / zero */

loc_001F3039: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F3056; /* jne: not equal / not zero */

loc_001F3044: ;
    PUSH32(esp, 0x2360A0);
    PUSH32(esp, 0x001F304Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F304E: ;
    eax = MEM32(0x5BC4A0);
    esp = esp + 4;

loc_001F3056: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F3060
 * Original: 0x001F3060 - 0x001F3087 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3060: ;
    eax = MEM32(0x5BC4A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F3074; /* je: equal / zero */

loc_001F3069: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F3086; /* jne: not equal / not zero */

loc_001F3074: ;
    PUSH32(esp, 0x236120);
    PUSH32(esp, 0x001F307Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F307E: ;
    eax = MEM32(0x5BC4A4);
    esp = esp + 4;

loc_001F3086: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F3090
 * Original: 0x001F3090 - 0x001F30B7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3090: ;
    eax = MEM32(0x5BC4BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F30A4; /* je: equal / zero */

loc_001F3099: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F30B6; /* jne: not equal / not zero */

loc_001F30A4: ;
    PUSH32(esp, 0x22A1B0);
    PUSH32(esp, 0x001F30AEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F30AE: ;
    eax = MEM32(0x5BC4BC);
    esp = esp + 4;

loc_001F30B6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F30C0
 * Original: 0x001F30C0 - 0x001F30E7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F30C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F30C0: ;
    eax = MEM32(0x5BC4B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F30D4; /* je: equal / zero */

loc_001F30C9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F30E6; /* jne: not equal / not zero */

loc_001F30D4: ;
    PUSH32(esp, 0x22E4C0);
    PUSH32(esp, 0x001F30DEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F30DE: ;
    eax = MEM32(0x5BC4B8);
    esp = esp + 4;

loc_001F30E6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F30F0
 * Original: 0x001F30F0 - 0x001F3117 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F30F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F30F0: ;
    eax = MEM32(0x5BC4B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F3104; /* je: equal / zero */

loc_001F30F9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F3116; /* jne: not equal / not zero */

loc_001F3104: ;
    PUSH32(esp, 0x2361E0);
    PUSH32(esp, 0x001F310Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F310E: ;
    eax = MEM32(0x5BC4B4);
    esp = esp + 4;

loc_001F3116: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F3120
 * Original: 0x001F3120 - 0x001F3147 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3120: ;
    eax = MEM32(0x5BC4C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F3134; /* je: equal / zero */

loc_001F3129: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F3146; /* jne: not equal / not zero */

loc_001F3134: ;
    PUSH32(esp, 0x230910);
    PUSH32(esp, 0x001F313Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F313E: ;
    eax = MEM32(0x5BC4C4);
    esp = esp + 4;

loc_001F3146: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F3150
 * Original: 0x001F3150 - 0x001F3177 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3150: ;
    eax = MEM32(0x5BC4C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F3164; /* je: equal / zero */

loc_001F3159: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F3176; /* jne: not equal / not zero */

loc_001F3164: ;
    PUSH32(esp, 0x230990);
    PUSH32(esp, 0x001F316Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F316E: ;
    eax = MEM32(0x5BC4C8);
    esp = esp + 4;

loc_001F3176: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F3180
 * Original: 0x001F3180 - 0x001F31A7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3180: ;
    eax = MEM32(0x5BC4F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F3194; /* je: equal / zero */

loc_001F3189: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F31A6; /* jne: not equal / not zero */

loc_001F3194: ;
    PUSH32(esp, 0x22C020);
    PUSH32(esp, 0x001F319Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F319E: ;
    eax = MEM32(0x5BC4F0);
    esp = esp + 4;

loc_001F31A6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F31B0
 * Original: 0x001F31B0 - 0x001F31FB (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F31B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F31B0: ;
    eax = MEM32(0x5BC1C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F31FA; /* jne: not equal / not zero */

loc_001F31B9: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F31D2; /* jle: less or equal (signed <=) */

loc_001F31C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F31D0; /* jge: greater or equal (signed >=) */

loc_001F31C7: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_001F31E0;

loc_001F31D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_001F31D2: ;
    if (TEST_NZ(_fa, _fb)) goto loc_001F31DE; /* jne: not equal / not zero */

loc_001F31D4: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F31E0; /* jne: not equal / not zero */

loc_001F31DE: ;
    ecx = 0; /* xor self */

loc_001F31E0: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x001F31ECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F31EC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F31F2u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001F31F2: ;
    esp = esp + 4;
    MEM32(0x5BC1C4) = eax;

loc_001F31FA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F3200
 * Original: 0x001F3200 - 0x001F3206 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3200(void)
{

loc_001F3200: ;
    eax = MEM32(0x5BC1C8);
    esp += 4; return; /* ret */

}

/**
 * sub_001F3210
 * Original: 0x001F3210 - 0x001F325B (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3210: ;
    eax = MEM32(0x5BC274);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F325A; /* jne: not equal / not zero */

loc_001F3219: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F3232; /* jle: less or equal (signed <=) */

loc_001F3222: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F3230; /* jge: greater or equal (signed >=) */

loc_001F3227: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_001F3240;

loc_001F3230: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_001F3232: ;
    if (TEST_NZ(_fa, _fb)) goto loc_001F323E; /* jne: not equal / not zero */

loc_001F3234: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F3240; /* jne: not equal / not zero */

loc_001F323E: ;
    ecx = 0; /* xor self */

loc_001F3240: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x001F324Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F324C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F3252u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001F3252: ;
    esp = esp + 4;
    MEM32(0x5BC274) = eax;

loc_001F325A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F3260
 * Original: 0x001F3260 - 0x001F32AB (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3260: ;
    eax = MEM32(0x5BC28C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F32AA; /* jne: not equal / not zero */

loc_001F3269: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F3282; /* jle: less or equal (signed <=) */

loc_001F3272: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F3280; /* jge: greater or equal (signed >=) */

loc_001F3277: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_001F3290;

loc_001F3280: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_001F3282: ;
    if (TEST_NZ(_fa, _fb)) goto loc_001F328E; /* jne: not equal / not zero */

loc_001F3284: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F3290; /* jne: not equal / not zero */

loc_001F328E: ;
    ecx = 0; /* xor self */

loc_001F3290: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x001F329Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F329C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F32A2u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001F32A2: ;
    esp = esp + 4;
    MEM32(0x5BC28C) = eax;

loc_001F32AA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F32B0
 * Original: 0x001F32B0 - 0x001F32FB (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F32B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F32B0: ;
    eax = MEM32(0x5BC2FC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F32FA; /* jne: not equal / not zero */

loc_001F32B9: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F32D2; /* jle: less or equal (signed <=) */

loc_001F32C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F32D0; /* jge: greater or equal (signed >=) */

loc_001F32C7: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_001F32E0;

loc_001F32D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_001F32D2: ;
    if (TEST_NZ(_fa, _fb)) goto loc_001F32DE; /* jne: not equal / not zero */

loc_001F32D4: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F32E0; /* jne: not equal / not zero */

loc_001F32DE: ;
    ecx = 0; /* xor self */

loc_001F32E0: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x001F32ECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F32EC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F32F2u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001F32F2: ;
    esp = esp + 4;
    MEM32(0x5BC2FC) = eax;

loc_001F32FA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F3300
 * Original: 0x001F3300 - 0x001F334B (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3300: ;
    eax = MEM32(0x5BC300);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F334A; /* jne: not equal / not zero */

loc_001F3309: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F3322; /* jle: less or equal (signed <=) */

loc_001F3312: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F3320; /* jge: greater or equal (signed >=) */

loc_001F3317: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_001F3330;

loc_001F3320: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_001F3322: ;
    if (TEST_NZ(_fa, _fb)) goto loc_001F332E; /* jne: not equal / not zero */

loc_001F3324: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F3330; /* jne: not equal / not zero */

loc_001F332E: ;
    ecx = 0; /* xor self */

loc_001F3330: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x001F333Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F333C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F3342u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001F3342: ;
    esp = esp + 4;
    MEM32(0x5BC300) = eax;

loc_001F334A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F3350
 * Original: 0x001F3350 - 0x001F3356 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3350(void)
{

loc_001F3350: ;
    eax = MEM32(0x5BC370);
    esp += 4; return; /* ret */

}

/**
 * sub_001F3360
 * Original: 0x001F3360 - 0x001F3366 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3360(void)
{

loc_001F3360: ;
    eax = MEM32(0x5BC390);
    esp += 4; return; /* ret */

}

/**
 * sub_001F3370
 * Original: 0x001F3370 - 0x001F3394 (36 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3370(void)
{

loc_001F3370: ;
    esp = esp - 0x14;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3E0CC4;
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001F33A0
 * Original: 0x001F33A0 - 0x001F33A6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F33A0(void)
{

loc_001F33A0: ;
    eax = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_001F33B0
 * Original: 0x001F33B0 - 0x001F33B6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F33B0(void)
{

loc_001F33B0: ;
    eax = 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001F33C0
 * Original: 0x001F33C0 - 0x001F340B (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F33C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F33C0: ;
    eax = MEM32(0x5BC420);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F340A; /* jne: not equal / not zero */

loc_001F33C9: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F33E2; /* jle: less or equal (signed <=) */

loc_001F33D2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F33E0; /* jge: greater or equal (signed >=) */

loc_001F33D7: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_001F33F0;

loc_001F33E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_001F33E2: ;
    if (TEST_NZ(_fa, _fb)) goto loc_001F33EE; /* jne: not equal / not zero */

loc_001F33E4: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F33F0; /* jne: not equal / not zero */

loc_001F33EE: ;
    ecx = 0; /* xor self */

loc_001F33F0: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x001F33FCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F33FC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F3402u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001F3402: ;
    esp = esp + 4;
    MEM32(0x5BC420) = eax;

loc_001F340A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F3410
 * Original: 0x001F3410 - 0x001F3437 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3410: ;
    eax = MEM32(0x5BC478);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F3424; /* je: equal / zero */

loc_001F3419: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F3436; /* jne: not equal / not zero */

loc_001F3424: ;
    PUSH32(esp, 0x236280);
    PUSH32(esp, 0x001F342Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F342E: ;
    eax = MEM32(0x5BC478);
    esp = esp + 4;

loc_001F3436: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F3440
 * Original: 0x001F3440 - 0x001F3467 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3440: ;
    eax = MEM32(0x5BC488);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F3454; /* je: equal / zero */

loc_001F3449: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F3466; /* jne: not equal / not zero */

loc_001F3454: ;
    PUSH32(esp, 0x235FE0);
    PUSH32(esp, 0x001F345Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F345E: ;
    eax = MEM32(0x5BC488);
    esp = esp + 4;

loc_001F3466: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F3470
 * Original: 0x001F3470 - 0x001F3497 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3470: ;
    eax = MEM32(0x5BC4B0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F3484; /* je: equal / zero */

loc_001F3479: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F3496; /* jne: not equal / not zero */

loc_001F3484: ;
    PUSH32(esp, 0x2361A0);
    PUSH32(esp, 0x001F348Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F348E: ;
    eax = MEM32(0x5BC4B0);
    esp = esp + 4;

loc_001F3496: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F34A0
 * Original: 0x001F34A0 - 0x001F34AD (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F34A0(void)
{

loc_001F34A0: ;
    eax = MEM32(0x5BC4D8);
    MEM32(eax + 0x40) = 0x19B890;
    esp += 4; return; /* ret */

}

/**
 * sub_001F34B0
 * Original: 0x001F34B0 - 0x001F34BD (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F34B0(void)
{

loc_001F34B0: ;
    eax = MEM32(0x5BC4DC);
    MEM32(eax + 0x40) = 0x1F20F0;
    esp += 4; return; /* ret */

}

/**
 * sub_001F34C0
 * Original: 0x001F34C0 - 0x001F34C5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F34C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F34C0: ;
    g_seh_ebp = ebp; sub_001F1350(); return; /* tail jmp 0x001F1350 */

}

/**
 * sub_001F34D0
 * Original: 0x001F34D0 - 0x001F34DD (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F34D0(void)
{

loc_001F34D0: ;
    eax = MEM32(0x5BC504);
    MEM32(eax + 0x40) = 0x1F2F40;
    esp += 4; return; /* ret */

}

/**
 * sub_001F34E0
 * Original: 0x001F34E0 - 0x001F3522 (66 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F34E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F34E0: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001F34F2; /* js: sign (negative) */

loc_001F34E6: ;
    edx = edx >> 0x18;
    edx = edx & 0x1F;
    edx = edx << 1;
    eax = edx;
    goto loc_001F350A;

loc_001F34F2: ;
    eax = MEM32(ecx + 8);
    eax = eax >> 0xC;
    eax = eax & 0xFFF;
    edx = edx >> 0x18;
    eax = eax << 5;
    edx = edx & 0x1F;
    eax = eax + edx;
    eax = eax << 1;

loc_001F350A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    ecx = MEM32(0x5BC53C);
    if (TEST_NZ(_fa, _fb)) goto loc_001F351A; /* jne: not equal / not zero */

loc_001F3514: ;
    ecx = MEM32(0x5BC538);

loc_001F351A: ;
    edx = MEM32(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = MEM32(edx + eax * 4);
    esp += 4; return; /* ret */

}

/**
 * sub_001F3530
 * Original: 0x001F3530 - 0x001F35A8 (120 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3530(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3530: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001F359F; /* je: equal / zero */

loc_001F3540: ;
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xB4); PUSH32(esp, 0x001F354Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F354B: ;
    ecx = MEM32(esi + 0xB4);
    ebp = MEM32(esp + 0x1C);
    ebx = edx;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    edi = eax;
    { uint32_t _icall_target = MEM32(edx + 0xF8); PUSH32(esp, 0x001F3562u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F3562: ;
    ecx = MEM32(esi + 0xB4);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xB4); PUSH32(esp, 0x001F3574u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F3574: ;
    SET_LO8(ecx, MEM8(esi + 0x68));
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(ebx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x14) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_001F3591; /* je: equal / zero */

loc_001F3583: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x001F3591u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F3591: ;
    eax = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

loc_001F359F: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, esi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F35B0
 * Original: 0x001F35B0 - 0x001F35EC (60 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F35B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F35B0: ;
    ecx = MEM32(ecx + 0xB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F35DD; /* je: equal / zero */

loc_001F35BA: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0xEC); PUSH32(esp, 0x001F35D7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F35D7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_001F35DD: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x46A728);
    MEM32(eax) = ecx;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001F35F0
 * Original: 0x001F35F0 - 0x001F3631 (65 bytes, 23 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F35F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F35F0: ;
    ecx = MEM32(ecx + 0xB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F3622; /* je: equal / zero */

loc_001F35FA: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0xF0); PUSH32(esp, 0x001F361Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F361C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

loc_001F3622: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x46A728);
    MEM32(eax) = ecx;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001F3640
 * Original: 0x001F3640 - 0x001F3655 (21 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3640(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3640: ;
    ecx = MEM32(ecx + 0xB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F3652; /* je: equal / zero */

loc_001F364A: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xF4)); return; /* indirect tail jmp */

loc_001F3652: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F3660
 * Original: 0x001F3660 - 0x001F366E (14 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3660(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3660: ;
    ecx = MEM32(ecx + 0xB4);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x144)); return; /* indirect tail jmp */

}

/**
 * sub_001F3670
 * Original: 0x001F3670 - 0x001F3677 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3670(void)
{

loc_001F3670: ;
    eax = MEM32(ecx + 0x98);
    esp += 4; return; /* ret */

}

/**
 * sub_001F3680
 * Original: 0x001F3680 - 0x001F374B (203 bytes, 73 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3680: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F3738; /* jne: not equal / not zero */

loc_001F368F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F369C; /* jne: not equal / not zero */

loc_001F3693: ;
    MEM32(esi + 8) = 4;
    goto loc_001F36AA;

loc_001F369C: ;
    eax = ecx + ecx * 2;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    MEM32(esi + 8) = eax;

loc_001F36AA: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    eax = MEM32(0x5BC544);
    if (CMP_NE(_fa, _fb)) goto loc_001F36F5; /* jne: not equal / not zero */

loc_001F36B4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F36C8; /* jle: less or equal (signed <=) */

loc_001F36B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F36C6; /* jge: greater or equal (signed >=) */

loc_001F36BD: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_001F36D6;

loc_001F36C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_001F36C8: ;
    if (TEST_NZ(_fa, _fb)) goto loc_001F36D4; /* jne: not equal / not zero */

loc_001F36CA: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F36D6; /* jne: not equal / not zero */

loc_001F36D4: ;
    ecx = 0; /* xor self */

loc_001F36D6: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x001F36E2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F36E2: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(eax);
    ecx = ecx << 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x001F36F3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F36F3: ;
    goto loc_001F3736;

loc_001F36F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F3709; /* jle: less or equal (signed <=) */

loc_001F36F9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F3707; /* jge: greater or equal (signed >=) */

loc_001F36FE: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_001F3717;

loc_001F3707: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_001F3709: ;
    if (TEST_NZ(_fa, _fb)) goto loc_001F3715; /* jne: not equal / not zero */

loc_001F370B: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F3717; /* jne: not equal / not zero */

loc_001F3715: ;
    ecx = 0; /* xor self */

loc_001F3717: ;
    eax = MEM32(0x46A684);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x001F3722u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F3722: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(eax);
    ecx = ecx << 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x001F3736u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F3736: ;
    MEM32(esi) = eax;

loc_001F3738: ;
    edx = MEM32(esi + 4);
    eax = MEM32(esi);
    ecx = MEM32(esp + 8);
    MEM32(eax + edx * 4) = ecx;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F3750
 * Original: 0x001F3750 - 0x001F376D (29 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3750: ;
    eax = MEM32(ecx + 0x10);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F376C; /* jle: less or equal (signed <=) */

loc_001F375F: ;
    /* nop */

loc_001F3760: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F3766; /* jne: not equal / not zero */

loc_001F3765: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001F3766: ;
    edx = edx + 4;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001F3760; /* jne: not equal / not zero */

loc_001F376C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F3770
 * Original: 0x001F3770 - 0x001F379A (42 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001F3770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3770: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001F3795; /* jl: less (signed <) */

loc_001F3778: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F3795; /* jge: greater or equal (signed >=) */

loc_001F3780: ;
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F3795; /* je: equal / zero */

loc_001F3787: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    eax = eax + edx * 4;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F3797; /* jle: less or equal (signed <=) */

loc_001F378E: ;
    ecx = MEM32(eax + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F3797; /* je: equal / zero */

loc_001F3795: ;
    eax = 0; /* xor self */

loc_001F3797: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F37A0
 * Original: 0x001F37A0 - 0x001F37E2 (66 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F37A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F37A0: ;
    ecx = MEM32(ecx + 0x14);
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_001F37B3; /* je: equal / zero */

loc_001F37AE: ;
    esi = MEM32(ecx + 8);
    goto loc_001F37B5;

loc_001F37B3: ;
    esi = 0; /* xor self */

loc_001F37B5: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F37DC; /* je: equal / zero */

loc_001F37B9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F37DC; /* je: equal / zero */

loc_001F37BD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F37DC; /* je: equal / zero */

loc_001F37C1: ;
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F37D2; /* je: equal / zero */

loc_001F37C7: ;
    edx = edx + 4;
    eax = eax + ecx;
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F37C7; /* jne: not equal / not zero */

loc_001F37D2: ;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    POP32(esp, esi);
    eax = edx;
    esp += 8; return; /* ret 4 */

loc_001F37DC: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F37F0
 * Original: 0x001F37F0 - 0x001F3825 (53 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F37F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F37F0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x34);
    ecx = MEM32(eax + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    esi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F381F; /* jle: less or equal (signed <=) */

loc_001F3803: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + esi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x001F380Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F380E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F3814; /* jle: less or equal (signed <=) */

loc_001F3812: ;
    edi = eax;

loc_001F3814: ;
    eax = MEM32(ebx + 0x34);
    ecx = MEM32(eax + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F3803; /* jl: less (signed <) */

loc_001F381F: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F3830
 * Original: 0x001F3830 - 0x001F3862 (50 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3830: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x34);
    ecx = MEM32(eax + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F385D; /* jle: less or equal (signed <=) */

loc_001F3840: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);

loc_001F3845: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + esi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x001F3851u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F3851: ;
    eax = MEM32(edi + 0x34);
    ecx = MEM32(eax + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F3845; /* jl: less (signed <) */

loc_001F385C: ;
    POP32(esp, ebx);

loc_001F385D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F3870
 * Original: 0x001F3870 - 0x001F38A2 (50 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3870: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x34);
    ecx = MEM32(eax + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F389D; /* jle: less or equal (signed <=) */

loc_001F3880: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);

loc_001F3885: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + esi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x001F3891u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F3891: ;
    eax = MEM32(edi + 0x34);
    ecx = MEM32(eax + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F3885; /* jl: less (signed <) */

loc_001F389C: ;
    POP32(esp, ebx);

loc_001F389D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F38B0
 * Original: 0x001F38B0 - 0x001F38E2 (50 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F38B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F38B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x34);
    ecx = MEM32(eax + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F38DD; /* jle: less or equal (signed <=) */

loc_001F38C0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);

loc_001F38C5: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + esi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x001F38D1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F38D1: ;
    eax = MEM32(edi + 0x34);
    ecx = MEM32(eax + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F38C5; /* jl: less (signed <) */

loc_001F38DC: ;
    POP32(esp, ebx);

loc_001F38DD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F38F0
 * Original: 0x001F38F0 - 0x001F3922 (50 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F38F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F38F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x34);
    ecx = MEM32(eax + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F391D; /* jle: less or equal (signed <=) */

loc_001F3900: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);

loc_001F3905: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + esi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x001F3911u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F3911: ;
    eax = MEM32(edi + 0x34);
    ecx = MEM32(eax + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F3905; /* jl: less (signed <) */

loc_001F391C: ;
    POP32(esp, ebx);

loc_001F391D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F3930
 * Original: 0x001F3930 - 0x001F3962 (50 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3930: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x34);
    ecx = MEM32(eax + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F395D; /* jle: less or equal (signed <=) */

loc_001F3940: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);

loc_001F3945: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + esi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x001F3951u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F3951: ;
    eax = MEM32(edi + 0x34);
    ecx = MEM32(eax + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F3945; /* jl: less (signed <) */

loc_001F395C: ;
    POP32(esp, ebx);

loc_001F395D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F3970
 * Original: 0x001F3970 - 0x001F39A5 (53 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3970: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x34);
    ecx = MEM32(eax + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F39A0; /* jle: less or equal (signed <=) */

loc_001F3980: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);

loc_001F3985: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + esi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x001F3994u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F3994: ;
    eax = MEM32(edi + 0x34);
    ecx = MEM32(eax + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F3985; /* jl: less (signed <) */

loc_001F399F: ;
    POP32(esp, ebx);

loc_001F39A0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F39B0
 * Original: 0x001F39B0 - 0x001F39F2 (66 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F39B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F39B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x34);
    ecx = MEM32(eax + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F39ED; /* jle: less or equal (signed <=) */

loc_001F39C0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    /* nop */

loc_001F39D0: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + esi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x001F39E0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F39E0: ;
    eax = MEM32(edi + 0x34);
    ecx = MEM32(eax + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F39D0; /* jl: less (signed <) */

loc_001F39EB: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001F39ED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F3A00
 * Original: 0x001F3A00 - 0x001F3A42 (66 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3A00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3A00: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x34);
    ecx = MEM32(eax + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F3A3D; /* jle: less or equal (signed <=) */

loc_001F3A10: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    /* nop */

loc_001F3A20: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + esi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x001F3A30u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F3A30: ;
    eax = MEM32(edi + 0x34);
    ecx = MEM32(eax + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F3A20; /* jl: less (signed <) */

loc_001F3A3B: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001F3A3D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F3A50
 * Original: 0x001F3A50 - 0x001F3A92 (66 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3A50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3A50: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x34);
    ecx = MEM32(eax + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F3A8D; /* jle: less or equal (signed <=) */

loc_001F3A60: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    /* nop */

loc_001F3A70: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + esi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x001F3A80u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F3A80: ;
    eax = MEM32(edi + 0x34);
    ecx = MEM32(eax + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F3A70; /* jl: less (signed <) */

loc_001F3A8B: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001F3A8D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F3AA0
 * Original: 0x001F3AA0 - 0x001F3AE2 (66 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3AA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3AA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x34);
    ecx = MEM32(eax + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F3ADD; /* jle: less or equal (signed <=) */

loc_001F3AB0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    /* nop */

loc_001F3AC0: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + esi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + 0x98); PUSH32(esp, 0x001F3AD0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F3AD0: ;
    eax = MEM32(edi + 0x34);
    ecx = MEM32(eax + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F3AC0; /* jl: less (signed <) */

loc_001F3ADB: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001F3ADD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F3AF0
 * Original: 0x001F3AF0 - 0x001F3B2E (62 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3AF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3AF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x34);
    ebx = MEM32(eax + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001F3B28; /* jbe: below or equal (unsigned <=) */

loc_001F3B01: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);

loc_001F3B06: ;
    ecx = MEM32(edi + 0x34);
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(edx + esi * 4);
    edx = MEM32(esp + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x001F3B22u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F3B22: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F3B06; /* jb: below (unsigned <) */

loc_001F3B27: ;
    POP32(esp, ebp);

loc_001F3B28: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F3B30
 * Original: 0x001F3B30 - 0x001F3B77 (71 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3B30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3B30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x34);
    ecx = MEM32(eax + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F3B72; /* jle: less or equal (signed <=) */

loc_001F3B40: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    /* nop */

loc_001F3B50: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + esi * 4);
    eax = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x001F3B65u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F3B65: ;
    eax = MEM32(edi + 0x34);
    ecx = MEM32(eax + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F3B50; /* jl: less (signed <) */

loc_001F3B70: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001F3B72: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F3B80
 * Original: 0x001F3B80 - 0x001F3BCA (74 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3B80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3B80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x34);
    ecx = MEM32(eax + 8);
    ebx = 0; /* xor self */
    esi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F3BC2; /* jle: less or equal (signed <=) */

loc_001F3B93: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    goto loc_001F3BA0;

    /* nop */

loc_001F3BA0: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + esi * 4);
    eax = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xA4); PUSH32(esp, 0x001F3BB4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F3BB4: ;
    ebx = ebx + eax;
    eax = MEM32(edi + 0x34);
    ecx = MEM32(eax + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F3BA0; /* jl: less (signed <) */

loc_001F3BC1: ;
    POP32(esp, ebp);

loc_001F3BC2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F3BD0
 * Original: 0x001F3BD0 - 0x001F3C22 (82 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3BD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3BD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x34);
    ecx = MEM32(eax + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F3C0F; /* jle: less or equal (signed <=) */

loc_001F3BE2: ;
    ebx = MEM32(esp + 0x18);
    ebp = MEM32(esp + 0x14);
    /* nop */

loc_001F3BF0: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + esi * 4);
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x001F3C00u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F3C00: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F3C18; /* jne: not equal / not zero */

loc_001F3C04: ;
    eax = MEM32(edi + 0x34);
    ecx = MEM32(eax + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F3BF0; /* jl: less (signed <) */

loc_001F3C0F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001F3C18: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F3C30
 * Original: 0x001F3C30 - 0x001F3C81 (81 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3C30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3C30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x34);
    ecx = MEM32(eax + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F3C6F; /* jle: less or equal (signed <=) */

loc_001F3C42: ;
    ebx = MEM32(esp + 0x18);
    ebp = MEM32(esp + 0x14);
    /* nop */

loc_001F3C50: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + esi * 4);
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x001F3C60u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F3C60: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F3C78; /* je: equal / zero */

loc_001F3C64: ;
    eax = MEM32(edi + 0x34);
    ecx = MEM32(eax + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F3C50; /* jl: less (signed <) */

loc_001F3C6F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001F3C78: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F3C90
 * Original: 0x001F3C90 - 0x001F3CE1 (81 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3C90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3C90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x34);
    ecx = MEM32(eax + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F3CCF; /* jle: less or equal (signed <=) */

loc_001F3CA2: ;
    ebx = MEM32(esp + 0x18);
    ebp = MEM32(esp + 0x14);
    /* nop */

loc_001F3CB0: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + esi * 4);
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xB0); PUSH32(esp, 0x001F3CC0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F3CC0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F3CD8; /* je: equal / zero */

loc_001F3CC4: ;
    eax = MEM32(edi + 0x34);
    ecx = MEM32(eax + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F3CB0; /* jl: less (signed <) */

loc_001F3CCF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001F3CD8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F3CF0
 * Original: 0x001F3CF0 - 0x001F3D41 (81 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3CF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3CF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x34);
    ecx = MEM32(eax + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F3D2F; /* jle: less or equal (signed <=) */

loc_001F3D02: ;
    ebx = MEM32(esp + 0x18);
    ebp = MEM32(esp + 0x14);
    /* nop */

loc_001F3D10: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + esi * 4);
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x001F3D20u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F3D20: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F3D38; /* je: equal / zero */

loc_001F3D24: ;
    eax = MEM32(edi + 0x34);
    ecx = MEM32(eax + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F3D10; /* jl: less (signed <) */

loc_001F3D2F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001F3D38: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F3D50
 * Original: 0x001F3D50 - 0x001F3DA1 (81 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3D50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3D50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x34);
    ecx = MEM32(eax + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F3D8F; /* jle: less or equal (signed <=) */

loc_001F3D62: ;
    ebx = MEM32(esp + 0x18);
    ebp = MEM32(esp + 0x14);
    /* nop */

loc_001F3D70: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + esi * 4);
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xB8); PUSH32(esp, 0x001F3D80u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F3D80: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F3D98; /* je: equal / zero */

loc_001F3D84: ;
    eax = MEM32(edi + 0x34);
    ecx = MEM32(eax + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F3D70; /* jl: less (signed <) */

loc_001F3D8F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001F3D98: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F3DB0
 * Original: 0x001F3DB0 - 0x001F3DED (61 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3DB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3DB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x34);
    ecx = MEM32(eax + 8);
    ebx = 0; /* xor self */
    esi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F3DE5; /* jle: less or equal (signed <=) */

loc_001F3DC3: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);

loc_001F3DC8: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + esi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x001F3DD7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F3DD7: ;
    ebx = ebx + eax;
    eax = MEM32(edi + 0x34);
    ecx = MEM32(eax + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F3DC8; /* jl: less (signed <) */

loc_001F3DE4: ;
    POP32(esp, ebp);

loc_001F3DE5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F3DF0
 * Original: 0x001F3DF0 - 0x001F3E5F (111 bytes, 46 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3DF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3DF0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebx + 0x34);
    ecx = MEM32(ecx + 8);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    esi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ebx + 8);
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = ecx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F3E56; /* jle: less or equal (signed <=) */

loc_001F3E11: ;
    PUSH32(esp, ebp);

loc_001F3E12: ;
    edx = MEM32(ebx + 0x34);
    eax = MEM32(edx + 0x10);
    ecx = MEM32(eax + esi * 4);
    ebp = MEM32(esp + 0x28);
    eax = MEM32(ecx + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);
    PUSH32(esp, ebp);
    ebp = eax;
    ebp = ebp - edi;
    ebp = ebp + MEM32(esp + 0x28);
    eax = eax - edi;
    PUSH32(esp, ebp);
    eax = eax + MEM32(esp + 0x28);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC0); PUSH32(esp, 0x001F3E40u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F3E40: ;
    edx = MEM32(esp + 0x10);
    edx = edx + eax;
    eax = MEM32(esp + 0x14);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_001F3E12; /* jl: less (signed <) */

loc_001F3E53: ;
    eax = edx;
    POP32(esp, ebp);

loc_001F3E56: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001F3E60
 * Original: 0x001F3E60 - 0x001F3ECF (111 bytes, 46 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3E60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3E60: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebx + 0x34);
    ecx = MEM32(ecx + 8);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    esi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ebx + 8);
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = ecx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F3EC6; /* jle: less or equal (signed <=) */

loc_001F3E81: ;
    PUSH32(esp, ebp);

loc_001F3E82: ;
    edx = MEM32(ebx + 0x34);
    eax = MEM32(edx + 0x10);
    ecx = MEM32(eax + esi * 4);
    ebp = MEM32(esp + 0x28);
    eax = MEM32(ecx + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);
    PUSH32(esp, ebp);
    ebp = eax;
    ebp = ebp - edi;
    ebp = ebp + MEM32(esp + 0x28);
    eax = eax - edi;
    PUSH32(esp, ebp);
    eax = eax + MEM32(esp + 0x28);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC4); PUSH32(esp, 0x001F3EB0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F3EB0: ;
    edx = MEM32(esp + 0x10);
    edx = edx + eax;
    eax = MEM32(esp + 0x14);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_001F3E82; /* jl: less (signed <) */

loc_001F3EC3: ;
    eax = edx;
    POP32(esp, ebp);

loc_001F3EC6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001F3ED0
 * Original: 0x001F3ED0 - 0x001F3F31 (97 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3ED0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3ED0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x001F3EDFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F3EDF: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    edi = MEM32(eax + 0x34);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F3F2B; /* jle: less or equal (signed <=) */

loc_001F3EEA: ;
    eax = MEM32(edi + 8);
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, esi);

loc_001F3EF2: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F3F1E; /* jle: less or equal (signed <=) */

loc_001F3EF8: ;
    goto loc_001F3F00;

    /* nop */

loc_001F3F00: ;
    ecx = MEM32(edi + 0x10);
    ecx = MEM32(ecx + esi * 4);
    eax = MEM32(ecx + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = eax + ebx;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x001F3F16u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F3F16: ;
    eax = MEM32(edi + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F3F00; /* jl: less (signed <) */

loc_001F3F1E: ;
    ecx = ZX16(MEM16(ebp + 0x14));
    ebx = ebx + ecx;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001F3EF2; /* jne: not equal / not zero */

loc_001F3F2A: ;
    POP32(esp, esi);

loc_001F3F2B: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F3F40
 * Original: 0x001F3F40 - 0x001F3F75 (53 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3F40: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x34);
    ecx = MEM32(eax + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F3F70; /* jle: less or equal (signed <=) */

loc_001F3F50: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);

loc_001F3F55: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + esi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x001F3F64u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F3F64: ;
    eax = MEM32(edi + 0x34);
    ecx = MEM32(eax + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F3F55; /* jl: less (signed <) */

loc_001F3F6F: ;
    POP32(esp, ebx);

loc_001F3F70: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F3F80
 * Original: 0x001F3F80 - 0x001F400B (139 bytes, 54 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3F80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3F80: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3EEEC8);
    PUSH32(esp, ebx);
    esi = ecx;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x001F3FA2u); RECOMP_ABI_CALL(0x003415CFu, sub_003415CF); /* call 0x003415CF */

loc_001F3FA2: ;
    edx = MEM32(esi);
    esp = esp + 0xC;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x001F3FACu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F3FAC: ;
    edi = MEM32(eax + 0x34);
    eax = MEM32(edi + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F3FE7; /* jle: less or equal (signed <=) */

loc_001F3FB8: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    /* nop */

loc_001F3FC0: ;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(eax + esi * 4);
    eax = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    eax = eax + ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 8);
    eax = eax + MEM32(esp + 0x20);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xD8); PUSH32(esp, 0x001F3FDEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F3FDE: ;
    eax = MEM32(edi + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F3FC0; /* jl: less (signed <) */

loc_001F3FE6: ;
    POP32(esp, ebp);

loc_001F3FE7: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3EEEC4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001F3FF7u); RECOMP_ABI_CALL(0x003415CFu, sub_003415CF); /* call 0x003415CF */

loc_001F3FF7: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x24);
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax + edx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F4010
 * Original: 0x001F4010 - 0x001F4061 (81 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F4010: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(eax + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F404A; /* jle: less or equal (signed <=) */

loc_001F4021: ;
    ebx = MEM32(esp + 0x10);

loc_001F4025: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + esi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x001F4030u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F4030: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F403F; /* je: equal / zero */

loc_001F4034: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4052; /* je: equal / zero */

loc_001F4038: ;
    eax = MEM32(eax + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F4034; /* jne: not equal / not zero */

loc_001F403F: ;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(eax + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F4025; /* jl: less (signed <) */

loc_001F404A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001F4052: ;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx + esi * 4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F4070
 * Original: 0x001F4070 - 0x001F40C4 (84 bytes, 40 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4070(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F4070: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x1C);
    ecx = MEM32(eax + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F40B2; /* jle: less or equal (signed <=) */

loc_001F4082: ;
    ebp = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x14);
    /* nop */

loc_001F4090: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + esi * 4);
    _fa = (uint32_t)(MEM8(ecx + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x10), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F40A7; /* jne: not equal / not zero */

loc_001F409C: ;
    edx = MEM32(ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x001F40A3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F40A3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F40BB; /* je: equal / zero */

loc_001F40A7: ;
    eax = MEM32(edi + 0x1C);
    ecx = MEM32(eax + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F4090; /* jl: less (signed <) */

loc_001F40B2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001F40BB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F40D0
 * Original: 0x001F40D0 - 0x001F411A (74 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F40D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F40D0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(0x5BB964);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F40E2u); RECOMP_ABI_CALL(0x001EAC30u, sub_001EAC30); /* call 0x001EAC30 */

loc_001F40E2: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F40EC; /* jne: not equal / not zero */

loc_001F40E8: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001F40EC: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(0x5BC25C);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001F40FAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F40FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F410B; /* je: equal / zero */

loc_001F40FE: ;
    edi = edi;

loc_001F4100: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4112; /* je: equal / zero */

loc_001F4104: ;
    eax = MEM32(eax + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F4100; /* jne: not equal / not zero */

loc_001F410B: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001F4112: ;
    eax = MEM32(esi + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F4120
 * Original: 0x001F4120 - 0x001F4172 (82 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F4120: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F4139; /* jne: not equal / not zero */

loc_001F412D: ;
    eax = MEM32(esi + 0x34);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x34) = eax;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_001F4139: ;
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x001F4146u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F4146: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x5BC5D8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x5BC5D8) (32-bit) */
    edi = MEM32(esi + 0x34);
    if (CMP_NE(_fa, _fb)) goto loc_001F416A; /* jne: not equal / not zero */

loc_001F4155: ;
    ecx = MEM32(esi + 0x44);
    eax = edi + 1;
    MEM32(esi + 0x34) = eax;
    edx = MEM32(ecx);
    edi = eax;
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x001F416Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F416A: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001F4180
 * Original: 0x001F4180 - 0x001F41BE (62 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F4180: ;
    edx = MEM32(ecx + 0x50);
    eax = esp + 8;
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x10);
    eax = eax + MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F4195u); RECOMP_ABI_CALL(0x001E8230u, sub_001E8230); /* call 0x001E8230 */

loc_001F4195: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_L(_fas, _fbs)) goto loc_001F41B3; /* jl: less (signed <) */

loc_001F41A8: ;
    edx = MEM32(0x46A728);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

loc_001F41B3: ;
    ecx = MEM32(0x5BC5D8);
    MEM32(eax) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F41C0
 * Original: 0x001F41C0 - 0x001F4230 (112 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F41C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F41C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x50);
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(esp + 0xC);
    eax = esp + 0xC;
    edx = edx + ecx;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001F41DCu); RECOMP_ABI_CALL(0x001E8230u, sub_001E8230); /* call 0x001E8230 */

loc_001F41DC: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0x20 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F4220; /* jge: greater or equal (signed >=) */

loc_001F41E3: ;
    edx = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x46A018)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(0x46A018) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001F4220; /* jg: greater (signed >) */

loc_001F41EE: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001F41FCu); RECOMP_ABI_CALL(0x001E8230u, sub_001E8230); /* call 0x001E8230 */

loc_001F41FC: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F4220; /* je: equal / zero */

loc_001F4203: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001F4210u); RECOMP_ABI_CALL(0x001E81B0u, sub_001E81B0); /* call 0x001E81B0 */

loc_001F4210: ;
    eax = MEM32(esp + 8);
    edx = MEM32(0x5BC5D8);
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_001F4220: ;
    ecx = MEM32(0x46A728);
    eax = MEM32(esp + 8);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F4230
 * Original: 0x001F4230 - 0x001F42BD (141 bytes, 49 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F4230: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x50);
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(esp + 0xC);
    eax = esp + 0xC;
    edx = edx + ecx;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001F424Cu); RECOMP_ABI_CALL(0x001E8230u, sub_001E8230); /* call 0x001E8230 */

loc_001F424C: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0x20 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F425E; /* jge: greater or equal (signed >=) */

loc_001F4253: ;
    edx = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x46A018)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(0x46A018) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F426E; /* jle: less or equal (signed <=) */

loc_001F425E: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x46A728);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_001F426E: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001F427Cu); RECOMP_ABI_CALL(0x001E8230u, sub_001E8230); /* call 0x001E8230 */

loc_001F427C: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F42AD; /* je: equal / zero */

loc_001F4283: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001F4295u); RECOMP_ABI_CALL(0x001E81B0u, sub_001E81B0); /* call 0x001E81B0 */

loc_001F4295: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001F429Du); RECOMP_ABI_CALL(0x001E8230u, sub_001E8230); /* call 0x001E8230 */

loc_001F429D: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BC5D8);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_001F42AD: ;
    eax = MEM32(esp + 8);
    edx = MEM32(0x46A728);
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F42C0
 * Original: 0x001F42C0 - 0x001F42F8 (56 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F42C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F42C0: ;
    eax = MEM32(ecx + 0x50);
    edx = MEM32(eax + 8);
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F42D4; /* jle: less or equal (signed <=) */

loc_001F42CE: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 8; return; /* ret 4 */

loc_001F42D4: ;
    eax = MEM32(eax + 0x10);
    eax = eax + ecx;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x20 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001F42F2; /* jae: above or equal (unsigned >=) */

loc_001F42DE: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 1);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x46A018)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x46A018) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001F42F2; /* jg: greater (signed >) */

loc_001F42EA: ;
    eax = ecx + eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F42F5; /* jl: less (signed <) */

loc_001F42F2: ;
    eax = eax | 0xFFFFFFFFu;

loc_001F42F5: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F4300
 * Original: 0x001F4300 - 0x001F431C (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001F4300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F4300: ;
    eax = MEM32(ecx + 0x54);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F4317; /* je: equal / zero */

loc_001F430A: ;
    eax = MEM32(esp + 4);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = edx;
    esp += 8; return; /* ret 4 */

loc_001F4317: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F4320
 * Original: 0x001F4320 - 0x001F43B7 (151 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4320(void)
{

loc_001F4320: ;
    esp = esp - 0x210;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x220);
    esi = ecx;
    eax = MEM32(esi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFF);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFF);
    edx = esp + 0x12C;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x98); PUSH32(esp, 0x001F4362u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F4362: ;
    eax = MEM32(esp + 0x22C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x22C);
    ecx = MEM32(esi + 0x5C);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x22C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    eax = esp + 0x130;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x001F439Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F439F: ;
    eax = MEM32(esp + 0x21C);
    ecx = MEM32(esp + 8);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp = esp + 0x210;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001F43C0
 * Original: 0x001F43C0 - 0x001F44BE (254 bytes, 102 insns)
 * Category: game_vtable
 * CC: thiscall, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F43C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F43C0: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x4C);
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001F4472; /* je: equal / zero */

loc_001F43D7: ;
    edi = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x30);
    ebx = MEM32(esp + 0x2C);
    ebp = MEM32(esp + 0x28);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x001F4406u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F4406: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x46A728)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0x46A728) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F446A; /* jne: not equal / not zero */

loc_001F4410: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(edx + 0x5C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x001F441Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F441C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F446A; /* je: equal / zero */

loc_001F4420: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x10);
    ecx = MEM32(ecx + 0x5C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x001F4448u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F4448: ;
    esi = MEM32(eax);
    eax = MEM32(edi);
    ecx = MEM32(esp + 0x10);
    ecx = MEM32(ecx + 0x4C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x001F4468u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F4468: ;
    goto loc_001F44A4;

loc_001F446A: ;
    MEM32(0x5BBD50) = MEM32(0x5BBD50) + 1;
    _fa = (uint32_t)(MEM32(0x5BBD50)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001F44AA;

loc_001F4472: ;
    eax = MEM32(esp + 0x34);
    ecx = MEM32(ecx + 0x5C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x34);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x001F44A2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F44A2: ;
    esi = MEM32(eax);

loc_001F44A4: ;
    MEM32(0x5BB8E4) = MEM32(0x5BB8E4) + 1;
    _fa = (uint32_t)(MEM32(0x5BB8E4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001F44AA: ;
    MEM32(0x5BBEF0) = MEM32(0x5BBEF0) + 1;
    _fa = (uint32_t)(MEM32(0x5BBEF0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    MEM32(eax) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 36; return; /* ret 32 */

}

/**
 * sub_001F44C0
 * Original: 0x001F44C0 - 0x001F4582 (194 bytes, 77 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F44C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F44C0: ;
    esp = esp - 0x20C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x48);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x001F44D4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F44D4: ;
    ecx = MEM32(esi + 0x48);
    ebp = eax;
    eax = MEM32(esi + 0xC);
    ebx = eax;
    edx = 0; /* xor self */
    eax = eax | 2;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x10) = edx;
    MEM32(esi + 0xC) = eax;
    eax = MEM32(ecx);
    ebx = ebx >> 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    SET_LO8(ebx, LO8(ebx) & 1);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x001F44F9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F44F9: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F4577; /* je: equal / zero */

loc_001F44FF: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F4551; /* jle: less or equal (signed <=) */

loc_001F4503: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F454B; /* je: equal / zero */

loc_001F4509: ;
    /* nop */

loc_001F4510: ;
    edx = MEM32(esi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFF);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFF);
    ecx = esp + 0x130;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x98); PUSH32(esp, 0x001F4541u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F4541: ;
    eax = MEM32(edi + 4);
    edi = edi + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F4510; /* jne: not equal / not zero */

loc_001F454B: ;
    edi = edi + 4;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001F4503; /* jne: not equal / not zero */

loc_001F4551: ;
    edx = MEM32(esi + 0xC);
    edx = edx | 4;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    MEM32(esi + 0xC) = edx;
    eax = edx;
    if (TEST_Z(_fa, _fb)) goto loc_001F4571; /* je: equal / zero */

loc_001F4560: ;
    POP32(esp, edi);
    eax = eax | 2;
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x20C;
    esp += 4; return; /* ret */

loc_001F4571: ;
    eax = eax & 0xFFFFFFFDu;
    MEM32(esi + 0xC) = eax;

loc_001F4577: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x20C;
    esp += 4; return; /* ret */

}

/**
 * sub_001F4590
 * Original: 0x001F4590 - 0x001F4598 (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4590(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F4590: ;
    ecx = MEM32(ecx + 0x5C);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x6C)); return; /* indirect tail jmp */

}

/**
 * sub_001F45A0
 * Original: 0x001F45A0 - 0x001F45A8 (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F45A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F45A0: ;
    ecx = MEM32(ecx + 0x5C);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x70)); return; /* indirect tail jmp */

}

/**
 * sub_001F45B0
 * Original: 0x001F45B0 - 0x001F45B8 (8 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F45B0(void)
{

loc_001F45B0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x001F45B7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F45B7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F45C0
 * Original: 0x001F45C0 - 0x001F4612 (82 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F45C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F45C0: ;
    PUSH32(esp, 0x001F45C5u); RECOMP_ABI_CALL(0x001E9C50u, sub_001E9C50); /* call 0x001E9C50 */

loc_001F45C5: ;
    SET_LO8(ecx, MEM8(0x5BC548));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F4602; /* jne: not equal / not zero */

loc_001F45CF: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F45E8; /* jle: less or equal (signed <=) */

loc_001F45D8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F45E6; /* jge: greater or equal (signed >=) */

loc_001F45DD: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_001F45F6;

loc_001F45E6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_001F45E8: ;
    if (TEST_NZ(_fa, _fb)) goto loc_001F45F4; /* jne: not equal / not zero */

loc_001F45EA: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F45F6; /* jne: not equal / not zero */

loc_001F45F4: ;
    ecx = 0; /* xor self */

loc_001F45F6: ;
    edx = MEM32(0x46A694);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x001F4602u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F4602: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x001F4611u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F4611: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F4620
 * Original: 0x001F4620 - 0x001F4757 (311 bytes, 112 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4620(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F4620: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = esi;
    MEM32(esi + 0x12C) = 8;
    edi = 0; /* xor self */

loc_001F4637: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F4650; /* jle: less or equal (signed <=) */

loc_001F4640: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F464E; /* jge: greater or equal (signed >=) */

loc_001F4645: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_001F465E;

loc_001F464E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_001F4650: ;
    if (TEST_NZ(_fa, _fb)) goto loc_001F465C; /* jne: not equal / not zero */

loc_001F4652: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F465E; /* jne: not equal / not zero */

loc_001F465C: ;
    ecx = 0; /* xor self */

loc_001F465E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x001F4664u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F4664: ;
    edx = eax + 1;

loc_001F4667: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F4667; /* jne: not equal / not zero */

loc_001F466E: ;
    ebx = MEM32(esi + 0x12C);
    eax = eax - edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + eax;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x2F (32-bit) */
    MEM32(esi + 0x12C) = ebx;
    eax = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_001F4637; /* jl: less (signed <) */

loc_001F4687: ;
    ecx = MEM32(esi + 0x11C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x001F4696u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F4696: ;
    MEM32(esi + 0x130) = eax;
    ebx = eax;
    eax = MEM32(esi + 0x12C);
    MEM32(ebx) = eax;
    ebx = ebx + 4;
    MEM32(ebx) = 0x2F;
    ebx = ebx + 4;
    ebp = 0; /* xor self */

loc_001F46B4: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F46CD; /* jle: less or equal (signed <=) */

loc_001F46BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F46CB; /* jge: greater or equal (signed >=) */

loc_001F46C2: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_001F46DB;

loc_001F46CB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_001F46CD: ;
    if (TEST_NZ(_fa, _fb)) goto loc_001F46D9; /* jne: not equal / not zero */

loc_001F46CF: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F46DB; /* jne: not equal / not zero */

loc_001F46D9: ;
    ecx = 0; /* xor self */

loc_001F46DB: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x001F46E1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F46E1: ;
    esi = eax;
    ecx = esi;
    edx = ecx + 1;

loc_001F46E8: ;
    SET_LO8(eax, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F46E8; /* jne: not equal / not zero */

loc_001F46EF: ;
    ecx = ecx - edx;
    edx = ecx + 1;
    ecx = edx;
    eax = ecx;
    ecx = ecx >> 2;
    edi = ebx;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    ebx = ebx + edx;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x2F (32-bit) */
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    if (CMP_L(_fas, _fbs)) goto loc_001F46B4; /* jl: less (signed <) */

loc_001F470E: ;
    eax = MEM32(esp + 0x10);
    SET_LO8(ecx, MEM8(eax + 0xA8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_001F4747; /* je: equal / zero */

loc_001F4720: ;
    ecx = MEM32(eax + 0xD0);
    eax = MEM32(eax + 0x130);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x001F4737u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F4737: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BC5D8);
    MEM32(eax) = ecx;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_001F4747: ;
    eax = MEM32(esp + 8);
    edx = MEM32(0x5BC5D8);
    MEM32(eax) = edx;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F4760
 * Original: 0x001F4760 - 0x001F48C5 (357 bytes, 122 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4760(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F4760: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F48AC; /* je: equal / zero */

loc_001F4770: ;
    ebp = MEM32(ebx + 8);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F48AC; /* jle: less or equal (signed <=) */

loc_001F477B: ;
    eax = ebp * 4 + 0xC;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    PUSH32(esp, edi);
    MEM8(esi + 0xD9) = 1;
    MEM32(esi + 0xE8) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F47BF; /* jle: less or equal (signed <=) */

loc_001F4796: ;
    eax = MEM32(ebx + 0x10);
    edx = MEM32(eax + ecx * 4);
    eax = MEM32(edx + 0x14);
    edi = eax + 1;

loc_001F47A2: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F47A2; /* jne: not equal / not zero */

loc_001F47A9: ;
    eax = eax - edi;
    edi = MEM32(esi + 0xE8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + eax;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    MEM32(esi + 0xE8) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_001F4796; /* jl: less (signed <) */

loc_001F47BF: ;
    ecx = MEM32(esi + 0x11C);
    edx = MEM32(esi + 0xE8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xD0); PUSH32(esp, 0x001F47D6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F47D6: ;
    ecx = MEM32(esi + 0xE8);
    MEM32(esi + 0xE4) = eax;
    MEM32(eax) = ecx;
    edx = MEM32(esi + 0xE4);
    MEM32(edx + 4) = 1;
    eax = MEM32(esi + 0xE4);
    MEM32(eax + 8) = ebp;
    edi = MEM32(esi + 0xE4);
    edi = edi + 0xC;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F4832; /* jle: less or equal (signed <=) */

loc_001F4809: ;
    /* nop */

loc_001F4810: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx + 0x10);
    edx = MEM32(eax + ecx * 4);
    eax = MEM32(edx + 0x14);
    ebx = eax + 1;
    /* nop */

loc_001F4820: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F4820; /* jne: not equal / not zero */

loc_001F4827: ;
    eax = eax - ebx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + ecx * 4) = eax;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F4810; /* jl: less (signed <) */

loc_001F4832: ;
    ecx = MEM32(esi + 0xE4);
    eax = ebp * 4 + 0xC;
    ecx = ecx + eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F4876; /* jle: less or equal (signed <=) */

loc_001F4847: ;
    eax = MEM32(esi + 0x18);
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + ebx * 4);
    edx = MEM32(eax + 0x14);
    edi = ecx;

loc_001F4855: ;
    SET_LO8(eax, MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edi) = LO8(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F4855; /* jne: not equal / not zero */

loc_001F485F: ;
    eax = ecx;
    edi = eax + 1;

loc_001F4864: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F4864; /* jne: not equal / not zero */

loc_001F486B: ;
    eax = eax - edi;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    ecx = ecx + eax + 1;
    if (CMP_L(_fas, _fbs)) goto loc_001F4847; /* jl: less (signed <) */

loc_001F4876: ;
    SET_LO8(eax, MEM8(esi + 0xA8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_001F489A; /* je: equal / zero */

loc_001F4881: ;
    ecx = MEM32(esi + 0xD0);
    eax = MEM32(esi + 0xE4);
    edx = MEM32(ecx);
    ebp = ebp + 2;
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x001F489Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F489A: ;
    ecx = MEM32(0x5BC5D8);
    eax = MEM32(esp + 0x10);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001F48AC: ;
    eax = MEM32(esp + 0x10);
    MEM8(esi + 0xD9) = 0;
    edx = MEM32(0x5BC5D8);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F48D0
 * Original: 0x001F48D0 - 0x001F49D2 (258 bytes, 79 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F48D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F48D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(esi + 0x11C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x30);
    { uint32_t _icall_target = MEM32(eax + 0xD0); PUSH32(esp, 0x001F48E7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F48E7: ;
    ebx = eax;
    eax = 0; /* xor self */
    ecx = 0xC;
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(esi + 0x7C);
    MEM32(ebx) = ecx;
    edx = MEM32(esi + 0x70);
    MEM32(ebx + 4) = edx;
    eax = MEM32(esi + 0x84);
    MEM32(ebx + 8) = eax;
    ecx = MEM32(esi + 0x80);
    MEM32(ebx + 0xC) = ecx;
    edx = MEM32(esi + 0x94);
    MEM32(ebx + 0x10) = edx;
    eax = MEM32(esi + 0x90);
    MEM32(ebx + 0x14) = eax;
    ecx = MEM32(esi + 0x9C);
    MEM32(ebx + 0x18) = ecx;
    edx = MEM32(esi + 0x98);
    MEM32(ebx + 0x1C) = edx;
    eax = MEM32(esi + 0x8C);
    MEM32(ebx + 0x20) = eax;
    ecx = MEM32(esi + 0x88);
    MEM32(ebx + 0x24) = ecx;
    edx = MEM32(esi + 0x60);
    MEM32(ebx + 0x28) = edx;
    SET_LO8(ecx, MEM8(esi + 0xD8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    eax = MEM32(esi + 0x64);
    if (TEST_Z(_fa, _fb)) goto loc_001F495F; /* je: equal / zero */

loc_001F495A: ;
    eax = eax | 0x80000000u;

loc_001F495F: ;
    SET_LO8(ecx, MEM8(esi + 0xD9));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F496E; /* je: equal / zero */

loc_001F4969: ;
    eax = eax | 0x40000000;

loc_001F496E: ;
    SET_LO8(ecx, MEM8(esi + 0x24));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F497A; /* je: equal / zero */

loc_001F4975: ;
    eax = eax | 0x20000000;

loc_001F497A: ;
    SET_LO8(ecx, MEM8(esi + 0x41));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F4986; /* je: equal / zero */

loc_001F4981: ;
    eax = eax | 0x10000000;

loc_001F4986: ;
    MEM32(ebx + 0x2C) = eax;
    SET_LO8(eax, MEM8(esi + 0xA8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F49A4; /* je: equal / zero */

loc_001F4993: ;
    ecx = MEM32(esi + 0xD0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0xC8); PUSH32(esp, 0x001F49A4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F49A4: ;
    ecx = MEM32(esi + 0x68);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC);
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x001F49B1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F49B1: ;
    ecx = MEM32(esi + 0x11C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0xFC); PUSH32(esp, 0x001F49C0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F49C0: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F49E0
 * Original: 0x001F49E0 - 0x001F4B95 (437 bytes, 147 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F49E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F49E0: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    esi = ecx;
    edx = MEM32(esi + 0x8C);
    ecx = MEM32(esi + 0x68);
    eax = MEM32(ecx);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0xB8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x001F4A01u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F4A01: ;
    edx = MEM32(esi + 0xF4);
    ecx = MEM32(esi + 0x68);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0xF0);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x001F4A1Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F4A1D: ;
    edx = MEM32(esi + 0x84);
    ecx = MEM32(esi + 0x68);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0xAC);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x001F4A39u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F4A39: ;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0xE4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F4A78; /* je: equal / zero */

loc_001F4A47: ;
    edi = MEM32(esi + 0xE8);
    ecx = MEM32(esi + 0x68);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x001F4A59u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F4A59: ;
    ecx = MEM32(esi + 0x11C);
    edx = MEM32(esi + 0xE4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xFC); PUSH32(esp, 0x001F4A6Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F4A6E: ;
    MEM32(esi + 0xE4) = 0;

loc_001F4A78: ;
    SET_LO8(eax, MEM8(esi + 0x41));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    ebp = 1;
    if (TEST_Z(_fa, _fb)) goto loc_001F4A9D; /* je: equal / zero */

loc_001F4A84: ;
    edx = MEM32(esi + 0x12C);
    ecx = MEM32(esi + 0x68);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x130);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x001F4A9Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F4A9B: ;
    ebp = eax;

loc_001F4A9D: ;
    edx = MEM32(esi + 0x7C);
    ecx = MEM32(esi + 0x68);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0xB0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x001F4AB2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F4AB2: ;
    MEM32(esp + 0x10) = eax;
    SET_LO8(eax, MEM8(esi + 0xA8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F4AD4; /* je: equal / zero */

loc_001F4AC0: ;
    ecx = MEM32(esi + 0xD0);
    edx = MEM32(esi + 0x78);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC8); PUSH32(esp, 0x001F4AD4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F4AD4: ;
    edx = MEM32(esi + 0x74);
    ecx = MEM32(esi + 0x68);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x78);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x001F4AE6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F4AE6: ;
    ebx = eax;
    _fa = (uint32_t)(MEM32(esi + 0xE0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xE0), 0xFFFFFFFFu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F4B2F; /* jle: less or equal (signed <=) */

loc_001F4AF1: ;
    SET_LO8(eax, MEM8(esi + 0xA8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F4B17; /* je: equal / zero */

loc_001F4AFB: ;
    edx = MEM32(0x5BBEA4);
    edx = MEM32(edx + 8);
    ecx = MEM32(esi + 0xD0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    edx = edx + esi;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC8); PUSH32(esp, 0x001F4B17u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F4B17: ;
    edx = MEM32(0x5BBEA4);
    edx = MEM32(edx + 8);
    ecx = MEM32(esi + 0x68);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    edx = edx + esi;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x001F4B2Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F4B2F: ;
    edx = MEM32(esi + 0x94);
    ecx = MEM32(esi + 0x68);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0xB4);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x001F4B47u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F4B47: ;
    edi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x80); PUSH32(esp, 0x001F4B53u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F4B53: ;
    esi = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    eax = eax + edi;
    eax = eax + ebx;
    eax = eax + MEM32(esp + 0x10);
    eax = eax + ebp;
    eax = eax + esi;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax + edx;
    POP32(esp, ebp);
    eax = eax + ecx;
    eax = MEM32(esp + 0x18);
    POP32(esp, ebx);
    if ((eax != 0)) goto loc_001F4B87; /* jne: not equal / not zero */

loc_001F4B79: ;
    ecx = MEM32(0x46A728);
    MEM32(eax) = ecx;
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

loc_001F4B87: ;
    edx = MEM32(0x5BC5D8);
    MEM32(eax) = edx;
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F4BA0
 * Original: 0x001F4BA0 - 0x001F4C15 (117 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F4BA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x68);
    ecx = MEM32(esi + 0x11C);
    eax = MEM32(eax + 0xC);
    edx = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xE4); PUSH32(esp, 0x001F4BB9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F4BB9: ;
    ecx = eax;
    MEM32(esi + 0xCC) = eax;
    edi = ecx + 1;

loc_001F4BC4: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F4BC4; /* jne: not equal / not zero */

loc_001F4BCB: ;
    ecx = ecx - edi;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001F4BEA; /* js: sign (negative) */

loc_001F4BD0: ;
    SET_LO8(edx, MEM8(eax + ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x2F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4BE2; /* je: equal / zero */

loc_001F4BD8: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x5C (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4BE2; /* je: equal / zero */

loc_001F4BDD: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001F4BD0; /* jns: not sign (positive) */

loc_001F4BE0: ;
    goto loc_001F4BEA;

loc_001F4BE2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(eax + ecx) = 0;
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001F4C04; /* jge: greater or equal (signed >=) */

loc_001F4BEA: ;
    eax = MEM32(esi + 0xCC);
    MEM8(eax) = 0;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001F4C04: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F4C20
 * Original: 0x001F4C20 - 0x001F4CAE (142 bytes, 56 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F4C20: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebx + 0x108);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x50);
    eax = ecx;
    eax = eax - esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, edi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F4C51; /* jle: less or equal (signed <=) */

loc_001F4C39: ;
    edi = MEM32(ebx + 0x10C);
    ecx = edx;
    eax = ecx;
    ecx = ecx >> 2;
    esi = esi + edi;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */

loc_001F4C51: ;
    eax = MEM32(ebx + 0x108);
    esi = MEM32(ebx + 0x54);
    ecx = MEM32(ebx + 0x58);
    eax = eax - edx;
    edi = esi + eax;
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F4C6E; /* jle: less or equal (signed <=) */

loc_001F4C68: ;
    ecx = ecx - esi;
    ecx = ecx - edx;
    eax = ecx;

loc_001F4C6E: ;
    ecx = MEM32(ebx + 0x68);
    esi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x10C);
    eax = eax + edx;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x64); PUSH32(esp, 0x001F4C82u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F4C82: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    eax = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_001F4C99; /* je: equal / zero */

loc_001F4C8B: ;
    ecx = MEM32(0x46A728);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001F4C99: ;
    MEM32(ebx + 0x50) = 0;
    edx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F4CB0
 * Original: 0x001F4CB0 - 0x001F4CCA (26 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F4CB0: ;
    eax = MEM32(ecx + 0x68);
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F4CC3; /* jne: not equal / not zero */

loc_001F4CB9: ;
    eax = MEM32(ecx + 0x10C);
    eax = eax + MEM32(ecx + 0x50);
    esp += 4; return; /* ret */

loc_001F4CC3: ;
    eax = MEM32(ecx + 0x100);
    esp += 4; return; /* ret */

}

/**
 * sub_001F4CD0
 * Original: 0x001F4CD0 - 0x001F4D02 (50 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4CD0(void)
{

loc_001F4CD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x11C);
    edx = MEM32(esi + 0xCC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xFC); PUSH32(esp, 0x001F4CE8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F4CE8: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 0xCC) = 0;
    ecx = MEM32(0x5BC5D8);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F4D10
 * Original: 0x001F4D10 - 0x001F4DC8 (184 bytes, 56 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4D10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F4D10: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (TEST_Z(_fa, _fb)) goto loc_001F4D4E; /* je: equal / zero */

loc_001F4D22: ;
    _fa = (uint32_t)(MEM32(esi + 0x108)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x108), edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F4D3B; /* jl: less (signed <) */

loc_001F4D2A: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001F4D3B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F4D4E; /* je: equal / zero */

loc_001F4D3F: ;
    ecx = MEM32(esi + 0x11C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x001F4D4Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F4D4E: ;
    eax = MEM32(esi + 0xA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0x108) = eax;
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001F4D6A; /* jge: greater or equal (signed >=) */

loc_001F4D5E: ;
    eax = MEM32(esi + 0x68);
    ecx = MEM32(eax + 0x1C);
    MEM32(esi + 0x108) = ecx;

loc_001F4D6A: ;
    _fa = (uint32_t)(MEM32(esi + 0x108)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x108), edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F4D78; /* jge: greater or equal (signed >=) */

loc_001F4D72: ;
    MEM32(esi + 0x108) = edi;

loc_001F4D78: ;
    eax = MEM32(esi + 0x108);
    edx = MEM32(esi + 0x68);
    ecx = MEM32(esi + 0x11C);
    eax = eax + 3;
    eax = eax & 0xFFFFFFFCu;
    MEM32(esi + 0x108) = eax;
    edx = MEM32(edx + 0x24);
    edi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0xD0); PUSH32(esp, 0x001F4DA0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F4DA0: ;
    MEM32(esi + 0x10C) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    eax = MEM32(esp + 0xC);
    if (TEST_NZ(_fa, _fb)) goto loc_001F4DBB; /* jne: not equal / not zero */

loc_001F4DAE: ;
    ecx = MEM32(0x46A728);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001F4DBB: ;
    edx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F4DD0
 * Original: 0x001F4DD0 - 0x001F4E07 (55 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F4DD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001F4DF5; /* je: equal / zero */

loc_001F4DDC: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001F4DE1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F4DE1: ;
    ecx = MEM32(0x5BB930);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x28);
    PUSH32(esp, 0x001F4DF1u); RECOMP_ABI_CALL(0x001E8800u, sub_001E8800); /* call 0x001E8800 */

loc_001F4DF1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F4DFC; /* jne: not equal / not zero */

loc_001F4DF5: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001F4DFC: ;
    edx = MEM32(eax + 8);
    eax = MEM32(esi + edx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F4E10
 * Original: 0x001F4E10 - 0x001F4E16 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4E10(void)
{

loc_001F4E10: ;
    eax = MEM32(0x5BC300);
    esp += 4; return; /* ret */

}

/**
 * sub_001F4E20
 * Original: 0x001F4E20 - 0x001F4E50 (48 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F4E20: ;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F4E4F; /* je: equal / zero */

loc_001F4E27: ;
    eax = ZX8(MEM8(ecx + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    ecx = MEM32(0x5BC53C);
    if (TEST_NZ(_fa, _fb)) goto loc_001F4E3B; /* jne: not equal / not zero */

loc_001F4E35: ;
    ecx = MEM32(0x5BC538);

loc_001F4E3B: ;
    ecx = MEM32(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = MEM32(ecx + eax * 4);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(esi + 0xFC); PUSH32(esp, 0x001F4E4Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F4E4E: ;
    POP32(esp, esi);

loc_001F4E4F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F4E50
 * Original: 0x001F4E50 - 0x001F4E60 (16 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4E50(void)
{

loc_001F4E50: ;
    eax = MEM32(0x5BC2FC);
    esp += 4; return; /* ret */

}

/**
 * sub_001F4E60
 * Original: 0x001F4E60 - 0x001F4EA3 (67 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F4E60: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F4E79; /* jle: less or equal (signed <=) */

loc_001F4E69: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F4E77; /* jge: greater or equal (signed >=) */

loc_001F4E6E: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_001F4E87;

loc_001F4E77: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_001F4E79: ;
    if (TEST_NZ(_fa, _fb)) goto loc_001F4E85; /* jne: not equal / not zero */

loc_001F4E7B: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F4E87; /* jne: not equal / not zero */

loc_001F4E85: ;
    ecx = 0; /* xor self */

loc_001F4E87: ;
    edx = MEM32(0x46A688);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x001F4E93u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F4E93: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x001F4EA2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F4EA2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F4EB0
 * Original: 0x001F4EB0 - 0x001F4EF3 (67 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F4EB0: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F4EC9; /* jle: less or equal (signed <=) */

loc_001F4EB9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F4EC7; /* jge: greater or equal (signed >=) */

loc_001F4EBE: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_001F4ED7;

loc_001F4EC7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_001F4EC9: ;
    if (TEST_NZ(_fa, _fb)) goto loc_001F4ED5; /* jne: not equal / not zero */

loc_001F4ECB: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F4ED7; /* jne: not equal / not zero */

loc_001F4ED5: ;
    ecx = 0; /* xor self */

loc_001F4ED7: ;
    edx = MEM32(0x46A688);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x001F4EE3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F4EE3: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x001F4EF2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F4EF2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F4F00
 * Original: 0x001F4F00 - 0x001F4F17 (23 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4F00(void)
{

loc_001F4F00: ;
    eax = MEM32(ecx + 0x10);
    ecx = MEM32(eax + 8);
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    esp += 4; return; /* ret */

}

/**
 * sub_001F4F20
 * Original: 0x001F4F20 - 0x001F4F7F (95 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4F20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F4F20: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3A);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001F4F30u); RECOMP_ABI_CALL(0x003426D0u, sub_003426D0); /* call 0x003426D0 */

loc_001F4F30: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F4F6E; /* je: equal / zero */

loc_001F4F37: ;
    eax = eax - ebx;
    ebp = eax;
    eax = MEM32(0x5BC5D4);
    esi = MEM32(eax + 8);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_001F4F6E; /* jg: greater (signed >) */

loc_001F4F48: ;
    goto loc_001F4F50;

    /* nop */

loc_001F4F50: ;
    ecx = MEM32(0x5BC5D4);
    edx = MEM32(ecx + 0x10);
    edi = MEM32(edx + esi * 4);
    eax = MEM32(edi);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x001F4F65u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F4F65: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F4F78; /* jne: not equal / not zero */

loc_001F4F69: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F4F50; /* jle: less or equal (signed <=) */

loc_001F4F6E: ;
    eax = MEM32(0x5BC52C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001F4F78: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F4F80
 * Original: 0x001F4F80 - 0x001F502F (175 bytes, 78 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4F80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F4F80: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    SET_LO8(eax, MEM8(ebx + 0x2D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F4F93; /* jne: not equal / not zero */

loc_001F4F8A: ;
    eax = 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_001F4F93: ;
    _fa = (uint32_t)(MEM8(ebx + 0x2C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x2C), 1 (8-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_001F4FE1; /* jne: not equal / not zero */

loc_001F4F9C: ;
    edi = MEM32(esp + 0x18);
    ecx = MEM32(ebx + 0x40);
    eax = MEM32(ecx);
    edx = edi;
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0x1C));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(ebx + 0x18);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x001F4FB9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F4FB9: ;
    esi = eax;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    ebp = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4FD8; /* je: equal / zero */

loc_001F4FC7: ;
    ecx = MEM32(ebx + 0x40);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = eax - esi;
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x18);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x001F4FD8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F4FD8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_001F4FE1: ;
    esi = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    edi = MEM32(ebx + 0x38);
    ecx = MEM32(ebx + 0x34);
    edx = esi;
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    ebp = edi + edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F5007; /* jle: less or equal (signed <=) */

loc_001F4FFB: ;
    eax = ecx;
    eax = eax - edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);

loc_001F5007: ;
    esi = MEM32(ebx + 0x3C);
    esi = esi + edi;
    edi = MEM32(esp + 0x14);
    ecx = edx;
    ebp = ecx;
    ecx = ecx >> 2;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = ebp;
    ecx = ecx & 3;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    ecx = MEM32(ebx + 0x38);
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = ecx + edx;
    POP32(esp, ebp);
    MEM32(ebx + 0x38) = ecx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F5030
 * Original: 0x001F5030 - 0x001F5088 (88 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5030(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F5030: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x2D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_001F504B; /* jne: not equal / not zero */

loc_001F5041: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(esp + 0x24); PUSH32(esp, 0x001F5048u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F5048: ;
    esp = esp + 8;

loc_001F504B: ;
    _fa = (uint32_t)(MEM8(esi + 0x2C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x2C), 1 (8-bit) */
    edi = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x14);
    if (CMP_NE(_fa, _fb)) goto loc_001F506D; /* jne: not equal / not zero */

loc_001F5059: ;
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(esi + 0x40);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x001F506Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F506D: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x001F5078u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F5078: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(esp + 0x24); PUSH32(esp, 0x001F507Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F507E: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001F5090
 * Original: 0x001F5090 - 0x001F50C9 (57 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F5090: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x2C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F50C5; /* jne: not equal / not zero */

loc_001F509A: ;
    SET_LO8(eax, MEM8(esi + 0x2E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F50C5; /* je: equal / zero */

loc_001F50A1: ;
    ecx = MEM32(esi + 0x40);
    edx = MEM32(esi + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x001F50B1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F50B1: ;
    edx = MEM32(esi + 0x34);
    ecx = MEM32(esi + 0x40);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x3C);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x18);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x001F50C5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F50C5: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F50D0
 * Original: 0x001F50D0 - 0x001F5113 (67 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F50D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F50D0: ;
    PUSH32(esp, ecx);
    eax = ecx;
    SET_LO8(ecx, MEM8(eax + 0x2C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F50F8; /* je: equal / zero */

loc_001F50DA: ;
    ecx = MEM32(eax + 0x40);
    eax = MEM32(eax + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    esi = esp + 8;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x001F50EEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F50EE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_001F5100; /* je: equal / zero */

loc_001F50F3: ;
    eax = MEM32(esp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001F50F8: ;
    ecx = MEM32(eax + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x34) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F5105; /* jl: less (signed <) */

loc_001F5100: ;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001F5105: ;
    edx = MEM32(eax + 0x3C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0x38) = ecx;
    eax = ZX8(MEM8(edx + ecx + -1));
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F5120
 * Original: 0x001F5120 - 0x001F51F3 (211 bytes, 97 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5120(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F5120: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x2C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001F519B; /* je: equal / zero */

loc_001F512A: ;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x94); PUSH32(esp, 0x001F5135u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F5135: ;
    edi = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x14);
    ecx = MEM32(esi + 0x40);
    edx = MEM32(ecx);
    PUSH32(esp, edi);
    ebp = eax;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x001F514Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F514D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001F515A; /* je: equal / zero */

loc_001F5151: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001F515A: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x001F5164u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F5164: ;
    ecx = edi;
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(0));
    ecx = ecx - 0;
    if ((ecx == 0)) goto loc_001F518A; /* je: equal / zero */

loc_001F516B: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001F517B; /* je: equal / zero */

loc_001F516E: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001F5151; /* je: equal / zero */

loc_001F5171: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001F517B: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ebp));
    eax = eax - ebp;
    POP32(esp, edi);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ebx));
    eax = eax - ebx;
    POP32(esp, ebp);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    POP32(esp, ebx);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001F518A: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    esp += 12; return; /* ret 8 */

loc_001F519B: ;
    eax = MEM32(esp + 0xC);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0));
    eax = eax - 0;
    if ((eax == 0)) goto loc_001F51C8; /* je: equal / zero */

loc_001F51A4: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001F51BD; /* je: equal / zero */

loc_001F51A7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001F51B1; /* je: equal / zero */

loc_001F51AA: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001F51B1: ;
    edx = MEM32(esi + 0x34);
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(MEM32(esp + 8))) >> 32) & 1);
    edx = edx + MEM32(esp + 8);
    MEM32(esi + 0x38) = edx;
    goto loc_001F51CF;

loc_001F51BD: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esi + 0x38);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    goto loc_001F51CC;

loc_001F51C8: ;
    ecx = MEM32(esp + 8);

loc_001F51CC: ;
    MEM32(esi + 0x38) = ecx;

loc_001F51CF: ;
    eax = MEM32(esi + 0x38);
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_001F51E2; /* jle: less or equal (signed <=) */

loc_001F51D9: ;
    MEM32(esi + 0x38) = ecx;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001F51E2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001F51ED; /* jge: greater or equal (signed >=) */

loc_001F51E6: ;
    MEM32(esi + 0x38) = 0;

loc_001F51ED: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F5200
 * Original: 0x001F5200 - 0x001F521A (26 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F5200: ;
    eax = ecx;
    SET_LO8(ecx, MEM8(eax + 0x2C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F5216; /* je: equal / zero */

loc_001F5209: ;
    ecx = MEM32(eax + 0x40);
    eax = MEM32(eax + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x001F5215u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F5215: ;
    esp += 4; return; /* ret */

loc_001F5216: ;
    eax = MEM32(eax + 0x38);
    esp += 4; return; /* ret */

}

/**
 * sub_001F5220
 * Original: 0x001F5220 - 0x001F5239 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5220(void)
{

loc_001F5220: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001F5229u); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_001F5229: ;
    edx = MEM32(eax);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x144); PUSH32(esp, 0x001F5237u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F5237: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F5240
 * Original: 0x001F5240 - 0x001F524A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5240(void)
{

loc_001F5240: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F5246u); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_001F5246: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

}

/**
 * sub_001F5250
 * Original: 0x001F5250 - 0x001F52AB (91 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5250(void)
{

loc_001F5250: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001F525Bu); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_001F525B: ;
    edx = MEM32(eax);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x144); PUSH32(esp, 0x001F5269u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F5269: ;
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x001F5271u); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_001F5271: ;
    edx = MEM32(eax);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x001F527Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F527F: ;
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, 0x001F5287u); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_001F5287: ;
    edx = MEM32(eax);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x144); PUSH32(esp, 0x001F5295u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F5295: ;
    ecx = eax;
    ecx = ecx >> 2;
    edi = ebx;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F52B0
 * Original: 0x001F52B0 - 0x001F52D3 (35 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F52B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F52B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F52D1; /* je: equal / zero */

loc_001F52B9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001F52BFu); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_001F52BF: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F52D1; /* je: equal / zero */

loc_001F52C6: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x001F52D1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F52D1: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F52E0
 * Original: 0x001F52E0 - 0x001F5386 (166 bytes, 67 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F52E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F52E0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x10);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(edi + 0x14);
    ecx = MEM32(edx + eax * 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    eax = edx + eax * 8;
    if (CMP_NE(_fa, _fb)) goto loc_001F5315; /* jne: not equal / not zero */

loc_001F52FB: ;
    eax = MEM32(eax + 4);
    ecx = MEM32(esp + 0x14);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 0xC);
    edx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_001F5315: ;
    eax = MEM32(edi);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x001F531Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F531F: ;
    ecx = MEM32(edi + 0x10);
    esi = eax;
    eax = MEM32(ecx + 8);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    edx = MEM32(0x46A728);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(ecx + 0x10);
    ecx = edx + esi * 8;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    ebp = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F535F; /* je: equal / zero */

loc_001F5342: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F5375; /* je: equal / zero */

loc_001F5348: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F5353; /* jl: less (signed <) */

loc_001F534D: ;
    esi = 0; /* xor self */
    ecx = edx;
    goto loc_001F5356;

loc_001F5353: ;
    ecx = ecx + 8;

loc_001F5356: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F5375; /* jge: greater or equal (signed >=) */

loc_001F535B: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F5342; /* jne: not equal / not zero */

loc_001F535F: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(esp + 0x1C);
    MEM32(ecx) = eax;
    edx = MEM32(0x5BC5D8);
    MEM32(esp + 0x18) = edx;
    MEM32(edi + 0x14) = esi;

loc_001F5375: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F5390
 * Original: 0x001F5390 - 0x001F5485 (245 bytes, 100 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5390(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F5390: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    eax = MEM32(eax + 8);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    PUSH32(esp, edi);
    edi = eax;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((1) & 31u));
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    ebp = eax;
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((1) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = ebp;
    if (TEST_Z(_fa, _fb)) goto loc_001F546F; /* je: equal / zero */

loc_001F53C3: ;
    ebx = MEM32(esp + 0x20);
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x001F53CDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F53CD: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(MEM32(edx + eax * 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + eax * 8), ebx (32-bit) */
    ecx = edx + eax * 8;
    if (CMP_EQ(_fa, _fb)) goto loc_001F5405; /* je: equal / zero */

loc_001F53DB: ;
    goto loc_001F53E1;

loc_001F53DD: ;
    ebp = MEM32(esp + 0x14);

loc_001F53E1: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F5422; /* je: equal / zero */

loc_001F53E6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F53F1; /* jl: less (signed <) */

loc_001F53EB: ;
    eax = 0; /* xor self */
    ecx = edx;
    goto loc_001F53F4;

loc_001F53F1: ;
    ecx = ecx + 8;

loc_001F53F4: ;
    ebp = MEM32(esp + 0x10);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    MEM32(esp + 0x10) = ebp;
    if (CMP_GE(_fas, _fbs)) goto loc_001F546F; /* jge: greater or equal (signed >=) */

loc_001F5401: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F53DD; /* jne: not equal / not zero */

loc_001F5405: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 4) = edx;
    ecx = MEM32(0x5BC5D8);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 16; return; /* ret 12 */

loc_001F5422: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x10);
    MEM32(ecx) = ebx;
    MEM32(ecx + 4) = edx;
    ecx = MEM32(esi + 0xC);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esi + 0xC) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001F5459; /* jl: less (signed <) */

loc_001F543A: ;
    eax = MEM32(esi);
    ecx = edi + edi;
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x80); PUSH32(esp, 0x001F544Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F544D: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 16; return; /* ret 12 */

loc_001F5459: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 16; return; /* ret 12 */

loc_001F546F: ;
    ecx = MEM32(0x46A728);
    eax = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F5490
 * Original: 0x001F5490 - 0x001F5540 (176 bytes, 74 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5490(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F5490: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    eax = MEM32(eax + 8);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    PUSH32(esp, edi);
    edi = eax;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((1) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_001F5518; /* je: equal / zero */

loc_001F54B0: ;
    ebp = MEM32(esp + 0x1C);
    edx = MEM32(esi);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x001F54BAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F54BA: ;
    ecx = MEM32(esi + 0x10);
    ebx = MEM32(ecx + 0x10);
    ecx = ebx + eax * 8;

loc_001F54C3: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F54CE; /* jl: less (signed <) */

loc_001F54C8: ;
    eax = 0; /* xor self */
    edx = ebx;
    goto loc_001F54D1;

loc_001F54CE: ;
    edx = ecx + 8;

loc_001F54D1: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F54FE; /* je: equal / zero */

loc_001F54D5: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F552C; /* je: equal / zero */

loc_001F54DB: ;
    ecx = edx;
    edx = MEM32(esp + 0x10);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_001F54C3; /* jl: less (signed <) */

loc_001F54EA: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(0x46A728);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_001F54FE: ;
    MEM32(ecx) = 0;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) - 1;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = MEM32(edx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = eax + 0xFFFFFFFEu;
    MEM32(ecx + 4) = eax;

loc_001F5518: ;
    ecx = MEM32(0x5BC5D8);
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_001F552C: ;
    ecx = MEM32(0x46A728);
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F5540
 * Original: 0x001F5540 - 0x001F5570 (48 bytes, 28 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F5540: ;
    ecx = MEM32(ecx + 0x24);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC214);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001F554Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F554F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F555E; /* je: equal / zero */

loc_001F5553: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F5562; /* je: equal / zero */

loc_001F5557: ;
    eax = MEM32(eax + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F5553; /* jne: not equal / not zero */

loc_001F555E: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001F5562: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F5570
 * Original: 0x001F5570 - 0x001F585A (746 bytes, 241 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5570(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F5570: ;
    esp = esp - 0x34;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x3C);
    eax = MEM32(ebx + 0x104);
    edx = MEM32(ebx + 0x110);
    MEM32(esp + 4) = eax;
    eax = MEM32(ebx + 0x114);
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + 0x24);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(ebx + 0x10C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x1C);
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x30) = ecx;
    ecx = ZX16(MEM16(ebp + 0x14));
    MEM32(esp + 0x24) = edx;
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x108);
    MEM32(esp + 0x38) = ecx;
    ecx = ebp;
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x40) = esi;
    MEM32(esp + 0x3C) = edx;
    edx = MEM32(ebp);
    MEM32(esp + 0x30) = eax;
    eax = MEM32(0x5BC214);
    MEM32(esp + 0x3C) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x001F55E1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F55E1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F55F2; /* je: equal / zero */

loc_001F55E5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x3C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x3C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F5614; /* je: equal / zero */

loc_001F55EB: ;
    eax = MEM32(eax + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F55E5; /* jne: not equal / not zero */

loc_001F55F2: ;
    SET_LO8(eax, MEM8(ebx + 0xA8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F5614; /* je: equal / zero */

loc_001F55FC: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x34);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x18);
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0xC8); PUSH32(esp, 0x001F5614u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F5614: ;
    edx = MEM32(esp + 0x34);
    ecx = MEM32(edx + 0x18);
    eax = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x20) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_001F5718; /* jle: less or equal (signed <=) */

loc_001F5631: ;
    goto loc_001F5640;

loc_001F5633: ;
    esi = MEM32(esp + 0x40);
    goto loc_001F5640;

    /* nop */

loc_001F5640: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x48);
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F5654; /* jge: greater or equal (signed >=) */

loc_001F564E: ;
    MEM32(esp + 0x1C) = esi;
    goto loc_001F565A;

loc_001F5654: ;
    MEM32(esp + 0x1C) = eax;
    esi = eax;

loc_001F565A: ;
    edx = MEM32(0x5BC214);
    eax = MEM32(ebp);
    ecx = ebp;
    MEM32(esp + 0x2C) = edx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001F566Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F566C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F5681; /* je: equal / zero */

loc_001F5670: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x2C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F57E3; /* je: equal / zero */

loc_001F567A: ;
    eax = MEM32(eax + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F5670; /* jne: not equal / not zero */

loc_001F5681: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x10);
    ecx = esi;
    esi = MEM32(esp + 0x20);
    edi = edx + eax;
    edx = ecx;
    ecx = ecx >> 2;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    edi = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x1C);

loc_001F56A8: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x10);
    edx = edx + esi;
    eax = eax + esi;
    MEM32(esp + 0x20) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    eax = MEM32(esp + 0x48);
    eax = eax - esi;
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esp + 0x24);
    edx = edx + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x24) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001F570A; /* jne: not equal / not zero */

loc_001F56D7: ;
    ecx = MEM32(ebx + 0x68);
    eax = MEM32(esp + 0x28);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x001F56E7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F56E7: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ecx = MEM32(esp + 0x18);
    ecx = ecx + eax;
    eax = MEM32(ebx + 0x9C);
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 0x18) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_001F5706; /* jge: greater or equal (signed >=) */

loc_001F5700: ;
    MEM32(esp + 0x14) = eax;
    edi = eax;

loc_001F5706: ;
    MEM32(esp + 0x48) = edi;

loc_001F570A: ;
    ecx = MEM32(esp + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x40) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F5633; /* jl: less (signed <) */

loc_001F5718: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    ecx = MEM32(esp + 0x10);
    if (TEST_Z(_fa, _fb)) goto loc_001F57D9; /* je: equal / zero */

loc_001F5724: ;
    eax = ecx + 3;
    eax = eax & 0xFFFFFFFCu;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    esi = MEM32(esp + 0x48);
    eax = ecx;
    eax = eax - edx;
    esi = esi + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x48) = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_001F5776; /* jge: greater or equal (signed >=) */

loc_001F5743: ;
    ecx = MEM32(ebx + 0x68);
    eax = MEM32(esp + 0x28);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x001F5753u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F5753: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ecx = MEM32(esp + 0x18);
    ecx = ecx + eax;
    eax = MEM32(ebx + 0x9C);
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 0x18) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_001F5772; /* jge: greater or equal (signed >=) */

loc_001F576C: ;
    MEM32(esp + 0x14) = eax;
    edi = eax;

loc_001F5772: ;
    MEM32(esp + 0x48) = edi;

loc_001F5776: ;
    edx = MEM32(ebp);
    esi = MEM32(0x5BC214);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x001F5784u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F5784: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F5793; /* je: equal / zero */

loc_001F5788: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F57B5; /* je: equal / zero */

loc_001F578C: ;
    eax = MEM32(eax + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F5788; /* jne: not equal / not zero */

loc_001F5793: ;
    SET_LO8(eax, MEM8(ebx + 0xA8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F57B5; /* je: equal / zero */

loc_001F579D: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x34);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x18);
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0xC8); PUSH32(esp, 0x001F57B5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F57B5: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x48);
    ecx = MEM32(esp + 0x10);
    MEM32(ebx + 0x110) = edx;
    MEM32(ebx + 0x114) = eax;
    MEM32(ebx + 0x104) = ecx;
    MEM32(ebx + 0x108) = edi;

loc_001F57D9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x34;
    esp += 8; return; /* ret 4 */

loc_001F57E3: ;
    eax = MEM32(esp + 0x3C);
    ecx = MEM32(esp + 0x30);
    ecx = ecx - eax;
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esp + 0x38)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esp + 0x38))); }
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F57FE; /* jge: greater or equal (signed >=) */

loc_001F57F8: ;
    MEM32(esp + 0x2C) = ecx;
    goto loc_001F5804;

loc_001F57FE: ;
    MEM32(esp + 0x2C) = eax;
    ecx = eax;

loc_001F5804: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F5851; /* jle: less or equal (signed <=) */

loc_001F5808: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x10);
    edi = MEM32(esp + 0x20);
    esi = edx + eax;
    MEM32(esp + 0x3C) = ecx;
    goto loc_001F5820;

    /* nop */

loc_001F5820: ;
    edx = MEM32(ebp);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebx + 0xA8));
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0xC0); PUSH32(esp, 0x001F5837u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F5837: ;
    eax = MEM32(esp + 0x38);
    esi = esi + eax;
    edi = edi + eax;
    MEM32(esp + 0x3C) = MEM32(esp + 0x3C) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x3C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001F5820; /* jne: not equal / not zero */

loc_001F5845: ;
    edi = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x2C);

loc_001F5851: ;
    MEM32(esp + 0x3C) = ecx;
    goto loc_001F56A8;

}

/**
 * sub_001F5860
 * Original: 0x001F5860 - 0x001F59A5 (325 bytes, 104 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5860(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F5860: ;
    esp = esp - 0x1C;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = MEM32(ecx + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(ecx + 0x104);
    esi = MEM32(ecx + 0x110);
    ebx = MEM32(ecx + 0x114);
    ebp = MEM32(ecx + 0x108);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x10C);
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x28) = edi;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F595A; /* jle: less or equal (signed <=) */

loc_001F58B7: ;
    goto loc_001F58C0;

loc_001F58B9: ;
    edi = MEM32(esp + 0x28);
    /* nop */

loc_001F58C0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F58F4; /* jne: not equal / not zero */

loc_001F58C4: ;
    eax = MEM32(ecx + 0x9C);
    edx = esi + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F58D5; /* jle: less or equal (signed <=) */

loc_001F58D1: ;
    eax = eax - esi;
    ebp = eax;

loc_001F58D5: ;
    ecx = MEM32(ecx + 0x68);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x001F58E1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F58E1: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)ebp);
    edx = MEM32(esp + 0x14);
    esi = esi + eax;
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x10) = ebp;
    ebx = ebp;

loc_001F58F4: ;
    eax = MEM32(esp + 0x24);
    eax = eax - MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F5902; /* jge: greater or equal (signed >=) */

loc_001F5900: ;
    ebx = eax;

loc_001F5902: ;
    eax = MEM32(esp + 0x14);
    esi = edi + edx;
    edi = MEM32(esp + 0x18);
    ecx = ebx;
    edx = ecx;
    ecx = ecx >> 2;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    eax = eax + ebx;
    ecx = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebp));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebp)); }
    eax = MEM32(esp + 0x1C);
    ecx = ecx & 3;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    esi = MEM32(esp + 0x10);
    edi = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x24);
    esi = esi - ebx;
    eax = eax + ebx;
    edi = edi + ebx;
    MEM32(esp + 0x10) = esi;
    ebx = esi;
    esi = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    ecx = MEM32(esp + 0x30);
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001F58B9; /* jl: less (signed <) */

loc_001F595A: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    edi = edx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F596D; /* jle: less or equal (signed <=) */

loc_001F5960: ;
    eax = edx + 3;
    eax = eax & 0xFFFFFFFCu;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebp));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebp)); }
    MEM32(esp + 0x14) = edx;

loc_001F596D: ;
    eax = edi;
    eax = eax - edx;
    ebx = ebx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F5983; /* jge: greater or equal (signed >=) */

loc_001F5977: ;
    MEM32(esp + 0x10) = 0;
    ebx = MEM32(esp + 0x10);

loc_001F5983: ;
    POP32(esp, edi);
    MEM32(ecx + 0x110) = esi;
    POP32(esp, esi);
    MEM32(ecx + 0x108) = ebp;
    POP32(esp, ebp);
    MEM32(ecx + 0x114) = ebx;
    MEM32(ecx + 0x104) = edx;
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F59B0
 * Original: 0x001F59B0 - 0x001F5ADF (303 bytes, 114 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F59B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F59B0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    if (TEST_S(_fas, _fbs)) goto loc_001F59D8; /* jl: less (signed <) */

loc_001F59C3: ;
    ecx = MEM32(edi + 0xBC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F59D8; /* jge: greater or equal (signed >=) */

loc_001F59CE: ;
    ecx = MEM32(ecx + 0x10);
    esi = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F59E8; /* jne: not equal / not zero */

loc_001F59D8: ;
    MEM8(edi + 0x118) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

loc_001F59E8: ;
    MEM32(ebp + 0x24) = esi;
    edx = MEM32(0x5BC214);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001F59F9u); RECOMP_ABI_CALL(0x001F1980u, sub_001F1980); /* call 0x001F1980 */

loc_001F59F9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F5A20; /* je: equal / zero */

loc_001F59FD: ;
    SET_LO8(eax, MEM8(edi + 0xA8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F5A20; /* je: equal / zero */

loc_001F5A07: ;
    ecx = ZX16(MEM16(esi + 0x14));
    eax = MEM32(ebp + 0x1C);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = MEM32(ebp + 0x18);
    edi = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0xC8); PUSH32(esp, 0x001F5A20u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F5A20: ;
    eax = MEM32(esi);
    edi = MEM32(0x5BC214);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001F5A2Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F5A2D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F5AD6; /* je: equal / zero */

loc_001F5A35: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F5A49; /* je: equal / zero */

loc_001F5A39: ;
    eax = MEM32(eax + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F5A35; /* jne: not equal / not zero */

loc_001F5A40: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

loc_001F5A49: ;
    eax = MEM32(ebp + 0x1C);
    PUSH32(esp, ebx);
    ebx = ZX16(MEM16(esi + 0x14));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    ecx = MEM32(ebp + 0x18);
    edx = MEM32(esi);
    edi = MEM32(0x5BC248);
    MEM32(esp + 0x18) = ecx;
    ecx = esi;
    MEM8(esp + 0x13) = 0;
    MEM32(esp + 0x14) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x001F5A71u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F5A71: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F5A80; /* je: equal / zero */

loc_001F5A75: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F5A87; /* je: equal / zero */

loc_001F5A79: ;
    eax = MEM32(eax + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F5A75; /* jne: not equal / not zero */

loc_001F5A80: ;
    MEM8(esp + 0x12) = 0;
    goto loc_001F5A99;

loc_001F5A87: ;
    SET_LO8(eax, MEM8(esi + 0x3C));
    SET_LO8(ecx, MEM8(ebp + 0x34));
    MEM8(esp + 0x12) = 1;
    MEM8(esp + 0x13) = LO8(eax);
    MEM8(esi + 0x3C) = LO8(ecx);

loc_001F5A99: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F5AC6; /* jle: less or equal (signed <=) */

loc_001F5AA1: ;
    edi = MEM32(esp + 0x18);
    ebp = eax;

loc_001F5AA7: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(esi);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax + 0xA8));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC4); PUSH32(esp, 0x001F5AC1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F5AC1: ;
    edi = edi + ebx;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001F5AA7; /* jne: not equal / not zero */

loc_001F5AC6: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_001F5AD6; /* je: equal / zero */

loc_001F5ACF: ;
    SET_LO8(edx, MEM8(esp + 0xF));
    MEM8(esi + 0x3C) = LO8(edx);

loc_001F5AD6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F5AE0
 * Original: 0x001F5AE0 - 0x001F5B22 (66 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F5AE0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    MEM32(esi) = 0;
    MEM32(edi) = 0;
    ecx = MEM32(0x5BC534);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F5B1F; /* je: equal / zero */

loc_001F5B00: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(0x5BB964);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F5B11u); RECOMP_ABI_CALL(0x001EAC30u, sub_001EAC30); /* call 0x001EAC30 */

loc_001F5B11: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F5B1F; /* je: equal / zero */

loc_001F5B15: ;
    ecx = MEM32(eax + 0xC);
    MEM32(esi) = ecx;
    edx = MEM32(eax + 0x10);
    MEM32(edi) = edx;

loc_001F5B1F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F5B30
 * Original: 0x001F5B30 - 0x001F5BC3 (147 bytes, 49 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5B30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F5B30: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x2C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F5B90; /* jne: not equal / not zero */

loc_001F5B3B: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F5B47; /* jne: not equal / not zero */

loc_001F5B44: ;
    eax = MEM32(esi + 0x14);

loc_001F5B47: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001F5BB2; /* ja: above (unsigned >) */

loc_001F5B4C: ;
    edx = ZX8(MEM8(eax + 0x1F5BCC));
    { uint32_t _jt = MEM32(edx * 4 + 0x1F5BC4); /* switch: 2 entries, 2 targets */
    if (_jt == 0x001F5B5Au) goto loc_001F5B5A;
    if (_jt == 0x001F5BA1u) goto loc_001F5BA1;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001F5B5A: ;
    edx = MEM32(esi + 0xC);
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F5B6Du); RECOMP_ABI_CALL(0x001F5AE0u, sub_001F5AE0); /* call 0x001F5AE0 */

loc_001F5B6D: ;
    eax = MEM32(esp + 0x1C);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F5BB2; /* je: equal / zero */

loc_001F5B78: ;
    edx = MEM32(esp + 4);
    MEM32(esi + 0x38) = 0;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = edx;
    MEM8(esi + 0x2C) = 1;
    MEM32(esi + 0x18) = eax;

loc_001F5B90: ;
    ecx = MEM32(0x5BC5D8);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_001F5BA1: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(0x46A728);
    MEM32(eax) = edx;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_001F5BB2: ;
    ecx = MEM32(0x46A728);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F5BE0
 * Original: 0x001F5BE0 - 0x001F5C15 (53 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F5BE0: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F5BFF; /* jle: less or equal (signed <=) */

loc_001F5BE9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F5BFD; /* jge: greater or equal (signed >=) */

loc_001F5BEE: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x001F5BFCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F5BFC: ;
    esp += 4; return; /* ret */

loc_001F5BFD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_001F5BFF: ;
    if (TEST_NZ(_fa, _fb)) goto loc_001F5C0B; /* jne: not equal / not zero */

loc_001F5C01: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F5C0D; /* jne: not equal / not zero */

loc_001F5C0B: ;
    ecx = 0; /* xor self */

loc_001F5C0D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x001F5C14u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F5C14: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F5C20
 * Original: 0x001F5C20 - 0x001F5C55 (53 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F5C20: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F5C3F; /* jle: less or equal (signed <=) */

loc_001F5C29: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F5C3D; /* jge: greater or equal (signed >=) */

loc_001F5C2E: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x001F5C3Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F5C3C: ;
    esp += 4; return; /* ret */

loc_001F5C3D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_001F5C3F: ;
    if (TEST_NZ(_fa, _fb)) goto loc_001F5C4B; /* jne: not equal / not zero */

loc_001F5C41: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F5C4D; /* jne: not equal / not zero */

loc_001F5C4B: ;
    ecx = 0; /* xor self */

loc_001F5C4D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x001F5C54u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F5C54: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F5C60
 * Original: 0x001F5C60 - 0x001F5C9F (63 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F5C60: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F5C84; /* jle: less or equal (signed <=) */

loc_001F5C69: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F5C82; /* jge: greater or equal (signed >=) */

loc_001F5C6E: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(eax * 4 + 0x5BB700);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x001F5C81u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F5C81: ;
    esp += 4; return; /* ret */

loc_001F5C82: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_001F5C84: ;
    if (TEST_NZ(_fa, _fb)) goto loc_001F5C90; /* jne: not equal / not zero */

loc_001F5C86: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F5C92; /* jne: not equal / not zero */

loc_001F5C90: ;
    ecx = 0; /* xor self */

loc_001F5C92: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x001F5C9Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F5C9E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F5CA0
 * Original: 0x001F5CA0 - 0x001F5CD5 (53 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F5CA0: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F5CBF; /* jle: less or equal (signed <=) */

loc_001F5CA9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F5CBD; /* jge: greater or equal (signed >=) */

loc_001F5CAE: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x001F5CBCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F5CBC: ;
    esp += 4; return; /* ret */

loc_001F5CBD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_001F5CBF: ;
    if (TEST_NZ(_fa, _fb)) goto loc_001F5CCB; /* jne: not equal / not zero */

loc_001F5CC1: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F5CCD; /* jne: not equal / not zero */

loc_001F5CCB: ;
    ecx = 0; /* xor self */

loc_001F5CCD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x001F5CD4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F5CD4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F5CE0
 * Original: 0x001F5CE0 - 0x001F5D59 (121 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F5CE0: ;
    ecx = MEM32(0x5BC540);
    esp = esp - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    if (TEST_Z(_fa, _fb)) goto loc_001F5D42; /* je: equal / zero */

loc_001F5CF2: ;
    eax = MEM32(ecx);
    edx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x001F5D06u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F5D06: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x5BC5D8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x5BC5D8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F5D42; /* jne: not equal / not zero */

loc_001F5D10: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    ecx = MEM32(0x5BC53C);
    if (TEST_NZ(_fa, _fb)) goto loc_001F5D24; /* jne: not equal / not zero */

loc_001F5D1E: ;
    ecx = MEM32(0x5BC538);

loc_001F5D24: ;
    edx = MEM32(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = MEM32(edx + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_001F5D42; /* je: equal / zero */

loc_001F5D31: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(0x5BC5D8);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_001F5D42: ;
    eax = MEM32(esp + 0x10);
    MEM32(esi) = 0;
    edx = MEM32(0x46A728);
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001F5D60
 * Original: 0x001F5D60 - 0x001F5E18 (184 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F5D60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F5D60: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x001F5D6Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F5D6E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F5D7C; /* jne: not equal / not zero */

loc_001F5D72: ;
    ecx = MEM32(0x5BC538);
    ebp = 0; /* xor self */
    goto loc_001F5D87;

loc_001F5D7C: ;
    ecx = MEM32(0x5BC53C);
    ebp = 1;

loc_001F5D87: ;
    eax = MEM32(ecx + 4);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F5DAA; /* jge: greater or equal (signed >=) */

loc_001F5D91: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001F5D97u); RECOMP_ABI_CALL(0x001E9D10u, sub_001E9D10); /* call 0x001E9D10 */

loc_001F5D97: ;
    edx = MEM32(edi);
    eax = ebp + esi * 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x164); PUSH32(esp, 0x001F5DA6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F5DA6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001F5DAA: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F5DE5; /* jle: less or equal (signed <=) */

loc_001F5DB1: ;
    ebx = MEM32(ecx);
    esi = ebx;

loc_001F5DB5: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F5DDE; /* je: equal / zero */

loc_001F5DBA: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F5DB5; /* jl: less (signed <) */

loc_001F5DC2: ;
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0x001F5DCAu); RECOMP_ABI_CALL(0x001E9D10u, sub_001E9D10); /* call 0x001E9D10 */

loc_001F5DCA: ;
    edx = MEM32(edi);
    POP32(esp, ebx);
    eax = ebp + esi * 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x164); PUSH32(esp, 0x001F5DDAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F5DDA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001F5DDE: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    esi = edx;
    if (CMP_NE(_fa, _fb)) goto loc_001F5E01; /* jne: not equal / not zero */

loc_001F5DE5: ;
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0x001F5DEDu); RECOMP_ABI_CALL(0x001E9D10u, sub_001E9D10); /* call 0x001E9D10 */

loc_001F5DED: ;
    edx = MEM32(edi);
    POP32(esp, ebx);
    eax = ebp + esi * 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x164); PUSH32(esp, 0x001F5DFDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F5DFD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001F5E01: ;
    MEM32(ebx + edx * 4) = edi;
    edx = MEM32(edi);
    POP32(esp, ebx);
    eax = ebp + esi * 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x164); PUSH32(esp, 0x001F5E14u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F5E14: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001F5E20
 * Original: 0x001F5E20 - 0x001F5E83 (99 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F5E20: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x001F5E2Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F5E2D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F5E53; /* jne: not equal / not zero */

loc_001F5E31: ;
    ecx = MEM32(0x5BC538);
    edx = MEM32(ecx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F5E80; /* jle: less or equal (signed <=) */

loc_001F5E40: ;
    esi = MEM32(ecx);
    ecx = esi;

loc_001F5E44: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F5E75; /* je: equal / zero */

loc_001F5E48: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F5E44; /* jl: less (signed <) */

loc_001F5E50: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001F5E53: ;
    ecx = MEM32(0x5BC53C);
    edx = MEM32(ecx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F5E80; /* jle: less or equal (signed <=) */

loc_001F5E62: ;
    esi = MEM32(ecx);
    ecx = esi;

loc_001F5E66: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F5E75; /* je: equal / zero */

loc_001F5E6A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F5E66; /* jl: less (signed <) */

loc_001F5E72: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001F5E75: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001F5E80; /* jl: less (signed <) */

loc_001F5E79: ;
    MEM32(esi + eax * 4) = 0;

loc_001F5E80: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F5E90
 * Original: 0x001F5E90 - 0x001F5F0A (122 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F5E90: ;
    eax = MEM32(0x5BC508);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001F5F06; /* je: equal / zero */

loc_001F5E9B: ;
    esi = MEM32(esp + 8);
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x001F5EA6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F5EA6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F5ED3; /* jne: not equal / not zero */

loc_001F5EAA: ;
    ecx = MEM32(0x5BC538);
    edx = MEM32(ecx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F5ECC; /* jle: less or equal (signed <=) */

loc_001F5EB9: ;
    ecx = MEM32(ecx);
    goto loc_001F5EC0;

    /* nop */

loc_001F5EC0: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F5ECF; /* je: equal / zero */

loc_001F5EC4: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F5EC0; /* jl: less (signed <) */

loc_001F5ECC: ;
    eax = eax | 0xFFFFFFFFu;

loc_001F5ECF: ;
    eax = eax + eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001F5ED3: ;
    eax = MEM32(0x5BC508);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F5F06; /* je: equal / zero */

loc_001F5EDD: ;
    ecx = MEM32(0x5BC53C);
    edx = MEM32(ecx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F5EFC; /* jle: less or equal (signed <=) */

loc_001F5EEC: ;
    ecx = MEM32(ecx);
    edi = edi;

loc_001F5EF0: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F5EFF; /* je: equal / zero */

loc_001F5EF4: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F5EF0; /* jl: less (signed <) */

loc_001F5EFC: ;
    eax = eax | 0xFFFFFFFFu;

loc_001F5EFF: ;
    eax = eax + eax;
    eax = eax | 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001F5F06: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F5F10
 * Original: 0x001F5F10 - 0x001F6012 (258 bytes, 79 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5F10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F5F10: ;
    esp = esp - 0x98;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_target = MEM32(eax + 0xC8); PUSH32(esp, 0x001F5F22u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F5F22: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F6005; /* je: equal / zero */

loc_001F5F2C: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F5F47; /* jle: less or equal (signed <=) */

loc_001F5F37: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F5F45; /* jge: greater or equal (signed >=) */

loc_001F5F3C: ;
    edi = MEM32(eax * 4 + 0x5BB700);
    goto loc_001F5F55;

loc_001F5F45: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_001F5F47: ;
    if (TEST_NZ(_fa, _fb)) goto loc_001F5F53; /* jne: not equal / not zero */

loc_001F5F49: ;
    edi = MEM32(0x5BBAB4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F5F55; /* jne: not equal / not zero */

loc_001F5F53: ;
    edi = 0; /* xor self */

loc_001F5F55: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001F5F5Bu); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_001F5F5B: ;
    edx = MEM32(eax);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x144); PUSH32(esp, 0x001F5F69u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F5F69: ;
    ebp = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x001F5F73u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F5F73: ;
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esp + 0x10) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x001F5F81u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F5F81: ;
    edx = ZX16(LO16(eax));
    eax = 0; /* xor self */
    ecx = 0x25;
    edi = esp + 0x14;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0xB0);
    ecx = MEM32(esp + 0xB4);
    MEM32(esp + 0x40) = eax;
    eax = 0; /* xor self */
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x48) = eax;
    eax = MEM32(esp + 0xBC);
    MEM32(esp + 0x5C) = eax;
    eax = MEM32(esp + 0xC0);
    MEM32(esp + 0x4C) = ecx;
    ecx = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x54) = ecx;
    ecx = MEM32(esp + 0xAC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(esp + 0xBC);
    PUSH32(esp, ecx);
    eax = esp + 0x1C;
    MEM32(esp + 0x60) = edx;
    edx = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x20) = 1;
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x2C) = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x100); PUSH32(esp, 0x001F6003u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F6003: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_001F6005: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = esp + 0x98;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001F6020
 * Original: 0x001F6020 - 0x001F6113 (243 bytes, 72 insns)
 * Category: game_vtable
 * CC: thiscall, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6020(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F6020: ;
    esp = esp - 0x94;
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xA0);
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xCC); PUSH32(esp, 0x001F603Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F603C: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F6106; /* je: equal / zero */

loc_001F6046: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F605F; /* jle: less or equal (signed <=) */

loc_001F604F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F605D; /* jge: greater or equal (signed >=) */

loc_001F6054: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_001F606D;

loc_001F605D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_001F605F: ;
    if (TEST_NZ(_fa, _fb)) goto loc_001F606B; /* jne: not equal / not zero */

loc_001F6061: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F606D; /* jne: not equal / not zero */

loc_001F606B: ;
    ecx = 0; /* xor self */

loc_001F606D: ;
    edx = MEM32(ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x001F6075u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F6075: ;
    ebp = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x001F6081u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F6081: ;
    edx = ZX16(LO16(eax));
    eax = 0; /* xor self */
    ecx = 0x25;
    edi = esp + 0x10;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(esp + 0xA8);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esp + 0xB8);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esp + 0xB0);
    MEM32(esp + 0x54) = ecx;
    ecx = MEM32(esp + 0xC0);
    MEM32(esp + 0x3C) = edx;
    edx = MEM32(esp + 0xBC);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esp + 0x5C) = edx;
    edx = MEM32(esp + 0xB0);
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x48) = eax;
    eax = MEM32(esp + 0xB8);
    PUSH32(esp, edx);
    ecx = esp + 0x18;
    MEM32(esp + 0x50) = eax;
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x1C) = 1;
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x5C) = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x100); PUSH32(esp, 0x001F6104u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F6104: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_001F6106: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = esp + 0x94;
    esp += 32; return; /* ret 28 */

}

/**
 * sub_001F6120
 * Original: 0x001F6120 - 0x001F6213 (243 bytes, 72 insns)
 * Category: game_vtable
 * CC: thiscall, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6120(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F6120: ;
    esp = esp - 0x94;
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xA4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xA4);
    eax = MEM32(esi);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xD0); PUSH32(esp, 0x001F6145u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F6145: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F6205; /* je: equal / zero */

loc_001F614F: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F6168; /* jle: less or equal (signed <=) */

loc_001F6158: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F6166; /* jge: greater or equal (signed >=) */

loc_001F615D: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_001F6176;

loc_001F6166: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_001F6168: ;
    if (TEST_NZ(_fa, _fb)) goto loc_001F6174; /* jne: not equal / not zero */

loc_001F616A: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F6176; /* jne: not equal / not zero */

loc_001F6174: ;
    ecx = 0; /* xor self */

loc_001F6176: ;
    edx = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x001F617Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F617D: ;
    edx = eax;
    eax = 0; /* xor self */
    ecx = 0x25;
    edi = esp + 0x10;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0xA8);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esp + 0xB4);
    MEM32(esp + 0x3C) = eax;
    eax = 0; /* xor self */
    ecx = ZX16(LO16(ebp));
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x44) = eax;
    eax = MEM32(esp + 0xBC);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esp + 0xB8);
    MEM32(esp + 0x54) = eax;
    eax = MEM32(esp + 0xC4);
    MEM32(esp + 0x48) = ecx;
    ecx = MEM32(esp + 0xC0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x58) = ecx;
    ecx = MEM32(esp + 0xB0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    MEM32(esp + 0x58) = edx;
    edx = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x1C) = 1;
    MEM32(esp + 0x24) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x100); PUSH32(esp, 0x001F6204u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F6204: ;
    POP32(esp, edi);

loc_001F6205: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp = esp + 0x94;
    esp += 36; return; /* ret 32 */

}

/**
 * sub_001F6220
 * Original: 0x001F6220 - 0x001F6322 (258 bytes, 75 insns)
 * Category: game_vtable
 * CC: thiscall, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6220(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F6220: ;
    esp = esp - 0x98;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xA0);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xAC);
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xD4); PUSH32(esp, 0x001F6245u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F6245: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F6314; /* je: equal / zero */

loc_001F624F: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F6268; /* jle: less or equal (signed <=) */

loc_001F6258: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F6266; /* jge: greater or equal (signed >=) */

loc_001F625D: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_001F6276;

loc_001F6266: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_001F6268: ;
    if (TEST_NZ(_fa, _fb)) goto loc_001F6274; /* jne: not equal / not zero */

loc_001F626A: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F6276; /* jne: not equal / not zero */

loc_001F6274: ;
    ecx = 0; /* xor self */

loc_001F6276: ;
    edx = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x001F627Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F627D: ;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x001F628Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F628B: ;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(esp + 0xB0));
    edx = ZX16(LO16(eax));
    eax = 0; /* xor self */
    ecx = 0x25;
    edi = esp + 0x14;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(esp + 0xB8);
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(esp + 0xC4);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(esp + 0xBC);
    MEM32(esp + 0x5C) = ecx;
    ecx = MEM32(esp + 0xC8);
    MEM32(esp + 0x4C) = edx;
    edx = MEM32(esp + 0x10);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esp + 0x58) = edx;
    edx = MEM32(esp + 0xB8);
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x4C) = eax;
    eax = MEM32(esp + 0xC4);
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    MEM32(esp + 0x60) = eax;
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x20) = 1;
    MEM32(esp + 0x28) = ebp;
    MEM32(esp + 0x2C) = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x100); PUSH32(esp, 0x001F6313u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F6313: ;
    POP32(esp, edi);

loc_001F6314: ;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x98;
    esp += 36; return; /* ret 32 */

}

/**
 * sub_001F6330
 * Original: 0x001F6330 - 0x001F642E (254 bytes, 74 insns)
 * Category: game_vtable
 * CC: thiscall, 9 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6330(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F6330: ;
    edx = MEM32(esp + 8);
    esp = esp - 0x94;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x9C);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xAC);
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xD8); PUSH32(esp, 0x001F635Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F635A: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F6420; /* je: equal / zero */

loc_001F6364: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F637D; /* jle: less or equal (signed <=) */

loc_001F636D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F637B; /* jge: greater or equal (signed >=) */

loc_001F6372: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_001F638B;

loc_001F637B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_001F637D: ;
    if (TEST_NZ(_fa, _fb)) goto loc_001F6389; /* jne: not equal / not zero */

loc_001F637F: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F638B; /* jne: not equal / not zero */

loc_001F6389: ;
    ecx = 0; /* xor self */

loc_001F638B: ;
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x001F6392u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F6392: ;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(esp + 0xAC));
    edx = eax;
    eax = 0; /* xor self */
    ecx = 0x25;
    edi = esp + 0x10;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0xB8);
    ecx = ZX16(MEM16(esp + 0xB0));
    MEM32(esp + 0x3C) = eax;
    eax = 0; /* xor self */
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x44) = eax;
    eax = MEM32(esp + 0xC0);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esp + 0xBC);
    MEM32(esp + 0x54) = eax;
    eax = MEM32(esp + 0xC8);
    MEM32(esp + 0x48) = ecx;
    ecx = MEM32(esp + 0xC4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x58) = ecx;
    ecx = MEM32(esp + 0xB4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    MEM32(esp + 0x58) = edx;
    edx = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x1C) = 1;
    MEM32(esp + 0x24) = ebp;
    MEM32(esp + 0x28) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x100); PUSH32(esp, 0x001F641Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F641F: ;
    POP32(esp, edi);

loc_001F6420: ;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x94;
    esp += 40; return; /* ret 36 */

}

/**
 * sub_001F6430
 * Original: 0x001F6430 - 0x001F6608 (472 bytes, 137 insns)
 * Category: game_vtable
 * CC: thiscall, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6430(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F6430: ;
    esp = esp - 0x98;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xA0);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001F6520; /* je: equal / zero */

loc_001F644B: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F6464; /* jle: less or equal (signed <=) */

loc_001F6454: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F6462; /* jge: greater or equal (signed >=) */

loc_001F6459: ;
    edi = MEM32(eax * 4 + 0x5BB700);
    goto loc_001F6472;

loc_001F6462: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_001F6464: ;
    if (TEST_NZ(_fa, _fb)) goto loc_001F6470; /* jne: not equal / not zero */

loc_001F6466: ;
    edi = MEM32(0x5BBAB4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F6472; /* jne: not equal / not zero */

loc_001F6470: ;
    edi = 0; /* xor self */

loc_001F6472: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001F6478u); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_001F6478: ;
    edx = MEM32(eax);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x144); PUSH32(esp, 0x001F6486u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F6486: ;
    ebp = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x001F6490u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F6490: ;
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esp + 0x10) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x001F649Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F649E: ;
    edx = ZX16(LO16(eax));
    eax = 0; /* xor self */
    ecx = 0x25;
    edi = esp + 0x14;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0xB8);
    ecx = MEM32(esp + 0xBC);
    MEM32(esp + 0x40) = eax;
    eax = 0; /* xor self */
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x48) = eax;
    eax = MEM32(esp + 0xC4);
    MEM32(esp + 0x5C) = eax;
    eax = MEM32(esp + 0xC8);
    MEM32(esp + 0x4C) = ecx;
    ecx = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x54) = ecx;
    ecx = MEM32(esp + 0xB4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(esp + 0xC4);
    PUSH32(esp, ecx);
    eax = esp + 0x1C;
    MEM32(esp + 0x60) = edx;
    edx = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x20) = 3;
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x2C) = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x100); PUSH32(esp, 0x001F6520u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F6520: ;
    eax = MEM32(esp + 0xB0);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x001F6533u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F6533: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F65F9; /* je: equal / zero */

loc_001F653D: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F6556; /* jle: less or equal (signed <=) */

loc_001F6546: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F6554; /* jge: greater or equal (signed >=) */

loc_001F654B: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_001F6564;

loc_001F6554: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_001F6556: ;
    if (TEST_NZ(_fa, _fb)) goto loc_001F6562; /* jne: not equal / not zero */

loc_001F6558: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F6564; /* jne: not equal / not zero */

loc_001F6562: ;
    ecx = 0; /* xor self */

loc_001F6564: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x001F656Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F656A: ;
    ebp = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x001F6576u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F6576: ;
    edx = ZX16(LO16(eax));
    eax = 0; /* xor self */
    ecx = 0x25;
    edi = esp + 0x14;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(esp + 0xB0);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esp + 0xC0);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(esp + 0xB8);
    MEM32(esp + 0x58) = ecx;
    ecx = MEM32(esp + 0xC8);
    MEM32(esp + 0x40) = edx;
    edx = MEM32(esp + 0xC4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esp + 0x60) = edx;
    edx = MEM32(esp + 0xB8);
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x4C) = eax;
    eax = MEM32(esp + 0xC0);
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    MEM32(esp + 0x54) = eax;
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x20) = 1;
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x60) = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x100); PUSH32(esp, 0x001F65F9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F65F9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp = esp + 0x98;
    esp += 36; return; /* ret 32 */

}

/**
 * sub_001F6610
 * Original: 0x001F6610 - 0x001F67DE (462 bytes, 132 insns)
 * Category: game_vtable
 * CC: thiscall, 9 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6610(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F6610: ;
    esp = esp - 0x98;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xA0);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001F66F3; /* je: equal / zero */

loc_001F662D: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F6646; /* jle: less or equal (signed <=) */

loc_001F6636: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F6644; /* jge: greater or equal (signed >=) */

loc_001F663B: ;
    edi = MEM32(eax * 4 + 0x5BB700);
    goto loc_001F6654;

loc_001F6644: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */

loc_001F6646: ;
    if (CMP_NE(_fa, _fb)) goto loc_001F6652; /* jne: not equal / not zero */

loc_001F6648: ;
    edi = MEM32(0x5BBAB4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F6654; /* jne: not equal / not zero */

loc_001F6652: ;
    edi = 0; /* xor self */

loc_001F6654: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001F665Au); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_001F665A: ;
    edx = MEM32(eax);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x144); PUSH32(esp, 0x001F6668u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F6668: ;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x001F6674u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F6674: ;
    edx = eax;
    eax = 0; /* xor self */
    ecx = 0x25;
    edi = esp + 0x14;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0xBC);
    ecx = MEM32(esp + 0x10);
    MEM32(esp + 0x40) = eax;
    eax = MEM32(esp + 0xC4);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esp + 0xC0);
    MEM32(esp + 0x58) = eax;
    eax = MEM32(esp + 0xCC);
    MEM32(esp + 0x4C) = ecx;
    ecx = MEM32(esp + 0xC8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x5C) = ecx;
    ecx = MEM32(esp + 0xB8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x1C;
    MEM32(esp + 0x5C) = edx;
    edx = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x20) = 3;
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x30) = ebp;
    MEM32(esp + 0x50) = ebp;
    MEM32(esp + 0x54) = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x100); PUSH32(esp, 0x001F66F3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F66F3: ;
    eax = MEM32(esp + 0xB4);
    ecx = MEM32(esp + 0xB0);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xE0); PUSH32(esp, 0x001F670Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F670E: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F67CF; /* je: equal / zero */

loc_001F6718: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F6731; /* jle: less or equal (signed <=) */

loc_001F6721: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F672F; /* jge: greater or equal (signed >=) */

loc_001F6726: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_001F673F;

loc_001F672F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */

loc_001F6731: ;
    if (CMP_NE(_fa, _fb)) goto loc_001F673D; /* jne: not equal / not zero */

loc_001F6733: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F673F; /* jne: not equal / not zero */

loc_001F673D: ;
    ecx = 0; /* xor self */

loc_001F673F: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x001F6745u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F6745: ;
    edx = eax;
    eax = 0; /* xor self */
    ecx = 0x25;
    edi = esp + 0x14;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0xB0);
    ecx = ZX16(MEM16(esp + 0xB4));
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esp + 0xBC);
    MEM32(esp + 0x40) = eax;
    eax = MEM32(esp + 0xC4);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esp + 0xC0);
    MEM32(esp + 0x58) = eax;
    eax = MEM32(esp + 0xCC);
    MEM32(esp + 0x4C) = ecx;
    ecx = MEM32(esp + 0xC8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x5C) = ecx;
    ecx = MEM32(esp + 0xB8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x1C;
    MEM32(esp + 0x5C) = edx;
    edx = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x20) = 1;
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x50) = ebp;
    MEM32(esp + 0x54) = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x100); PUSH32(esp, 0x001F67CFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F67CF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp = esp + 0x98;
    esp += 40; return; /* ret 36 */

}

/**
 * sub_001F67E0
 * Original: 0x001F67E0 - 0x001F68E7 (263 bytes, 81 insns)
 * Category: game_vtable
 * CC: thiscall, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F67E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F67E0: ;
    esp = esp - 0x98;
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xA8);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0xE4); PUSH32(esp, 0x001F67FBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F67FB: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F68D9; /* je: equal / zero */

loc_001F6805: ;
    eax = edi;
    edx = eax + 1;
    /* nop */

loc_001F6810: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F6810; /* jne: not equal / not zero */

loc_001F6817: ;
    eax = eax - edx;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F6836; /* jle: less or equal (signed <=) */

loc_001F6826: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F6834; /* jge: greater or equal (signed >=) */

loc_001F682B: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_001F6844;

loc_001F6834: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_001F6836: ;
    if (TEST_NZ(_fa, _fb)) goto loc_001F6842; /* jne: not equal / not zero */

loc_001F6838: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F6844; /* jne: not equal / not zero */

loc_001F6842: ;
    ecx = 0; /* xor self */

loc_001F6844: ;
    edx = MEM32(ecx);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x001F684Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F684B: ;
    ebp = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x001F6857u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F6857: ;
    edx = ZX16(LO16(eax));
    eax = 0; /* xor self */
    ecx = 0x25;
    edi = esp + 0x14;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(esp + 0x10);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esp + 0xBC);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(esp + 0xB4);
    MEM32(esp + 0x58) = ecx;
    ecx = MEM32(esp + 0xC4);
    MEM32(esp + 0x40) = edx;
    edx = MEM32(esp + 0xC0);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esp + 0x60) = edx;
    edx = MEM32(esp + 0xB4);
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x4C) = eax;
    eax = MEM32(esp + 0xBC);
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    MEM32(esp + 0x54) = eax;
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x20) = 1;
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x60) = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x100); PUSH32(esp, 0x001F68D8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F68D8: ;
    POP32(esp, ebp);

loc_001F68D9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = esp + 0x98;
    esp += 32; return; /* ret 28 */

}

/**
 * sub_001F68F0
 * Original: 0x001F68F0 - 0x001F69F2 (258 bytes, 80 insns)
 * Category: game_vtable
 * CC: thiscall, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F68F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F68F0: ;
    esp = esp - 0x94;
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xA4);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xA4);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xE8); PUSH32(esp, 0x001F6915u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F6915: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F69E4; /* je: equal / zero */

loc_001F691F: ;
    eax = edi;
    edx = eax + 1;

loc_001F6924: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F6924; /* jne: not equal / not zero */

loc_001F692B: ;
    eax = eax - edx;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F6949; /* jle: less or equal (signed <=) */

loc_001F6939: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F6947; /* jge: greater or equal (signed >=) */

loc_001F693E: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_001F6957;

loc_001F6947: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_001F6949: ;
    if (TEST_NZ(_fa, _fb)) goto loc_001F6955; /* jne: not equal / not zero */

loc_001F694B: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F6957; /* jne: not equal / not zero */

loc_001F6955: ;
    ecx = 0; /* xor self */

loc_001F6957: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x001F695Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F695D: ;
    edx = eax;
    eax = 0; /* xor self */
    ecx = 0x25;
    edi = esp + 0x10;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = ZX16(MEM16(esp + 0xAC));
    ecx = MEM32(esp + 0xB4);
    MEM32(esp + 0x20) = eax;
    eax = 0; /* xor self */
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x44) = eax;
    eax = MEM32(esp + 0xB8);
    MEM32(esp + 0x48) = eax;
    eax = MEM32(esp + 0xC0);
    MEM32(esp + 0x58) = eax;
    eax = MEM32(esp + 0xC4);
    MEM32(esp + 0x3C) = ecx;
    ecx = MEM32(esp + 0xBC);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x54) = ecx;
    ecx = MEM32(esp + 0xB0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    MEM32(esp + 0x58) = edx;
    edx = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x1C) = 1;
    MEM32(esp + 0x24) = ebp;
    MEM32(esp + 0x28) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x100); PUSH32(esp, 0x001F69E3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F69E3: ;
    POP32(esp, ebx);

loc_001F69E4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    esp = esp + 0x94;
    esp += 36; return; /* ret 32 */

}

/**
 * sub_001F6A00
 * Original: 0x001F6A00 - 0x001F6B4C (332 bytes, 98 insns)
 * Category: game_vtable
 * CC: thiscall, 10 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6A00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F6A00: ;
    esp = esp - 0x9C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xB0);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xB0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xB4);
    PUSH32(esp, ebx);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xEC); PUSH32(esp, 0x001F6A33u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F6A33: ;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(edi), LO16(edi) (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F6B32; /* je: equal / zero */

loc_001F6A3C: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F6B32; /* je: equal / zero */

loc_001F6A44: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F6B32; /* je: equal / zero */

loc_001F6A4C: ;
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x5BC5D8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(0x5BC5D8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F6B32; /* jne: not equal / not zero */

loc_001F6A5C: ;
    eax = MEM32(ebx);
    ecx = ZX16(LO16(edi));
    MEM32(esp + 0x14) = eax;
    ebx = 0; /* xor self */
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001F6A79; /* jbe: below or equal (unsigned <=) */

loc_001F6A6D: ;
    /* nop */

loc_001F6A70: ;
    ebx = ebx + MEM32(ebp + eax * 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F6A70; /* jb: below (unsigned <) */

loc_001F6A79: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F6A92; /* jle: less or equal (signed <=) */

loc_001F6A82: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F6A90; /* jge: greater or equal (signed >=) */

loc_001F6A87: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_001F6AA0;

loc_001F6A90: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_001F6A92: ;
    if (TEST_NZ(_fa, _fb)) goto loc_001F6A9E; /* jne: not equal / not zero */

loc_001F6A94: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F6AA0; /* jne: not equal / not zero */

loc_001F6A9E: ;
    ecx = 0; /* xor self */

loc_001F6AA0: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x001F6AA6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F6AA6: ;
    ebp = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x001F6AB2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F6AB2: ;
    edx = ZX16(LO16(eax));
    eax = 0; /* xor self */
    ecx = 0x25;
    edi = esp + 0x18;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esp + 0xCC);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(esp + 0xC4);
    MEM32(esp + 0x5C) = ecx;
    ecx = MEM32(esp + 0xD4);
    MEM32(esp + 0x44) = edx;
    edx = MEM32(esp + 0xD0);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esp + 0x64) = edx;
    edx = MEM32(esp + 0xC4);
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x50) = eax;
    eax = MEM32(esp + 0xCC);
    PUSH32(esp, edx);
    ecx = esp + 0x20;
    MEM32(esp + 0x58) = eax;
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x24) = 1;
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x64) = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x100); PUSH32(esp, 0x001F6B32u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F6B32: ;
    eax = MEM32(esp + 0xB0);
    edx = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    esp = esp + 0x9C;
    esp += 44; return; /* ret 40 */

}

/**
 * sub_001F6B50
 * Original: 0x001F6B50 - 0x001F6C96 (326 bytes, 96 insns)
 * Category: game_vtable
 * CC: thiscall, 11 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6B50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F6B50: ;
    esp = esp - 0x9C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xB0);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xB8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xB4);
    ebx = ecx;
    ecx = MEM32(esp + 0xC0);
    eax = MEM32(ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0xF0); PUSH32(esp, 0x001F6B8Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F6B8B: ;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(edi), LO16(edi) (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F6C7C; /* je: equal / zero */

loc_001F6B94: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F6C7C; /* je: equal / zero */

loc_001F6B9C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F6C7C; /* je: equal / zero */

loc_001F6BA4: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x5BC5D8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x5BC5D8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F6C7C; /* jne: not equal / not zero */

loc_001F6BB4: ;
    ecx = MEM32(esi);
    MEM32(esp + 0x14) = ecx;
    ecx = ZX16(LO16(edi));
    esi = 0; /* xor self */
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001F6BCE; /* jbe: below or equal (unsigned <=) */

loc_001F6BC5: ;
    esi = esi + MEM32(ebp + eax * 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F6BC5; /* jb: below (unsigned <) */

loc_001F6BCE: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F6BE7; /* jle: less or equal (signed <=) */

loc_001F6BD7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F6BE5; /* jge: greater or equal (signed >=) */

loc_001F6BDC: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_001F6BF5;

loc_001F6BE5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_001F6BE7: ;
    if (TEST_NZ(_fa, _fb)) goto loc_001F6BF3; /* jne: not equal / not zero */

loc_001F6BE9: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F6BF5; /* jne: not equal / not zero */

loc_001F6BF3: ;
    ecx = 0; /* xor self */

loc_001F6BF5: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x001F6BFBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F6BFB: ;
    edx = eax;
    eax = 0; /* xor self */
    ecx = 0x25;
    edi = esp + 0x18;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0xC8);
    MEM32(esp + 0x20) = eax;
    eax = 0; /* xor self */
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x4C) = eax;
    eax = MEM32(esp + 0xCC);
    MEM32(esp + 0x50) = eax;
    eax = MEM32(esp + 0xD4);
    MEM32(esp + 0x60) = eax;
    eax = MEM32(esp + 0xD8);
    MEM32(esp + 0x44) = ecx;
    ecx = MEM32(esp + 0xD0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x5C) = ecx;
    ecx = MEM32(esp + 0xC4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x20;
    MEM32(esp + 0x60) = edx;
    edx = MEM32(ebx);
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x24) = 1;
    MEM32(esp + 0x30) = esi;
    { uint32_t _icall_target = MEM32(edx + 0x100); PUSH32(esp, 0x001F6C7Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F6C7C: ;
    eax = MEM32(esp + 0xB0);
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp = esp + 0x9C;
    esp += 48; return; /* ret 44 */

}

/**
 * sub_001F6CA0
 * Original: 0x001F6CA0 - 0x001F6DD0 (304 bytes, 92 insns)
 * Category: game_vtable
 * CC: thiscall, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6CA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F6CA0: ;
    esp = esp - 0x9C;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xA8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xAC);
    PUSH32(esp, edi);
    ebp = ecx;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0xF4); PUSH32(esp, 0x001F6CC5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F6CC5: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F6DC3; /* je: equal / zero */

loc_001F6CCF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F6DC3; /* je: equal / zero */

loc_001F6CD7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    ecx = MEM32(ebx);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x10) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_001F6D10; /* jbe: below or equal (unsigned <=) */

loc_001F6CE5: ;
    esi = MEM32(ebx + edi * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F6D04; /* je: equal / zero */

loc_001F6CEC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001F6CF2u); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_001F6CF2: ;
    edx = MEM32(eax);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x144); PUSH32(esp, 0x001F6D00u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F6D00: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + eax;

loc_001F6D04: ;
    eax = MEM32(esp + 0xB0);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F6CE5; /* jb: below (unsigned <) */

loc_001F6D10: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F6D29; /* jle: less or equal (signed <=) */

loc_001F6D19: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F6D27; /* jge: greater or equal (signed >=) */

loc_001F6D1E: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_001F6D37;

loc_001F6D27: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_001F6D29: ;
    if (TEST_NZ(_fa, _fb)) goto loc_001F6D35; /* jne: not equal / not zero */

loc_001F6D2B: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F6D37; /* jne: not equal / not zero */

loc_001F6D35: ;
    ecx = 0; /* xor self */

loc_001F6D37: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x001F6D3Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F6D3D: ;
    edx = eax;
    eax = 0; /* xor self */
    ecx = 0x25;
    edi = esp + 0x18;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x24) = eax;
    eax = 0; /* xor self */
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x4C) = eax;
    eax = MEM32(esp + 0xC0);
    MEM32(esp + 0x50) = eax;
    eax = MEM32(esp + 0xC8);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esp + 0xBC);
    MEM32(esp + 0x60) = eax;
    eax = MEM32(esp + 0xCC);
    MEM32(esp + 0x44) = ecx;
    ecx = MEM32(esp + 0xC4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x5C) = ecx;
    ecx = MEM32(esp + 0xB8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x20;
    MEM32(esp + 0x60) = edx;
    edx = MEM32(ebp);
    PUSH32(esp, eax);
    ecx = ebp;
    MEM32(esp + 0x24) = 3;
    { uint32_t _icall_target = MEM32(edx + 0x100); PUSH32(esp, 0x001F6DC3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F6DC3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x9C;
    esp += 36; return; /* ret 32 */

}

/**
 * sub_001F6DD0
 * Original: 0x001F6DD0 - 0x001F6EC3 (243 bytes, 72 insns)
 * Category: game_vtable
 * CC: thiscall, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6DD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F6DD0: ;
    esp = esp - 0x94;
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xA0);
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xF8); PUSH32(esp, 0x001F6DECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F6DEC: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F6EB6; /* je: equal / zero */

loc_001F6DF6: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F6E0F; /* jle: less or equal (signed <=) */

loc_001F6DFF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F6E0D; /* jge: greater or equal (signed >=) */

loc_001F6E04: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_001F6E1D;

loc_001F6E0D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_001F6E0F: ;
    if (TEST_NZ(_fa, _fb)) goto loc_001F6E1B; /* jne: not equal / not zero */

loc_001F6E11: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F6E1D; /* jne: not equal / not zero */

loc_001F6E1B: ;
    ecx = 0; /* xor self */

loc_001F6E1D: ;
    edx = MEM32(ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x001F6E25u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F6E25: ;
    ebp = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x001F6E31u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F6E31: ;
    edx = ZX16(LO16(eax));
    eax = 0; /* xor self */
    ecx = 0x25;
    edi = esp + 0x10;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(esp + 0xA8);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esp + 0xB8);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esp + 0xB0);
    MEM32(esp + 0x54) = ecx;
    ecx = MEM32(esp + 0xC0);
    MEM32(esp + 0x3C) = edx;
    edx = MEM32(esp + 0xBC);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esp + 0x5C) = edx;
    edx = MEM32(esp + 0xB0);
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x48) = eax;
    eax = MEM32(esp + 0xB8);
    PUSH32(esp, edx);
    ecx = esp + 0x18;
    MEM32(esp + 0x50) = eax;
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x1C) = 1;
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x5C) = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x100); PUSH32(esp, 0x001F6EB4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F6EB4: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_001F6EB6: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = esp + 0x94;
    esp += 32; return; /* ret 28 */

}

/**
 * sub_001F6ED0
 * Original: 0x001F6ED0 - 0x001F6FAD (221 bytes, 66 insns)
 * Category: game_vtable
 * CC: thiscall, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6ED0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F6ED0: ;
    esp = esp - 0x94;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xA0);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001F6F96; /* je: equal / zero */

loc_001F6EEC: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F6F05; /* jle: less or equal (signed <=) */

loc_001F6EF5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F6F03; /* jge: greater or equal (signed >=) */

loc_001F6EFA: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_001F6F13;

loc_001F6F03: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */

loc_001F6F05: ;
    if (CMP_NE(_fa, _fb)) goto loc_001F6F11; /* jne: not equal / not zero */

loc_001F6F07: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F6F13; /* jne: not equal / not zero */

loc_001F6F11: ;
    ecx = 0; /* xor self */

loc_001F6F13: ;
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x001F6F1Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F6F1A: ;
    edx = eax;
    eax = 0; /* xor self */
    ecx = 0x25;
    edi = esp + 0x10;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0xB4);
    ecx = MEM32(esp + 0xB0);
    MEM32(esp + 0x48) = eax;
    eax = MEM32(esp + 0xBC);
    MEM32(esp + 0x58) = eax;
    eax = MEM32(esp + 0xC0);
    MEM32(esp + 0x3C) = ecx;
    ecx = MEM32(esp + 0xB8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x54) = ecx;
    ecx = MEM32(esp + 0xAC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    MEM32(esp + 0x58) = edx;
    edx = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x1C) = 3;
    MEM32(esp + 0x24) = ebp;
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x4C) = ebx;
    MEM32(esp + 0x50) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x100); PUSH32(esp, 0x001F6F95u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F6F95: ;
    POP32(esp, edi);

loc_001F6F96: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x001F6FA1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F6FA1: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x94;
    esp += 32; return; /* ret 28 */

}

/**
 * sub_001F6FB0
 * Original: 0x001F6FB0 - 0x001F7016 (102 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6FB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F6FB0: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x30);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC);
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x001F6FC2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F6FC2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F6FCF; /* je: equal / zero */

loc_001F6FC6: ;
    ecx = eax;
    PUSH32(esp, 0x001F6FCDu); RECOMP_ABI_CALL(0x001E9CC0u, sub_001E9CC0); /* call 0x001E9CC0 */

loc_001F6FCD: ;
    goto loc_001F6FD1;

loc_001F6FCF: ;
    eax = 0; /* xor self */

loc_001F6FD1: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(0x5BC538) = eax;
    PUSH32(esp, 0x001F6FE3u); RECOMP_ABI_CALL(0x001E9D10u, sub_001E9D10); /* call 0x001E9D10 */

loc_001F6FE3: ;
    MEM8(esi + 7) = 0;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x30);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC);
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x001F6FF9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F6FF9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_001F700B; /* je: equal / zero */

loc_001F6FFE: ;
    ecx = eax;
    PUSH32(esp, 0x001F7005u); RECOMP_ABI_CALL(0x001E9CC0u, sub_001E9CC0); /* call 0x001E9CC0 */

loc_001F7005: ;
    MEM32(0x5BC53C) = eax;
    esp += 4; return; /* ret */

loc_001F700B: ;
    MEM32(0x5BC53C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001F7020
 * Original: 0x001F7020 - 0x001F7056 (54 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7020(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F7020: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax + 0xC4); PUSH32(esp, 0x001F703Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F703D: ;
    SET_LO8(eax, MEM8(esi + 0x69));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F704F; /* je: equal / zero */

loc_001F7044: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001F704Cu); RECOMP_ABI_CALL(0x001E9200u, sub_001E9200); /* call 0x001E9200 */

loc_001F704C: ;
    esp = esp + 0xC;

loc_001F704F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F7060
 * Original: 0x001F7060 - 0x001F707D (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7060(void)
{

loc_001F7060: ;
    edx = ecx;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    edi = edx + 0x14;
    ecx = 0x69C;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(edx);
    ecx = edx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xAC); PUSH32(esp, 0x001F7079u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F7079: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F7080
 * Original: 0x001F7080 - 0x001F70AD (45 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F7080: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0x2E;
    /* nop */

loc_001F7090: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xCC); PUSH32(esp, 0x001F709Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F709B: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001F7090; /* jns: not sign (positive) */

loc_001F709E: ;
    edi = esi + 0x14;
    ecx = 0x69C;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F70B0
 * Original: 0x001F70B0 - 0x001F71BC (268 bytes, 82 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F70B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F70B0: ;
    esp = esp - 0xA0;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    ebp = 0; /* xor self */
    ecx = ecx + 0x14;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x14) = ecx;
    /* nop */

loc_001F70D0: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F718F; /* je: equal / zero */

loc_001F70DA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x158); PUSH32(esp, 0x001F70E2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F70E2: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F718F; /* je: equal / zero */

loc_001F70EC: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F711B; /* jle: less or equal (signed <=) */

loc_001F70F2: ;
    edi = MEM32(esp + 0x18);

loc_001F70F6: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F710C; /* je: equal / zero */

loc_001F70FC: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x158); PUSH32(esp, 0x001F7104u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F7104: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F718F; /* je: equal / zero */

loc_001F710C: ;
    eax = MEM32(esp + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 0x90;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F70F6; /* jl: less (signed <) */

loc_001F711B: ;
    eax = MEM32(esi + 0x10);
    eax = eax >> 0xD;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F718F; /* je: equal / zero */

loc_001F7125: ;
    edx = MEM32(esp + 0xB4);
    ecx = edx;
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x18), eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F718F; /* je: equal / zero */

loc_001F713A: ;
    eax = 0; /* xor self */
    ecx = 0x25;
    edi = esp + 0x1C;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(esp + 0xB8);
    eax = MEM32(esi);
    MEM32(esp + 0x34) = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esp + 0x20;
    MEM32(esp + 0x34) = edx;
    edx = MEM32(esp + 0xC0);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x24) = 0xD;
    MEM32(esp + 0x40) = edx;
    MEM32(esp + 0x50) = ebp;
    MEM32(esp + 0x54) = ebp;
    MEM32(esp + 0x58) = ebp;
    MEM32(esp + 0x5C) = ebp;
    MEM32(esp + 0x68) = ebp;
    MEM32(esp + 0x6C) = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x001F718Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F718F: ;
    edi = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 0x90;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x2F (32-bit) */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001F70D0; /* jl: less (signed <) */

loc_001F71AF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xA0;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F71C0
 * Original: 0x001F71C0 - 0x001F723D (125 bytes, 60 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F71C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F71C0: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x14);
    ecx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F7229; /* jle: less or equal (signed <=) */

loc_001F71D5: ;
    eax = MEM32(eax + 0x10);

loc_001F71D8: ;
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001F7221; /* je: equal / zero */

loc_001F71DE: ;
    ecx = MEM32(edi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001F71EA; /* jne: not equal / not zero */

loc_001F71E5: ;
    ecx = 0x3C806C;

loc_001F71EA: ;
    esi = MEM32(esp + 0x18);
    edi = edi;

loc_001F71F0: ;
    SET_LO8(ebx, MEM8(ecx));
    SET_LO8(edx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001F7214; /* jne: not equal / not zero */

loc_001F71F8: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001F7210; /* je: equal / zero */

loc_001F71FC: ;
    SET_LO8(ebx, MEM8(ecx + 1));
    SET_LO8(edx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001F7214; /* jne: not equal / not zero */

loc_001F7206: ;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(2)) >> 32) & 1);
    ecx = ecx + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001F71F0; /* jne: not equal / not zero */

loc_001F7210: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    goto loc_001F7219;

loc_001F7214: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */

loc_001F7219: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001F7233; /* je: equal / zero */

loc_001F721D: ;
    ecx = MEM32(esp + 0x10);

loc_001F7221: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001F71D8; /* jl: less (signed <) */

loc_001F7229: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_001F7233: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F7240
 * Original: 0x001F7240 - 0x001F738F (335 bytes, 129 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7240(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F7240: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x10) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_001F7384; /* je: equal / zero */

loc_001F7262: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001F7384; /* je: equal / zero */

loc_001F726C: ;
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x3EEAB8);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001F7279u); RECOMP_ABI_CALL(0x00343260u, sub_00343260); /* call 0x00343260 */

loc_001F7279: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001F7283; /* jne: not equal / not zero */

loc_001F7280: ;
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0xD)) >> 32) & 1);
    ebp = ebp + 0xD;

loc_001F7283: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x3ED5D4);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001F7290u); RECOMP_ABI_CALL(0x00343260u, sub_00343260); /* call 0x00343260 */

loc_001F7290: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001F72B1; /* jne: not equal / not zero */

loc_001F7297: ;
    eax = ebp;
    edx = eax + 1;
    /* nop */

loc_001F72A0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001F72A0; /* jne: not equal / not zero */

loc_001F72A7: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001F72B1; /* je: equal / zero */

loc_001F72AE: ;
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(6)) >> 32) & 1);
    ebp = ebp + 6;

loc_001F72B1: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, ebx);
    MEM32(esp + 0x1C) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F736C; /* jle: less or equal (signed <=) */

loc_001F72C0: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx + 0x10);
    ebx = MEM32(edx + eax * 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001F735B; /* je: equal / zero */

loc_001F72D1: ;
    edi = MEM32(ebx + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001F735B; /* je: equal / zero */

loc_001F72DC: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001F735B; /* je: equal / zero */

loc_001F72E1: ;
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x3EEAB8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001F72EEu); RECOMP_ABI_CALL(0x00343260u, sub_00343260); /* call 0x00343260 */

loc_001F72EE: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001F72F8; /* jne: not equal / not zero */

loc_001F72F5: ;
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0xD)) >> 32) & 1);
    edi = edi + 0xD;

loc_001F72F8: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x3ED5D4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001F7305u); RECOMP_ABI_CALL(0x00343260u, sub_00343260); /* call 0x00343260 */

loc_001F7305: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001F7322; /* jne: not equal / not zero */

loc_001F730C: ;
    eax = ebp;
    edx = eax + 1;

loc_001F7311: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001F7311; /* jne: not equal / not zero */

loc_001F7318: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001F7322; /* je: equal / zero */

loc_001F731F: ;
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(6)) >> 32) & 1);
    edi = edi + 6;

loc_001F7322: ;
    esi = ebp;
    eax = edi;

loc_001F7326: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001F734A; /* jne: not equal / not zero */

loc_001F732E: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001F7346; /* je: equal / zero */

loc_001F7332: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001F734A; /* jne: not equal / not zero */

loc_001F733C: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001F7326; /* jne: not equal / not zero */

loc_001F7346: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_001F734F;

loc_001F734A: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */

loc_001F734F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001F7378; /* je: equal / zero */

loc_001F7353: ;
    esi = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x1C);

loc_001F735B: ;
    ecx = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001F72C0; /* jl: less (signed <) */

loc_001F736C: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, ebp);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

loc_001F7378: ;
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

loc_001F7384: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, ebp);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F7390
 * Original: 0x001F7390 - 0x001F744F (191 bytes, 75 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7390(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F7390: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = MEM32(0x5BC248);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x3C);
    eax = MEM32(ecx);
    MEM32(esp + 8) = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001F73A9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F73A9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F7447; /* je: equal / zero */

loc_001F73B1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F73C4; /* je: equal / zero */

loc_001F73B5: ;
    eax = MEM32(eax + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F73B1; /* jne: not equal / not zero */

loc_001F73BC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 8;
    esp += 16; return; /* ret 12 */

loc_001F73C4: ;
    ecx = MEM32(edi + 0x50);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F7447; /* jle: less or equal (signed <=) */

loc_001F73D1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    goto loc_001F73E0;

    /* nop */

loc_001F73E0: ;
    ecx = MEM32(esp + 0x1C);
    edx = ecx + eax * 4;
    eax = MEM32(edi + 8);
    esi = MEM32(edx + eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F7435; /* je: equal / zero */

loc_001F73F1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001F73F7u); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_001F73F7: ;
    edx = MEM32(eax);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x144); PUSH32(esp, 0x001F7405u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F7405: ;
    ebx = eax;
    ebx = ebx >> 2;
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F7431; /* jle: less or equal (signed <=) */

loc_001F7410: ;
    eax = MEM32(esi + edi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F742C; /* je: equal / zero */

loc_001F7417: ;
    ecx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x001F741Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F741E: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + edi * 4);
    PUSH32(esp, 0x001F742Cu); RECOMP_ABI_CALL(0x001EAAE0u, sub_001EAAE0); /* call 0x001EAAE0 */

loc_001F742C: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F7410; /* jl: less (signed <) */

loc_001F7431: ;
    edi = MEM32(esp + 0x10);

loc_001F7435: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(edi + 0x50);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001F73E0; /* jl: less (signed <) */

loc_001F7445: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001F7447: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 8;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F7450
 * Original: 0x001F7450 - 0x001F74C4 (116 bytes, 49 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F7450: ;
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0x42));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F74C0; /* je: equal / zero */

loc_001F745A: ;
    ecx = MEM32(edi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F74C0; /* je: equal / zero */

loc_001F7461: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(0x5BC248);
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001F746Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F746D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F74BF; /* je: equal / zero */

loc_001F7471: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7481; /* je: equal / zero */

loc_001F7475: ;
    eax = MEM32(eax + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F7471; /* jne: not equal / not zero */

loc_001F747C: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_001F7481: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(esp + 0xC);
    esi = MEM32(edx + ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F74BF; /* je: equal / zero */

loc_001F748F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001F7495u); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_001F7495: ;
    edx = MEM32(eax);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x144); PUSH32(esp, 0x001F74A3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F74A3: ;
    eax = eax >> 2;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F74BF; /* jle: less or equal (signed <=) */

loc_001F74AC: ;
    /* nop */

loc_001F74B0: ;
    edx = MEM32(esi + ecx * 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F74BA; /* je: equal / zero */

loc_001F74B7: ;
    MEM32(edx + 4) = MEM32(edx + 4) + 1;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001F74BA: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F74B0; /* jl: less (signed <) */

loc_001F74BF: ;
    POP32(esp, esi);

loc_001F74C0: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F74D0
 * Original: 0x001F74D0 - 0x001F7558 (136 bytes, 57 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F74D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F74D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    edi = MEM32(0x5BC248);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001F74E2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F74E2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F7553; /* je: equal / zero */

loc_001F74E6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F74F6; /* je: equal / zero */

loc_001F74EA: ;
    eax = MEM32(eax + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F74E6; /* jne: not equal / not zero */

loc_001F74F1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_001F74F6: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(esp + 0xC);
    esi = MEM32(edx + ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F7553; /* je: equal / zero */

loc_001F7504: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001F750Bu); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_001F750B: ;
    edx = MEM32(eax);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x144); PUSH32(esp, 0x001F7519u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F7519: ;
    ebx = eax;
    ebx = ebx >> 2;
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F7552; /* jle: less or equal (signed <=) */

loc_001F7524: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    /* nop */

loc_001F7530: ;
    eax = MEM32(esi + edi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F754C; /* je: equal / zero */

loc_001F7537: ;
    ecx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x001F753Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F753E: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + edi * 4);
    PUSH32(esp, 0x001F754Cu); RECOMP_ABI_CALL(0x001EAAE0u, sub_001EAAE0); /* call 0x001EAAE0 */

loc_001F754C: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F7530; /* jl: less (signed <) */

loc_001F7551: ;
    POP32(esp, ebp);

loc_001F7552: ;
    POP32(esp, ebx);

loc_001F7553: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F7560
 * Original: 0x001F7560 - 0x001F75F4 (148 bytes, 60 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7560(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F7560: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebx + 0x3C);
    eax = MEM32(ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x001F756Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F756D: ;
    ecx = MEM32(ebx + 0x3C);
    edx = MEM32(ecx);
    esi = ZX16(LO16(eax));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(esp + 0x18));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x001F757Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F757D: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xD0); PUSH32(esp, 0x001F758Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F758B: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F75A3; /* jne: not equal / not zero */

loc_001F7591: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(0x46A728);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_001F75A3: ;
    ecx = MEM32(ebx + 0x3C);
    edx = MEM32(ecx);
    PUSH32(esp, edi);
    edi = MEM32(0x5BC214);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x001F75B2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F75B2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F75D7; /* je: equal / zero */

loc_001F75B6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F75C3; /* je: equal / zero */

loc_001F75BA: ;
    eax = MEM32(eax + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F75B6; /* jne: not equal / not zero */

loc_001F75C1: ;
    goto loc_001F75D7;

loc_001F75C3: ;
    ecx = esi;
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = ebp;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_001F75D7: ;
    eax = MEM32(ebx + 8);
    ecx = MEM32(esp + 0x18);
    POP32(esp, edi);
    MEM32(ecx + eax) = ebp;
    eax = MEM32(esp + 0x10);
    edx = MEM32(0x5BC5D8);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001F7600
 * Original: 0x001F7600 - 0x001F76D0 (208 bytes, 94 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7600(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F7600: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    edi = MEM32(0x5BC248);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001F7612u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F7612: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F7621; /* je: equal / zero */

loc_001F7616: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F763A; /* je: equal / zero */

loc_001F761A: ;
    eax = MEM32(eax + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F7616; /* jne: not equal / not zero */

loc_001F7621: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x001F7635u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F7635: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001F763A: ;
    eax = MEM32(esi + 8);
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    esi = MEM32(eax + edx);
    edi = MEM32(eax + ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F7656; /* jne: not equal / not zero */

loc_001F764F: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001F7656: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F76C9; /* je: equal / zero */

loc_001F765A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F76C9; /* je: equal / zero */

loc_001F765E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001F7665u); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_001F7665: ;
    edx = MEM32(eax);
    esp = esp + 4;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x144); PUSH32(esp, 0x001F7673u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F7673: ;
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 0x001F767Bu); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_001F767B: ;
    edx = MEM32(eax);
    esp = esp + 4;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x144); PUSH32(esp, 0x001F7689u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F7689: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7695; /* je: equal / zero */

loc_001F768D: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001F7695: ;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F76B7; /* jle: less or equal (signed <=) */

loc_001F769C: ;
    edi = edi - esi;
    edi = edi;

loc_001F76A0: ;
    eax = MEM32(edi + esi);
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F76ABu); RECOMP_ABI_CALL(0x001EA930u, sub_001EA930); /* call 0x001EA930 */

loc_001F76AB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F76C0; /* je: equal / zero */

loc_001F76AF: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F76A0; /* jl: less (signed <) */

loc_001F76B7: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001F76C0: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001F76C9: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F76D0
 * Original: 0x001F76D0 - 0x001F7760 (144 bytes, 71 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F76D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F76D0: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax + ecx);
    PUSH32(esp, edi);
    edi = MEM32(eax + edx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F76EE; /* jne: not equal / not zero */

loc_001F76E7: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001F76EE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F7757; /* je: equal / zero */

loc_001F76F2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F7757; /* je: equal / zero */

loc_001F76F6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001F76FDu); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_001F76FD: ;
    edx = MEM32(eax);
    esp = esp + 4;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x144); PUSH32(esp, 0x001F770Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F770B: ;
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 0x001F7713u); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_001F7713: ;
    edx = MEM32(eax);
    esp = esp + 4;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x144); PUSH32(esp, 0x001F7721u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F7721: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F772D; /* je: equal / zero */

loc_001F7725: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001F772D: ;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F7745; /* jle: less or equal (signed <=) */

loc_001F7734: ;
    eax = esi;
    edi = edi - esi;

loc_001F7738: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(edi + eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(edi + eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F774E; /* jne: not equal / not zero */

loc_001F773F: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F7738; /* jl: less (signed <) */

loc_001F7745: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001F774E: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001F7757: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F7760
 * Original: 0x001F7760 - 0x001F77AB (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F7760: ;
    eax = MEM32(0x5BC54C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F77AA; /* jne: not equal / not zero */

loc_001F7769: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F7782; /* jle: less or equal (signed <=) */

loc_001F7772: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F7780; /* jge: greater or equal (signed >=) */

loc_001F7777: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_001F7790;

loc_001F7780: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_001F7782: ;
    if (TEST_NZ(_fa, _fb)) goto loc_001F778E; /* jne: not equal / not zero */

loc_001F7784: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F7790; /* jne: not equal / not zero */

loc_001F778E: ;
    ecx = 0; /* xor self */

loc_001F7790: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x001F779Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F779C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F77A2u); RECOMP_ABI_CALL(0x00222600u, sub_00222600); /* call 0x00222600 */

loc_001F77A2: ;
    esp = esp + 4;
    MEM32(0x5BC54C) = eax;

loc_001F77AA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F77B0
 * Original: 0x001F77B0 - 0x001F792C (380 bytes, 147 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F77B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F77B0: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    edx = MEM32(0x46A38C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    eax = edx;
    MEM32(esp + 0x10) = edi;
    esi = eax + 1;

loc_001F77C6: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001F77C6; /* jne: not equal / not zero */

loc_001F77CD: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    eax = eax - esi;
    esi = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001F77DBu); RECOMP_ABI_CALL(0x00343260u, sub_00343260); /* call 0x00343260 */

loc_001F77DB: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001F7922; /* jne: not equal / not zero */

loc_001F77E6: ;
    eax = MEM32(0x46A38C);
    edx = eax + 1;
    edi = edi;

loc_001F77F0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001F77F0; /* jne: not equal / not zero */

loc_001F77F7: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
    eax = MEM32(0x46A390);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(esp + 0x2C) = esi;
    PUSH32(esp, 0x001F780Bu); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_001F780B: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001F7922; /* je: equal / zero */

loc_001F7816: ;
    ecx = MEM32(0x46A390);
    esi = ecx + 1;
    /* nop */

loc_001F7820: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001F7820; /* jne: not equal / not zero */

loc_001F7827: ;
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(esi));
    ecx = ecx - esi;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    PUSH32(esp, ebx);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(0x5BC508);
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + 0x18);
    eax = MEM32(ebp + 0xC);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x10) = ebx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F7916; /* jle: less or equal (signed <=) */

loc_001F7853: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001F785C; /* jl: less (signed <) */

loc_001F7858: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    goto loc_001F7862;

loc_001F785C: ;
    edx = MEM32(ebp + 8);
    esi = MEM32(edx + ebx * 4);

loc_001F7862: ;
    edx = MEM32(esi + 0x1C);
    eax = edx;
    edi = eax + 1;
    /* nop */

loc_001F7870: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001F7870; /* jne: not equal / not zero */

loc_001F7877: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F7885u); RECOMP_ABI_CALL(0x00343260u, sub_00343260); /* call 0x00343260 */

loc_001F7885: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001F78F7; /* jne: not equal / not zero */

loc_001F788C: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 0xC);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x20) = ecx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F78F7; /* jle: less or equal (signed <=) */

loc_001F789C: ;
    ebp = MEM32(eax + 8);
    /* nop */

loc_001F78A0: ;
    edi = MEM32(ebp);
    esi = MEM32(esp + 0x1C);
    eax = MEM32(edi + 0xC);
    /* nop */

loc_001F78B0: ;
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(ecx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001F78D4; /* jne: not equal / not zero */

loc_001F78B8: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001F78D0; /* je: equal / zero */

loc_001F78BC: ;
    SET_LO8(ebx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001F78D4; /* jne: not equal / not zero */

loc_001F78C6: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001F78B0; /* jne: not equal / not zero */

loc_001F78D0: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_001F78D9;

loc_001F78D4: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */

loc_001F78D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001F78EB; /* je: equal / zero */

loc_001F78DD: ;
    eax = MEM32(esp + 0x20);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(4)) >> 32) & 1);
    ebp = ebp + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001F78A0; /* jl: less (signed <) */

loc_001F78E9: ;
    goto loc_001F78EF;

loc_001F78EB: ;
    MEM32(esp + 0x18) = edi;

loc_001F78EF: ;
    ebp = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x10);

loc_001F78F7: ;
    eax = MEM32(esp + 0x24);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x10) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_001F7853; /* jl: less (signed <) */

loc_001F7908: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    esp += 8; return; /* ret 4 */

loc_001F7916: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    esp += 8; return; /* ret 4 */

loc_001F7922: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F7930
 * Original: 0x001F7930 - 0x001F7A49 (281 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7930(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F7930: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x28);
    eax = MEM32(eax + 0xC);
    ebx = 0; /* xor self */
    ecx = 4;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x10) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_001F79F8; /* jle: less or equal (signed <=) */

loc_001F7964: ;
    ecx = MEM32(edi + 0x28);
    edx = MEM32(ecx + 8);
    esi = MEM32(edx + ebx * 4);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x001F7974u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F7974: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esp + 0x10)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(esp + 0x10) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001F797F; /* jbe: below or equal (unsigned <=) */

loc_001F797B: ;
    MEM32(esp + 0x10) = eax;

loc_001F797F: ;
    SET_LO8(ecx, MEM8(esi + 0x25));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F79A2; /* je: equal / zero */

loc_001F7986: ;
    edx = ZX16(MEM16(esi + 0x14));
    ecx = MEM32(esp + 0x18);
    eax = ZX16(LO16(eax));
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx - edx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ~eax;
    ecx = ecx & eax;
    MEM32(esi + 8) = ecx;
    MEM32(esp + 0x18) = ecx;
    goto loc_001F79D3;

loc_001F79A2: ;
    ecx = MEM32(edi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F79B9; /* je: equal / zero */

loc_001F79A9: ;
    ecx = MEM32(ecx + 0x28);
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F79B9; /* jle: less or equal (signed <=) */

loc_001F79B1: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM32(ecx + ebx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + ebx * 4), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F79C4; /* je: equal / zero */

loc_001F79B9: ;
    edx = ebx;
    edx = edx - ebp;
    MEM16(esi + 0x12) = LO16(edx);
    MEM32(esi + 0x18) = edi;

loc_001F79C4: ;
    ecx = MEM32(esp + 0x14);
    eax = ZX16(LO16(eax));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001F79D3; /* jg: greater (signed >) */

loc_001F79CF: ;
    MEM32(esp + 0x14) = eax;

loc_001F79D3: ;
    eax = ZX16(MEM16(esi + 0x14));
    ecx = MEM32(esi + 8);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x1C) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F79E6; /* jle: less or equal (signed <=) */

loc_001F79E2: ;
    MEM32(esp + 0x1C) = eax;

loc_001F79E6: ;
    eax = MEM32(esp + 0x20);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F7964; /* jl: less (signed <) */

loc_001F79F3: ;
    ecx = 4;

loc_001F79F8: ;
    _fa = (uint32_t)(MEM32(edi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x48), 0xFFFFFFFFu (32-bit) */
    SET_LO16(edx, MEM16(esp + 0x10));
    MEM16(edi + 0x58) = LO16(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_001F7A19; /* je: equal / zero */

loc_001F7A07: ;
    eax = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x18);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ~eax;
    eax = eax & esi;
    eax = (uint32_t)(-(int32_t)eax);
    MEM32(edi + 0x20) = eax;

loc_001F7A19: ;
    MEM32(edi + 0x24) = MEM32(edi + 0x24) | ecx;
    ebx = MEM32(0x5BC508);
    ecx = MEM32(ebx + 0x2C);
    ebp = MEM32(ecx + 4);
    ebx = ebx + 0x2C;
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F7A41; /* jle: less or equal (signed <=) */

loc_001F7A31: ;
    edx = MEM32(ebx);
    eax = MEM32(edx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + esi * 4); PUSH32(esp, 0x001F7A39u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F7A39: ;
    esp = esp + 4;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F7A31; /* jl: less (signed <) */

loc_001F7A41: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001F7A50
 * Original: 0x001F7A50 - 0x001F7AA3 (83 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7A50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F7A50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001F7A9C; /* je: equal / zero */

loc_001F7A5E: ;
    edi = edi;

loc_001F7A60: ;
    ebx = MEM32(eax + 0x34);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F7A9A; /* je: equal / zero */

loc_001F7A67: ;
    edi = 1;
    edx = 0; /* xor self */
    edi = edi;

loc_001F7A70: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebx + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F7A9A; /* jge: greater or equal (signed >=) */

loc_001F7A75: ;
    eax = MEM32(ebx + 8);
    esi = MEM32(eax + edx * 4);
    ecx = esi;
    PUSH32(esp, 0x001F7A82u); RECOMP_ABI_CALL(0x001EA500u, sub_001EA500); /* call 0x001EA500 */

loc_001F7A82: ;
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001F7A8D; /* jg: greater (signed >) */

loc_001F7A88: ;
    edi = eax;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001F7A70;

loc_001F7A8D: ;
    ebp = ebp - edi;
    eax = esi;
    if ((ebp != 0)) goto loc_001F7A60; /* jne: not equal / not zero */

loc_001F7A93: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001F7A9A: ;
    eax = 0; /* xor self */

loc_001F7A9C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F7AB0
 * Original: 0x001F7AB0 - 0x001F7AD2 (34 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7AB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F7AB0: ;
    eax = MEM32(0x5BC508);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F7ABD; /* jne: not equal / not zero */

loc_001F7ABA: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_001F7ABD: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(0x5BB878);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F7AD1u); RECOMP_ABI_CALL(0x001E8800u, sub_001E8800); /* call 0x001E8800 */

loc_001F7AD1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F7AE0
 * Original: 0x001F7AE0 - 0x001F7B89 (169 bytes, 64 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F7AE0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F7AFA; /* jne: not equal / not zero */

loc_001F7AEA: ;
    ecx = MEM32(0x46A728);
    eax = MEM32(esp + 8);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001F7AFA: ;
    SET_LO8(eax, MEM8(ebx + 0x1A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F7B11; /* je: equal / zero */

loc_001F7B01: ;
    eax = MEM32(esp + 8);
    edx = MEM32(0x46A728);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001F7B11: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F7B1E; /* jne: not equal / not zero */

loc_001F7B19: ;
    PUSH32(esp, 0x001F7B1Eu); RECOMP_ABI_CALL(0x001F5C20u, sub_001F5C20); /* call 0x001F5C20 */

loc_001F7B1E: ;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x5C);
    edx = esi;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7B3A; /* je: equal / zero */

loc_001F7B29: ;
    /* nop */

loc_001F7B30: ;
    ecx = MEM32(edx + 4);
    edx = edx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F7B30; /* jne: not equal / not zero */

loc_001F7B3A: ;
    edx = edx - esi;
    esi = edx;
    edx = MEM32(eax);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x001F7B49u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F7B49: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F7B5E; /* jne: not equal / not zero */

loc_001F7B4D: ;
    ecx = MEM32(0x46A728);
    eax = MEM32(esp + 0xC);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001F7B5E: ;
    ecx = esi;
    esi = MEM32(ebx + 0x5C);
    edx = ecx;
    PUSH32(esp, edi);
    ecx = ecx >> 2;
    edi = eax;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    MEM32(ebx + 0x5C) = eax;
    ecx = MEM32(0x5BC5D8);
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F7B90
 * Original: 0x001F7B90 - 0x001F7C58 (200 bytes, 86 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7B90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F7B90: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_001F7BAB; /* jne: not equal / not zero */

loc_001F7BA2: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, esi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

loc_001F7BAB: ;
    eax = MEM32(esi + 0x14);
    edx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, edi);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F7C0E; /* jle: less or equal (signed <=) */

loc_001F7BBA: ;
    eax = MEM32(eax + 0x10);
    MEM32(esp + 0x14) = eax;
    edi = eax;

loc_001F7BC3: ;
    eax = MEM32(edi);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001F7BD1; /* jne: not equal / not zero */

loc_001F7BCC: ;
    eax = 0x3C806C;

loc_001F7BD1: ;
    esi = MEM32(esp + 0x1C);

loc_001F7BD5: ;
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(ecx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001F7BF9; /* jne: not equal / not zero */

loc_001F7BDD: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001F7BF5; /* je: equal / zero */

loc_001F7BE1: ;
    SET_LO8(ebx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001F7BF9; /* jne: not equal / not zero */

loc_001F7BEB: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001F7BD5; /* jne: not equal / not zero */

loc_001F7BF5: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_001F7BFE;

loc_001F7BF9: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */

loc_001F7BFE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001F7C37; /* je: equal / zero */

loc_001F7C02: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001F7BC3; /* jl: less (signed <) */

loc_001F7C0A: ;
    esi = MEM32(esp + 0x10);

loc_001F7C0E: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x001F7C15u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F7C15: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(0x5BB930);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F7C29u); RECOMP_ABI_CALL(0x001E8800u, sub_001E8800); /* call 0x001E8800 */

loc_001F7C29: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001F7C48; /* jne: not equal / not zero */

loc_001F7C2D: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

loc_001F7C37: ;
    eax = MEM32(esp + 0x14);
    eax = MEM32(eax + ebp * 4);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

loc_001F7C48: ;
    eax = MEM32(eax + 8);
    eax = MEM32(esi + eax);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F7C60
 * Original: 0x001F7C60 - 0x001F7CC3 (99 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F7C60: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ecx = MEM32(esp + 8);
    eax = eax & 0xFF000001u;
    eax = eax | 1;
    MEM32(esi + 4) = eax;
    MEM8(esi + 7) = 0;
    eax = MEM32(esi + 4);
    MEM32(esi) = 0x3EEAE8;
    edx = MEM32(ecx + 4);
    edx = edx ^ eax;
    edx = edx & 0x800000;
    eax = eax ^ edx;
    MEM32(esi + 4) = eax;
    eax = MEM32(0x5BC508);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7CBD; /* je: equal / zero */

loc_001F7C9C: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3EEB38); PUSH32(esp, 0x001F7CA4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F7CA4: ;
    eax = MEM32(eax + 0x20);
    ecx = esi;
    ecx = ecx - eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F7CB1u); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_001F7CB1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F7CB7u); RECOMP_ABI_CALL(0x001F5E90u, sub_001F5E90); /* call 0x001F5E90 */

loc_001F7CB7: ;
    esp = esp + 8;
    MEM8(esi + 7) = LO8(eax);

loc_001F7CBD: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F7CD0
 * Original: 0x001F7CD0 - 0x001F7D2F (95 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F7CD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    eax = eax & 0xFF000001u;
    eax = eax | 1;
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x3EEAE8;
    MEM8(esi + 7) = 0;
    ecx = MEM32(0x5BC508);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7D25; /* je: equal / zero */

loc_001F7CF6: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3EEB38); PUSH32(esp, 0x001F7CFEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F7CFE: ;
    eax = MEM32(eax + 0x20);
    edx = esi;
    edx = edx - eax;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F7D0Bu); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_001F7D0B: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F7D25; /* je: equal / zero */

loc_001F7D12: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x160); PUSH32(esp, 0x001F7D1Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F7D1C: ;
    MEM8(esi + 7) = LO8(eax);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001F7D25: ;
    MEM8(esi + 7) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F7D30
 * Original: 0x001F7D30 - 0x001F7D99 (105 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F7D30: ;
    eax = MEM32(0x5BC508);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(edx + 0x5C);
    MEM32(esi + ecx) = eax;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    ecx = ecx & 0xFF000001u;
    ecx = ecx | 1;
    MEM32(esi + 4) = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x001F7D5Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F7D5E: ;
    eax = MEM32(eax + 0x20);
    ecx = esi;
    ecx = ecx - eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F7D6Bu); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_001F7D6B: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F7D8A; /* je: equal / zero */

loc_001F7D72: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x160); PUSH32(esp, 0x001F7D7Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F7D7C: ;
    ecx = esi;
    MEM8(esi + 7) = LO8(eax);
    PUSH32(esp, 0x001F7D86u); RECOMP_ABI_CALL(0x001EA5A0u, sub_001EA5A0); /* call 0x001EA5A0 */

loc_001F7D86: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001F7D8A: ;
    ecx = esi;
    MEM8(esi + 7) = 0;
    PUSH32(esp, 0x001F7D95u); RECOMP_ABI_CALL(0x001EA5A0u, sub_001EA5A0); /* call 0x001EA5A0 */

loc_001F7D95: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F7DA0
 * Original: 0x001F7DA0 - 0x001F7DFB (91 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001F7DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F7DA0: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F7DB9; /* jle: less or equal (signed <=) */

loc_001F7DA9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F7DB7; /* jge: greater or equal (signed >=) */

loc_001F7DAE: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_001F7DC7;

loc_001F7DB7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_001F7DB9: ;
    if (TEST_NZ(_fa, _fb)) goto loc_001F7DC5; /* jne: not equal / not zero */

loc_001F7DBB: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F7DC7; /* jne: not equal / not zero */

loc_001F7DC5: ;
    ecx = 0; /* xor self */

loc_001F7DC7: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x001F7DD3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F7DD3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x001F7DDFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F7DDF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F7DF8; /* je: equal / zero */

loc_001F7DE3: ;
    MEM32(eax) = 0;
    MEM32(eax + 8) = 0;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

loc_001F7DF8: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}
