/**
 * X-Men Legends - Recompiled code chunk 52
 * Functions: 250 (0x0021BD20 - 0x002235D0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0021BD20
 * Original: 0x0021BD20 - 0x0021BD54 (52 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021BD20(void)
{

loc_0021BD20: ;
    PUSH32(esp, 0x46A744);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21BCE0);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x3F8364);
    PUSH32(esp, 0x1A4810);
    PUSH32(esp, 0x1A4350);
    PUSH32(esp, 0x221CF0);
    PUSH32(esp, 0x5BC304);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0021BD50u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0021BD50: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0021BD60
 * Original: 0x0021BD60 - 0x0021BD66 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021BD60(void)
{

loc_0021BD60: ;
    eax = MEM32(0x5BC30C);
    esp += 4; return; /* ret */

}

/**
 * sub_0021BD70
 * Original: 0x0021BD70 - 0x0021BD76 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021BD70(void)
{

loc_0021BD70: ;
    eax = MEM32(0x5BC310);
    esp += 4; return; /* ret */

}

/**
 * sub_0021BD80
 * Original: 0x0021BD80 - 0x0021BDB2 (50 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021BD80(void)
{

loc_0021BD80: ;
    esp = esp - 0x138;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0021BD90u); RECOMP_ABI_CALL(0x00219C80u, sub_00219C80); /* call 0x00219C80 */

loc_0021BD90: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0021BDA8u); RECOMP_ABI_CALL(0x00219D10u, sub_00219D10); /* call 0x00219D10 */

loc_0021BDA8: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x138;
    esp += 4; return; /* ret */

}

/**
 * sub_0021BDC0
 * Original: 0x0021BDC0 - 0x0021BDFB (59 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021BDC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021BDC0: ;
    esp = esp - 0x34;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0021BDCDu); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021BDCD: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 4) = 0x3F7308;
    esi = MEM32(esp + ecx + 4);
    if (TEST_Z(_fa, _fb)) goto loc_0021BDF4; /* je: equal / zero */

loc_0021BDEC: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021BDF4u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021BDF4: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_0021BE00
 * Original: 0x0021BE00 - 0x0021BE3B (59 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021BE00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021BE00: ;
    esp = esp - 0x38;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0021BE0Du); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021BE0D: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 4) = 0x3F73F8;
    esi = MEM32(esp + ecx + 4);
    if (TEST_Z(_fa, _fb)) goto loc_0021BE34; /* je: equal / zero */

loc_0021BE2C: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021BE34u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021BE34: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_0021BE40
 * Original: 0x0021BE40 - 0x0021BE88 (72 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021BE40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021BE40: ;
    eax = MEM32(0x5BC520);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021BE87; /* jne: not equal / not zero */

loc_0021BE49: ;
    eax = MEM32(0x5BC370);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021BE87; /* je: equal / zero */

loc_0021BE52: ;
    SET_LO8(eax, MEM8(0x5BC524));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021BE87; /* jne: not equal / not zero */

loc_0021BE5B: ;
    PUSH32(esp, esi);
    ecx = 0x46A680;
    PUSH32(esp, 0x0021BE66u); RECOMP_ABI_CALL(0x0019B870u, sub_0019B870); /* call 0x0019B870 */

loc_0021BE66: ;
    PUSH32(esp, 0x226550);
    esi = eax;
    PUSH32(esp, 0x0021BE72u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021BE72: ;
    ecx = MEM32(0x5BC370);
    esp = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0021BE81u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0021BE81: ;
    MEM32(0x5BC520) = eax;
    POP32(esp, esi);

loc_0021BE87: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0021BE90
 * Original: 0x0021BE90 - 0x0021BECB (59 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021BE90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021BE90: ;
    esp = esp - 0x38;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0021BE9Du); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021BE9D: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 4) = 0x3F7BA0;
    esi = MEM32(esp + ecx + 4);
    if (TEST_Z(_fa, _fb)) goto loc_0021BEC4; /* je: equal / zero */

loc_0021BEBC: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021BEC4u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021BEC4: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_0021BED0
 * Original: 0x0021BED0 - 0x0021BED6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021BED0(void)
{

loc_0021BED0: ;
    eax = MEM32(0x5BC37C);
    esp += 4; return; /* ret */

}

/**
 * sub_0021BEE0
 * Original: 0x0021BEE0 - 0x0021BEE6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021BEE0(void)
{

loc_0021BEE0: ;
    eax = MEM32(0x5BC380);
    esp += 4; return; /* ret */

}

/**
 * sub_0021BEF0
 * Original: 0x0021BEF0 - 0x0021BF2B (59 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021BEF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021BEF0: ;
    esp = esp - 0x34;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0021BEFDu); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021BEFD: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 4) = 0x3F74E8;
    esi = MEM32(esp + ecx + 4);
    if (TEST_Z(_fa, _fb)) goto loc_0021BF24; /* je: equal / zero */

loc_0021BF1C: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021BF24u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021BF24: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_0021BF30
 * Original: 0x0021BF30 - 0x0021BF6B (59 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021BF30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021BF30: ;
    esp = esp - 0x38;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0021BF3Du); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021BF3D: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 4) = 0x3F75D8;
    esi = MEM32(esp + ecx + 4);
    if (TEST_Z(_fa, _fb)) goto loc_0021BF64; /* je: equal / zero */

loc_0021BF5C: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021BF64u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021BF64: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_0021BF70
 * Original: 0x0021BF70 - 0x0021BF76 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021BF70(void)
{

loc_0021BF70: ;
    eax = MEM32(0x5BC3C0);
    esp += 4; return; /* ret */

}

/**
 * sub_0021BF80
 * Original: 0x0021BF80 - 0x0021BF86 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021BF80(void)
{

loc_0021BF80: ;
    eax = MEM32(0x5BC3C4);
    esp += 4; return; /* ret */

}

/**
 * sub_0021BF90
 * Original: 0x0021BF90 - 0x0021C02E (158 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021BF90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021BF90: ;
    eax = MEM32(0x5BB930);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x5BC400);
    esi = MEM32(edi + 0x28);
    PUSH32(esp, 0x3E226C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0021BFAEu); RECOMP_ABI_CALL(0x001E8800u, sub_001E8800); /* call 0x001E8800 */

loc_0021BFAE: ;
    ecx = MEM32(esi + 8);
    esi = MEM32(esi + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0021BFCA; /* jle: less or equal (signed <=) */

loc_0021BFBA: ;
    /* nop */

loc_0021BFC0: ;
    _fa = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + edx * 4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021C027; /* je: equal / zero */

loc_0021BFC5: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021BFC0; /* jl: less (signed <) */

loc_0021BFCA: ;
    ebx = ebx | 0xFFFFFFFFu;

loc_0021BFCD: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0021BFD6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021BFD6: ;
    esi = eax;
    eax = MEM32(0x5BC1EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021BFEE; /* jne: not equal / not zero */

loc_0021BFE1: ;
    PUSH32(esp, 0x219880);
    PUSH32(esp, 0x0021BFEBu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021BFEB: ;
    esp = esp + 4;

loc_0021BFEE: ;
    eax = MEM32(0x5BC1EC);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x38) = 0;
    MEM32(esi + 0x1C) = 0x5BBA3C;
    PUSH32(esp, 0x0021C00Du); RECOMP_ABI_CALL(0x002093F0u, sub_002093F0); /* call 0x002093F0 */

loc_0021C00D: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_0021C02B; /* jne: not equal / not zero */

loc_0021C01E: ;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_0021C027: ;
    ebx = edx;
    goto loc_0021BFCD;

loc_0021C02B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0021C030
 * Original: 0x0021C030 - 0x0021C06B (59 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021C030: ;
    esp = esp - 0x34;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0021C03Du); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021C03D: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 4) = 0x3F7AB0;
    esi = MEM32(esp + ecx + 4);
    if (TEST_Z(_fa, _fb)) goto loc_0021C064; /* je: equal / zero */

loc_0021C05C: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021C064u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021C064: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_0021C070
 * Original: 0x0021C070 - 0x0021C0A4 (52 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C070(void)
{

loc_0021C070: ;
    PUSH32(esp, 0x46A74C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21C030);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x3F8644);
    PUSH32(esp, 0x1F2A00);
    PUSH32(esp, 0x1A4350);
    PUSH32(esp, 0x221CF0);
    PUSH32(esp, 0x5BC450);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0021C0A0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0021C0A0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0021C0B0
 * Original: 0x0021C0B0 - 0x0021C0B6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C0B0(void)
{

loc_0021C0B0: ;
    eax = MEM32(0x5BC458);
    esp += 4; return; /* ret */

}

/**
 * sub_0021C0C0
 * Original: 0x0021C0C0 - 0x0021C0C6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C0C0(void)
{

loc_0021C0C0: ;
    eax = MEM32(0x5BC45C);
    esp += 4; return; /* ret */

}

/**
 * sub_0021C0D0
 * Original: 0x0021C0D0 - 0x0021C10B (59 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C0D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021C0D0: ;
    esp = esp - 0x34;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0021C0DDu); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021C0DD: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 4) = 0x3F79C0;
    esi = MEM32(esp + ecx + 4);
    if (TEST_Z(_fa, _fb)) goto loc_0021C104; /* je: equal / zero */

loc_0021C0FC: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021C104u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021C104: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_0021C110
 * Original: 0x0021C110 - 0x0021C144 (52 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C110(void)
{

loc_0021C110: ;
    PUSH32(esp, 0x46A754);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21C0D0);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x3F8744);
    PUSH32(esp, 0x1A4970);
    PUSH32(esp, 0x1A4350);
    PUSH32(esp, 0x221CF0);
    PUSH32(esp, 0x5BC468);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0021C140u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0021C140: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0021C150
 * Original: 0x0021C150 - 0x0021C156 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C150(void)
{

loc_0021C150: ;
    eax = MEM32(0x5BC470);
    esp += 4; return; /* ret */

}

/**
 * sub_0021C160
 * Original: 0x0021C160 - 0x0021C166 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C160(void)
{

loc_0021C160: ;
    eax = MEM32(0x5BC474);
    esp += 4; return; /* ret */

}

/**
 * sub_0021C170
 * Original: 0x0021C170 - 0x0021C1B3 (67 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021C170: ;
    esp = esp - 0x38;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0021C17Du); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021C17D: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x38) = 0;
    MEM32(esp + 4) = 0x3F76C8;
    esi = MEM32(esp + ecx + 4);
    if (TEST_Z(_fa, _fb)) goto loc_0021C1AC; /* je: equal / zero */

loc_0021C1A4: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021C1ACu); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021C1AC: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_0021C1C0
 * Original: 0x0021C1C0 - 0x0021C1F6 (54 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C1C0(void)
{

loc_0021C1C0: ;
    esp = esp - 0x30;
    eax = 0; /* xor self */
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F77B8;
    eax = MEM32(esp + ecx);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_0021C200
 * Original: 0x0021C200 - 0x0021C232 (50 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C200(void)
{

loc_0021C200: ;
    esp = esp - 0x44;
    eax = 0; /* xor self */
    MEM32(esp + 8) = eax;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = eax;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F7858;
    eax = MEM32(esp + ecx);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_0021C240
 * Original: 0x0021C240 - 0x0021C26C (44 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C240(void)
{

loc_0021C240: ;
    esp = esp - 0x20;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp + 8) = 0;
    MEM32(esp) = 0x3F7938;
    eax = MEM32(esp + ecx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0021C270
 * Original: 0x0021C270 - 0x0021C304 (148 bytes, 57 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021C270: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, 0x0021C279u); RECOMP_ABI_CALL(0x00215EF0u, sub_00215EF0); /* call 0x00215EF0 */

loc_0021C279: ;
    esi = MEM32(ebx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021C2B8; /* je: equal / zero */

loc_0021C27F: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021C29F; /* je: equal / zero */

loc_0021C287: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0021C28Du); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_0021C28D: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021C29F; /* je: equal / zero */

loc_0021C294: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x0021C29Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021C29F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0021C2A5u); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_0021C2A5: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0021C2B8; /* je: equal / zero */

loc_0021C2AD: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x0021C2B8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021C2B8: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021C2FD; /* je: equal / zero */

loc_0021C2BF: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0021C2D8; /* jle: less or equal (signed <=) */

loc_0021C2C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0021C2D6; /* jge: greater or equal (signed >=) */

loc_0021C2CD: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_0021C2E6;

loc_0021C2D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_0021C2D8: ;
    if (TEST_NZ(_fa, _fb)) goto loc_0021C2E4; /* jne: not equal / not zero */

loc_0021C2DA: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021C2E6; /* jne: not equal / not zero */

loc_0021C2E4: ;
    ecx = 0; /* xor self */

loc_0021C2E6: ;
    edx = MEM32(0x46A688);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0021C2F2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021C2F2: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x0021C2FDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021C2FD: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021C310
 * Original: 0x0021C310 - 0x0021C370 (96 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021C310: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0x0021C31Bu); RECOMP_ABI_CALL(0x0021A340u, sub_0021A340); /* call 0x0021A340 */

loc_0021C31B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = MEM32(eax);
    if (TEST_NZ(_fa, _fb)) goto loc_0021C34E; /* jne: not equal / not zero */

loc_0021C321: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021C36D; /* je: equal / zero */

loc_0021C325: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021C333; /* je: equal / zero */

loc_0021C32B: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021C333u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021C333: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0021C339u); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_0021C339: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021C36D; /* je: equal / zero */

loc_0021C340: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x0021C34Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021C34B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0021C34E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0021C354u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_0021C354: ;
    ecx = eax;
    PUSH32(esp, 0x0021C35Bu); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_0021C35B: ;
    edi = eax;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021C36B; /* je: equal / zero */

loc_0021C363: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021C36Bu); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021C36B: ;
    MEM32(esi) = edi;

loc_0021C36D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0021C370
 * Original: 0x0021C370 - 0x0021C3EF (127 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C370(void)
{

loc_0021C370: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0021C37Eu); RECOMP_ABI_CALL(0x001F7CD0u, sub_001F7CD0); /* call 0x001F7CD0 */

loc_0021C37E: ;
    MEM32(esi) = 0x3F5C90;
    ebx = 0; /* xor self */
    ecx = esi;
    MEM32(esi + 0xC) = ebx;
    PUSH32(esp, 0x0021C390u); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021C390: ;
    ecx = esi;
    MEM32(esi) = 0x3F5E20;
    PUSH32(esp, 0x0021C39Du); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021C39D: ;
    MEM8(esi + 0x34) = LO8(ebx);
    MEM8(esi + 0x35) = LO8(ebx);
    MEM32(esi) = 0x3F7DB0;
    MEM32(esi + 0x48) = ebx;
    ecx = esi;
    MEM32(esi + 0x4C) = ebx;
    PUSH32(esp, 0x0021C3B6u); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021C3B6: ;
    MEM8(esi + 0x34) = LO8(ebx);
    MEM8(esi + 0x35) = LO8(ebx);
    MEM32(esi) = 0x3F7DB0;
    MEM32(esi + 0x48) = ebx;
    MEM32(esi + 0x4C) = ebx;
    SET_LO8(eax, 1);
    MEM8(esi + 0x42) = LO8(eax);
    MEM8(esi + 0x41) = LO8(eax);
    MEM8(esi + 0x40) = LO8(eax);
    MEM32(esi + 0x38) = ebx;
    MEM32(esi + 0x3C) = ebx;
    MEM8(esi + 0x24) = 3;
    MEM32(esi + 0x44) = 0xFFFFFFFFu;
    MEM8(esi + 0x27) = 2;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021C3F0
 * Original: 0x0021C3F0 - 0x0021C450 (96 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C3F0(void)
{

loc_0021C3F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0021C3FEu); RECOMP_ABI_CALL(0x001F7CD0u, sub_001F7CD0); /* call 0x001F7CD0 */

loc_0021C3FE: ;
    MEM32(esi) = 0x3F5C90;
    ebx = 0; /* xor self */
    ecx = esi;
    MEM32(esi + 0xC) = ebx;
    PUSH32(esp, 0x0021C410u); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021C410: ;
    ecx = esi;
    MEM32(esi) = 0x3F5E20;
    PUSH32(esp, 0x0021C41Du); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021C41D: ;
    MEM8(esi + 0x34) = LO8(ebx);
    MEM8(esi + 0x35) = LO8(ebx);
    MEM32(esi) = 0x3F7EA0;
    ecx = esi;
    MEM32(esi + 0x40) = ebx;
    PUSH32(esp, 0x0021C433u); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021C433: ;
    MEM8(esi + 0x34) = LO8(ebx);
    MEM8(esi + 0x35) = LO8(ebx);
    MEM32(esi) = 0x3F7EA0;
    MEM32(esi + 0x40) = ebx;
    MEM32(esi + 0x38) = ebx;
    MEM8(esi + 0x3C) = 1;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021C450
 * Original: 0x0021C450 - 0x0021C4A3 (83 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C450(void)
{

loc_0021C450: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0021C45Eu); RECOMP_ABI_CALL(0x001F7CD0u, sub_001F7CD0); /* call 0x001F7CD0 */

loc_0021C45E: ;
    MEM32(esi) = 0x3F5C90;
    ebx = 0; /* xor self */
    ecx = esi;
    MEM32(esi + 0xC) = ebx;
    PUSH32(esp, 0x0021C470u); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021C470: ;
    ecx = esi;
    MEM32(esi) = 0x3F5E20;
    PUSH32(esp, 0x0021C47Du); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021C47D: ;
    ecx = esi;
    MEM8(esi + 0x34) = LO8(ebx);
    MEM8(esi + 0x35) = LO8(ebx);
    MEM32(esi) = 0x3F7F90;
    PUSH32(esp, 0x0021C490u); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021C490: ;
    MEM8(esi + 0x34) = LO8(ebx);
    MEM8(esi + 0x35) = LO8(ebx);
    MEM32(esi) = 0x3F7F90;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021C4B0
 * Original: 0x0021C4B0 - 0x0021C4E5 (53 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C4B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021C4B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x5BC1EC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021C4D0; /* jne: not equal / not zero */

loc_0021C4BD: ;
    PUSH32(esp, 0x219880);
    PUSH32(esp, 0x0021C4C7u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021C4C7: ;
    ecx = MEM32(0x5BC1EC);
    esp = esp + 4;

loc_0021C4D0: ;
    edx = MEM32(esi + 0x34);
    eax = MEM32(ecx);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0xC));
    POP32(esp, esi);
    MEM32(esp + 8) = edx;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC8)); return; /* indirect tail jmp */

}

/**
 * sub_0021C4F0
 * Original: 0x0021C4F0 - 0x0021C50A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C4F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021C4F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021C501; /* je: equal / zero */

loc_0021C4FA: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0021C501u); RECOMP_ABI_CALL(0x0021C270u, sub_0021C270); /* call 0x0021C270 */

loc_0021C501: ;
    MEM32(esi + 8) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0021C510
 * Original: 0x0021C510 - 0x0021C52C (28 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021C510: ;
    eax = MEM32(0x5BC180);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021C52B; /* jne: not equal / not zero */

loc_0021C519: ;
    PUSH32(esp, 0x21B7D0);
    PUSH32(esp, 0x0021C523u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021C523: ;
    eax = MEM32(0x5BC180);
    esp = esp + 4;

loc_0021C52B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0021C530
 * Original: 0x0021C530 - 0x0021C5C9 (153 bytes, 53 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021C530: ;
    eax = MEM32(0x5BC508);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021C558; /* je: equal / zero */

loc_0021C53A: ;
    PUSH32(esp, 0x219880);
    PUSH32(esp, 0x0021C544u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021C544: ;
    ecx = MEM32(esp + 8);
    esp = esp + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(0x5BC1E8);
    PUSH32(esp, 0x0021C557u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0021C557: ;
    esp += 4; return; /* ret */

loc_0021C558: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x0021C567u); RECOMP_ABI_CALL(0x001F7E00u, sub_001F7E00); /* call 0x001F7E00 */

loc_0021C567: ;
    esi = eax;
    esp = esp + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021C5B4; /* je: equal / zero */

loc_0021C570: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0021C579u); RECOMP_ABI_CALL(0x001F7CD0u, sub_001F7CD0); /* call 0x001F7CD0 */

loc_0021C579: ;
    MEM32(esi) = 0x3F5C90;
    ecx = esi;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x0021C58Du); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021C58D: ;
    ecx = esi;
    MEM32(esi) = 0x3F5F58;
    PUSH32(esp, 0x0021C59Au); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021C59A: ;
    MEM32(esi) = 0x3F5F58;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0021C5A7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021C5A7: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0021C5B0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021C5B0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0021C5B4: ;
    esi = 0; /* xor self */
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0021C5BDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021C5BD: ;
    edx = MEM32(esi);
    PUSH32(esp, esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0021C5C5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021C5C5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0021C5D0
 * Original: 0x0021C5D0 - 0x0021C629 (89 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C5D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021C5D0: ;
    eax = MEM32(0x5BC508);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021C5FA; /* je: equal / zero */

loc_0021C5DD: ;
    PUSH32(esp, 0x219880);
    PUSH32(esp, 0x0021C5E7u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021C5E7: ;
    ecx = MEM32(esp + 0xC);
    esp = esp + 4;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0021C5F6u); RECOMP_ABI_CALL(0x0020E610u, sub_0020E610); /* call 0x0020E610 */

loc_0021C5F6: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_0021C5FA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x0021C604u); RECOMP_ABI_CALL(0x001F7E70u, sub_001F7E70); /* call 0x001F7E70 */

loc_0021C604: ;
    esi = eax;
    esp = esp + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021C622; /* je: equal / zero */

loc_0021C60D: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0021C615u); RECOMP_ABI_CALL(0x00216980u, sub_00216980); /* call 0x00216980 */

loc_0021C615: ;
    MEM32(esi) = 0x3F5F58;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_0021C622: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021C630
 * Original: 0x0021C630 - 0x0021C675 (69 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021C630: ;
    esp = esp - 0x3C;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0021C63Du); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021C63D: ;
    eax = MEM32(0x5BC508);
    edx = MEM32(eax + 0x394);
    eax = MEM32(esp + 0x10);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM8(esp + 0x38) = LO8(ecx);
    MEM8(esp + 0x39) = LO8(ecx);
    MEM32(esp + 4) = 0x3F8098;
    esi = MEM32(esp + edx + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_0021C66E; /* je: equal / zero */

loc_0021C666: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021C66Eu); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021C66E: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x3C;
    esp += 4; return; /* ret */

}

/**
 * sub_0021C680
 * Original: 0x0021C680 - 0x0021C6F2 (114 bytes, 45 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021C680: ;
    eax = MEM32(0x5BC508);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021C6A8; /* je: equal / zero */

loc_0021C68A: ;
    PUSH32(esp, 0x222230);
    PUSH32(esp, 0x0021C694u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021C694: ;
    ecx = MEM32(esp + 8);
    esp = esp + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(0x5BC248);
    PUSH32(esp, 0x0021C6A7u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0021C6A7: ;
    esp += 4; return; /* ret */

loc_0021C6A8: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x44);
    PUSH32(esp, 0x0021C6B7u); RECOMP_ABI_CALL(0x001F7E00u, sub_001F7E00); /* call 0x001F7E00 */

loc_0021C6B7: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021C6DD; /* je: equal / zero */

loc_0021C6BE: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x0021C6C7u); RECOMP_ABI_CALL(0x0021C3F0u, sub_0021C3F0); /* call 0x0021C3F0 */

loc_0021C6C7: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0021C6D0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021C6D0: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0021C6D9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021C6D9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0021C6DD: ;
    esi = 0; /* xor self */
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0021C6E6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021C6E6: ;
    edx = MEM32(esi);
    PUSH32(esp, esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0021C6EEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021C6EE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0021C700
 * Original: 0x0021C700 - 0x0021C753 (83 bytes, 23 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021C700: ;
    esp = esp - 0x48;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0021C70Du); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021C70D: ;
    ecx = MEM32(0x5BC508);
    edx = MEM32(ecx + 0x394);
    ecx = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM8(esp + 0x38) = LO8(eax);
    MEM8(esp + 0x39) = LO8(eax);
    MEM32(esp + 0x44) = eax;
    MEM8(esp + 0x40) = 1;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 4) = 0x3F8188;
    esi = MEM32(esp + edx + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_0021C74C; /* je: equal / zero */

loc_0021C744: ;
    ecx = ecx + 0xFFFFFFF8u;
    PUSH32(esp, 0x0021C74Cu); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021C74C: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x48;
    esp += 4; return; /* ret */

}

/**
 * sub_0021C760
 * Original: 0x0021C760 - 0x0021C7D6 (118 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021C760: ;
    esp = esp - 0x54;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0021C76Du); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021C76D: ;
    SET_LO8(ecx, 1);
    eax = 0; /* xor self */
    MEM8(esp + 0x46) = LO8(ecx);
    MEM8(esp + 0x45) = LO8(ecx);
    MEM8(esp + 0x44) = LO8(ecx);
    ecx = MEM32(0x5BC508);
    edx = MEM32(ecx + 0x394);
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM8(esp + 0x38) = LO8(eax);
    MEM8(esp + 0x39) = LO8(eax);
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x40) = eax;
    MEM8(esp + 0x28) = 3;
    MEM32(esp + 0x48) = 0xFFFFFFFFu;
    MEM8(esp + 0x2B) = 2;
    MEM32(esp + 4) = 0x3F8278;
    esi = MEM32(esp + edx + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_0021C7CF; /* je: equal / zero */

loc_0021C7C7: ;
    ecx = ecx + 0xFFFFFFF8u;
    PUSH32(esp, 0x0021C7CFu); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021C7CF: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x54;
    esp += 4; return; /* ret */

}

/**
 * sub_0021C7E0
 * Original: 0x0021C7E0 - 0x0021C7FC (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C7E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021C7E0: ;
    eax = MEM32(0x5BC308);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021C7FB; /* jne: not equal / not zero */

loc_0021C7E9: ;
    PUSH32(esp, 0x21BD20);
    PUSH32(esp, 0x0021C7F3u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021C7F3: ;
    eax = MEM32(0x5BC308);
    esp = esp + 4;

loc_0021C7FB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0021C800
 * Original: 0x0021C800 - 0x0021C83B (59 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021C800: ;
    esp = esp - 0x38;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0021C80Du); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021C80D: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 4) = 0x3F8378;
    esi = MEM32(esp + ecx + 4);
    if (TEST_Z(_fa, _fb)) goto loc_0021C834; /* je: equal / zero */

loc_0021C82C: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021C834u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021C834: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_0021C840
 * Original: 0x0021C840 - 0x0021C87B (59 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021C840: ;
    esp = esp - 0x3C;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0021C84Du); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021C84D: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 4) = 0x3F8468;
    esi = MEM32(esp + ecx + 4);
    if (TEST_Z(_fa, _fb)) goto loc_0021C874; /* je: equal / zero */

loc_0021C86C: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021C874u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021C874: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x3C;
    esp += 4; return; /* ret */

}

/**
 * sub_0021C880
 * Original: 0x0021C880 - 0x0021C8C3 (67 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021C880: ;
    esp = esp - 0x38;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0021C88Du); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021C88D: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x38) = 0;
    MEM32(esp + 4) = 0x3F8558;
    esi = MEM32(esp + ecx + 4);
    if (TEST_Z(_fa, _fb)) goto loc_0021C8BC; /* je: equal / zero */

loc_0021C8B4: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021C8BCu); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021C8BC: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_0021C8D0
 * Original: 0x0021C8D0 - 0x0021C96E (158 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C8D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021C8D0: ;
    eax = MEM32(0x5BB930);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x5BC3F8);
    esi = MEM32(edi + 0x28);
    PUSH32(esp, 0x3E226C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0021C8EEu); RECOMP_ABI_CALL(0x001E8800u, sub_001E8800); /* call 0x001E8800 */

loc_0021C8EE: ;
    ecx = MEM32(esi + 8);
    esi = MEM32(esi + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0021C90A; /* jle: less or equal (signed <=) */

loc_0021C8FA: ;
    /* nop */

loc_0021C900: ;
    _fa = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + edx * 4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021C967; /* je: equal / zero */

loc_0021C905: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021C900; /* jl: less (signed <) */

loc_0021C90A: ;
    ebx = ebx | 0xFFFFFFFFu;

loc_0021C90D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0021C916u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021C916: ;
    esi = eax;
    eax = MEM32(0x5BC180);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021C92E; /* jne: not equal / not zero */

loc_0021C921: ;
    PUSH32(esp, 0x21B7D0);
    PUSH32(esp, 0x0021C92Bu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021C92B: ;
    esp = esp + 4;

loc_0021C92E: ;
    eax = MEM32(0x5BC180);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x38) = 0;
    MEM32(esi + 0x1C) = 0x5BB9A8;
    PUSH32(esp, 0x0021C94Du); RECOMP_ABI_CALL(0x002093F0u, sub_002093F0); /* call 0x002093F0 */

loc_0021C94D: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_0021C96B; /* jne: not equal / not zero */

loc_0021C95E: ;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_0021C967: ;
    ebx = edx;
    goto loc_0021C90D;

loc_0021C96B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0021C970
 * Original: 0x0021C970 - 0x0021CA0E (158 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C970(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021C970: ;
    eax = MEM32(0x5BB930);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x5BC420);
    esi = MEM32(edi + 0x28);
    PUSH32(esp, 0x3E226C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0021C98Eu); RECOMP_ABI_CALL(0x001E8800u, sub_001E8800); /* call 0x001E8800 */

loc_0021C98E: ;
    ecx = MEM32(esi + 8);
    esi = MEM32(esi + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0021C9AA; /* jle: less or equal (signed <=) */

loc_0021C99A: ;
    /* nop */

loc_0021C9A0: ;
    _fa = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + edx * 4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021CA07; /* je: equal / zero */

loc_0021C9A5: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021C9A0; /* jl: less (signed <) */

loc_0021C9AA: ;
    ebx = ebx | 0xFFFFFFFFu;

loc_0021C9AD: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0021C9B6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021C9B6: ;
    esi = eax;
    eax = MEM32(0x5BC308);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021C9CE; /* jne: not equal / not zero */

loc_0021C9C1: ;
    PUSH32(esp, 0x21BD20);
    PUSH32(esp, 0x0021C9CBu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021C9CB: ;
    esp = esp + 4;

loc_0021C9CE: ;
    eax = MEM32(0x5BC308);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x38) = 0;
    MEM32(esi + 0x1C) = 0x5BBA88;
    PUSH32(esp, 0x0021C9EDu); RECOMP_ABI_CALL(0x002093F0u, sub_002093F0); /* call 0x002093F0 */

loc_0021C9ED: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_0021CA0B; /* jne: not equal / not zero */

loc_0021C9FE: ;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_0021CA07: ;
    ebx = edx;
    goto loc_0021C9AD;

loc_0021CA0B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0021CA10
 * Original: 0x0021CA10 - 0x0021CA2C (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021CA10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021CA10: ;
    eax = MEM32(0x5BC454);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021CA2B; /* jne: not equal / not zero */

loc_0021CA19: ;
    PUSH32(esp, 0x21C070);
    PUSH32(esp, 0x0021CA23u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021CA23: ;
    eax = MEM32(0x5BC454);
    esp = esp + 4;

loc_0021CA2B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0021CA30
 * Original: 0x0021CA30 - 0x0021CA6B (59 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021CA30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021CA30: ;
    esp = esp - 0x38;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0021CA3Du); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021CA3D: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 4) = 0x3F8658;
    esi = MEM32(esp + ecx + 4);
    if (TEST_Z(_fa, _fb)) goto loc_0021CA64; /* je: equal / zero */

loc_0021CA5C: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021CA64u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021CA64: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_0021CA70
 * Original: 0x0021CA70 - 0x0021CAAB (59 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021CA70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021CA70: ;
    esp = esp - 0x38;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0021CA7Du); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021CA7D: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 4) = 0x3F8758;
    esi = MEM32(esp + ecx + 4);
    if (TEST_Z(_fa, _fb)) goto loc_0021CAA4; /* je: equal / zero */

loc_0021CA9C: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021CAA4u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021CAA4: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_0021CAB0
 * Original: 0x0021CAB0 - 0x0021CCD5 (549 bytes, 197 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021CAB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021CAB0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebx + 0x24);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    PUSH32(esp, edi);
    MEM32(ecx + 4) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_0021CACD; /* jne: not equal / not zero */

loc_0021CAC8: ;
    PUSH32(esp, 0x0021CACDu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0021CACD: ;
    MEM32(ebx + 0x24) = 0;
    PUSH32(esp, 0x0021CAD9u); RECOMP_ABI_CALL(0x0021A340u, sub_0021A340); /* call 0x0021A340 */

loc_0021CAD9: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021CB05; /* je: equal / zero */

loc_0021CADF: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021CAED; /* je: equal / zero */

loc_0021CAE5: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021CAEDu); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021CAED: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0021CAF3u); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_0021CAF3: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021CB05; /* je: equal / zero */

loc_0021CAFA: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x0021CB05u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021CB05: ;
    esi = MEM32(ebx + 0x2C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021CB42; /* je: equal / zero */

loc_0021CB0C: ;
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021CB2A; /* je: equal / zero */

loc_0021CB12: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0021CB18u); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_0021CB18: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021CB2A; /* je: equal / zero */

loc_0021CB1F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x0021CB2Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021CB2A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0021CB30u); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_0021CB30: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021CB42; /* je: equal / zero */

loc_0021CB37: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x0021CB42u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021CB42: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021CB54; /* je: equal / zero */

loc_0021CB4C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xB4); PUSH32(esp, 0x0021CB54u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021CB54: ;
    ecx = MEM32(ebx + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(0x5BC54C);
    PUSH32(esp, 0x0021CB63u); RECOMP_ABI_CALL(0x00208660u, sub_00208660); /* call 0x00208660 */

loc_0021CB63: ;
    esi = MEM32(ebx + 0xC);
    eax = MEM32(ebx + 4);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021CBD3; /* jl: less (signed <) */

loc_0021CB6E: ;
    PUSH32(esp, ebp);
    /* nop */

loc_0021CB70: ;
    edi = MEM32(ebx + 0x18);
    edx = MEM32(edi + 8);
    ecx = MEM32(edx + esi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021CB92; /* je: equal / zero */

loc_0021CB7D: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0021CB92; /* jne: not equal / not zero */

loc_0021CB8D: ;
    PUSH32(esp, 0x0021CB92u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0021CB92: ;
    ebp = MEM32(edi + 8);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021CB9D; /* jne: not equal / not zero */

loc_0021CB99: ;
    eax = 0; /* xor self */
    goto loc_0021CBB4;

loc_0021CB9D: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0021CBA3u); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_0021CBA3: ;
    edx = MEM32(eax);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x144); PUSH32(esp, 0x0021CBB1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021CBB1: ;
    eax = eax >> 2;

loc_0021CBB4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021CBC0; /* jl: less (signed <) */

loc_0021CBB8: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0021CBC0u); RECOMP_ABI_CALL(0x00202B60u, sub_00202B60); /* call 0x00202B60 */

loc_0021CBC0: ;
    eax = MEM32(edi + 8);
    MEM32(eax + esi * 4) = 0;
    eax = MEM32(ebx + 4);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0021CB70; /* jge: greater or equal (signed >=) */

loc_0021CBD2: ;
    POP32(esp, ebp);

loc_0021CBD3: ;
    MEM8(ebx) = 0;
    eax = MEM32(0x5BC54C);
    esi = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax) = esi;
    edx = MEM32(eax);
    esi = 0x7FFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021CBF6; /* jne: not equal / not zero */

loc_0021CBF1: ;
    PUSH32(esp, 0x0021CBF6u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0021CBF6: ;
    ecx = MEM32(ebx + 0x18);
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0021CC0B; /* jne: not equal / not zero */

loc_0021CC06: ;
    PUSH32(esp, 0x0021CC0Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0021CC0B: ;
    ecx = MEM32(ebx + 0x70);
    edi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021CC26; /* je: equal / zero */

loc_0021CC14: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0021CC26; /* jne: not equal / not zero */

loc_0021CC21: ;
    PUSH32(esp, 0x0021CC26u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0021CC26: ;
    eax = MEM32(0x5BC528);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021CC81; /* jne: not equal / not zero */

loc_0021CC2F: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0021CC48; /* jle: less or equal (signed <=) */

loc_0021CC38: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0021CC46; /* jge: greater or equal (signed >=) */

loc_0021CC3D: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_0021CC56;

loc_0021CC46: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */

loc_0021CC48: ;
    if (CMP_NE(_fa, _fb)) goto loc_0021CC54; /* jne: not equal / not zero */

loc_0021CC4A: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021CC56; /* jne: not equal / not zero */

loc_0021CC54: ;
    ecx = 0; /* xor self */

loc_0021CC56: ;
    eax = MEM32(0x46A688);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0021CC61u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021CC61: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x0021CC6Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021CC6D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021CCCC; /* je: equal / zero */

loc_0021CC71: ;
    ecx = eax;
    PUSH32(esp, 0x0021CC78u); RECOMP_ABI_CALL(0x00202CC0u, sub_00202CC0); /* call 0x00202CC0 */

loc_0021CC78: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(0x5BC528) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0021CC8A; /* je: equal / zero */

loc_0021CC81: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x0021CC8Au); RECOMP_ABI_CALL(0x0021C270u, sub_0021C270); /* call 0x0021C270 */

loc_0021CC8A: ;
    MEM8(ebx + 0x14) = 0;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021CCBA; /* je: equal / zero */

loc_0021CC98: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x0021CCA0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021CCA0: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021CCB4; /* je: equal / zero */

loc_0021CCAA: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x0021CCB4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021CCB4: ;
    MEM32(0x5BBAB4) = edi;

loc_0021CCBA: ;
    ecx = MEM32(0x5BB9AC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0021CCD4; /* je: equal / zero */

loc_0021CCC7: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

loc_0021CCCC: ;
    MEM32(0x5BC528) = edi;
    goto loc_0021CC8A;

loc_0021CCD4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0021CCE0
 * Original: 0x0021CCE0 - 0x0021CD15 (53 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021CCE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021CCE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x5BC46C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021CD00; /* jne: not equal / not zero */

loc_0021CCED: ;
    PUSH32(esp, 0x21C110);
    PUSH32(esp, 0x0021CCF7u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021CCF7: ;
    ecx = MEM32(0x5BC46C);
    esp = esp + 4;

loc_0021CD00: ;
    edx = MEM32(esi + 0x34);
    eax = MEM32(ecx);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0xC));
    POP32(esp, esi);
    MEM32(esp + 8) = edx;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC8)); return; /* indirect tail jmp */

}

/**
 * sub_0021CD20
 * Original: 0x0021CD20 - 0x0021CD55 (53 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021CD20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021CD20: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x5BC454);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021CD40; /* jne: not equal / not zero */

loc_0021CD2D: ;
    PUSH32(esp, 0x21C070);
    PUSH32(esp, 0x0021CD37u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021CD37: ;
    ecx = MEM32(0x5BC454);
    esp = esp + 4;

loc_0021CD40: ;
    edx = MEM32(esi + 0x34);
    eax = MEM32(ecx);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0xC));
    POP32(esp, esi);
    MEM32(esp + 8) = edx;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC8)); return; /* indirect tail jmp */

}

/**
 * sub_0021CD60
 * Original: 0x0021CD60 - 0x0021CDA8 (72 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021CD60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021CD60: ;
    eax = MEM32(esp + 4);
    SET_LO8(edx, MEM8(ecx + 0xA8));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    eax = MEM32(eax + 4);
    MEM32(esp + 4) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0021CDA5; /* je: equal / zero */

loc_0021CD75: ;
    ecx = MEM32(0x5BC308);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021CD92; /* jne: not equal / not zero */

loc_0021CD7F: ;
    PUSH32(esp, 0x21BD20);
    PUSH32(esp, 0x0021CD89u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021CD89: ;
    ecx = MEM32(0x5BC308);
    esp = esp + 4;

loc_0021CD92: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = esp + 8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x0021CDA1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021CDA1: ;
    eax = MEM32(esp + 4);

loc_0021CDA5: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021CDB0
 * Original: 0x0021CDB0 - 0x0021CFAE (510 bytes, 153 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021CDB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021CDB0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0xC0);
    eax = esp + 8;
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0021CDC3u); RECOMP_ABI_CALL(0x001F4D10u, sub_001F4D10); /* call 0x001F4D10 */

loc_0021CDC3: ;
    ecx = MEM32(0x46A728);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021CDD8; /* jne: not equal / not zero */

loc_0021CDCD: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0021CDD8: ;
    ecx = MEM32(esi + 0x68);
    edx = MEM32(ecx);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x10C);
    PUSH32(esp, 0xC);
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0021CDECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021CDEC: ;
    eax = MEM32(0x5BC308);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021CE07; /* jne: not equal / not zero */

loc_0021CDF5: ;
    PUSH32(esp, 0x21BD20);
    PUSH32(esp, 0x0021CDFFu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021CDFF: ;
    eax = MEM32(0x5BC308);
    esp = esp + 4;

loc_0021CE07: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, ebx);
    ebx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0021CE11; /* je: equal / zero */

loc_0021CE0E: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0021CE11: ;
    ecx = MEM32(esi + 0xD0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021CE30; /* je: equal / zero */

loc_0021CE1B: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0021CE30; /* jne: not equal / not zero */

loc_0021CE2B: ;
    PUSH32(esp, 0x0021CE30u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0021CE30: ;
    MEM32(esi + 0xD0) = ebx;
    eax = MEM32(0x5BC1EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021CE51; /* jne: not equal / not zero */

loc_0021CE3F: ;
    PUSH32(esp, 0x219880);
    PUSH32(esp, 0x0021CE49u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021CE49: ;
    eax = MEM32(0x5BC1EC);
    esp = esp + 4;

loc_0021CE51: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ebx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0021CE5A; /* je: equal / zero */

loc_0021CE57: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0021CE5A: ;
    ecx = MEM32(esi + 0xD4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021CE79; /* je: equal / zero */

loc_0021CE64: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0021CE79; /* jne: not equal / not zero */

loc_0021CE74: ;
    PUSH32(esp, 0x0021CE79u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0021CE79: ;
    MEM32(esi + 0xD4) = ebx;
    eax = MEM32(esi + 0x60);
    _fa = (uint32_t)(MEM32(edi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x28), eax (32-bit) */
    ebx = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0021CEAD; /* je: equal / zero */

loc_0021CE8C: ;
    ecx = MEM32(esi + 0xD0);
    eax = MEM32(ecx);
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC8); PUSH32(esp, 0x0021CE9Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021CE9D: ;
    eax = MEM32(esi + 0x60);
    _fa = (uint32_t)(MEM32(edi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x28), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021CEB9; /* jne: not equal / not zero */

loc_0021CEA5: ;
    MEM8(esi + 0xA8) = LO8(ebx);
    goto loc_0021CEB4;

loc_0021CEAD: ;
    MEM8(esi + 0xA8) = 0;

loc_0021CEB4: ;
    _fa = (uint32_t)(MEM32(edi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x28), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021CECC; /* je: equal / zero */

loc_0021CEB9: ;
    ecx = MEM32(0x46A728);
    eax = MEM32(esp + 0x14);
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0021CECC: ;
    eax = MEM32(edi + 0x2C);
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    MEM32(esi + 0x64) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0021CEEF; /* jle: less or equal (signed <=) */

loc_0021CEDC: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(0x46A728);
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM32(eax) = edx;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0021CEEF: ;
    _fa = (uint32_t)(MEM32(edi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + 0x2C), 0x80000000u (32-bit) */
    SET_LO8(eax, (CMP_A(_fa & _fb, 0)) ? 1 : 0); /* seta */
    MEM8(esi + 0xD8) = LO8(eax);
    _fa = (uint32_t)(MEM32(edi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + 0x2C), 0x40000000 (32-bit) */
    SET_LO8(ecx, (CMP_G(_fas & _fbs, 0)) ? 1 : 0); /* setg */
    MEM8(esi + 0xD9) = LO8(ecx);
    _fa = (uint32_t)(MEM32(edi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + 0x2C), 0x20000000 (32-bit) */
    SET_LO8(edx, (CMP_G(_fas & _fbs, 0)) ? 1 : 0); /* setg */
    MEM8(esi + 0xDA) = LO8(edx);
    _fa = (uint32_t)(MEM32(edi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x2C), ebx (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(esi + 0xDB) = LO8(eax);
    _fa = (uint32_t)(MEM32(edi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + 0x2C), 0x10000000 (32-bit) */
    SET_LO8(ecx, (CMP_G(_fas & _fbs, 0)) ? 1 : 0); /* setg */
    edx = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(esi + 0x128) = LO8(ecx);
    SET_LO8(edx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, ebx);
    MEM32(esi + 0xDC) = edx;
    eax = MEM32(edi);
    MEM32(esi + 0x7C) = eax;
    ecx = MEM32(edi + 4);
    MEM32(esi + 0x70) = ecx;
    edx = MEM32(edi + 8);
    MEM32(esi + 0x84) = edx;
    eax = MEM32(edi + 0xC);
    MEM32(esi + 0x80) = eax;
    ecx = MEM32(edi + 0x10);
    MEM32(esi + 0x94) = ecx;
    edx = MEM32(edi + 0x14);
    MEM32(esi + 0x90) = edx;
    eax = MEM32(edi + 0x18);
    MEM32(esi + 0x9C) = eax;
    ecx = MEM32(edi + 0x1C);
    MEM32(esi + 0x98) = ecx;
    edx = MEM32(edi + 0x20);
    MEM32(esi + 0x8C) = edx;
    eax = MEM32(edi + 0x24);
    MEM32(esi + 0x88) = eax;
    ecx = MEM32(0x5BC5D8);
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021CFB0
 * Original: 0x0021CFB0 - 0x0021D03C (140 bytes, 49 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021CFB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021CFB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x68);
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021D02E; /* jne: not equal / not zero */

loc_0021CFBC: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(esi + 0x10C);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x50);
    eax = edx;
    eax = eax - ecx;
    ecx = eax;
    ecx = ecx - edi;
    edi = MEM32(esi + 0x54);
    edi = edi + ecx;
    ecx = edi;
    MEM32(esi + 0x54) = edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x58) (32-bit) */
    MEM32(esi + 0x50) = eax;
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0021D038; /* je: equal / zero */

loc_0021CFE5: ;
    ecx = MEM32(esi + 0x108);
    ecx = ecx - 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    ecx = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_0021D002; /* jle: less or equal (signed <=) */

loc_0021CFF4: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0021CFFEu); RECOMP_ABI_CALL(0x001F4C20u, sub_001F4C20); /* call 0x001F4C20 */

loc_0021CFFE: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0021D002: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0021D008u); RECOMP_ABI_CALL(0x0021CD60u, sub_0021CD60); /* call 0x0021CD60 */

loc_0021D008: ;
    ecx = MEM32(esi + 0xDC);
    edx = MEM32(esi + 0x50);
    eax = eax + ecx * 4;
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x108)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x108) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0021D038; /* jle: less or equal (signed <=) */

loc_0021D01E: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0021D02Au); RECOMP_ABI_CALL(0x001F4C20u, sub_001F4C20); /* call 0x001F4C20 */

loc_0021D02A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0021D02E: ;
    ecx = MEM32(esp + 8);
    MEM32(esi + 0x100) = ecx;

loc_0021D038: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021D040
 * Original: 0x0021D040 - 0x0021D075 (53 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021D040(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021D040: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x5BC308);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021D060; /* jne: not equal / not zero */

loc_0021D04D: ;
    PUSH32(esp, 0x21BD20);
    PUSH32(esp, 0x0021D057u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021D057: ;
    ecx = MEM32(0x5BC308);
    esp = esp + 4;

loc_0021D060: ;
    edx = MEM32(esi + 0x34);
    eax = MEM32(ecx);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0xC));
    POP32(esp, esi);
    MEM32(esp + 8) = edx;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC8)); return; /* indirect tail jmp */

}

/**
 * sub_0021D080
 * Original: 0x0021D080 - 0x0021D15B (219 bytes, 74 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021D080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021D080: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ebx = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0021D147; /* je: equal / zero */

loc_0021D090: ;
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021D147; /* je: equal / zero */

loc_0021D09F: ;
    SET_LO8(ecx, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    MEM32(esp + 0x14) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0021D0DB; /* je: equal / zero */

loc_0021D0AB: ;
    ecx = MEM32(0x5BC308);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021D0C8; /* jne: not equal / not zero */

loc_0021D0B5: ;
    PUSH32(esp, 0x21BD20);
    PUSH32(esp, 0x0021D0BFu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021D0BF: ;
    ecx = MEM32(0x5BC308);
    esp = esp + 4;

loc_0021D0C8: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x0021D0D7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021D0D7: ;
    eax = MEM32(esp + 0x14);

loc_0021D0DB: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, edi);
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0021D100; /* je: equal / zero */

loc_0021D0E5: ;
    edx = MEM32(esi + 0x10);
    esi = MEM32(edx + eax * 4);
    ecx = MEM32(ecx + 0x10);
    eax = MEM32(ecx + eax * 4);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0021D0F9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021D0F9: ;
    MEM32(esi + 0xC) = edi;
    eax = esi;
    goto loc_0021D106;

loc_0021D100: ;
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx + eax * 4);

loc_0021D106: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0021D133; /* je: equal / zero */

loc_0021D10B: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax + 0x18);
    MEM32(ecx) = edx;
    ecx = MEM32(ebx + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021D151; /* jne: not equal / not zero */

loc_0021D11B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x5BC298)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(0x5BC298) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021D151; /* je: equal / zero */

loc_0021D123: ;
    edx = MEM32(eax + 0x24);
    POP32(esp, esi);
    MEM32(ebx + 0x3C) = edx;
    eax = 4;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_0021D133: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, esi);
    MEM32(eax) = 0;
    eax = 4;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_0021D147: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = 0;

loc_0021D151: ;
    POP32(esp, esi);
    eax = 4;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0021D160
 * Original: 0x0021D160 - 0x0021D25F (255 bytes, 99 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021D160(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021D160: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x0021D16Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021D16A: ;
    esi = eax;
    SET_LO8(eax, MEM8(esi + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021D17B; /* jne: not equal / not zero */

loc_0021D173: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

loc_0021D17B: ;
    edx = MEM32(edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0021D184u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021D184: ;
    eax = MEM32(esi + 0x40);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021D197; /* je: equal / zero */

loc_0021D18D: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0021D18Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021D18F: ;
    esi = eax;
    MEM32(esp + 0x10) = esi;
    goto loc_0021D19B;

loc_0021D197: ;
    MEM32(esp + 0x10) = esi;

loc_0021D19B: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021D1AF; /* je: equal / zero */

loc_0021D1A3: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021D1AAu); RECOMP_ABI_CALL(0x002170F0u, sub_002170F0); /* call 0x002170F0 */

loc_0021D1AA: ;
    esp = esp + 8;
    ebx = eax;

loc_0021D1AF: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(0x5BC554);
    eax = MEM32(edx + 0x28);
    ebp = MEM32(eax + 0xC);
    esi = MEM32(esp + 0x18);
    MEM32(esp + 0x20) = ecx;
    ecx = edi;
    MEM32(esi) = ebx;
    PUSH32(esp, 0x0021D1D2u); RECOMP_ABI_CALL(0x001EA7B0u, sub_001EA7B0); /* call 0x001EA7B0 */

loc_0021D1D2: ;
    ebx = MEM32(esp + 0x24);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    MEM32(esi + 4) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0021D205; /* je: equal / zero */

loc_0021D1DD: ;
    ecx = MEM32(0x5BC308);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021D1FA; /* jne: not equal / not zero */

loc_0021D1E7: ;
    PUSH32(esp, 0x21BD20);
    PUSH32(esp, 0x0021D1F1u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021D1F1: ;
    ecx = MEM32(0x5BC308);
    esp = esp + 4;

loc_0021D1FA: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x0021D205u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021D205: ;
    eax = MEM32(esp + 0x20);
    esi = esi + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0021D250; /* jge: greater or equal (signed >=) */

loc_0021D210: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + ebp * 4);
    _fa = (uint32_t)(MEM8(ecx + 0x26)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x26), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021D247; /* jne: not equal / not zero */

loc_0021D223: ;
    SET_LO8(eax, MEM8(ecx + 0x25));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021D247; /* jne: not equal / not zero */

loc_0021D22A: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 8);
    PUSH32(esp, esi);
    edx = edx + edi;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC0); PUSH32(esp, 0x0021D23Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021D23F: ;
    eax = eax + 3;
    eax = eax & 0xFFFFFFFCu;
    esi = esi + eax;

loc_0021D247: ;
    eax = MEM32(esp + 0x20);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021D210; /* jl: less (signed <) */

loc_0021D250: ;
    ecx = edi;
    PUSH32(esp, 0x0021D257u); RECOMP_ABI_CALL(0x001EA7B0u, sub_001EA7B0); /* call 0x001EA7B0 */

loc_0021D257: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0021D260
 * Original: 0x0021D260 - 0x0021D50A (682 bytes, 243 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021D260(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021D260: ;
    esp = esp - 0x14;
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x0021D26Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021D26D: ;
    esi = eax;
    SET_LO8(eax, MEM8(esi + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM32(esp + 0x14) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_0021D284; /* jne: not equal / not zero */

loc_0021D27A: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 20; return; /* ret 16 */

loc_0021D284: ;
    SET_LO8(eax, MEM8(esp + 0x2C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021D2B8; /* je: equal / zero */

loc_0021D28C: ;
    ecx = MEM32(0x5BC308);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021D2A9; /* jne: not equal / not zero */

loc_0021D296: ;
    PUSH32(esp, 0x21BD20);
    PUSH32(esp, 0x0021D2A0u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021D2A0: ;
    ecx = MEM32(0x5BC308);
    esp = esp + 4;

loc_0021D2A9: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x0021D2B8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021D2B8: ;
    ecx = MEM32(esi + 0x28);
    eax = MEM32(ecx + 0xC);
    edx = MEM32(0x5BC554);
    ecx = 0; /* xor self */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x24);
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(edx + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0xC);
    ebx = ebx + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x18) = edi;
    if (CMP_GE(_fas, _fbs)) goto loc_0021D4BB; /* jge: greater or equal (signed >=) */

loc_0021D2ED: ;
    goto loc_0021D2F3;

loc_0021D2EF: ;
    esi = MEM32(esp + 0x1C);

loc_0021D2F3: ;
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    esi = MEM32(eax + edi * 4);
    SET_LO8(eax, MEM8(esi + 0x25));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021D332; /* je: equal / zero */

loc_0021D303: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    MEM32(esp + 0x14) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x0021D314u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021D314: ;
    eax = MEM32(esi);
    edi = MEM32(0x5BC214);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x0021D321u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021D321: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021D370; /* je: equal / zero */

loc_0021D325: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021D365; /* je: equal / zero */

loc_0021D329: ;
    eax = MEM32(eax + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021D325; /* jne: not equal / not zero */

loc_0021D330: ;
    goto loc_0021D370;

loc_0021D332: ;
    ecx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021D3AC; /* jl: less (signed <) */

loc_0021D33F: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x0021D347u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021D347: ;
    eax = MEM32(esi);
    edi = MEM32(0x5BC214);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x0021D354u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021D354: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021D370; /* je: equal / zero */

loc_0021D358: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021D365; /* je: equal / zero */

loc_0021D35C: ;
    eax = MEM32(eax + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021D358; /* jne: not equal / not zero */

loc_0021D363: ;
    goto loc_0021D370;

loc_0021D365: ;
    SET_LO8(eax, MEM8(esi + 0x34));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021D4A6; /* jne: not equal / not zero */

loc_0021D370: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x24);
    eax = eax - 0;
    if ((eax == 0)) goto loc_0021D39F; /* je: equal / zero */

loc_0021D379: ;
    eax = eax - 2;
    if ((eax == 0)) goto loc_0021D392; /* je: equal / zero */

loc_0021D37E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0021D4A6; /* jne: not equal / not zero */

loc_0021D385: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x0021D38Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021D38D: ;
    goto loc_0021D4A6;

loc_0021D392: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x0021D39Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021D39A: ;
    goto loc_0021D4A6;

loc_0021D39F: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x0021D3A7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021D3A7: ;
    goto loc_0021D4A6;

loc_0021D3AC: ;
    SET_LO8(eax, MEM8(esp + 0x34));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021D3DC; /* je: equal / zero */

loc_0021D3B4: ;
    ecx = MEM32(0x5BC1EC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021D3D1; /* jne: not equal / not zero */

loc_0021D3BE: ;
    PUSH32(esp, 0x219880);
    PUSH32(esp, 0x0021D3C8u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021D3C8: ;
    ecx = MEM32(0x5BC1EC);
    esp = esp + 4;

loc_0021D3D1: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0xC8); PUSH32(esp, 0x0021D3DCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021D3DC: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx);
    ecx = ecx + MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0021D477; /* jle: less or equal (signed <=) */

loc_0021D3EB: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x0021D3F3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021D3F3: ;
    eax = MEM32(esi);
    edi = MEM32(0x5BC214);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x0021D400u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021D400: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021D418; /* je: equal / zero */

loc_0021D404: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021D411; /* je: equal / zero */

loc_0021D408: ;
    eax = MEM32(eax + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021D404; /* jne: not equal / not zero */

loc_0021D40F: ;
    goto loc_0021D418;

loc_0021D411: ;
    SET_LO8(eax, MEM8(esi + 0x34));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021D445; /* jne: not equal / not zero */

loc_0021D418: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x24);
    eax = eax - 0;
    if ((eax == 0)) goto loc_0021D43D; /* je: equal / zero */

loc_0021D421: ;
    eax = eax - 2;
    if ((eax == 0)) goto loc_0021D433; /* je: equal / zero */

loc_0021D426: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0021D445; /* jne: not equal / not zero */

loc_0021D429: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x0021D431u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021D431: ;
    goto loc_0021D445;

loc_0021D433: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x0021D43Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021D43B: ;
    goto loc_0021D445;

loc_0021D43D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x0021D445u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021D445: ;
    SET_LO8(eax, MEM8(esp + 0x34));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021D4A6; /* je: equal / zero */

loc_0021D44D: ;
    ecx = MEM32(0x5BC1EC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021D46A; /* jne: not equal / not zero */

loc_0021D457: ;
    PUSH32(esp, 0x219880);
    PUSH32(esp, 0x0021D461u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021D461: ;
    ecx = MEM32(0x5BC1EC);
    esp = esp + 4;

loc_0021D46A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0xC8); PUSH32(esp, 0x0021D475u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021D475: ;
    goto loc_0021D4A6;

loc_0021D477: ;
    eax = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    eax = ebx + 4;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + ebp;
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC4); PUSH32(esp, 0x0021D49Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021D49E: ;
    eax = eax + 7;
    eax = eax & 0xFFFFFFFCu;
    ebx = ebx + eax;

loc_0021D4A6: ;
    edi = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x20);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x18) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0021D2EF; /* jl: less (signed <) */

loc_0021D4BB: ;
    SET_LO8(eax, MEM8(esp + 0x34));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    edx = MEM32(esp + 0x28);
    esi = MEM32(edx + 4);
    POP32(esp, edi);
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0021D4F8; /* je: equal / zero */

loc_0021D4CC: ;
    ecx = MEM32(0x5BC308);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021D4E9; /* jne: not equal / not zero */

loc_0021D4D6: ;
    PUSH32(esp, 0x21BD20);
    PUSH32(esp, 0x0021D4E0u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021D4E0: ;
    ecx = MEM32(0x5BC308);
    esp = esp + 4;

loc_0021D4E9: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC8); PUSH32(esp, 0x0021D4F8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021D4F8: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x0021D500u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021D500: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0021D510
 * Original: 0x0021D510 - 0x0021D711 (513 bytes, 177 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021D510(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021D510: ;
    esp = esp - 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx);
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x0021D51Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021D51B: ;
    ecx = eax;
    SET_LO8(eax, MEM8(ecx + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM32(esp + 0x14) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0021D531; /* jne: not equal / not zero */

loc_0021D528: ;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 20; return; /* ret 16 */

loc_0021D531: ;
    SET_LO8(eax, MEM8(esp + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    edx = MEM32(esp + 0x28);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x3C);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0021D572; /* je: equal / zero */

loc_0021D542: ;
    ecx = MEM32(0x5BC308);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021D55F; /* jne: not equal / not zero */

loc_0021D54C: ;
    PUSH32(esp, 0x21BD20);
    PUSH32(esp, 0x0021D556u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021D556: ;
    ecx = MEM32(0x5BC308);
    esp = esp + 4;

loc_0021D55F: ;
    edx = MEM32(esp + 0x2C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC8); PUSH32(esp, 0x0021D56Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021D56E: ;
    ecx = MEM32(esp + 0x1C);

loc_0021D572: ;
    edi = MEM32(esp + 0x2C);
    edx = MEM32(edi);
    ecx = MEM32(ecx + 0x28);
    eax = edi + 8;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + edx * 4);
    edx = MEM32(0x5BC554);
    eax = MEM32(edx + 0x28);
    edx = MEM32(ecx + 0xC);
    esi = MEM32(ebp + 8);
    eax = MEM32(eax + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x18) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0021D5AF; /* jne: not equal / not zero */

loc_0021D5A9: ;
    MEM32(esp + 0x10) = edx;
    goto loc_0021D5BF;

loc_0021D5AF: ;
    edx = MEM32(ebp + 0x10);
    SET_LO16(ecx, MEM16(edx));
    MEM16(esp + 0x10) = LO16(ecx);
    ecx = 1;

loc_0021D5BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x1C) (32-bit) */
    edx = eax;
    MEM32(esp + 0x28) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0021D6CB; /* jge: greater or equal (signed >=) */

loc_0021D5CF: ;
    eax = ecx + ecx;
    MEM32(esp + 0x24) = eax;

loc_0021D5D6: ;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(ecx + 0x28);
    ecx = MEM32(eax + 8);
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    esi = MEM32(ecx + edx * 4);
    if (CMP_GE(_fas, _fbs)) goto loc_0021D650; /* jge: greater or equal (signed >=) */

loc_0021D5EC: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x0021D5F4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021D5F4: ;
    eax = MEM32(esi);
    edi = MEM32(0x5BC214);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x0021D601u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021D601: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021D61D; /* je: equal / zero */

loc_0021D605: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021D612; /* je: equal / zero */

loc_0021D609: ;
    eax = MEM32(eax + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021D605; /* jne: not equal / not zero */

loc_0021D610: ;
    goto loc_0021D61D;

loc_0021D612: ;
    SET_LO8(eax, MEM8(esi + 0x34));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021D6B2; /* jne: not equal / not zero */

loc_0021D61D: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x24);
    eax = eax - 0;
    if ((eax == 0)) goto loc_0021D646; /* je: equal / zero */

loc_0021D626: ;
    eax = eax - 2;
    if ((eax == 0)) goto loc_0021D63C; /* je: equal / zero */

loc_0021D62B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0021D6B2; /* jne: not equal / not zero */

loc_0021D632: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x0021D63Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021D63A: ;
    goto loc_0021D6B2;

loc_0021D63C: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x0021D644u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021D644: ;
    goto loc_0021D6B2;

loc_0021D646: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x0021D64Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021D64E: ;
    goto loc_0021D6B2;

loc_0021D650: ;
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(esp + 0x34);
    edi = MEM32(esp + 0x18);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    edx = edx + ebx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x28) = edi;
    { uint32_t _icall_target = MEM32(eax + 0xC4); PUSH32(esp, 0x0021D678u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021D678: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(ebp + 8);
    eax = eax + 3;
    eax = eax & 0xFFFFFFFCu;
    edx = edx + eax;
    eax = edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x14) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0021D69B; /* jne: not equal / not zero */

loc_0021D691: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x10) = ecx;
    goto loc_0021D6B2;

loc_0021D69B: ;
    eax = MEM32(esp + 0x24);
    edx = MEM32(ebp + 0x10);
    SET_LO16(ecx, MEM16(eax + edx));
    eax = eax + 2;
    MEM16(esp + 0x10) = LO16(ecx);
    MEM32(esp + 0x24) = eax;

loc_0021D6B2: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x1C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(esp + 0x28) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0021D5D6; /* jl: less (signed <) */

loc_0021D6C7: ;
    edi = MEM32(esp + 0x30);

loc_0021D6CB: ;
    SET_LO8(eax, MEM8(esp + 0x3C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    esi = MEM32(edi + 4);
    POP32(esp, ebp);
    if (TEST_Z(_fa, _fb)) goto loc_0021D6FF; /* je: equal / zero */

loc_0021D6D7: ;
    ecx = MEM32(0x5BC308);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021D6F4; /* jne: not equal / not zero */

loc_0021D6E1: ;
    PUSH32(esp, 0x21BD20);
    PUSH32(esp, 0x0021D6EBu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021D6EB: ;
    ecx = MEM32(0x5BC308);
    esp = esp + 4;

loc_0021D6F4: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x0021D6FFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021D6FF: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x0021D706u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021D706: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0021D720
 * Original: 0x0021D720 - 0x0021D762 (66 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021D720(void)
{

loc_0021D720: ;
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi);
    ebx = ecx;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x0021D730u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021D730: ;
    SET_LO8(ecx, MEM8(esi + 0xA8));
    MEM8(esp + 0x10) = LO8(ecx);
    edx = MEM32(esp + 0x10);
    ecx = MEM32(ebx + 0x18);
    ebx = MEM32(esi);
    edi = eax;
    eax = MEM32(esi + 0xC4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0021D754u); RECOMP_ABI_CALL(0x0021D160u, sub_0021D160); /* call 0x0021D160 */

loc_0021D754: ;
    eax = eax + edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x60); PUSH32(esp, 0x0021D75Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021D75C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021D770
 * Original: 0x0021D770 - 0x0021D7B7 (71 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021D770(void)
{

loc_0021D770: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(esi + 0xA8));
    edx = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x18);
    MEM8(esp + 0x10) = LO8(eax);
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esi + 0xC4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0021D798u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021D798: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0021D7A0u); RECOMP_ABI_CALL(0x0021D260u, sub_0021D260); /* call 0x0021D260 */

loc_0021D7A0: ;
    edi = MEM32(esi);
    ecx = esi;
    ebx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edi + 0x64); PUSH32(esp, 0x0021D7A9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021D7A9: ;
    eax = eax + ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x60); PUSH32(esp, 0x0021D7B1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021D7B1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021D7C0
 * Original: 0x0021D7C0 - 0x0021D807 (71 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021D7C0(void)
{

loc_0021D7C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(esi + 0xA8));
    edx = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x18);
    MEM8(esp + 0x10) = LO8(eax);
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esi + 0xC4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0021D7E8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021D7E8: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0021D7F0u); RECOMP_ABI_CALL(0x0021D510u, sub_0021D510); /* call 0x0021D510 */

loc_0021D7F0: ;
    edi = MEM32(esi);
    ecx = esi;
    ebx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edi + 0x64); PUSH32(esp, 0x0021D7F9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021D7F9: ;
    eax = eax + ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x60); PUSH32(esp, 0x0021D801u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021D801: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021D810
 * Original: 0x0021D810 - 0x0021D8D0 (192 bytes, 62 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021D810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021D810: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021D8BD; /* je: equal / zero */

loc_0021D81D: ;
    eax = MEM32(esp + 0xC);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021D8BD; /* je: equal / zero */

loc_0021D82C: ;
    SET_LO8(ecx, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    MEM32(esp + 0x10) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0021D868; /* je: equal / zero */

loc_0021D838: ;
    ecx = MEM32(0x5BC308);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021D855; /* jne: not equal / not zero */

loc_0021D842: ;
    PUSH32(esp, 0x21BD20);
    PUSH32(esp, 0x0021D84Cu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021D84C: ;
    ecx = MEM32(0x5BC308);
    esp = esp + 4;

loc_0021D855: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x0021D864u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021D864: ;
    eax = MEM32(esp + 0x10);

loc_0021D868: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, edi);
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0021D88D; /* je: equal / zero */

loc_0021D872: ;
    edx = MEM32(esi + 0x10);
    esi = MEM32(edx + eax * 4);
    ecx = MEM32(ecx + 0x10);
    eax = MEM32(ecx + eax * 4);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0021D886u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021D886: ;
    MEM32(esi + 0xC) = edi;
    eax = esi;
    goto loc_0021D893;

loc_0021D88D: ;
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx + eax * 4);

loc_0021D893: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0021D8AA; /* je: equal / zero */

loc_0021D898: ;
    edx = MEM32(eax + 0x18);
    eax = MEM32(esp + 8);
    MEM32(eax) = edx;
    eax = 4;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_0021D8AA: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = 0;
    eax = 4;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_0021D8BD: ;
    edx = MEM32(esp + 8);
    MEM32(edx) = 0;
    eax = 4;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0021D8D0
 * Original: 0x0021D8D0 - 0x0021DA53 (387 bytes, 131 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0021D8D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021D8D0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi);
    ebp = ecx;
    SET_LO8(ecx, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0021D917; /* je: equal / zero */

loc_0021D8E7: ;
    ecx = MEM32(0x5BC308);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021D904; /* jne: not equal / not zero */

loc_0021D8F1: ;
    PUSH32(esp, 0x21BD20);
    PUSH32(esp, 0x0021D8FBu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021D8FB: ;
    ecx = MEM32(0x5BC308);
    esp = esp + 4;

loc_0021D904: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC8); PUSH32(esp, 0x0021D913u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021D913: ;
    eax = MEM32(esp + 0x14);

loc_0021D917: ;
    esi = esi + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edi = 4;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0021DA2E; /* jle: less or equal (signed <=) */

loc_0021D927: ;
    ecx = esi;
    /* nop */

loc_0021D930: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021D9F6; /* je: equal / zero */

loc_0021D939: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021D930; /* jne: not equal / not zero */

loc_0021D93F: ;
    eax = ZX8(MEM8(ebp + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    ecx = MEM32(0x5BC53C);
    if (TEST_NZ(_fa, _fb)) goto loc_0021D953; /* jne: not equal / not zero */

loc_0021D94D: ;
    ecx = MEM32(0x5BC538);

loc_0021D953: ;
    edx = MEM32(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = MEM32(edx + eax * 4);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = 0x46A694;
    PUSH32(esp, 0x0021D966u); RECOMP_ABI_CALL(0x001AA470u, sub_001AA470); /* call 0x001AA470 */

loc_0021D966: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x0021D976u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021D976: ;
    ecx = MEM32(esp + 0x18);
    edx = ecx;
    ebx = eax;
    ecx = ecx >> 2;
    edi = ebx;
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
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    MEM8(ebx + eax) = 0;
    PUSH32(esp, 0x0021D99Au); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_0021D99A: ;
    ecx = eax;
    PUSH32(esp, 0x0021D9A1u); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_0021D9A1: ;
    edi = MEM32(esp + 0x14);
    esi = eax;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021D9B5; /* je: equal / zero */

loc_0021D9AD: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021D9B5u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021D9B5: ;
    MEM32(edi) = esi;
    eax = ZX8(MEM8(ebp + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    ecx = MEM32(0x5BC53C);
    if (TEST_NZ(_fa, _fb)) goto loc_0021D9CB; /* jne: not equal / not zero */

loc_0021D9C5: ;
    ecx = MEM32(0x5BC538);

loc_0021D9CB: ;
    edx = MEM32(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = MEM32(edx + eax * 4);
    PUSH32(esp, eax);
    ecx = 0x46A694;
    PUSH32(esp, 0x0021D9DDu); RECOMP_ABI_CALL(0x001AA470u, sub_001AA470); /* call 0x001AA470 */

loc_0021D9DD: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x0021D9E8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021D9E8: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax + 4;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

loc_0021D9F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021D93F; /* je: equal / zero */

loc_0021D9FE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0021DA04u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_0021DA04: ;
    ecx = eax;
    PUSH32(esp, 0x0021DA0Bu); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_0021DA0B: ;
    edi = MEM32(esp + 0x10);
    esi = eax;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021DA1F; /* je: equal / zero */

loc_0021DA17: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021DA1Fu); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021DA1F: ;
    eax = MEM32(esp + 0x14);
    MEM32(edi) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax + 4;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

loc_0021DA2E: ;
    PUSH32(esp, 0x0021DA33u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_0021DA33: ;
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021DA45; /* je: equal / zero */

loc_0021DA3D: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021DA45u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021DA45: ;
    eax = edi;
    POP32(esp, edi);
    MEM32(esi) = 0;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0021DA60
 * Original: 0x0021DA60 - 0x0021DAE8 (136 bytes, 55 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021DA60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021DA60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021DAD4; /* je: equal / zero */

loc_0021DA6C: ;
    edx = eax + 1;
    /* nop */

loc_0021DA70: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021DA70; /* jne: not equal / not zero */

loc_0021DA77: ;
    ebx = MEM32(esp + 0x10);
    eax = eax - edx;
    PUSH32(esp, edi);
    edi = eax + 4;
    SET_LO8(eax, MEM8(esp + 0x1C));
    edi = edi & 0xFFFFFFFCu;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM32(ebx) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_0021DAB6; /* je: equal / zero */

loc_0021DA8E: ;
    ecx = MEM32(0x5BC308);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021DAAB; /* jne: not equal / not zero */

loc_0021DA98: ;
    PUSH32(esp, 0x21BD20);
    PUSH32(esp, 0x0021DAA2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021DAA2: ;
    ecx = MEM32(0x5BC308);
    esp = esp + 4;

loc_0021DAAB: ;
    eax = MEM32(ecx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC8); PUSH32(esp, 0x0021DAB6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021DAB6: ;
    edx = MEM32(esi);
    eax = ebx + 4;
    esi = eax;
    /* nop */

loc_0021DAC0: ;
    SET_LO8(ecx, MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi) = LO8(ecx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021DAC0; /* jne: not equal / not zero */

loc_0021DACA: ;
    eax = eax + edi;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax - ebx;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_0021DAD4: ;
    ebx = MEM32(esp + 0x10);
    eax = ebx + 4;
    POP32(esp, esi);
    MEM32(ebx) = 0;
    eax = eax - ebx;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0021DAF0
 * Original: 0x0021DAF0 - 0x0021DB25 (53 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021DAF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021DAF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x5BC180);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021DB10; /* jne: not equal / not zero */

loc_0021DAFD: ;
    PUSH32(esp, 0x21B7D0);
    PUSH32(esp, 0x0021DB07u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021DB07: ;
    ecx = MEM32(0x5BC180);
    esp = esp + 4;

loc_0021DB10: ;
    edx = MEM32(esi + 0x34);
    eax = MEM32(ecx);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0xC));
    POP32(esp, esi);
    MEM32(esp + 8) = edx;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC8)); return; /* indirect tail jmp */

}

/**
 * sub_0021DB30
 * Original: 0x0021DB30 - 0x0021DB4E (30 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021DB30(void)
{

loc_0021DB30: ;
    PUSH32(esp, 0x21B7D0);
    PUSH32(esp, 0x0021DB3Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021DB3A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BC17C);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021DB4Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0021DB4D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0021DB50
 * Original: 0x0021DB50 - 0x0021DBE9 (153 bytes, 53 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021DB50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021DB50: ;
    eax = MEM32(0x5BC508);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021DB78; /* je: equal / zero */

loc_0021DB5A: ;
    PUSH32(esp, 0x21BD20);
    PUSH32(esp, 0x0021DB64u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021DB64: ;
    ecx = MEM32(esp + 8);
    esp = esp + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(0x5BC304);
    PUSH32(esp, 0x0021DB77u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0021DB77: ;
    esp += 4; return; /* ret */

loc_0021DB78: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x0021DB87u); RECOMP_ABI_CALL(0x001F7E00u, sub_001F7E00); /* call 0x001F7E00 */

loc_0021DB87: ;
    esi = eax;
    esp = esp + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021DBD4; /* je: equal / zero */

loc_0021DB90: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0021DB99u); RECOMP_ABI_CALL(0x001F7CD0u, sub_001F7CD0); /* call 0x001F7CD0 */

loc_0021DB99: ;
    MEM32(esi) = 0x3F5C90;
    ecx = esi;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x0021DBADu); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021DBAD: ;
    ecx = esi;
    MEM32(esi) = 0x3F7C90;
    PUSH32(esp, 0x0021DBBAu); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021DBBA: ;
    MEM32(esi) = 0x3F7C90;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0021DBC7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021DBC7: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0021DBD0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021DBD0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0021DBD4: ;
    esi = 0; /* xor self */
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0021DBDDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021DBDD: ;
    edx = MEM32(esi);
    PUSH32(esp, esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0021DBE5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021DBE5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0021DBF0
 * Original: 0x0021DBF0 - 0x0021DC49 (89 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021DBF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021DBF0: ;
    eax = MEM32(0x5BC508);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021DC1A; /* je: equal / zero */

loc_0021DBFD: ;
    PUSH32(esp, 0x21BD20);
    PUSH32(esp, 0x0021DC07u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021DC07: ;
    ecx = MEM32(esp + 0xC);
    esp = esp + 4;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0021DC16u); RECOMP_ABI_CALL(0x0020E610u, sub_0020E610); /* call 0x0020E610 */

loc_0021DC16: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_0021DC1A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x0021DC24u); RECOMP_ABI_CALL(0x001F7E70u, sub_001F7E70); /* call 0x001F7E70 */

loc_0021DC24: ;
    esi = eax;
    esp = esp + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021DC42; /* je: equal / zero */

loc_0021DC2D: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0021DC35u); RECOMP_ABI_CALL(0x00216980u, sub_00216980); /* call 0x00216980 */

loc_0021DC35: ;
    MEM32(esi) = 0x3F7C90;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_0021DC42: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021DC50
 * Original: 0x0021DC50 - 0x0021DCA6 (86 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021DC50(void)
{

loc_0021DC50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC30C);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x46A768);
    ecx = esi;
    PUSH32(esp, 0x0021DC6Du); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0021DC6D: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4);
    eax = MEM32(ecx);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 1;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0021DC8Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021DC8B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46A764);
    PUSH32(esp, 0x46A760);
    PUSH32(esp, 0x46A75C);
    ecx = esi;
    PUSH32(esp, 0x0021DCA2u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0021DCA2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0021DCB0
 * Original: 0x0021DCB0 - 0x0021DD06 (86 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021DCB0(void)
{

loc_0021DCB0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC32C);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x46A778);
    ecx = esi;
    PUSH32(esp, 0x0021DCCDu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0021DCCD: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4);
    eax = MEM32(ecx);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 1;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0021DCEBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021DCEB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46A774);
    PUSH32(esp, 0x46A770);
    PUSH32(esp, 0x46A76C);
    ecx = esi;
    PUSH32(esp, 0x0021DD02u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0021DD02: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0021DD10
 * Original: 0x0021DD10 - 0x0021DDB4 (164 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021DD10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021DD10: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC344);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 6);
    PUSH32(esp, 0x46A7C4);
    ecx = esi;
    PUSH32(esp, 0x0021DD2Eu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0021DD2E: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebp = MEM32(edx + edi * 4 + 8);
    PUSH32(esp, 0x0021DD3Du); RECOMP_ABI_CALL(0x001F3210u, sub_001F3210); /* call 0x001F3210 */

loc_0021DD3D: ;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x26) = 0;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ecx = MEM32(ecx + edi * 4 + 0xC);
    edx = MEM32(ecx);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0021DD63u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021DD63: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebp = MEM32(edx + edi * 4 + 0x10);
    PUSH32(esp, 0x0021DD72u); RECOMP_ABI_CALL(0x001F3210u, sub_001F3210); /* call 0x001F3210 */

loc_0021DD72: ;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x26) = 0;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ecx = MEM32(ecx + edi * 4 + 0x14);
    edx = MEM32(ecx);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0021DD98u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021DD98: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46A7AC);
    PUSH32(esp, 0x46A794);
    PUSH32(esp, 0x46A77C);
    ecx = esi;
    PUSH32(esp, 0x0021DDAFu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0021DDAF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0021DDC0
 * Original: 0x0021DDC0 - 0x0021DE16 (86 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021DDC0(void)
{

loc_0021DDC0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC37C);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x46A7E8);
    ecx = esi;
    PUSH32(esp, 0x0021DDDDu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0021DDDD: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4);
    eax = MEM32(ecx);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 1;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0021DDFBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021DDFB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46A7E4);
    PUSH32(esp, 0x46A7E0);
    PUSH32(esp, 0x46A7DC);
    ecx = esi;
    PUSH32(esp, 0x0021DE12u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0021DE12: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0021DE20
 * Original: 0x0021DE20 - 0x0021DE76 (86 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021DE20(void)
{

loc_0021DE20: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC39C);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x46A7F8);
    ecx = esi;
    PUSH32(esp, 0x0021DE3Du); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0021DE3D: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4);
    eax = MEM32(ecx);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 1;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0021DE5Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021DE5B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46A7F4);
    PUSH32(esp, 0x46A7F0);
    PUSH32(esp, 0x46A7EC);
    ecx = esi;
    PUSH32(esp, 0x0021DE72u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0021DE72: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0021DE80
 * Original: 0x0021DE80 - 0x0021DEEB (107 bytes, 35 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021DE80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021DE80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x5BC3C8);
    eax = MEM32(edi + 0x28);
    ebx = MEM32(eax + 0xC);
    PUSH32(esp, 3);
    PUSH32(esp, 0x46A820);
    ecx = edi;
    PUSH32(esp, 0x0021DE9Du); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0021DE9D: ;
    ecx = MEM32(edi + 0x28);
    eax = MEM32(0x5BC180);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edx = MEM32(ecx + 8);
    esi = MEM32(edx + ebx * 4 + 8);
    if (TEST_NZ(_fa, _fb)) goto loc_0021DEBD; /* jne: not equal / not zero */

loc_0021DEB0: ;
    PUSH32(esp, 0x21B7D0);
    PUSH32(esp, 0x0021DEBAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021DEBA: ;
    esp = esp + 4;

loc_0021DEBD: ;
    eax = MEM32(0x5BC180);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x46A814);
    MEM32(esi + 0x3C) = eax;
    SET_LO8(eax, 1);
    PUSH32(esp, 0x46A808);
    PUSH32(esp, 0x46A7FC);
    ecx = edi;
    MEM8(esi + 0x35) = LO8(eax);
    MEM8(esi + 0x40) = LO8(eax);
    MEM8(esi + 0x41) = LO8(eax);
    PUSH32(esp, 0x0021DEE7u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0021DEE7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0021DEF0
 * Original: 0x0021DEF0 - 0x0021DF8E (158 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021DEF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021DEF0: ;
    eax = MEM32(0x5BB930);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x5BC428);
    esi = MEM32(edi + 0x28);
    PUSH32(esp, 0x3E226C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0021DF0Eu); RECOMP_ABI_CALL(0x001E8800u, sub_001E8800); /* call 0x001E8800 */

loc_0021DF0E: ;
    ecx = MEM32(esi + 8);
    esi = MEM32(esi + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0021DF2A; /* jle: less or equal (signed <=) */

loc_0021DF1A: ;
    /* nop */

loc_0021DF20: ;
    _fa = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + edx * 4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021DF87; /* je: equal / zero */

loc_0021DF25: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021DF20; /* jl: less (signed <) */

loc_0021DF2A: ;
    ebx = ebx | 0xFFFFFFFFu;

loc_0021DF2D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0021DF36u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021DF36: ;
    esi = eax;
    eax = MEM32(0x5BC454);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021DF4E; /* jne: not equal / not zero */

loc_0021DF41: ;
    PUSH32(esp, 0x21C070);
    PUSH32(esp, 0x0021DF4Bu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021DF4B: ;
    esp = esp + 4;

loc_0021DF4E: ;
    eax = MEM32(0x5BC454);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x38) = 0;
    MEM32(esi + 0x1C) = 0x5BBCDC;
    PUSH32(esp, 0x0021DF6Du); RECOMP_ABI_CALL(0x002093F0u, sub_002093F0); /* call 0x002093F0 */

loc_0021DF6D: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_0021DF8B; /* jne: not equal / not zero */

loc_0021DF7E: ;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_0021DF87: ;
    ebx = edx;
    goto loc_0021DF2D;

loc_0021DF8B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0021DF90
 * Original: 0x0021DF90 - 0x0021E02E (158 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021DF90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021DF90: ;
    eax = MEM32(0x5BB930);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x5BC42C);
    esi = MEM32(edi + 0x28);
    PUSH32(esp, 0x3E226C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0021DFAEu); RECOMP_ABI_CALL(0x001E8800u, sub_001E8800); /* call 0x001E8800 */

loc_0021DFAE: ;
    ecx = MEM32(esi + 8);
    esi = MEM32(esi + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0021DFCA; /* jle: less or equal (signed <=) */

loc_0021DFBA: ;
    /* nop */

loc_0021DFC0: ;
    _fa = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + edx * 4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021E027; /* je: equal / zero */

loc_0021DFC5: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021DFC0; /* jl: less (signed <) */

loc_0021DFCA: ;
    ebx = ebx | 0xFFFFFFFFu;

loc_0021DFCD: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0021DFD6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021DFD6: ;
    esi = eax;
    eax = MEM32(0x5BC46C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021DFEE; /* jne: not equal / not zero */

loc_0021DFE1: ;
    PUSH32(esp, 0x21C110);
    PUSH32(esp, 0x0021DFEBu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021DFEB: ;
    esp = esp + 4;

loc_0021DFEE: ;
    eax = MEM32(0x5BC46C);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x38) = 0;
    MEM32(esi + 0x1C) = 0x5BBD90;
    PUSH32(esp, 0x0021E00Du); RECOMP_ABI_CALL(0x002093F0u, sub_002093F0); /* call 0x002093F0 */

loc_0021E00D: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_0021E02B; /* jne: not equal / not zero */

loc_0021E01E: ;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_0021E027: ;
    ebx = edx;
    goto loc_0021DFCD;

loc_0021E02B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0021E030
 * Original: 0x0021E030 - 0x0021E0C9 (153 bytes, 53 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021E030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021E030: ;
    eax = MEM32(0x5BC508);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021E058; /* je: equal / zero */

loc_0021E03A: ;
    PUSH32(esp, 0x21C070);
    PUSH32(esp, 0x0021E044u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021E044: ;
    ecx = MEM32(esp + 8);
    esp = esp + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(0x5BC450);
    PUSH32(esp, 0x0021E057u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0021E057: ;
    esp += 4; return; /* ret */

loc_0021E058: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x0021E067u); RECOMP_ABI_CALL(0x001F7E00u, sub_001F7E00); /* call 0x001F7E00 */

loc_0021E067: ;
    esi = eax;
    esp = esp + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021E0B4; /* je: equal / zero */

loc_0021E070: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0021E079u); RECOMP_ABI_CALL(0x001F7CD0u, sub_001F7CD0); /* call 0x001F7CD0 */

loc_0021E079: ;
    MEM32(esi) = 0x3F5C90;
    ecx = esi;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x0021E08Du); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021E08D: ;
    ecx = esi;
    MEM32(esi) = 0x3F7AB0;
    PUSH32(esp, 0x0021E09Au); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021E09A: ;
    MEM32(esi) = 0x3F7AB0;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0021E0A7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021E0A7: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0021E0B0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021E0B0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0021E0B4: ;
    esi = 0; /* xor self */
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0021E0BDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021E0BD: ;
    edx = MEM32(esi);
    PUSH32(esp, esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0021E0C5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021E0C5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0021E0D0
 * Original: 0x0021E0D0 - 0x0021E129 (89 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021E0D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021E0D0: ;
    eax = MEM32(0x5BC508);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021E0FA; /* je: equal / zero */

loc_0021E0DD: ;
    PUSH32(esp, 0x21C070);
    PUSH32(esp, 0x0021E0E7u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021E0E7: ;
    ecx = MEM32(esp + 0xC);
    esp = esp + 4;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0021E0F6u); RECOMP_ABI_CALL(0x0020E610u, sub_0020E610); /* call 0x0020E610 */

loc_0021E0F6: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_0021E0FA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x0021E104u); RECOMP_ABI_CALL(0x001F7E70u, sub_001F7E70); /* call 0x001F7E70 */

loc_0021E104: ;
    esi = eax;
    esp = esp + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021E122; /* je: equal / zero */

loc_0021E10D: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0021E115u); RECOMP_ABI_CALL(0x00216980u, sub_00216980); /* call 0x00216980 */

loc_0021E115: ;
    MEM32(esi) = 0x3F7AB0;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_0021E122: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021E130
 * Original: 0x0021E130 - 0x0021E186 (86 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021E130(void)
{

loc_0021E130: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC458);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x46A838);
    ecx = esi;
    PUSH32(esp, 0x0021E14Du); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0021E14D: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4);
    eax = MEM32(ecx);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 1;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0021E16Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021E16B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46A834);
    PUSH32(esp, 0x46A830);
    PUSH32(esp, 0x46A82C);
    ecx = esi;
    PUSH32(esp, 0x0021E182u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0021E182: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0021E190
 * Original: 0x0021E190 - 0x0021E229 (153 bytes, 53 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021E190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021E190: ;
    eax = MEM32(0x5BC508);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021E1B8; /* je: equal / zero */

loc_0021E19A: ;
    PUSH32(esp, 0x21C110);
    PUSH32(esp, 0x0021E1A4u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021E1A4: ;
    ecx = MEM32(esp + 8);
    esp = esp + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(0x5BC468);
    PUSH32(esp, 0x0021E1B7u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0021E1B7: ;
    esp += 4; return; /* ret */

loc_0021E1B8: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x0021E1C7u); RECOMP_ABI_CALL(0x001F7E00u, sub_001F7E00); /* call 0x001F7E00 */

loc_0021E1C7: ;
    esi = eax;
    esp = esp + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021E214; /* je: equal / zero */

loc_0021E1D0: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0021E1D9u); RECOMP_ABI_CALL(0x001F7CD0u, sub_001F7CD0); /* call 0x001F7CD0 */

loc_0021E1D9: ;
    MEM32(esi) = 0x3F5C90;
    ecx = esi;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x0021E1EDu); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021E1ED: ;
    ecx = esi;
    MEM32(esi) = 0x3F79C0;
    PUSH32(esp, 0x0021E1FAu); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0021E1FA: ;
    MEM32(esi) = 0x3F79C0;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0021E207u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021E207: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0021E210u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021E210: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0021E214: ;
    esi = 0; /* xor self */
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0021E21Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021E21D: ;
    edx = MEM32(esi);
    PUSH32(esp, esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0021E225u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021E225: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0021E230
 * Original: 0x0021E230 - 0x0021E289 (89 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021E230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021E230: ;
    eax = MEM32(0x5BC508);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021E25A; /* je: equal / zero */

loc_0021E23D: ;
    PUSH32(esp, 0x21C110);
    PUSH32(esp, 0x0021E247u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021E247: ;
    ecx = MEM32(esp + 0xC);
    esp = esp + 4;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0021E256u); RECOMP_ABI_CALL(0x0020E610u, sub_0020E610); /* call 0x0020E610 */

loc_0021E256: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_0021E25A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x0021E264u); RECOMP_ABI_CALL(0x001F7E70u, sub_001F7E70); /* call 0x001F7E70 */

loc_0021E264: ;
    esi = eax;
    esp = esp + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021E282; /* je: equal / zero */

loc_0021E26D: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0021E275u); RECOMP_ABI_CALL(0x00216980u, sub_00216980); /* call 0x00216980 */

loc_0021E275: ;
    MEM32(esi) = 0x3F79C0;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_0021E282: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021E290
 * Original: 0x0021E290 - 0x0021E2E6 (86 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021E290(void)
{

loc_0021E290: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC470);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x46A848);
    ecx = esi;
    PUSH32(esp, 0x0021E2ADu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0021E2AD: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4);
    eax = MEM32(ecx);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 1;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0021E2CBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021E2CB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46A844);
    PUSH32(esp, 0x46A840);
    PUSH32(esp, 0x46A83C);
    ecx = esi;
    PUSH32(esp, 0x0021E2E2u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0021E2E2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0021E2F0
 * Original: 0x0021E2F0 - 0x0021E3ED (253 bytes, 99 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021E2F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021E2F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x28);
    ebx = 0; /* xor self */
    MEM32(esi + 0x7C) = ebx;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, edi);
    MEM32(esi + 0x70) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0021E34B; /* jle: less or equal (signed <=) */

loc_0021E309: ;
    /* nop */

loc_0021E310: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021E335; /* je: equal / zero */

loc_0021E31A: ;
    edx = MEM32(eax + 0x10);
    eax = MEM32(ecx + 0x10);
    edi = MEM32(edx + ebx * 4);
    eax = MEM32(eax + ebx * 4);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0021E32Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021E32E: ;
    MEM32(edi + 0xC) = ebx;
    ecx = edi;
    goto loc_0021E33B;

loc_0021E335: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + ebx * 4);

loc_0021E33B: ;
    PUSH32(esp, 0x0021E340u); RECOMP_ABI_CALL(0x001EA7B0u, sub_001EA7B0); /* call 0x001EA7B0 */

loc_0021E340: ;
    MEM32(esi + 0x7C) = MEM32(esi + 0x7C) + eax;
    eax = MEM32(esi + 0x70);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021E310; /* jl: less (signed <) */

loc_0021E34B: ;
    ecx = MEM32(esi + 0x11C);
    eax = MEM32(esi + 0x7C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xD0); PUSH32(esp, 0x0021E35Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021E35F: ;
    MEM32(esi + 0xB0) = eax;
    ebp = eax;
    eax = MEM32(esi + 0x70);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0021E3D9; /* jle: less or equal (signed <=) */

loc_0021E370: ;
    ecx = MEM32(esi + 0xC4);
    eax = MEM32(esi + 0x28);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(eax + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021E39F; /* je: equal / zero */

loc_0021E384: ;
    edx = MEM32(eax + 0x10);
    eax = MEM32(ecx + 0x10);
    ebx = MEM32(edx + edi * 4);
    eax = MEM32(eax + edi * 4);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0021E398u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021E398: ;
    MEM32(ebx + 0xC) = edi;
    ecx = ebx;
    goto loc_0021E3A5;

loc_0021E39F: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + edi * 4);

loc_0021E3A5: ;
    eax = MEM32(esp + 0x10);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 0xA8));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0021E3BBu); RECOMP_ABI_CALL(0x0021D160u, sub_0021D160); /* call 0x0021D160 */

loc_0021E3BB: ;
    ebp = ebp + eax;
    eax = MEM32(esi + 0x70);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021E370; /* jl: less (signed <) */

loc_0021E3C5: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0021E3D9: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021E3F0
 * Original: 0x0021E3F0 - 0x0021E49F (175 bytes, 65 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021E3F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021E3F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0x7C) = 0;
    MEM32(esi + 0x70) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0021E426; /* jle: less or equal (signed <=) */

loc_0021E408: ;
    goto loc_0021E410;

    /* nop */

loc_0021E410: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + edi * 4);
    PUSH32(esp, 0x0021E41Bu); RECOMP_ABI_CALL(0x001EA7B0u, sub_001EA7B0); /* call 0x001EA7B0 */

loc_0021E41B: ;
    MEM32(esi + 0x7C) = MEM32(esi + 0x7C) + eax;
    eax = MEM32(esi + 0x70);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021E410; /* jl: less (signed <) */

loc_0021E426: ;
    ecx = MEM32(esi + 0x11C);
    eax = MEM32(esi + 0x7C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xD0); PUSH32(esp, 0x0021E43Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021E43A: ;
    MEM32(esi + 0xB0) = eax;
    ebx = eax;
    eax = MEM32(esi + 0x70);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0021E48D; /* jle: less or equal (signed <=) */

loc_0021E44B: ;
    PUSH32(esp, ebp);
    /* nop */

loc_0021E450: ;
    eax = MEM32(esi + 0xC4);
    ecx = MEM32(esi + 0x10);
    ebp = MEM32(ecx + edi * 4);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 0xA8));
    ecx = ebp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0021E470u); RECOMP_ABI_CALL(0x0021D160u, sub_0021D160); /* call 0x0021D160 */

loc_0021E470: ;
    ebx = ebx + eax;
    eax = MEM32(esi + 0x70);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021E450; /* jl: less (signed <) */

loc_0021E47A: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(0x5BC5D8);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0021E48D: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021E4A0
 * Original: 0x0021E4A0 - 0x0021E665 (453 bytes, 161 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021E4A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021E4A0: ;
    esp = esp - 8;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x50);
    edx = MEM32(edi + 0x108);
    eax = MEM32(edi + 0x10C);
    edx = edx - 9;
    eax = eax + ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0021E4DE; /* jg: greater (signed >) */

loc_0021E4BE: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0021E4C6u); RECOMP_ABI_CALL(0x0021CD60u, sub_0021CD60); /* call 0x0021CD60 */

loc_0021E4C6: ;
    ecx = MEM32(edi + 0xDC);
    edx = eax + ecx * 4;
    ecx = MEM32(edi + 0x50);
    eax = MEM32(edi + 0x108);
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0021E505; /* jle: less or equal (signed <=) */

loc_0021E4DE: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0021E4EAu); RECOMP_ABI_CALL(0x001F4C20u, sub_001F4C20); /* call 0x001F4C20 */

loc_0021E4EA: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x46A728)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x46A728) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021E505; /* jne: not equal / not zero */

loc_0021E4F4: ;
    eax = MEM32(esp + 0x10);
    MEM32(eax) = 0;
    POP32(esp, edi);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

loc_0021E505: ;
    ecx = MEM32(edi + 0x10C);
    SET_LO8(eax, MEM8(edi + 0xA8));
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 0x50);
    edx = MEM32(ebx + ecx);
    ebx = ebx + ecx;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(esp + 0x10) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_0021E550; /* je: equal / zero */

loc_0021E524: ;
    ecx = MEM32(0x5BC308);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021E541; /* jne: not equal / not zero */

loc_0021E52E: ;
    PUSH32(esp, 0x21BD20);
    PUSH32(esp, 0x0021E538u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021E538: ;
    ecx = MEM32(0x5BC308);
    esp = esp + 4;

loc_0021E541: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC8); PUSH32(esp, 0x0021E550u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021E550: ;
    eax = MEM32(edi + 0xC4);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(esp + 0x10);
    eax = MEM32(edi + 0x11C);
    ecx = MEM32(ecx + edx * 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021E56Cu); RECOMP_ABI_CALL(0x00204100u, sub_00204100); /* call 0x00204100 */

loc_0021E56C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021E58E; /* je: equal / zero */

loc_0021E572: ;
    eax = MEM32(esi);
    ebp = MEM32(0x5BC3B4);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x0021E57Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021E57F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021E58E; /* je: equal / zero */

loc_0021E583: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021E592; /* je: equal / zero */

loc_0021E587: ;
    eax = MEM32(eax + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021E583; /* jne: not equal / not zero */

loc_0021E58E: ;
    esi = 0; /* xor self */
    goto loc_0021E595;

loc_0021E592: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0021E595: ;
    edx = MEM32(esi + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0021E5AC; /* jne: not equal / not zero */

loc_0021E5A5: ;
    ecx = esi;
    PUSH32(esp, 0x0021E5ACu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0021E5AC: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0021E5B5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021E5B5: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0021E5BEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021E5BE: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0021E5C7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021E5C7: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x0021E5CEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021E5CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021E5E4; /* je: equal / zero */

loc_0021E5D2: ;
    MEM32(eax + 0x2C) = MEM32(eax + 0x2C) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(eax + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021E5E4; /* je: equal / zero */

loc_0021E5DC: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0021E5E4u); RECOMP_ABI_CALL(0x002085A0u, sub_002085A0); /* call 0x002085A0 */

loc_0021E5E4: ;
    _fa = (uint32_t)(MEM32(edi + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x64), 4 (32-bit) */
    eax = MEM32(edi + 0xC4);
    if (CMP_GE(_fas, _fbs)) goto loc_0021E605; /* jge: greater or equal (signed >=) */

loc_0021E5F0: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edi + 0xA8));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0021E603u); RECOMP_ABI_CALL(0x0021D260u, sub_0021D260); /* call 0x0021D260 */

loc_0021E603: ;
    goto loc_0021E618;

loc_0021E605: ;
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(edi + 0xA8));
    ecx = esi;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0021E618u); RECOMP_ABI_CALL(0x0021D510u, sub_0021D510); /* call 0x0021D510 */

loc_0021E618: ;
    ecx = MEM32(edi + 0xDC);
    ebp = MEM32(edi + 0x50);
    ebx = MEM32(edi + 0x54);
    ecx = ecx << 2;
    edx = ecx + eax;
    ecx = ecx + eax;
    ebp = ebp + edx;
    ebx = ebx + ecx;
    MEM32(edi + 0x50) = ebp;
    MEM32(edi + 0x54) = ebx;
    edi = MEM32(esp + 0x1C);
    MEM32(edi) = esi;
    edx = MEM32(esi + 4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = edx;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = edx;
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0021E659; /* jne: not equal / not zero */

loc_0021E652: ;
    ecx = esi;
    PUSH32(esp, 0x0021E659u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0021E659: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = edi;
    POP32(esp, edi);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021E670
 * Original: 0x0021E670 - 0x0021E6B6 (70 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021E670(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021E670: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x50);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0021E6A7; /* jle: less or equal (signed <=) */

loc_0021E687: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0021E69Au); RECOMP_ABI_CALL(0x0021D080u, sub_0021D080); /* call 0x0021D080 */

loc_0021E69A: ;
    edi = edi + eax;
    eax = MEM32(esi + 0x50);
    ebx = ebx + 4;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021E687; /* jl: less (signed <) */

loc_0021E6A7: ;
    ecx = MEM32(esp + 0x18);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax - ecx;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0021E6C0
 * Original: 0x0021E6C0 - 0x0021E6FB (59 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021E6C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021E6C0: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0021E6DFu); RECOMP_ABI_CALL(0x0021D810u, sub_0021D810); /* call 0x0021D810 */

loc_0021E6DF: ;
    SET_LO8(ecx, MEM8(esi + 0x3C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021E6ED; /* jne: not equal / not zero */

loc_0021E6E6: ;
    SET_LO8(ecx, MEM8(esi + 0x35));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021E6F6; /* je: equal / zero */

loc_0021E6ED: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021E6F6; /* je: equal / zero */

loc_0021E6F3: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0021E6F6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0021E700
 * Original: 0x0021E700 - 0x0021E746 (70 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021E700(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021E700: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x38);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0021E737; /* jle: less or equal (signed <=) */

loc_0021E717: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0021E72Au); RECOMP_ABI_CALL(0x0021D810u, sub_0021D810); /* call 0x0021D810 */

loc_0021E72A: ;
    edi = edi + eax;
    eax = MEM32(esi + 0x38);
    ebx = ebx + 4;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021E717; /* jl: less (signed <) */

loc_0021E737: ;
    ecx = MEM32(esp + 0x18);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax - ecx;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0021E750
 * Original: 0x0021E750 - 0x0021E796 (70 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021E750(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021E750: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x3C);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0021E787; /* jle: less or equal (signed <=) */

loc_0021E767: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0021E77Au); RECOMP_ABI_CALL(0x0021D8D0u, sub_0021D8D0); /* call 0x0021D8D0 */

loc_0021E77A: ;
    edi = edi + eax;
    eax = MEM32(esi + 0x3C);
    ebx = ebx + 4;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021E767; /* jl: less (signed <) */

loc_0021E787: ;
    ecx = MEM32(esp + 0x18);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax - ecx;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0021E7A0
 * Original: 0x0021E7A0 - 0x0021E7EC (76 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021E7A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021E7A0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x3C);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0021E7D7; /* jle: less or equal (signed <=) */

loc_0021E7B7: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0021E7CAu); RECOMP_ABI_CALL(0x0021DA60u, sub_0021DA60); /* call 0x0021DA60 */

loc_0021E7CA: ;
    edi = edi + eax;
    eax = MEM32(esi + 0x3C);
    ebx = ebx + 4;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021E7B7; /* jl: less (signed <) */

loc_0021E7D7: ;
    esi = MEM32(esp + 0x18);
    eax = edi;
    POP32(esp, edi);
    eax = eax - esi;
    POP32(esp, esi);
    eax = eax + 3;
    POP32(esp, ebp);
    eax = eax & 0xFFFFFFFCu;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0021E7F0
 * Original: 0x0021E7F0 - 0x0021E846 (86 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021E7F0(void)
{

loc_0021E7F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC154);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x46A858);
    ecx = esi;
    PUSH32(esp, 0x0021E80Du); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0021E80D: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4);
    eax = MEM32(ecx);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 1;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0021E82Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021E82B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46A854);
    PUSH32(esp, 0x46A850);
    PUSH32(esp, 0x46A84C);
    ecx = esi;
    PUSH32(esp, 0x0021E842u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0021E842: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0021E850
 * Original: 0x0021E850 - 0x0021E8A6 (86 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021E850(void)
{

loc_0021E850: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC164);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x46A868);
    ecx = esi;
    PUSH32(esp, 0x0021E86Du); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0021E86D: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4);
    eax = MEM32(ecx);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 1;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0021E88Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021E88B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46A864);
    PUSH32(esp, 0x46A860);
    PUSH32(esp, 0x46A85C);
    ecx = esi;
    PUSH32(esp, 0x0021E8A2u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0021E8A2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0021E8B0
 * Original: 0x0021E8B0 - 0x0021E906 (86 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021E8B0(void)
{

loc_0021E8B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC174);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x46A878);
    ecx = esi;
    PUSH32(esp, 0x0021E8CDu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0021E8CD: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4);
    eax = MEM32(ecx);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 1;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0021E8EBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021E8EB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46A874);
    PUSH32(esp, 0x46A870);
    PUSH32(esp, 0x46A86C);
    ecx = esi;
    PUSH32(esp, 0x0021E902u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0021E902: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0021E910
 * Original: 0x0021E910 - 0x0021E966 (86 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021E910(void)
{

loc_0021E910: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC184);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x46A888);
    ecx = esi;
    PUSH32(esp, 0x0021E92Du); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0021E92D: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4);
    eax = MEM32(ecx);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 1;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0021E94Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021E94B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46A884);
    PUSH32(esp, 0x46A880);
    PUSH32(esp, 0x46A87C);
    ecx = esi;
    PUSH32(esp, 0x0021E962u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0021E962: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0021E970
 * Original: 0x0021E970 - 0x0021EACD (349 bytes, 119 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021E970(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021E970: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x5BC1D4);
    eax = MEM32(edi + 0x28);
    ebx = MEM32(eax + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x46A898);
    ecx = edi;
    PUSH32(esp, 0x0021E98Fu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0021E98F: ;
    ecx = MEM32(0x5BB930);
    esi = MEM32(edi + 0x28);
    PUSH32(esp, 0x3F88C8);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0021E9A5u); RECOMP_ABI_CALL(0x001E8800u, sub_001E8800); /* call 0x001E8800 */

loc_0021E9A5: ;
    ecx = MEM32(esi + 8);
    esi = MEM32(esi + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0021E9BF; /* jle: less or equal (signed <=) */

loc_0021E9B1: ;
    _fa = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + edx * 4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021EABF; /* je: equal / zero */

loc_0021E9BA: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021E9B1; /* jl: less (signed <) */

loc_0021E9BF: ;
    ebp = ebp | 0xFFFFFFFFu;

loc_0021E9C2: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0021E9CBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021E9CB: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(esp + 0x14) = 2;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0021E9E1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021E9E1: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    ecx = edi;
    MEM32(esi + 0x1C) = 0x5BB988;
    PUSH32(esp, 0x0021E9F1u); RECOMP_ABI_CALL(0x002093F0u, sub_002093F0); /* call 0x002093F0 */

loc_0021E9F1: ;
    edx = MEM32(esi + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0021EA08; /* jne: not equal / not zero */

loc_0021EA01: ;
    ecx = esi;
    PUSH32(esp, 0x0021EA08u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0021EA08: ;
    edx = MEM32(0x5BB930);
    esi = MEM32(edi + 0x28);
    PUSH32(esp, 0x3F88BC);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0021EA1Eu); RECOMP_ABI_CALL(0x001E8800u, sub_001E8800); /* call 0x001E8800 */

loc_0021EA1E: ;
    ecx = MEM32(esi + 8);
    esi = MEM32(esi + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0021EA3E; /* jle: less or equal (signed <=) */

loc_0021EA2A: ;
    /* nop */

loc_0021EA30: ;
    _fa = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + edx * 4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021EAC6; /* je: equal / zero */

loc_0021EA39: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021EA30; /* jl: less (signed <) */

loc_0021EA3E: ;
    ebp = ebp | 0xFFFFFFFFu;

loc_0021EA41: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0021EA4Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021EA4A: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(esp + 0x14) = 1;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0021EA60u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021EA60: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    ecx = edi;
    MEM32(esi + 0x1C) = 0x5BBFD4;
    PUSH32(esp, 0x0021EA70u); RECOMP_ABI_CALL(0x002093F0u, sub_002093F0); /* call 0x002093F0 */

loc_0021EA70: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0021EA87; /* jne: not equal / not zero */

loc_0021EA80: ;
    ecx = esi;
    PUSH32(esp, 0x0021EA87u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0021EA87: ;
    edx = MEM32(edi + 0x28);
    eax = MEM32(edx + 8);
    ecx = MEM32(eax + ebx * 4);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM8(esp + 0x14) = 1;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0021EAA2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021EAA2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x46A894);
    PUSH32(esp, 0x46A890);
    PUSH32(esp, 0x46A88C);
    ecx = edi;
    PUSH32(esp, 0x0021EAB9u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0021EAB9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0021EABF: ;
    ebp = edx;
    goto loc_0021E9C2;

loc_0021EAC6: ;
    ebp = edx;
    goto loc_0021EA41;

}

/**
 * sub_0021EAD0
 * Original: 0x0021EAD0 - 0x0021EB26 (86 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021EAD0(void)
{

loc_0021EAD0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC1DC);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x46A8A8);
    ecx = esi;
    PUSH32(esp, 0x0021EAEDu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0021EAED: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4);
    eax = MEM32(ecx);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 1;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0021EB0Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021EB0B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46A8A4);
    PUSH32(esp, 0x46A8A0);
    PUSH32(esp, 0x46A89C);
    ecx = esi;
    PUSH32(esp, 0x0021EB22u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0021EB22: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0021EB30
 * Original: 0x0021EB30 - 0x0021EB86 (86 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021EB30(void)
{

loc_0021EB30: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC1F0);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x46A8B8);
    ecx = esi;
    PUSH32(esp, 0x0021EB4Du); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0021EB4D: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4);
    eax = MEM32(ecx);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 1;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0021EB6Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021EB6B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46A8B4);
    PUSH32(esp, 0x46A8B0);
    PUSH32(esp, 0x46A8AC);
    ecx = esi;
    PUSH32(esp, 0x0021EB82u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0021EB82: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0021EB90
 * Original: 0x0021EB90 - 0x0021EBC6 (54 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021EB90(void)
{

loc_0021EB90: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BC214);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 2);
    PUSH32(esp, 0x46A8D4);
    ecx = esi;
    PUSH32(esp, 0x0021EBACu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0021EBAC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46A8CC);
    PUSH32(esp, 0x46A8C4);
    PUSH32(esp, 0x46A8BC);
    ecx = esi;
    PUSH32(esp, 0x0021EBC3u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0021EBC3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0021EBD0
 * Original: 0x0021EBD0 - 0x0021EC26 (86 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021EBD0(void)
{

loc_0021EBD0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC224);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x46A8E8);
    ecx = esi;
    PUSH32(esp, 0x0021EBEDu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0021EBED: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4);
    eax = MEM32(ecx);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 1;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0021EC0Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021EC0B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46A8E4);
    PUSH32(esp, 0x46A8E0);
    PUSH32(esp, 0x46A8DC);
    ecx = esi;
    PUSH32(esp, 0x0021EC22u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0021EC22: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0021EC30
 * Original: 0x0021EC30 - 0x0021EC86 (86 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021EC30(void)
{

loc_0021EC30: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC250);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x46A8F8);
    ecx = esi;
    PUSH32(esp, 0x0021EC4Du); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0021EC4D: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4);
    eax = MEM32(ecx);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 1;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0021EC6Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021EC6B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46A8F4);
    PUSH32(esp, 0x46A8F0);
    PUSH32(esp, 0x46A8EC);
    ecx = esi;
    PUSH32(esp, 0x0021EC82u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0021EC82: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0021EC90
 * Original: 0x0021EC90 - 0x0021ECE6 (86 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021EC90(void)
{

loc_0021EC90: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC29C);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x46A908);
    ecx = esi;
    PUSH32(esp, 0x0021ECADu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0021ECAD: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4);
    eax = MEM32(ecx);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 1;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0021ECCBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021ECCB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46A904);
    PUSH32(esp, 0x46A900);
    PUSH32(esp, 0x46A8FC);
    ecx = esi;
    PUSH32(esp, 0x0021ECE2u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0021ECE2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0021ECF0
 * Original: 0x0021ECF0 - 0x0021EE2A (314 bytes, 98 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021ECF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021ECF0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC2C4);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 7);
    PUSH32(esp, 0x46A960);
    ecx = esi;
    PUSH32(esp, 0x0021ED11u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0021ED11: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebp = MEM32(edx + edi * 4 + 4);
    eax = MEM32(ebp);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0021ED33u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021ED33: ;
    MEM8(ebp + 0x26) = 0;
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ebp = MEM32(eax + edi * 4 + 8);
    PUSH32(esp, 0x0021ED46u); RECOMP_ABI_CALL(0x001F3260u, sub_001F3260); /* call 0x001F3260 */

loc_0021ED46: ;
    MEM32(ebp + 0x38) = eax;
    eax = MEM32(0x5BC454);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021ED64; /* jne: not equal / not zero */

loc_0021ED52: ;
    PUSH32(esp, 0x21C070);
    PUSH32(esp, 0x0021ED5Cu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021ED5C: ;
    eax = MEM32(0x5BC454);
    esp = esp + 4;

loc_0021ED64: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ebx = MEM32(ebp + 0x20);
    MEM32(esp + 0x14) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0021ED72; /* je: equal / zero */

loc_0021ED6F: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0021ED72: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021ED8D; /* je: equal / zero */

loc_0021ED78: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0021ED8D; /* jne: not equal / not zero */

loc_0021ED88: ;
    PUSH32(esp, 0x0021ED8Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0021ED8D: ;
    ecx = MEM32(esp + 0x14);
    MEM32(ebx) = ecx;
    MEM8(ebp + 0x3C) = 0;
    MEM8(ebp + 0x26) = 0;
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ecx = MEM32(eax + edi * 4 + 0xC);
    edx = MEM32(ecx);
    eax = esp + 0x14;
    ebx = ebx | 0xFFFFFFFFu;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0021EDB9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021EDB9: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4 + 0x10);
    eax = MEM32(ecx);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM8(esp + 0x14) = 1;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0021EDD5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021EDD5: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ecx = MEM32(ecx + edi * 4 + 0x14);
    edx = MEM32(ecx);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0021EDF0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021EDF0: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4 + 0x18);
    eax = MEM32(ecx);
    edx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0021EE0Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021EE0B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46A944);
    PUSH32(esp, 0x46A928);
    PUSH32(esp, 0x46A90C);
    ecx = esi;
    PUSH32(esp, 0x0021EE22u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0021EE22: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0021EE30
 * Original: 0x0021EE30 - 0x0021EE86 (86 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021EE30(void)
{

loc_0021EE30: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC2E4);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x46A988);
    ecx = esi;
    PUSH32(esp, 0x0021EE4Du); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0021EE4D: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4);
    eax = MEM32(ecx);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 1;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0021EE6Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021EE6B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46A984);
    PUSH32(esp, 0x46A980);
    PUSH32(esp, 0x46A97C);
    ecx = esi;
    PUSH32(esp, 0x0021EE82u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0021EE82: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0021EE90
 * Original: 0x0021EE90 - 0x0021EEC9 (57 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021EE90(void)
{

loc_0021EE90: ;
    PUSH32(esp, 0x0021EE95u); RECOMP_ABI_CALL(0x00227F90u, sub_00227F90); /* call 0x00227F90 */

loc_0021EE95: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21DE80);
    PUSH32(esp, 0x1F3370);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3F8948);
    PUSH32(esp, 0x219420);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BC3C8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0021EEC5u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0021EEC5: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0021EED0
 * Original: 0x0021EED0 - 0x0021EF09 (57 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021EED0(void)
{

loc_0021EED0: ;
    PUSH32(esp, 0x0021EED5u); RECOMP_ABI_CALL(0x00227F90u, sub_00227F90); /* call 0x00227F90 */

loc_0021EED5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21C970);
    PUSH32(esp, 0x200430);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3F8954);
    PUSH32(esp, 0x1F1B50);
    PUSH32(esp, 0x1A4380);
    PUSH32(esp, 0x21EE90);
    PUSH32(esp, 0x5BC420);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0021EF05u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0021EF05: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0021EF10
 * Original: 0x0021EF10 - 0x0021EF6D (93 bytes, 43 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021EF10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021EF10: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x44);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0021EF5E; /* jle: less or equal (signed <=) */

loc_0021EF27: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0021EF3Au); RECOMP_ABI_CALL(0x0021D810u, sub_0021D810); /* call 0x0021D810 */

loc_0021EF3A: ;
    SET_LO8(ecx, MEM8(esi + 0x3C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021EF48; /* jne: not equal / not zero */

loc_0021EF41: ;
    SET_LO8(ecx, MEM8(esi + 0x35));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021EF51; /* je: equal / zero */

loc_0021EF48: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021EF51; /* je: equal / zero */

loc_0021EF4E: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0021EF51: ;
    ebx = ebx + eax;
    eax = MEM32(esi + 0x44);
    edi = edi + 4;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021EF27; /* jl: less (signed <) */

loc_0021EF5E: ;
    ecx = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebp);
    eax = eax - ecx;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0021EF70
 * Original: 0x0021EF70 - 0x0021EFA4 (52 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021EF70(void)
{

loc_0021EF70: ;
    PUSH32(esp, 0x46A98C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21EB90);
    PUSH32(esp, 0);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x3F8960);
    PUSH32(esp, 0x219590);
    PUSH32(esp, 0x1A4350);
    PUSH32(esp, 0x221CF0);
    PUSH32(esp, 0x5BC214);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0021EFA0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0021EFA0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0021EFB0
 * Original: 0x0021EFB0 - 0x0021EFE4 (52 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021EFB0(void)
{

loc_0021EFB0: ;
    PUSH32(esp, 0x46A994);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21B9F0);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x3F8970);
    PUSH32(esp, 0x1F2540);
    PUSH32(esp, 0x217630);
    PUSH32(esp, 0x21EF70);
    PUSH32(esp, 0x5BC21C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0021EFE0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0021EFE0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0021EFF0
 * Original: 0x0021EFF0 - 0x0021EFFC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021EFF0(void)
{

loc_0021EFF0: ;
    PUSH32(esp, 0x21EED0);
    PUSH32(esp, 0x0021EFFAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021EFFA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0021F000
 * Original: 0x0021F000 - 0x0021F037 (55 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F000(void)
{

loc_0021F000: ;
    PUSH32(esp, 0x46A99C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21E970);
    PUSH32(esp, 0x21B890);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x3F8984);
    PUSH32(esp, 0x1A4F60);
    PUSH32(esp, 0x217630);
    PUSH32(esp, 0x21EF70);
    PUSH32(esp, 0x5BC1D4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0021F033u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0021F033: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0021F040
 * Original: 0x0021F040 - 0x0021F0DE (158 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F040(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021F040: ;
    eax = MEM32(0x5BB930);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x5BC3E8);
    esi = MEM32(edi + 0x28);
    PUSH32(esp, 0x3E226C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0021F05Eu); RECOMP_ABI_CALL(0x001E8800u, sub_001E8800); /* call 0x001E8800 */

loc_0021F05E: ;
    ecx = MEM32(esi + 8);
    esi = MEM32(esi + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0021F07A; /* jle: less or equal (signed <=) */

loc_0021F06A: ;
    /* nop */

loc_0021F070: ;
    _fa = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + edx * 4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021F0D7; /* je: equal / zero */

loc_0021F075: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021F070; /* jl: less (signed <) */

loc_0021F07A: ;
    ebx = ebx | 0xFFFFFFFFu;

loc_0021F07D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0021F086u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021F086: ;
    esi = eax;
    eax = MEM32(0x5BC220);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021F09E; /* jne: not equal / not zero */

loc_0021F091: ;
    PUSH32(esp, 0x21EFB0);
    PUSH32(esp, 0x0021F09Bu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021F09B: ;
    esp = esp + 4;

loc_0021F09E: ;
    eax = MEM32(0x5BC220);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x38) = 0;
    MEM32(esi + 0x1C) = 0x5BB8F0;
    PUSH32(esp, 0x0021F0BDu); RECOMP_ABI_CALL(0x002093F0u, sub_002093F0); /* call 0x002093F0 */

loc_0021F0BD: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_0021F0DB; /* jne: not equal / not zero */

loc_0021F0CE: ;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_0021F0D7: ;
    ebx = edx;
    goto loc_0021F07D;

loc_0021F0DB: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0021F0E0
 * Original: 0x0021F0E0 - 0x0021F0FE (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F0E0(void)
{

loc_0021F0E0: ;
    PUSH32(esp, 0x21EED0);
    PUSH32(esp, 0x0021F0EAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021F0EA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BC420);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021F0FDu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0021F0FD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0021F100
 * Original: 0x0021F100 - 0x0021F135 (53 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F100(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021F100: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x5BC220);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021F120; /* jne: not equal / not zero */

loc_0021F10D: ;
    PUSH32(esp, 0x21EFB0);
    PUSH32(esp, 0x0021F117u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021F117: ;
    ecx = MEM32(0x5BC220);
    esp = esp + 4;

loc_0021F120: ;
    edx = MEM32(esi + 0x38);
    eax = MEM32(ecx);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0xC));
    POP32(esp, esi);
    MEM32(esp + 8) = edx;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC8)); return; /* indirect tail jmp */

}

/**
 * sub_0021F140
 * Original: 0x0021F140 - 0x0021F187 (71 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021F140: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0021F15F; /* je: equal / zero */

loc_0021F14A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0021F15F; /* jne: not equal / not zero */

loc_0021F15A: ;
    PUSH32(esp, 0x0021F15Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0021F15F: ;
    eax = MEM32(esp + 0xC);
    edi = MEM32(eax);
    PUSH32(esp, 0x21EED0);
    PUSH32(esp, 0x0021F16Fu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021F16F: ;
    ecx = MEM32(0x5BC420);
    esp = esp + 4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0021F17Eu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0021F17E: ;
    MEM32(esi) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021F190
 * Original: 0x0021F190 - 0x0021F202 (114 bytes, 45 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021F190: ;
    eax = MEM32(0x5BC508);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021F1B8; /* je: equal / zero */

loc_0021F19A: ;
    PUSH32(esp, 0x21EFB0);
    PUSH32(esp, 0x0021F1A4u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021F1A4: ;
    ecx = MEM32(esp + 8);
    esp = esp + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(0x5BC21C);
    PUSH32(esp, 0x0021F1B7u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0021F1B7: ;
    esp += 4; return; /* ret */

loc_0021F1B8: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x0021F1C7u); RECOMP_ABI_CALL(0x001F7E00u, sub_001F7E00); /* call 0x001F7E00 */

loc_0021F1C7: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021F1ED; /* je: equal / zero */

loc_0021F1CE: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x0021F1D7u); RECOMP_ABI_CALL(0x0021C450u, sub_0021C450); /* call 0x0021C450 */

loc_0021F1D7: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0021F1E0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021F1E0: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0021F1E9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021F1E9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0021F1ED: ;
    esi = 0; /* xor self */
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0021F1F6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021F1F6: ;
    edx = MEM32(esi);
    PUSH32(esp, esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0021F1FEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021F1FE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0021F210
 * Original: 0x0021F210 - 0x0021F27B (107 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021F210: ;
    eax = MEM32(0x5BC508);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021F23A; /* je: equal / zero */

loc_0021F21D: ;
    PUSH32(esp, 0x21EFB0);
    PUSH32(esp, 0x0021F227u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021F227: ;
    ecx = MEM32(esp + 0xC);
    esp = esp + 4;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0021F236u); RECOMP_ABI_CALL(0x0020E610u, sub_0020E610); /* call 0x0020E610 */

loc_0021F236: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_0021F23A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x0021F244u); RECOMP_ABI_CALL(0x001F7E70u, sub_001F7E70); /* call 0x001F7E70 */

loc_0021F244: ;
    esi = eax;
    esp = esp + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021F274; /* je: equal / zero */

loc_0021F24D: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0021F255u); RECOMP_ABI_CALL(0x00216980u, sub_00216980); /* call 0x00216980 */

loc_0021F255: ;
    MEM32(esi) = 0x3F5E20;
    SET_LO8(edx, MEM8(edi + 0x34));
    MEM8(esi + 0x34) = LO8(edx);
    SET_LO8(eax, MEM8(edi + 0x35));
    MEM8(esi + 0x35) = LO8(eax);
    MEM32(esi) = 0x3F7F90;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_0021F274: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021F280
 * Original: 0x0021F280 - 0x0021F2D6 (86 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F280(void)
{

loc_0021F280: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BC2B8);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 4);
    PUSH32(esp, 0x46A9D4);
    ecx = esi;
    PUSH32(esp, 0x0021F29Cu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0021F29C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46A9C4);
    PUSH32(esp, 0x46A9B4);
    PUSH32(esp, 0x46A9A4);
    ecx = esi;
    PUSH32(esp, 0x0021F2B3u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0021F2B3: ;
    ecx = MEM32(0x5BC2B8);
    MEM32(ecx + 0x40) = 0x19B890;
    edx = MEM32(0x5BC508);
    ecx = MEM32(edx + 0x28);
    PUSH32(esp, 0x20B6F0);
    PUSH32(esp, 0x0021F2D3u); RECOMP_ABI_CALL(0x001F3680u, sub_001F3680); /* call 0x001F3680 */

loc_0021F2D3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0021F2E0
 * Original: 0x0021F2E0 - 0x0021F323 (67 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F2E0(void)
{

loc_0021F2E0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BC374);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x46A9F0);
    ecx = esi;
    PUSH32(esp, 0x0021F2FCu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0021F2FC: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + edi * 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x46A9EC);
    PUSH32(esp, 0x46A9E8);
    PUSH32(esp, 0x46A9E4);
    ecx = esi;
    MEM8(eax + 0x26) = 0;
    PUSH32(esp, 0x0021F320u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0021F320: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0021F330
 * Original: 0x0021F330 - 0x0021F535 (517 bytes, 181 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F330(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021F330: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0021F349; /* jle: less or equal (signed <=) */

loc_0021F339: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0021F347; /* jge: greater or equal (signed >=) */

loc_0021F33E: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_0021F357;

loc_0021F347: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_0021F349: ;
    if (TEST_NZ(_fa, _fb)) goto loc_0021F355; /* jne: not equal / not zero */

loc_0021F34B: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021F357; /* jne: not equal / not zero */

loc_0021F355: ;
    ecx = 0; /* xor self */

loc_0021F357: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0021F365u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021F365: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021F36Bu); RECOMP_ABI_CALL(0x0021F190u, sub_0021F190); /* call 0x0021F190 */

loc_0021F36B: ;
    esp = esp + 4;
    PUSH32(esp, 0x3F89B8);
    esi = eax;
    PUSH32(esp, 0x0021F37Au); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_0021F37A: ;
    ecx = eax;
    PUSH32(esp, 0x0021F381u); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_0021F381: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021F38A; /* je: equal / zero */

loc_0021F387: ;
    MEM32(edi + -4) = MEM32(edi + -4) + 1;
    _fa = (uint32_t)(MEM32(edi + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0021F38A: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021F399; /* je: equal / zero */

loc_0021F391: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021F399u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021F399: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esi + 0xC) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_0021F3A8; /* je: equal / zero */

loc_0021F3A0: ;
    ecx = edi + -8;
    PUSH32(esp, 0x0021F3A8u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021F3A8: ;
    eax = MEM32(esi);
    ecx = esi;
    MEM32(esi + 8) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0021F3B6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021F3B6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021F3C4; /* je: equal / zero */

loc_0021F3BA: ;
    SET_LO16(ecx, MEM16(eax + 0x12));
    MEM16(esi + 0x10) = LO16(ecx);
    goto loc_0021F3CA;

loc_0021F3C4: ;
    MEM16(esi + 0x10) = 0xFFFF;

loc_0021F3CA: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0021F3D1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021F3D1: ;
    MEM16(esi + 0x14) = LO16(eax);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0021F3E1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021F3E1: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021F3EA; /* je: equal / zero */

loc_0021F3E8: ;
    MEM32(eax) = esi;

loc_0021F3EA: ;
    ecx = MEM32(esi + 4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    MEM32(esi + 4) = ecx;
    edi = MEM32(ebx + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebx + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0021F40C; /* jge: greater or equal (signed >=) */

loc_0021F3FE: ;
    edx = MEM32(ebx + 0x10);
    ecx = edi + 1;
    MEM32(ebx + 8) = ecx;
    MEM32(edx + edi * 4) = esi;
    goto loc_0021F41F;

loc_0021F40C: ;
    PUSH32(esp, 4);
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0021F419u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0021F419: ;
    ecx = MEM32(ebx + 0x10);
    MEM32(ecx + edi * 4) = esi;

loc_0021F41F: ;
    edx = MEM32(esi + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0021F436; /* jne: not equal / not zero */

loc_0021F42F: ;
    ecx = esi;
    PUSH32(esp, 0x0021F436u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0021F436: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0021F44F; /* jle: less or equal (signed <=) */

loc_0021F43F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0021F44D; /* jge: greater or equal (signed >=) */

loc_0021F444: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_0021F45D;

loc_0021F44D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_0021F44F: ;
    if (TEST_NZ(_fa, _fb)) goto loc_0021F45B; /* jne: not equal / not zero */

loc_0021F451: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021F45D; /* jne: not equal / not zero */

loc_0021F45B: ;
    ecx = 0; /* xor self */

loc_0021F45D: ;
    eax = MEM32(0x46A684);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0021F468u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021F468: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021F46Eu); RECOMP_ABI_CALL(0x0021F190u, sub_0021F190); /* call 0x0021F190 */

loc_0021F46E: ;
    esp = esp + 4;
    PUSH32(esp, 0x3F89B0);
    esi = eax;
    PUSH32(esp, 0x0021F47Du); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_0021F47D: ;
    ecx = eax;
    PUSH32(esp, 0x0021F484u); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_0021F484: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021F48D; /* je: equal / zero */

loc_0021F48A: ;
    MEM32(edi + -4) = MEM32(edi + -4) + 1;
    _fa = (uint32_t)(MEM32(edi + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0021F48D: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021F49C; /* je: equal / zero */

loc_0021F494: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0021F49Cu); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021F49C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esi + 0xC) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_0021F4AB; /* je: equal / zero */

loc_0021F4A3: ;
    ecx = edi + -8;
    PUSH32(esp, 0x0021F4ABu); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0021F4AB: ;
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esi + 8) = 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0021F4B9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021F4B9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021F4C7; /* je: equal / zero */

loc_0021F4BD: ;
    SET_LO16(eax, MEM16(eax + 0x12));
    MEM16(esi + 0x10) = LO16(eax);
    goto loc_0021F4CD;

loc_0021F4C7: ;
    MEM16(esi + 0x10) = 0xFFFF;

loc_0021F4CD: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0021F4D4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021F4D4: ;
    MEM16(esi + 0x14) = LO16(eax);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0021F4E4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021F4E4: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021F4ED; /* je: equal / zero */

loc_0021F4EB: ;
    MEM32(eax) = esi;

loc_0021F4ED: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = MEM32(ebx + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebx + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0021F506; /* jge: greater or equal (signed >=) */

loc_0021F4F8: ;
    edx = MEM32(ebx + 0x10);
    ecx = edi + 1;
    MEM32(ebx + 8) = ecx;
    MEM32(edx + edi * 4) = esi;
    goto loc_0021F519;

loc_0021F506: ;
    PUSH32(esp, 4);
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0021F513u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0021F513: ;
    ecx = MEM32(ebx + 0x10);
    MEM32(ecx + edi * 4) = esi;

loc_0021F519: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    POP32(esp, ebx);
    MEM32(esi + 4) = ecx;
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_0021F533; /* jne: not equal / not zero */

loc_0021F52B: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_0021F533: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0021F540
 * Original: 0x0021F540 - 0x0021F99C (1116 bytes, 351 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F540(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021F540: ;
    esp = esp - 0x24;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC4);
    eax = MEM32(eax + 8);
    ecx = eax + eax * 2;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x11C);
    ecx = ecx << 3;
    PUSH32(esp, 0x21EED0);
    MEM32(esi + 0x80) = eax;
    MEM32(esi + 0x84) = ecx;
    PUSH32(esp, 0x0021F572u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021F572: ;
    ecx = MEM32(0x5BC420);
    esp = esp + 4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0021F581u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0021F581: ;
    edi = eax;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 8) = edi;
    if (TEST_S(_fas, _fbs)) goto loc_0021F5A5; /* jl: less (signed <) */

loc_0021F591: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0021F59B; /* jg: greater (signed >) */

loc_0021F596: ;
    MEM32(edi + 8) = eax;
    goto loc_0021F5A5;

loc_0021F59B: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0021F5A5u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0021F5A5: ;
    ecx = MEM32(edi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    edi = MEM32(edi + 0x10);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0021F5B3; /* jle: less or equal (signed <=) */

loc_0021F5AF: ;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_0021F5B3: ;
    edi = MEM32(esi + 0x11C);
    PUSH32(esp, 0x21EED0);
    PUSH32(esp, 0x0021F5C3u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021F5C3: ;
    ecx = MEM32(0x5BC420);
    esp = esp + 4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0021F5D2u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0021F5D2: ;
    edi = eax;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x18) = edi;
    if (TEST_S(_fas, _fbs)) goto loc_0021F5F6; /* jl: less (signed <) */

loc_0021F5E2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0021F5EC; /* jg: greater (signed >) */

loc_0021F5E7: ;
    MEM32(edi + 8) = eax;
    goto loc_0021F5F6;

loc_0021F5EC: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0021F5F6u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0021F5F6: ;
    ecx = MEM32(edi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    edi = MEM32(edi + 0x10);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0021F604; /* jle: less or equal (signed <=) */

loc_0021F600: ;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_0021F604: ;
    edx = MEM32(0x5BC554);
    eax = MEM32(edx + 0x28);
    edx = MEM32(eax + 0xC);
    eax = MEM32(esi + 0x80);
    PUSH32(esp, ebx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, ebp);
    MEM32(esp + 0x14) = edx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0021F6AF; /* jle: less or equal (signed <=) */

loc_0021F626: ;
    goto loc_0021F630;

loc_0021F628: ;
    edx = MEM32(esp + 0x14);
    /* nop */

loc_0021F630: ;
    eax = MEM32(esi + 0xC4);
    eax = MEM32(eax + 0x10);
    ebp = MEM32(eax + ecx * 4);
    edi = MEM32(ebp + 0x28);
    ebx = MEM32(edi + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0021F67E; /* jge: greater or equal (signed >=) */

loc_0021F646: ;
    eax = MEM32(edi + 8);
    eax = MEM32(eax + edx * 4);
    _fa = (uint32_t)(MEM8(eax + 0x25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x25), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021F679; /* jne: not equal / not zero */

loc_0021F652: ;
    _fa = (uint32_t)(MEM8(eax + 0x26)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x26), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021F66C; /* je: equal / zero */

loc_0021F658: ;
    MEM32(esi + 0x84) = MEM32(esi + 0x84) + 6;
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax + 0x10);
    MEM32(eax + ecx * 4) = MEM32(eax + ecx * 4) + 1;
    _fa = (uint32_t)(MEM32(eax + ecx * 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + ecx * 4;

loc_0021F66C: ;
    eax = MEM32(esp + 0x20);
    eax = MEM32(eax + 0x10);
    MEM32(eax + ecx * 4) = MEM32(eax + ecx * 4) + 1;
    _fa = (uint32_t)(MEM32(eax + ecx * 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + ecx * 4;

loc_0021F679: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021F646; /* jl: less (signed <) */

loc_0021F67E: ;
    eax = MEM32(ebp + 0x1C);
    edi = eax + 1;

loc_0021F684: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021F684; /* jne: not equal / not zero */

loc_0021F68B: ;
    edx = MEM32(esi + 0x84);
    eax = eax - edi;
    eax = edx + eax + 2;
    eax = eax & 0xFFFFFFFEu;
    MEM32(esi + 0x84) = eax;
    eax = MEM32(esi + 0x80);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021F628; /* jl: less (signed <) */

loc_0021F6AF: ;
    ecx = MEM32(esi + 0x11C);
    eax = MEM32(esi + 0x84);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xD0); PUSH32(esp, 0x0021F6C6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021F6C6: ;
    ecx = MEM32(esi + 0x80);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esi + 0xAC) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0021F768; /* jle: less or equal (signed <=) */

loc_0021F6DC: ;
    /* nop */

loc_0021F6E0: ;
    ecx = MEM32(esi + 0xC4);
    edx = MEM32(ecx + 0x10);
    edi = MEM32(edx + ebp * 4);
    ecx = MEM32(edi + 0x1C);
    edx = ecx + 1;

loc_0021F6F2: ;
    SET_LO8(ebx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021F6F2; /* jne: not equal / not zero */

loc_0021F6F9: ;
    ecx = ecx - edx;
    ecx = ecx + 2;
    ecx = ecx & 0xFFFFFFFEu;
    MEM32(eax) = ecx;
    ecx = MEM32(edi + 0x10);
    MEM32(eax + 4) = ecx;
    edx = MEM32(edi + 0x14);
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(edx + ebp * 4);
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(esi + 0xC4);
    ebx = MEM32(edi + 0x38);
    ecx = MEM32(edx + 8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0021F73D; /* jle: less or equal (signed <=) */

loc_0021F72E: ;
    edx = MEM32(edx + 0x10);

loc_0021F731: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021F740; /* je: equal / zero */

loc_0021F735: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021F731; /* jl: less (signed <) */

loc_0021F73D: ;
    edi = edi | 0xFFFFFFFFu;

loc_0021F740: ;
    edx = MEM32(esp + 0x20);
    ebx = MEM32(esp + 0x14);
    MEM32(eax + 0x10) = edi;
    ecx = MEM32(edx + 0x10);
    edx = MEM32(ecx + ebp * 4);
    edx = edx + ebx;
    MEM32(eax + 0x14) = edx;
    ecx = MEM32(esi + 0x80);
    eax = eax + 0x18;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021F6E0; /* jl: less (signed <) */

loc_0021F768: ;
    eax = MEM32(esi + 0x80);
    ecx = MEM32(esi + 0xAC);
    eax = eax + eax * 2;
    ebx = ecx + eax * 8;
    eax = MEM32(0x5BC1EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021F816; /* jne: not equal / not zero */

loc_0021F787: ;
    PUSH32(esp, 0x46A734);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x219840);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x3F6CD4);
    PUSH32(esp, 0x1A58E0);
    PUSH32(esp, 0x1A4350);
    PUSH32(esp, 0x221CF0);
    PUSH32(esp, 0x5BC1E8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0021F7B7u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0021F7B7: ;
    ebp = eax;
    esp = esp + 0x2C;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021F816; /* je: equal / zero */

loc_0021F7C0: ;
    eax = MEM32(ebp + 4);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0021F7DF; /* jle: less or equal (signed <=) */

loc_0021F7CD: ;
    /* nop */

loc_0021F7D0: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + edi * 4); PUSH32(esp, 0x0021F7D6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021F7D6: ;
    eax = MEM32(esp + 0x24);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021F7D0; /* jl: less (signed <) */

loc_0021F7DF: ;
    edi = MEM32(ebp);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021F7FE; /* je: equal / zero */

loc_0021F7E6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0021F7ECu); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_0021F7EC: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021F7FE; /* je: equal / zero */

loc_0021F7F3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x0021F7FEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021F7FE: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0021F804u); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_0021F804: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021F816; /* je: equal / zero */

loc_0021F80B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x0021F816u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021F816: ;
    eax = MEM32(0x5BC1EC);
    MEM32(esp + 0x30) = eax;
    eax = MEM32(esi + 0x80);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x18) = edi;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0021F927; /* jle: less or equal (signed <=) */

loc_0021F833: ;
    MEM32(esp + 0x1C) = edi;
    goto loc_0021F840;

    /* nop */

loc_0021F840: ;
    ecx = MEM32(esi + 0xC4);
    edx = MEM32(ecx + 0x10);
    edi = MEM32(edx + edi * 4);
    ecx = MEM32(edi + 0x1C);
    edx = ebx;

loc_0021F851: ;
    SET_LO8(eax, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edx) = LO8(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021F851; /* jne: not equal / not zero */

loc_0021F85B: ;
    eax = MEM32(esi + 0xAC);
    ecx = MEM32(esp + 0x1C);
    ebp = MEM32(eax + ecx);
    ecx = MEM32(edi + 0x28);
    edx = MEM32(ecx + 0xC);
    eax = MEM32(esp + 0x14);
    ebx = ebx + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    ebp = ebx;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x24) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0021F8DE; /* jge: greater or equal (signed >=) */

loc_0021F886: ;
    edi = MEM32(ecx + 8);
    edi = MEM32(edi + eax * 4);
    _fa = (uint32_t)(MEM8(edi + 0x26)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x26), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021F8D5; /* je: equal / zero */

loc_0021F892: ;
    _fa = (uint32_t)(MEM8(edi + 0x25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x25), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021F8D5; /* jne: not equal / not zero */

loc_0021F898: ;
    _fa = (uint32_t)(MEM16(edi + 0x10)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x10), 0xFFFFFFFFu (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021F8B6; /* jne: not equal / not zero */

loc_0021F89F: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0021F8A6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021F8A6: ;
    SET_LO16(eax, MEM16(eax + 0x12));
    ecx = MEM32(esp + 0x28);
    MEM16(edi + 0x10) = LO16(eax);
    eax = MEM32(esp + 0x24);

loc_0021F8B6: ;
    SET_LO16(edx, MEM16(edi + 0x10));
    MEM16(ebp) = LO16(edx);
    SET_LO16(edx, MEM16(edi + 0x12));
    MEM16(ebp + 2) = LO16(edx);
    SET_LO16(edx, MEM16(edi + 0x14));
    MEM16(ebp + 4) = LO16(edx);
    edx = MEM32(esp + 0x2C);
    ebp = ebp + 6;

loc_0021F8D5: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0021F886; /* jl: less (signed <) */

loc_0021F8DE: ;
    SET_LO8(eax, MEM8(esi + 0xA8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    edi = MEM32(esp + 0x18);
    if (TEST_Z(_fa, _fb)) goto loc_0021F907; /* je: equal / zero */

loc_0021F8EC: ;
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax + edi * 4);
    ecx = MEM32(esp + 0x30);
    edx = MEM32(ecx);
    eax = eax + eax * 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x0021F907u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021F907: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esi + 0x80);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    ebx = ebp;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0021F840; /* jl: less (signed <) */

loc_0021F927: ;
    SET_LO8(eax, MEM8(esi + 0xA8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0021F954; /* je: equal / zero */

loc_0021F933: ;
    eax = MEM32(esi + 0x80);
    ecx = MEM32(esi + 0xD0);
    edx = MEM32(ecx);
    eax = eax + eax * 2;
    eax = eax << 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xAC);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x0021F954u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021F954: ;
    ecx = MEM32(0x5BC5D8);
    esi = MEM32(esp + 0x30);
    MEM32(esi) = ecx;
    ecx = MEM32(esp + 0x18);
    edi = MEM32(ecx + 4);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_0021F979; /* jne: not equal / not zero */

loc_0021F974: ;
    PUSH32(esp, 0x0021F979u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0021F979: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0021F992; /* jne: not equal / not zero */

loc_0021F98D: ;
    PUSH32(esp, 0x0021F992u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0021F992: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x24;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021F9A0
 * Original: 0x0021F9A0 - 0x0021FC69 (713 bytes, 229 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F9A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021F9A0: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x28));
    esp = esp - 0x28;
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ebp = ecx;
    ecx = MEM32(ebp + 0x68);
    eax = MEM32(ecx);
    PUSH32(esp, 0xC);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x0021F9B7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021F9B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0021F9CF; /* je: equal / zero */

loc_0021F9BC: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(0x46A728);
    MEM32(eax) = ecx;
    POP32(esp, ebp);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
    esp = esp + 0x28;
    esp += 8; return; /* ret 4 */

loc_0021F9CF: ;
    SET_LO8(eax, MEM8(ebp + 0xA8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0021F9EE; /* je: equal / zero */

loc_0021F9D9: ;
    ecx = MEM32(ebp + 0xD0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x0021F9EEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021F9EE: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x28);
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xFFFFFFF4u)) >> 32) & 1);
    edx = edx + 0xFFFFFFF4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ebp + 0xF4) = edx;
    MEM32(ebp + 0xFC) = eax;
    if (CMP_G(_fas & _fbs, 0)) goto loc_0021FA1C; /* jg: greater (signed >) */

loc_0021FA09: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(0x5BC5D8);
    MEM32(eax) = ecx;
    POP32(esp, ebp);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
    esp = esp + 0x28;
    esp += 8; return; /* ret 4 */

loc_0021FA1C: ;
    eax = MEM32(ebp + 0x10C);
    ecx = MEM32(ebp + 0x68);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    MEM32(ebp + 0xF0) = eax;
    esi = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x64); PUSH32(esp, 0x0021FA35u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021FA35: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0021FA4E; /* je: equal / zero */

loc_0021FA3A: ;
    eax = MEM32(esp + 0x34);
    edx = MEM32(0x46A728);
    POP32(esp, esi);
    MEM32(eax) = edx;
    POP32(esp, ebp);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
    esp = esp + 0x28;
    esp += 8; return; /* ret 4 */

loc_0021FA4E: ;
    SET_LO8(eax, MEM8(ebp + 0xA8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    esi = MEM32(ebp + 0xF0);
    MEM32(esp + 0x20) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0021FA78; /* je: equal / zero */

loc_0021FA62: ;
    edx = MEM32(ebp + 0xFC);
    ecx = MEM32(ebp + 0xD0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0xC8); PUSH32(esp, 0x0021FA78u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021FA78: ;
    edx = MEM32(0x5BC50C);
    eax = MEM32(ebp + 0xFC);
    PUSH32(esp, ebx);
    ebx = MEM32(edx + 0x2C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    ecx = esi + eax * 4;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x18) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_0021FA9A; /* je: equal / zero */

loc_0021FA97: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0021FA9A: ;
    eax = MEM32(0x5BC50C);
    eax = MEM32(eax + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x1C) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0021FAAD; /* je: equal / zero */

loc_0021FAAA: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0021FAAD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0021FABA; /* je: equal / zero */

loc_0021FAB1: ;
    ecx = MEM32(ebx + 8);
    MEM32(esp + 0xC) = ecx;
    goto loc_0021FAC2;

loc_0021FABA: ;
    MEM32(esp + 0xC) = 0;

loc_0021FAC2: ;
    esi = MEM32(ebp + 0x11C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x21EED0);
    PUSH32(esp, 0x0021FAD3u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021FAD3: ;
    ecx = MEM32(0x5BC420);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0021FAE2u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0021FAE2: ;
    edx = esp + 0x18;
    esi = eax;
    edi = ebp + 0xF8;
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, 0x0021FAFAu); RECOMP_ABI_CALL(0x001C2950u, sub_001C2950); /* call 0x001C2950 */

loc_0021FAFA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0021FB15; /* je: equal / zero */

loc_0021FAFE: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0021FB15; /* jne: not equal / not zero */

loc_0021FB0E: ;
    ecx = esi;
    PUSH32(esp, 0x0021FB15u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0021FB15: ;
    ecx = MEM32(edi);
    eax = MEM32(ebp + 0xFC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0021FB2A; /* jl: less (signed <) */

loc_0021FB22: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021FB2Au); RECOMP_ABI_CALL(0x00200AD0u, sub_00200AD0); /* call 0x00200AD0 */

loc_0021FB2A: ;
    eax = MEM32(ebp + 0xFC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x18) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0021FC10; /* jle: less or equal (signed <=) */

loc_0021FB40: ;
    eax = MEM32(esp + 0x10);
    ebx = 0x10;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x24) = ebx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0021FBBB; /* jle: less or equal (signed <=) */

loc_0021FB53: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(eax + 0x10);
    /* nop */

loc_0021FB60: ;
    eax = MEM32(edx);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0021FB6E; /* jne: not equal / not zero */

loc_0021FB69: ;
    eax = MEM32(0x46A3C8);

loc_0021FB6E: ;
    esi = MEM32(esp + 0x14);

loc_0021FB72: ;
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(ecx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0021FB96; /* jne: not equal / not zero */

loc_0021FB7A: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0021FB92; /* je: equal / zero */

loc_0021FB7E: ;
    SET_LO8(ebx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0021FB96; /* jne: not equal / not zero */

loc_0021FB88: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0021FB72; /* jne: not equal / not zero */

loc_0021FB92: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_0021FB9B;

loc_0021FB96: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */

loc_0021FB9B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0021FBB1; /* je: equal / zero */

loc_0021FB9F: ;
    eax = MEM32(esp + 0x10);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(4)) >> 32) & 1);
    edx = edx + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0021FB60; /* jl: less (signed <) */

loc_0021FBAB: ;
    ebx = MEM32(esp + 0x24);
    goto loc_0021FBBB;

loc_0021FBB1: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(ecx + 0x10);
    ebx = MEM32(edx + edi * 4);

loc_0021FBBB: ;
    esi = MEM32(ebp + 0xF8);
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0021FBD1; /* jge: greater or equal (signed >=) */

loc_0021FBC9: ;
    eax = edi + 1;
    MEM32(esi + 8) = eax;
    goto loc_0021FBDE;

loc_0021FBD1: ;
    PUSH32(esp, 4);
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0021FBDEu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0021FBDE: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x28);
    esi = MEM32(esp + 0x14);
    MEM32(edx + edi * 4) = ebx;
    edx = MEM32(ecx + eax * 4);
    ecx = MEM32(ebp + 0xFC);
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(edx)) >> 32) & 1);
    esi = esi + edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0021FB40; /* jl: less (signed <) */

loc_0021FC0C: ;
    ebx = MEM32(esp + 0x1C);

loc_0021FC10: ;
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    esi = MEM32(esp + 0x3C);
    MEM32(ebp + 0xF0) = 0;
    eax = MEM32(0x5BC5D8);
    MEM32(esi) = eax;
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0021FC43; /* je: equal / zero */

loc_0021FC2E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0021FC43; /* jne: not equal / not zero */

loc_0021FC3E: ;
    PUSH32(esp, 0x0021FC43u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0021FC43: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0021FC5E; /* je: equal / zero */

loc_0021FC47: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0021FC5E; /* jne: not equal / not zero */

loc_0021FC57: ;
    ecx = ebx;
    PUSH32(esp, 0x0021FC5Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0021FC5E: ;
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
    esp = esp + 0x28;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021FC70
 * Original: 0x0021FC70 - 0x0021FE6A (506 bytes, 169 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021FC70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021FC70: ;
    esp = esp - 0x14;
    PUSH32(esp, ebp);
    ebp = ecx;
    ecx = MEM32(ebp + 0x68);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 8);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x0021FC8Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021FC8B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021FCA3; /* je: equal / zero */

loc_0021FC90: ;
    ecx = MEM32(0x46A728);
    eax = MEM32(esp + 0x1C);
    MEM32(eax) = ecx;
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 8; return; /* ret 4 */

loc_0021FCA3: ;
    SET_LO8(eax, MEM8(ebp + 0xA8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021FCC2; /* je: equal / zero */

loc_0021FCAD: ;
    ecx = MEM32(ebp + 0xD0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x0021FCC2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021FCC2: ;
    ecx = MEM32(ebp + 0x11C);
    eax = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x0021FCD6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021FCD6: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM32(esp + 0x10) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_0021FD07; /* je: equal / zero */

loc_0021FCE0: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(ebp + 0x68);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = eax + 0xFFFFFFF8u;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0021FCF3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021FCF3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021FD1B; /* je: equal / zero */

loc_0021FCF8: ;
    ecx = MEM32(ebp + 0x11C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x0021FD07u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021FD07: ;
    ecx = MEM32(0x46A728);
    eax = MEM32(esp + 0x20);
    POP32(esp, ebx);
    MEM32(eax) = ecx;
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 8; return; /* ret 4 */

loc_0021FD1B: ;
    eax = MEM32(ebp + 0x134);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = ebp + 0x134;
    if (TEST_Z(_fa, _fb)) goto loc_0021FD34; /* je: equal / zero */

loc_0021FD2B: ;
    MEM32(eax + 8) = 0;
    goto loc_0021FD48;

loc_0021FD34: ;
    edx = MEM32(ebp + 0x11C);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = edx;
    PUSH32(esp, 0x0021FD48u); RECOMP_ABI_CALL(0x0021F140u, sub_0021F140); /* call 0x0021F140 */

loc_0021FD48: ;
    ecx = MEM32(esp + 0x18);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0021FDFC; /* jle: less or equal (signed <=) */

loc_0021FD5C: ;
    /* nop */

loc_0021FD60: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(0x5BC544);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x20) = edx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0021FD82; /* jle: less or equal (signed <=) */

loc_0021FD72: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0021FD80; /* jge: greater or equal (signed >=) */

loc_0021FD77: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_0021FD90;

loc_0021FD80: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_0021FD82: ;
    if (TEST_NZ(_fa, _fb)) goto loc_0021FD8E; /* jne: not equal / not zero */

loc_0021FD84: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021FD90; /* jne: not equal / not zero */

loc_0021FD8E: ;
    ecx = 0; /* xor self */

loc_0021FD90: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x0021FD96u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021FD96: ;
    ebp = eax;
    eax = MEM32(esp + 0x14);
    esi = MEM32(eax + 0x134);
    edi = MEM32(esi + 8);
    eax = eax + 0x134;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0021FDB7; /* jge: greater or equal (signed >=) */

loc_0021FDAF: ;
    eax = edi + 1;
    MEM32(esi + 8) = eax;
    goto loc_0021FDC4;

loc_0021FDB7: ;
    PUSH32(esp, 4);
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0021FDC4u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0021FDC4: ;
    edx = MEM32(esi + 0x10);
    eax = ebx;
    MEM32(edx + edi * 4) = ebp;
    edx = eax + 1;
    /* nop */

loc_0021FDD0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021FDD0; /* jne: not equal / not zero */

loc_0021FDD7: ;
    ecx = MEM32(esp + 0x10);
    eax = eax - edx;
    ebx = ebx + eax + 1;
    eax = MEM32(esp + 0x20);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_G(_fas & _fbs, 0)) goto loc_0021FD60; /* jg: greater (signed >) */

loc_0021FDF2: ;
    ebp = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x18);
    eax = ecx;

loc_0021FDFC: ;
    edx = MEM32(esp + 0x20);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2F (32-bit) */
    MEM32(esp + 0x20) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0021FE45; /* jge: greater or equal (signed >=) */

loc_0021FE0A: ;
    ebx = 0x2F;
    ebx = ebx - eax;

loc_0021FE11: ;
    esi = MEM32(ebp + 0x134);
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0021FE27; /* jge: greater or equal (signed >=) */

loc_0021FE1F: ;
    eax = edi + 1;
    MEM32(esi + 8) = eax;
    goto loc_0021FE34;

loc_0021FE27: ;
    PUSH32(esp, 4);
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0021FE34u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0021FE34: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = MEM32(esi + 0x10);
    MEM32(edx + edi * 4) = 0xFFFFFFFFu;
    if ((_fa != 0)) goto loc_0021FE11; /* jne: not equal / not zero */

loc_0021FE41: ;
    ebx = MEM32(esp + 0x18);

loc_0021FE45: ;
    ecx = MEM32(ebp + 0x11C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0xFC); PUSH32(esp, 0x0021FE54u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021FE54: ;
    ecx = MEM32(0x5BC5D8);
    eax = MEM32(esp + 0x28);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(eax) = ecx;
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021FE70
 * Original: 0x0021FE70 - 0x0021FEA5 (53 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021FE70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021FE70: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x5BC1D8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021FE90; /* jne: not equal / not zero */

loc_0021FE7D: ;
    PUSH32(esp, 0x21F000);
    PUSH32(esp, 0x0021FE87u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021FE87: ;
    ecx = MEM32(0x5BC1D8);
    esp = esp + 4;

loc_0021FE90: ;
    edx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0xC));
    POP32(esp, esi);
    MEM32(esp + 8) = edx;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC8)); return; /* indirect tail jmp */

}

/**
 * sub_0021FEB0
 * Original: 0x0021FEB0 - 0x0021FF97 (231 bytes, 78 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021FEB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021FEB0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x5BC1B8);
    eax = MEM32(edi + 0x28);
    ebx = MEM32(eax + 0xC);
    PUSH32(esp, 3);
    PUSH32(esp, 0x46AA18);
    ecx = edi;
    PUSH32(esp, 0x0021FECFu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0021FECF: ;
    ecx = MEM32(0x5BB930);
    esi = MEM32(edi + 0x28);
    PUSH32(esp, 0x3F89EC);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0021FEE5u); RECOMP_ABI_CALL(0x001E8800u, sub_001E8800); /* call 0x001E8800 */

loc_0021FEE5: ;
    edx = MEM32(esi + 8);
    esi = MEM32(esi + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0021FEFF; /* jle: less or equal (signed <=) */

loc_0021FEF1: ;
    _fa = (uint32_t)(MEM32(edx + ecx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + ecx * 4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021FF90; /* je: equal / zero */

loc_0021FEFA: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021FEF1; /* jl: less (signed <) */

loc_0021FEFF: ;
    ebp = ebp | 0xFFFFFFFFu;

loc_0021FF02: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0021FF0Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021FF0B: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x14) = 1;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0021FF24u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021FF24: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    ecx = edi;
    MEM8(esi + 0x26) = 0;
    MEM32(esi + 0x1C) = 0x5BBE48;
    PUSH32(esp, 0x0021FF38u); RECOMP_ABI_CALL(0x002093F0u, sub_002093F0); /* call 0x002093F0 */

loc_0021FF38: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0021FF4F; /* jne: not equal / not zero */

loc_0021FF48: ;
    ecx = esi;
    PUSH32(esp, 0x0021FF4Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0021FF4F: ;
    edx = MEM32(edi + 0x28);
    eax = MEM32(edx + 8);
    esi = MEM32(eax + ebx * 4);
    edx = MEM32(esi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x14) = 1;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0021FF6Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021FF6F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x46AA0C);
    PUSH32(esp, 0x46AA00);
    PUSH32(esp, 0x46A9F4);
    ecx = edi;
    MEM8(esi + 0x26) = 0;
    PUSH32(esp, 0x0021FF8Au); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0021FF8A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0021FF90: ;
    ebp = ecx;
    goto loc_0021FF02;

}

/**
 * sub_0021FFA0
 * Original: 0x0021FFA0 - 0x0022003E (158 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021FFA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021FFA0: ;
    eax = MEM32(0x5BB930);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x5BC1C4);
    esi = MEM32(edi + 0x28);
    PUSH32(esp, 0x3E226C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0021FFBEu); RECOMP_ABI_CALL(0x001E8800u, sub_001E8800); /* call 0x001E8800 */

loc_0021FFBE: ;
    ecx = MEM32(esi + 8);
    esi = MEM32(esi + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0021FFDA; /* jle: less or equal (signed <=) */

loc_0021FFCA: ;
    /* nop */

loc_0021FFD0: ;
    _fa = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + edx * 4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00220037; /* je: equal / zero */

loc_0021FFD5: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021FFD0; /* jl: less (signed <) */

loc_0021FFDA: ;
    ebx = ebx | 0xFFFFFFFFu;

loc_0021FFDD: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0021FFE6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0021FFE6: ;
    esi = eax;
    eax = MEM32(0x5BC1D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021FFFE; /* jne: not equal / not zero */

loc_0021FFF1: ;
    PUSH32(esp, 0x21F000);
    PUSH32(esp, 0x0021FFFBu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0021FFFB: ;
    esp = esp + 4;

loc_0021FFFE: ;
    eax = MEM32(0x5BC1D8);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x38) = 0;
    MEM32(esi + 0x1C) = 0x5BBAC8;
    PUSH32(esp, 0x0022001Du); RECOMP_ABI_CALL(0x002093F0u, sub_002093F0); /* call 0x002093F0 */

loc_0022001D: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_0022003B; /* jne: not equal / not zero */

loc_0022002E: ;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_00220037: ;
    ebx = edx;
    goto loc_0021FFDD;

loc_0022003B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00220021
 * Original: 0x00220021 - 0x0022003E (29 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220021(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00220021: ;
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_0022003B; /* jne: not equal / not zero */

loc_0022002E: ;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

    ebx = edx;
    g_seh_ebp = ebp; sub_0021FFDD(); return; /* tail jmp 0x0021FFDD */

loc_0022003B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00220040
 * Original: 0x00220040 - 0x002200B2 (114 bytes, 45 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00220040: ;
    eax = MEM32(0x5BC508);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00220068; /* je: equal / zero */

loc_0022004A: ;
    PUSH32(esp, 0x21F000);
    PUSH32(esp, 0x00220054u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00220054: ;
    ecx = MEM32(esp + 8);
    esp = esp + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(0x5BC1D4);
    PUSH32(esp, 0x00220067u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00220067: ;
    esp += 4; return; /* ret */

loc_00220068: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x00220077u); RECOMP_ABI_CALL(0x001F7E00u, sub_001F7E00); /* call 0x001F7E00 */

loc_00220077: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0022009D; /* je: equal / zero */

loc_0022007E: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x00220087u); RECOMP_ABI_CALL(0x0021B1D0u, sub_0021B1D0); /* call 0x0021B1D0 */

loc_00220087: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00220090u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00220090: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00220099u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00220099: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0022009D: ;
    esi = 0; /* xor self */
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x002200A6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002200A6: ;
    edx = MEM32(esi);
    PUSH32(esp, esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x002200AEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002200AE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00220045
 * Original: 0x00220045 - 0x002200B2 (109 bytes, 44 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220045(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00220045: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00220068; /* je: equal / zero */

loc_0022004A: ;
    PUSH32(esp, 0x21F000);
    PUSH32(esp, 0x00220054u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00220054: ;
    ecx = MEM32(esp + 8);
    esp = esp + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(0x5BC1D4);
    PUSH32(esp, 0x00220067u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00220067: ;
    esp += 4; return; /* ret */

loc_00220068: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x00220077u); RECOMP_ABI_CALL(0x001F7E00u, sub_001F7E00); /* call 0x001F7E00 */

loc_00220077: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0022009D; /* je: equal / zero */

loc_0022007E: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x00220087u); RECOMP_ABI_CALL(0x0021B1D0u, sub_0021B1D0); /* call 0x0021B1D0 */

loc_00220087: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00220090u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00220090: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00220099u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00220099: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0022009D: ;
    esi = 0; /* xor self */
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x002200A6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002200A6: ;
    edx = MEM32(esi);
    PUSH32(esp, esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x002200AEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002200AE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002200C0
 * Original: 0x002200C0 - 0x00220131 (113 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002200C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002200C0: ;
    eax = MEM32(0x5BC508);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002200EA; /* je: equal / zero */

loc_002200CD: ;
    PUSH32(esp, 0x21F000);
    PUSH32(esp, 0x002200D7u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002200D7: ;
    ecx = MEM32(esp + 0xC);
    esp = esp + 4;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x002200E6u); RECOMP_ABI_CALL(0x0020E610u, sub_0020E610); /* call 0x0020E610 */

loc_002200E6: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_002200EA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x002200F4u); RECOMP_ABI_CALL(0x001F7E70u, sub_001F7E70); /* call 0x001F7E70 */

loc_002200F4: ;
    esi = eax;
    esp = esp + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0022012A; /* je: equal / zero */

loc_002200FD: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00220105u); RECOMP_ABI_CALL(0x00216980u, sub_00216980); /* call 0x00216980 */

loc_00220105: ;
    MEM32(esi) = 0x3F5E20;
    SET_LO8(edx, MEM8(edi + 0x34));
    MEM8(esi + 0x34) = LO8(edx);
    SET_LO8(eax, MEM8(edi + 0x35));
    MEM8(esi + 0x35) = LO8(eax);
    MEM32(esi) = 0x3F6048;
    SET_LO8(ecx, MEM8(edi + 0x38));
    MEM8(esi + 0x38) = LO8(ecx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_0022012A: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00220140
 * Original: 0x00220140 - 0x002201B2 (114 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220140(void)
{

loc_00220140: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC248);
    eax = MEM32(esi + 0x28);
    ebx = MEM32(eax + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    PUSH32(esp, 0x46AA48);
    ecx = esi;
    PUSH32(esp, 0x0022015Eu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0022015E: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    edi = MEM32(edx + ebx * 4);
    PUSH32(esp, 0x0022016Cu); RECOMP_ABI_CALL(0x001F3210u, sub_001F3210); /* call 0x001F3210 */

loc_0022016C: ;
    MEM32(edi + 0x38) = eax;
    SET_LO8(eax, 1);
    MEM8(edi + 0x3C) = 0;
    MEM8(edi + 0x28) = LO8(eax);
    MEM8(edi + 0x27) = LO8(eax);
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + ebx * 4 + 4);
    edx = esp + 0xC;
    MEM8(esp + 0xC) = LO8(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00220196u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00220196: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x46AA3C);
    PUSH32(esp, 0x46AA30);
    PUSH32(esp, 0x46AA24);
    ecx = esi;
    PUSH32(esp, 0x002201ADu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002201AD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002201C0
 * Original: 0x002201C0 - 0x002203A8 (488 bytes, 154 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002201C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002201C0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC25C);
    eax = MEM32(esi + 0x28);
    ebp = MEM32(eax + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 6);
    PUSH32(esp, 0x46AA9C);
    ecx = esi;
    PUSH32(esp, 0x002201E1u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_002201E1: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    edi = MEM32(edx + ebp * 4);
    PUSH32(esp, 0x002201EFu); RECOMP_ABI_CALL(0x001F3210u, sub_001F3210); /* call 0x001F3210 */

loc_002201EF: ;
    MEM32(edi + 0x38) = eax;
    MEM8(edi + 0x26) = 0;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    edi = MEM32(ecx + ebp * 4 + 4);
    ebx = MEM32(edi + 0x20);
    PUSH32(esp, 0x3F5DDC);
    PUSH32(esp, 0x0022020Du); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_0022020D: ;
    ecx = eax;
    PUSH32(esp, 0x00220214u); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_00220214: ;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00220226; /* je: equal / zero */

loc_0022021E: ;
    ecx = eax + -8;
    PUSH32(esp, 0x00220226u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00220226: ;
    edx = MEM32(esp + 0x10);
    MEM32(ebx) = edx;
    MEM8(edi + 0x35) = 1;
    MEM8(edi + 0x26) = 0;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    edx = MEM32(ecx + ebp * 4 + 8);
    MEM8(edx + 0x26) = 0;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    edx = MEM32(ecx + ebp * 4 + 0xC);
    MEM8(edx + 0x26) = 0;
    edi = MEM32(esi + 0x28);
    eax = MEM32(edi + 8);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(edi + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00220295; /* jle: less or equal (signed <=) */

loc_00220267: ;
    goto loc_00220270;

    /* nop */

loc_00220270: ;
    ecx = MEM32(0x5BB930);
    PUSH32(esp, 0x3F8A58);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00220283u); RECOMP_ABI_CALL(0x001E8800u, sub_001E8800); /* call 0x001E8800 */

loc_00220283: ;
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(edx + ebx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + ebx * 4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002202B4; /* je: equal / zero */

loc_0022028C: ;
    eax = MEM32(esp + 0x14);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00220270; /* jl: less (signed <) */

loc_00220295: ;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;

loc_0022029D: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002202BC; /* jle: less or equal (signed <=) */

loc_002202A6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002202BA; /* jge: greater or equal (signed >=) */

loc_002202AB: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_002202CA;

loc_002202B4: ;
    MEM32(esp + 0x10) = ebx;
    goto loc_0022029D;

loc_002202BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_002202BC: ;
    if (TEST_NZ(_fa, _fb)) goto loc_002202C8; /* jne: not equal / not zero */

loc_002202BE: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002202CA; /* jne: not equal / not zero */

loc_002202C8: ;
    ecx = 0; /* xor self */

loc_002202CA: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x002202D6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002202D6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002202DCu); RECOMP_ABI_CALL(0x0021C680u, sub_0021C680); /* call 0x0021C680 */

loc_002202DC: ;
    esp = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0x18);
    edi = eax;
    PUSH32(esp, 0x5BBE34);
    PUSH32(esp, 0x3F8A58);
    ecx = edi;
    PUSH32(esp, 0x002202F5u); RECOMP_ABI_CALL(0x0021ABD0u, sub_0021ABD0); /* call 0x0021ABD0 */

loc_002202F5: ;
    eax = MEM32(0x5BC554);
    ebx = MEM32(edi + 0x20);
    MEM32(edi + 0x38) = eax;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0022031B; /* je: equal / zero */

loc_00220306: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0022031B; /* jne: not equal / not zero */

loc_00220316: ;
    PUSH32(esp, 0x0022031Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0022031B: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    MEM32(ebx) = 0;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(edi + 0x26) = 0;
    MEM32(edi + 0x1C) = 0x5BBE34;
    PUSH32(esp, 0x00220339u); RECOMP_ABI_CALL(0x002093F0u, sub_002093F0); /* call 0x002093F0 */

loc_00220339: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00220350; /* jne: not equal / not zero */

loc_00220349: ;
    ecx = edi;
    PUSH32(esp, 0x00220350u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00220350: ;
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ecx = MEM32(eax + ebp * 4 + 0x10);
    edx = MEM32(ecx);
    eax = esp + 0x14;
    edi = edi | 0xFFFFFFFFu;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = edi;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0022036Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0022036E: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + ebp * 4 + 0x14);
    eax = MEM32(ecx);
    edx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = edi;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00220389u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00220389: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x46AA84);
    PUSH32(esp, 0x46AA6C);
    PUSH32(esp, 0x46AA54);
    ecx = esi;
    PUSH32(esp, 0x002203A0u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002203A0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_002203B0
 * Original: 0x002203B0 - 0x0022040D (93 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002203B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002203B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC26C);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x46AAC0);
    ecx = esi;
    PUSH32(esp, 0x002203CDu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_002203CD: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + edi * 4);
    ebx = MEM32(eax + 0x20);
    PUSH32(esp, 0x002203DEu); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_002203DE: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002203EC; /* je: equal / zero */

loc_002203E4: ;
    ecx = eax + -8;
    PUSH32(esp, 0x002203ECu); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_002203EC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46AABC);
    PUSH32(esp, 0x46AAB8);
    PUSH32(esp, 0x46AAB4);
    ecx = esi;
    MEM32(ebx) = 0;
    PUSH32(esp, 0x00220409u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00220409: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00220410
 * Original: 0x00220410 - 0x0022046C (92 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220410(void)
{

loc_00220410: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC290);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 3);
    PUSH32(esp, 0x46AAE8);
    ecx = esi;
    PUSH32(esp, 0x0022042Du); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0022042D: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebx = MEM32(edx + edi * 4 + 4);
    PUSH32(esp, 0x0022043Cu); RECOMP_ABI_CALL(0x001F31B0u, sub_001F31B0); /* call 0x001F31B0 */

loc_0022043C: ;
    MEM32(ebx + 0x38) = eax;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ebx = MEM32(ecx + edi * 4 + 8);
    PUSH32(esp, 0x0022044Eu); RECOMP_ABI_CALL(0x001F33C0u, sub_001F33C0); /* call 0x001F33C0 */

loc_0022044E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46AADC);
    PUSH32(esp, 0x46AAD0);
    PUSH32(esp, 0x46AAC4);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x00220468u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00220468: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00220470
 * Original: 0x00220470 - 0x002204A6 (54 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220470(void)
{

loc_00220470: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BC2A8);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x46ABB8);
    ecx = esi;
    PUSH32(esp, 0x0022048Cu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0022048C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46AB78);
    PUSH32(esp, 0x46AB38);
    PUSH32(esp, 0x46AAF8);
    ecx = esi;
    PUSH32(esp, 0x002204A3u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002204A3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002204B0
 * Original: 0x002204B0 - 0x00220554 (164 bytes, 52 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002204B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002204B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC340);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 3);
    PUSH32(esp, 0x46AC1C);
    ecx = esi;
    PUSH32(esp, 0x002204CEu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_002204CE: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + edi * 4);
    ebx = MEM32(eax + 0x20);
    PUSH32(esp, 0x002204DFu); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_002204DF: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002204ED; /* je: equal / zero */

loc_002204E5: ;
    ecx = eax + -8;
    PUSH32(esp, 0x002204EDu); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_002204ED: ;
    MEM32(ebx) = 0;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4 + 4);
    eax = MEM32(ecx);
    edx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00220512u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00220512: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    edx = MEM32(ecx + edi * 4 + 8);
    ebx = MEM32(edx + 0x20);
    PUSH32(esp, 0x00220524u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00220524: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00220532; /* je: equal / zero */

loc_0022052A: ;
    ecx = eax + -8;
    PUSH32(esp, 0x00220532u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00220532: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46AC10);
    PUSH32(esp, 0x46AC04);
    PUSH32(esp, 0x46ABF8);
    ecx = esi;
    MEM32(ebx) = 0;
    PUSH32(esp, 0x0022054Fu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0022054F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00220560
 * Original: 0x00220560 - 0x00220707 (423 bytes, 137 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220560(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00220560: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x5BC348);
    eax = MEM32(edi + 0x28);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 4);
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, 0x46AC58);
    ecx = edi;
    PUSH32(esp, 0x00220585u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00220585: ;
    esi = MEM32(edi + 0x28);
    eax = MEM32(esi + 0xC);
    ebx = MEM32(esi + 8);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002205C1; /* jle: less or equal (signed <=) */

loc_00220598: ;
    goto loc_002205A0;

    /* nop */

loc_002205A0: ;
    edx = MEM32(0x5BB930);
    PUSH32(esp, 0x3F8A58);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x002205B3u); RECOMP_ABI_CALL(0x001E8800u, sub_001E8800); /* call 0x001E8800 */

loc_002205B3: ;
    _fa = (uint32_t)(MEM32(ebx + ebp * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + ebp * 4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002205C4; /* je: equal / zero */

loc_002205B8: ;
    eax = MEM32(esp + 0x10);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002205A0; /* jl: less (signed <) */

loc_002205C1: ;
    ebp = ebp | 0xFFFFFFFFu;

loc_002205C4: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002205DD; /* jle: less or equal (signed <=) */

loc_002205CD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002205DB; /* jge: greater or equal (signed >=) */

loc_002205D2: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_002205EB;

loc_002205DB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_002205DD: ;
    if (TEST_NZ(_fa, _fb)) goto loc_002205E9; /* jne: not equal / not zero */

loc_002205DF: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002205EB; /* jne: not equal / not zero */

loc_002205E9: ;
    ecx = 0; /* xor self */

loc_002205EB: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x002205F7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002205F7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002205FDu); RECOMP_ABI_CALL(0x0021C680u, sub_0021C680); /* call 0x0021C680 */

loc_002205FD: ;
    esp = esp + 4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x18);
    esi = eax;
    PUSH32(esp, 0x5BB728);
    PUSH32(esp, 0x3F8A58);
    ecx = esi;
    PUSH32(esp, 0x00220616u); RECOMP_ABI_CALL(0x0021ABD0u, sub_0021ABD0); /* call 0x0021ABD0 */

loc_00220616: ;
    eax = MEM32(0x5BC554);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    ecx = edi;
    MEM32(esi + 0x38) = eax;
    MEM8(esi + 0x26) = 0;
    MEM32(esi + 0x1C) = 0x5BB728;
    PUSH32(esp, 0x00220632u); RECOMP_ABI_CALL(0x002093F0u, sub_002093F0); /* call 0x002093F0 */

loc_00220632: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00220649; /* jne: not equal / not zero */

loc_00220642: ;
    ecx = esi;
    PUSH32(esp, 0x00220649u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00220649: ;
    ecx = MEM32(edi + 0x28);
    edx = MEM32(ecx + 8);
    ebx = MEM32(esp + 0x14);
    eax = MEM32(edx + ebx * 4);
    esi = MEM32(eax + 0x20);
    PUSH32(esp, 0x3F8B6C);
    PUSH32(esp, 0x00220663u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00220663: ;
    ecx = eax;
    PUSH32(esp, 0x0022066Au); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_0022066A: ;
    ebp = eax;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0022067A; /* je: equal / zero */

loc_00220672: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0022067Au); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0022067A: ;
    MEM32(esi) = ebp;
    ecx = MEM32(edi + 0x28);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + ebx * 4 + 4);
    esi = MEM32(eax + 0x20);
    PUSH32(esp, 0x3C9758);
    PUSH32(esp, 0x00220693u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00220693: ;
    ecx = eax;
    PUSH32(esp, 0x0022069Au); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_0022069A: ;
    ebp = eax;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002206AA; /* je: equal / zero */

loc_002206A2: ;
    ecx = eax + -8;
    PUSH32(esp, 0x002206AAu); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_002206AA: ;
    MEM32(esi) = ebp;
    ecx = MEM32(edi + 0x28);
    edx = MEM32(ecx + 8);
    esi = MEM32(edx + ebx * 4 + 0xC);
    ebp = MEM32(esi + 0x20);
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, 0x002206C3u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_002206C3: ;
    ecx = eax;
    PUSH32(esp, 0x002206CAu); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_002206CA: ;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002206DD; /* je: equal / zero */

loc_002206D5: ;
    ecx = eax + -8;
    PUSH32(esp, 0x002206DDu); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_002206DD: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x46AC48);
    PUSH32(esp, 0x46AC38);
    MEM32(ebp) = eax;
    PUSH32(esp, 0x46AC28);
    ecx = edi;
    MEM8(esi + 0x26) = 0;
    PUSH32(esp, 0x002206FFu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002206FF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00220710
 * Original: 0x00220710 - 0x00220747 (55 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220710(void)
{

loc_00220710: ;
    PUSH32(esp, 0x46AC68);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21F2E0);
    PUSH32(esp, 0x21BE90);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x3F8B78);
    PUSH32(esp, 0x1F2C40);
    PUSH32(esp, 0x1A4350);
    PUSH32(esp, 0x221CF0);
    PUSH32(esp, 0x5BC374);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00220743u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00220743: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00220750
 * Original: 0x00220750 - 0x0022075B (11 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220750(void)
{

loc_00220750: ;
    eax = MEM32(ecx + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00220759u); RECOMP_ABI_CALL(0x0021F330u, sub_0021F330); /* call 0x0021F330 */

loc_00220759: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00220760
 * Original: 0x00220760 - 0x002207DD (125 bytes, 37 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00220760: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC4D4);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x46AC7C);
    ecx = esi;
    PUSH32(esp, 0x0022077Du); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0022077D: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + edi * 4);
    ebx = MEM32(eax + 0x20);
    PUSH32(esp, 0x0022078Eu); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_0022078E: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0022079C; /* je: equal / zero */

loc_00220794: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0022079Cu); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0022079C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46AC78);
    PUSH32(esp, 0x46AC74);
    PUSH32(esp, 0x46AC70);
    ecx = esi;
    MEM32(ebx) = 0;
    PUSH32(esp, 0x002207B9u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002207B9: ;
    ecx = MEM32(0x5BC4D4);
    MEM32(ecx + 0x40) = 0x19B890;
    edx = MEM32(0x5BC508);
    ecx = MEM32(edx + 0x28);
    PUSH32(esp, 0x21A120);
    PUSH32(esp, 0x002207D9u); RECOMP_ABI_CALL(0x001F3680u, sub_001F3680); /* call 0x001F3680 */

loc_002207D9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002207E0
 * Original: 0x002207E0 - 0x00220819 (57 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002207E0(void)
{

loc_002207E0: ;
    PUSH32(esp, 0x002207E5u); RECOMP_ABI_CALL(0x00227F90u, sub_00227F90); /* call 0x00227F90 */

loc_002207E5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21FFA0);
    PUSH32(esp, 0x206900);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3F8B98);
    PUSH32(esp, 0x1F1AC0);
    PUSH32(esp, 0x1A4380);
    PUSH32(esp, 0x21EE90);
    PUSH32(esp, 0x5BC1C4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00220815u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00220815: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00220820
 * Original: 0x00220820 - 0x00220855 (53 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220820(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00220820: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x5BC378);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00220840; /* jne: not equal / not zero */

loc_0022082D: ;
    PUSH32(esp, 0x220710);
    PUSH32(esp, 0x00220837u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00220837: ;
    ecx = MEM32(0x5BC378);
    esp = esp + 4;

loc_00220840: ;
    edx = MEM32(esi + 0x38);
    eax = MEM32(ecx);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0xC));
    POP32(esp, esi);
    MEM32(esp + 8) = edx;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC8)); return; /* indirect tail jmp */

}

/**
 * sub_00220860
 * Original: 0x00220860 - 0x0022086C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220860(void)
{

loc_00220860: ;
    PUSH32(esp, 0x2207E0);
    PUSH32(esp, 0x0022086Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022086A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00220870
 * Original: 0x00220870 - 0x002208AC (60 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220870(void)
{

loc_00220870: ;
    PUSH32(esp, 0x00220875u); RECOMP_ABI_CALL(0x00227F90u, sub_00227F90); /* call 0x00227F90 */

loc_00220875: ;
    PUSH32(esp, 0x46AC80);
    PUSH32(esp, 0);
    PUSH32(esp, 0x220410);
    PUSH32(esp, 0x219A90);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3F8BA8);
    PUSH32(esp, 0x1F2820);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BC290);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002208A8u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002208A8: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002208B0
 * Original: 0x002208B0 - 0x00220949 (153 bytes, 53 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002208B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002208B0: ;
    eax = MEM32(0x5BC508);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002208D8; /* je: equal / zero */

loc_002208BA: ;
    PUSH32(esp, 0x220710);
    PUSH32(esp, 0x002208C4u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002208C4: ;
    ecx = MEM32(esp + 8);
    esp = esp + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(0x5BC374);
    PUSH32(esp, 0x002208D7u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_002208D7: ;
    esp += 4; return; /* ret */

loc_002208D8: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x002208E7u); RECOMP_ABI_CALL(0x001F7E00u, sub_001F7E00); /* call 0x001F7E00 */

loc_002208E7: ;
    esi = eax;
    esp = esp + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00220934; /* je: equal / zero */

loc_002208F0: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x002208F9u); RECOMP_ABI_CALL(0x001F7CD0u, sub_001F7CD0); /* call 0x001F7CD0 */

loc_002208F9: ;
    MEM32(esi) = 0x3F5C90;
    ecx = esi;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x0022090Du); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0022090D: ;
    ecx = esi;
    MEM32(esi) = 0x3F7BA0;
    PUSH32(esp, 0x0022091Au); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0022091A: ;
    MEM32(esi) = 0x3F7BA0;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00220927u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00220927: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00220930u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00220930: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00220934: ;
    esi = 0; /* xor self */
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0022093Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0022093D: ;
    edx = MEM32(esi);
    PUSH32(esp, esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00220945u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00220945: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00220950
 * Original: 0x00220950 - 0x002209A9 (89 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00220950: ;
    eax = MEM32(0x5BC508);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022097A; /* je: equal / zero */

loc_0022095D: ;
    PUSH32(esp, 0x220710);
    PUSH32(esp, 0x00220967u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00220967: ;
    ecx = MEM32(esp + 0xC);
    esp = esp + 4;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00220976u); RECOMP_ABI_CALL(0x0020E610u, sub_0020E610); /* call 0x0020E610 */

loc_00220976: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_0022097A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x00220984u); RECOMP_ABI_CALL(0x001F7E70u, sub_001F7E70); /* call 0x001F7E70 */

loc_00220984: ;
    esi = eax;
    esp = esp + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002209A2; /* je: equal / zero */

loc_0022098D: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00220995u); RECOMP_ABI_CALL(0x00216980u, sub_00216980); /* call 0x00216980 */

loc_00220995: ;
    MEM32(esi) = 0x3F7BA0;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_002209A2: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002209B0
 * Original: 0x002209B0 - 0x002209CE (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002209B0(void)
{

loc_002209B0: ;
    PUSH32(esp, 0x2207E0);
    PUSH32(esp, 0x002209BAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002209BA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BC1C4);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002209CDu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_002209CD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002209D0
 * Original: 0x002209D0 - 0x002209FC (44 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002209D0(void)
{

loc_002209D0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    PUSH32(esp, 0x2207E0);
    esi = ecx;
    PUSH32(esp, 0x002209E4u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002209E4: ;
    ecx = MEM32(0x5BC1C4);
    esp = esp + 4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002209F3u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_002209F3: ;
    MEM32(esi) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00220A00
 * Original: 0x00220A00 - 0x00220C0A (522 bytes, 185 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220A00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00220A00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = MEM32(ecx + edi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00220A9D; /* jne: not equal / not zero */

loc_00220A1B: ;
    eax = ZX8(MEM8(esi + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    edx = MEM32(0x5BC53C);
    if (TEST_NZ(_fa, _fb)) goto loc_00220A2F; /* jne: not equal / not zero */

loc_00220A29: ;
    edx = MEM32(0x5BC538);

loc_00220A2F: ;
    ecx = MEM32(edx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    ebx = MEM32(ecx + eax * 4);
    PUSH32(esp, 0x2207E0);
    PUSH32(esp, 0x00220A40u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00220A40: ;
    ecx = MEM32(0x5BC1C4);
    esp = esp + 4;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00220A4Fu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00220A4F: ;
    edx = MEM32(0x5BC53C);
    ebp = eax;
    eax = ZX8(MEM8(esi + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00220A65; /* jne: not equal / not zero */

loc_00220A5F: ;
    edx = MEM32(0x5BC538);

loc_00220A65: ;
    ecx = MEM32(edx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    ebx = MEM32(ecx + eax * 4);
    PUSH32(esp, 0x2207E0);
    PUSH32(esp, 0x00220A76u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00220A76: ;
    ecx = MEM32(0x5BC1C4);
    esp = esp + 4;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00220A85u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00220A85: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 0x00220A91u); RECOMP_ABI_CALL(0x0020B340u, sub_0020B340); /* call 0x0020B340 */

loc_00220A91: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00220A9Bu); RECOMP_ABI_CALL(0x0020B340u, sub_0020B340); /* call 0x0020B340 */

loc_00220A9B: ;
    goto loc_00220AB4;

loc_00220A9D: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(esi + 0x10);
    ebp = eax;
    eax = MEM32(edx + 0x10);
    eax = MEM32(eax + edi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00220AB2; /* je: equal / zero */

loc_00220AAF: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00220AB2: ;
    ebx = eax;

loc_00220AB4: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00220AC9; /* je: equal / zero */

loc_00220ABC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00220AC2u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00220AC2: ;
    ecx = eax;
    PUSH32(esp, 0x00220AC9u); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_00220AC9: ;
    esi = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00220AE1; /* jle: less or equal (signed <=) */

loc_00220AD2: ;
    edx = MEM32(ebp + 0x10);

loc_00220AD5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00220B00; /* je: equal / zero */

loc_00220AD9: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00220AD5; /* jl: less (signed <) */

loc_00220AE1: ;
    edi = edi | 0xFFFFFFFFu;

loc_00220AE4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00220AF0; /* je: equal / zero */

loc_00220AE8: ;
    ecx = eax + -8;
    PUSH32(esp, 0x00220AF0u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00220AF0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00220B31; /* jl: less (signed <) */

loc_00220AF4: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00220B04; /* jne: not equal / not zero */

loc_00220AFC: ;
    esi = 0; /* xor self */
    goto loc_00220B13;

loc_00220B00: ;
    edi = ecx;
    goto loc_00220AE4;

loc_00220B04: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00220B0Au); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00220B0A: ;
    ecx = eax;
    PUSH32(esp, 0x00220B11u); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_00220B11: ;
    esi = eax;

loc_00220B13: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00220BC9; /* je: equal / zero */

loc_00220B1E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00220BC9; /* jge: greater or equal (signed >=) */

loc_00220B26: ;
    ecx = MEM32(ebx + 0x10);
    edi = ecx + edi * 4;
    goto loc_00220BB2;

loc_00220B31: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00220B3D; /* jne: not equal / not zero */

loc_00220B39: ;
    esi = 0; /* xor self */
    goto loc_00220B4C;

loc_00220B3D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00220B43u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00220B43: ;
    ecx = eax;
    PUSH32(esp, 0x00220B4Au); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_00220B4A: ;
    esi = eax;

loc_00220B4C: ;
    edi = MEM32(ebp + 8);
    edx = edi + 1;
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x00220B5Au); RECOMP_ABI_CALL(0x002180E0u, sub_002180E0); /* call 0x002180E0 */

loc_00220B5A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    eax = MEM32(ebp + 0x10);
    edi = eax + edi * 4;
    if (TEST_Z(_fa, _fb)) goto loc_00220B67; /* je: equal / zero */

loc_00220B64: ;
    MEM32(esi + -4) = MEM32(esi + -4) + 1;
    _fa = (uint32_t)(MEM32(esi + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00220B67: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00220B75; /* je: equal / zero */

loc_00220B6D: ;
    ecx = eax + -8;
    PUSH32(esp, 0x00220B75u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00220B75: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_00220B83; /* je: equal / zero */

loc_00220B7B: ;
    ecx = esi + -8;
    PUSH32(esp, 0x00220B83u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00220B83: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00220B8F; /* jne: not equal / not zero */

loc_00220B8B: ;
    esi = 0; /* xor self */
    goto loc_00220B9E;

loc_00220B8F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00220B95u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00220B95: ;
    ecx = eax;
    PUSH32(esp, 0x00220B9Cu); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_00220B9C: ;
    esi = eax;

loc_00220B9E: ;
    edi = MEM32(ebx + 8);
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x00220BACu); RECOMP_ABI_CALL(0x002180E0u, sub_002180E0); /* call 0x002180E0 */

loc_00220BAC: ;
    edx = MEM32(ebx + 0x10);
    edi = edx + edi * 4;

loc_00220BB2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00220BB9; /* je: equal / zero */

loc_00220BB6: ;
    MEM32(esi + -4) = MEM32(esi + -4) + 1;
    _fa = (uint32_t)(MEM32(esi + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00220BB9: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00220BC7; /* je: equal / zero */

loc_00220BBF: ;
    ecx = eax + -8;
    PUSH32(esp, 0x00220BC7u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00220BC7: ;
    MEM32(edi) = esi;

loc_00220BC9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00220BD5; /* je: equal / zero */

loc_00220BCD: ;
    ecx = esi + -8;
    PUSH32(esp, 0x00220BD5u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00220BD5: ;
    edx = MEM32(ebx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00220BEC; /* jne: not equal / not zero */

loc_00220BE5: ;
    ecx = ebx;
    PUSH32(esp, 0x00220BECu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00220BEC: ;
    ecx = MEM32(ebp + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebp + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00220C03; /* jne: not equal / not zero */

loc_00220BFC: ;
    ecx = ebp;
    PUSH32(esp, 0x00220C03u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00220C03: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00220C10
 * Original: 0x00220C10 - 0x00220EF4 (740 bytes, 260 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220C10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00220C10: ;
    eax = MEM32(0x5BC544);
    esp = esp - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00220C2C; /* jle: less or equal (signed <=) */

loc_00220C1C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00220C2A; /* jge: greater or equal (signed >=) */

loc_00220C21: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00220C3A;

loc_00220C2A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00220C2C: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00220C38; /* jne: not equal / not zero */

loc_00220C2E: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00220C3A; /* jne: not equal / not zero */

loc_00220C38: ;
    ecx = 0; /* xor self */

loc_00220C3A: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00220C48u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00220C48: ;
    PUSH32(esp, 0x220870);
    esi = eax;
    PUSH32(esp, 0x00220C54u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00220C54: ;
    ecx = MEM32(0x5BC290);
    esp = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00220C63u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00220C63: ;
    ebx = eax;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00220C6Fu); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00220C6F: ;
    ecx = eax;
    PUSH32(esp, 0x00220C76u); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_00220C76: ;
    esi = eax;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00220C87; /* je: equal / zero */

loc_00220C7F: ;
    ecx = eax + -8;
    PUSH32(esp, 0x00220C87u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00220C87: ;
    MEM32(ebx + 8) = esi;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00220CA3; /* jle: less or equal (signed <=) */

loc_00220C93: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00220CA1; /* jge: greater or equal (signed >=) */

loc_00220C98: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00220CB1;

loc_00220CA1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00220CA3: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00220CAF; /* jne: not equal / not zero */

loc_00220CA5: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00220CB1; /* jne: not equal / not zero */

loc_00220CAF: ;
    ecx = 0; /* xor self */

loc_00220CB1: ;
    eax = MEM32(0x46A684);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00220CBCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00220CBC: ;
    ecx = MEM32(ebx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    esi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00220CDA; /* je: equal / zero */

loc_00220CC5: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00220CDA; /* jne: not equal / not zero */

loc_00220CD5: ;
    PUSH32(esp, 0x00220CDAu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00220CDA: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x2207E0);
    PUSH32(esp, 0x00220CE6u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00220CE6: ;
    ecx = MEM32(0x5BC1C4);
    esp = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00220CF5u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00220CF5: ;
    edi = MEM32(esp + 0x28);
    PUSH32(esp, edi);
    ecx = eax;
    MEM32(ebx + 0xC) = eax;
    PUSH32(esp, 0x00220D04u); RECOMP_ABI_CALL(0x002180E0u, sub_002180E0); /* call 0x002180E0 */

loc_00220D04: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00220D1D; /* jle: less or equal (signed <=) */

loc_00220D0D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00220D1B; /* jge: greater or equal (signed >=) */

loc_00220D12: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00220D2B;

loc_00220D1B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00220D1D: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00220D29; /* jne: not equal / not zero */

loc_00220D1F: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00220D2B; /* jne: not equal / not zero */

loc_00220D29: ;
    ecx = 0; /* xor self */

loc_00220D2B: ;
    eax = MEM32(0x46A684);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00220D36u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00220D36: ;
    ecx = MEM32(ebx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    esi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00220D54; /* je: equal / zero */

loc_00220D3F: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00220D54; /* jne: not equal / not zero */

loc_00220D4F: ;
    PUSH32(esp, 0x00220D54u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00220D54: ;
    PUSH32(esp, 0x21EED0);
    PUSH32(esp, 0x00220D5Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00220D5E: ;
    ecx = MEM32(0x5BC420);
    esp = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00220D6Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00220D6D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(ebx + 0x10) = eax;
    ecx = eax;
    if (TEST_S(_fas, _fbs)) goto loc_00220D88; /* jl: less (signed <) */

loc_00220D76: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00220D80; /* jg: greater (signed >) */

loc_00220D7B: ;
    MEM32(ecx + 8) = edi;
    goto loc_00220D88;

loc_00220D80: ;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00220D88u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00220D88: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00220E8A; /* jle: less or equal (signed <=) */

loc_00220D96: ;
    ecx = MEM32(esp + 0x20);
    ecx = ecx - MEM32(esp + 0x24);
    MEM32(esp + 0x14) = ecx;
    goto loc_00220DB0;

loc_00220DA4: ;
    ecx = MEM32(esp + 0x14);
    goto loc_00220DB0;

    /* nop */

loc_00220DB0: ;
    edx = MEM32(esp + 0x24);
    ebp = esi * 4;
    eax = edx + ebp;
    eax = MEM32(ecx + eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00220DC9; /* jne: not equal / not zero */

loc_00220DC5: ;
    edi = 0; /* xor self */
    goto loc_00220DD8;

loc_00220DC9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00220DCFu); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00220DCF: ;
    ecx = eax;
    PUSH32(esp, 0x00220DD6u); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_00220DD6: ;
    edi = eax;

loc_00220DD8: ;
    eax = MEM32(ebx + 0xC);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00220E0A; /* je: equal / zero */

loc_00220DE2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00220E0A; /* jl: less (signed <) */

loc_00220DE6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00220E0A; /* jge: greater or equal (signed >=) */

loc_00220DEA: ;
    esi = MEM32(eax + 0x10);
    esi = esi + ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00220DF6; /* je: equal / zero */

loc_00220DF3: ;
    MEM32(edi + -4) = MEM32(edi + -4) + 1;
    _fa = (uint32_t)(MEM32(edi + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00220DF6: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00220E04; /* je: equal / zero */

loc_00220DFC: ;
    ecx = eax + -8;
    PUSH32(esp, 0x00220E04u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00220E04: ;
    MEM32(esi) = edi;
    esi = MEM32(esp + 0x10);

loc_00220E0A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00220E58; /* je: equal / zero */

loc_00220E0E: ;
    eax = MEM32(edi + -4);
    esi = edi + -8;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = eax;
    if ((_fa != 0)) goto loc_00220E54; /* jne: not equal / not zero */

loc_00220E1A: ;
    edi = MEM32(esi);
    ecx = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00220E24u); RECOMP_ABI_CALL(0x001F87A0u, sub_001F87A0); /* call 0x001F87A0 */

loc_00220E24: ;
    eax = esi + 8;
    edx = eax + 1;
    /* nop */

loc_00220E30: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00220E30; /* jne: not equal / not zero */

loc_00220E37: ;
    eax = eax - edx;
    eax = eax + 9;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00220E45u); RECOMP_ABI_CALL(0x001EBA30u, sub_001EBA30); /* call 0x001EBA30 */

loc_00220E45: ;
    SET_LO8(eax, MEM8(edi + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00220E54; /* je: equal / zero */

loc_00220E4C: ;
    ecx = MEM32(edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00220E54u); RECOMP_ABI_CALL(0x0020EEE0u, sub_0020EEE0); /* call 0x0020EEE0 */

loc_00220E54: ;
    esi = MEM32(esp + 0x10);

loc_00220E58: ;
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00220E79; /* je: equal / zero */

loc_00220E62: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00220E79; /* jl: less (signed <) */

loc_00220E66: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00220E79; /* jge: greater or equal (signed >=) */

loc_00220E6A: ;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(esp + 0x24);
    eax = edx + ebp;
    eax = MEM32(eax);
    MEM32(ecx + ebp) = eax;

loc_00220E79: ;
    eax = MEM32(esp + 0x28);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_00220DA4; /* jl: less (signed <) */

loc_00220E8A: ;
    ecx = MEM32(0x5BC508);
    esi = MEM32(ecx + 0x24);
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    ebp = MEM32(esi + 0xC);
    if (TEST_NZ(_fa, _fb)) goto loc_00220EA4; /* jne: not equal / not zero */

loc_00220EA0: ;
    eax = 0; /* xor self */
    goto loc_00220EBB;

loc_00220EA4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00220EAAu); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_00220EAA: ;
    edx = MEM32(eax);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x144); PUSH32(esp, 0x00220EB8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00220EB8: ;
    eax = eax >> 2;

loc_00220EBB: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00220EC7; /* jl: less (signed <) */

loc_00220EBF: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00220EC7u); RECOMP_ABI_CALL(0x00202B60u, sub_00202B60); /* call 0x00202B60 */

loc_00220EC7: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 8);
    MEM32(ecx + eax * 4) = ebx;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(ebx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    POP32(esp, edi);
    MEM32(ebx + 4) = ecx;
    POP32(esp, ebp);
    if (TEST_NZ(_fa, _fb)) goto loc_00220EEC; /* jne: not equal / not zero */

loc_00220EE5: ;
    ecx = ebx;
    PUSH32(esp, 0x00220EECu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00220EEC: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00220F00
 * Original: 0x00220F00 - 0x00220F28 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00220F00: ;
    eax = MEM32(0x5BC198);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00220F27; /* jne: not equal / not zero */

loc_00220F09: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x46ACA4);
    PUSH32(esp, 0x46AC8C);
    PUSH32(esp, 0x3F8BE4);
    PUSH32(esp, 0x00220F1Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_00220F1F: ;
    esp = esp + 0x10;
    MEM32(0x5BC198) = eax;

loc_00220F27: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00220F30
 * Original: 0x00220F30 - 0x00220F58 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00220F30: ;
    eax = MEM32(0x5BC19C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00220F57; /* jne: not equal / not zero */

loc_00220F39: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x46ACC4);
    PUSH32(esp, 0x46ACBC);
    PUSH32(esp, 0x3F8C08);
    PUSH32(esp, 0x00220F4Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_00220F4F: ;
    esp = esp + 0x10;
    MEM32(0x5BC19C) = eax;

loc_00220F57: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00220F60
 * Original: 0x00220F60 - 0x00220F88 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00220F60: ;
    eax = MEM32(0x5BC1A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00220F87; /* jne: not equal / not zero */

loc_00220F69: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x46ACD8);
    PUSH32(esp, 0x46ACCC);
    PUSH32(esp, 0x3ED58C);
    PUSH32(esp, 0x00220F7Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_00220F7F: ;
    esp = esp + 0x10;
    MEM32(0x5BC1A0) = eax;

loc_00220F87: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00220F90
 * Original: 0x00220F90 - 0x00220FB8 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00220F90: ;
    eax = MEM32(0x5BC1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00220FB7; /* jne: not equal / not zero */

loc_00220F99: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x46ACEC);
    PUSH32(esp, 0x46ACE4);
    PUSH32(esp, 0x3F8C40);
    PUSH32(esp, 0x00220FAFu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_00220FAF: ;
    esp = esp + 0x10;
    MEM32(0x5BC1A4) = eax;

loc_00220FB7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00220FC0
 * Original: 0x00220FC0 - 0x00220FE8 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00220FC0: ;
    eax = MEM32(0x5BC238);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00220FE7; /* jne: not equal / not zero */

loc_00220FC9: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x46AD00);
    PUSH32(esp, 0x46ACF4);
    PUSH32(esp, 0x3F8C7C);
    PUSH32(esp, 0x00220FDFu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_00220FDF: ;
    esp = esp + 0x10;
    MEM32(0x5BC238) = eax;

loc_00220FE7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00220FF0
 * Original: 0x00220FF0 - 0x00221037 (71 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220FF0(void)
{

loc_00220FF0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BC23C);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 2);
    PUSH32(esp, 0x46AD24);
    ecx = esi;
    PUSH32(esp, 0x0022100Cu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0022100C: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + edi * 4 + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x46AD1C);
    PUSH32(esp, 0x46AD14);
    PUSH32(esp, 0x46AD0C);
    ecx = esi;
    MEM32(eax + 0x34) = 0x220FC0;
    PUSH32(esp, 0x00221034u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00221034: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00221040
 * Original: 0x00221040 - 0x00221068 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00221040: ;
    eax = MEM32(0x5BC288);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00221067; /* jne: not equal / not zero */

loc_00221049: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x46AD3C);
    PUSH32(esp, 0x46AD2C);
    PUSH32(esp, 0x3F8D00);
    PUSH32(esp, 0x0022105Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_0022105F: ;
    esp = esp + 0x10;
    MEM32(0x5BC288) = eax;

loc_00221067: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00221070
 * Original: 0x00221070 - 0x002212B5 (581 bytes, 184 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221070(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00221070: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC294);
    eax = MEM32(esi + 0x28);
    ebp = MEM32(eax + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 8);
    PUSH32(esp, 0x46ADAC);
    ecx = esi;
    PUSH32(esp, 0x00221091u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00221091: ;
    ecx = MEM32(0x5BB930);
    edi = MEM32(esi + 0x28);
    PUSH32(esp, 0x3F88C8);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x002210A7u); RECOMP_ABI_CALL(0x001E8800u, sub_001E8800); /* call 0x001E8800 */

loc_002210A7: ;
    ecx = MEM32(edi + 8);
    edi = MEM32(edi + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002210C1; /* jle: less or equal (signed <=) */

loc_002210B3: ;
    _fa = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + edx * 4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002211BF; /* je: equal / zero */

loc_002210BC: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002210B3; /* jl: less (signed <) */

loc_002210C1: ;
    ebx = ebx | 0xFFFFFFFFu;

loc_002210C4: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x002210CDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002210CD: ;
    edi = eax;
    eax = MEM32(edi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM8(esp + 0x14) = 2;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x002210E3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002210E3: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(edi + 0x1C) = 0x5BBF24;
    PUSH32(esp, 0x002210F3u); RECOMP_ABI_CALL(0x002093F0u, sub_002093F0); /* call 0x002093F0 */

loc_002210F3: ;
    edx = MEM32(edi + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0022110A; /* jne: not equal / not zero */

loc_00221103: ;
    ecx = edi;
    PUSH32(esp, 0x0022110Au); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0022110A: ;
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ecx = MEM32(eax + ebp * 4);
    MEM8(ecx + 0x26) = 0;
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    edi = MEM32(eax + ebp * 4 + 4);
    PUSH32(esp, 0x00221126u); RECOMP_ABI_CALL(0x001F3260u, sub_001F3260); /* call 0x001F3260 */

loc_00221126: ;
    MEM32(edi + 0x38) = eax;
    MEM8(edi + 0x3C) = 0;
    MEM8(edi + 0x28) = 1;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + ebp * 4 + 8);
    eax = MEM32(ecx);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM8(esp + 0x14) = 1;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0022114Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0022114D: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ecx = MEM32(ecx + ebp * 4 + 0xC);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM8(esp + 0x14) = 1;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00221169u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00221169: ;
    edi = MEM32(esi + 0x28);
    eax = MEM32(edi + 0xC);
    ecx = MEM32(edi + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002211A5; /* jle: less or equal (signed <=) */

loc_00221180: ;
    edx = MEM32(0x5BB930);
    PUSH32(esp, 0x3F8D48);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00221193u); RECOMP_ABI_CALL(0x001E8800u, sub_001E8800); /* call 0x001E8800 */

loc_00221193: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(MEM32(ecx + ebx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + ebx * 4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002211A8; /* je: equal / zero */

loc_0022119C: ;
    eax = MEM32(esp + 0x18);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00221180; /* jl: less (signed <) */

loc_002211A5: ;
    ebx = ebx | 0xFFFFFFFFu;

loc_002211A8: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002211C8; /* jle: less or equal (signed <=) */

loc_002211B1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002211C6; /* jge: greater or equal (signed >=) */

loc_002211B6: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_002211D6;

loc_002211BF: ;
    ebx = edx;
    goto loc_002210C4;

loc_002211C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_002211C8: ;
    if (TEST_NZ(_fa, _fb)) goto loc_002211D4; /* jne: not equal / not zero */

loc_002211CA: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002211D6; /* jne: not equal / not zero */

loc_002211D4: ;
    ecx = 0; /* xor self */

loc_002211D6: ;
    eax = MEM32(0x46A684);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x002211E1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002211E1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002211E7u); RECOMP_ABI_CALL(0x002208B0u, sub_002208B0); /* call 0x002208B0 */

loc_002211E7: ;
    esp = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0x24);
    edi = eax;
    PUSH32(esp, 0x5BB9FC);
    PUSH32(esp, 0x3F8D48);
    ecx = edi;
    PUSH32(esp, 0x00221200u); RECOMP_ABI_CALL(0x0021ABD0u, sub_0021ABD0); /* call 0x0021ABD0 */

loc_00221200: ;
    edx = MEM32(edi);
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x1C) = 3;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00221217u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00221217: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(edi + 0x34) = 0x221040;
    MEM32(edi + 0x1C) = 0x5BB9FC;
    PUSH32(esp, 0x0022122Eu); RECOMP_ABI_CALL(0x002093F0u, sub_002093F0); /* call 0x002093F0 */

loc_0022122E: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00221245; /* jne: not equal / not zero */

loc_0022123E: ;
    ecx = edi;
    PUSH32(esp, 0x00221245u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00221245: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + ebp * 4 + 0x10);
    eax = MEM32(ecx);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM8(esp + 0x14) = 1;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00221261u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00221261: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ecx = MEM32(ecx + ebp * 4 + 0x14);
    edx = MEM32(ecx);
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = 0xFFFFFFFFu;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00221280u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00221280: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    edi = MEM32(edx + ebp * 4 + 0x18);
    PUSH32(esp, 0x0022128Fu); RECOMP_ABI_CALL(0x001F3260u, sub_001F3260); /* call 0x001F3260 */

loc_0022128F: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x46AD8C);
    PUSH32(esp, 0x46AD6C);
    PUSH32(esp, 0x46AD4C);
    ecx = esi;
    MEM32(edi + 0x38) = eax;
    MEM8(edi + 0x28) = 1;
    PUSH32(esp, 0x002212ADu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002212AD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_002212C0
 * Original: 0x002212C0 - 0x002212E8 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002212C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002212C0: ;
    eax = MEM32(0x5BC334);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002212E7; /* jne: not equal / not zero */

loc_002212C9: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x46ADD8);
    PUSH32(esp, 0x46ADCC);
    PUSH32(esp, 0x3F8D90);
    PUSH32(esp, 0x002212DFu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_002212DF: ;
    esp = esp + 0x10;
    MEM32(0x5BC334) = eax;

loc_002212E7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002212F0
 * Original: 0x002212F0 - 0x00221318 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002212F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002212F0: ;
    eax = MEM32(0x5BC338);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00221317; /* jne: not equal / not zero */

loc_002212F9: ;
    PUSH32(esp, 9);
    PUSH32(esp, 0x46AE08);
    PUSH32(esp, 0x46ADE4);
    PUSH32(esp, 0x3F8E14);
    PUSH32(esp, 0x0022130Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_0022130F: ;
    esp = esp + 0x10;
    MEM32(0x5BC338) = eax;

loc_00221317: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00221320
 * Original: 0x00221320 - 0x00221348 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00221320: ;
    eax = MEM32(0x5BC384);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00221347; /* jne: not equal / not zero */

loc_00221329: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x46AE34);
    PUSH32(esp, 0x46AE2C);
    PUSH32(esp, 0x3F8E58);
    PUSH32(esp, 0x0022133Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_0022133F: ;
    esp = esp + 0x10;
    MEM32(0x5BC384) = eax;

loc_00221347: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00221350
 * Original: 0x00221350 - 0x00221378 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00221350: ;
    eax = MEM32(0x5BC3AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00221377; /* jne: not equal / not zero */

loc_00221359: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x46AE48);
    PUSH32(esp, 0x46AE3C);
    PUSH32(esp, 0x3F8E90);
    PUSH32(esp, 0x0022136Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_0022136F: ;
    esp = esp + 0x10;
    MEM32(0x5BC3AC) = eax;

loc_00221377: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00221380
 * Original: 0x00221380 - 0x002213A8 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00221380: ;
    eax = MEM32(0x5BC3B0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002213A7; /* jne: not equal / not zero */

loc_00221389: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x46AE60);
    PUSH32(esp, 0x46AE54);
    PUSH32(esp, 0x3F8EA4);
    PUSH32(esp, 0x0022139Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_0022139F: ;
    esp = esp + 0x10;
    MEM32(0x5BC3B0) = eax;

loc_002213A7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002213B0
 * Original: 0x002213B0 - 0x0022146F (191 bytes, 61 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002213B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002213B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC3B4);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 4);
    PUSH32(esp, 0x46AE9C);
    ecx = esi;
    PUSH32(esp, 0x002213CFu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_002213CF: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebp = MEM32(edx + edi * 4);
    eax = MEM32(ebp);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x002213F0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002213F0: ;
    ebx = 0; /* xor self */
    MEM8(ebp + 0x26) = LO8(ebx);
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ebp = MEM32(eax + edi * 4 + 4);
    edx = MEM32(ebp);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp;
    MEM32(esp + 0x14) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00221413u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00221413: ;
    MEM8(ebp + 0x26) = LO8(ebx);
    MEM32(ebp + 0x34) = 0x221380;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebp = MEM32(edx + edi * 4 + 8);
    eax = MEM32(ebp);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM32(esp + 0x14) = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0022143Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0022143B: ;
    MEM8(ebp + 0x26) = LO8(ebx);
    MEM32(ebp + 0x34) = 0x221350;
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ecx = MEM32(eax + edi * 4 + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x46AE8C);
    PUSH32(esp, 0x46AE7C);
    MEM8(ecx + 0x26) = LO8(ebx);
    PUSH32(esp, 0x46AE6C);
    ecx = esi;
    PUSH32(esp, 0x00221469u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00221469: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00221470
 * Original: 0x00221470 - 0x00221498 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00221470: ;
    eax = MEM32(0x5BC484);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00221497; /* jne: not equal / not zero */

loc_00221479: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x46AEBC);
    PUSH32(esp, 0x46AEAC);
    PUSH32(esp, 0x3F8F88);
    PUSH32(esp, 0x0022148Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_0022148F: ;
    esp = esp + 0x10;
    MEM32(0x5BC484) = eax;

loc_00221497: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002214A0
 * Original: 0x002214A0 - 0x002214C8 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002214A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002214A0: ;
    eax = MEM32(0x5BC490);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002214C7; /* jne: not equal / not zero */

loc_002214A9: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x46AF2C);
    PUSH32(esp, 0x46AF1C);
    PUSH32(esp, 0x3F8F88);
    PUSH32(esp, 0x002214BFu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_002214BF: ;
    esp = esp + 0x10;
    MEM32(0x5BC490) = eax;

loc_002214C7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002214D0
 * Original: 0x002214D0 - 0x002214F8 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002214D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002214D0: ;
    eax = MEM32(0x5BC494);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002214F7; /* jne: not equal / not zero */

loc_002214D9: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x46AF4C);
    PUSH32(esp, 0x46AF3C);
    PUSH32(esp, 0x3F903C);
    PUSH32(esp, 0x002214EFu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_002214EF: ;
    esp = esp + 0x10;
    MEM32(0x5BC494) = eax;

loc_002214F7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00221500
 * Original: 0x00221500 - 0x00221528 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00221500: ;
    eax = MEM32(0x5BC4AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00221527; /* jne: not equal / not zero */

loc_00221509: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x46AF6C);
    PUSH32(esp, 0x46AF5C);
    PUSH32(esp, 0x3F8F88);
    PUSH32(esp, 0x0022151Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_0022151F: ;
    esp = esp + 0x10;
    MEM32(0x5BC4AC) = eax;

loc_00221527: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00221530
 * Original: 0x00221530 - 0x0022154F (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00221530: ;
    eax = MEM32(0x5BC68C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022154E; /* jne: not equal / not zero */

loc_00221539: ;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, 0x00221546u); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_00221546: ;
    esp = esp + 0x10;
    MEM32(0x5BC68C) = eax;

loc_0022154E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00221550
 * Original: 0x00221550 - 0x0022172D (477 bytes, 150 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221550(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00221550: ;
    eax = MEM32(esp + 4);
    esp = esp - 0x188;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00221566u); RECOMP_ABI_CALL(0x00203700u, sub_00203700); /* call 0x00203700 */

loc_00221566: ;
    ecx = MEM32(0x5BC508);
    edx = MEM32(ecx + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00221691; /* je: equal / zero */

loc_0022157C: ;
    eax = MEM32(0x5BC490);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002215A3; /* jne: not equal / not zero */

loc_00221585: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x46AF2C);
    PUSH32(esp, 0x46AF1C);
    PUSH32(esp, 0x3F8F88);
    PUSH32(esp, 0x0022159Bu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_0022159B: ;
    esp = esp + 0x10;
    MEM32(0x5BC490) = eax;

loc_002215A3: ;
    edx = MEM32(esi + 0xBC);
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x002215B6u); RECOMP_ABI_CALL(0x00216890u, sub_00216890); /* call 0x00216890 */

loc_002215B6: ;
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0x3F);
    edx = esp + 0x1C;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002215C7u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_002215C7: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM8(esp + 0x57) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_002215DB; /* je: equal / zero */

loc_002215D3: ;
    ecx = edi + -8;
    PUSH32(esp, 0x002215DBu); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_002215DB: ;
    eax = esp + 0x18;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(0x5BC494);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022160A; /* jne: not equal / not zero */

loc_002215EC: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x46AF4C);
    PUSH32(esp, 0x46AF3C);
    PUSH32(esp, 0x3F903C);
    PUSH32(esp, 0x00221602u); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_00221602: ;
    esp = esp + 0x10;
    MEM32(0x5BC494) = eax;

loc_0022160A: ;
    ecx = MEM32(esi + 0xB8);
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0022161Du); RECOMP_ABI_CALL(0x00216890u, sub_00216890); /* call 0x00216890 */

loc_0022161D: ;
    edi = MEM32(esp + 0x14);
    PUSH32(esp, 0x3F);
    eax = esp + 0x5C;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0022162Eu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0022162E: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM8(esp + 0x97) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00221645; /* je: equal / zero */

loc_0022163D: ;
    ecx = edi + -8;
    PUSH32(esp, 0x00221645u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00221645: ;
    eax = MEM32(0x5BC48C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ebx = esp + 0x58;
    if (TEST_NZ(_fa, _fb)) goto loc_00221670; /* jne: not equal / not zero */

loc_00221652: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x46AEF4);
    PUSH32(esp, 0x46AECC);
    PUSH32(esp, 0x3F8FE4);
    PUSH32(esp, 0x00221668u); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_00221668: ;
    esp = esp + 0x10;
    MEM32(0x5BC48C) = eax;

loc_00221670: ;
    ecx = MEM32(esi + 0xC0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0xA0;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0022168Au); RECOMP_ABI_CALL(0x00218330u, sub_00218330); /* call 0x00218330 */

loc_0022168A: ;
    esp = esp + 0x10;
    ecx = eax;
    goto loc_0022169C;

loc_00221691: ;
    ebx = 0x3C806C;
    MEM32(esp + 0x10) = ebx;
    ecx = ebx;

loc_0022169C: ;
    eax = MEM32(esi + 0x70);
    ebp = MEM32(eax + 0x7F0);
    eax = MEM32(eax + 0x7EC);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    edx = MEM32(esi);
    edi = eax;
    eax = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = esi;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((1) & 31u));
    { uint32_t _icall_target = MEM32(edx + 0x160); PUSH32(esp, 0x002216C3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002216C3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C4); PUSH32(esp, 0x002216D0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002216D0: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C0); PUSH32(esp, 0x002216DBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002216DB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x002216E3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002216E3: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x002216EEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002216EE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xA4); PUSH32(esp, 0x002216F9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002216F9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F9058);
    PUSH32(esp, 0x00221704u); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_00221704: ;
    ecx = MEM32(0x5BC558);
    esp = esp + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0022171A; /* je: equal / zero */

loc_00221715: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0022171Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0022171A: ;
    PUSH32(esp, 0x47A160);
    PUSH32(esp, 0x00221724u); RECOMP_ABI_CALL(0x00344447u, sub_00344447); /* call 0x00344447 */

loc_00221724: ;
    esp = esp + 0x18C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00221730
 * Original: 0x00221730 - 0x002218F8 (456 bytes, 145 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221730(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00221730: ;
    eax = MEM32(esp + 4);
    esp = esp - 0x88;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00221773; /* je: equal / zero */

loc_00221744: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00221773; /* je: equal / zero */

loc_00221749: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F1570);
    PUSH32(esp, 0x00221754u); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_00221754: ;
    ecx = MEM32(0x5BC558);
    esp = esp + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00221766; /* je: equal / zero */

loc_00221761: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00221766u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00221766: ;
    PUSH32(esp, 0x47A160);
    PUSH32(esp, 0x00221770u); RECOMP_ABI_CALL(0x00344447u, sub_00344447); /* call 0x00344447 */

loc_00221770: ;
    esp = esp + 4;

loc_00221773: ;
    ecx = MEM32(0x5BC508);
    eax = MEM32(ecx + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002217E8; /* je: equal / zero */

loc_00221780: ;
    eax = MEM32(0x5BC4AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002217A7; /* jne: not equal / not zero */

loc_00221789: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x46AF6C);
    PUSH32(esp, 0x46AF5C);
    PUSH32(esp, 0x3F8F88);
    PUSH32(esp, 0x0022179Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_0022179F: ;
    esp = esp + 0x10;
    MEM32(0x5BC4AC) = eax;

loc_002217A7: ;
    edx = MEM32(esi + 0x98);
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x002217BAu); RECOMP_ABI_CALL(0x00216890u, sub_00216890); /* call 0x00216890 */

loc_002217BA: ;
    edi = MEM32(esp + 0x18);
    PUSH32(esp, 0x3F);
    edx = esp + 0x5C;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002217CBu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_002217CB: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM8(esp + 0x97) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_002217E2; /* je: equal / zero */

loc_002217DA: ;
    ecx = edi + -8;
    PUSH32(esp, 0x002217E2u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_002217E2: ;
    eax = esp + 0x58;
    goto loc_002217ED;

loc_002217E8: ;
    eax = 0x3C806C;

loc_002217ED: ;
    ecx = MEM32(esi + 0x64);
    edx = MEM32(esi + 0x5C);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esi + 0x54);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(esi + 0x48);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esi + 0x4C);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esi + 0x40);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esi + 0x44);
    edi = MEM32(esi + 0x60);
    ebx = MEM32(esi + 0x58);
    ebp = MEM32(esi + 0x50);
    MEM32(esp + 0x50) = edx;
    edx = MEM32(esi + 0x38);
    MEM32(esp + 0x54) = ecx;
    ecx = MEM32(esi + 0x3C);
    MEM32(esp + 0x48) = edx;
    edx = MEM32(esi + 0x30);
    MEM32(esp + 0x4C) = ecx;
    ecx = MEM32(esi + 0x34);
    MEM32(esp + 0x30) = edx;
    edx = MEM32(esi + 0x28);
    MEM32(esp + 0x34) = ecx;
    ecx = MEM32(esi + 0x2C);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esi + 0x20);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esi + 0x24);
    MEM32(esp + 0x40) = edx;
    edx = MEM32(esi + 0x18);
    MEM32(esp + 0x44) = ecx;
    ecx = MEM32(esi + 0x1C);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(esi + 0x10);
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(esi + 0x14);
    MEM32(esp + 0x38) = edx;
    edx = MEM32(esi + 8);
    MEM32(esp + 0x3C) = ecx;
    ecx = MEM32(esi + 0xC);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esi);
    MEM32(esp + 0x14) = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00221894u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00221894: ;
    ecx = MEM32(esp + 0x54);
    edx = MEM32(esp + 0x4C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x48);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x60);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x4C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x60);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3F9258);
    PUSH32(esp, 0x002218CFu); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_002218CF: ;
    ecx = MEM32(0x5BC558);
    esp = esp + 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_002218E5; /* je: equal / zero */

loc_002218E0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x002218E5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002218E5: ;
    PUSH32(esp, 0x47A160);
    PUSH32(esp, 0x002218EFu); RECOMP_ABI_CALL(0x00344447u, sub_00344447); /* call 0x00344447 */

loc_002218EF: ;
    esp = esp + 0x8C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00221900
 * Original: 0x00221900 - 0x00221937 (55 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221900(void)
{

loc_00221900: ;
    PUSH32(esp, 0x46AF7C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x221070);
    PUSH32(esp, 0x21BB80);
    PUSH32(esp, 0x50);
    PUSH32(esp, 0x3F94D0);
    PUSH32(esp, 0x1F2850);
    PUSH32(esp, 0x217630);
    PUSH32(esp, 0x21EF70);
    PUSH32(esp, 0x5BC294);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00221933u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00221933: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00221940
 * Original: 0x00221940 - 0x0022195C (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00221940: ;
    eax = MEM32(0x5BC298);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022195B; /* jne: not equal / not zero */

loc_00221949: ;
    PUSH32(esp, 0x221900);
    PUSH32(esp, 0x00221953u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00221953: ;
    eax = MEM32(0x5BC298);
    esp = esp + 4;

loc_0022195B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00221960
 * Original: 0x00221960 - 0x00221995 (53 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221960(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00221960: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x5BC298);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00221980; /* jne: not equal / not zero */

loc_0022196D: ;
    PUSH32(esp, 0x221900);
    PUSH32(esp, 0x00221977u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00221977: ;
    ecx = MEM32(0x5BC298);
    esp = esp + 4;

loc_00221980: ;
    edx = MEM32(esi + 0x50);
    eax = MEM32(ecx);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0xC));
    POP32(esp, esi);
    MEM32(esp + 8) = edx;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC8)); return; /* indirect tail jmp */

}

/**
 * sub_002219A0
 * Original: 0x002219A0 - 0x00221A12 (114 bytes, 45 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002219A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002219A0: ;
    eax = MEM32(0x5BC508);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002219C8; /* je: equal / zero */

loc_002219AA: ;
    PUSH32(esp, 0x221900);
    PUSH32(esp, 0x002219B4u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002219B4: ;
    ecx = MEM32(esp + 8);
    esp = esp + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(0x5BC294);
    PUSH32(esp, 0x002219C7u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_002219C7: ;
    esp += 4; return; /* ret */

loc_002219C8: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x50);
    PUSH32(esp, 0x002219D7u); RECOMP_ABI_CALL(0x001F7E00u, sub_001F7E00); /* call 0x001F7E00 */

loc_002219D7: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002219FD; /* je: equal / zero */

loc_002219DE: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x002219E7u); RECOMP_ABI_CALL(0x0021C370u, sub_0021C370); /* call 0x0021C370 */

loc_002219E7: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x002219F0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002219F0: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x002219F9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002219F9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002219FD: ;
    esi = 0; /* xor self */
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00221A06u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00221A06: ;
    edx = MEM32(esi);
    PUSH32(esp, esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00221A0Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00221A0E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00221A20
 * Original: 0x00221A20 - 0x00221A6C (76 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00221A20: ;
    eax = MEM32(0x5BC508);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00221A4A; /* je: equal / zero */

loc_00221A2D: ;
    PUSH32(esp, 0x221900);
    PUSH32(esp, 0x00221A37u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00221A37: ;
    ecx = MEM32(esp + 0xC);
    esp = esp + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00221A46u); RECOMP_ABI_CALL(0x0020E610u, sub_0020E610); /* call 0x0020E610 */

loc_00221A46: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00221A4A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x50);
    PUSH32(esp, 0x00221A53u); RECOMP_ABI_CALL(0x001F7E70u, sub_001F7E70); /* call 0x001F7E70 */

loc_00221A53: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00221A66; /* je: equal / zero */

loc_00221A5A: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00221A62u); RECOMP_ABI_CALL(0x0021AB70u, sub_0021AB70); /* call 0x0021AB70 */

loc_00221A62: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00221A66: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00221A70
 * Original: 0x00221A70 - 0x00221B10 (160 bytes, 50 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221A70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00221A70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC438);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 3);
    PUSH32(esp, 0x46AFAC);
    ecx = esi;
    PUSH32(esp, 0x00221A8Eu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00221A8E: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebx = MEM32(edx + edi * 4);
    PUSH32(esp, 0x00221A9Cu); RECOMP_ABI_CALL(0x001F3210u, sub_001F3210); /* call 0x001F3210 */

loc_00221A9C: ;
    MEM32(ebx + 0x38) = eax;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ebx = MEM32(ecx + edi * 4 + 4);
    ebp = MEM32(ebx + 0x20);
    PUSH32(esp, 0x00221AB1u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00221AB1: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00221AC0; /* je: equal / zero */

loc_00221AB8: ;
    ecx = eax + -8;
    PUSH32(esp, 0x00221AC0u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00221AC0: ;
    MEM32(ebp) = 0;
    MEM8(ebx + 0x35) = 1;
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ebx = MEM32(eax + edi * 4 + 8);
    eax = MEM32(0x5BC454);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00221AEB; /* jne: not equal / not zero */

loc_00221ADE: ;
    PUSH32(esp, 0x21C070);
    PUSH32(esp, 0x00221AE8u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00221AE8: ;
    esp = esp + 4;

loc_00221AEB: ;
    ecx = MEM32(0x5BC454);
    PUSH32(esp, edi);
    PUSH32(esp, 0x46AFA0);
    PUSH32(esp, 0x46AF94);
    MEM32(ebx + 0x3C) = ecx;
    PUSH32(esp, 0x46AF88);
    ecx = esi;
    PUSH32(esp, 0x00221B0Bu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00221B0B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00221B10
 * Original: 0x00221B10 - 0x00221CE8 (472 bytes, 142 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221B10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00221B10: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC28C);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0x46B090);
    ecx = esi;
    PUSH32(esp, 0x00221B31u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00221B31: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + edi * 4);
    SET_LO8(ebx, 0); /* xor self */
    MEM8(eax + 0x26) = LO8(ebx);
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebp = MEM32(edx + edi * 4 + 8);
    eax = MEM32(ebp);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00221B61u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00221B61: ;
    MEM8(ebp + 0x26) = LO8(ebx);
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ebp = MEM32(eax + edi * 4 + 0xC);
    edx = MEM32(ebp);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp;
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00221B86u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00221B86: ;
    MEM8(ebp + 0x26) = LO8(ebx);
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + edi * 4 + 0x10);
    MEM8(eax + 0x26) = LO8(ebx);
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebp = MEM32(edx + edi * 4 + 0x14);
    PUSH32(esp, 0x00221BA5u); RECOMP_ABI_CALL(0x001F3210u, sub_001F3210); /* call 0x001F3210 */

loc_00221BA5: ;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x3C) = LO8(ebx);
    MEM8(ebp + 0x26) = LO8(ebx);
    MEM8(ebp + 0x28) = 1;
    MEM8(ebp + 0x27) = 1;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    eax = MEM32(ecx + edi * 4 + 0x18);
    MEM8(eax + 0x26) = LO8(ebx);
    MEM8(eax + 0x28) = 1;
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    eax = MEM32(eax + edi * 4 + 0x1C);
    MEM8(eax + 0x35) = 1;
    MEM8(eax + 0x40) = 1;
    MEM8(eax + 0x41) = 1;
    MEM8(eax + 0x26) = LO8(ebx);
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4 + 0x20);
    eax = MEM32(ecx);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM8(esp + 0x14) = LO8(ebx);
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00221BFBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00221BFB: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ecx = MEM32(ecx + edi * 4 + 0x28);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM8(esp + 0x14) = 1;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00221C17u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00221C17: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4 + 0x2C);
    MEM8(esp + 0x10) = 1;
    eax = MEM32(ecx);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00221C33u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00221C33: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ecx = MEM32(ecx + edi * 4 + 0x30);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM8(esp + 0x14) = LO8(ebx);
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00221C4Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00221C4E: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4 + 0x34);
    eax = MEM32(ecx);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM8(esp + 0x14) = LO8(ebx);
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00221C69u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00221C69: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ecx = MEM32(ecx + edi * 4 + 0x38);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM8(esp + 0x14) = LO8(ebx);
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00221C84u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00221C84: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4 + 0x3C);
    eax = MEM32(ecx);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM8(esp + 0x14) = 1;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00221CA0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00221CA0: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ecx = MEM32(ecx + edi * 4 + 0x40);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM8(esp + 0x14) = 2;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00221CBCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00221CBC: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + edi * 4 + 0x44);
    PUSH32(esp, edi);
    PUSH32(esp, 0x46B048);
    PUSH32(esp, 0x46B000);
    PUSH32(esp, 0x46AFB8);
    ecx = esi;
    MEM8(eax + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00221CE0u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00221CE0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00221CF0
 * Original: 0x00221CF0 - 0x00221D24 (52 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221CF0(void)
{

loc_00221CF0: ;
    PUSH32(esp, 0x46B0D8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x221B10);
    PUSH32(esp, 0);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x3F95EC);
    PUSH32(esp, 0x2193C0);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BC28C);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00221D20u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00221D20: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00221D30
 * Original: 0x00221D30 - 0x00221D64 (52 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221D30(void)
{

loc_00221D30: ;
    PUSH32(esp, 0x46B0E0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x219670);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x3F95F8);
    PUSH32(esp, 0x1A58F0);
    PUSH32(esp, 0x1A4350);
    PUSH32(esp, 0x221CF0);
    PUSH32(esp, 0x5BC14C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00221D60u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00221D60: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00221D70
 * Original: 0x00221D70 - 0x00221E0E (158 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221D70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00221D70: ;
    eax = MEM32(0x5BB930);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x5BC408);
    esi = MEM32(edi + 0x28);
    PUSH32(esp, 0x3E226C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00221D8Eu); RECOMP_ABI_CALL(0x001E8800u, sub_001E8800); /* call 0x001E8800 */

loc_00221D8E: ;
    ecx = MEM32(esi + 8);
    esi = MEM32(esi + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00221DAA; /* jle: less or equal (signed <=) */

loc_00221D9A: ;
    /* nop */

loc_00221DA0: ;
    _fa = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + edx * 4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00221E07; /* je: equal / zero */

loc_00221DA5: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00221DA0; /* jl: less (signed <) */

loc_00221DAA: ;
    ebx = ebx | 0xFFFFFFFFu;

loc_00221DAD: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00221DB6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00221DB6: ;
    esi = eax;
    eax = MEM32(0x5BC150);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00221DCE; /* jne: not equal / not zero */

loc_00221DC1: ;
    PUSH32(esp, 0x221D30);
    PUSH32(esp, 0x00221DCBu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00221DCB: ;
    esp = esp + 4;

loc_00221DCE: ;
    eax = MEM32(0x5BC150);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x38) = 0;
    MEM32(esi + 0x1C) = 0x5BB868;
    PUSH32(esp, 0x00221DEDu); RECOMP_ABI_CALL(0x002093F0u, sub_002093F0); /* call 0x002093F0 */

loc_00221DED: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_00221E0B; /* jne: not equal / not zero */

loc_00221DFE: ;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_00221E07: ;
    ebx = edx;
    goto loc_00221DAD;

loc_00221E0B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00221E10
 * Original: 0x00221E10 - 0x00221E45 (53 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221E10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00221E10: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x5BC150);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00221E30; /* jne: not equal / not zero */

loc_00221E1D: ;
    PUSH32(esp, 0x221D30);
    PUSH32(esp, 0x00221E27u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00221E27: ;
    ecx = MEM32(0x5BC150);
    esp = esp + 4;

loc_00221E30: ;
    edx = MEM32(esi + 0x34);
    eax = MEM32(ecx);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0xC));
    POP32(esp, esi);
    MEM32(esp + 8) = edx;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC8)); return; /* indirect tail jmp */

}

/**
 * sub_00221E50
 * Original: 0x00221E50 - 0x00221EE9 (153 bytes, 53 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00221E50: ;
    eax = MEM32(0x5BC508);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00221E78; /* je: equal / zero */

loc_00221E5A: ;
    PUSH32(esp, 0x221D30);
    PUSH32(esp, 0x00221E64u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00221E64: ;
    ecx = MEM32(esp + 8);
    esp = esp + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(0x5BC14C);
    PUSH32(esp, 0x00221E77u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00221E77: ;
    esp += 4; return; /* ret */

loc_00221E78: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x00221E87u); RECOMP_ABI_CALL(0x001F7E00u, sub_001F7E00); /* call 0x001F7E00 */

loc_00221E87: ;
    esi = eax;
    esp = esp + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00221ED4; /* je: equal / zero */

loc_00221E90: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00221E99u); RECOMP_ABI_CALL(0x001F7CD0u, sub_001F7CD0); /* call 0x001F7CD0 */

loc_00221E99: ;
    MEM32(esi) = 0x3F5C90;
    ecx = esi;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x00221EADu); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_00221EAD: ;
    ecx = esi;
    MEM32(esi) = 0x3F6318;
    PUSH32(esp, 0x00221EBAu); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_00221EBA: ;
    MEM32(esi) = 0x3F6318;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00221EC7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00221EC7: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00221ED0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00221ED0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00221ED4: ;
    esi = 0; /* xor self */
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00221EDDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00221EDD: ;
    edx = MEM32(esi);
    PUSH32(esp, esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00221EE5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00221EE5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00221EF0
 * Original: 0x00221EF0 - 0x00221F49 (89 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00221EF0: ;
    eax = MEM32(0x5BC508);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00221F1A; /* je: equal / zero */

loc_00221EFD: ;
    PUSH32(esp, 0x221D30);
    PUSH32(esp, 0x00221F07u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00221F07: ;
    ecx = MEM32(esp + 0xC);
    esp = esp + 4;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00221F16u); RECOMP_ABI_CALL(0x0020E610u, sub_0020E610); /* call 0x0020E610 */

loc_00221F16: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_00221F1A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x00221F24u); RECOMP_ABI_CALL(0x001F7E70u, sub_001F7E70); /* call 0x001F7E70 */

loc_00221F24: ;
    esi = eax;
    esp = esp + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00221F42; /* je: equal / zero */

loc_00221F2D: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00221F35u); RECOMP_ABI_CALL(0x00216980u, sub_00216980); /* call 0x00216980 */

loc_00221F35: ;
    MEM32(esi) = 0x3F6318;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_00221F42: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00221F50
 * Original: 0x00221F50 - 0x0022219B (587 bytes, 173 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221F50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00221F50: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC274);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 0x19);
    PUSH32(esp, 0x46B220);
    ecx = esi;
    PUSH32(esp, 0x00221F71u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00221F71: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebp = MEM32(edx + edi * 4);
    eax = MEM32(ebp);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00221F92u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00221F92: ;
    ebx = 0; /* xor self */
    MEM8(ebp + 0x26) = LO8(ebx);
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ebp = MEM32(eax + edi * 4 + 4);
    edx = MEM32(ebp);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp;
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00221FB9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00221FB9: ;
    MEM8(ebp + 0x26) = LO8(ebx);
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4 + 8);
    eax = MEM32(ecx);
    edx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = 1;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00221FDBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00221FDB: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ecx = MEM32(ecx + edi * 4 + 0x14);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM8(esp + 0x14) = 1;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00221FF7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00221FF7: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + edi * 4 + 0x1C);
    ebp = MEM32(eax + 0x20);
    PUSH32(esp, 0x00222009u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00222009: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00222018; /* je: equal / zero */

loc_00222010: ;
    ecx = eax + -8;
    PUSH32(esp, 0x00222018u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00222018: ;
    MEM32(ebp) = ebx;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebp = MEM32(edx + edi * 4 + 0x20);
    eax = MEM32(ebp);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0022203Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0022203D: ;
    MEM8(ebp + 0x26) = LO8(ebx);
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ecx = MEM32(eax + edi * 4 + 0x24);
    MEM8(ecx + 0x26) = LO8(ebx);
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ebp = MEM32(eax + edi * 4 + 0x28);
    PUSH32(esp, 0x0022205Cu); RECOMP_ABI_CALL(0x001F32B0u, sub_001F32B0); /* call 0x001F32B0 */

loc_0022205C: ;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x35) = 1;
    MEM8(ebp + 0x3C) = LO8(ebx);
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + edi * 4 + 0x2C);
    MEM8(eax + 0x26) = LO8(ebx);
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebp = MEM32(edx + edi * 4 + 0x30);
    PUSH32(esp, 0x00222086u); RECOMP_ABI_CALL(0x001F3300u, sub_001F3300); /* call 0x001F3300 */

loc_00222086: ;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x35) = 1;
    MEM8(ebp + 0x3C) = LO8(ebx);
    MEM8(ebp + 0x26) = LO8(ebx);
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ebp = MEM32(ecx + edi * 4 + 0x34);
    PUSH32(esp, 0x002220A2u); RECOMP_ABI_CALL(0x001F3300u, sub_001F3300); /* call 0x001F3300 */

loc_002220A2: ;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x35) = 1;
    MEM8(ebp + 0x3C) = LO8(ebx);
    MEM8(ebp + 0x26) = LO8(ebx);
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ebp = MEM32(eax + edi * 4 + 0x38);
    PUSH32(esp, 0x002220BEu); RECOMP_ABI_CALL(0x001F3210u, sub_001F3210); /* call 0x001F3210 */

loc_002220BE: ;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x3C) = LO8(ebx);
    MEM8(ebp + 0x26) = LO8(ebx);
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + edi * 4 + 0x3C);
    MEM8(eax + 0x26) = LO8(ebx);
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + edi * 4 + 0x40);
    MEM8(eax + 0x26) = LO8(ebx);
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + edi * 4 + 0x44);
    ecx = MEM32(0x5BC554);
    MEM32(eax + 0x38) = ecx;
    MEM8(eax + 0x35) = 1;
    MEM8(eax + 0x3C) = LO8(ebx);
    MEM8(eax + 0x26) = LO8(ebx);
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ebp = MEM32(eax + edi * 4 + 0x48);
    edx = MEM32(ebp);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp;
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00222120u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00222120: ;
    MEM8(ebp + 0x26) = LO8(ebx);
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + edi * 4 + 0x4C);
    MEM8(eax + 0x26) = LO8(ebx);
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + edi * 4 + 0x50);
    MEM8(eax + 0x26) = LO8(ebx);
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + edi * 4 + 0x54);
    MEM8(eax + 0x26) = LO8(ebx);
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebp = MEM32(edx + edi * 4 + 0x58);
    eax = MEM32(ebp);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM32(esp + 0x18) = 4;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0022216Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0022216C: ;
    MEM8(ebp + 0x26) = LO8(ebx);
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ecx = MEM32(eax + edi * 4 + 0x5C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x46B1B8);
    PUSH32(esp, 0x46B150);
    MEM8(ecx + 0x26) = LO8(ebx);
    PUSH32(esp, 0x46B0E8);
    ecx = esi;
    PUSH32(esp, 0x00222193u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00222193: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_002221A0
 * Original: 0x002221A0 - 0x002221D6 (54 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002221A0(void)
{

loc_002221A0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BC390);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 4);
    PUSH32(esp, 0x46B2B4);
    ecx = esi;
    PUSH32(esp, 0x002221BCu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_002221BC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46B2A4);
    PUSH32(esp, 0x46B294);
    PUSH32(esp, 0x46B284);
    ecx = esi;
    PUSH32(esp, 0x002221D3u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002221D3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002221E0
 * Original: 0x002221E0 - 0x00222217 (55 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002221E0(void)
{

loc_002221E0: ;
    PUSH32(esp, 0x46B2C4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x221F50);
    PUSH32(esp, 0x219A10);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x3F9734);
    PUSH32(esp, 0x1F19C0);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BC274);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00222213u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00222213: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00222220
 * Original: 0x00222220 - 0x0022222C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00222220(void)
{

loc_00222220: ;
    PUSH32(esp, 0x2221E0);
    PUSH32(esp, 0x0022222Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022222A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00222230
 * Original: 0x00222230 - 0x00222267 (55 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00222230(void)
{

loc_00222230: ;
    PUSH32(esp, 0x46B2D4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x220140);
    PUSH32(esp, 0x21BAC0);
    PUSH32(esp, 0x44);
    PUSH32(esp, 0x3F9744);
    PUSH32(esp, 0x1F2720);
    PUSH32(esp, 0x217630);
    PUSH32(esp, 0x21EF70);
    PUSH32(esp, 0x5BC248);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00222263u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00222263: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00222270
 * Original: 0x00222270 - 0x002222D7 (103 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00222270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00222270: ;
    eax = MEM32(0x5BC508);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022229A; /* je: equal / zero */

loc_0022227D: ;
    PUSH32(esp, 0x2221E0);
    PUSH32(esp, 0x00222287u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00222287: ;
    ecx = MEM32(esp + 0xC);
    esp = esp + 4;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00222296u); RECOMP_ABI_CALL(0x0020E610u, sub_0020E610); /* call 0x0020E610 */

loc_00222296: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_0022229A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x002222A4u); RECOMP_ABI_CALL(0x001F7E70u, sub_001F7E70); /* call 0x001F7E70 */

loc_002222A4: ;
    esi = eax;
    esp = esp + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002222D0; /* je: equal / zero */

loc_002222AD: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002222B5u); RECOMP_ABI_CALL(0x001F7C60u, sub_001F7C60); /* call 0x001F7C60 */

loc_002222B5: ;
    MEM32(esi) = 0x3F5D88;
    MEM32(esi + 0x1C) = 0;
    MEM32(esi + 0x60) = 0;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_002222D0: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002222E0
 * Original: 0x002222E0 - 0x002222EC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002222E0(void)
{

loc_002222E0: ;
    PUSH32(esp, 0x222230);
    PUSH32(esp, 0x002222EAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002222EA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002222F0
 * Original: 0x002222F0 - 0x0022230C (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002222F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002222F0: ;
    eax = MEM32(0x5BC24C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022230B; /* jne: not equal / not zero */

loc_002222F9: ;
    PUSH32(esp, 0x222230);
    PUSH32(esp, 0x00222303u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00222303: ;
    eax = MEM32(0x5BC24C);
    esp = esp + 4;

loc_0022230B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00222310
 * Original: 0x00222310 - 0x002223AE (158 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00222310(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00222310: ;
    eax = MEM32(0x5BB930);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x5BC258);
    esi = MEM32(edi + 0x28);
    PUSH32(esp, 0x3E226C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0022232Eu); RECOMP_ABI_CALL(0x001E8800u, sub_001E8800); /* call 0x001E8800 */

loc_0022232E: ;
    ecx = MEM32(esi + 8);
    esi = MEM32(esi + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0022234A; /* jle: less or equal (signed <=) */

loc_0022233A: ;
    /* nop */

loc_00222340: ;
    _fa = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + edx * 4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002223A7; /* je: equal / zero */

loc_00222345: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00222340; /* jl: less (signed <) */

loc_0022234A: ;
    ebx = ebx | 0xFFFFFFFFu;

loc_0022234D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00222356u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00222356: ;
    esi = eax;
    eax = MEM32(0x5BC24C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022236E; /* jne: not equal / not zero */

loc_00222361: ;
    PUSH32(esp, 0x222230);
    PUSH32(esp, 0x0022236Bu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022236B: ;
    esp = esp + 4;

loc_0022236E: ;
    eax = MEM32(0x5BC24C);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x38) = 0;
    MEM32(esi + 0x1C) = 0x5BC0B8;
    PUSH32(esp, 0x0022238Du); RECOMP_ABI_CALL(0x002093F0u, sub_002093F0); /* call 0x002093F0 */

loc_0022238D: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_002223AB; /* jne: not equal / not zero */

loc_0022239E: ;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_002223A7: ;
    ebx = edx;
    goto loc_0022234D;

loc_002223AB: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002223B0
 * Original: 0x002223B0 - 0x00222452 (162 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002223B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002223B0: ;
    eax = MEM32(0x5BB930);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x5BC260);
    esi = MEM32(edi + 0x28);
    PUSH32(esp, 0x3E226C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002223CEu); RECOMP_ABI_CALL(0x001E8800u, sub_001E8800); /* call 0x001E8800 */

loc_002223CE: ;
    ecx = MEM32(esi + 8);
    esi = MEM32(esi + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002223EA; /* jle: less or equal (signed <=) */

loc_002223DA: ;
    /* nop */

loc_002223E0: ;
    _fa = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + edx * 4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022244B; /* je: equal / zero */

loc_002223E5: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002223E0; /* jl: less (signed <) */

loc_002223EA: ;
    ebp = ebp | 0xFFFFFFFFu;

loc_002223ED: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x002223F6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002223F6: ;
    esi = eax;
    eax = MEM32(0x5BC24C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022240E; /* jne: not equal / not zero */

loc_00222401: ;
    PUSH32(esp, 0x222230);
    PUSH32(esp, 0x0022240Bu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022240B: ;
    esp = esp + 4;

loc_0022240E: ;
    eax = MEM32(0x5BC24C);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    ecx = edi;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x38) = 0;
    MEM8(esi + 0x42) = 0;
    MEM32(esi + 0x1C) = 0x5BB768;
    PUSH32(esp, 0x00222431u); RECOMP_ABI_CALL(0x002093F0u, sub_002093F0); /* call 0x002093F0 */

loc_00222431: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_0022244F; /* jne: not equal / not zero */

loc_00222442: ;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_0022244B: ;
    ebp = edx;
    goto loc_002223ED;

loc_0022244F: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00222460
 * Original: 0x00222460 - 0x002224D8 (120 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00222460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00222460: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x5BC300);
    eax = MEM32(edi + 0x28);
    ebx = MEM32(eax + 0xC);
    PUSH32(esp, 2);
    PUSH32(esp, 0x46B2F8);
    ecx = edi;
    PUSH32(esp, 0x0022247Du); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0022247D: ;
    ecx = MEM32(edi + 0x28);
    eax = MEM32(0x5BC24C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edx = MEM32(ecx + 8);
    esi = MEM32(edx + ebx * 4);
    if (TEST_NZ(_fa, _fb)) goto loc_0022249C; /* jne: not equal / not zero */

loc_0022248F: ;
    PUSH32(esp, 0x222230);
    PUSH32(esp, 0x00222499u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00222499: ;
    esp = esp + 4;

loc_0022249C: ;
    eax = MEM32(0x5BC24C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x46B2F0);
    MEM32(esi + 0x3C) = eax;
    SET_LO8(eax, 1);
    PUSH32(esp, 0x46B2E8);
    PUSH32(esp, 0x46B2E0);
    ecx = edi;
    MEM32(esi + 0x38) = 0x40;
    MEM8(esi + 0x34) = LO8(eax);
    MEM8(esi + 0x35) = LO8(eax);
    MEM8(esi + 0x40) = LO8(eax);
    MEM8(esi + 0x41) = LO8(eax);
    MEM8(esi + 0x42) = 0;
    PUSH32(esp, 0x002224D4u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002224D4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002224E0
 * Original: 0x002224E0 - 0x00222515 (53 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002224E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002224E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x5BC24C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00222500; /* jne: not equal / not zero */

loc_002224ED: ;
    PUSH32(esp, 0x222230);
    PUSH32(esp, 0x002224F7u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002224F7: ;
    ecx = MEM32(0x5BC24C);
    esp = esp + 4;

loc_00222500: ;
    edx = MEM32(esi + 0x44);
    eax = MEM32(ecx);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0xC));
    POP32(esp, esi);
    MEM32(esp + 8) = edx;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC8)); return; /* indirect tail jmp */

}

/**
 * sub_00222520
 * Original: 0x00222520 - 0x0022256C (76 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00222520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00222520: ;
    eax = MEM32(0x5BC508);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022254A; /* je: equal / zero */

loc_0022252D: ;
    PUSH32(esp, 0x222230);
    PUSH32(esp, 0x00222537u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00222537: ;
    ecx = MEM32(esp + 0xC);
    esp = esp + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00222546u); RECOMP_ABI_CALL(0x0020E610u, sub_0020E610); /* call 0x0020E610 */

loc_00222546: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0022254A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x44);
    PUSH32(esp, 0x00222553u); RECOMP_ABI_CALL(0x001F7E70u, sub_001F7E70); /* call 0x001F7E70 */

loc_00222553: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00222566; /* je: equal / zero */

loc_0022255A: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00222562u); RECOMP_ABI_CALL(0x0021B060u, sub_0021B060); /* call 0x0021B060 */

loc_00222562: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00222566: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00222570
 * Original: 0x00222570 - 0x002225A4 (52 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00222570(void)
{

loc_00222570: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x222460);
    PUSH32(esp, 0x2002E0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x3F975C);
    PUSH32(esp, 0x2193F0);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BC300);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002225A0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002225A0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002225B0
 * Original: 0x002225B0 - 0x002225E4 (52 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002225B0(void)
{

loc_002225B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20B850);
    PUSH32(esp, 0x2002B0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x3F9780);
    PUSH32(esp, 0x1F1A50);
    PUSH32(esp, 0x1F4E10);
    PUSH32(esp, 0x222570);
    PUSH32(esp, 0x5BC2FC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002225E0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002225E0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002225F0
 * Original: 0x002225F0 - 0x002225FC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002225F0(void)
{

loc_002225F0: ;
    PUSH32(esp, 0x2225B0);
    PUSH32(esp, 0x002225FAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002225FA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00222600
 * Original: 0x00222600 - 0x00222672 (114 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00222600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00222600: ;
    eax = MEM32(0x5BC508);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00222628; /* je: equal / zero */

loc_0022260A: ;
    PUSH32(esp, 0x2225B0);
    PUSH32(esp, 0x00222614u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00222614: ;
    ecx = MEM32(esp + 8);
    esp = esp + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(0x5BC2FC);
    PUSH32(esp, 0x00222627u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00222627: ;
    esp += 4; return; /* ret */

loc_00222628: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00222637u); RECOMP_ABI_CALL(0x001F7E00u, sub_001F7E00); /* call 0x001F7E00 */

loc_00222637: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0022265D; /* je: equal / zero */

loc_0022263E: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x00222647u); RECOMP_ABI_CALL(0x00202C70u, sub_00202C70); /* call 0x00202C70 */

loc_00222647: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00222650u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00222650: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00222659u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00222659: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0022265D: ;
    esi = 0; /* xor self */
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00222666u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00222666: ;
    edx = MEM32(esi);
    PUSH32(esp, esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0022266Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0022266E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00222680
 * Original: 0x00222680 - 0x002226D9 (89 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00222680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00222680: ;
    eax = MEM32(0x5BC508);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002226AA; /* je: equal / zero */

loc_0022268D: ;
    PUSH32(esp, 0x2225B0);
    PUSH32(esp, 0x00222697u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00222697: ;
    ecx = MEM32(esp + 0xC);
    esp = esp + 4;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x002226A6u); RECOMP_ABI_CALL(0x0020E610u, sub_0020E610); /* call 0x0020E610 */

loc_002226A6: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_002226AA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x002226B4u); RECOMP_ABI_CALL(0x001F7E70u, sub_001F7E70); /* call 0x001F7E70 */

loc_002226B4: ;
    esi = eax;
    esp = esp + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002226D2; /* je: equal / zero */

loc_002226BD: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002226C5u); RECOMP_ABI_CALL(0x00202AE0u, sub_00202AE0); /* call 0x00202AE0 */

loc_002226C5: ;
    MEM32(esi) = 0x3EEF28;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_002226D2: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002226E0
 * Original: 0x002226E0 - 0x0022277A (154 bytes, 54 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002226E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002226E0: ;
    eax = MEM32(0x5BC508);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00222708; /* je: equal / zero */

loc_002226EA: ;
    PUSH32(esp, 0x2221E0);
    PUSH32(esp, 0x002226F4u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002226F4: ;
    ecx = MEM32(esp + 8);
    esp = esp + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(0x5BC274);
    PUSH32(esp, 0x00222707u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00222707: ;
    esp += 4; return; /* ret */

loc_00222708: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x00222717u); RECOMP_ABI_CALL(0x001F7E00u, sub_001F7E00); /* call 0x001F7E00 */

loc_00222717: ;
    esi = eax;
    esp = esp + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00222765; /* je: equal / zero */

loc_00222720: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00222729u); RECOMP_ABI_CALL(0x001F7CD0u, sub_001F7CD0); /* call 0x001F7CD0 */

loc_00222729: ;
    MEM32(esi) = 0x3F5D88;
    MEM32(esi + 0x1C) = 0;
    ecx = esi;
    MEM32(esi + 0x60) = 0;
    PUSH32(esp, 0x00222744u); RECOMP_ABI_CALL(0x00216EE0u, sub_00216EE0); /* call 0x00216EE0 */

loc_00222744: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0022274Bu); RECOMP_ABI_CALL(0x00222600u, sub_00222600); /* call 0x00222600 */

loc_0022274B: ;
    MEM32(esi + 0x28) = eax;
    eax = MEM32(esi);
    esp = esp + 4;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00222758u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00222758: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00222761u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00222761: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00222765: ;
    esi = 0; /* xor self */
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0022276Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0022276E: ;
    edx = MEM32(esi);
    PUSH32(esp, esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00222776u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00222776: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00222780
 * Original: 0x00222780 - 0x002227CB (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00222780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00222780: ;
    eax = MEM32(0x5BC2A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002227CA; /* jne: not equal / not zero */

loc_00222789: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002227A2; /* jle: less or equal (signed <=) */

loc_00222792: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002227A0; /* jge: greater or equal (signed >=) */

loc_00222797: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_002227B0;

loc_002227A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_002227A2: ;
    if (TEST_NZ(_fa, _fb)) goto loc_002227AE; /* jne: not equal / not zero */

loc_002227A4: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002227B0; /* jne: not equal / not zero */

loc_002227AE: ;
    ecx = 0; /* xor self */

loc_002227B0: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x002227BCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002227BC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002227C2u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_002227C2: ;
    esp = esp + 4;
    MEM32(0x5BC2A4) = eax;

loc_002227CA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002227D0
 * Original: 0x002227D0 - 0x0022281B (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002227D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002227D0: ;
    eax = MEM32(0x5BC2AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022281A; /* jne: not equal / not zero */

loc_002227D9: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002227F2; /* jle: less or equal (signed <=) */

loc_002227E2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002227F0; /* jge: greater or equal (signed >=) */

loc_002227E7: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00222800;

loc_002227F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_002227F2: ;
    if (TEST_NZ(_fa, _fb)) goto loc_002227FE; /* jne: not equal / not zero */

loc_002227F4: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00222800; /* jne: not equal / not zero */

loc_002227FE: ;
    ecx = 0; /* xor self */

loc_00222800: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0022280Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0022280C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00222812u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00222812: ;
    esp = esp + 4;
    MEM32(0x5BC2AC) = eax;

loc_0022281A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00222820
 * Original: 0x00222820 - 0x0022286D (77 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00222820(void)
{

loc_00222820: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC2AC);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x46B30C);
    ecx = esi;
    PUSH32(esp, 0x0022283Du); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0022283D: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebx = MEM32(edx + edi * 4);
    PUSH32(esp, 0x0022284Bu); RECOMP_ABI_CALL(0x00222780u, sub_00222780); /* call 0x00222780 */

loc_0022284B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46B308);
    PUSH32(esp, 0x46B304);
    PUSH32(esp, 0x46B300);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x34) = 1;
    PUSH32(esp, 0x00222869u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00222869: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00222870
 * Original: 0x00222870 - 0x00222909 (153 bytes, 51 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00222870(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00222870: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC2B0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3ED744);
    esi = esi + 0x60;
    PUSH32(esp, 0x00222887u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00222887: ;
    ecx = eax;
    PUSH32(esp, 0x0022288Eu); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_0022288E: ;
    edi = eax;
    eax = MEM32(esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002228A0; /* je: equal / zero */

loc_00222898: ;
    ecx = eax + -8;
    PUSH32(esp, 0x002228A0u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_002228A0: ;
    MEM32(esi) = edi;
    esi = MEM32(0x5BC2B0);
    eax = MEM32(esi + 0x28);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 3);
    PUSH32(esp, 0x46B334);
    ecx = esi;
    PUSH32(esp, 0x002228BCu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_002228BC: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + edi * 4);
    MEM8(eax + 0x26) = LO8(ebx);
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + edi * 4 + 4);
    MEM8(eax + 0x26) = LO8(ebx);
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebp = MEM32(edx + edi * 4 + 8);
    PUSH32(esp, 0x002228E4u); RECOMP_ABI_CALL(0x002227D0u, sub_002227D0); /* call 0x002227D0 */

loc_002228E4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46B328);
    PUSH32(esp, 0x46B31C);
    PUSH32(esp, 0x46B310);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00222904u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00222904: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00222910
 * Original: 0x00222910 - 0x0022295B (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00222910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00222910: ;
    eax = MEM32(0x5BC2B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022295A; /* jne: not equal / not zero */

loc_00222919: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00222932; /* jle: less or equal (signed <=) */

loc_00222922: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00222930; /* jge: greater or equal (signed >=) */

loc_00222927: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00222940;

loc_00222930: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00222932: ;
    if (TEST_NZ(_fa, _fb)) goto loc_0022293E; /* jne: not equal / not zero */

loc_00222934: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00222940; /* jne: not equal / not zero */

loc_0022293E: ;
    ecx = 0; /* xor self */

loc_00222940: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0022294Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0022294C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00222952u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00222952: ;
    esp = esp + 4;
    MEM32(0x5BC2B4) = eax;

loc_0022295A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00222960
 * Original: 0x00222960 - 0x002229AB (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00222960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00222960: ;
    eax = MEM32(0x5BC2D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002229AA; /* jne: not equal / not zero */

loc_00222969: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00222982; /* jle: less or equal (signed <=) */

loc_00222972: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00222980; /* jge: greater or equal (signed >=) */

loc_00222977: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00222990;

loc_00222980: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00222982: ;
    if (TEST_NZ(_fa, _fb)) goto loc_0022298E; /* jne: not equal / not zero */

loc_00222984: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00222990; /* jne: not equal / not zero */

loc_0022298E: ;
    ecx = 0; /* xor self */

loc_00222990: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0022299Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0022299C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002229A2u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_002229A2: ;
    esp = esp + 4;
    MEM32(0x5BC2D4) = eax;

loc_002229AA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002229B0
 * Original: 0x002229B0 - 0x002229FB (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002229B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002229B0: ;
    eax = MEM32(0x5BC2EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002229FA; /* jne: not equal / not zero */

loc_002229B9: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002229D2; /* jle: less or equal (signed <=) */

loc_002229C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002229D0; /* jge: greater or equal (signed >=) */

loc_002229C7: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_002229E0;

loc_002229D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_002229D2: ;
    if (TEST_NZ(_fa, _fb)) goto loc_002229DE; /* jne: not equal / not zero */

loc_002229D4: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002229E0; /* jne: not equal / not zero */

loc_002229DE: ;
    ecx = 0; /* xor self */

loc_002229E0: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x002229ECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002229EC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002229F2u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_002229F2: ;
    esp = esp + 4;
    MEM32(0x5BC2EC) = eax;

loc_002229FA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00222A00
 * Original: 0x00222A00 - 0x00222A4B (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00222A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00222A00: ;
    eax = MEM32(0x5BC2F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00222A4A; /* jne: not equal / not zero */

loc_00222A09: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00222A22; /* jle: less or equal (signed <=) */

loc_00222A12: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00222A20; /* jge: greater or equal (signed >=) */

loc_00222A17: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00222A30;

loc_00222A20: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00222A22: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00222A2E; /* jne: not equal / not zero */

loc_00222A24: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00222A30; /* jne: not equal / not zero */

loc_00222A2E: ;
    ecx = 0; /* xor self */

loc_00222A30: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00222A3Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00222A3C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00222A42u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00222A42: ;
    esp = esp + 4;
    MEM32(0x5BC2F0) = eax;

loc_00222A4A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00222A50
 * Original: 0x00222A50 - 0x00222A9B (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00222A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00222A50: ;
    eax = MEM32(0x5BC2F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00222A9A; /* jne: not equal / not zero */

loc_00222A59: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00222A72; /* jle: less or equal (signed <=) */

loc_00222A62: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00222A70; /* jge: greater or equal (signed >=) */

loc_00222A67: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00222A80;

loc_00222A70: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00222A72: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00222A7E; /* jne: not equal / not zero */

loc_00222A74: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00222A80; /* jne: not equal / not zero */

loc_00222A7E: ;
    ecx = 0; /* xor self */

loc_00222A80: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00222A8Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00222A8C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00222A92u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00222A92: ;
    esp = esp + 4;
    MEM32(0x5BC2F4) = eax;

loc_00222A9A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00222AA0
 * Original: 0x00222AA0 - 0x00222AEB (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00222AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00222AA0: ;
    eax = MEM32(0x5BC314);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00222AEA; /* jne: not equal / not zero */

loc_00222AA9: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00222AC2; /* jle: less or equal (signed <=) */

loc_00222AB2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00222AC0; /* jge: greater or equal (signed >=) */

loc_00222AB7: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00222AD0;

loc_00222AC0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00222AC2: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00222ACE; /* jne: not equal / not zero */

loc_00222AC4: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00222AD0; /* jne: not equal / not zero */

loc_00222ACE: ;
    ecx = 0; /* xor self */

loc_00222AD0: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00222ADCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00222ADC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00222AE2u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00222AE2: ;
    esp = esp + 4;
    MEM32(0x5BC314) = eax;

loc_00222AEA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00222AF0
 * Original: 0x00222AF0 - 0x00222B3B (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00222AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00222AF0: ;
    eax = MEM32(0x5BC33C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00222B3A; /* jne: not equal / not zero */

loc_00222AF9: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00222B12; /* jle: less or equal (signed <=) */

loc_00222B02: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00222B10; /* jge: greater or equal (signed >=) */

loc_00222B07: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00222B20;

loc_00222B10: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00222B12: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00222B1E; /* jne: not equal / not zero */

loc_00222B14: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00222B20; /* jne: not equal / not zero */

loc_00222B1E: ;
    ecx = 0; /* xor self */

loc_00222B20: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00222B2Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00222B2C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00222B32u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00222B32: ;
    esp = esp + 4;
    MEM32(0x5BC33C) = eax;

loc_00222B3A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00222B40
 * Original: 0x00222B40 - 0x00222B8B (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00222B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00222B40: ;
    eax = MEM32(0x5BC364);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00222B8A; /* jne: not equal / not zero */

loc_00222B49: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00222B62; /* jle: less or equal (signed <=) */

loc_00222B52: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00222B60; /* jge: greater or equal (signed >=) */

loc_00222B57: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00222B70;

loc_00222B60: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00222B62: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00222B6E; /* jne: not equal / not zero */

loc_00222B64: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00222B70; /* jne: not equal / not zero */

loc_00222B6E: ;
    ecx = 0; /* xor self */

loc_00222B70: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00222B7Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00222B7C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00222B82u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00222B82: ;
    esp = esp + 4;
    MEM32(0x5BC364) = eax;

loc_00222B8A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00222B90
 * Original: 0x00222B90 - 0x00222BDB (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00222B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00222B90: ;
    eax = MEM32(0x5BC3A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00222BDA; /* jne: not equal / not zero */

loc_00222B99: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00222BB2; /* jle: less or equal (signed <=) */

loc_00222BA2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00222BB0; /* jge: greater or equal (signed >=) */

loc_00222BA7: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00222BC0;

loc_00222BB0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00222BB2: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00222BBE; /* jne: not equal / not zero */

loc_00222BB4: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00222BC0; /* jne: not equal / not zero */

loc_00222BBE: ;
    ecx = 0; /* xor self */

loc_00222BC0: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00222BCCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00222BCC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00222BD2u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00222BD2: ;
    esp = esp + 4;
    MEM32(0x5BC3A4) = eax;

loc_00222BDA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00222BE0
 * Original: 0x00222BE0 - 0x00222C2B (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00222BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00222BE0: ;
    eax = MEM32(0x5BC3A8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00222C2A; /* jne: not equal / not zero */

loc_00222BE9: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00222C02; /* jle: less or equal (signed <=) */

loc_00222BF2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00222C00; /* jge: greater or equal (signed >=) */

loc_00222BF7: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00222C10;

loc_00222C00: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00222C02: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00222C0E; /* jne: not equal / not zero */

loc_00222C04: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00222C10; /* jne: not equal / not zero */

loc_00222C0E: ;
    ecx = 0; /* xor self */

loc_00222C10: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00222C1Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00222C1C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00222C22u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00222C22: ;
    esp = esp + 4;
    MEM32(0x5BC3A8) = eax;

loc_00222C2A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00222C30
 * Original: 0x00222C30 - 0x00222C7B (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00222C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00222C30: ;
    eax = MEM32(0x5BC3BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00222C7A; /* jne: not equal / not zero */

loc_00222C39: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00222C52; /* jle: less or equal (signed <=) */

loc_00222C42: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00222C50; /* jge: greater or equal (signed >=) */

loc_00222C47: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00222C60;

loc_00222C50: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00222C52: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00222C5E; /* jne: not equal / not zero */

loc_00222C54: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00222C60; /* jne: not equal / not zero */

loc_00222C5E: ;
    ecx = 0; /* xor self */

loc_00222C60: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00222C6Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00222C6C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00222C72u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00222C72: ;
    esp = esp + 4;
    MEM32(0x5BC3BC) = eax;

loc_00222C7A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00222C80
 * Original: 0x00222C80 - 0x00222CCB (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00222C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00222C80: ;
    eax = MEM32(0x5BC3C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00222CCA; /* jne: not equal / not zero */

loc_00222C89: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00222CA2; /* jle: less or equal (signed <=) */

loc_00222C92: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00222CA0; /* jge: greater or equal (signed >=) */

loc_00222C97: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00222CB0;

loc_00222CA0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00222CA2: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00222CAE; /* jne: not equal / not zero */

loc_00222CA4: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00222CB0; /* jne: not equal / not zero */

loc_00222CAE: ;
    ecx = 0; /* xor self */

loc_00222CB0: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00222CBCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00222CBC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00222CC2u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00222CC2: ;
    esp = esp + 4;
    MEM32(0x5BC3C8) = eax;

loc_00222CCA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00222CD0
 * Original: 0x00222CD0 - 0x00222D1B (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00222CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00222CD0: ;
    eax = MEM32(0x5BC3CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00222D1A; /* jne: not equal / not zero */

loc_00222CD9: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00222CF2; /* jle: less or equal (signed <=) */

loc_00222CE2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00222CF0; /* jge: greater or equal (signed >=) */

loc_00222CE7: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00222D00;

loc_00222CF0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00222CF2: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00222CFE; /* jne: not equal / not zero */

loc_00222CF4: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00222D00; /* jne: not equal / not zero */

loc_00222CFE: ;
    ecx = 0; /* xor self */

loc_00222D00: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00222D0Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00222D0C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00222D12u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00222D12: ;
    esp = esp + 4;
    MEM32(0x5BC3CC) = eax;

loc_00222D1A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00222D20
 * Original: 0x00222D20 - 0x00222D6B (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00222D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00222D20: ;
    eax = MEM32(0x5BC3D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00222D6A; /* jne: not equal / not zero */

loc_00222D29: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00222D42; /* jle: less or equal (signed <=) */

loc_00222D32: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00222D40; /* jge: greater or equal (signed >=) */

loc_00222D37: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00222D50;

loc_00222D40: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00222D42: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00222D4E; /* jne: not equal / not zero */

loc_00222D44: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00222D50; /* jne: not equal / not zero */

loc_00222D4E: ;
    ecx = 0; /* xor self */

loc_00222D50: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00222D5Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00222D5C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00222D62u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00222D62: ;
    esp = esp + 4;
    MEM32(0x5BC3D4) = eax;

loc_00222D6A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00222D70
 * Original: 0x00222D70 - 0x00222DBB (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00222D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00222D70: ;
    eax = MEM32(0x5BC3D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00222DBA; /* jne: not equal / not zero */

loc_00222D79: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00222D92; /* jle: less or equal (signed <=) */

loc_00222D82: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00222D90; /* jge: greater or equal (signed >=) */

loc_00222D87: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00222DA0;

loc_00222D90: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00222D92: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00222D9E; /* jne: not equal / not zero */

loc_00222D94: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00222DA0; /* jne: not equal / not zero */

loc_00222D9E: ;
    ecx = 0; /* xor self */

loc_00222DA0: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00222DACu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00222DAC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00222DB2u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00222DB2: ;
    esp = esp + 4;
    MEM32(0x5BC3D8) = eax;

loc_00222DBA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00222DC0
 * Original: 0x00222DC0 - 0x00222E0B (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00222DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00222DC0: ;
    eax = MEM32(0x5BC3E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00222E0A; /* jne: not equal / not zero */

loc_00222DC9: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00222DE2; /* jle: less or equal (signed <=) */

loc_00222DD2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00222DE0; /* jge: greater or equal (signed >=) */

loc_00222DD7: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00222DF0;

loc_00222DE0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00222DE2: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00222DEE; /* jne: not equal / not zero */

loc_00222DE4: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00222DF0; /* jne: not equal / not zero */

loc_00222DEE: ;
    ecx = 0; /* xor self */

loc_00222DF0: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00222DFCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00222DFC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00222E02u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00222E02: ;
    esp = esp + 4;
    MEM32(0x5BC3E0) = eax;

loc_00222E0A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00222E10
 * Original: 0x00222E10 - 0x00222E5B (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00222E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00222E10: ;
    eax = MEM32(0x5BC3E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00222E5A; /* jne: not equal / not zero */

loc_00222E19: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00222E32; /* jle: less or equal (signed <=) */

loc_00222E22: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00222E30; /* jge: greater or equal (signed >=) */

loc_00222E27: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00222E40;

loc_00222E30: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00222E32: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00222E3E; /* jne: not equal / not zero */

loc_00222E34: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00222E40; /* jne: not equal / not zero */

loc_00222E3E: ;
    ecx = 0; /* xor self */

loc_00222E40: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00222E4Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00222E4C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00222E52u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00222E52: ;
    esp = esp + 4;
    MEM32(0x5BC3E4) = eax;

loc_00222E5A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00222E60
 * Original: 0x00222E60 - 0x00222EAB (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00222E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00222E60: ;
    eax = MEM32(0x5BC3E8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00222EAA; /* jne: not equal / not zero */

loc_00222E69: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00222E82; /* jle: less or equal (signed <=) */

loc_00222E72: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00222E80; /* jge: greater or equal (signed >=) */

loc_00222E77: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00222E90;

loc_00222E80: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00222E82: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00222E8E; /* jne: not equal / not zero */

loc_00222E84: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00222E90; /* jne: not equal / not zero */

loc_00222E8E: ;
    ecx = 0; /* xor self */

loc_00222E90: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00222E9Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00222E9C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00222EA2u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00222EA2: ;
    esp = esp + 4;
    MEM32(0x5BC3E8) = eax;

loc_00222EAA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00222EB0
 * Original: 0x00222EB0 - 0x00222EFB (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00222EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00222EB0: ;
    eax = MEM32(0x5BC3EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00222EFA; /* jne: not equal / not zero */

loc_00222EB9: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00222ED2; /* jle: less or equal (signed <=) */

loc_00222EC2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00222ED0; /* jge: greater or equal (signed >=) */

loc_00222EC7: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00222EE0;

loc_00222ED0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00222ED2: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00222EDE; /* jne: not equal / not zero */

loc_00222ED4: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00222EE0; /* jne: not equal / not zero */

loc_00222EDE: ;
    ecx = 0; /* xor self */

loc_00222EE0: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00222EECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00222EEC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00222EF2u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00222EF2: ;
    esp = esp + 4;
    MEM32(0x5BC3EC) = eax;

loc_00222EFA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00222F00
 * Original: 0x00222F00 - 0x00222F4B (75 bytes, 25 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00222F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00222F00: ;
    eax = MEM32(0x5BC3F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00222F4A; /* jne: not equal / not zero */

loc_00222F09: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00222F22; /* jle: less or equal (signed <=) */

loc_00222F12: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00222F20; /* jge: greater or equal (signed >=) */

loc_00222F17: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00222F30;

loc_00222F20: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00222F22: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00222F2E; /* jne: not equal / not zero */

loc_00222F24: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00222F30; /* jne: not equal / not zero */

loc_00222F2E: ;
    ecx = 0; /* xor self */

loc_00222F30: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00222F3Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00222F3C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00222F42u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00222F42: ;
    esp = esp + 4;
    MEM32(0x5BC3F4) = eax;

loc_00222F4A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00222F50
 * Original: 0x00222F50 - 0x00222F9B (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00222F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00222F50: ;
    eax = MEM32(0x5BC3F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00222F9A; /* jne: not equal / not zero */

loc_00222F59: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00222F72; /* jle: less or equal (signed <=) */

loc_00222F62: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00222F70; /* jge: greater or equal (signed >=) */

loc_00222F67: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00222F80;

loc_00222F70: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00222F72: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00222F7E; /* jne: not equal / not zero */

loc_00222F74: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00222F80; /* jne: not equal / not zero */

loc_00222F7E: ;
    ecx = 0; /* xor self */

loc_00222F80: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00222F8Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00222F8C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00222F92u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00222F92: ;
    esp = esp + 4;
    MEM32(0x5BC3F8) = eax;

loc_00222F9A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00222FA0
 * Original: 0x00222FA0 - 0x00222FEB (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00222FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00222FA0: ;
    eax = MEM32(0x5BC3FC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00222FEA; /* jne: not equal / not zero */

loc_00222FA9: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00222FC2; /* jle: less or equal (signed <=) */

loc_00222FB2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00222FC0; /* jge: greater or equal (signed >=) */

loc_00222FB7: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00222FD0;

loc_00222FC0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00222FC2: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00222FCE; /* jne: not equal / not zero */

loc_00222FC4: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00222FD0; /* jne: not equal / not zero */

loc_00222FCE: ;
    ecx = 0; /* xor self */

loc_00222FD0: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00222FDCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00222FDC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00222FE2u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00222FE2: ;
    esp = esp + 4;
    MEM32(0x5BC3FC) = eax;

loc_00222FEA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00222FF0
 * Original: 0x00222FF0 - 0x0022303B (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00222FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00222FF0: ;
    eax = MEM32(0x5BC408);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022303A; /* jne: not equal / not zero */

loc_00222FF9: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00223012; /* jle: less or equal (signed <=) */

loc_00223002: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00223010; /* jge: greater or equal (signed >=) */

loc_00223007: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00223020;

loc_00223010: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00223012: ;
    if (TEST_NZ(_fa, _fb)) goto loc_0022301E; /* jne: not equal / not zero */

loc_00223014: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00223020; /* jne: not equal / not zero */

loc_0022301E: ;
    ecx = 0; /* xor self */

loc_00223020: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0022302Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0022302C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00223032u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00223032: ;
    esp = esp + 4;
    MEM32(0x5BC408) = eax;

loc_0022303A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00223040
 * Original: 0x00223040 - 0x0022308B (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00223040: ;
    eax = MEM32(0x5BC40C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022308A; /* jne: not equal / not zero */

loc_00223049: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00223062; /* jle: less or equal (signed <=) */

loc_00223052: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00223060; /* jge: greater or equal (signed >=) */

loc_00223057: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00223070;

loc_00223060: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00223062: ;
    if (TEST_NZ(_fa, _fb)) goto loc_0022306E; /* jne: not equal / not zero */

loc_00223064: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00223070; /* jne: not equal / not zero */

loc_0022306E: ;
    ecx = 0; /* xor self */

loc_00223070: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0022307Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0022307C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00223082u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00223082: ;
    esp = esp + 4;
    MEM32(0x5BC40C) = eax;

loc_0022308A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00223090
 * Original: 0x00223090 - 0x002230DB (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00223090: ;
    eax = MEM32(0x5BC410);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002230DA; /* jne: not equal / not zero */

loc_00223099: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002230B2; /* jle: less or equal (signed <=) */

loc_002230A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002230B0; /* jge: greater or equal (signed >=) */

loc_002230A7: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_002230C0;

loc_002230B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_002230B2: ;
    if (TEST_NZ(_fa, _fb)) goto loc_002230BE; /* jne: not equal / not zero */

loc_002230B4: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002230C0; /* jne: not equal / not zero */

loc_002230BE: ;
    ecx = 0; /* xor self */

loc_002230C0: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x002230CCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002230CC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002230D2u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_002230D2: ;
    esp = esp + 4;
    MEM32(0x5BC410) = eax;

loc_002230DA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002230E0
 * Original: 0x002230E0 - 0x0022312B (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002230E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002230E0: ;
    eax = MEM32(0x5BC414);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022312A; /* jne: not equal / not zero */

loc_002230E9: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00223102; /* jle: less or equal (signed <=) */

loc_002230F2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00223100; /* jge: greater or equal (signed >=) */

loc_002230F7: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00223110;

loc_00223100: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00223102: ;
    if (TEST_NZ(_fa, _fb)) goto loc_0022310E; /* jne: not equal / not zero */

loc_00223104: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00223110; /* jne: not equal / not zero */

loc_0022310E: ;
    ecx = 0; /* xor self */

loc_00223110: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0022311Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0022311C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00223122u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00223122: ;
    esp = esp + 4;
    MEM32(0x5BC414) = eax;

loc_0022312A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00223130
 * Original: 0x00223130 - 0x0022317B (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00223130: ;
    eax = MEM32(0x5BC41C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022317A; /* jne: not equal / not zero */

loc_00223139: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00223152; /* jle: less or equal (signed <=) */

loc_00223142: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00223150; /* jge: greater or equal (signed >=) */

loc_00223147: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00223160;

loc_00223150: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00223152: ;
    if (TEST_NZ(_fa, _fb)) goto loc_0022315E; /* jne: not equal / not zero */

loc_00223154: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00223160; /* jne: not equal / not zero */

loc_0022315E: ;
    ecx = 0; /* xor self */

loc_00223160: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0022316Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0022316C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00223172u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00223172: ;
    esp = esp + 4;
    MEM32(0x5BC41C) = eax;

loc_0022317A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00223180
 * Original: 0x00223180 - 0x002231CB (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00223180: ;
    eax = MEM32(0x5BC424);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002231CA; /* jne: not equal / not zero */

loc_00223189: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002231A2; /* jle: less or equal (signed <=) */

loc_00223192: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002231A0; /* jge: greater or equal (signed >=) */

loc_00223197: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_002231B0;

loc_002231A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_002231A2: ;
    if (TEST_NZ(_fa, _fb)) goto loc_002231AE; /* jne: not equal / not zero */

loc_002231A4: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002231B0; /* jne: not equal / not zero */

loc_002231AE: ;
    ecx = 0; /* xor self */

loc_002231B0: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x002231BCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002231BC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002231C2u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_002231C2: ;
    esp = esp + 4;
    MEM32(0x5BC424) = eax;

loc_002231CA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002231D0
 * Original: 0x002231D0 - 0x0022321B (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002231D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002231D0: ;
    eax = MEM32(0x5BC428);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022321A; /* jne: not equal / not zero */

loc_002231D9: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002231F2; /* jle: less or equal (signed <=) */

loc_002231E2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002231F0; /* jge: greater or equal (signed >=) */

loc_002231E7: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00223200;

loc_002231F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_002231F2: ;
    if (TEST_NZ(_fa, _fb)) goto loc_002231FE; /* jne: not equal / not zero */

loc_002231F4: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00223200; /* jne: not equal / not zero */

loc_002231FE: ;
    ecx = 0; /* xor self */

loc_00223200: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0022320Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0022320C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00223212u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00223212: ;
    esp = esp + 4;
    MEM32(0x5BC428) = eax;

loc_0022321A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00223220
 * Original: 0x00223220 - 0x0022326B (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00223220: ;
    eax = MEM32(0x5BC430);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022326A; /* jne: not equal / not zero */

loc_00223229: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00223242; /* jle: less or equal (signed <=) */

loc_00223232: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00223240; /* jge: greater or equal (signed >=) */

loc_00223237: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00223250;

loc_00223240: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00223242: ;
    if (TEST_NZ(_fa, _fb)) goto loc_0022324E; /* jne: not equal / not zero */

loc_00223244: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00223250; /* jne: not equal / not zero */

loc_0022324E: ;
    ecx = 0; /* xor self */

loc_00223250: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0022325Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0022325C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00223262u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00223262: ;
    esp = esp + 4;
    MEM32(0x5BC430) = eax;

loc_0022326A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00223270
 * Original: 0x00223270 - 0x002232BB (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00223270: ;
    eax = MEM32(0x5BC434);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002232BA; /* jne: not equal / not zero */

loc_00223279: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00223292; /* jle: less or equal (signed <=) */

loc_00223282: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00223290; /* jge: greater or equal (signed >=) */

loc_00223287: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_002232A0;

loc_00223290: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00223292: ;
    if (TEST_NZ(_fa, _fb)) goto loc_0022329E; /* jne: not equal / not zero */

loc_00223294: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002232A0; /* jne: not equal / not zero */

loc_0022329E: ;
    ecx = 0; /* xor self */

loc_002232A0: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x002232ACu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002232AC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002232B2u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_002232B2: ;
    esp = esp + 4;
    MEM32(0x5BC434) = eax;

loc_002232BA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002232C0
 * Original: 0x002232C0 - 0x0022331F (95 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002232C0(void)
{

loc_002232C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC444);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 3);
    PUSH32(esp, 0x46B364);
    ecx = esi;
    PUSH32(esp, 0x002232DDu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_002232DD: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebx = MEM32(edx + edi * 4);
    PUSH32(esp, 0x002232EBu); RECOMP_ABI_CALL(0x00223270u, sub_00223270); /* call 0x00223270 */

loc_002232EB: ;
    MEM32(ebx + 0x38) = eax;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ebx = MEM32(ecx + edi * 4 + 8);
    PUSH32(esp, 0x002232FDu); RECOMP_ABI_CALL(0x00223220u, sub_00223220); /* call 0x00223220 */

loc_002232FD: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46B358);
    PUSH32(esp, 0x46B34C);
    PUSH32(esp, 0x46B340);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x34) = 1;
    PUSH32(esp, 0x0022331Bu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0022331B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00223320
 * Original: 0x00223320 - 0x0022336D (77 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223320(void)
{

loc_00223320: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC448);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x46B37C);
    ecx = esi;
    PUSH32(esp, 0x0022333Du); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0022333D: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebx = MEM32(edx + edi * 4);
    PUSH32(esp, 0x0022334Bu); RECOMP_ABI_CALL(0x00222D70u, sub_00222D70); /* call 0x00222D70 */

loc_0022334B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46B378);
    PUSH32(esp, 0x46B374);
    PUSH32(esp, 0x46B370);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x34) = 1;
    PUSH32(esp, 0x00223369u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00223369: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00223370
 * Original: 0x00223370 - 0x002233BB (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00223370: ;
    eax = MEM32(0x5BC460);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002233BA; /* jne: not equal / not zero */

loc_00223379: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00223392; /* jle: less or equal (signed <=) */

loc_00223382: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00223390; /* jge: greater or equal (signed >=) */

loc_00223387: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_002233A0;

loc_00223390: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00223392: ;
    if (TEST_NZ(_fa, _fb)) goto loc_0022339E; /* jne: not equal / not zero */

loc_00223394: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002233A0; /* jne: not equal / not zero */

loc_0022339E: ;
    ecx = 0; /* xor self */

loc_002233A0: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x002233ACu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002233AC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002233B2u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_002233B2: ;
    esp = esp + 4;
    MEM32(0x5BC460) = eax;

loc_002233BA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002233C0
 * Original: 0x002233C0 - 0x0022340B (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002233C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002233C0: ;
    eax = MEM32(0x5BC464);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022340A; /* jne: not equal / not zero */

loc_002233C9: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002233E2; /* jle: less or equal (signed <=) */

loc_002233D2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002233E0; /* jge: greater or equal (signed >=) */

loc_002233D7: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_002233F0;

loc_002233E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_002233E2: ;
    if (TEST_NZ(_fa, _fb)) goto loc_002233EE; /* jne: not equal / not zero */

loc_002233E4: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002233F0; /* jne: not equal / not zero */

loc_002233EE: ;
    ecx = 0; /* xor self */

loc_002233F0: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x002233FCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002233FC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00223402u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00223402: ;
    esp = esp + 4;
    MEM32(0x5BC464) = eax;

loc_0022340A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00223410
 * Original: 0x00223410 - 0x00223470 (96 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223410(void)
{

loc_00223410: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC464);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 4);
    PUSH32(esp, 0x46B3B0);
    ecx = esi;
    PUSH32(esp, 0x0022342Du); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0022342D: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebx = MEM32(edx + edi * 4 + 8);
    PUSH32(esp, 0x0022343Cu); RECOMP_ABI_CALL(0x00223040u, sub_00223040); /* call 0x00223040 */

loc_0022343C: ;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x34) = 1;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ebx = MEM32(ecx + edi * 4 + 0xC);
    PUSH32(esp, 0x00223452u); RECOMP_ABI_CALL(0x00223130u, sub_00223130); /* call 0x00223130 */

loc_00223452: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46B3A0);
    PUSH32(esp, 0x46B390);
    PUSH32(esp, 0x46B380);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x0022346Cu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0022346C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00223470
 * Original: 0x00223470 - 0x002234BB (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00223470: ;
    eax = MEM32(0x5BC4B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002234BA; /* jne: not equal / not zero */

loc_00223479: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00223492; /* jle: less or equal (signed <=) */

loc_00223482: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00223490; /* jge: greater or equal (signed >=) */

loc_00223487: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_002234A0;

loc_00223490: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00223492: ;
    if (TEST_NZ(_fa, _fb)) goto loc_0022349E; /* jne: not equal / not zero */

loc_00223494: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002234A0; /* jne: not equal / not zero */

loc_0022349E: ;
    ecx = 0; /* xor self */

loc_002234A0: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x002234ACu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002234AC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002234B2u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_002234B2: ;
    esp = esp + 4;
    MEM32(0x5BC4B8) = eax;

loc_002234BA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002234C0
 * Original: 0x002234C0 - 0x00223528 (104 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002234C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002234C0: ;
    eax = MEM32(0x5BC4C4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    SET_LO8(ebx, 0); /* xor self */
    MEM8(eax + 0x19) = LO8(ebx);
    esi = MEM32(0x5BC4C4);
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0xC);
    PUSH32(esp, 2);
    PUSH32(esp, 0x46B3D8);
    ecx = esi;
    PUSH32(esp, 0x002234E8u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_002234E8: ;
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ecx = MEM32(eax + edi * 4);
    MEM8(ecx + 0x26) = LO8(ebx);
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ebp = MEM32(eax + edi * 4 + 4);
    PUSH32(esp, 0x00223503u); RECOMP_ABI_CALL(0x00222AF0u, sub_00222AF0); /* call 0x00222AF0 */

loc_00223503: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46B3D0);
    PUSH32(esp, 0x46B3C8);
    PUSH32(esp, 0x46B3C0);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00223523u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00223523: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00223530
 * Original: 0x00223530 - 0x0022357D (77 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223530(void)
{

loc_00223530: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC4F8);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x46B3EC);
    ecx = esi;
    PUSH32(esp, 0x0022354Du); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0022354D: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebx = MEM32(edx + edi * 4);
    PUSH32(esp, 0x0022355Bu); RECOMP_ABI_CALL(0x00222A50u, sub_00222A50); /* call 0x00222A50 */

loc_0022355B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46B3E8);
    PUSH32(esp, 0x46B3E4);
    PUSH32(esp, 0x46B3E0);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x34) = 1;
    PUSH32(esp, 0x00223579u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00223579: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00223580
 * Original: 0x00223580 - 0x002235CB (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00223580: ;
    eax = MEM32(0x5BC504);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002235CA; /* jne: not equal / not zero */

loc_00223589: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002235A2; /* jle: less or equal (signed <=) */

loc_00223592: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002235A0; /* jge: greater or equal (signed >=) */

loc_00223597: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_002235B0;

loc_002235A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_002235A2: ;
    if (TEST_NZ(_fa, _fb)) goto loc_002235AE; /* jne: not equal / not zero */

loc_002235A4: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002235B0; /* jne: not equal / not zero */

loc_002235AE: ;
    ecx = 0; /* xor self */

loc_002235B0: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x002235BCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002235BC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002235C2u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_002235C2: ;
    esp = esp + 4;
    MEM32(0x5BC504) = eax;

loc_002235CA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002235D0
 * Original: 0x002235D0 - 0x00223832 (610 bytes, 200 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002235D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002235D0: ;
    eax = MEM32(0x5BC544);
    esp = esp - 0x108;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002235EF; /* jle: less or equal (signed <=) */

loc_002235DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002235ED; /* jge: greater or equal (signed >=) */

loc_002235E4: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_002235FD;

loc_002235ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_002235EF: ;
    if (TEST_NZ(_fa, _fb)) goto loc_002235FB; /* jne: not equal / not zero */

loc_002235F1: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002235FD; /* jne: not equal / not zero */

loc_002235FB: ;
    ecx = 0; /* xor self */

loc_002235FD: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0022360Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0022360D: ;
    ebx = MEM32(esp + 0x120);
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    edi = MEM32(esp + 0x130);
    if (CMP_NE(_fa, _fb)) goto loc_00223698; /* jne: not equal / not zero */

loc_00223620: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    ecx = MEM32(0x3F9860);
    edx = MEM32(0x3F9864);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(0x3F9868);
    MEM32(esp + 0x1C) = edx;
    SET_LO16(edx, MEM16(0x3F986C));
    MEM32(esp + 0x20) = ecx;
    SET_LO8(ecx, MEM8(0x3F986E));
    MEM16(esp + 0x24) = LO16(edx);
    MEM8(esp + 0x26) = LO8(ecx);
    if (TEST_Z(_fa, _fb)) goto loc_0022368D; /* je: equal / zero */

loc_00223658: ;
    ecx = edi;
    esi = edi;
    /* nop */

loc_00223660: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00223660; /* jne: not equal / not zero */

loc_00223667: ;
    ecx = ecx - esi;
    edi = esp + 0x18;
    edx = ecx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00223670: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00223670; /* jne: not equal / not zero */

loc_00223678: ;
    ecx = edx;
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
    edi = MEM32(esp + 0x130);

loc_0022368D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00223693u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00223693: ;
    esp = esp + 4;
    MEM32(ebx) = eax;

loc_00223698: ;
    esi = MEM32(ebx);
    eax = MEM32(esi + 0x24);
    edx = eax;
    edx = edx >> 3;
    ebx = 1;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00223825; /* jne: not equal / not zero */

loc_002236B1: ;
    eax = eax | 8;
    ecx = eax;
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ecx) (8-bit) */
    MEM8(esp + 0x13) = 0;
    MEM32(esi + 0x24) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_00223821; /* jne: not equal / not zero */

loc_002236C9: ;
    eax = eax >> 1;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022379A; /* jne: not equal / not zero */

loc_002236D3: ;
    _fa = (uint32_t)(MEM8(esi + 0x24)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x24), LO8(ebx) (8-bit) */
    MEM8(esp + 0x13) = LO8(ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_002236F7; /* jne: not equal / not zero */

loc_002236DC: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(esp + 0x124); PUSH32(esp, 0x002236E3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002236E3: ;
    ebp = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(esp + 0x128); PUSH32(esp, 0x002236ECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002236EC: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002236F4u); RECOMP_ABI_CALL(0x00216FD0u, sub_00216FD0); /* call 0x00216FD0 */

loc_002236F4: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) | ebx;

loc_002236F7: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002236FFu); RECOMP_ABI_CALL(0x00215CD0u, sub_00215CD0); /* call 0x00215CD0 */

loc_002236FF: ;
    eax = MEM32(esp + 0x12C);
    edx = MEM32(esp + 0x134);
    MEM32(esi + 0x54) = eax;
    SET_LO8(eax, MEM8(esp + 0x11C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM32(esi + 0x48) = edx;
    MEM8(esi + 0x1A) = LO8(eax);
    if (TEST_NZ(_fa, _fb)) goto loc_0022372B; /* jne: not equal / not zero */

loc_00223721: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(esp + 0x138); PUSH32(esp, 0x00223728u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00223728: ;
    MEM32(esi + 0x5C) = eax;

loc_0022372B: ;
    eax = MEM32(esp + 0x13C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00223738; /* je: equal / zero */

loc_00223736: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00223738u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00223738: ;
    edx = MEM32(esi + 0x24);
    edx = edx | 2;
    ecx = esi;
    MEM32(esi + 0x24) = edx;
    PUSH32(esp, 0x00223748u); RECOMP_ABI_CALL(0x0020E5A0u, sub_0020E5A0); /* call 0x0020E5A0 */

loc_00223748: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0022375F; /* jne: not equal / not zero */

loc_00223758: ;
    ecx = esi;
    PUSH32(esp, 0x0022375Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0022375F: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x64);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0022379A; /* je: equal / zero */

loc_0022376B: ;
    ecx = MEM32(eax + 0x60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0022379A; /* je: equal / zero */

loc_00223772: ;
    ecx = MEM32(eax + 0x68);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0022379A; /* je: equal / zero */

loc_00223779: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0022377Fu); RECOMP_ABI_CALL(0x00204890u, sub_00204890); /* call 0x00204890 */

loc_0022377F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022379A; /* je: equal / zero */

loc_00223784: ;
    ecx = MEM32(0x5BC508);
    edx = MEM32(ecx + 0x60);
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0022379Au); RECOMP_ABI_CALL(0x001F7AE0u, sub_001F7AE0); /* call 0x001F7AE0 */

loc_0022379A: ;
    ecx = esi;
    PUSH32(esp, 0x002237A1u); RECOMP_ABI_CALL(0x001F7930u, sub_001F7930); /* call 0x001F7930 */

loc_002237A1: ;
    eax = MEM32(esi + 0x4C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002237B0; /* je: equal / zero */

loc_002237AA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x002237ADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002237AD: ;
    esp = esp + 4;

loc_002237B0: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002237DC; /* jne: not equal / not zero */

loc_002237B4: ;
    ecx = 0x46A684;
    PUSH32(esp, 0x002237BEu); RECOMP_ABI_CALL(0x0019B870u, sub_0019B870); /* call 0x0019B870 */

loc_002237BE: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x002237CAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002237CA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002237DA; /* je: equal / zero */

loc_002237CE: ;
    MEM32(eax) = edi;
    MEM32(eax + 8) = edi;
    MEM32(eax + 4) = edi;
    ebp = eax;
    goto loc_002237DC;

loc_002237DA: ;
    ebp = 0; /* xor self */

loc_002237DC: ;
    edi = MEM32(esp + 0x144);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00223802; /* je: equal / zero */

loc_002237E7: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00223802; /* je: equal / zero */

loc_002237ED: ;
    /* nop */

loc_002237F0: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x002237F8u); RECOMP_ABI_CALL(0x001F3680u, sub_001F3680); /* call 0x001F3680 */

loc_002237F8: ;
    eax = MEM32(edi + 4);
    edi = edi + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002237F0; /* jne: not equal / not zero */

loc_00223802: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0022381D; /* je: equal / zero */

loc_0022380A: ;
    eax = MEM32(esp + 0x140);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0022381D; /* je: equal / zero */

loc_00223815: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0022381Du); RECOMP_ABI_CALL(0x001F3680u, sub_001F3680); /* call 0x001F3680 */

loc_0022381D: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) | 4;

loc_00223821: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0xFFFFFFF7u;

loc_00223825: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x108;
    esp += 4; return; /* ret */

}
