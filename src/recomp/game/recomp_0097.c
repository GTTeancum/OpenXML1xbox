/**
 * X-Men Legends - Recompiled code chunk 97
 * Functions: 250 (0x00371A8B - 0x00378330)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00371A8B
 * Original: 0x00371A8B - 0x00371AF8 (109 bytes, 44 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371A8B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00371A8B: ;
    eax = MEM32(0x37AD80);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00371AA5; /* je: equal / zero */

loc_00371A97: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00371A9Du); RECOMP_ABI_CALL(0x0037595Du, sub_0037595D); /* call 0x0037595D */

loc_00371A9D: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    goto loc_00371AF2;

loc_00371AA5: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x00371AADu); RECOMP_ABI_CALL(0x0036F31Fu, sub_0036F31F); /* call 0x0036F31F */

loc_00371AAD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_00371ABD; /* je: equal / zero */

loc_00371AB2: ;
    ecx = eax;
    PUSH32(esp, 0x00371AB9u); RECOMP_ABI_CALL(0x0036F687u, sub_0036F687); /* call 0x0036F687 */

loc_00371AB9: ;
    edi = eax;
    goto loc_00371ABF;

loc_00371ABD: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */

loc_00371ABF: ;
    esi = edi;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    esi = esi & 0x7FF8FFF2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    esi = esi + 0x8007000Eu;
    if (((int32_t)esi < 0)) goto loc_00371AE7; /* js: sign (negative) */

loc_00371AD3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00371AD9u); RECOMP_ABI_CALL(0x00371952u, sub_00371952); /* call 0x00371952 */

loc_00371AD9: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_00371AE7; /* jl: less (signed <) */

loc_00371ADF: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edi;
    goto loc_00371AF1;

loc_00371AE7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00371AF1; /* je: equal / zero */

loc_00371AEB: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00371AF1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00371AF1: ;
    POP32(esp, edi);

loc_00371AF2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00371B96
 * Original: 0x00371B96 - 0x00371BDD (71 bytes, 27 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371B96(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00371B96: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, MEM32(esp + 0x10));
    { uint32_t _icall_target = MEM32(0x3C6D54); PUSH32(esp, 0x00371BA5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00371BA5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00371BD7; /* je: equal / zero */

loc_00371BAB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x3C6D50); PUSH32(esp, 0x00371BB2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00371BB2: ;
    edx = MEM32(0x37ADA8);
    MEM32(edx) = MEM32(edx) + eax;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00371BD7; /* je: equal / zero */

loc_00371BC1: ;
    ecx = eax;
    edx = ecx;
    PUSH32(esp, edi);
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    POP32(esp, edi);

loc_00371BD7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00371BDD
 * Original: 0x00371BDD - 0x00371BF5 (24 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371BDD(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00371BDD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    { uint32_t _icall_target = MEM32(0x3C6D50); PUSH32(esp, 0x00371BE7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00371BE7: ;
    ecx = MEM32(0x37ADA8);
    MEM32(ecx) = MEM32(ecx) - eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x3C6D58)); return; /* indirect tail jmp */

}

/**
 * sub_00371BF5
 * Original: 0x00371BF5 - 0x00371C44 (79 bytes, 30 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371BF5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00371BF5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x18));
    { uint32_t _icall_target = MEM32(0x3C6C48); PUSH32(esp, 0x00371C0Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00371C0C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00371C3E; /* je: equal / zero */

loc_00371C12: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x3C6C4C); PUSH32(esp, 0x00371C19u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00371C19: ;
    edx = MEM32(0x37ADA4);
    MEM32(edx) = MEM32(edx) + eax;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00371C3E; /* je: equal / zero */

loc_00371C28: ;
    ecx = eax;
    edx = ecx;
    PUSH32(esp, edi);
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    POP32(esp, edi);

loc_00371C3E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00371C44
 * Original: 0x00371C44 - 0x00371C5C (24 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371C44(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00371C44: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    { uint32_t _icall_target = MEM32(0x3C6C4C); PUSH32(esp, 0x00371C4Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00371C4E: ;
    ecx = MEM32(0x37ADA4);
    MEM32(ecx) = MEM32(ecx) - eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x3C6C3C)); return; /* indirect tail jmp */

}

/**
 * sub_00371C5C
 * Original: 0x00371C5C - 0x00371CC4 (104 bytes, 42 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371C5C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00371C5C: ;
    ecx = MEM32(0x37ACF8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_00371C98; /* je: equal / zero */

loc_00371C6B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00371C71u); RECOMP_ABI_CALL(0x0037474Au, sub_0037474A); /* call 0x0037474A */

loc_00371C71: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00371C9E; /* je: equal / zero */

loc_00371C77: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00371C9A; /* je: equal / zero */

loc_00371C7E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    ebx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebx;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    POP32(esp, edi);
    POP32(esp, ebx);
    goto loc_00371C9A;

loc_00371C98: ;
    edx = 0; /* xor self */

loc_00371C9A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00371CBE; /* jne: not equal / not zero */

loc_00371C9E: ;
    PUSH32(esp, MEM32(esp + 0x10));
    esi = esi + 4;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x00371CAFu); RECOMP_ABI_CALL(0x00371B96u, sub_00371B96); /* call 0x00371B96 */

loc_00371CAF: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00371CBE; /* je: equal / zero */

loc_00371CB5: ;
    MEM32(edx) = 0x6C6F6F70;
    edx = edx + 4;

loc_00371CBE: ;
    eax = edx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00371CC4
 * Original: 0x00371CC4 - 0x00371CF8 (52 bytes, 16 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371CC4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00371CC4: ;
    edx = MEM32(esp + 4);
    eax = edx + -4;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6C6F6F70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x6C6F6F70 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00371CDD; /* jne: not equal / not zero */

loc_00371CD5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00371CDBu); RECOMP_ABI_CALL(0x00371BDDu, sub_00371BDD); /* call 0x00371BDD */

loc_00371CDB: ;
    goto loc_00371CF5;

loc_00371CDD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x706F6C73) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x706F6C73 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00371CF5; /* jne: not equal / not zero */

loc_00371CE5: ;
    ecx = MEM32(0x37ACF8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00371CF5; /* je: equal / zero */

loc_00371CEF: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00371CF5u); RECOMP_ABI_CALL(0x00374967u, sub_00374967); /* call 0x00374967 */

loc_00371CF5: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00371CF8
 * Original: 0x00371CF8 - 0x00371D42 (74 bytes, 25 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371CF8(void)
{

loc_00371CF8: ;
    ecx = MEM32(esp + 0x10);
    SET_LO16(eax, MEM16(esp + 4));
    SET_LO16(edx, MEM16(esp + 0xC));
    MEM16(ecx + 2) = LO16(eax);
    eax = ZX16(LO16(eax));
    MEM16(ecx + 0xE) = LO16(edx);
    edx = ZX16(LO16(edx));
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 8);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, edi);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    esi = MEM32(esp + 0x10);
    MEM16(ecx + 0x10) = MEM16(ecx + 0x10) & 0;
    POP32(esp, edi);
    MEM32(ecx + 4) = esi;
    MEM16(ecx) = 1;
    MEM16(ecx + 0xC) = LO16(eax);
    eax = ZX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    MEM32(ecx + 8) = eax;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00371D42
 * Original: 0x00371D42 - 0x00371D85 (67 bytes, 17 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371D42(void)
{

loc_00371D42: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM32(eax + 4) = ecx;
    ecx = ecx >> 6;
    MEM16(eax + 2) = LO16(edx);
    edx = edx + edx * 8;
    ecx = ecx + ecx * 8;
    edx = edx << 2;
    ecx = ecx << 2;
    MEM16(eax) = 0x69;
    MEM16(eax + 0xE) = 4;
    MEM16(eax + 0xC) = LO16(edx);
    MEM32(eax + 8) = ecx;
    MEM16(eax + 0x10) = 2;
    MEM16(eax + 0x12) = 0x40;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00371D85
 * Original: 0x00371D85 - 0x00371DAE (41 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371D85(void)
{

loc_00371D85: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM16(eax) = 1;
    SET_LO8(edx, MEM8(ecx + 2));
    MEM8(eax + 2) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0xE));
    MEM8(eax + 3) = LO8(edx);
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = ZX8(MEM8(ecx + 0xC));
    MEM32(eax + 8) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00371DAE
 * Original: 0x00371DAE - 0x00371DD5 (39 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371DAE(void)
{

loc_00371DAE: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM16(eax) = 0x69;
    SET_LO8(edx, MEM8(ecx + 2));
    MEM8(eax + 2) = LO8(edx);
    MEM8(eax + 3) = 4;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = ZX8(MEM8(ecx + 0xC));
    MEM32(eax + 8) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00371DD5
 * Original: 0x00371DD5 - 0x00371E1E (73 bytes, 31 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371DD5(void)
{
    int _flags = 0; /* fallback flag var */

loc_00371DD5: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebx + 0x18;
    PUSH32(esp, 4);
    POP32(esp, ecx);
    edi = 0x37A3A8;
    esi = eax;
    edx = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((edx != 0)) goto loc_00371DFB; /* jne: not equal / not zero */

loc_00371DEF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x00371DF9u); RECOMP_ABI_CALL(0x00371D85u, sub_00371D85); /* call 0x00371D85 */

loc_00371DF9: ;
    goto loc_00371E15;

loc_00371DFB: ;
    PUSH32(esp, 4);
    esi = eax;
    POP32(esp, ecx);
    edi = 0x37A398;
    eax = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((eax != 0)) goto loc_00371E15; /* jne: not equal / not zero */

loc_00371E0B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x00371E15u); RECOMP_ABI_CALL(0x00371DAEu, sub_00371DAE); /* call 0x00371DAE */

loc_00371E15: ;
    eax = MEM32(ebx + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00371E1E
 * Original: 0x00371E1E - 0x00371E2C (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371E1E(void)
{

loc_00371E1E: ;
    eax = ecx;
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu;
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00371E2C
 * Original: 0x00371E2C - 0x00371E39 (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371E2C(void)
{

loc_00371E2C: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = MEM32(ecx + 4) | 1;
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00371E39
 * Original: 0x00371E39 - 0x00371E43 (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371E39(void)
{

loc_00371E39: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = MEM32(ecx + 4) | eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00371E43
 * Original: 0x00371E43 - 0x00371E7B (56 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371E43(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00371E43: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 4), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00371E53; /* je: equal / zero */

loc_00371E4C: ;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x00371E53u); RECOMP_ABI_CALL(0x0034D2C7u, sub_0034D2C7); /* call 0x0034D2C7 */

loc_00371E53: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00371E65; /* je: equal / zero */

loc_00371E5A: ;
    MEM32(esi) = MEM32(esi) & 0;
    eax = eax & 0xFFFFFFFEu;
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00371E65: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00371E79; /* je: equal / zero */

loc_00371E6B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00371E79; /* je: equal / zero */

loc_00371E70: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00371E76u); RECOMP_ABI_CALL(0x0019DD85u, sub_0019DD85); /* call 0x0019DD85 */

loc_00371E76: ;
    MEM32(esi) = MEM32(esi) & 0;

loc_00371E79: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00371E7B
 * Original: 0x00371E7B - 0x00371F0F (148 bytes, 59 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00371E7B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00371E7B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    esi = ecx;
    PUSH32(esp, MEM32(esi));
    MEM32(ebp + 0xC) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00371EA1u); RECOMP_ABI_CALL(0x0019DDC9u, sub_0019DDC9); /* call 0x0019DDC9 */

loc_00371EA1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00371ECC; /* jne: not equal / not zero */

loc_00371EA5: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00371EAAu); RECOMP_ABI_CALL(0x001A1D09u, sub_001A1D09); /* call 0x001A1D09 */

loc_00371EAA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00371EB7; /* jne: not equal / not zero */

loc_00371EB1: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    goto loc_00371ECC;

loc_00371EB7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00371EC5; /* jle: less or equal (signed <=) */

loc_00371EBB: ;
    eax = eax & 0xFFFF;
    eax = eax | 0x80070000u;

loc_00371EC5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(ebp + -4) = eax;
    if (TEST_S(_fas, _fbs)) goto loc_00371F05; /* jl: less (signed <) */

loc_00371ECC: ;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 4), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00371EDA; /* je: equal / zero */

loc_00371ED2: ;
    eax = MEM32(ebx + 8);
    MEM32(esi + 8) = eax;
    goto loc_00371F05;

loc_00371EDA: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00371EE8; /* je: equal / zero */

loc_00371EE1: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    goto loc_00371EF4;

loc_00371EE8: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00371EF4; /* je: equal / zero */

loc_00371EED: ;
    MEM32(ebp + -4) = 0x8003001Eu;

loc_00371EF4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00371F05; /* je: equal / zero */

loc_00371EF8: ;
    eax = MEM32(ebx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00371F05; /* je: equal / zero */

loc_00371EFF: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00371F05u); RECOMP_ABI_CALL(0x0019F30Au, sub_0019F30A); /* call 0x0019F30A */

loc_00371F05: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00371F0F
 * Original: 0x00371F0F - 0x00371F76 (103 bytes, 41 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00371F0F(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00371F0F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    esi = 0; /* xor self */
    PUSH32(esp, esi);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ecx));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00371F29u); RECOMP_ABI_CALL(0x0019DEB6u, sub_0019DEB6); /* call 0x0019DEB6 */

loc_00371F29: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00371F56; /* jne: not equal / not zero */

loc_00371F2D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00371F32u); RECOMP_ABI_CALL(0x001A1D09u, sub_001A1D09); /* call 0x001A1D09 */

loc_00371F32: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_00371F3F; /* jg: greater (signed >) */

loc_00371F36: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00371F3Bu); RECOMP_ABI_CALL(0x001A1D09u, sub_001A1D09); /* call 0x001A1D09 */

loc_00371F3B: ;
    esi = eax;
    goto loc_00371F52;

loc_00371F3F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00371F44u); RECOMP_ABI_CALL(0x001A1D09u, sub_001A1D09); /* call 0x001A1D09 */

loc_00371F44: ;
    esi = eax;
    esi = esi & 0xFFFF;
    esi = esi | 0x80070000u;

loc_00371F52: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00371F6E; /* jl: less (signed <) */

loc_00371F56: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00371F64; /* je: equal / zero */

loc_00371F5D: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    goto loc_00371F6E;

loc_00371F64: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00371F6E; /* je: equal / zero */

loc_00371F69: ;
    esi = 0x8003001Du;

loc_00371F6E: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00371F76
 * Original: 0x00371F76 - 0x00371FF1 (123 bytes, 48 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00371F76(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00371F76: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(MEM8(ecx + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 4), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00371FA0; /* je: equal / zero */

loc_00371F82: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), edi (32-bit) */
    eax = MEM32(ebp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_00371F8F; /* jne: not equal / not zero */

loc_00371F8A: ;
    MEM32(ecx + 8) = eax;
    goto loc_00371F92;

loc_00371F8F: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) + eax;

loc_00371F92: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00371FEA; /* je: equal / zero */

loc_00371F99: ;
    ecx = MEM32(ecx + 8);
    MEM32(eax) = ecx;
    goto loc_00371FEA;

loc_00371FA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ecx));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00371FB0u); RECOMP_ABI_CALL(0x0019E010u, sub_0019E010); /* call 0x0019E010 */

loc_00371FB0: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00371FE0; /* jne: not equal / not zero */

loc_00371FB7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00371FBCu); RECOMP_ABI_CALL(0x001A1D09u, sub_001A1D09); /* call 0x001A1D09 */

loc_00371FBC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_00371FC9; /* jg: greater (signed >) */

loc_00371FC0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00371FC5u); RECOMP_ABI_CALL(0x001A1D09u, sub_001A1D09); /* call 0x001A1D09 */

loc_00371FC5: ;
    edi = eax;
    goto loc_00371FDC;

loc_00371FC9: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00371FCEu); RECOMP_ABI_CALL(0x001A1D09u, sub_001A1D09); /* call 0x001A1D09 */

loc_00371FCE: ;
    edi = eax;
    edi = edi & 0xFFFF;
    edi = edi | 0x80070000u;

loc_00371FDC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00371FE9; /* jl: less (signed <) */

loc_00371FE0: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00371FE9; /* je: equal / zero */

loc_00371FE7: ;
    MEM32(eax) = esi;

loc_00371FE9: ;
    POP32(esp, esi);

loc_00371FEA: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00371FF1
 * Original: 0x00371FF1 - 0x00372032 (65 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371FF1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00371FF1: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ecx));
    PUSH32(esp, 0x00371FFCu); RECOMP_ABI_CALL(0x0019E310u, sub_0019E310); /* call 0x0019E310 */

loc_00371FFC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0037202C; /* jne: not equal / not zero */

loc_00372007: ;
    PUSH32(esp, 0x0037200Cu); RECOMP_ABI_CALL(0x001A1D09u, sub_001A1D09); /* call 0x001A1D09 */

loc_0037200C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_00372019; /* jg: greater (signed >) */

loc_00372010: ;
    PUSH32(esp, 0x00372015u); RECOMP_ABI_CALL(0x001A1D09u, sub_001A1D09); /* call 0x001A1D09 */

loc_00372015: ;
    esi = eax;
    goto loc_0037202C;

loc_00372019: ;
    PUSH32(esp, 0x0037201Eu); RECOMP_ABI_CALL(0x001A1D09u, sub_001A1D09); /* call 0x001A1D09 */

loc_0037201E: ;
    esi = eax;
    esi = esi & 0xFFFF;
    esi = esi | 0x80070000u;

loc_0037202C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00372032
 * Original: 0x00372032 - 0x00372075 (67 bytes, 25 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00372032(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00372032: ;
    ecx = MEM32(esp + 8);
    eax = ZX16(MEM16(ecx));
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00372065; /* je: equal / zero */

loc_0037203F: ;
    eax = eax - 0x68;
    if ((eax == 0)) goto loc_00372059; /* je: equal / zero */

loc_00372044: ;
    eax = eax - 0xFF95;
    if ((eax != 0)) goto loc_0037206F; /* jne: not equal / not zero */

loc_0037204B: ;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x00372055u); RECOMP_ABI_CALL(0x00371DD5u, sub_00371DD5); /* call 0x00371DD5 */

loc_00372055: ;
    esi = eax;
    goto loc_0037206F;

loc_00372059: ;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x00372063u); RECOMP_ABI_CALL(0x00371DAEu, sub_00371DAE); /* call 0x00371DAE */

loc_00372063: ;
    goto loc_0037206F;

loc_00372065: ;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x0037206Fu); RECOMP_ABI_CALL(0x00371D85u, sub_00371D85); /* call 0x00371D85 */

loc_0037206F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00372075
 * Original: 0x00372075 - 0x0037207A (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00372075(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00372075: ;
    g_seh_ebp = ebp; sub_00371E43(); return; /* tail jmp 0x00371E43 */

}

/**
 * sub_0037207A
 * Original: 0x0037207A - 0x00372090 (22 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037207A(void)
{

loc_0037207A: ;
    MEM32(0x37ADA8) = 0x37A6D4;
    esp += 4; return; /* ret */

}

/**
 * sub_00372085
 * Original: 0x00372085 - 0x00372090 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00372085(void)
{

loc_00372085: ;
    MEM32(0x37ADA4) = 0x37A6D8;
    esp += 4; return; /* ret */

}

/**
 * sub_00372090
 * Original: 0x00372090 - 0x003720B7 (39 bytes, 17 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00372090(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00372090: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003720B7
 * Original: 0x003720B7 - 0x003720EE (55 bytes, 17 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003720B7(void)
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

loc_003720B7: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003720E9; /* jne: not equal / not zero */

loc_003720C8: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = fp_top() + MEMF(0x3C6E40); /* fadd dword ptr [0x3c6e40] */
    fp_push(0.30102999566398119521); /* fldlg2 */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    fp_top() = fp_top() * MEMF(0x3E1FAC); /* fmul dword ptr [0x3e1fac] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x003720E7u); RECOMP_ABI_CALL(0x00376F72u, sub_00376F72); /* call 0x00376F72 */

loc_003720E7: ;
    goto loc_003720EB;

loc_003720E9: ;
    eax = 0; /* xor self */

loc_003720EB: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003720EE
 * Original: 0x003720EE - 0x00372137 (73 bytes, 23 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003720EE(void)
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

loc_003720EE: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00372106; /* jp: parity */

loc_003720FF: ;
    eax = 0xFFFFD8F0u;
    goto loc_00372134;

loc_00372106: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0037211B; /* jne: not equal / not zero */

loc_00372117: ;
    eax = 0; /* xor self */
    goto loc_00372134;

loc_0037211B: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, ecx);
    fp_push(0.30102999566398119521); /* fldlg2 */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    fp_top() = fp_top() * MEMF(0x3CEA68); /* fmul dword ptr [0x3cea68] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00372134u); RECOMP_ABI_CALL(0x00376F72u, sub_00376F72); /* call 0x00376F72 */

loc_00372134: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00372137
 * Original: 0x00372137 - 0x00372174 (61 bytes, 22 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00372137(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00372137: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 8); /* fmul dword ptr [eax + 8] */
    edx = MEM32(esp + 0xC);
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 4); /* fmul dword ptr [eax + 4] */
    fp_st1() = fp_st1() - fp_top(); fp_pop(); /* fsubp st(1) */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 8); /* fmul dword ptr [ecx + 8] */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 8); /* fmul dword ptr [eax + 8] */
    fp_st1() = fp_st1() - fp_top(); fp_pop(); /* fsubp st(1) */
    MEMF(edx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 4); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 4); /* fmul dword ptr [ecx + 4] */
    fp_st1() = fp_st1() - fp_top(); fp_pop(); /* fsubp st(1) */
    MEMF(edx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00372174
 * Original: 0x00372174 - 0x0037220A (150 bytes, 53 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns float_sse
 * Frame: standard_frame
 */
void sub_00372174(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_00372174: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    fp_push(MEMF(esi)); /* fld float */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    fp_top() = fp_top() - MEMF(edi); /* fsub dword ptr [edi] */
    eax = ebp + -12;
    PUSH32(esp, eax);
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(edi + 4); /* fsub dword ptr [edi + 4] */
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(edi + 8); /* fsub dword ptr [edi + 8] */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003721A4u); RECOMP_ABI_CALL(0x00372090u, sub_00372090); /* call 0x00372090 */

loc_003721A4: ;
    MEMF(ebp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ebp + -12;
    fp_push(MEMF(esi)); /* fld float */
    PUSH32(esp, eax);
    fp_top() = fp_top() + MEMF(edi); /* fadd dword ptr [edi] */
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 4); /* fadd dword ptr [esi + 4] */
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 8); /* fadd dword ptr [esi + 8] */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003721C9u); RECOMP_ABI_CALL(0x00372090u, sub_00372090); /* call 0x00372090 */

loc_003721C9: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ebp + 8] */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    eax = MEM32(ebp + 0x10);
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_003721EB; /* jp: parity */

loc_003721D8: ;
    fp_top() = fp_top() / MEMF(ebp + 8); /* fdiv dword ptr [ebp + 8] */
    fp_top() = fp_top() * MEMF(0x3C94A8); /* fmul dword ptr [0x3c94a8] */
    fp_top() = fp_top() * MEMF(0x3C76B0); /* fmul dword ptr [0x3c76b0] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00372206;

loc_003721EB: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_top() = fp_top() / fp_st1(); /* fdiv st(1) */
    fp_top() = fp_top() * MEMF(0x3C94A8); /* fmul dword ptr [0x3c94a8] */
    fp_top() = MEMF(0x3CB25C) - fp_top(); /* fsubr dword ptr [0x3cb25c] */
    fp_top() = fp_top() * MEMF(0x3C76B0); /* fmul dword ptr [0x3c76b0] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */

loc_00372206: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0037220A
 * Original: 0x0037220A - 0x00372255 (75 bytes, 30 insns)
 * CC: cdecl, 5 params, returns float_sse
 * Frame: standard_frame
 */
void sub_0037220A(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_0037220A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 1 (32-bit) */
    eax = MEM32(ebp + 0x10);
    fp_push(MEMF(eax + 8)); /* fld float */
    if (CMP_NE(_fa, _fb)) goto loc_0037222D; /* jne: not equal / not zero */

loc_00372219: ;
    ecx = MEM32(ebp + 0x14);
    fp_top() = fp_top() * MEMF(ecx + 8); /* fmul dword ptr [ecx + 8] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 4); /* fmul dword ptr [ecx + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx); /* fmul dword ptr [ecx] */
    goto loc_0037224A;

loc_0037222D: ;
    ecx = MEM32(ebp + 0xC);
    fp_top() = fp_top() - MEMF(ecx + 8); /* fsub dword ptr [ecx + 8] */
    edx = MEM32(ebp + 0x14);
    fp_top() = fp_top() * MEMF(edx + 8); /* fmul dword ptr [edx + 8] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 4); /* fsub dword ptr [ecx + 4] */
    fp_top() = fp_top() * MEMF(edx + 4); /* fmul dword ptr [edx + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx); /* fsub dword ptr [ecx] */
    fp_top() = fp_top() * MEMF(edx); /* fmul dword ptr [edx] */

loc_0037224A: ;
    eax = MEM32(ebp + 0x18);
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00372255
 * Original: 0x00372255 - 0x00372366 (273 bytes, 99 insns)
 * Category: game_audio
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00372255(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_00372255: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    PUSH32(esp, esi);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebp + 0xc] */
    PUSH32(esp, edi);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0037235A; /* jne: not equal / not zero */

loc_0037226D: ;
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037228E; /* je: equal / zero */

loc_00372273: ;
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0037228E; /* jne: not equal / not zero */

loc_00372280: ;
    eax = MEM32(ebp + 0x24);
    MEM32(eax) = 0xFFFFD8F0u;
    goto loc_00372360;

loc_0037228E: ;
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003722A1; /* jne: not equal / not zero */

loc_0037229B: ;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + 0x1C) = eax;

loc_003722A1: ;
    edi = MEM32(ebp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00372340; /* je: equal / zero */

loc_003722AC: ;
    esi = MEM32(ebp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00372340; /* je: equal / zero */

loc_003722B7: ;
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    MEM32(ebp + 0x1C) = esi;
    fp_top() = fp_top() - MEMF(ebp + 0xC); /* fsub dword ptr [ebp + 0xc] */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_top() = fp_top() - MEMF(ebp + 0xC); /* fsub dword ptr [ebp + 0xc] */
    fp_push((double)SMEM32(ebp + 0x1C)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_003722D1; /* jge: greater or equal (signed >=) */

loc_003722CB: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_003722D1: ;
    fp_st1() = fp_st1() / fp_top(); fp_pop(); /* fdivp st(1) */
    fp_push(1.0); /* fld1 */
    fp_top() = fp_top() / fp_st1(); /* fdiv st(1) */
    MEMF(ebp + 0x1C) = (float)fp_top(); /* fst */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003722E1u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_003722E1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003722E8; /* jb: below (unsigned <) */

loc_003722E5: ;
    eax = esi + -1;

loc_003722E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003722FA; /* jne: not equal / not zero */

loc_003722EC: ;
    eax = MEM32(edi);
    fp_pop(); /* fstp st(0) */
    fp_push(1.0); /* fld1 */
    MEM32(ebp + -4) = eax;
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0037231E;

loc_003722FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = edi + eax * 4;
    edx = MEM32(ecx + -4);
    ecx = MEM32(ecx);
    MEM32(ebp + 0x10) = eax;
    fp_push((double)SMEM32(ebp + 0x10)); /* fild */
    MEM32(ebp + -8) = edx;
    MEM32(ebp + -4) = ecx;
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00372318; /* jge: greater or equal (signed >=) */

loc_00372312: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_00372318: ;
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = g_fp_stack[(g_fp_top + 2) & 7] - fp_top(); fp_pop(); /* fsubp st(2) */
    fp_pop(); /* fstp st(0) */

loc_0037231E: ;
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = fp_top() - MEMF(ebp + -8); /* fsub dword ptr [ebp - 8] */
    fp_st1() = fp_st1() * fp_top(); fp_pop(); /* fmulp st(1) */
    fp_top() = fp_top() + MEMF(ebp + -8); /* fadd dword ptr [ebp - 8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372339u); RECOMP_ABI_CALL(0x0036F3EBu, sub_0036F3EB); /* call 0x0036F3EB */

loc_00372339: ;
    ecx = MEM32(ebp + 0x24);
    MEM32(ecx) = eax;
    goto loc_00372360;

loc_00372340: ;
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = fp_top() / MEMF(ebp + 0xC); /* fdiv dword ptr [ebp + 0xc] */
    fp_top() = fp_top() - MEMF(0x3C6E40); /* fsub dword ptr [0x3c6e40] */
    fp_top() = fp_top() * MEMF(ebp + 8); /* fmul dword ptr [ebp + 8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372358u); RECOMP_ABI_CALL(0x003720B7u, sub_003720B7); /* call 0x003720B7 */

loc_00372358: ;
    goto loc_00372339;

loc_0037235A: ;
    eax = MEM32(ebp + 0x24);
    MEM32(eax) = MEM32(eax) & 0;

loc_00372360: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 36; return; /* ret 32 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00372366
 * Original: 0x00372366 - 0x003723F6 (144 bytes, 56 insns)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00372366(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_00372366: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edx = MEM32(ebp + 8);
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00372379; /* jge: greater or equal (signed >=) */

loc_00372373: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_00372379: ;
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0037238F; /* jp: parity */

loc_00372385: ;
    eax = MEM32(ebp + 0x18);
    fp_pop(); /* fstp st(0) */
    MEM32(eax) = MEM32(eax) & 0;
    goto loc_003723F2;

loc_0037238F: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003723BC; /* jae: above or equal (unsigned >=) */

loc_00372396: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(ebp + 8) = ecx;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_003723A6; /* jge: greater or equal (signed >=) */

loc_003723A0: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_003723A6: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebp + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_003723BC; /* jp: parity */

loc_003723B0: ;
    eax = MEM32(ebp + 0x18);
    fp_pop(); /* fstp st(0) */
    ecx = MEM32(ebp + 0x10);
    MEM32(eax) = ecx;
    goto loc_003723F2;

loc_003723BC: ;
    eax = ecx;
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003723C8; /* jae: above or equal (unsigned >=) */

loc_003723C5: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003723C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    MEM32(ebp + 0x14) = eax;
    fp_top() = fp_top() * (double)SMEM32(ebp + 0x10); /* fimul dword ptr [ebp + 0x10] */
    fp_push((double)SMEM32(ebp + 0x14)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_003723E0; /* jge: greater or equal (signed >=) */

loc_003723DA: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_003723E0: ;
    fp_st1() = fp_st1() / fp_top(); fp_pop(); /* fdivp st(1) */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003723EDu); RECOMP_ABI_CALL(0x00376F72u, sub_00376F72); /* call 0x00376F72 */

loc_003723ED: ;
    ecx = MEM32(ebp + 0x18);
    MEM32(ecx) = eax;

loc_003723F2: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003723F6
 * Original: 0x003723F6 - 0x0037246F (121 bytes, 40 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003723F6(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_003723F6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(ebp + 0xC); /* fmul dword ptr [ebp + 0xc] */
    fp_top() = fp_top() * MEMF(ebp + 0x10); /* fmul dword ptr [ebp + 0x10] */
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0037241D; /* jp: parity */

loc_00372413: ;
    eax = MEM32(ebp + 0x14);
    fp_pop(); /* fstp st(0) */
    MEM32(eax) = MEM32(eax) & 0;
    goto loc_0037246B;

loc_0037241D: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3792D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3792d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00372437; /* jne: not equal / not zero */

loc_0037242A: ;
    eax = MEM32(ebp + 0x14);
    fp_pop(); /* fstp st(0) */
    MEM32(eax) = 0xFFFF8001u;
    goto loc_0037246B;

loc_00372437: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3E1FB8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3e1fb8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00372451; /* jp: parity */

loc_00372444: ;
    eax = MEM32(ebp + 0x14);
    fp_pop(); /* fstp st(0) */
    MEM32(eax) = 0x1000;
    goto loc_0037246B;

loc_00372451: ;
    fp_top() = fp_top() * MEMF(0x3E1FB4); /* fmul dword ptr [0x3e1fb4] */
    PUSH32(esp, ecx);
    fp_top() = MEMF(0x3C6E40) - fp_top(); /* fsubr dword ptr [0x3c6e40] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372466u); RECOMP_ABI_CALL(0x00374382u, sub_00374382); /* call 0x00374382 */

loc_00372466: ;
    ecx = MEM32(ebp + 0x14);
    MEM32(ecx) = eax;

loc_0037246B: ;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0037246F
 * Original: 0x0037246F - 0x003724A9 (58 bytes, 23 insns)
 * Category: game_audio
 * CC: cdecl, 5 params, returns float_sse
 * Frame: standard_frame
 */
void sub_0037246F(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_0037246F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 1 (32-bit) */
    ecx = MEM32(ebp + 0x10);
    fp_push(MEMF(ecx)); /* fld float */
    eax = MEM32(ebp + 0x14);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0037249A; /* je: equal / zero */

loc_00372488: ;
    fp_push(MEMF(eax)); /* fld float */
    ecx = MEM32(ebp + 0xC);
    fp_top() = fp_top() - MEMF(ecx); /* fsub dword ptr [ecx] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 8); /* fsub dword ptr [ecx + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_0037249A: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003724A0u); RECOMP_ABI_CALL(0x0037430Bu, sub_0037430B); /* call 0x0037430B */

loc_003724A0: ;
    eax = MEM32(ebp + 0x18);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003724A9
 * Original: 0x003724A9 - 0x00372591 (232 bytes, 89 insns)
 * CC: cdecl, 8 params, returns float_sse
 * Frame: standard_frame
 */
void sub_003724A9(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_003724A9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003724BD; /* je: equal / zero */

loc_003724B5: ;
    ecx = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 0xC);
    goto loc_003724C7;

loc_003724BD: ;
    ecx = 0x3792D8;
    edx = 0x37A404;

loc_003724C7: ;
    eax = MEM32(ebp + 0x18);
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 8); /* fmul dword ptr [eax + 8] */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 4); /* fmul dword ptr [eax + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fp_top() * MEMF(edx); /* fmul dword ptr [edx] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 8); /* fmul dword ptr [eax + 8] */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 4); /* fmul dword ptr [eax + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    eax = MEM32(ebp + 0x24);
    fp_top() = fp_top() * MEMF(ecx); /* fmul dword ptr [ecx] */
    ecx = MEM32(ebp + 0x20);
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00372546; /* jnp: not parity */

loc_00372513: ;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00372535; /* jne: not equal / not zero */

loc_00372527: ;
    fp_top() = fp_top() / fp_st1(); /* fdiv st(1) */
    fp_top() = fp_top() * MEMF(0x3C94A8); /* fmul dword ptr [0x3c94a8] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */

loc_00372531: ;
    fp_pop(); /* fstp st(0) */
    goto loc_0037254A;

loc_00372535: ;
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0037257B; /* jp: parity */

loc_00372542: ;
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */

loc_00372546: ;
    fp_push(0.0); /* fldz */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */

loc_0037254A: ;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00372561; /* jp: parity */

loc_00372557: ;
    fp_push(MEMF(0x3CB1F8)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx); /* fsub dword ptr [ecx] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */

loc_00372561: ;
    fp_push(MEMF(ebp + -12)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00372577; /* jp: parity */

loc_00372571: ;
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */

loc_00372577: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 36; return; /* ret 32 */

loc_0037257B: ;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() / fp_st1(); /* fdiv st(1) */
    fp_top() = fp_top() * MEMF(0x3C94A8); /* fmul dword ptr [0x3c94a8] */
    fp_top() = MEMF(0x3CB25C) - fp_top(); /* fsubr dword ptr [0x3cb25c] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    goto loc_00372531;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00372591
 * Original: 0x00372591 - 0x00372648 (183 bytes, 66 insns)
 * Category: game_audio
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00372591(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_00372591: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372635; /* je: equal / zero */

loc_0037259E: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(ebp + 0xC); /* fmul dword ptr [ebp + 0xc] */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(ebp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3C7084)); /* fld float */
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3E1FB0); /* fmul dword ptr [0x3e1fb0] */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    fp_top() = fp_top() + fp_top(); /* fadd st(0), st(0) */
    fp_top() = fp_top() - g_fp_stack[(g_fp_top + 2) & 7]; /* fsub st(2) */
    MEMF(ebp + 0x18) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003725DB; /* jne: not equal / not zero */

loc_003725D7: ;
    fp_push(1.0); /* fld1 */
    goto loc_003725ED;

loc_003725DB: ;
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_003725F0; /* jp: parity */

loc_003725EB: ;
    fp_push(0.0); /* fldz */

loc_003725ED: ;
    MEMF(ebp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */

loc_003725F0: ;
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), g_fp_stack[(g_fp_top + 2) & 7]); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(2) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00372609; /* jp: parity */

loc_003725FB: ;
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    fp_top() = fp_top() - g_fp_stack[(g_fp_top + 2) & 7]; /* fsub st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    MEMF(ebp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */

loc_00372609: ;
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, ecx);
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(1.0); /* fld1 */
    fp_top() = fp_top() - MEMF(ebp + 0x18); /* fsub dword ptr [ebp + 0x18] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037261Du); RECOMP_ABI_CALL(0x003720EEu, sub_003720EE); /* call 0x003720EE */

loc_0037261D: ;
    ecx = MEM32(ebp + 0x1C);
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037262Eu); RECOMP_ABI_CALL(0x003720EEu, sub_003720EE); /* call 0x003720EE */

loc_0037262E: ;
    ecx = MEM32(ebp + 0x20);
    MEM32(ecx) = eax;
    goto loc_00372644;

loc_00372635: ;
    eax = MEM32(ebp + 0x1C);
    MEM32(eax) = MEM32(eax) & 0;
    eax = MEM32(ebp + 0x20);
    MEM32(eax) = 0xFFFFD8F0u;

loc_00372644: ;
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00372648
 * Original: 0x00372648 - 0x003726B1 (105 bytes, 37 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00372648(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_00372648: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    fp_push(MEMF(ebp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0037265D; /* je: equal / zero */

loc_0037265B: ;
    fp_top() = -fp_top(); /* fchs */

loc_0037265D: ;
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372666u); RECOMP_ABI_CALL(0x00376F72u, sub_00376F72); /* call 0x00376F72 */

loc_00372666: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2D (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0037269E; /* jge: greater or equal (signed >=) */

loc_0037266B: ;
    PUSH32(esp, esi);
    esi = eax;
    esi = esi << 2;
    fp_push(MEMF(esi + 0x3793A0)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372680u); RECOMP_ABI_CALL(0x0036F3EBu, sub_0036F3EB); /* call 0x0036F3EB */

loc_00372680: ;
    ecx = MEM32(ebp + 0x14);
    fp_push(1.0); /* fld1 */
    MEM32(ecx) = eax;
    fp_top() = fp_top() - MEMF(esi + 0x3792E8); /* fsub dword ptr [esi + 0x3792e8] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372696u); RECOMP_ABI_CALL(0x0036F3EBu, sub_0036F3EB); /* call 0x0036F3EB */

loc_00372696: ;
    ecx = MEM32(ebp + 0x10);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    goto loc_003726AD;

loc_0037269E: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = MEM32(eax) & 0;
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = 0xFFFFD8F0u;

loc_003726AD: ;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003726B1
 * Original: 0x003726B1 - 0x0037272B (122 bytes, 47 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003726B1(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_003726B1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    fp_push(MEMF(ebp + 8)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = fabs(fp_top()); /* fabs */
    fp_top() = fp_top() + MEMF(0x3CA844); /* fadd dword ptr [0x3ca844] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003726C8u); RECOMP_ABI_CALL(0x00376F72u, sub_00376F72); /* call 0x00376F72 */

loc_003726C8: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 3);
    POP32(esp, ecx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    ecx = eax + eax * 2;
    eax = 0xB4;
    if (CMP_EQ(_fa, _fb)) goto loc_003726E7; /* je: equal / zero */

loc_003726DC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x5A (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003726E7; /* jle: less or equal (signed <=) */

loc_003726E1: ;
    edx = eax;
    edx = edx - ecx;
    ecx = edx;

loc_003726E7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003726ED; /* jle: less or equal (signed <=) */

loc_003726EB: ;
    ecx = 0; /* xor self */

loc_003726ED: ;
    eax = eax - ecx;
    fp_push(MEMF(ebp + 8)); /* fld float */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    PUSH32(esp, 3);
    POP32(esp, ecx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = eax;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    ecx = ecx << 1;
    ecx = ecx << 5;
    edx = ecx + 0x379458;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    eax = MEM32(ebp + 0x14);
    ecx = ecx + 0x379478;
    if (TEST_NZ(_fa, _fb)) goto loc_00372722; /* jne: not equal / not zero */

loc_0037271B: ;
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;
    goto loc_00372727;

loc_00372722: ;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;

loc_00372727: ;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0037272B
 * Original: 0x0037272B - 0x0037279A (111 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037272B(void)
{

loc_0037272B: ;
    MEM32(0x37ADAC) = 0x37246F;
    MEM32(0x37ADB0) = 0x3724A9;
    MEM32(0x37ADB4) = 0x372174;
    MEM32(0x37ADB8) = 0x37220A;
    MEM32(0x37ADBC) = 0x372255;
    MEM32(0x37ADC0) = 0x372366;
    MEM32(0x37ADC4) = 0x372591;
    MEM32(0x37ADC8) = 0x372648;
    MEM32(0x37ADCC) = 0x3723F6;
    MEM32(0x37ADD0) = 0x3726B1;
    MEM32(0x37ADD4) = 4;
    esp += 4; return; /* ret */

}

/**
 * sub_0037279A
 * Original: 0x0037279A - 0x003727B9 (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037279A(void)
{

loc_0037279A: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x14) = 0x1000;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x18) = 0x8000;
    MEM32(eax + 0x1C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003727B9
 * Original: 0x003727B9 - 0x0037282E (117 bytes, 43 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003727B9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003727B9: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 8);
    edi = 0x626F5344;
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x003727CCu); RECOMP_ABI_CALL(0x00371C5Cu, sub_00371C5C); /* call 0x00371C5C */

loc_003727CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003727D9; /* je: equal / zero */

loc_003727D0: ;
    MEM32(eax) = MEM32(eax) & 0;
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    goto loc_003727DB;

loc_003727D9: ;
    eax = 0; /* xor self */

loc_003727DB: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x28);
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, edi);
    MEM32(eax) = 0x37A728;
    MEM32(eax + 4) = 0x5CC;
    PUSH32(esp, 0x003727F5u); RECOMP_ABI_CALL(0x00371C5Cu, sub_00371C5C); /* call 0x00371C5C */

loc_003727F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00372804; /* je: equal / zero */

loc_003727F9: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x00372802u); RECOMP_ABI_CALL(0x003776A6u, sub_003776A6); /* call 0x003776A6 */

loc_00372802: ;
    goto loc_00372806;

loc_00372804: ;
    eax = 0; /* xor self */

loc_00372806: ;
    PUSH32(esp, 0x204);
    ecx = eax;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x00372815u); RECOMP_ABI_CALL(0x003776EEu, sub_003776EE); /* call 0x003776EE */

loc_00372815: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0037282B; /* je: equal / zero */

loc_0037281C: ;
    esi = MEM32(esi + 0xC);
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0);
    PUSH32(esp, 0x0037282Bu); RECOMP_ABI_CALL(0x003777F3u, sub_003777F3); /* call 0x003777F3 */

loc_0037282B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0037282E
 * Original: 0x0037282E - 0x003729A3 (373 bytes, 124 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0037282E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037282E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    eax = MEM32(eax + 0x10);
    ebx = MEM32(eax);
    eax = MEM32(ebx + 0x80C);
    eax = eax + MEM32(ebx + 0x804);
    ecx = MEM32(edi + 0x20);
    esi = ebx + eax * 4 + 0x818;
    eax = MEM32(esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax << 5;
    eax = eax + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(ebp + -20) = edi;
    MEM32(ebp + -16) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00372877; /* je: equal / zero */

loc_0037286A: ;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372870u); RECOMP_ABI_CALL(0x00371CC4u, sub_00371CC4); /* call 0x00371CC4 */

loc_00372870: ;
    MEM32(edi + 0x20) = MEM32(edi + 0x20) & 0;
    eax = MEM32(ebp + -16);

loc_00372877: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x626F5344);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372884u); RECOMP_ABI_CALL(0x00371C5Cu, sub_00371C5C); /* call 0x00371C5C */

loc_00372884: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(edi + 0x20) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_00372895; /* jne: not equal / not zero */

loc_0037288B: ;
    eax = 0x8007000Eu;
    goto loc_0037299C;

loc_00372895: ;
    PUSH32(esp, MEM32(esi + 4));
    ecx = MEM32(edi + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003728A0u); RECOMP_ABI_CALL(0x0037781Bu, sub_0037781B); /* call 0x0037781B */

loc_003728A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0037299C; /* jl: less (signed <) */

loc_003728A8: ;
    eax = ebx + 0x818;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -16);
    eax = eax + esi;
    MEM32(ebp + -8) = eax;
    eax = ebp + -28;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003728C2u); RECOMP_ABI_CALL(0x0037796Cu, sub_0037796C); /* call 0x0037796C */

loc_003728C2: ;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -8));
    eax = eax << 3;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    eax = ebp + -28;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003728D9u); RECOMP_ABI_CALL(0x00377999u, sub_00377999); /* call 0x00377999 */

loc_003728D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_003728E9; /* jle: less or equal (signed <=) */

loc_003728DD: ;
    eax = eax & 0xFFFF;
    eax = eax | 0x80070000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_003728E9: ;
    if (TEST_S(_fas, _fbs)) goto loc_0037299C; /* jl: less (signed <) */

loc_003728EF: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00372977; /* jbe: below or equal (unsigned <=) */

loc_003728F8: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -8) = eax;
    edi = esi + 8;

loc_00372901: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(edi + 4));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372914u); RECOMP_ABI_CALL(0x00377999u, sub_00377999); /* call 0x00377999 */

loc_00372914: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00372924; /* jle: less or equal (signed <=) */

loc_00372918: ;
    eax = eax & 0xFFFF;
    eax = eax | 0x80070000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00372924: ;
    if (TEST_S(_fas, _fbs)) goto loc_0037299C; /* jl: less (signed <) */

loc_00372926: ;
    eax = MEM32(edi + 4);
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    eax = MEM32(ebp + -20);
    ecx = MEM32(eax + 0xC);
    ecx = MEM32(ecx + 4);
    MEM32(edi + 0x10) = MEM32(edi + 0x10) + 0xFE836000u;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 8;
    ecx = ecx - 0x17C6818;
    MEM32(edi) = MEM32(edi) + ecx;
    ecx = 0xFFA0BE7Au;
    ecx = ecx - MEM32(ebx + 0x804);
    edi = edi + 0x20;
    ecx = ecx << 2;
    MEM32(edi + -24) = MEM32(edi + -24) + ecx;
    eax = MEM32(eax + 8);
    eax = MEM32(eax + 0x14);
    eax = eax - 0xC000;
    MEM32(edi + -8) = MEM32(edi + -8) + eax;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00372901; /* jb: below (unsigned <) */

loc_00372974: ;
    edi = MEM32(ebp + -20);

loc_00372977: ;
    ecx = MEM32(ebp + -16);
    edi = MEM32(edi + 0x20);
    eax = ecx;
    ecx = ecx >> 2;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = eax;
    PUSH32(esp, 3);
    POP32(esp, eax);
    ecx = ecx & eax;
    ebx = ebx + 0x810;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    MEM32(ebx) = eax;

loc_00372995: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00372995; /* jne: not equal / not zero */

loc_0037299A: ;
    eax = 0; /* xor self */

loc_0037299C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003729A3
 * Original: 0x003729A3 - 0x003729B7 (20 bytes, 6 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003729A3(void)
{

loc_003729A3: ;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = MEM32(ecx + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x003729B4u); RECOMP_ABI_CALL(0x003777A1u, sub_003777A1); /* call 0x003777A1 */

loc_003729B4: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003729B7
 * Original: 0x003729B7 - 0x003729CE (23 bytes, 7 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003729B7(void)
{

loc_003729B7: ;
    eax = ecx + 4;
    ecx = MEM32(ecx + 8);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x003729CBu); RECOMP_ABI_CALL(0x003777A1u, sub_003777A1); /* call 0x003777A1 */

loc_003729CB: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003729CE
 * Original: 0x003729CE - 0x00372A0F (65 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003729CE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003729CE: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003729EA; /* je: equal / zero */

loc_003729D9: ;
    ecx = edi;
    PUSH32(esp, 0x003729E0u); RECOMP_ABI_CALL(0x003776C0u, sub_003776C0); /* call 0x003776C0 */

loc_003729E0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003729E6u); RECOMP_ABI_CALL(0x00371CC4u, sub_00371CC4); /* call 0x00371CC4 */

loc_003729E6: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;

loc_003729EA: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003729FB; /* je: equal / zero */

loc_003729F1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003729F7u); RECOMP_ABI_CALL(0x00371CC4u, sub_00371CC4); /* call 0x00371CC4 */

loc_003729F7: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;

loc_003729FB: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00372A0C; /* je: equal / zero */

loc_00372A02: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00372A08u); RECOMP_ABI_CALL(0x00371CC4u, sub_00371CC4); /* call 0x00371CC4 */

loc_00372A08: ;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;

loc_00372A0C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00372A0F
 * Original: 0x00372A0F - 0x00372AA8 (153 bytes, 56 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00372A0F(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00372A0F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = ecx;
    MEM32(ebp + -4) = edx;
    ebx = MEM32(ebp + 8);
    eax = MEM32(edx + 8);
    eax = MEM32(eax + 0x10);
    esi = MEM32(eax);
    eax = 0; /* xor self */
    esi = esi + 0x800;
    PUSH32(esp, 6);
    POP32(esp, ecx);
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebx + 0x800);
    MEM32(esi) = eax;
    eax = MEM32(ebx + 0x804);
    MEM32(esi + 4) = eax;
    eax = MEM32(ebx + 0x808);
    MEM32(esi + 8) = eax;
    eax = MEM32(ebx + 0x80C);
    MEM32(esi + 0xC) = eax;
    eax = MEM32(ebx + 0x814);
    MEM32(esi + 0x14) = eax;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(edx + 8);
    eax = eax + 0xFFFFF7E8u;
    PUSH32(esp, eax);
    eax = ebx + 0x818;
    PUSH32(esp, eax);
    PUSH32(esp, 0x818);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372A7Eu); RECOMP_ABI_CALL(0x003777F3u, sub_003777F3); /* call 0x003777F3 */

loc_00372A7E: ;
    edi = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372A89u); RECOMP_ABI_CALL(0x0037282Eu, sub_0037282E); /* call 0x0037282E */

loc_00372A89: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00372AA1; /* jl: less (signed <) */

loc_00372A8D: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00372A99; /* je: equal / zero */

loc_00372A94: ;
    edx = MEM32(edi + 0x20);
    MEM32(ecx) = edx;

loc_00372A99: ;
    PUSH32(esp, 6);
    edi = edi + 0x24;
    POP32(esp, ecx);
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */

loc_00372AA1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00372AA8
 * Original: 0x00372AA8 - 0x00372AD2 (42 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00372AA8(void)
{

loc_00372AA8: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    MEM32(ecx + 4) = eax;
    ecx = MEM32(eax + 4);
    MEM32(ecx) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00372AD2
 * Original: 0x00372AD2 - 0x00372B6A (152 bytes, 40 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00372AD2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00372AD2: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0xC));
    edi = esi + 8;
    ecx = edi;
    MEM32(esi) = 0x3E1EBC;
    MEM32(esi + 4) = 1;
    PUSH32(esp, 0x00372AF1u); RECOMP_ABI_CALL(0x0037819Bu, sub_0037819B); /* call 0x0037819B */

loc_00372AF1: ;
    ecx = esi + 0x60;
    MEM32(esi) = 0x3E1FC0;
    MEM32(edi) = 0x3E1FBC;
    MEM32(esi + 0x58) = 0x37A6E4;
    MEM32(esi + 0x5C) = 0x37A6E8;
    PUSH32(esp, 0x00372B13u); RECOMP_ABI_CALL(0x003743FDu, sub_003743FD); /* call 0x003743FD */

loc_00372B13: ;
    PUSH32(esp, 3);
    eax = esi + 0x488;
    POP32(esp, ecx);

loc_00372B1C: ;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    eax = eax + 8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00372B1C; /* jne: not equal / not zero */

loc_00372B27: ;
    eax = esi + 0x4A0;
    MEM32(esi + 0x4A4) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x4A8;
    MEM32(esi + 0x4AC) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x4B0;
    MEM32(esi + 0x4B4) = eax;
    MEM32(eax) = eax;
    eax = MEM32(esi + 0x58);
    MEM32(eax) = 0xC0;
    eax = MEM32(esi + 0x5C);
    MEM32(eax) = 0x40;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00372B6A
 * Original: 0x00372B6A - 0x00372BCD (99 bytes, 34 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00372B6A(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00372B6A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372B81u); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_00372B81: ;
    MEM32(esi + 0x84) = MEM32(esi + 0x84) + 1;
    ebx = esi + 0x488;
    MEM32(ebp + -4) = 3;

loc_00372B95: ;
    edi = MEM32(ebx);
    goto loc_00372BA5;

loc_00372B99: ;
    PUSH32(esp, 0);
    ecx = edi + -76;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372BA3u); RECOMP_ABI_CALL(0x00375DF6u, sub_00375DF6); /* call 0x00375DF6 */

loc_00372BA3: ;
    edi = MEM32(edi);

loc_00372BA5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00372B99; /* jne: not equal / not zero */

loc_00372BA9: ;
    ebx = ebx + 8;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00372B95; /* jne: not equal / not zero */

loc_00372BB1: ;
    MEM32(esi + 0x84) = MEM32(esi + 0x84) - 1;
    ecx = esi + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372BC0u); RECOMP_ABI_CALL(0x003785A8u, sub_003785A8); /* call 0x003785A8 */

loc_00372BC0: ;
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372BC8u); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_00372BC8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00372BCD
 * Original: 0x00372BCD - 0x00372C5E (145 bytes, 55 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00372BCD(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00372BCD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    ecx = ebp + -8;
    MEM32(ebp + -4) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372BE4u); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_00372BE4: ;
    MEM32(esi + 0x84) = MEM32(esi + 0x84) + 1;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx + 0x70);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200010) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 8), 0x200010 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00372BFF; /* je: equal / zero */

loc_00372BFA: ;
    edx = MEM32(esi + 0x5C);
    goto loc_00372C05;

loc_00372BFF: ;
    edx = MEM32(esi + 0x58);
    PUSH32(esp, 0x40);
    POP32(esp, ebx);

loc_00372C05: ;
    edi = ZX8(MEM8(ecx + 0x64));
    eax = MEM32(edx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00372C41; /* ja: above (unsigned >) */

loc_00372C0F: ;
    eax = eax - edi;
    MEM32(edx) = eax;
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(MEM8(ecx + 0x64)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x64), LO8(edx) (8-bit) */
    edi = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_00372C3D; /* jbe: below or equal (unsigned <=) */

loc_00372C1C: ;
    eax = ZX16(LO16(edi));
    eax = esi + eax * 4 + 0x88;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00372C37; /* jne: not equal / not zero */

loc_00372C2B: ;
    ebx = ZX8(LO8(edx));
    MEM16(ecx + ebx * 2 + 0xC) = LO16(edi);
    MEM32(eax) = ecx;
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_00372C37: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x64)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(ecx + 0x64) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00372C1C; /* jb: below (unsigned <) */

loc_00372C3D: ;
    edi = 0; /* xor self */
    goto loc_00372C46;

loc_00372C41: ;
    edi = 0x88780032u;

loc_00372C46: ;
    MEM32(esi + 0x84) = MEM32(esi + 0x84) - 1;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372C55u); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_00372C55: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00372C5E
 * Original: 0x00372C5E - 0x00372CCB (109 bytes, 37 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00372C5E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00372C5E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372C73u); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_00372C73: ;
    edx = MEM32(ebp + 8);
    MEM32(esi + 0x84) = MEM32(esi + 0x84) + 1;
    edi = 0; /* xor self */
    _fa = (uint32_t)(MEM8(edx + 0x64)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x64), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00372CB6; /* jbe: below or equal (unsigned <=) */

loc_00372C85: ;
    eax = ZX16(LO16(edi));
    eax = edx + eax * 2 + 0xC;
    ecx = ZX16(MEM16(eax));
    MEM16(eax) = MEM16(eax) | 0xFFFF;
    MEM32(esi + ecx * 4 + 0x88) = MEM32(esi + ecx * 4 + 0x88) & 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00372CA6; /* jae: above or equal (unsigned >=) */

loc_00372CA1: ;
    eax = MEM32(esi + 0x5C);
    goto loc_00372CA9;

loc_00372CA6: ;
    eax = MEM32(esi + 0x58);

loc_00372CA9: ;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(eax, ZX8(MEM8(edx + 0x64)));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), LO16(eax) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00372C85; /* jb: below (unsigned <) */

loc_00372CB6: ;
    MEM32(esi + 0x84) = MEM32(esi + 0x84) - 1;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372CC5u); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_00372CC5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00372CCB
 * Original: 0x00372CCB - 0x00372D2E (99 bytes, 36 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00372CCB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00372CCB: ;
    eax = MEM32(0x37ACF4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x37AE78);
    PUSH32(esp, edi);
    PUSH32(esp, 0x64);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    MEM32(0x37ACF4) = eax;
    edi = ecx + 8;
    eax = ~eax;
    MEM32(esi) = eax;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x00372CF2u); RECOMP_ABI_CALL(0x00377F0Eu, sub_00377F0E); /* call 0x00377F0E */

loc_00372CF2: ;
    eax = MEM32(0x37AE7C);
    MEM32(0xFE801324u) = eax;
    eax = MEM32(0x37ACF4);
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(0xFE801334u) = eax;
    PUSH32(esp, 0x00372D0Fu); RECOMP_ABI_CALL(0x00377F0Eu, sub_00377F0E); /* call 0x00377F0E */

loc_00372D0F: ;
    goto loc_00372D20;

loc_00372D11: ;
    eax = ebx;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00372D2A; /* je: equal / zero */

loc_00372D18: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(0x3C6D40); PUSH32(esp, 0x00372D20u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00372D20: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x37ACF4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x37ACF4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00372D11; /* jne: not equal / not zero */

loc_00372D2A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00372D2E
 * Original: 0x00372D2E - 0x00372DA7 (121 bytes, 43 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00372D2E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00372D2E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372D3Cu); RECOMP_ABI_CALL(0x00372CCBu, sub_00372CCB); /* call 0x00372CCB */

loc_00372D3C: ;
    ebx = esi + 0x488;
    MEM32(ebp + -4) = 3;

loc_00372D49: ;
    edi = MEM32(ebx);
    goto loc_00372D6D;

loc_00372D4D: ;
    ecx = edi + -76;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00372D55u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00372D55: ;
    MEM32(esi + 0x84) = MEM32(esi + 0x84) + 1;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    edi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00372D66; /* jne: not equal / not zero */

loc_00372D64: ;
    edi = MEM32(ebx);

loc_00372D66: ;
    MEM32(esi + 0x84) = MEM32(esi + 0x84) - 1;

loc_00372D6D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00372D4D; /* jne: not equal / not zero */

loc_00372D71: ;
    ebx = ebx + 8;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00372D49; /* jne: not equal / not zero */

loc_00372D79: ;
    edi = esi + 0x4A0;

loc_00372D7F: ;
    PUSH32(esp, MEM32(edi));
    MEM32(esi + 0x84) = MEM32(esi + 0x84) + 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372D8Du); RECOMP_ABI_CALL(0x0036F300u, sub_0036F300); /* call 0x0036F300 */

loc_00372D8D: ;
    MEM32(esi + 0x84) = MEM32(esi + 0x84) - 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372DA2; /* je: equal / zero */

loc_00372D98: ;
    ecx = eax + -84;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00372DA0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00372DA0: ;
    goto loc_00372D7F;

loc_00372DA2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00372DA7
 * Original: 0x00372DA7 - 0x00372DD3 (44 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00372DA7(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00372DA7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = esi + 0x4B8;
    MEM32(ebp + 8) = eax;
    edx = 0;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx);

loc_00372DC1: ;
    { uint32_t _cmp = eax;
      uint32_t _old = RECOMP_ATOMIC_CAS32(XBOX_PTR(ecx), _cmp, edx);
      _fa = _old; _fb = _cmp;
      _fas = (int32_t)_fa; _fbs = (int32_t)_fb;
      if (_old != _cmp) eax = _old; }  /* cmpxchg */
    if ((_fa != _fb)) goto loc_00372DC1; /* jne: not equal / not zero */

loc_00372DC6: ;
    MEM32(esi + 0x4C0) = MEM32(esi + 0x4C0) | eax;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00372DD3
 * Original: 0x00372DD3 - 0x00372E41 (110 bytes, 37 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00372DD3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00372DD3: ;
    MEM32(0x37A6F0) = MEM32(0x37A6F0) + 1;
    _fa = (uint32_t)(MEM32(0x37A6F0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00372DE9u); RECOMP_ABI_CALL(0x00377FA0u, sub_00377FA0); /* call 0x00377FA0 */

loc_00372DE9: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00372DF5; /* je: equal / zero */

loc_00372DF0: ;
    PUSH32(esp, 0x00372DF5u); RECOMP_ABI_CALL(0x00378984u, sub_00378984); /* call 0x00378984 */

loc_00372DF5: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00372E01; /* je: equal / zero */

loc_00372DFC: ;
    PUSH32(esp, 0x00372E01u); RECOMP_ABI_CALL(0x00378984u, sub_00378984); /* call 0x00378984 */

loc_00372E01: ;
    ecx = edi;
    PUSH32(esp, 0x00372E08u); RECOMP_ABI_CALL(0x003780F5u, sub_003780F5); /* call 0x003780F5 */

loc_00372E08: ;
    ecx = edi;
    MEM32(-24772612) = 1;
    PUSH32(esp, 0x00372E19u); RECOMP_ABI_CALL(0x00377C7Au, sub_00377C7A); /* call 0x00377C7A */

loc_00372E19: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00372E27; /* je: equal / zero */

loc_00372E20: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x00372E27u); RECOMP_ABI_CALL(0x00378A44u, sub_00378A44); /* call 0x00378A44 */

loc_00372E27: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00372E35; /* je: equal / zero */

loc_00372E2E: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x00372E35u); RECOMP_ABI_CALL(0x00378A44u, sub_00378A44); /* call 0x00378A44 */

loc_00372E35: ;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x00372E3Eu); RECOMP_ABI_CALL(0x00377FA0u, sub_00377FA0); /* call 0x00377FA0 */

loc_00372E3E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00372E41
 * Original: 0x00372E41 - 0x00372E91 (80 bytes, 23 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00372E41(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00372E41: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00372E8E; /* jae: above or equal (unsigned >=) */

loc_00372E4C: ;
    _fa = (uint32_t)(MEM32(ecx + 0x84)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x84), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00372E8E; /* jne: not equal / not zero */

loc_00372E55: ;
    PUSH32(esp, esi);
    esi = MEM32(0x37AE88);
    edx = eax;
    edx = edx << 7;
    _fa = (uint32_t)(MEM32(edx + esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + esi + 4), 0x800000 (32-bit) */
    POP32(esp, esi);
    if (TEST_NZ(_fa, _fb)) goto loc_00372E8E; /* jne: not equal / not zero */

loc_00372E6C: ;
    ecx = MEM32(ecx + eax * 4 + 0x88);
    edx = ZX8(MEM8(ecx + 0x64));
    edx = ZX16(MEM16(ecx + edx * 2 + 0xA));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00372E8E; /* jne: not equal / not zero */

loc_00372E80: ;
    eax = ecx + 0x4C;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372E8E; /* je: equal / zero */

loc_00372E87: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00372E8Eu); RECOMP_ABI_CALL(0x00375088u, sub_00375088); /* call 0x00375088 */

loc_00372E8E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00372E91
 * Original: 0x00372E91 - 0x00372EB6 (37 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00372E91(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00372E91: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00372EB0; /* jne: not equal / not zero */

loc_00372E9B: ;
    ecx = ecx + 0x4B0;
    MEM32(eax) = ecx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    ecx = MEM32(eax);
    MEM32(ecx + 4) = eax;

loc_00372EB0: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00372EB6
 * Original: 0x00372EB6 - 0x00372F18 (98 bytes, 34 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00372EB6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00372EB6: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 0x4A8;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    PUSH32(esp, eax);
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, 0x00372ED2u); RECOMP_ABI_CALL(0x0036F300u, sub_0036F300); /* call 0x0036F300 */

loc_00372ED2: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00372EF4; /* jne: not equal / not zero */

loc_00372ED8: ;
    eax = edi + 0x4E8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6D60); PUSH32(esp, 0x00372EE5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00372EE5: ;
    edi = edi + 0x510;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x3C6D5C); PUSH32(esp, 0x00372EF2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00372EF2: ;
    goto loc_00372F12;

loc_00372EF4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00372F12; /* je: equal / zero */

loc_00372EF8: ;
    ecx = edi + 0x510;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(eax + 0x1C));
    edi = edi + 0x4E8;
    PUSH32(esp, MEM32(eax + 0x18));
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x3C6CE8); PUSH32(esp, 0x00372F12u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00372F12: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00372F18
 * Original: 0x00372F18 - 0x00372F9A (130 bytes, 48 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00372F18(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00372F18: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x10;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372F2Fu); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_00372F2F: ;
    edi = ebx + 0x4A8;
    goto loc_00372F6B;

loc_00372F37: ;
    eax = ebp + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6BD8); PUSH32(esp, 0x00372F41u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00372F41: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -4) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00372F73; /* jg: greater (signed >) */

loc_00372F49: ;
    if (CMP_L(_fas, _fbs)) goto loc_00372F53; /* jl: less (signed <) */

loc_00372F4B: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00372F73; /* ja: above (unsigned >) */

loc_00372F53: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0xFFFFFFFDu;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372F5Du); RECOMP_ABI_CALL(0x0036F300u, sub_0036F300); /* call 0x0036F300 */

loc_00372F5D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x14));
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, MEM32(esi + 0x10));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00372F6Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00372F6B: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00372F37; /* jne: not equal / not zero */

loc_00372F71: ;
    goto loc_00372F8D;

loc_00372F73: ;
    eax = ebx + 0x510;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x1C));
    ebx = ebx + 0x4E8;
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x3C6CE8); PUSH32(esp, 0x00372F8Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00372F8D: ;
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372F95u); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_00372F95: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00372F9A
 * Original: 0x00372F9A - 0x0037302C (146 bytes, 55 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00372F9A(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00372F9A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x10;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    PUSH32(esp, esi);
    eax = ebp + -8;
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -16;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372FB9u); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_00372FB9: ;
    edi = esi + 0x4B0;
    goto loc_00372FCB;

loc_00372FC1: ;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372FCBu); RECOMP_ABI_CALL(0x00372AA8u, sub_00372AA8); /* call 0x00372AA8 */

loc_00372FCB: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00372FC1; /* jne: not equal / not zero */

loc_00372FD1: ;
    goto loc_0037300F;

loc_00372FD3: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00372FEB; /* je: equal / zero */

loc_00372FDA: ;
    MEM32(esi) = edi;
    eax = MEM32(edi + 4);
    MEM32(esi + 4) = eax;
    MEM32(eax) = esi;
    eax = MEM32(esi);
    MEM32(eax + 4) = esi;
    goto loc_00372FF1;

loc_00372FEB: ;
    eax = eax & 0xFFFFFFFDu;
    MEM32(esi + 8) = eax;

loc_00372FF1: ;
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372FF9u); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_00372FF9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x14));
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, MEM32(esi + 0x10));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00373007u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00373007: ;
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037300Fu); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_0037300F: ;
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373017u); RECOMP_ABI_CALL(0x0036F300u, sub_0036F300); /* call 0x0036F300 */

loc_00373017: ;
    esi = eax;
    eax = ebp + -8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00372FD3; /* jne: not equal / not zero */

loc_00373020: ;
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373028u); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_00373028: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0037302C
 * Original: 0x0037302C - 0x00373063 (55 bytes, 19 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0037302C(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037302C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037303Du); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_0037303D: ;
    eax = MEM32(0xFE820010u);
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0037303D; /* jb: below (unsigned <) */

loc_0037304A: ;
    eax = MEM32(ebp + 8);
    eax = eax & 7;
    ecx = ebp + -8;
    MEM32(0xFE820280u) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037305Du); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_0037305D: ;
    eax = 0; /* xor self */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00373063
 * Original: 0x00373063 - 0x003730A8 (69 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00373063(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00373063: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373077u); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_00373077: ;
    eax = MEM32(0xFE820010u);
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00373077; /* jb: below (unsigned <) */

loc_00373084: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ebp + 8);
    ecx = ZX8(MEM8(ecx + eax + 0x10));
    ecx = ecx & 7;
    MEM32(eax * 4 + -25034240) = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003730A1u); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_003730A1: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003730A8
 * Original: 0x003730A8 - 0x003730CF (39 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003730A8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003730A8: ;
    edx = MEM32(esp + 4);
    edx = ZX8(MEM8(edx + 0x64));
    ecx = ecx + 0x53C;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    edx = edx + esi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1D (32-bit) */
    POP32(esp, esi);
    if (CMP_BE(_fa, _fb)) goto loc_003730CA; /* jbe: below or equal (unsigned <=) */

loc_003730C3: ;
    eax = 0x88780032u;
    goto loc_003730CC;

loc_003730CA: ;
    MEM32(ecx) = edx;

loc_003730CC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003730CF
 * Original: 0x003730CF - 0x003730E0 (17 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003730CF(void)
{

loc_003730CF: ;
    eax = MEM32(esp + 4);
    eax = ZX8(MEM8(eax + 0x64));
    MEM32(ecx + 0x53C) = MEM32(ecx + 0x53C) - eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003730E0
 * Original: 0x003730E0 - 0x003730EC (12 bytes, 3 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003730E0(void)
{

loc_003730E0: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x003730E9u); RECOMP_ABI_CALL(0x00372F18u, sub_00372F18); /* call 0x00372F18 */

loc_003730E9: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003730EC
 * Original: 0x003730EC - 0x00373108 (28 bytes, 5 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003730EC(void)
{

loc_003730EC: ;
    ecx = MEM32(esp + 4);
    ecx = ecx + 0xFFFFFAD4u;
    MEM32(0x37A700) = 1;
    PUSH32(esp, 0x00373105u); RECOMP_ABI_CALL(0x00372B6Au, sub_00372B6A); /* call 0x00372B6A */

loc_00373105: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00373108
 * Original: 0x00373108 - 0x003731B3 (171 bytes, 53 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00373108(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00373108: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi) = 0x3E1FC0;
    MEM32(esi + 8) = 0x3E1FBC;
    PUSH32(esp, 0x00373120u); RECOMP_ABI_CALL(0x00372B6Au, sub_00372B6A); /* call 0x00372B6A */

loc_00373120: ;
    _fa = (uint32_t)(MEM32(0x37ADD8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37ADD8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037313B; /* je: equal / zero */

loc_00373129: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37ADD8);
    { uint32_t _icall_target = MEM32(0x3C6D34); PUSH32(esp, 0x00373134u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00373134: ;
    MEM32(0x37ADD8) = MEM32(0x37ADD8) & 0;

loc_0037313B: ;
    eax = esi + 0x4E8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6D60); PUSH32(esp, 0x00373148u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00373148: ;
    ebp = MEM32(0x3C6D5C);
    edi = esi + 0x4C8;
    _fa = (uint32_t)(MEM16(edi)) & 0xFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi), 0x13 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00373160; /* jne: not equal / not zero */

loc_0037315A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = ebp; PUSH32(esp, 0x0037315Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0037315D: ;
    MEM16(edi) = ~MEM16(edi);

loc_00373160: ;
    ebx = esi + 0x510;
    _fa = (uint32_t)(MEM16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx), 0x13 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00373178; /* jne: not equal / not zero */

loc_0037316C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = ebp; PUSH32(esp, 0x0037316Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0037316F: ;
    SET_LO16(eax, MEM16(edi));
    SET_LO16(eax, ~LO16(eax));
    MEM16(ebx) = LO16(eax);

loc_00373178: ;
    edi = esi + 0x52C;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037318E; /* je: equal / zero */

loc_00373184: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x3C6CD0); PUSH32(esp, 0x0037318Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0037318C: ;
    MEM32(edi) = ebx;

loc_0037318E: ;
    eax = MEM32(esi + 0x58);
    MEM32(eax) = ebx;
    eax = MEM32(esi + 0x5C);
    ecx = esi + 0x60;
    MEM32(eax) = ebx;
    PUSH32(esp, 0x003731A0u); RECOMP_ABI_CALL(0x0037441Du, sub_0037441D); /* call 0x0037441D */

loc_003731A0: ;
    ecx = esi + 8;
    PUSH32(esp, 0x003731A8u); RECOMP_ABI_CALL(0x003781BEu, sub_003781BE); /* call 0x003781BE */

loc_003731A8: ;
    POP32(esp, edi);
    MEM32(esi) = 0x3E1EBC;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003731B3
 * Original: 0x003731B3 - 0x003731F5 (66 bytes, 25 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003731B3(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003731B3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x3C6D64);
    esi = ecx;
    ebp = 0x372DA7;
    ebx = 0x37ADD8;
    goto loc_003731E2;

loc_003731CB: ;
    _fa = (uint32_t)(MEM8(esi + 0x4C0)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x4C0), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003731DB; /* je: equal / zero */

loc_003731D4: ;
    ecx = esi;
    PUSH32(esp, 0x003731DBu); RECOMP_ABI_CALL(0x00372D2Eu, sub_00372D2E); /* call 0x00372D2E */

loc_003731DB: ;
    MEM32(esi + 0x4C0) = MEM32(esi + 0x4C0) & 0;

loc_003731E2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x003731E7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003731E7: ;
    _fa = (uint32_t)(MEM8(esi + 0x4C0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x4C0), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003731CB; /* jne: not equal / not zero */

loc_003731F0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003731F5
 * Original: 0x003731F5 - 0x0037320B (22 bytes, 5 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003731F5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003731F5: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0x8000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00373208; /* jne: not equal / not zero */

loc_003731FF: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x00373208u); RECOMP_ABI_CALL(0x00372E41u, sub_00372E41); /* call 0x00372E41 */

loc_00373208: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0037320B
 * Original: 0x0037320B - 0x0037324F (68 bytes, 28 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0037320B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037320B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373220u); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_00373220: ;
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0037323D; /* je: equal / zero */

loc_0037322A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00373236; /* je: equal / zero */

loc_0037322F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373234u); RECOMP_ABI_CALL(0x0036F300u, sub_0036F300); /* call 0x0036F300 */

loc_00373234: ;
    goto loc_0037323D;

loc_00373236: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037323Du); RECOMP_ABI_CALL(0x00372EB6u, sub_00372EB6); /* call 0x00372EB6 */

loc_0037323D: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0xFFFFFFFDu;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373249u); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_00373249: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037324F
 * Original: 0x0037324F - 0x0037325B (12 bytes, 3 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037324F(void)
{

loc_0037324F: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x00373258u); RECOMP_ABI_CALL(0x003731B3u, sub_003731B3); /* call 0x003731B3 */

loc_00373258: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0037325B
 * Original: 0x0037325B - 0x00373276 (27 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037325B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037325B: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00373263u); RECOMP_ABI_CALL(0x00373108u, sub_00373108); /* call 0x00373108 */

loc_00373263: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00373270; /* je: equal / zero */

loc_0037326A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00373270u); RECOMP_ABI_CALL(0x00371CC4u, sub_00371CC4); /* call 0x00371CC4 */

loc_00373270: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00373276
 * Original: 0x00373276 - 0x003732BD (71 bytes, 25 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00373276(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00373276: ;
    eax = MEM32(0xFE801100u);
    PUSH32(esp, esi);
    edx = 0xF00;
    PUSH32(esp, edi);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    edi = ecx;
    ecx = MEM32(-25160960);
    esi = MEM32(-25160956);
    if (CMP_NE(_fa, _fb)) goto loc_003732A5; /* jne: not equal / not zero */

loc_00373296: ;
    ecx = ecx & 0xFFFF;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x003732A5u); RECOMP_ABI_CALL(0x003731F5u, sub_003731F5); /* call 0x003731F5 */

loc_003732A5: ;
    esi = edi + 8;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x003732B1u); RECOMP_ABI_CALL(0x00377F45u, sub_00377F45); /* call 0x00377F45 */

loc_003732B1: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x003732BAu); RECOMP_ABI_CALL(0x00377F45u, sub_00377F45); /* call 0x00377F45 */

loc_003732BA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003732BD
 * Original: 0x003732BD - 0x00373393 (214 bytes, 81 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003732BD(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003732BD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x18);
    _cf = 0; /* logical op clears CF */
    eax = eax | MEM32(esi + 0x1C);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(ebp + -4) = edi;
    if ((eax == 0)) goto loc_00373386; /* je: equal / zero */

loc_003732D9: ;
    eax = ebp + -12;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6BD8); PUSH32(esp, 0x003732E3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003732E3: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    ecx = MEM32(esi + 0x18);
    if (CMP_G(_fas & _fbs, 0)) goto loc_00373303; /* jg: greater (signed >) */

loc_003732ED: ;
    if (TEST_S(_fas, _fbs)) goto loc_003732F3; /* jl: less (signed <) */

loc_003732EF: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_A(_fa & _fb, 0)) goto loc_00373303; /* ja: above (unsigned >) */

loc_003732F3: ;
    edx = MEM32(ebp + -12);
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    ecx = MEM32(ebp + -8);
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(eax) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0x1C) = ecx;

loc_00373303: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00373386; /* jl: less (signed <) */

loc_0037330B: ;
    if (CMP_G(_fas, _fbs)) goto loc_00373315; /* jg: greater (signed >) */

loc_0037330D: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00373386; /* jbe: below or equal (unsigned <=) */

loc_00373315: ;
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 8), 2 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ebp + 8) = 1;
    if (TEST_Z(_fa, _fb)) goto loc_0037332A; /* je: equal / zero */

loc_00373322: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037332Au); RECOMP_ABI_CALL(0x0037320Bu, sub_0037320B); /* call 0x0037320B */

loc_0037332A: ;
    ecx = edi + 0x4A8;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00373357; /* je: equal / zero */

loc_00373336: ;
    edx = MEM32(esi + 0x18);
    edi = MEM32(esi + 0x1C);
    PUSH32(esp, ebx);

loc_0037333D: ;
    ebx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00373353; /* jg: greater (signed >) */

loc_00373344: ;
    if (CMP_L(_fas, _fbs)) goto loc_0037334D; /* jl: less (signed <) */

loc_00373346: ;
    ebx = MEM32(eax + 0x18);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00373353; /* ja: above (unsigned >) */

loc_0037334D: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0037333D; /* jne: not equal / not zero */

loc_00373353: ;
    edi = MEM32(ebp + -4);
    POP32(esp, ebx);

loc_00373357: ;
    MEM32(esi) = eax;
    eax = MEM32(eax + 4);
    MEM32(esi + 4) = eax;
    MEM32(eax) = esi;
    eax = MEM32(esi);
    MEM32(eax + 4) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0037338A; /* jne: not equal / not zero */

loc_0037336A: ;
    eax = edi + 0x510;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x1C));
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x4E8)) >> 32) & 1);
    edi = edi + 0x4E8;
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x3C6CE8); PUSH32(esp, 0x00373384u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00373384: ;
    goto loc_0037338A;

loc_00373386: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;

loc_0037338A: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00373393
 * Original: 0x00373393 - 0x003733E8 (85 bytes, 30 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00373393(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00373393: ;
    PUSH32(esp, ebx);
    ebx = MEM32(-25161728);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebx;
    edi = edi & 1;
    esi = ecx;
    if ((edi == 0)) goto loc_003733E2; /* je: equal / zero */

loc_003733A5: ;
    MEM32(-25161728) = ebx;
    MEM32(esi + 0x4B8) = MEM32(esi + 0x4B8) | ebx;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003733BB; /* je: equal / zero */

loc_003733B6: ;
    PUSH32(esp, 0x003733BBu); RECOMP_ABI_CALL(0x00373276u, sub_00373276); /* call 0x00373276 */

loc_003733BB: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003733C7; /* je: equal / zero */

loc_003733C0: ;
    ecx = esi;
    PUSH32(esp, 0x003733C7u); RECOMP_ABI_CALL(0x00372DD3u, sub_00372DD3); /* call 0x00372DD3 */

loc_003733C7: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003733DD; /* je: equal / zero */

loc_003733CC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = esi + 0x4C8;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x3C6D20); PUSH32(esp, 0x003733DDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003733DD: ;
    eax = MEM32(0xFE801000u);

loc_003733E2: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003733E8
 * Original: 0x003733E8 - 0x0037342F (71 bytes, 29 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003733E8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003733E8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003733FDu); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_003733FD: ;
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 8), 1 (8-bit) */
    ecx = edi;
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00373410; /* je: equal / zero */

loc_00373409: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037340Eu); RECOMP_ABI_CALL(0x00372E91u, sub_00372E91); /* call 0x00372E91 */

loc_0037340E: ;
    goto loc_00373415;

loc_00373410: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373415u); RECOMP_ABI_CALL(0x003732BDu, sub_003732BD); /* call 0x003732BD */

loc_00373415: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0037341F; /* je: equal / zero */

loc_0037341B: ;
    MEM32(esi + 8) = MEM32(esi + 8) | 2;

loc_0037341F: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373427u); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_00373427: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037342F
 * Original: 0x0037342F - 0x0037343B (12 bytes, 3 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037342F(void)
{

loc_0037342F: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x00373438u); RECOMP_ABI_CALL(0x00373393u, sub_00373393); /* call 0x00373393 */

loc_00373438: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0037343B
 * Original: 0x0037343B - 0x0037352D (242 bytes, 83 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037343B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037343B: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebp = esi + 8;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x0037344Cu); RECOMP_ABI_CALL(0x00378625u, sub_00378625); /* call 0x00378625 */

loc_0037344C: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0037350F; /* jl: less (signed <) */

loc_00373456: ;
    PUSH32(esp, 0x7FF);
    ecx = esi + 0x60;
    PUSH32(esp, 0x00373463u); RECOMP_ABI_CALL(0x0037443Fu, sub_0037443F); /* call 0x0037443F */

loc_00373463: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0037350F; /* jl: less (signed <) */

loc_0037346D: ;
    ebx = MEM32(0x3C6CFC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x37324F);
    eax = esi + 0x4C8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x00373482u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00373482: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = esi + 0x4E8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6CF8); PUSH32(esp, 0x00373491u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00373491: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x3730E0);
    eax = esi + 0x510;
    PUSH32(esp, eax);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x003734A0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003734A0: ;
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    { uint32_t _icall_target = MEM32(0x3C6D30); PUSH32(esp, 0x003734ADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003734AD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x18));
    ebx = 0x37ADD8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x37342F);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x3C6D2C); PUSH32(esp, 0x003734C8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003734C8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x3C6D28); PUSH32(esp, 0x003734CFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003734CF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003734D8; /* jne: not equal / not zero */

loc_003734D3: ;
    edi = 0x80004005u;

loc_003734D8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0037350F; /* jl: less (signed <) */

loc_003734DC: ;
    PUSH32(esp, 1);
    ecx = ebp;
    MEM32(-25161728) = 0xFFFFFFFFu;
    PUSH32(esp, 0x003734EFu); RECOMP_ABI_CALL(0x00377ED7u, sub_00377ED7); /* call 0x00377ED7 */

loc_003734EF: ;
    eax = esi + 0x52C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    MEM32(eax) = 0x3730EC;
    { uint32_t _icall_target = MEM32(0x3C6CD0); PUSH32(esp, 0x00373504u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00373504: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0037350Du); RECOMP_ABI_CALL(0x0037302Cu, sub_0037302C); /* call 0x0037302C */

loc_0037350D: ;
    edi = eax;

loc_0037350F: ;
    ebx = 0; /* xor self */

loc_00373511: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00373525; /* jl: less (signed <) */

loc_00373515: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0037351Du); RECOMP_ABI_CALL(0x00373063u, sub_00373063); /* call 0x00373063 */

loc_0037351D: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x20 (32-bit) */
    edi = eax;
    if (CMP_B(_fa, _fb)) goto loc_00373511; /* jb: below (unsigned <) */

loc_00373525: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0037352D
 * Original: 0x0037352D - 0x0037354B (30 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037352D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037352D: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0037353B; /* je: equal / zero */

loc_00373538: ;
    MEM32(eax) = MEM32(eax) & 0;

loc_0037353B: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00373548; /* je: equal / zero */

loc_00373542: ;
    MEM32(eax) = 0x8000000Au;

loc_00373548: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037354B
 * Original: 0x0037354B - 0x0037358F (68 bytes, 28 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0037354B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037354B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0037355D; /* je: equal / zero */

loc_00373558: ;
    edx = MEM32(ebp + 0xC);
    MEM32(ecx) = edx;

loc_0037355D: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    edx = MEM32(ebp + 0x18);
    if (TEST_Z(_fa, _fb)) goto loc_00373569; /* je: equal / zero */

loc_00373567: ;
    MEM32(ecx) = edx;

loc_00373569: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037357B; /* je: equal / zero */

loc_0037356F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(eax + 0x10));
    PUSH32(esp, MEM32(ebp + 0x14));
    { uint32_t _icall_target = MEM32(ebp + 0x10); PUSH32(esp, 0x00373579u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00373579: ;
    goto loc_0037358B;

loc_0037357B: ;
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0037358B; /* je: equal / zero */

loc_00373582: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6C90); PUSH32(esp, 0x0037358Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0037358B: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0037358F
 * Original: 0x0037358F - 0x003735AA (27 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037358F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037358F: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003735A4; /* je: equal / zero */

loc_0037359A: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x003735A4u); RECOMP_ABI_CALL(0x00372AA8u, sub_00372AA8); /* call 0x00372AA8 */

loc_003735A4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003735AA
 * Original: 0x003735AA - 0x003735C8 (30 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003735AA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003735AA: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx);
    eax = eax << 4;
    eax = ZX8(MEM8(eax + ecx + 0xF));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003735C2; /* je: equal / zero */

loc_003735BB: ;
    eax = eax - 0x7F;
    eax = 0; /* xor self */
    goto loc_003735C5;

loc_003735C2: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003735C5: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003735C8
 * Original: 0x003735C8 - 0x003735E1 (25 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003735C8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003735C8: ;
    ecx = MEM32(ecx + 0x70);
    eax = MEM32(esp + 4);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ecx + 0x14));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ecx + 0x14)); }
    _fa = (uint32_t)(MEM16(ecx + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0x69) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0xC), 0x69 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003735DE; /* jne: not equal / not zero */

loc_003735DB: ;
    eax = eax << 6;

loc_003735DE: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003735E1
 * Original: 0x003735E1 - 0x00373603 (34 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003735E1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003735E1: ;
    ecx = MEM32(ecx + 0x70);
    _fa = (uint32_t)(MEM16(ecx + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0x69) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0xC), 0x69 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003735F8; /* jne: not equal / not zero */

loc_003735EB: ;
    eax = MEM32(esp + 4);
    eax = eax >> 6;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ecx + 0x14));
    goto loc_00373600;

loc_003735F8: ;
    eax = MEM32(ecx + 0x14);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 4));

loc_00373600: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00373603
 * Original: 0x00373603 - 0x0037361B (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00373603(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00373603: ;
    eax = ecx + 0xA8;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00373617; /* jne: not equal / not zero */

loc_0037360D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ecx + 0x194)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x194), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037361A; /* je: equal / zero */

loc_00373617: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0037361A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0037361B
 * Original: 0x0037361B - 0x003736C2 (167 bytes, 54 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037361B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037361B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    esi = ecx;
    PUSH32(esp, 0x00373626u); RECOMP_ABI_CALL(0x00374AA7u, sub_00374AA7); /* call 0x00374AA7 */

loc_00373626: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_003736BF; /* jl: less (signed <) */

loc_00373630: ;
    eax = MEM32(esi + 0x80);
    eax = MEM32(eax + 0xBC);
    eax = eax + eax * 2;
    PUSH32(esp, 1);
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x61645344);
    PUSH32(esp, 0x0037364Fu); RECOMP_ABI_CALL(0x00371C5Cu, sub_00371C5C); /* call 0x00371C5C */

loc_0037364F: ;
    MEM32(esi + 0xC0) = eax;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FF8FFF2;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    eax = eax + 0x8007000Eu;
    if (((int32_t)eax < 0)) goto loc_003736BF; /* js: sign (negative) */

loc_00373665: ;
    ecx = MEM32(esi + 0x80);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ecx + 0xBC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xBC), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003736A9; /* jbe: below or equal (unsigned <=) */

loc_00373676: ;
    edx = esi + 0xB0;
    PUSH32(esp, ebp);

loc_0037367D: ;
    ecx = MEM32(esi + 0xC0);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebx)) >> 32) & 1);
    ecx = ecx + ebx;
    MEM32(ecx) = edx;
    ebp = MEM32(edx + 4);
    MEM32(ecx + 4) = ebp;
    MEM32(edx + 4) = ecx;
    ebp = MEM32(ecx + 4);
    MEM32(ebp) = ecx;
    ecx = MEM32(esi + 0x80);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x30)) >> 32) & 1);
    ebx = ebx + 0x30;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xBC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + 0xBC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0037367D; /* jb: below (unsigned <) */

loc_003736A8: ;
    POP32(esp, ebp);

loc_003736A9: ;
    ecx = MEM32(esi + 0x80);
    _fa = (uint32_t)(MEM8(ecx + 0xA)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0xA), 4 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_003736BF; /* jne: not equal / not zero */

loc_003736B6: ;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_003759A7(); return; /* tail jmp 0x003759A7 */

loc_003736BF: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003736C2
 * Original: 0x003736C2 - 0x00373734 (114 bytes, 46 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003736C2(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003736C2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    ecx = ebp + -8;
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003736D8u); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_003736D8: ;
    SET_LO8(eax, MEM8(esi + 0x12));
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00373724; /* jne: not equal / not zero */

loc_003736E1: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 8), 6 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0037370A; /* je: equal / zero */

loc_003736E7: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 8), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003736FB; /* je: equal / zero */

loc_003736ED: ;
    SET_LO16(eax, MEM16(esi + 0x12));
    SET_LO16(eax, LO16(eax) | 0x1000);
    MEM16(esi + 0x12) = LO16(eax);
    goto loc_00373701;

loc_003736FB: ;
    MEM16(esi + 0x12) = MEM16(esi + 0x12) & 0xEFFF;

loc_00373701: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373708u); RECOMP_ABI_CALL(0x003752C9u, sub_003752C9); /* call 0x003752C9 */

loc_00373708: ;
    goto loc_00373712;

loc_0037370A: ;
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373712u); RECOMP_ABI_CALL(0x00375DF6u, sub_00375DF6); /* call 0x00375DF6 */

loc_00373712: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 8), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00373724; /* jne: not equal / not zero */

loc_00373718: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00373724u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00373724: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037372Cu); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_0037372C: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00373734
 * Original: 0x00373734 - 0x0037378E (90 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00373734(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00373734: ;
    edx = ZX16(MEM16(ecx + 0x12));
    eax = ecx + 0xB0;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), eax (32-bit) */
    eax = MEM32(esp + 4);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 0x20 (8-bit) */
    MEM32(eax) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00373754; /* je: equal / zero */

loc_00373750: ;
    MEM8(eax + 2) = MEM8(eax + 2) | 8;

loc_00373754: ;
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037377A; /* jne: not equal / not zero */

loc_0037375E: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x444) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(edx), 0x444 (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00373785; /* je: equal / zero */

loc_00373765: ;
    MEM8(eax + 2) = MEM8(eax + 2) | 2;
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 4 (8-bit) */
    ecx = MEM32(eax);
    if (TEST_Z(_fa, _fb)) goto loc_00373789; /* je: equal / zero */

loc_00373770: ;
    ecx = ecx | 0x40000;
    MEM32(eax) = ecx;
    goto loc_00373789;

loc_0037377A: ;
    ecx = 0x8001;
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00373789; /* jne: not equal / not zero */

loc_00373785: ;
    MEM8(eax + 2) = MEM8(eax + 2) | 1;

loc_00373789: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037378E
 * Original: 0x0037378E - 0x003737BB (45 bytes, 20 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037378E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037378E: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0037379Au); RECOMP_ABI_CALL(0x00375DF6u, sub_00375DF6); /* call 0x00375DF6 */

loc_0037379A: ;
    eax = MEM32(esi + 0x80);
    MEM32(esi + 0x190) = edi;
    _fa = (uint32_t)(MEM8(eax + 0xA)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xA), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003737B8; /* je: equal / zero */

loc_003737AC: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x003737B8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003737B8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003737BB
 * Original: 0x003737BB - 0x0037391E (355 bytes, 117 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003737BB(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003737BB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x24;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    eax = eax << 4;
    PUSH32(esp, edi);
    edi = ecx;
    ebx = eax + edi + 0x88;
    eax = MEM32(esi + 8);
    MEM32(ebp + -12) = eax;
    eax = MEM32(esi + 0xC);
    MEM32(ebp + -4) = eax;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003737F3; /* je: equal / zero */

loc_003737ED: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) + eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) - eax;

loc_003737F3: ;
    PUSH32(esp, 0xFFFF);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003737FFu); RECOMP_ABI_CALL(0x003735E1u, sub_003735E1); /* call 0x003735E1 */

loc_003737FF: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    MEM32(ebp + -28) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00373908; /* jbe: below or equal (unsigned <=) */

loc_0037380C: ;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 8), 0x10 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00373900; /* jae: above or equal (unsigned >=) */

loc_00373816: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebp + -8);
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -28) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00373826; /* jb: below (unsigned <) */

loc_00373823: ;
    ecx = MEM32(ebp + -28);

loc_00373826: ;
    edx = ebp + -24;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -12);
    ecx = ecx + eax;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373838u); RECOMP_ABI_CALL(0x00378002u, sub_00378002); /* call 0x00378002 */

loc_00373838: ;
    PUSH32(esp, MEM32(ebp + -24));
    ecx = edi;
    MEM32(ebp + -16) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373845u); RECOMP_ABI_CALL(0x003735C8u, sub_003735C8); /* call 0x003735C8 */

loc_00373845: ;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(ebp + -32) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373850u); RECOMP_ABI_CALL(0x003735E1u, sub_003735E1); /* call 0x003735E1 */

loc_00373850: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 0 (32-bit) */
    MEM32(ebp + -24) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00373900; /* je: equal / zero */

loc_0037385D: ;
    eax = MEM32(edi + 0x80);
    eax = ZX8(MEM8(eax + 0xF));
    eax = eax << 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 8);
    POP32(esp, ecx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(ebp + -36) = eax;
    eax = ZX8(MEM8(edi + 0x64));
    ecx = eax + eax * 2;

loc_00373879: ;
    edx = MEM32(-25034736);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00373879; /* jb: below (unsigned <) */

loc_00373886: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_003738E8; /* jbe: below or equal (unsigned <=) */

loc_0037388E: ;
    eax = edi + 0xC;

loc_00373891: ;
    ecx = ZX16(MEM16(eax));
    edx = MEM32(ebp + 8);
    esi = MEM32(edi + 0x84);
    ecx = edx + ecx * 2;
    ecx = ecx << 4;
    ecx = ecx + MEM32(ebx + 8);
    esi = esi & 0xFFFF0000u;
    esi = esi | MEM32(ebp + -32);
    edx = ecx;
    ecx = ecx & 0x3FFFC0;
    MEM32(-25034352) = ecx;
    ecx = MEM32(ebp + -16);
    edx = edx & 0x3F;
    MEM32(edx * 8 + -25033216) = ecx;
    ecx = MEM32(ebp + -36);
    MEM32(ebp + -16) = MEM32(ebp + -16) + ecx;
    MEM32(ebp + -20) = MEM32(ebp + -20) + 1;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx * 8 + -25033212) = esi;
    ecx = ZX8(MEM8(edi + 0x64));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00373891; /* jb: below (unsigned <) */

loc_003738E5: ;
    esi = MEM32(ebp + 0xC);

loc_003738E8: ;
    eax = MEM32(ebp + -24);
    MEM32(ebp + -8) = MEM32(ebp + -8) + eax;
    MEM32(ebx + 0xC) = MEM32(ebx + 0xC) + eax;
    eax = MEM32(ebp + -8);
    MEM32(ebx + 8) = MEM32(ebx + 8) + 1;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0037380C; /* jb: below (unsigned <) */

loc_00373900: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00373914; /* jb: below (unsigned <) */

loc_00373908: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037390Fu); RECOMP_ABI_CALL(0x00372AA8u, sub_00372AA8); /* call 0x00372AA8 */

loc_0037390F: ;
    eax = MEM32(ebp + -8);
    goto loc_00373917;

loc_00373914: ;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) + eax;

loc_00373917: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0037391E
 * Original: 0x0037391E - 0x003739F3 (213 bytes, 75 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0037391E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037391E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = ZX8(MEM8(esi + 0x64));
    ecx = eax + eax;

loc_0037392C: ;
    edx = MEM32(-25034736);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0037392C; /* jb: below (unsigned <) */

loc_00373939: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edx = MEM32(ebp + 8);
    PUSH32(esp, edi);
    if (CMP_BE(_fa & _fb, 0)) goto loc_00373996; /* jbe: below or equal (unsigned <=) */

loc_00373945: ;
    eax = edx + 9;
    eax = eax << 4;
    eax = eax + esi;
    MEM32(ebp + 8) = eax;
    edi = esi + 0xC;
    PUSH32(esp, ebx);

loc_00373954: ;
    eax = ZX16(MEM16(edi));
    ebx = MEM32(ebp + 8);
    ebx = MEM32(ebx);
    ecx = edx + eax * 2;
    ecx = ecx << 0xC;
    ecx = ecx & 0xFFFF00;
    ebx = ebx & 0xFF;
    ecx = ecx | ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    MEM32(0xFE8202F8u) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_00373981; /* jne: not equal / not zero */

loc_00373979: ;
    MEM32(-25033952) = ecx;
    goto loc_00373987;

loc_00373981: ;
    MEM32(-25033892) = ecx;

loc_00373987: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ZX8(MEM8(esi + 0x64));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00373954; /* jb: below (unsigned <) */

loc_00373995: ;
    POP32(esp, ebx);

loc_00373996: ;
    ecx = MEM32(esi + 0x68);
    eax = edx;
    eax = eax << 4;
    MEM8(ecx + eax + 0xF) = 0x80;
    eax = esi + 0x194;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    edi = ecx + 1;
    MEM32(eax) = edi;
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_003739BB; /* jne: not equal / not zero */

loc_003739B5: ;
    MEM32(esi + 0x190) = edx;

loc_003739BB: ;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(MEM8(eax + 0xB)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xB), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003739D6; /* jne: not equal / not zero */

loc_003739C7: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x003739D6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003739D6: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003739DDu); RECOMP_ABI_CALL(0x003760F4u, sub_003760F4); /* call 0x003760F4 */

loc_003739DD: ;
    eax = ZX16(MEM16(esi + 0x12));
    eax = eax & 0xFFFFFBFFu;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003739EEu); RECOMP_ABI_CALL(0x003753A1u, sub_003753A1); /* call 0x003753A1 */

loc_003739EE: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003739F3
 * Original: 0x003739F3 - 0x00373A3F (76 bytes, 25 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003739F3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003739F3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000000Au) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8000000Au (32-bit) */
    PUSH32(esp, edi);
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00373A0A; /* je: equal / zero */

loc_00373A06: ;
    MEM32(esp + 0x14) = eax;

loc_00373A0A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esi + 0xC));
    edi = esi + 8;
    PUSH32(esp, MEM32(edi));
    { uint32_t _icall_target = MEM32(0x3C6D68); PUSH32(esp, 0x00373A1Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00373A1A: ;
    PUSH32(esp, MEM32(esp + 0x14));
    eax = MEM32(ebx + 0x80);
    PUSH32(esp, MEM32(eax + 0xC4));
    PUSH32(esp, MEM32(eax + 0xC0));
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, 0x00373A39u); RECOMP_ABI_CALL(0x0037354Bu, sub_0037354B); /* call 0x0037354B */

loc_00373A39: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00373A3F
 * Original: 0x00373A3F - 0x00373A7F (64 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00373A3F(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00373A3F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    esi = ecx;
    PUSH32(esp, 0x00373A4Bu); RECOMP_ABI_CALL(0x00375DF6u, sub_00375DF6); /* call 0x00375DF6 */

loc_00373A4B: ;
    ebx = 0; /* xor self */
    edi = esi + 0xD8;

loc_00373A53: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00373A60; /* je: equal / zero */

loc_00373A58: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00373A60u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00373A60: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 6 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00373A53; /* jb: below (unsigned <) */

loc_00373A69: ;
    ecx = esi + 0x12;
    SET_LO16(edx, 0x3111);
    PUSH32(esp, 0x00373A75u); RECOMP_ABI_CALL(0x00374A61u, sub_00374A61); /* call 0x00374A61 */

loc_00373A75: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00374C05(); return; /* tail jmp 0x00374C05 */

}

/**
 * sub_00373A7F
 * Original: 0x00373A7F - 0x00373AAE (47 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00373A7F(void)
{

loc_00373A7F: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = eax << 5;
    eax = eax + ecx + 0xD0;
    MEM32(eax + 0x18) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 0x14) = edx;
    ecx = MEM32(ecx + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00373AABu); RECOMP_ABI_CALL(0x003733E8u, sub_003733E8); /* call 0x003733E8 */

loc_00373AAB: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00373AAE
 * Original: 0x00373AAE - 0x00373AC8 (26 bytes, 7 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00373AAE(void)
{

loc_00373AAE: ;
    eax = MEM32(esp + 4);
    eax = eax << 5;
    eax = eax + ecx + 0xD0;
    ecx = MEM32(ecx + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00373AC5u); RECOMP_ABI_CALL(0x0037320Bu, sub_0037320B); /* call 0x0037320B */

loc_00373AC5: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00373AC8
 * Original: 0x00373AC8 - 0x00373B73 (171 bytes, 47 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00373AC8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00373AC8: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x00373AD8u); RECOMP_ABI_CALL(0x00375D91u, sub_00375D91); /* call 0x00375D91 */

loc_00373AD8: ;
    PUSH32(esp, MEM32(esp + 0xC));
    MEM32(esi) = 0x3E1FD0;
    PUSH32(esp, 0x00373AE7u); RECOMP_ABI_CALL(0x0037595Du, sub_0037595D); /* call 0x0037595D */

loc_00373AE7: ;
    MEM32(esi + 0x80) = eax;
    eax = esi + 0xB0;
    MEM32(esi + 0xB4) = eax;
    MEM32(eax) = eax;
    eax = esi + 0xA8;
    PUSH32(esp, 2);
    MEM32(esi + 0xAC) = eax;
    MEM32(eax) = eax;
    eax = esi + 0xB8;
    POP32(esp, ecx);
    PUSH32(esp, 0x10);
    MEM32(esi + 0xBC) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x88;
    POP32(esp, edx);

loc_00373B23: ;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    eax = eax + edx;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00373B23; /* jne: not equal / not zero */

loc_00373B2D: ;
    ecx = 0; /* xor self */
    eax = esi + 0xD0;

loc_00373B35: ;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    MEM32(eax + 0xC) = esi;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00373B35; /* jb: below (unsigned <) */

loc_00373B49: ;
    MEM32(esi + 0xD8) = MEM32(esi + 0xD8) | 5;
    MEM32(esi + 0xF8) = MEM32(esi + 0xF8) | 1;
    MEM32(esi + 0x118) = MEM32(esi + 0x118) | 5;
    MEM32(esi + 0x138) = MEM32(esi + 0x138) | 5;
    ecx = esi + 0x12;
    PUSH32(esp, 0x00373B6Du); RECOMP_ABI_CALL(0x00374A65u, sub_00374A65); /* call 0x00374A65 */

loc_00373B6D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00373B73
 * Original: 0x00373B73 - 0x00373BAC (57 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00373B73(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00373B73: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    eax = eax | MEM32(ebp + 0xC);
    esi = ecx;
    if ((eax == 0)) goto loc_00373B98; /* je: equal / zero */

loc_00373B84: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = MEM32(esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00373B94u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00373B94: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00373BA4; /* jne: not equal / not zero */

loc_00373B98: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373BA2u); RECOMP_ABI_CALL(0x003736C2u, sub_003736C2); /* call 0x003736C2 */

loc_00373BA2: ;
    edi = eax;

loc_00373BA4: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00373BAC
 * Original: 0x00373BAC - 0x00373C13 (103 bytes, 41 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00373BAC(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00373BAC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    eax = ebx + 9;
    eax = eax << 4;
    esi = ecx;
    PUSH32(esp, edi);
    edi = eax + esi;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00373C09; /* jne: not equal / not zero */

loc_00373BCA: ;
    ecx = esi + 0xA8;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00373BFB; /* je: equal / zero */

loc_00373BD6: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373BDFu); RECOMP_ABI_CALL(0x003737BBu, sub_003737BB); /* call 0x003737BB */

loc_00373BDF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00373BFB; /* je: equal / zero */

loc_00373BE3: ;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(MEM8(eax + 0xB)) & 0xFFu; _fb = (uint32_t)(0x60) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xB), 0x60 (8-bit) */
    MEM32(ebp + -4) = 1;
    if (TEST_NZ(_fa, _fb)) goto loc_00373C01; /* jne: not equal / not zero */

loc_00373BF6: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00373BCA; /* jb: below (unsigned <) */

loc_00373BFB: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00373C09; /* je: equal / zero */

loc_00373C01: ;
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373C09u); RECOMP_ABI_CALL(0x0037391Eu, sub_0037391E); /* call 0x0037391E */

loc_00373C09: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00373C13
 * Original: 0x00373C13 - 0x00373C89 (118 bytes, 47 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00373C13(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00373C13: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = ebp + -8;
    ebx = edi + 0xB8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373C32u); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_00373C32: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00373C70; /* jne: not equal / not zero */

loc_00373C37: ;
    goto loc_00373C4D;

loc_00373C39: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = edi;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373C44u); RECOMP_ABI_CALL(0x003739F3u, sub_003739F3); /* call 0x003739F3 */

loc_00373C44: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373C4Cu); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_00373C4C: ;
    PUSH32(esp, esi);

loc_00373C4D: ;
    eax = edi + 0xB0;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373C59u); RECOMP_ABI_CALL(0x0037358Fu, sub_0037358F); /* call 0x0037358F */

loc_00373C59: ;
    ecx = ebp + -8;
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373C63u); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_00373C63: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00373C39; /* jne: not equal / not zero */

loc_00373C67: ;
    goto loc_00373C82;

loc_00373C69: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(eax + 0x24) = ecx;
    PUSH32(esp, esi);

loc_00373C70: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373C76u); RECOMP_ABI_CALL(0x0037358Fu, sub_0037358F); /* call 0x0037358F */

loc_00373C76: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00373C69; /* jne: not equal / not zero */

loc_00373C7A: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373C82u); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_00373C82: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00373C89
 * Original: 0x00373C89 - 0x00373CB1 (40 bytes, 16 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00373C89(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00373C89: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x12));
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00373C9C; /* je: equal / zero */

loc_00373C95: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00373C9Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00373C9C: ;
    PUSH32(esp, 0x8000000Au);
    eax = esi + 0xB8;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00373CAFu); RECOMP_ABI_CALL(0x00373C13u, sub_00373C13); /* call 0x00373C13 */

loc_00373CAF: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00373CB1
 * Original: 0x00373CB1 - 0x00373CDE (45 bytes, 19 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00373CB1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00373CB1: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    PUSH32(esp, 0x00373CBCu); RECOMP_ABI_CALL(0x00373603u, sub_00373603); /* call 0x00373603 */

loc_00373CBC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00373CCE; /* je: equal / zero */

loc_00373CC0: ;
    ecx = esi + 0x12;
    SET_LO16(edx, 0x800);
    PUSH32(esp, 0x00373CCCu); RECOMP_ABI_CALL(0x00374A65u, sub_00374A65); /* call 0x00374A65 */

loc_00373CCC: ;
    goto loc_00373CD9;

loc_00373CCE: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00373CD7u); RECOMP_ABI_CALL(0x003736C2u, sub_003736C2); /* call 0x003736C2 */

loc_00373CD7: ;
    edi = eax;

loc_00373CD9: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00373CDE
 * Original: 0x00373CDE - 0x00373DA1 (195 bytes, 65 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00373CDE(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00373CDE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373CF3u); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_00373CF3: ;
    eax = MEM32(ebp + 8);
    ecx = eax + 9;
    ecx = ecx << 4;
    ebx = ecx + esi;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00373D93; /* je: equal / zero */

loc_00373D08: ;
    ecx = ZX8(MEM8(esi + 0x64));
    edx = ecx + ecx;
    PUSH32(esp, edi);

loc_00373D10: ;
    edi = MEM32(-25034736);
    edi = edi >> 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00373D10; /* jb: below (unsigned <) */

loc_00373D1D: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00373D5D; /* jbe: below or equal (unsigned <=) */

loc_00373D25: ;
    edi = esi + 0xC;

loc_00373D28: ;
    ecx = ZX16(MEM16(edi));
    edx = eax + ecx * 2;
    edx = edx << 0xC;
    edx = edx & 0xFFFF00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(-25033992) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00373D49; /* jne: not equal / not zero */

loc_00373D41: ;
    MEM32(-25033952) = edx;
    goto loc_00373D4F;

loc_00373D49: ;
    MEM32(-25033892) = edx;

loc_00373D4F: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ZX8(MEM8(esi + 0x64));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00373D28; /* jb: below (unsigned <) */

loc_00373D5D: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = eax << 4;
    edi = eax + esi;
    eax = edi + 0x88;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373D74u); RECOMP_ABI_CALL(0x00373C13u, sub_00373C13); /* call 0x00373C13 */

loc_00373D74: ;
    MEM32(edi + 0x94) = MEM32(edi + 0x94) & 0;
    MEM32(ebx) = MEM32(ebx) & 0;
    MEM32(esi + 0x194) = MEM32(esi + 0x194) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x194)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = esi + 0x190;
    ecx = MEM32(eax);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 1;
    MEM32(eax) = ecx;
    POP32(esp, edi);

loc_00373D93: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373D9Bu); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_00373D9B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00373DA1
 * Original: 0x00373DA1 - 0x00373E81 (224 bytes, 81 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00373DA1(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00373DA1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = ZX8(MEM8(XBOX_FS_BASE + 0x24));
    edi = 0; /* xor self */
    _fa = (uint32_t)(MEM8(esi + 0x12)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x12), 1 (8-bit) */
    MEM8(ebp + -1) = LO8(eax);
    MEM32(ebp + -12) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_00373E6F; /* je: equal / zero */

loc_00373DC5: ;
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373DCDu); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_00373DCD: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00373DD5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00373DD5: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 6 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00373DCD; /* jb: below (unsigned <) */

loc_00373DDB: ;
    edi = MEM32(esi + 0x190);
    PUSH32(esp, ebx);
    MEM32(ebp + -8) = 2;
    ebx = 0x80004004u;

loc_00373DEE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373DF7u); RECOMP_ABI_CALL(0x00373CDEu, sub_00373CDE); /* call 0x00373CDE */

loc_00373DF7: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi & 1;
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00373DEE; /* jne: not equal / not zero */

loc_00373E00: ;
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(esi + 0x190) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373E10u); RECOMP_ABI_CALL(0x00375DF6u, sub_00375DF6); /* call 0x00375DF6 */

loc_00373E10: ;
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373E18u); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_00373E18: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373E1Fu); RECOMP_ABI_CALL(0x00375D0Cu, sub_00375D0C); /* call 0x00375D0C */

loc_00373E1F: ;
    PUSH32(esp, ebx);
    eax = esi + 0xA8;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373E2Eu); RECOMP_ABI_CALL(0x00373C13u, sub_00373C13); /* call 0x00373C13 */

loc_00373E2E: ;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(MEM8(eax + 0xA)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xA), 4 (8-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_00373E54; /* je: equal / zero */

loc_00373E3B: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00373E4A; /* jne: not equal / not zero */

loc_00373E43: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373E48u); RECOMP_ABI_CALL(0x00373A3Fu, sub_00373A3F); /* call 0x00373A3F */

loc_00373E48: ;
    goto loc_00373E5A;

loc_00373E4A: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00373E54u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00373E54: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00373E63; /* jne: not equal / not zero */

loc_00373E5A: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373E61u); RECOMP_ABI_CALL(0x00373C89u, sub_00373C89); /* call 0x00373C89 */

loc_00373E61: ;
    goto loc_00373E6F;

loc_00373E63: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00373E6Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00373E6F: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00373E7B; /* jne: not equal / not zero */

loc_00373E75: ;
    MEM16(esi + 0x12) = MEM16(esi + 0x12) & 0xCFFF;

loc_00373E7B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00373E81
 * Original: 0x00373E81 - 0x00373E91 (16 bytes, 5 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00373E81(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00373E81: ;
    _fa = (uint32_t)(MEM16(ecx + 0x12)) & 0xFFFFu; _fb = (uint32_t)(0x8002) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ecx + 0x12), 0x8002 (16-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00373E90; /* jne: not equal / not zero */

loc_00373E89: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00373E90u); RECOMP_ABI_CALL(0x00373DA1u, sub_00373DA1); /* call 0x00373DA1 */

loc_00373E90: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00373E91
 * Original: 0x00373E91 - 0x00373F75 (228 bytes, 75 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00373E91(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00373E91: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x14;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -20;
    MEM32(ebp + -12) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373EB1u); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_00373EB1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);

loc_00373EB3: ;
    edi = MEM32(esi + 0x190);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;

loc_00373EBD: ;
    ebx = esi + 0x68;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373EC8u); RECOMP_ABI_CALL(0x003735AAu, sub_003735AA); /* call 0x003735AA */

loc_00373EC8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00373F0F; /* je: equal / zero */

loc_00373ECC: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373ED6u); RECOMP_ABI_CALL(0x00373CDEu, sub_00373CDE); /* call 0x00373CDE */

loc_00373ED6: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 1;
    _fa = (uint32_t)(MEM16(esi + 0x12)) & 0xFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(esi + 0x12), 0x1000 (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00373F02; /* je: equal / zero */

loc_00373EE2: ;
    ecx = MEM32(ebx);
    eax = edi;
    eax = eax << 4;
    _fa = (uint32_t)(MEM8(eax + ecx + 0xE)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + ecx + 0xE), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00373F02; /* jne: not equal / not zero */

loc_00373EF0: ;
    MEM16(esi + 0x12) = MEM16(esi + 0x12) & 0xEFFF;
    SET_LO16(eax, MEM16(esi + 0x12));
    SET_LO16(eax, LO16(eax) | 0x2000);
    MEM16(esi + 0x12) = LO16(eax);

loc_00373F02: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi & 1;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00373EBD; /* jb: below (unsigned <) */

loc_00373F0F: ;
    _fa = (uint32_t)(MEM16(esi + 0x12)) & 0xFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(esi + 0x12), 0x2000 (16-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00373F52; /* jne: not equal / not zero */

loc_00373F17: ;
    edi = MEM32(esi + 0x194);
    edi = edi + MEM32(esi + 0x190);
    edi = edi & 1;
    ebx = 0; /* xor self */

loc_00373F28: ;
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373F30u); RECOMP_ABI_CALL(0x00373BACu, sub_00373BAC); /* call 0x00373BAC */

loc_00373F30: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00373F44; /* je: equal / zero */

loc_00373F34: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 2;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi & 1;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00373F28; /* jb: below (unsigned <) */

loc_00373F42: ;
    goto loc_00373F48;

loc_00373F44: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;

loc_00373F48: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00373EB3; /* jne: not equal / not zero */

loc_00373F52: ;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(MEM8(eax + 0xB)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xB), 0x40 (8-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_00373F67; /* je: equal / zero */

loc_00373F60: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373F67u); RECOMP_ABI_CALL(0x00373C89u, sub_00373C89); /* call 0x00373C89 */

loc_00373F67: ;
    ecx = ebp + -20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373F6Fu); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_00373F6F: ;
    eax = MEM32(ebp + -4);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00373F75
 * Original: 0x00373F75 - 0x00373FFD (136 bytes, 49 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00373F75(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00373F75: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x68;
    PUSH32(esp, 3);
    ecx = edi;
    PUSH32(esp, 0x00373F85u); RECOMP_ABI_CALL(0x003735AAu, sub_003735AA); /* call 0x003735AA */

loc_00373F85: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00373FB4; /* je: equal / zero */

loc_00373F89: ;
    eax = MEM32(edi);
    MEM8(eax + 0x3F) = 0x80;
    eax = esi + 0x12;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(eax), 0x1000 (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00373FA9; /* je: equal / zero */

loc_00373F99: ;
    MEM16(eax) = MEM16(eax) & 0xEFFF;
    SET_LO16(ecx, MEM16(eax));
    SET_LO16(ecx, LO16(ecx) | 0x2000);
    MEM16(eax) = LO16(ecx);

loc_00373FA9: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00373FB2u); RECOMP_ABI_CALL(0x00373DA1u, sub_00373DA1); /* call 0x00373DA1 */

loc_00373FB2: ;
    goto loc_00373FF7;

loc_00373FB4: ;
    SET_LO8(eax, MEM8(esi + 0x12));
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00373FF7; /* jne: not equal / not zero */

loc_00373FBD: ;
    ecx = esi;
    PUSH32(esp, 0x00373FC4u); RECOMP_ABI_CALL(0x00373E91u, sub_00373E91); /* call 0x00373E91 */

loc_00373FC4: ;
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00373FF7; /* jne: not equal / not zero */

loc_00373FCA: ;
    _fa = (uint32_t)(MEM32(esi + 0x194)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x194), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00373FF7; /* jne: not equal / not zero */

loc_00373FD3: ;
    _fa = (uint32_t)(MEM16(esi + 0x12)) & 0xFFFFu; _fb = (uint32_t)(0x2800) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(esi + 0x12), 0x2800 (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00373FE4; /* je: equal / zero */

loc_00373FDB: ;
    ecx = esi;
    PUSH32(esp, 0x00373FE2u); RECOMP_ABI_CALL(0x0037378Eu, sub_0037378E); /* call 0x0037378E */

loc_00373FE2: ;
    goto loc_00373FF7;

loc_00373FE4: ;
    eax = 0x400;
    _fa = (uint32_t)(MEM16(esi + 0x12)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(esi + 0x12), LO16(eax) (16-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00373FF7; /* jne: not equal / not zero */

loc_00373FEF: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00373FF7u); RECOMP_ABI_CALL(0x003753A1u, sub_003753A1); /* call 0x003753A1 */

loc_00373FF7: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00373FFD
 * Original: 0x00373FFD - 0x0037405A (93 bytes, 35 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00373FFD(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00373FFD: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi) = 0x3E1FD0;
    edi = 0; /* xor self */

loc_00374009: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00374011u); RECOMP_ABI_CALL(0x00373AAEu, sub_00373AAE); /* call 0x00373AAE */

loc_00374011: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 6 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00374009; /* jb: below (unsigned <) */

loc_00374017: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00374020u); RECOMP_ABI_CALL(0x00373DA1u, sub_00373DA1); /* call 0x00373DA1 */

loc_00374020: ;
    ecx = esi;
    PUSH32(esp, 0x00374027u); RECOMP_ABI_CALL(0x00373A3Fu, sub_00373A3F); /* call 0x00373A3F */

loc_00374027: ;
    edi = esi + 0x80;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0037403C; /* je: equal / zero */

loc_00374033: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x00374039u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00374039: ;
    MEM32(edi) = MEM32(edi) & 0;

loc_0037403C: ;
    edi = esi + 0xC0;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00374051; /* je: equal / zero */

loc_00374048: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0037404Eu); RECOMP_ABI_CALL(0x00371CC4u, sub_00371CC4); /* call 0x00371CC4 */

loc_0037404E: ;
    MEM32(edi) = MEM32(edi) & 0;

loc_00374051: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_003760BC(); return; /* tail jmp 0x003760BC */

}

/**
 * sub_0037405A
 * Original: 0x0037405A - 0x00374149 (239 bytes, 74 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037405A(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037405A: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 0x12));
    PUSH32(esp, edi);
    eax = eax & 1;
    edi = eax;
    if ((eax == 0)) goto loc_0037408C; /* je: equal / zero */

loc_0037406A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00374071u); RECOMP_ABI_CALL(0x00373DA1u, sub_00373DA1); /* call 0x00373DA1 */

loc_00374071: ;
    eax = MEM32(esi + 0x80);
    eax = ZX8(MEM8(eax + 0xE));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x64)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 0x64) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037408C; /* je: equal / zero */

loc_00374085: ;
    ecx = esi;
    PUSH32(esp, 0x0037408Cu); RECOMP_ABI_CALL(0x00373A3Fu, sub_00373A3F); /* call 0x00373A3F */

loc_0037408C: ;
    ecx = esi;
    PUSH32(esp, 0x00374093u); RECOMP_ABI_CALL(0x00374AF2u, sub_00374AF2); /* call 0x00374AF2 */

loc_00374093: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00374146; /* jl: less (signed <) */

loc_0037409B: ;
    edx = MEM32(esi + 0x80);
    ecx = ZX16(MEM16(edx + 0xC));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    if ((_fa == 0)) goto loc_003740C6; /* je: equal / zero */

loc_003740A9: ;
    ecx = ecx - 0x68;
    if ((ecx != 0)) goto loc_003740FE; /* jne: not equal / not zero */

loc_003740AE: ;
    ecx = esi + 0x84;
    ebx = MEM32(ecx);
    ebx = ebx & 0xFFFEFFFFu;
    ebx = ebx | 0x20000;

loc_003740C2: ;
    MEM32(ecx) = ebx;
    goto loc_003740FE;

loc_003740C6: ;
    SET_LO8(ecx, MEM8(edx + 0xF));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 8 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003740F7; /* je: equal / zero */

loc_003740CE: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x10 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003740E1; /* je: equal / zero */

loc_003740D3: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x20 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003740FE; /* jne: not equal / not zero */

loc_003740D8: ;
    MEM8(esi + 0x86) = MEM8(esi + 0x86) | 3;
    goto loc_003740FE;

loc_003740E1: ;
    ecx = esi + 0x84;
    ebx = MEM32(ecx);
    ebx = ebx & 0xFFFDFFFFu;
    ebx = ebx | 0x10000;
    goto loc_003740C2;

loc_003740F7: ;
    MEM8(esi + 0x86) = MEM8(esi + 0x86) & 0xFC;

loc_003740FE: ;
    ecx = ZX8(MEM8(edx + 0xE));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx << 0x12;
    ecx = ecx ^ MEM32(esi + 0x84);
    POP32(esp, ebx);
    ecx = ecx & 0x7C0000;
    MEM32(esi + 0x84) = MEM32(esi + 0x84) ^ ecx;
    _fa = (uint32_t)(MEM8(edx + 0xE)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0xE), 1 (8-bit) */
    ecx = MEM32(esi + 0x84);
    if (CMP_BE(_fa, _fb)) goto loc_0037412D; /* jbe: below or equal (unsigned <=) */

loc_00374125: ;
    ecx = ecx | 0x800000;
    goto loc_00374133;

loc_0037412D: ;
    ecx = ecx & 0xFF7FFFFFu;

loc_00374133: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esi + 0x84) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00374146; /* je: equal / zero */

loc_0037413D: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_003759A7(); return; /* tail jmp 0x003759A7 */

loc_00374146: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00374149
 * Original: 0x00374149 - 0x00374217 (206 bytes, 70 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00374149(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00374149: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x10;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    esi = ecx;
    MEM32(ebp + -4) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00374161u); RECOMP_ABI_CALL(0x0037352Du, sub_0037352D); /* call 0x0037352D */

loc_00374161: ;
    ecx = esi + 0x12;
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ecx), 0x2000 (16-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00374186; /* jne: not equal / not zero */

loc_0037416B: ;
    SET_LO16(edx, 0xF7FF);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00374174u); RECOMP_ABI_CALL(0x00374A61u, sub_00374A61); /* call 0x00374A61 */

loc_00374174: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0037417Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0037417D: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00374186u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00374186: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037418Du); RECOMP_ABI_CALL(0x003759A7u, sub_003759A7); /* call 0x003759A7 */

loc_0037418D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(ebp + -8) = eax;
    if (TEST_S(_fas, _fbs)) goto loc_0037420F; /* jl: less (signed <) */

loc_00374194: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037419Eu); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_0037419E: ;
    PUSH32(esp, MEM32(esi + 0xB0));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003741A9u); RECOMP_ABI_CALL(0x0036F300u, sub_0036F300); /* call 0x0036F300 */

loc_003741A9: ;
    ecx = ebp + -16;
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003741B3u); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_003741B3: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, 6);
    eax = ebx + 8;
    POP32(esp, ecx);
    edi = eax;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    MEM32(ebx + 0x20) = MEM32(ebx + 0x20) & 0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM32(ebx + 0x24) = 0x8000000Au;
    PUSH32(esp, MEM32(ebx + 0xC));
    PUSH32(esp, MEM32(eax));
    { uint32_t _icall_target = MEM32(0x3C6D68); PUSH32(esp, 0x003741D8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003741D8: ;
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003741E0u); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_003741E0: ;
    esi = MEM32(ebp + -4);
    eax = esi + 0xA8;
    MEM32(ebx) = eax;
    eax = MEM32(eax + 4);
    MEM32(ebx + 4) = eax;
    MEM32(eax) = ebx;
    eax = MEM32(ebx);
    ecx = ebp + -16;
    MEM32(eax + 4) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00374200u); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_00374200: ;
    _fa = (uint32_t)(MEM8(esi + 0x12)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x12), 0x20 (8-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_0037420F; /* jne: not equal / not zero */

loc_00374208: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037420Fu); RECOMP_ABI_CALL(0x00373E91u, sub_00373E91); /* call 0x00373E91 */

loc_0037420F: ;
    eax = MEM32(ebp + -8);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00374217
 * Original: 0x00374217 - 0x003742A5 (142 bytes, 52 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00374217(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00374217: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0037424B; /* jne: not equal / not zero */

loc_00374222: ;
    PUSH32(esp, edi);
    edi = esi + 0x12;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0037423A; /* je: equal / zero */

loc_0037422B: ;
    SET_LO16(eax, MEM16(edi));
    SET_LO16(eax, LO16(eax) & 0xFFDF);
    MEM16(edi) = LO16(eax);
    PUSH32(esp, 0x0037423Au); RECOMP_ABI_CALL(0x00373E91u, sub_00373E91); /* call 0x00373E91 */

loc_0037423A: ;
    eax = ZX16(MEM16(edi));
    eax = eax & 0xFFFFFFBBu;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00374248u); RECOMP_ABI_CALL(0x003753A1u, sub_003753A1); /* call 0x003753A1 */

loc_00374248: ;
    POP32(esp, edi);
    goto loc_003742A1;

loc_0037424B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037425C; /* jne: not equal / not zero */

loc_00374250: ;
    eax = ZX16(MEM16(esi + 0x12));
    eax = eax & 0xFFFFFFBFu;
    eax = eax | 4;
    goto loc_00374282;

loc_0037425C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037426D; /* jne: not equal / not zero */

loc_00374261: ;
    eax = ZX16(MEM16(esi + 0x12));
    eax = eax & 0xFFFFFFFBu;
    eax = eax | 0x40;
    goto loc_00374282;

loc_0037426D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037429C; /* jne: not equal / not zero */

loc_00374272: ;
    SET_LO8(eax, MEM8(esi + 0x12));
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037428C; /* jne: not equal / not zero */

loc_0037427B: ;
    eax = ZX16(MEM16(esi + 0x12));
    eax = eax & 0xFFFFFFBBu;

loc_00374282: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0037428Au); RECOMP_ABI_CALL(0x003753A1u, sub_003753A1); /* call 0x003753A1 */

loc_0037428A: ;
    goto loc_003742A1;

loc_0037428C: ;
    SET_LO16(eax, MEM16(esi + 0x12));
    SET_LO16(eax, LO16(eax) | 0x20);
    MEM16(esi + 0x12) = LO16(eax);
    eax = 0; /* xor self */
    goto loc_003742A1;

loc_0037429C: ;
    eax = 0x80004005u;

loc_003742A1: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003742A5
 * Original: 0x003742A5 - 0x003742F0 (75 bytes, 27 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003742A5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003742A5: ;
    eax = MEM32(esp + 4);
    eax = eax - 0;
    if ((eax == 0)) goto loc_003742E8; /* je: equal / zero */

loc_003742AE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003742E1; /* je: equal / zero */

loc_003742B1: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003742DA; /* je: equal / zero */

loc_003742B4: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003742D3; /* je: equal / zero */

loc_003742B7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003742C8; /* je: equal / zero */

loc_003742BA: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003742ED; /* jne: not equal / not zero */

loc_003742BD: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x003742C6u); RECOMP_ABI_CALL(0x00374217u, sub_00374217); /* call 0x00374217 */

loc_003742C6: ;
    goto loc_003742ED;

loc_003742C8: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x003742D1u); RECOMP_ABI_CALL(0x003736C2u, sub_003736C2); /* call 0x003736C2 */

loc_003742D1: ;
    goto loc_003742ED;

loc_003742D3: ;
    PUSH32(esp, 0x003742D8u); RECOMP_ABI_CALL(0x00373E81u, sub_00373E81); /* call 0x00373E81 */

loc_003742D8: ;
    goto loc_003742ED;

loc_003742DA: ;
    PUSH32(esp, 0x003742DFu); RECOMP_ABI_CALL(0x00373C89u, sub_00373C89); /* call 0x00373C89 */

loc_003742DF: ;
    goto loc_003742ED;

loc_003742E1: ;
    PUSH32(esp, 0x003742E6u); RECOMP_ABI_CALL(0x00373A3Fu, sub_00373A3F); /* call 0x00373A3F */

loc_003742E6: ;
    goto loc_003742ED;

loc_003742E8: ;
    PUSH32(esp, 0x003742EDu); RECOMP_ABI_CALL(0x0037534Du, sub_0037534D); /* call 0x0037534D */

loc_003742ED: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003742F0
 * Original: 0x003742F0 - 0x0037430B (27 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003742F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003742F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003742F8u); RECOMP_ABI_CALL(0x00373FFDu, sub_00373FFD); /* call 0x00373FFD */

loc_003742F8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00374305; /* je: equal / zero */

loc_003742FF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00374305u); RECOMP_ABI_CALL(0x00371CC4u, sub_00371CC4); /* call 0x00371CC4 */

loc_00374305: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037430B
 * Original: 0x0037430B - 0x00374382 (119 bytes, 49 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0037430B(void)
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

loc_0037430B: ;
    ecx = MEM32(esp + 4);
    fp_push(0.0); /* fldz */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMF(ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00374335; /* jp: parity */

loc_00374327: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMF(ecx + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0037437F; /* jnp: not parity */

loc_00374335: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3E1FF8)); /* fld float */
    fp_push(MEMF(ecx)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0037437F; /* jnp: not parity */

loc_0037434A: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0037437F; /* jnp: not parity */

loc_00374358: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_push(MEMF(ecx)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_push(1.0); /* fld1 */
    fp_top() = fp_top() / fp_st1(); /* fdiv st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(ecx); /* fmul dword ptr [ecx] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(ecx + 8); /* fmul dword ptr [ecx + 8] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_0037437F: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00374382
 * Original: 0x00374382 - 0x003743A0 (30 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00374382(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00374382: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = 0x45800000;
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_push(MEMF(ebp + 8)); /* fld float */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    SMEM32(ebp + -8) = (int32_t)recomp_fist(fp_top(), g_fp_control_word, 32); fp_pop(); /* fistp */
    eax = MEM32(ebp + -8);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003743A0
 * Original: 0x003743A0 - 0x003743D6 (54 bytes, 16 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003743A0(void)
{

loc_003743A0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    MEM32(eax + 4) = ecx;
    ecx = edx;
    MEM32(eax) = edx;
    MEM32(ecx + 4) = eax;
    ecx = MEM32(eax + 4);
    MEM32(ecx) = eax;
    SET_LO16(ecx, MEM16(esp + 8));
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0;
    MEM16(eax + 8) = LO16(ecx);
    SET_LO16(ecx, MEM16(esp + 0xC));
    MEM16(eax + 0xA) = LO16(ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003743D6
 * Original: 0x003743D6 - 0x003743FD (39 bytes, 13 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003743D6(void)
{

loc_003743D6: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    MEM32(eax + 4) = ecx;
    ecx = edx;
    MEM32(eax) = edx;
    MEM32(ecx + 4) = eax;
    ecx = MEM32(eax + 4);
    MEM32(ecx) = eax;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    MEM32(eax + 8) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003743FD
 * Original: 0x003743FD - 0x0037441D (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003743FD(void)
{

loc_003743FD: ;
    eax = ecx;
    ecx = eax + 4;
    MEM32(eax + 8) = ecx;
    MEM32(ecx) = ecx;
    ecx = eax + 0xC;
    MEM32(eax) = 0x3E2008;
    MEM32(eax + 0x1C) = 0x37A6EC;
    MEM32(eax + 0x10) = ecx;
    MEM32(ecx) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0037441D
 * Original: 0x0037441D - 0x0037443F (34 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037441D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037441D: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi) = 0x3E2008;
    if (TEST_Z(_fa, _fb)) goto loc_00374437; /* je: equal / zero */

loc_0037442D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00374433u); RECOMP_ABI_CALL(0x00371CC4u, sub_00371CC4); /* call 0x00371CC4 */

loc_00374433: ;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) & 0;

loc_00374437: ;
    eax = MEM32(esi + 0x1C);
    MEM32(eax) = MEM32(eax) & 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0037443F
 * Original: 0x0037443F - 0x003744CA (139 bytes, 53 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0037443F(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0037443F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ZX16(MEM16(ebp + 8));
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    MEM32(eax) = edi;
    PUSH32(esp, 1);
    eax = edi + edi * 4 + 5;
    if (2) _cf = (int)(((eax) >> (32 - (2))) & 1);
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0x61645344);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00374464u); RECOMP_ABI_CALL(0x00371C5Cu, sub_00371C5C); /* call 0x00371C5C */

loc_00374464: ;
    ebx = eax;
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(-(int32_t)ebx);
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    ebx = ebx & 0x7FF8FFF2;
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    ebx = ebx + 0x8007000Eu;
    MEM32(esi + 0x14) = eax;
    if (((int32_t)ebx < 0)) goto loc_003744C1; /* js: sign (negative) */

loc_0037447B: ;
    ecx = esi + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037448Cu); RECOMP_ABI_CALL(0x003743A0u, sub_003743A0); /* call 0x003743A0 */

loc_0037448C: ;
    MEM32(esi + 0x18) = eax;
    eax = edi + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003744C1; /* jbe: below or equal (unsigned <=) */

loc_00374497: ;
    ecx = esi + 0xC;
    MEM32(ebp + 8) = 0x14;
    edx = eax + -1;

loc_003744A4: ;
    eax = MEM32(esi + 0x14);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + 8))) >> 32) & 1);
    eax = eax + MEM32(ebp + 8);
    _cf = (int)((((uint64_t)(MEM32(ebp + 8)) + (uint64_t)(0x14)) >> 32) & 1);
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0x14;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax) = ecx;
    edi = MEM32(ecx + 4);
    MEM32(eax + 4) = edi;
    MEM32(ecx + 4) = eax;
    edi = MEM32(eax + 4);
    MEM32(edi) = eax;
    if ((_fa != 0)) goto loc_003744A4; /* jne: not equal / not zero */

loc_003744C1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003744CA
 * Original: 0x003744CA - 0x0037459B (209 bytes, 76 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003744CA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003744CA: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x18);
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00374594; /* je: equal / zero */

loc_003744DB: ;
    PUSH32(esp, ebx);
    SET_LO16(ebx, MEM16(esp + 0x14));
    _fa = (uint32_t)(MEM16(eax + 0xA)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0xA), LO16(ebx) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00374593; /* jb: below (unsigned <) */

loc_003744EB: ;
    edx = edi + 4;
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00374593; /* je: equal / zero */

loc_003744F8: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00374513; /* jne: not equal / not zero */

loc_003744FE: ;
    SET_LO16(ecx, MEM16(eax + 0xA));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(ebx) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00374513; /* jb: below (unsigned <) */

loc_00374507: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00374511; /* je: equal / zero */

loc_0037450B: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esi + 0xA)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(esi + 0xA) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00374513; /* jae: above or equal (unsigned >=) */

loc_00374511: ;
    esi = eax;

loc_00374513: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003744F8; /* jne: not equal / not zero */

loc_00374519: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00374593; /* je: equal / zero */

loc_0037451D: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esi + 0xA)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), MEM16(esi + 0xA) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0037454C; /* jae: above or equal (unsigned >=) */

loc_00374523: ;
    PUSH32(esp, MEM32(edi + 0xC));
    PUSH32(esp, 0x0037452Bu); RECOMP_ABI_CALL(0x0036F300u, sub_0036F300); /* call 0x0036F300 */

loc_0037452B: ;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + 0xA));
    SET_LO16(ecx, LO16(ecx) - LO16(ebx));
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + 8));
    SET_LO16(ecx, LO16(ecx) + LO16(ebx));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00374548u); RECOMP_ABI_CALL(0x003743A0u, sub_003743A0); /* call 0x003743A0 */

loc_00374548: ;
    MEM16(esi + 0xA) = LO16(ebx);

loc_0037454C: ;
    eax = MEM32(esp + 0x10);
    ecx = ZX16(MEM16(esi + 0xA));
    MEM32(esi + 0xC) = 1;
    MEM32(esi + 0x10) = eax;
    eax = MEM32(edi + 0x1C);
    MEM32(eax) = MEM32(eax) - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0x18) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00374593; /* jne: not equal / not zero */

loc_00374568: ;
    MEM32(edi + 0x18) = MEM32(edi + 0x18) & 0;
    edx = edi + 4;
    eax = MEM32(edx);
    goto loc_0037458F;

loc_00374573: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037458D; /* jne: not equal / not zero */

loc_00374579: ;
    ecx = MEM32(edi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0037458A; /* je: equal / zero */

loc_00374580: ;
    SET_LO16(ebx, MEM16(eax + 0xA));
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx + 0xA)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), MEM16(ecx + 0xA) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0037458D; /* jbe: below or equal (unsigned <=) */

loc_0037458A: ;
    MEM32(edi + 0x18) = eax;

loc_0037458D: ;
    eax = MEM32(eax);

loc_0037458F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00374573; /* jne: not equal / not zero */

loc_00374593: ;
    POP32(esp, ebx);

loc_00374594: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0037459B
 * Original: 0x0037459B - 0x003745BC (33 bytes, 12 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037459B(void)
{

loc_0037459B: ;
    eax = MEM32(esp + 8);
    SET_LO16(edx, MEM16(eax + 0xA));
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM16(esi + 0xA) = MEM16(esi + 0xA) + LO16(edx);
    PUSH32(esp, eax);
    ecx = ecx + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003745B6u); RECOMP_ABI_CALL(0x00372AA8u, sub_00372AA8); /* call 0x00372AA8 */

loc_003745B6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003745BC
 * Original: 0x003745BC - 0x00374629 (109 bytes, 40 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003745BC(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003745BC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = ebx;
    eax = eax << 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    { uint32_t _icall_target = MEM32(0x3C6D68); PUSH32(esp, 0x003745DAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003745DA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00374624; /* je: equal / zero */

loc_003745DE: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);

loc_003745E3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0xC));
    { uint32_t _icall_target = MEM32(0x3C6D6C); PUSH32(esp, 0x003745ECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003745EC: ;
    ecx = ebp + -8;
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003745F6u); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_003745F6: ;
    eax = MEM32(0xFE820010u);
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003745F6; /* jb: below (unsigned <) */

loc_00374603: ;
    MEM32(-25032700) = edi;
    ecx = ebp + -8;
    MEM32(-25032696) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00374617u); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_00374617: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 0x1000;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003745E3; /* jne: not equal / not zero */

loc_00374622: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00374624: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00374629
 * Original: 0x00374629 - 0x00374640 (23 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00374629(void)
{

loc_00374629: ;
    eax = MEM32(esp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = eax << 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    { uint32_t _icall_target = MEM32(0x3C6D68); PUSH32(esp, 0x0037463Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0037463D: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00374640
 * Original: 0x00374640 - 0x00374665 (37 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00374640(void)
{

loc_00374640: ;
    eax = ecx;
    ecx = eax + 8;
    MEM32(eax + 4) = 1;
    MEM32(eax) = 0x3E200C;
    MEM32(0x37ACF8) = eax;
    MEM32(eax + 0xC) = ecx;
    MEM32(ecx) = ecx;
    ecx = eax + 0x10;
    MEM32(eax + 0x14) = ecx;
    MEM32(ecx) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00374665
 * Original: 0x00374665 - 0x003746C6 (97 bytes, 34 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00374665(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00374665: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = ebp + -8;
    MEM32(edi) = 0x3E200C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00374680u); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_00374680: ;
    MEM32(0x37ACF8) = MEM32(0x37ACF8) & 0;
    esi = edi + 8;
    goto loc_00374699;

loc_0037468C: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00374699; /* je: equal / zero */

loc_00374693: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00374699u); RECOMP_ABI_CALL(0x00371C44u, sub_00371C44); /* call 0x00371C44 */

loc_00374699: ;
    PUSH32(esp, MEM32(esi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003746A0u); RECOMP_ABI_CALL(0x0036F300u, sub_0036F300); /* call 0x0036F300 */

loc_003746A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037468C; /* jne: not equal / not zero */

loc_003746A4: ;
    eax = MEM32(0x37AE4C);
    MEM32(eax) = MEM32(eax) & 0;
    eax = MEM32(0x37AE48);
    MEM32(eax) = MEM32(eax) & 0;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003746BCu); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_003746BC: ;
    MEM32(edi) = 0x3E1EBC;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003746C6
 * Original: 0x003746C6 - 0x0037474A (132 bytes, 56 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003746C6(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003746C6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003746DBu); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_003746DB: ;
    edx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, 0x5C);
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    POP32(esp, ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((edi) != 0);
    edi = (uint32_t)(-(int32_t)edi);
    if ((edi == 0)) goto loc_0037473A; /* je: equal / zero */

loc_003746EE: ;
    ecx = MEM32(ebp + 8);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    MEM32(eax + 8) = ecx;
    ecx = esi + 8;
    MEM32(eax) = ecx;
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 4);
    MEM32(eax + 4) = ebx;
    MEM32(ecx + 4) = eax;
    ecx = MEM32(eax + 4);
    MEM32(ecx) = eax;
    ecx = esi + 0x10;
    PUSH32(esp, ecx);
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xFFFFFFF4u)) >> 32) & 1);
    edx = edx + 0xFFFFFFF4u;
    PUSH32(esp, edx);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xC)) >> 32) & 1);
    eax = eax + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037471Du); RECOMP_ABI_CALL(0x003743D6u, sub_003743D6); /* call 0x003743D6 */

loc_0037471D: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0037472D; /* je: equal / zero */

loc_00374725: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00374730; /* jbe: below or equal (unsigned <=) */

loc_0037472D: ;
    MEM32(esi + 0x18) = eax;

loc_00374730: ;
    eax = MEM32(0x37AE4C);
    ecx = MEM32(ebp + 0xC);
    _cf = (int)((((uint64_t)(MEM32(eax)) + (uint64_t)(ecx)) >> 32) & 1);
    MEM32(eax) = MEM32(eax) + ecx;

loc_0037473A: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00374742u); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_00374742: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0037474A
 * Original: 0x0037474A - 0x0037482B (225 bytes, 89 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0037474A(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0037474A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    ecx = ebp + -8;
    MEM32(ebp + -4) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00374761u); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_00374761: ;
    esi = MEM32(ebp + 8);
    eax = MEM32(edi + 0x18);
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x17)) >> 32) & 1);
    esi = esi + 0x17;
    if (3) _cf = (int)(((esi) >> ((3) - 1)) & 1);
    esi = esi >> 3;
    if (3) _cf = (int)(((esi) >> (32 - (3))) & 1);
    esi = esi << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00374811; /* je: equal / zero */

loc_00374778: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00374811; /* jb: below (unsigned <) */

loc_00374781: ;
    edx = edi + 0x10;
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00374811; /* je: equal / zero */

loc_0037478E: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003747A6; /* jne: not equal / not zero */

loc_00374794: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_003747A6; /* jb: below (unsigned <) */

loc_0037479B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003747A4; /* je: equal / zero */

loc_0037479F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_003747A6; /* jae: above or equal (unsigned >=) */

loc_003747A4: ;
    ebx = eax;

loc_003747A6: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0037478E; /* jne: not equal / not zero */

loc_003747AC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00374811; /* je: equal / zero */

loc_003747B0: ;
    eax = MEM32(ebx + 8);
    ecx = esi + 0x50;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_003747CC; /* jae: above or equal (unsigned >=) */

loc_003747BA: ;
    PUSH32(esp, ebx);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    eax = eax - esi;
    PUSH32(esp, eax);
    eax = ebx + esi;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003747C9u); RECOMP_ABI_CALL(0x003743D6u, sub_003743D6); /* call 0x003743D6 */

loc_003747C9: ;
    MEM32(ebx + 8) = esi;

loc_003747CC: ;
    MEM32(ebx + 0xC) = 0x706F6C73;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0x18) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00374801; /* jne: not equal / not zero */

loc_003747D8: ;
    _cf = 0; /* logical op clears CF */
    MEM32(edi + 0x18) = MEM32(edi + 0x18) & 0;
    ecx = edi + 0x10;
    eax = MEM32(ecx);
    goto loc_003747FD;

loc_003747E3: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003747FB; /* jne: not equal / not zero */

loc_003747E9: ;
    edx = MEM32(edi + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003747F8; /* je: equal / zero */

loc_003747F0: ;
    esi = MEM32(eax + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003747FB; /* jbe: below or equal (unsigned <=) */

loc_003747F8: ;
    MEM32(edi + 0x18) = eax;

loc_003747FB: ;
    eax = MEM32(eax);

loc_003747FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003747E3; /* jne: not equal / not zero */

loc_00374801: ;
    eax = MEM32(0x37AE48);
    ecx = MEM32(ebx + 8);
    _cf = (int)((((uint64_t)(MEM32(eax)) + (uint64_t)(ecx)) >> 32) & 1);
    MEM32(eax) = MEM32(eax) + ecx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00374811u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00374811: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00374819u); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_00374819: ;
    eax = ebx;
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x10)) >> 32) & 1);
    ebx = ebx + 0x10;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    POP32(esp, edi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    POP32(esp, esi);
    _cf = 0; /* logical op clears CF */
    eax = eax & ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037482B
 * Original: 0x0037482B - 0x00374846 (27 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037482B(void)
{

loc_0037482B: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(esi + 8) = MEM32(esi + 8) + ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00374840u); RECOMP_ABI_CALL(0x0036F300u, sub_0036F300); /* call 0x0036F300 */

loc_00374840: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00374846
 * Original: 0x00374846 - 0x00374861 (27 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00374846(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00374846: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0037484Eu); RECOMP_ABI_CALL(0x0037441Du, sub_0037441D); /* call 0x0037441D */

loc_0037484E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0037485B; /* je: equal / zero */

loc_00374855: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0037485Bu); RECOMP_ABI_CALL(0x00371CC4u, sub_00371CC4); /* call 0x00371CC4 */

loc_0037485B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00374861
 * Original: 0x00374861 - 0x003748F0 (143 bytes, 56 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00374861(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00374861: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(ebp + 0xC);
    eax = ebx;
    eax = eax & 0xFFF;
    esi = eax + ecx + 0xFFF;
    ecx = ebp + -8;
    esi = esi >> 0xC;
    ebx = ebx & 0xFFFFF000u;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00374894u); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_00374894: ;
    ecx = edi + 4;
    eax = MEM32(ecx);
    goto loc_003748AE;

loc_0037489B: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003748AC; /* je: equal / zero */

loc_003748A1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003748AC; /* jne: not equal / not zero */

loc_003748A6: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(MEM16(eax + 0xA)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), MEM16(eax + 0xA) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003748E9; /* je: equal / zero */

loc_003748AC: ;
    eax = MEM32(eax);

loc_003748AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037489B; /* jne: not equal / not zero */

loc_003748B2: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003748BBu); RECOMP_ABI_CALL(0x003744CAu, sub_003744CA); /* call 0x003744CA */

loc_003748BB: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003748D8; /* je: equal / zero */

loc_003748C1: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003748C9u); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_003748C9: ;
    eax = ZX16(LO16(esi));
    PUSH32(esp, eax);
    eax = ZX16(MEM16(edi + 8));
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003748D8u); RECOMP_ABI_CALL(0x003745BCu, sub_003745BC); /* call 0x003745BC */

loc_003748D8: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003748E0u); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_003748E0: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

loc_003748E9: ;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + 1;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = eax;
    goto loc_003748D8;

}

/**
 * sub_003748F0
 * Original: 0x003748F0 - 0x0037494C (92 bytes, 38 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003748F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003748F0: ;
    eax = MEM32(esp + 4);
    edx = ZX16(MEM16(eax + 0xA));
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1C);
    MEM32(ecx) = MEM32(ecx) + edx;
    PUSH32(esp, edi);
    edi = esi + 4;
    goto loc_00374915;

loc_00374906: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037492C; /* jne: not equal / not zero */

loc_0037490C: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00374915u); RECOMP_ABI_CALL(0x0037459Bu, sub_0037459B); /* call 0x0037459B */

loc_00374915: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00374906; /* jne: not equal / not zero */

loc_0037491B: ;
    goto loc_0037492C;

loc_0037491D: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00374933; /* jne: not equal / not zero */

loc_00374923: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0037492Cu); RECOMP_ABI_CALL(0x0037459Bu, sub_0037459B); /* call 0x0037459B */

loc_0037492C: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037491D; /* jne: not equal / not zero */

loc_00374933: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00374944; /* je: equal / zero */

loc_0037493A: ;
    SET_LO16(edx, MEM16(eax + 0xA));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx + 0xA)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(ecx + 0xA) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00374947; /* jbe: below or equal (unsigned <=) */

loc_00374944: ;
    MEM32(esi + 0x18) = eax;

loc_00374947: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037494C
 * Original: 0x0037494C - 0x00374967 (27 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037494C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037494C: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00374954u); RECOMP_ABI_CALL(0x00374665u, sub_00374665); /* call 0x00374665 */

loc_00374954: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00374961; /* je: equal / zero */

loc_0037495B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00374961u); RECOMP_ABI_CALL(0x00371CC4u, sub_00371CC4); /* call 0x00371CC4 */

loc_00374961: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00374967
 * Original: 0x00374967 - 0x00374A00 (153 bytes, 65 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00374967(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00374967: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = ebp + -8;
    esi = esi + 0xFFFFFFF0u;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00374983u); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_00374983: ;
    eax = MEM32(0x37AE48);
    ecx = MEM32(esi + 8);
    MEM32(eax) = MEM32(eax) - ecx;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    ebx = edi + 0x10;
    goto loc_003749B0;

loc_00374996: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003749D2; /* jne: not equal / not zero */

loc_0037499C: ;
    ecx = MEM32(esi + 8);
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003749D2; /* jne: not equal / not zero */

loc_003749A5: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003749AEu); RECOMP_ABI_CALL(0x0037482Bu, sub_0037482B); /* call 0x0037482B */

loc_003749AE: ;
    esi = eax;

loc_003749B0: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00374996; /* jne: not equal / not zero */

loc_003749B6: ;
    goto loc_003749D2;

loc_003749B8: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003749D9; /* jne: not equal / not zero */

loc_003749BE: ;
    ecx = MEM32(eax + 8);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003749D9; /* jne: not equal / not zero */

loc_003749C7: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003749D0u); RECOMP_ABI_CALL(0x0037482Bu, sub_0037482B); /* call 0x0037482B */

loc_003749D0: ;
    esi = eax;

loc_003749D2: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003749B8; /* jne: not equal / not zero */

loc_003749D9: ;
    eax = MEM32(edi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003749E8; /* je: equal / zero */

loc_003749E0: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 8) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003749EB; /* jbe: below or equal (unsigned <=) */

loc_003749E8: ;
    MEM32(edi + 0x18) = esi;

loc_003749EB: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x003749F1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003749F1: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003749F9u); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_003749F9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00374A00
 * Original: 0x00374A00 - 0x00374A4B (75 bytes, 31 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00374A00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00374A00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00374A14u); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_00374A14: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) - 1;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00374A3E; /* jne: not equal / not zero */

loc_00374A1C: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x10);
    PUSH32(esp, edi);
    edi = ZX16(MEM16(eax + 0xA));
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00374A2Du); RECOMP_ABI_CALL(0x003748F0u, sub_003748F0); /* call 0x003748F0 */

loc_00374A2D: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00374A35u); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_00374A35: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00374A3Cu); RECOMP_ABI_CALL(0x00374629u, sub_00374629); /* call 0x00374629 */

loc_00374A3C: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00374A3E: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00374A46u); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_00374A46: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00374A4B
 * Original: 0x00374A4B - 0x00374A61 (22 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00374A4B(void)
{

loc_00374A4B: ;
    MEM32(0x37AE4C) = 0x37A6DC;
    esp += 4; return; /* ret */

}

/**
 * sub_00374A56
 * Original: 0x00374A56 - 0x00374A61 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00374A56(void)
{

loc_00374A56: ;
    MEM32(0x37AE48) = 0x37A6E0;
    esp += 4; return; /* ret */

}

/**
 * sub_00374A61
 * Original: 0x00374A61 - 0x00374A65 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00374A61(void)
{

loc_00374A61: ;
    MEM16(ecx) = MEM16(ecx) & LO16(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_00374A65
 * Original: 0x00374A65 - 0x00374A69 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00374A65(void)
{

loc_00374A65: ;
    MEM16(ecx) = MEM16(ecx) | LO16(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_00374A69
 * Original: 0x00374A69 - 0x00374A8B (34 bytes, 10 insns)
 * CC: cdecl, 4 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00374A69(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00374A69: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x10));
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(0x37ADD0); PUSH32(esp, 0x00374A88u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00374A88: ;
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00374A8B
 * Original: 0x00374A8B - 0x00374AA7 (28 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00374A8B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00374A8B: ;
    edx = 0; /* xor self */
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00374AA6; /* jbe: below or equal (unsigned <=) */

loc_00374A94: ;
    PUSH32(esp, esi);

loc_00374A95: ;
    esi = MEM32(ecx);
    MEM8(edx + esi + 0xF) = 0x80;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00374A95; /* jb: below (unsigned <) */

loc_00374AA5: ;
    POP32(esp, esi);

loc_00374AA6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00374AA7
 * Original: 0x00374AA7 - 0x00374AF2 (75 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00374AA7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00374AA7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00374AB3; /* je: equal / zero */

loc_00374AAF: ;
    MEM8(ecx + 0x17) = MEM8(ecx + 0x17) | 1;

loc_00374AB3: ;
    edx = MEM32(ecx + 0x70);
    PUSH32(esp, esi);
    esi = 0x2000;
    _fa = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + 8), esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00374AC7; /* je: equal / zero */

loc_00374AC1: ;
    MEM16(ecx + 0x16) = MEM16(ecx + 0x16) | 0x43F;

loc_00374AC7: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00374AD1; /* je: equal / zero */

loc_00374ACD: ;
    MEM8(ecx + 0x1A) = MEM8(ecx + 0x1A) | 0x80;

loc_00374AD1: ;
    _fa = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x182000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + 8), 0x182000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00374ADE; /* jne: not equal / not zero */

loc_00374ADA: ;
    MEM8(ecx + 0x15) = MEM8(ecx + 0x15) | 0xE0;

loc_00374ADE: ;
    _fa = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + 8), esi (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00374AEA; /* je: equal / zero */

loc_00374AE4: ;
    MEM8(ecx + 0x64) = 1;
    goto loc_00374AEF;

loc_00374AEA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00374AEFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00374AEF: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00374AF2
 * Original: 0x00374AF2 - 0x00374C05 (275 bytes, 98 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00374AF2(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00374AF2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    ecx = ebp + -8;
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00374B08u); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_00374B08: ;
    ecx = MEM32(esi + 0x70);
    eax = ZX8(MEM8(ecx + 0xE));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x64)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 0x64) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00374B2C; /* je: equal / zero */

loc_00374B19: ;
    _fa = (uint32_t)(MEM8(esi + 0x12)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x12), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00374B29; /* je: equal / zero */

loc_00374B1F: ;
    edi = 0x88780032u;
    goto loc_00374BF7;

loc_00374B29: ;
    MEM8(esi + 0x64) = LO8(eax);

loc_00374B2C: ;
    eax = ZX16(MEM16(ecx + 0xC));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00374B4A; /* je: equal / zero */

loc_00374B33: ;
    eax = eax - 0x68;
    if ((eax != 0)) goto loc_00374B85; /* jne: not equal / not zero */

loc_00374B38: ;
    eax = MEM32(esi + 0x14);
    eax = eax & 0xFFFFFFF;
    eax = eax | 0xA0000000u;

loc_00374B45: ;
    MEM32(esi + 0x14) = eax;
    goto loc_00374B85;

loc_00374B4A: ;
    SET_LO8(eax, MEM8(ecx + 0xF));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 8 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00374B81; /* je: equal / zero */

loc_00374B51: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x10 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00374B72; /* je: equal / zero */

loc_00374B55: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x18) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x18 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00374B63; /* je: equal / zero */

loc_00374B59: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00374B85; /* jne: not equal / not zero */

loc_00374B5D: ;
    MEM8(esi + 0x17) = MEM8(esi + 0x17) | 0xF0;
    goto loc_00374B85;

loc_00374B63: ;
    eax = MEM32(esi + 0x14);
    eax = eax & 0xFFFFFFF;
    eax = eax | 0xE0000000u;
    goto loc_00374B45;

loc_00374B72: ;
    eax = MEM32(esi + 0x14);
    eax = eax & 0xFFFFFFF;
    eax = eax | 0x50000000;
    goto loc_00374B45;

loc_00374B81: ;
    MEM8(esi + 0x17) = MEM8(esi + 0x17) & 0xF;

loc_00374B85: ;
    eax = ZX8(MEM8(ecx + 0xE));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax << 0x10;
    eax = eax ^ MEM32(esi + 0x14);
    eax = eax & 0x1F0000;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) ^ eax;
    _fa = (uint32_t)(MEM8(ecx + 0xE)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0xE), 1 (8-bit) */
    eax = MEM32(esi + 0x14);
    if (CMP_NE(_fa, _fb)) goto loc_00374BA8; /* jne: not equal / not zero */

loc_00374BA1: ;
    eax = eax & 0xF7FFFFFFu;
    goto loc_00374BAD;

loc_00374BA8: ;
    eax = eax | 0x8000000;

loc_00374BAD: ;
    _fa = (uint32_t)(MEM8(esi + 0x12)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x12), 1 (8-bit) */
    MEM32(esi + 0x14) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00374BF7; /* je: equal / zero */

loc_00374BB6: ;
    eax = ZX8(MEM8(esi + 0x64));
    ecx = eax + eax;

loc_00374BBD: ;
    edx = MEM32(-25034736);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00374BBD; /* jb: below (unsigned <) */

loc_00374BCA: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00374BF7; /* jbe: below or equal (unsigned <=) */

loc_00374BD0: ;
    ecx = esi + 0xC;

loc_00374BD3: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    eax = ZX16(MEM16(ecx));
    MEM32(0xFE8202F8u) = eax;
    eax = MEM32(esi + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_00374BE7; /* je: equal / zero */

loc_00374BE2: ;
    eax = eax | 0x400000;

loc_00374BE7: ;
    MEM32(0xFE820304u) = eax;
    eax = ZX8(MEM8(esi + 0x64));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00374BD3; /* jb: below (unsigned <) */

loc_00374BF7: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00374BFFu); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_00374BFF: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00374C05
 * Original: 0x00374C05 - 0x00374C8D (136 bytes, 50 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00374C05(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00374C05: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00374C1Bu); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_00374C1B: ;
    ebx = esi + 0x12;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00374C81; /* je: equal / zero */

loc_00374C23: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM8(esi + 0x64)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x64), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00374C65; /* jbe: below or equal (unsigned <=) */

loc_00374C2D: ;
    edx = esi + 0xC;
    PUSH32(esp, edi);

loc_00374C31: ;
    edi = ZX16(MEM16(edx));
    edi = edi << 7;
    edi = edi + MEM32(0x37AE88);
    eax = 0; /* xor self */
    PUSH32(esp, 0x20);
    POP32(esp, ecx);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = ZX16(MEM16(edx));
    edi = MEM32(0x37AE88);
    ecx = eax;
    ecx = ecx << 7;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + edi + 0x7C) = eax;
    eax = ZX8(MEM8(esi + 0x64));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00374C31; /* jb: below (unsigned <) */

loc_00374C64: ;
    POP32(esp, edi);

loc_00374C65: ;
    MEM32(esi + 0x68) = MEM32(esi + 0x68) & 0;
    MEM32(esi + 0x6C) = MEM32(esi + 0x6C) & 0;
    ecx = MEM32(esi + 8);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00374C76u); RECOMP_ABI_CALL(0x00372C5Eu, sub_00372C5E); /* call 0x00372C5E */

loc_00374C76: ;
    SET_LO16(edx, 0x10);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00374C81u); RECOMP_ABI_CALL(0x00374A61u, sub_00374A61); /* call 0x00374A61 */

loc_00374C81: ;
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00374C89u); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_00374C89: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00374C8D
 * Original: 0x00374C8D - 0x00374D3E (177 bytes, 77 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00374C8D(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00374C8D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x20;
    ecx = MEM32(ecx + 0x70);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_BE(_fa & _fb, 0)) goto loc_00374CB1; /* jbe: below or equal (unsigned <=) */

loc_00374CA1: ;
    ecx = ecx + 0x28;

loc_00374CA4: ;
    esi = ZX8(MEM8(ecx));
    MEM32(ebp + eax * 4 + -32) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00374CA4; /* jb: below (unsigned <) */

loc_00374CB1: ;
    edx = 0; /* xor self */
    goto loc_00374CD0;

loc_00374CB5: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00374CCA; /* jbe: below or equal (unsigned <=) */

loc_00374CBB: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + ecx * 4 + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + ecx * 4 + -32) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00374CC6; /* je: equal / zero */

loc_00374CC1: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00374CBB; /* jb: below (unsigned <) */

loc_00374CC6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00374CCF; /* jb: below (unsigned <) */

loc_00374CCA: ;
    MEM32(ebp + eax * 4 + -32) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00374CCF: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00374CD0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00374CB5; /* jb: below (unsigned <) */

loc_00374CD5: ;
    esi = MEM32(ebp + 8);
    MEM32(esi) = MEM32(esi) & 0;
    eax = 0; /* xor self */
    edx = 0; /* xor self */
    ecx = 0; /* xor self */

loc_00374CE1: ;
    edi = MEM32(ebp + eax * 4 + -32);
    edi = edi << LO8(ecx);
    ecx = ecx + 5;
    edx = edx | edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xF (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00374CE1; /* jb: below (unsigned <) */

loc_00374CF2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    MEM32(esi) = edx;
    if (CMP_AE(_fa, _fb)) goto loc_00374D10; /* jae: above or equal (unsigned >=) */

loc_00374CF9: ;
    ecx = eax + eax * 4 + 1;

loc_00374CFD: ;
    edi = MEM32(ebp + eax * 4 + -32);
    edi = edi << LO8(ecx);
    ecx = ecx + 5;
    edx = edx | edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1F (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00374CFD; /* jb: below (unsigned <) */

loc_00374D0E: ;
    MEM32(esi) = edx;

loc_00374D10: ;
    edx = MEM32(ebp + 0xC);
    MEM16(edx) = MEM16(edx) & 0xFC00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    ecx = MEM32(edx);
    if (CMP_AE(_fa, _fb)) goto loc_00374D38; /* jae: above or equal (unsigned >=) */

loc_00374D1F: ;
    esi = ecx;
    ecx = eax + eax * 4 + -30;

loc_00374D25: ;
    edi = MEM32(ebp + eax * 4 + -32);
    edi = edi << LO8(ecx);
    ecx = ecx + 5;
    esi = esi | edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00374D25; /* jb: below (unsigned <) */

loc_00374D36: ;
    MEM32(edx) = esi;

loc_00374D38: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00374D3E
 * Original: 0x00374D3E - 0x00374F92 (596 bytes, 208 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00374D3E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00374D3E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x4C;
    MEM32(ebp + -36) = MEM32(ebp + -36) & 0;
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x70);
    _fa = (uint32_t)(MEM32(ebx + 0xB8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xB8), 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -44) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00374E2A; /* je: equal / zero */

loc_00374D5E: ;
    _fa = (uint32_t)(MEM8(ebx + 0xB)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0xB), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00374E2A; /* je: equal / zero */

loc_00374D68: ;
    eax = ebx;
    eax = MEM32(eax + 0xB8);
    edi = MEM32(eax + 8);
    edi = edi + MEM32(eax + 4);
    eax = 0xFFFFD8F0u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(ebp + -16) = edi;
    if (CMP_GE(_fas, _fbs)) goto loc_00374D86; /* jge: greater or equal (signed >=) */

loc_00374D82: ;
    edi = eax;
    goto loc_00374D8C;

loc_00374D86: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00374D8F; /* jle: less or equal (signed <=) */

loc_00374D8A: ;
    edi = 0; /* xor self */

loc_00374D8C: ;
    MEM32(ebp + -16) = edi;

loc_00374D8F: ;
    edx = MEM32(ecx + 0x70);
    edx = MEM32(edx + 0xB8);
    esi = MEM32(edx + 0x1C);
    esi = esi + MEM32(edx + 0x14);
    esi = esi + MEM32(edx + 0xC);
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(ebp + -12) = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_00374DAF; /* jge: greater or equal (signed >=) */

loc_00374DAA: ;
    MEM32(ebp + -12) = eax;
    goto loc_00374DB7;

loc_00374DAF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00374DB7; /* jle: less or equal (signed <=) */

loc_00374DB3: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;

loc_00374DB7: ;
    edx = MEM32(ecx + 0x70);
    esi = MEM32(edx + 0xB8);
    edx = MEM32(esi + 0x1C);
    edx = edx + MEM32(esi + 0x10);
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(ebp + -8) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_00374DD4; /* jge: greater or equal (signed >=) */

loc_00374DCF: ;
    MEM32(ebp + -8) = eax;
    goto loc_00374DDC;

loc_00374DD4: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00374DDC; /* jle: less or equal (signed <=) */

loc_00374DD8: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;

loc_00374DDC: ;
    edx = MEM32(ecx + 0x70);
    edx = MEM32(edx + 0xB8);
    esi = MEM32(edx + 0x1C);
    esi = esi + MEM32(edx + 0x18);
    esi = esi + MEM32(edx + 0xC);
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(ebp + -20) = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_00374DFC; /* jge: greater or equal (signed >=) */

loc_00374DF7: ;
    MEM32(ebp + -20) = eax;
    goto loc_00374E04;

loc_00374DFC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00374E04; /* jle: less or equal (signed <=) */

loc_00374E00: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;

loc_00374E04: ;
    edx = MEM32(ebx + 0xB8);
    edx = MEM32(edx + 0x20);
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(ebp + -4) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_00374E1B; /* jge: greater or equal (signed >=) */

loc_00374E16: ;
    MEM32(ebp + -4) = eax;
    goto loc_00374E23;

loc_00374E1B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00374E23; /* jle: less or equal (signed <=) */

loc_00374E1F: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;

loc_00374E23: ;
    MEM32(ebp + -36) = 1;

loc_00374E2A: ;
    edi = ZX8(MEM8(ecx + 0x64));
    eax = MEM32(ebx + 0x24);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    esi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(ebp + -28) = esi;
    MEM32(ebp + -32) = eax;
    if (CMP_BE(_fa & _fb, 0)) goto loc_00374F82; /* jbe: below or equal (unsigned <=) */

loc_00374E45: ;
    edi = 0xFFF;

loc_00374E4A: ;
    ebx = 0; /* xor self */
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -32));
    MEM32(ebp + -24) = ebx;
    MEM32(ebp + -40) = eax;
    goto loc_00374E5D;

loc_00374E5A: ;
    eax = MEM32(ebp + -40);

loc_00374E5D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00374F89; /* jb: below (unsigned <) */

loc_00374E65: ;
    eax = esi + 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -32));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00374F89; /* jae: above or equal (unsigned >=) */

loc_00374E74: ;
    edx = MEM32(ecx + 0x70);
    eax = ZX8(MEM8(edx + ebx + 0x28));
    eax = MEM32(edx + eax * 4 + 0x30);
    eax = eax + MEM32(edx + 0x1C);
    esi = ebp + ebx * 4 + -76;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00374EC7; /* je: equal / zero */

loc_00374E91: ;
    SET_LO8(ebx, MEM8(ebx + edx + 0x28));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00374EC2; /* je: equal / zero */

loc_00374E9A: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 5 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00374EBD; /* jbe: below or equal (unsigned <=) */

loc_00374E9F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 7 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00374EB8; /* jbe: below or equal (unsigned <=) */

loc_00374EA4: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 9 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00374EB3; /* jbe: below or equal (unsigned <=) */

loc_00374EA9: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xA (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00374EBD; /* jne: not equal / not zero */

loc_00374EAE: ;
    eax = eax - MEM32(ebp + -4);
    goto loc_00374EC5;

loc_00374EB3: ;
    eax = eax - MEM32(ebp + -8);
    goto loc_00374EC5;

loc_00374EB8: ;
    eax = eax - MEM32(ebp + -12);
    goto loc_00374EC5;

loc_00374EBD: ;
    eax = eax - MEM32(ebp + -16);
    goto loc_00374EC5;

loc_00374EC2: ;
    eax = eax - MEM32(ebp + -20);

loc_00374EC5: ;
    MEM32(esi) = eax;

loc_00374EC7: ;
    eax = MEM32(esi);
    PUSH32(esp, 0x64);
    eax = eax << 6;
    edx = 0; /* xor self */
    POP32(esp, ebx);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    ebx = MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00374EDE; /* jbe: below or equal (unsigned <=) */

loc_00374EDC: ;
    MEM32(esi) = edi;

loc_00374EDE: ;
    esi = MEM32(ebp + -28);

loc_00374EE1: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 8 (32-bit) */
    MEM32(ebp + -24) = ebx;
    if (CMP_B(_fa, _fb)) goto loc_00374E5A; /* jb: below (unsigned <) */

loc_00374EEE: ;
    eax = MEM32(ebp + -48);
    edx = MEM32(ebp + -72);
    ecx = eax;
    ecx = ecx & 0xF;
    edx = edx << 4;
    ecx = ecx | edx;
    edx = MEM32(ebp + -76);
    ecx = ecx << 0xC;
    edx = edx & edi;
    ecx = ecx | edx;
    edx = MEM32(ebp + -52);
    ecx = ecx << 4;
    ebx = edx;
    ebx = ebx & 0xF;
    ecx = ecx | ebx;
    ebx = MEM32(ebp + 8);
    MEM32(ebx + esi * 4) = ecx;
    ecx = MEM32(ebp + -64);
    ebx = eax;
    ebx = ebx & 0xF0;
    ecx = ecx << 8;
    ebx = ebx | ecx;
    ecx = MEM32(ebp + -68);
    ebx = ebx << 8;
    ecx = ecx & edi;
    ebx = ebx | ecx;
    ebx = ebx << 4;
    ecx = edx;
    ecx = ecx >> 4;
    ecx = ecx & 0xF;
    ebx = ebx | ecx;
    ecx = MEM32(ebp + 8);
    MEM32(ecx + esi * 4 + 0xC) = ebx;
    ebx = MEM32(ebp + -56);
    eax = eax & 0xF00;
    ebx = ebx << 0xC;
    eax = eax | ebx;
    ebx = MEM32(ebp + -60);
    eax = eax << 4;
    ebx = ebx & edi;
    eax = eax | ebx;
    edx = edx >> 8;
    eax = eax << 4;
    edx = edx & 0xF;
    eax = eax | edx;
    MEM32(ecx + esi * 4 + 0x18) = eax;
    ecx = MEM32(ebp + -44);
    eax = ZX8(MEM8(ecx + 0x64));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(ebp + -28) = esi;
    if (CMP_B(_fa, _fb)) goto loc_00374E4A; /* jb: below (unsigned <) */

loc_00374F82: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

loc_00374F89: ;
    MEM32(ebp + ebx * 4 + -76) = edi;
    goto loc_00374EE1;

}

/**
 * sub_00374F92
 * Original: 0x00374F92 - 0x00375014 (130 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00374F92(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00374F92: ;
    edx = MEM32(ecx + 0x70);
    PUSH32(esp, esi);
    esi = MEM32(edx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x182000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x182000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00374FA5; /* je: equal / zero */

loc_00374FA1: ;
    eax = 0; /* xor self */
    goto loc_00375007;

loc_00374FA5: ;
    ecx = MEM32(ecx + 0x70);
    _fa = (uint32_t)(MEM32(ecx + 0xB8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xB8), 0 (32-bit) */
    eax = MEM32(ecx + 0x18);
    if (CMP_EQ(_fa, _fb)) goto loc_00374FC5; /* je: equal / zero */

loc_00374FB4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x1000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00374FC5; /* je: equal / zero */

loc_00374FBC: ;
    ecx = MEM32(edx + 0xB8);
    eax = eax + MEM32(ecx + 0x24);

loc_00374FC5: ;
    edx = MEM32(edx + 0xB0);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00374FF3; /* je: equal / zero */

loc_00374FCF: ;
    ecx = MEM32(edx + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00374FF3; /* je: equal / zero */

loc_00374FD6: ;
    edx = ecx + 0x80;
    ecx = MEM32(edx);
    eax = eax + MEM32(ecx + 0x18);
    _fa = (uint32_t)(MEM32(ecx + 0xB8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xB8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00374FF3; /* je: equal / zero */

loc_00374FEA: ;
    ecx = MEM32(ecx + 0xB8);
    eax = eax + MEM32(ecx + 0x24);

loc_00374FF3: ;
    ecx = 0xFFFF8001u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00375005; /* jl: less (signed <) */

loc_00374FFC: ;
    ecx = 0x1FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00375007; /* jle: less or equal (signed <=) */

loc_00375005: ;
    eax = ecx;

loc_00375007: ;
    ecx = MEM32(esp + 8);
    eax = eax << 0x10;
    MEM32(ecx) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00375014
 * Original: 0x00375014 - 0x00375088 (116 bytes, 44 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00375014(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00375014: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ecx + 0x70);
    edx = MEM32(eax + 0xB0);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037505B; /* je: equal / zero */

loc_00375027: ;
    edx = MEM32(edx + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037505B; /* je: equal / zero */

loc_0037502E: ;
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x70);
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 8), 0x82000 (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0037505B; /* je: equal / zero */

loc_0037503C: ;
    eax = MEM32(ebp + 8);
    MEM8(eax) = 2;
    eax = MEM32(ecx + 8);
    edx = MEM32(edx + 0x50);
    eax = eax + 0x498;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    eax = MEM32(ebp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_00375081; /* je: equal / zero */

loc_00375054: ;
    edx = edx + 0xFFFFFFB4u;
    MEM32(eax) = edx;
    goto loc_00375083;

loc_0037505B: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x182000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x182000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0037506D; /* je: equal / zero */

loc_00375065: ;
    eax = MEM32(ebp + 8);
    MEM8(eax) = 2;
    goto loc_0037507E;

loc_0037506D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200010) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x200010 (32-bit) */
    eax = MEM32(ebp + 8);
    if (TEST_Z(_fa, _fb)) goto loc_0037507C; /* je: equal / zero */

loc_00375077: ;
    MEM8(eax) = 1;
    goto loc_0037507E;

loc_0037507C: ;
    MEM8(eax) = LO8(ebx);

loc_0037507E: ;
    eax = MEM32(ebp + 0xC);

loc_00375081: ;
    MEM32(eax) = ebx;

loc_00375083: ;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00375088
 * Original: 0x00375088 - 0x00375264 (476 bytes, 147 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00375088(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00375088: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x1C;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ZX8(MEM8(esi + 0x65));
    eax = ecx + ecx * 2;
    eax = eax << 2;
    edx = MEM32(eax + 0x37A588);
    PUSH32(esp, edi);
    edi = MEM32(edx + -25165824);
    MEM32(ebp + -4) = edi;
    edi = MEM32(eax + 0x37A58C);
    eax = MEM32(eax + 0x37A590);
    edi = MEM32(edi + -25165824);
    eax = MEM32(eax + -25165824);
    MEM32(ebp + -28) = eax;
    eax = MEM32(esi + 8);
    ecx = eax + ecx * 8 + 0x488;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(ebp + -24) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_003750E3; /* jne: not equal / not zero */

loc_003750DA: ;
    edi = 0; /* xor self */
    eax = 0xFFFF;
    goto loc_003750EF;

loc_003750E3: ;
    edi = eax + -76;
    eax = ZX8(MEM8(edi + 0x64));
    eax = ZX16(MEM16(edi + eax * 2 + 0xA));

loc_003750EF: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00375102; /* jne: not equal / not zero */

loc_003750F7: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    ebx = 0xFFFF;
    goto loc_0037510C;

loc_00375102: ;
    ebx = ebx + 0xFFFFFFB4u;
    MEM32(ebp + -12) = ebx;
    ebx = ZX16(MEM16(ebx + 0xC));

loc_0037510C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0037512A; /* je: equal / zero */

loc_00375110: ;
    ecx = MEM32(0x37AE88);
    eax = eax << 7;
    ecx = eax + ecx + 0x7C;
    eax = MEM32(ecx);
    eax = eax & 0xFFFF0000u;
    eax = eax | ebx;
    MEM32(ecx) = eax;
    goto loc_00375133;

loc_0037512A: ;
    MEM32(ebp + -4) = ebx;
    MEM32(edx + -25165824) = ebx;

loc_00375133: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM8(esi + 0x64)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x64), LO8(eax) (8-bit) */
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -20) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_003751F7; /* jbe: below or equal (unsigned <=) */

loc_00375147: ;
    edx = esi + 0xC;

loc_0037514A: ;
    eax = ZX16(MEM16(edx));
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00375159; /* jne: not equal / not zero */

loc_00375152: ;
    MEM32(ebp + -16) = 1;

loc_00375159: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00375165; /* jne: not equal / not zero */

loc_0037515E: ;
    MEM32(ebp + -20) = 1;

loc_00375165: ;
    edi = ZX16(MEM16(edx));
    ecx = MEM32(0x37AE88);
    eax = edi;
    eax = eax << 7;
    ecx = eax + ecx + 0x7C;
    eax = MEM32(ecx);
    eax = eax & 0xFFFF0000u;
    eax = eax | edi;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = eax;
    eax = ZX8(MEM8(esi + 0x64));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0037514A; /* jb: below (unsigned <) */

loc_00375190: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003751D5; /* je: equal / zero */

loc_00375197: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003751B7; /* je: equal / zero */

loc_0037519C: ;
    eax = MEM32(0x37AE88);
    ecx = ebx;
    ebx = ebx << 7;
    ebx = MEM32(ebx + eax + 0x7C);
    eax = 0xFFFF;
    ebx = ebx & eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003751BF; /* jne: not equal / not zero */

loc_003751B5: ;
    goto loc_003751BC;

loc_003751B7: ;
    ecx = 0xFFFF;

loc_003751BC: ;
    ebx = MEM32(ebp + -4);

loc_003751BF: ;
    eax = ZX8(MEM8(esi + 0x65));
    eax = eax + eax * 2;
    eax = MEM32(eax * 4 + 0x37A58C);
    MEM32(eax + -25165824) = ecx;
    goto loc_003751E3;

loc_003751D5: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003751F7; /* je: equal / zero */

loc_003751DA: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003751E3; /* jne: not equal / not zero */

loc_003751E0: ;
    ebx = MEM32(ebp + -4);

loc_003751E3: ;
    eax = ZX8(MEM8(esi + 0x65));
    eax = eax + eax * 2;
    eax = MEM32(eax * 4 + 0x37A590);
    MEM32(eax + -25165824) = ebx;

loc_003751F7: ;
    eax = esi + 0x4C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00375200u); RECOMP_ABI_CALL(0x0036F300u, sub_0036F300); /* call 0x0036F300 */

loc_00375200: ;
    ecx = esi + 0x12;
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ecx), 0x8000 (16-bit) */
    MEM8(esi + 0x65) = 0xFF;
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0037521A; /* je: equal / zero */

loc_0037520F: ;
    SET_LO16(edx, 0x7FFF);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00375218u); RECOMP_ABI_CALL(0x00374A61u, sub_00374A61); /* call 0x00374A61 */

loc_00375218: ;
    goto loc_0037525E;

loc_0037521A: ;
    eax = MEM32(esi + 0x68);
    edx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edx (32-bit) */
    MEM8(eax + 0x3F) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0037525E; /* je: equal / zero */

loc_00375228: ;
    ecx = MEM32(esi + 8);
    eax = esi + 0x54;
    ecx = ecx + 0x4A0;
    MEM32(eax) = ecx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    ecx = MEM32(eax);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esi + 8);
    MEM32(eax + 0x4B8) = MEM32(eax + 0x4B8) | 0x40;
    eax = MEM32(esi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    eax = eax + 0x4C8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6D20); PUSH32(esp, 0x0037525Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0037525E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00375264
 * Original: 0x00375264 - 0x003752C9 (101 bytes, 38 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00375264(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00375264: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00375279u); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_00375279: ;
    MEM32(0x37ACFC) = MEM32(0x37ACFC) + 1;
    _fa = (uint32_t)(MEM32(0x37ACFC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(esi + 8);
    PUSH32(esp, 1);
    ecx = ecx + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037528Cu); RECOMP_ABI_CALL(0x003784B0u, sub_003784B0); /* call 0x003784B0 */

loc_0037528C: ;
    ebx = eax;
    SET_LO16(eax, MEM16(esi + 0x12));
    SET_LO16(eax, LO16(eax) & 0x8001);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x8001) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x8001 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003752A5; /* jne: not equal / not zero */

loc_0037529C: ;
    PUSH32(esp, 0);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003752A5u); RECOMP_ABI_CALL(0x00375088u, sub_00375088); /* call 0x00375088 */

loc_003752A5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003752B6; /* je: equal / zero */

loc_003752A9: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0);
    ecx = ecx + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003752B6u); RECOMP_ABI_CALL(0x003784B0u, sub_003784B0); /* call 0x003784B0 */

loc_003752B6: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x003752BDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003752BD: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003752C5u); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_003752C5: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003752C9
 * Original: 0x003752C9 - 0x0037534D (132 bytes, 47 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003752C9(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003752C9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003752DDu); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_003752DD: ;
    ecx = esi + 0x12;
    SET_LO8(eax, MEM8(ecx));
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00375342; /* jne: not equal / not zero */

loc_003752E8: ;
    SET_LO16(edx, 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003752F1u); RECOMP_ABI_CALL(0x00374A65u, sub_00374A65); /* call 0x00374A65 */

loc_003752F1: ;
    eax = ZX8(MEM8(esi + 0x64));
    MEM8(esi + 0x16) = MEM8(esi + 0x16) & 0x7F;
    ecx = eax + eax * 2;

loc_003752FC: ;
    edx = MEM32(-25034736);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003752FC; /* jb: below (unsigned <) */

loc_00375309: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00375342; /* jbe: below or equal (unsigned <=) */

loc_0037530F: ;
    eax = esi + 0xC;

loc_00375312: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    ecx = ZX16(MEM16(eax));
    MEM32(-25033992) = ecx;
    ecx = MEM32(esi + 0x14);
    if (TEST_Z(_fa, _fb)) goto loc_00375328; /* je: equal / zero */

loc_00375322: ;
    ecx = ecx | 0x400000;

loc_00375328: ;
    MEM32(-25033980) = ecx;
    ecx = ZX16(MEM16(eax));
    MEM32(-25034452) = ecx;
    ecx = ZX8(MEM8(esi + 0x64));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00375312; /* jb: below (unsigned <) */

loc_00375342: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037534Au); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_0037534A: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0037534D
 * Original: 0x0037534D - 0x003753A1 (84 bytes, 34 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0037534D(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0037534D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    eax = ebp + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    esi = ecx;
    { uint32_t _icall_target = MEM32(0x3C6BD8); PUSH32(esp, 0x0037535Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0037535F: ;
    SET_LO16(eax, MEM16(esi + 0x12));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) & 0x8001);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x8001) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x8001 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00375395; /* jne: not equal / not zero */

loc_0037536D: ;
    ecx = MEM32(esi + 0x78);
    eax = MEM32(esi + 0x7C);
    edx = MEM32(ebp + -4);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x4C4B40)) >> 32) & 1);
    ecx = ecx + 0x4C4B40;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0037539E; /* jl: less (signed <) */

loc_00375383: ;
    if (CMP_G(_fas, _fbs)) goto loc_0037538C; /* jg: greater (signed >) */

loc_00375385: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0037539E; /* jb: below (unsigned <) */

loc_0037538C: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00375393u); RECOMP_ABI_CALL(0x00375264u, sub_00375264); /* call 0x00375264 */

loc_00375393: ;
    goto loc_0037539E;

loc_00375395: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0037539Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0037539E: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003753A1
 * Original: 0x003753A1 - 0x00375487 (230 bytes, 84 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003753A1(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003753A1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003753BCu); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_003753BC: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    edi = esi + 0x12;
    SET_LO16(eax, MEM16(edi));
    ebx = 0x444;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 8) = MEM32(ebp + 8) & ebx;
    _cf = 0; /* logical op clears CF */
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00375475; /* je: equal / zero */

loc_003753D7: ;
    eax = MEM32(ebp + 8);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edi));
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x40;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003753FF; /* je: equal / zero */

loc_003753E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    ecx = MEM32(esi + 8);
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_003753FA; /* je: equal / zero */

loc_003753F0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003753F5u); RECOMP_ABI_CALL(0x003730A8u, sub_003730A8); /* call 0x003730A8 */

loc_003753F5: ;
    MEM32(ebp + -4) = eax;
    goto loc_003753FF;

loc_003753FA: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003753FFu); RECOMP_ABI_CALL(0x003730CFu, sub_003730CF); /* call 0x003730CF */

loc_003753FF: ;
    SET_LO16(ecx, MEM16(edi));
    eax = MEM32(ebp + 8);
    _cf = 0; /* logical op clears CF */
    SET_LO16(ecx, LO16(ecx) & LO16(ebx));
    _cf = (int)((LO16(ecx)) != 0);
    SET_LO16(ecx, (uint32_t)(-(int32_t)LO16(ecx)));
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(edx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00375462; /* je: equal / zero */

loc_0037541A: ;
    SET_LO8(ecx, MEM8(edi));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 3 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00375462; /* jne: not equal / not zero */

loc_00375424: ;
    ecx = ZX8(MEM8(esi + 0x64));
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x40000;

loc_00375431: ;
    edx = MEM32(-25034736);
    if (2) _cf = (int)(((edx) >> ((2) - 1)) & 1);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00375431; /* jb: below (unsigned <) */

loc_0037543E: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00375462; /* jbe: below or equal (unsigned <=) */

loc_00375444: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFF0000u;
    ecx = esi + 0xC;

loc_0037544C: ;
    ebx = ZX16(MEM16(ecx));
    _cf = 0; /* logical op clears CF */
    ebx = ebx | eax;
    MEM32(-25034432) = ebx;
    ebx = ZX8(MEM8(esi + 0x64));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0037544C; /* jb: below (unsigned <) */

loc_00375462: ;
    SET_LO16(edx, 0xFBBB);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037546Du); RECOMP_ABI_CALL(0x00374A61u, sub_00374A61); /* call 0x00374A61 */

loc_0037546D: ;
    edx = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00375475u); RECOMP_ABI_CALL(0x00374A65u, sub_00374A65); /* call 0x00374A65 */

loc_00375475: ;
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037547Du); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_0037547D: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00375487
 * Original: 0x00375487 - 0x003755F6 (367 bytes, 130 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00375487(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_00375487: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x1C;
    MEM32(ebp + -24) = MEM32(ebp + -24) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -28;
    MEM32(ebp + -8) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003754A1u); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_003754A1: ;
    edx = MEM32(ebp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003754B7; /* jne: not equal / not zero */

loc_003754A8: ;
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003754B7; /* je: equal / zero */

loc_003754B5: ;
    edx = eax;

loc_003754B7: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    edi = 0xFFFF;
    if (TEST_NZ(_fa, _fb)) goto loc_003754D5; /* jne: not equal / not zero */

loc_003754C3: ;
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00375516; /* je: equal / zero */

loc_003754D0: ;
    ecx = eax;
    MEM32(ebp + 0xC) = ecx;

loc_003754D5: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003754DF; /* je: equal / zero */

loc_003754D9: ;
    _fa = (uint32_t)(MEM32(edx + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x40), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00375516; /* je: equal / zero */

loc_003754DF: ;
    eax = MEM32(0x37A6F8);
    edx = eax;
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003754F8; /* je: equal / zero */

loc_003754ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003754F8; /* jne: not equal / not zero */

loc_003754F4: ;
    eax = 0; /* xor self */
    goto loc_003754FB;

loc_003754F8: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003754FB: ;
    fp_push(MEMF(ecx + 0x2C)); /* fld float */
    edx = ebp + -20;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00375514u); RECOMP_ABI_CALL(0x00374A69u, sub_00374A69); /* call 0x00374A69 */

loc_00375514: ;
    goto loc_00375521;

loc_00375516: ;
    eax = 0x37A5AC;
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -20) = eax;

loc_00375521: ;
    SET_LO8(ecx, MEM8(esi + 0x66));
    eax = ZX16(MEM16(esi + 0xC));
    edx = ZX8(LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    eax = edx + eax * 2;
    MEM8(esi + 0x66) = LO8(ecx);

loc_00375536: ;
    ecx = MEM32(-25034736);
    ecx = ecx & 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x4C (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00375536; /* jb: below (unsigned <) */

loc_00375544: ;
    eax = eax & edi;
    MEM32(0xFE820160u) = eax;
    edi = MEM32(ebp + -16);
    ecx = MEM32(ebp + -20);
    MEM32(ebp + -4) = edi;
    MEM32(ebp + -12) = eax;
    esi = 0; /* xor self */
    MEM32(ebp + -4) = MEM32(ebp + -4) - ecx;
    MEM32(ebp + 8) = 0xFE820400u;
    eax = ecx + 1;

loc_00375566: ;
    ebx = MEM32(ebp + -4);
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(ebx + eax));
    ebx = ZX8(MEM8(edi + esi * 2));
    SET_LO8(edx, MEM8(eax));
    edx = edx << 8;
    edx = edx | ebx;
    ebx = ZX8(MEM8(eax + -1));
    edx = edx << 8;
    edx = edx | ebx;
    ebx = MEM32(ebp + 8);
    MEM32(ebp + 8) = MEM32(ebp + 8) + 4;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFE82043Cu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xFE82043Cu (32-bit) */
    MEM32(ebx) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00375566; /* jl: less (signed <) */

loc_00375597: ;
    eax = esi + esi;
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(eax + edi));
    SET_LO8(edx, MEM8(eax + ecx));
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003755C7; /* je: equal / zero */

loc_003755A9: ;
    fp_push(MEMF(eax + 0x28)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003755BF; /* jne: not equal / not zero */

loc_003755B9: ;
    eax = ZX8(MEM8(ecx + 0x1F));
    goto loc_003755C9;

loc_003755BF: ;
    eax = ZX8(MEM8(edi + 0x1F));
    eax = (uint32_t)(-(int32_t)eax);
    goto loc_003755C9;

loc_003755C7: ;
    eax = 0; /* xor self */

loc_003755C9: ;
    eax = eax << 0x19;
    eax = eax | edx;
    MEM32(0xFE82043Cu) = eax;
    eax = MEM32(ebp + -8);
    eax = ZX16(MEM16(eax + 0xC));
    MEM32(0xFE8202F8u) = eax;
    eax = MEM32(ebp + -12);
    ecx = ebp + -28;
    MEM32(0xFE82031Cu) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003755EFu); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_003755EF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003755F6
 * Original: 0x003755F6 - 0x00375788 (402 bytes, 137 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003755F6(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003755F6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037560Cu); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_0037560C: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0037568A; /* jne: not equal / not zero */

loc_00375615: ;
    ecx = MEM32(eax + 4);
    ecx = ecx << 0x18;
    ecx = ecx ^ MEM32(esi + 0x40);
    edi = 0xFFF000;
    ecx = ecx & 0xF000000;
    MEM32(esi + 0x40) = MEM32(esi + 0x40) ^ ecx;
    edx = MEM32(eax + 0x18);
    edx = edx ^ MEM32(esi + 0x18);
    ecx = 0xFFF;
    edx = edx & ecx;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) ^ edx;
    SET_LO8(edx, MEM8(eax + 0x20));
    MEM8(esi + 0x1F) = LO8(edx);
    edx = MEM32(eax + 0xC);
    edx = edx ^ MEM32(esi + 0x24);
    edx = edx & ecx;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) ^ edx;
    ebx = MEM32(eax + 8);
    edx = MEM32(esi + 0x24);
    ebx = ebx << 0xC;
    ebx = ebx ^ edx;
    ebx = ebx & edi;
    ebx = ebx ^ edx;
    MEM32(esi + 0x24) = ebx;
    SET_LO8(edx, MEM8(eax + 0x24));
    MEM8(esi + 0x27) = LO8(edx);
    edx = MEM32(eax + 0x14);
    edx = edx ^ MEM32(esi + 0x28);
    edx = edx & ecx;
    MEM32(esi + 0x28) = MEM32(esi + 0x28) ^ edx;
    edx = MEM32(eax + 0x10);
    ecx = MEM32(esi + 0x28);
    edx = edx << 0xC;
    edx = edx ^ ecx;
    edx = edx & edi;
    edx = edx ^ ecx;
    MEM32(esi + 0x28) = edx;
    SET_LO8(eax, MEM8(eax + 0x1C));
    MEM8(esi + 0x2B) = LO8(eax);
    goto loc_003756F8;

loc_0037568A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003756F8; /* jne: not equal / not zero */

loc_0037568F: ;
    ecx = MEM32(eax + 4);
    edx = MEM32(esi + 0x40);
    edx = edx & 0xFFFFFFF;
    ecx = ecx << 0x1C;
    ecx = ecx | edx;
    MEM32(esi + 0x40) = ecx;
    edx = MEM32(eax + 0x18);
    edx = edx ^ MEM32(esi + 0x30);
    ecx = 0xFFF;
    edx = edx & ecx;
    MEM32(esi + 0x30) = MEM32(esi + 0x30) ^ edx;
    edx = MEM32(eax + 0xC);
    edx = edx ^ MEM32(esi + 0x1C);
    edi = 0xFFF000;
    edx = edx & ecx;
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) ^ edx;
    ebx = MEM32(eax + 8);
    edx = MEM32(esi + 0x1C);
    ebx = ebx << 0xC;
    ebx = ebx ^ edx;
    ebx = ebx & edi;
    ebx = ebx ^ edx;
    MEM32(esi + 0x1C) = ebx;
    edx = MEM32(eax + 0x14);
    edx = edx ^ MEM32(esi + 0x20);
    edx = edx & ecx;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) ^ edx;
    edx = MEM32(eax + 0x10);
    ecx = MEM32(esi + 0x20);
    edx = edx << 0xC;
    edx = edx ^ ecx;
    edx = edx & edi;
    edx = edx ^ ecx;
    MEM32(esi + 0x20) = edx;
    SET_LO8(eax, MEM8(eax + 0x1C));
    MEM8(esi + 0x23) = LO8(eax);

loc_003756F8: ;
    edx = 0; /* xor self */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(esi + 0x12)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x12), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00375777; /* je: equal / zero */

loc_00375700: ;
    eax = ZX8(MEM8(esi + 0x64));
    ecx = eax + eax * 8;

loc_00375707: ;
    edi = MEM32(-25034736);
    edi = edi >> 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00375707; /* jb: below (unsigned <) */

loc_00375714: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00375777; /* jbe: below or equal (unsigned <=) */

loc_0037571A: ;
    eax = esi + 0xC;

loc_0037571D: ;
    edi = ZX16(MEM16(eax));
    MEM32(-25033992) = edi;
    MEM32(-25033988) = edx;
    edi = MEM32(esi + 0x18);
    MEM32(-25033960) = edi;
    edi = MEM32(esi + 0x1C);
    MEM32(-25033976) = edi;
    edi = MEM32(esi + 0x20);
    MEM32(-25033972) = edi;
    edi = MEM32(esi + 0x24);
    MEM32(-25033968) = edi;
    edi = MEM32(esi + 0x28);
    MEM32(-25033964) = edi;
    edi = MEM32(esi + 0x30);
    MEM32(-25033876) = edi;
    MEM32(-25033988) = 0;
    edi = ZX8(MEM8(esi + 0x64));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0037571D; /* jb: below (unsigned <) */

loc_00375777: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037577Fu); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_0037577F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00375788
 * Original: 0x00375788 - 0x003758D2 (330 bytes, 116 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00375788(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00375788: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x20;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037579Fu); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_0037579F: ;
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edx = 0xFFFF;
    if (TEST_Z(_fa, _fb)) goto loc_003757BE; /* je: equal / zero */

loc_003757AB: ;
    PUSH32(esp, 6);
    POP32(esp, ecx);
    edi = ebp + -32;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    esi = MEM32(ebp + -20);
    ecx = MEM32(ebp + -24);
    eax = MEM32(ebp + -28);
    goto loc_003757EA;

loc_003757BE: ;
    ecx = MEM32(ebx + 0x38);
    edi = MEM32(ebx + 0x3C);
    esi = ZX16(MEM16(ebx + 0x3A));
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebx + 0x1A));
    ecx = ecx & edx;
    eax = eax & 3;
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebx + 0x18);
    eax = eax >> 0x12;
    eax = eax & 7;
    edi = edi & edx;
    MEM32(ebp + -16) = edi;
    edi = ZX16(MEM16(ebx + 0x3E));
    MEM32(ebp + -12) = edi;

loc_003757EA: ;
    edi = MEM32(ebx + 0x70);
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200010) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + 8), 0x200010 (32-bit) */
    edi = MEM32(ebp + -32);
    if (TEST_Z(_fa, _fb)) goto loc_00375800; /* je: equal / zero */

loc_003757F9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00375800; /* jne: not equal / not zero */

loc_003757FD: ;
    PUSH32(esp, 3);
    POP32(esp, edi);

loc_00375800: ;
    eax = eax & 7;
    eax = eax << 2;
    edi = edi & 3;
    eax = eax | edi;
    edi = MEM32(ebx + 0x18);
    eax = eax << 0x10;
    ecx = ecx & edx;
    edi = edi & 0xFFE0FFFFu;
    esi = esi << 0x10;
    eax = eax | edi;
    esi = esi | ecx;
    ecx = MEM32(ebx + 0x70);
    MEM32(ebx + 0x18) = eax;
    eax = ecx + 0xB8;
    MEM32(ebx + 0x38) = esi;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037584B; /* je: equal / zero */

loc_00375834: ;
    _fa = (uint32_t)(MEM8(ecx + 0xB)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0xB), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0037584B; /* je: equal / zero */

loc_0037583A: ;
    ecx = MEM32(eax);
    ecx = MEM32(ecx + 0x30);
    ecx = ecx & edx;
    MEM32(ebx + 0x3C) = ecx;
    eax = MEM32(eax);
    eax = MEM32(eax + 0x34);
    goto loc_00375853;

loc_0037584B: ;
    ecx = MEM32(ebp + -16);
    eax = MEM32(ebp + -12);
    ecx = ecx & edx;

loc_00375853: ;
    edx = 0; /* xor self */
    eax = eax << 0x10;
    eax = eax | ecx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(ebx + 0x12)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x12), LO8(edx) (8-bit) */
    MEM32(ebx + 0x3C) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003758C1; /* je: equal / zero */

loc_00375863: ;
    eax = ZX8(MEM8(ebx + 0x64));
    ecx = eax + eax * 2;
    ecx = ecx << 1;

loc_0037586C: ;
    esi = MEM32(-25034736);
    esi = esi >> 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0037586C; /* jb: below (unsigned <) */

loc_00375879: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_003758C1; /* jbe: below or equal (unsigned <=) */

loc_0037587F: ;
    eax = ebx + 0xC;

loc_00375882: ;
    esi = ZX16(MEM16(eax));
    MEM32(-25033992) = esi;
    MEM32(-25033988) = edx;
    esi = MEM32(ebx + 0x18);
    MEM32(-25033960) = esi;
    esi = MEM32(ebx + 0x38);
    MEM32(-25033868) = esi;
    esi = MEM32(ebx + 0x3C);
    MEM32(-25033864) = esi;
    MEM32(-25033988) = 0;
    esi = ZX8(MEM8(ebx + 0x64));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00375882; /* jb: below (unsigned <) */

loc_003758C1: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003758C9u); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_003758C9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003758D2
 * Original: 0x003758D2 - 0x0037595D (139 bytes, 45 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003758D2(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003758D2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    ecx = ebp + -8;
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003758E8u); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_003758E8: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(esi + 0x12)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x12), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0037594F; /* je: equal / zero */

loc_003758F0: ;
    ecx = ZX8(MEM8(esi + 0x64));
    ecx = ZX16(MEM16(esi + ecx * 2 + 0xA));
    edx = MEM32(0x37AE88);
    ecx = ecx << 7;
    _fa = (uint32_t)(MEM32(ecx + edx + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + edx + 0x54), 0x100000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0037594F; /* jne: not equal / not zero */

loc_0037590C: ;
    ecx = MEM32(-25034736);
    ecx = ecx & 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0037590C; /* jb: below (unsigned <) */

loc_0037591A: ;
    ecx = ZX16(MEM16(esi + 0xC));
    MEM32(-25033992) = ecx;
    MEM32(0xFE8202FCu) = eax;
    eax = ZX16(MEM16(esi + 0xC));
    ecx = MEM32(0x37AE88);
    eax = eax << 7;
    eax = MEM32(eax + ecx + 0x58);
    eax = eax & 0xFFFFFF;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(-25033988) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037594Du); RECOMP_ABI_CALL(0x003735E1u, sub_003735E1); /* call 0x003735E1 */

loc_0037594D: ;
    edi = eax;

loc_0037594F: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00375957u); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_00375957: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0037595D
 * Original: 0x0037595D - 0x00375972 (21 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037595D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037595D: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0037596C; /* je: equal / zero */

loc_00375966: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0037596Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0037596C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00375972
 * Original: 0x00375972 - 0x00375990 (30 bytes, 8 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00375972(void)
{

loc_00375972: ;
    eax = MEM32(esp + 4);
    eax = eax << 4;
    eax = eax + MEM32(0x37AE98);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 8);
    MEM32(ecx + 4) = eax;
    PUSH32(esp, 0x0037598Du); RECOMP_ABI_CALL(0x00374A8Bu, sub_00374A8B); /* call 0x00374A8B */

loc_0037598D: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00375990
 * Original: 0x00375990 - 0x003759A7 (23 bytes, 6 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00375990(void)
{

loc_00375990: ;
    eax = ZX16(MEM16(esp + 4));
    PUSH32(esp, 4);
    eax = eax * 4 + 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003759A4u); RECOMP_ABI_CALL(0x00375972u, sub_00375972); /* call 0x00375972 */

loc_003759A4: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003759A7
 * Original: 0x003759A7 - 0x00375B21 (378 bytes, 109 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003759A7(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003759A7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x38;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003759C1u); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_003759C1: ;
    ebx = esi + 0x12;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00375B12; /* jne: not equal / not zero */

loc_003759CD: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003759D6u); RECOMP_ABI_CALL(0x00372BCDu, sub_00372BCD); /* call 0x00372BCD */

loc_003759D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(ebp + -4) = eax;
    if (TEST_S(_fas, _fbs)) goto loc_00375B12; /* jl: less (signed <) */

loc_003759E1: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    edi = esi + 0xC;
    SET_LO16(eax, MEM16(edi));
    ecx = esi + 0x68;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003759F3u); RECOMP_ABI_CALL(0x00375990u, sub_00375990); /* call 0x00375990 */

loc_003759F3: ;
    SET_LO16(edx, 1);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003759FEu); RECOMP_ABI_CALL(0x00374A65u, sub_00374A65); /* call 0x00374A65 */

loc_003759FE: ;
    ebx = esi + 0x14;
    PUSH32(esp, ebx);
    eax = ebp + -8;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00375A0Du); RECOMP_ABI_CALL(0x00374C8Du, sub_00374C8D); /* call 0x00374C8D */

loc_00375A0D: ;
    eax = ebp + -56;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00375A18u); RECOMP_ABI_CALL(0x00374D3Eu, sub_00374D3E); /* call 0x00374D3E */

loc_00375A18: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00375A23u); RECOMP_ABI_CALL(0x00374F92u, sub_00374F92); /* call 0x00374F92 */

loc_00375A23: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM8(esi + 0x64)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x64), LO8(eax) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00375AFA; /* jbe: below or equal (unsigned <=) */

loc_00375A2E: ;
    ecx = MEM32(-25034736);
    ecx = ecx & 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x48) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x48 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00375A2E; /* jb: below (unsigned <) */

loc_00375A3C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = ZX16(MEM16(edi));
    MEM32(-25033992) = ecx;
    ecx = MEM32(ebx);
    if (TEST_Z(_fa, _fb)) goto loc_00375A51; /* je: equal / zero */

loc_00375A4B: ;
    ecx = ecx | 0x400000;

loc_00375A51: ;
    MEM32(-25033980) = ecx;
    ecx = MEM32(esi + 0x18);
    MEM32(-25033960) = ecx;
    ecx = MEM32(esi + 0x1C);
    MEM32(-25033976) = ecx;
    ecx = MEM32(esi + 0x20);
    MEM32(-25033972) = ecx;
    ecx = MEM32(esi + 0x24);
    MEM32(-25033968) = ecx;
    ecx = MEM32(esi + 0x28);
    MEM32(-25033964) = ecx;
    ecx = MEM32(esi + 0x2C);
    MEM32(-25033904) = ecx;
    ecx = MEM32(esi + 0x30);
    MEM32(-25033876) = ecx;
    ecx = MEM32(esi + 0x34);
    MEM32(-25033872) = ecx;
    ecx = MEM32(esi + 0x38);
    MEM32(-25033868) = ecx;
    ecx = MEM32(esi + 0x3C);
    MEM32(-25033864) = ecx;
    ecx = MEM32(ebp + -8);
    MEM32(-25033984) = ecx;
    ecx = MEM32(ebp + eax * 4 + -56);
    MEM32(-25033888) = ecx;
    ecx = MEM32(ebp + eax * 4 + -44);
    MEM32(-25033884) = ecx;
    ecx = MEM32(ebp + eax * 4 + -32);
    MEM32(-25033880) = ecx;
    ecx = MEM32(ebp + -12);
    MEM32(-25033860) = ecx;
    MEM32(-25033956) = 0xFFFF;
    ecx = ZX8(MEM8(esi + 0x64));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00375A2E; /* jb: below (unsigned <) */

loc_00375AFA: ;
    eax = MEM32(esi + 0x70);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200010) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 8), 0x200010 (32-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00375B12; /* je: equal / zero */

loc_00375B07: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00375B12u); RECOMP_ABI_CALL(0x00375487u, sub_00375487); /* call 0x00375487 */

loc_00375B12: ;
    ecx = ebp + -20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00375B1Au); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_00375B1A: ;
    eax = MEM32(ebp + -4);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00375B21
 * Original: 0x00375B21 - 0x00375BE2 (193 bytes, 62 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00375B21(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00375B21: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x30;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00375B36u); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_00375B36: ;
    _fa = (uint32_t)(MEM8(esi + 0x12)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x12), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00375BD5; /* je: equal / zero */

loc_00375B40: ;
    PUSH32(esp, edi);
    edi = esi + 0x14;
    PUSH32(esp, edi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00375B50u); RECOMP_ABI_CALL(0x00374C8Du, sub_00374C8D); /* call 0x00374C8D */

loc_00375B50: ;
    eax = ebp + -48;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00375B5Bu); RECOMP_ABI_CALL(0x00374D3Eu, sub_00374D3E); /* call 0x00374D3E */

loc_00375B5B: ;
    eax = ZX8(MEM8(esi + 0x64));
    ecx = eax;
    ecx = ecx << 3;

loc_00375B64: ;
    edx = MEM32(-25034736);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00375B64; /* jb: below (unsigned <) */

loc_00375B71: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00375BD4; /* jbe: below or equal (unsigned <=) */

loc_00375B77: ;
    edx = esi + 0xC;

loc_00375B7A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    eax = ZX16(MEM16(edx));
    MEM32(0xFE8202F8u) = eax;
    eax = MEM32(ebp + -4);
    MEM32(-25033988) = 1;
    MEM32(0xFE820300u) = eax;
    eax = MEM32(edi);
    if (TEST_Z(_fa, _fb)) goto loc_00375B9F; /* je: equal / zero */

loc_00375B9A: ;
    eax = eax | 0x400000;

loc_00375B9F: ;
    MEM32(0xFE820304u) = eax;
    eax = MEM32(ebp + ecx * 4 + -48);
    MEM32(0xFE820360u) = eax;
    eax = MEM32(ebp + ecx * 4 + -36);
    MEM32(0xFE820364u) = eax;
    eax = MEM32(ebp + ecx * 4 + -24);
    MEM32(0xFE820368u) = eax;
    MEM32(-25033988) = 0;
    eax = ZX8(MEM8(esi + 0x64));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00375B7A; /* jb: below (unsigned <) */

loc_00375BD4: ;
    POP32(esp, edi);

loc_00375BD5: ;
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00375BDDu); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_00375BDD: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00375BE2
 * Original: 0x00375BE2 - 0x00375C7A (152 bytes, 47 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00375BE2(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00375BE2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x2C;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00375BF7u); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_00375BF7: ;
    _fa = (uint32_t)(MEM8(esi + 0x12)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x12), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00375C6D; /* je: equal / zero */

loc_00375BFD: ;
    eax = ebp + -44;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00375C08u); RECOMP_ABI_CALL(0x00374D3Eu, sub_00374D3E); /* call 0x00374D3E */

loc_00375C08: ;
    ecx = ZX8(MEM8(esi + 0x64));
    eax = ecx + ecx * 2;
    eax = eax << 1;

loc_00375C11: ;
    edx = MEM32(-25034736);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00375C11; /* jb: below (unsigned <) */

loc_00375C1E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00375C6D; /* jbe: below or equal (unsigned <=) */

loc_00375C24: ;
    ecx = esi + 0xC;

loc_00375C27: ;
    edx = ZX16(MEM16(ecx));
    MEM32(-25033992) = edx;
    edx = MEM32(ebp + eax * 4 + -44);
    MEM32(-25033988) = 1;
    MEM32(-25033888) = edx;
    edx = MEM32(ebp + eax * 4 + -32);
    MEM32(-25033884) = edx;
    edx = MEM32(ebp + eax * 4 + -20);
    MEM32(-25033880) = edx;
    MEM32(-25033988) = 0;
    edx = ZX8(MEM8(esi + 0x64));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00375C27; /* jb: below (unsigned <) */

loc_00375C6D: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00375C75u); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_00375C75: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00375C7A
 * Original: 0x00375C7A - 0x00375D0C (146 bytes, 54 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00375C7A(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00375C7A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00375C90u); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_00375C90: ;
    eax = MEM32(esi + 0x70);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x182000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 8), 0x182000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00375CB3; /* je: equal / zero */

loc_00375C9C: ;
    edi = esi + 0x44;
    esi = MEM32(edi);
    goto loc_00375CAD;

loc_00375CA3: ;
    ecx = esi + -92;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00375CABu); RECOMP_ABI_CALL(0x00375C7Au, sub_00375C7A); /* call 0x00375C7A */

loc_00375CAB: ;
    esi = MEM32(esi);

loc_00375CAD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00375CA3; /* jne: not equal / not zero */

loc_00375CB1: ;
    goto loc_00375CFE;

loc_00375CB3: ;
    _fa = (uint32_t)(MEM8(esi + 0x12)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x12), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00375CFE; /* je: equal / zero */

loc_00375CB9: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00375CC4u); RECOMP_ABI_CALL(0x00374F92u, sub_00374F92); /* call 0x00374F92 */

loc_00375CC4: ;
    eax = ZX8(MEM8(esi + 0x64));
    ecx = eax + eax;

loc_00375CCB: ;
    edx = MEM32(-25034736);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00375CCB; /* jb: below (unsigned <) */

loc_00375CD8: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00375CFE; /* jbe: below or equal (unsigned <=) */

loc_00375CDE: ;
    eax = esi + 0xC;

loc_00375CE1: ;
    edx = ZX16(MEM16(eax));
    MEM32(-25033992) = edx;
    edx = MEM32(ebp + -4);
    MEM32(-25033860) = edx;
    edx = ZX8(MEM8(esi + 0x64));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00375CE1; /* jb: below (unsigned <) */

loc_00375CFE: ;
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00375D06u); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_00375D06: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00375D0C
 * Original: 0x00375D0C - 0x00375D28 (28 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00375D0C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00375D0C: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x12)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x12), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00375D26; /* je: equal / zero */

loc_00375D15: ;
    goto loc_00375D1E;

loc_00375D17: ;
    ecx = esi;
    PUSH32(esp, 0x00375D1Eu); RECOMP_ABI_CALL(0x0037534Du, sub_0037534D); /* call 0x0037534D */

loc_00375D1E: ;
    _fa = (uint32_t)(MEM16(esi + 0x12)) & 0xFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(esi + 0x12), 0x8000 (16-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00375D17; /* jne: not equal / not zero */

loc_00375D26: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00375D28
 * Original: 0x00375D28 - 0x00375D91 (105 bytes, 33 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00375D28(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00375D28: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB8);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x1F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0x1F (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00375D3E; /* je: equal / zero */

loc_00375D39: ;
    PUSH32(esp, 0x00375D3Eu); RECOMP_ABI_CALL(0x00375BE2u, sub_00375BE2); /* call 0x00375BE2 */

loc_00375D3E: ;
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB8);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00375D53; /* je: equal / zero */

loc_00375D4C: ;
    ecx = esi;
    PUSH32(esp, 0x00375D53u); RECOMP_ABI_CALL(0x00375C7Au, sub_00375C7A); /* call 0x00375C7A */

loc_00375D53: ;
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB8);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00375D6C; /* je: equal / zero */

loc_00375D61: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00375D6Cu); RECOMP_ABI_CALL(0x00375487u, sub_00375487); /* call 0x00375487 */

loc_00375D6C: ;
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB8);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0x80 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00375D83; /* je: equal / zero */

loc_00375D7A: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00375D83u); RECOMP_ABI_CALL(0x00375788u, sub_00375788); /* call 0x00375788 */

loc_00375D83: ;
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB8);
    MEM32(eax) = MEM32(eax) & 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00375D91
 * Original: 0x00375D91 - 0x00375DF6 (101 bytes, 34 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00375D91(void)
{

loc_00375D91: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0xC));
    MEM32(esi + 4) = 1;
    MEM32(esi) = 0x3E201C;
    MEM32(esi + 0x68) = MEM32(esi + 0x68) & 0;
    MEM32(esi + 0x6C) = MEM32(esi + 0x6C) & 0;
    PUSH32(esp, 0x00375DB3u); RECOMP_ABI_CALL(0x0037595Du, sub_0037595D); /* call 0x0037595D */

loc_00375DB3: ;
    PUSH32(esp, MEM32(esp + 0x10));
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x00375DBFu); RECOMP_ABI_CALL(0x0037595Du, sub_0037595D); /* call 0x0037595D */

loc_00375DBF: ;
    MEM32(esi + 0x70) = eax;
    eax = esi + 0x4C;
    MEM32(esi + 0x50) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x54;
    MEM32(esi + 0x58) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x5C;
    MEM32(esi + 0x60) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x44;
    MEM32(esi + 0x48) = eax;
    MEM32(eax) = eax;
    MEM8(esi + 0x65) = 0xFF;
    edi = esi + 0xC;
    eax = eax | 0xFFFFFFFFu;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00375DF6
 * Original: 0x00375DF6 - 0x00375F30 (314 bytes, 110 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00375DF6(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00375DF6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = esi + 0x12;
    eax = ZX16(MEM16(edi));
    eax = eax & 0xFFFFFFBFu;
    ebx = 0; /* xor self */
    PUSH32(esp, eax);
    MEM32(ebp + -4) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00375E14u); RECOMP_ABI_CALL(0x003753A1u, sub_003753A1); /* call 0x003753A1 */

loc_00375E14: ;
    SET_LO8(eax, MEM8(edi));
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00375F0E; /* jne: not equal / not zero */

loc_00375E20: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00375E28u); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_00375E28: ;
    eax = MEM32(esi + 8);
    MEM32(eax + 0x84) = MEM32(eax + 0x84) + 1;
    SET_LO16(edx, 0x3111);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00375E3Du); RECOMP_ABI_CALL(0x00374A61u, sub_00374A61); /* call 0x00374A61 */

loc_00375E3D: ;
    MEM16(esi + 0x16) = MEM16(esi + 0x16) & 0xFD7F;
    _fa = (uint32_t)(MEM8(esi + 0x65)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x65), 3 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00375E9F; /* jae: above or equal (unsigned >=) */

loc_00375E49: ;
    SET_LO16(edx, 0x8000);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00375E52u); RECOMP_ABI_CALL(0x00374A65u, sub_00374A65); /* call 0x00374A65 */

loc_00375E52: ;
    eax = ZX8(MEM8(esi + 0x64));
    ecx = eax + eax * 2;

loc_00375E59: ;
    edx = MEM32(-25034736);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00375E59; /* jb: below (unsigned <) */

loc_00375E66: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00375E9F; /* jbe: below or equal (unsigned <=) */

loc_00375E6C: ;
    eax = esi + 0xC;

loc_00375E6F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    ecx = ZX16(MEM16(eax));
    MEM32(-25033992) = ecx;
    ecx = MEM32(esi + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_00375E85; /* je: equal / zero */

loc_00375E7F: ;
    ecx = ecx | 0x400000;

loc_00375E85: ;
    MEM32(-25033980) = ecx;
    ecx = ZX16(MEM16(eax));
    MEM32(-25034456) = ecx;
    ecx = ZX8(MEM8(esi + 0x64));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00375E6F; /* jb: below (unsigned <) */

loc_00375E9F: ;
    eax = MEM32(esi + 8);
    MEM32(eax + 0x84) = MEM32(eax + 0x84) - 1;
    eax = esi + 0x78;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6BD8); PUSH32(esp, 0x00375EB3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00375EB3: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00375EC3; /* jne: not equal / not zero */

loc_00375EB8: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00375EC3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00375EC3: ;
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00375F04; /* je: equal / zero */

loc_00375ED0: ;
    ecx = MEM32(eax + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00375F04; /* je: equal / zero */

loc_00375ED7: ;
    eax = MEM32(ecx + 0x80);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 8), 0x82000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00375F04; /* je: equal / zero */

loc_00375EE6: ;
    edi = ecx + 0x44;
    eax = MEM32(edi);
    goto loc_00375EFA;

loc_00375EED: ;
    SET_LO8(edx, MEM8(eax + -74));
    SET_LO8(edx, LO8(edx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00375F04; /* je: equal / zero */

loc_00375EF8: ;
    eax = MEM32(eax);

loc_00375EFA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00375EED; /* jne: not equal / not zero */

loc_00375EFE: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00375F04u); RECOMP_ABI_CALL(0x00376BDDu, sub_00376BDD); /* call 0x00376BDD */

loc_00375F04: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00375F0Cu); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_00375F0C: ;
    goto loc_00375F1D;

loc_00375F0E: ;
    _fa = (uint32_t)(MEM16(edi)) & 0xFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(edi), 0x8000 (16-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00375F1D; /* jne: not equal / not zero */

loc_00375F15: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00375F1Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00375F1D: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00375F29; /* je: equal / zero */

loc_00375F22: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00375F29u); RECOMP_ABI_CALL(0x00375D0Cu, sub_00375D0C); /* call 0x00375D0C */

loc_00375F29: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00375F30
 * Original: 0x00375F30 - 0x00375FB5 (133 bytes, 44 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00375F30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00375F30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00375F3Fu); RECOMP_ABI_CALL(0x0036F369u, sub_0036F369); /* call 0x0036F369 */

loc_00375F3F: ;
    SET_LO8(eax, MEM8(esi + 0x12));
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00375FAA; /* jne: not equal / not zero */

loc_00375F48: ;
    eax = MEM32(esi + 0x70);
    PUSH32(esp, MEM32(eax + 0xB4));
    eax = MEM32(esi + 8);
    eax = MEM32(eax + 0xC);
    eax = eax + 0x30;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00375F60u); RECOMP_ABI_CALL(0x00371088u, sub_00371088); /* call 0x00371088 */

loc_00375F60: ;
    eax = MEM32(esi + 0x70);
    PUSH32(esp, MEM32(eax + 0xB8));
    edx = MEM32(eax + 0xB4);
    ecx = MEM32(esi + 8);
    ecx = MEM32(ecx + 0xC);
    eax = edx + 0x7C;
    PUSH32(esp, eax);
    eax = ecx + 0x80;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = ecx + 0x30;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00375F8Au); RECOMP_ABI_CALL(0x0037012Fu, sub_0037012F); /* call 0x0037012F */

loc_00375F8A: ;
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB4);
    MEM32(eax) = MEM32(eax) & 0;
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB4);
    MEM32(eax + 0x7C) = MEM32(eax + 0x7C) & 0;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00375FAAu); RECOMP_ABI_CALL(0x00375D28u, sub_00375D28); /* call 0x00375D28 */

loc_00375FAA: ;
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00375FB2u); RECOMP_ABI_CALL(0x0036F38Eu, sub_0036F38E); /* call 0x0036F38E */

loc_00375FB2: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00375FB5
 * Original: 0x00375FB5 - 0x003760BC (263 bytes, 84 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00375FB5(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00375FB5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x34;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    ecx = ebp + -16;
    MEM32(ebp + -12) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00375FCCu); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_00375FCC: ;
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003760AE; /* je: equal / zero */

loc_00375FDD: ;
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x20), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003760AE; /* je: equal / zero */

loc_00375FE6: ;
    SET_LO8(eax, MEM8(esi + 0x12));
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00375FF7; /* jne: not equal / not zero */

loc_00375FEF: ;
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00375FF7u); RECOMP_ABI_CALL(0x00375DF6u, sub_00375DF6); /* call 0x00375DF6 */

loc_00375FF7: ;
    eax = esi + 0x5C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00376000u); RECOMP_ABI_CALL(0x0036F300u, sub_0036F300); /* call 0x0036F300 */

loc_00376000: ;
    _fa = (uint32_t)(MEM8(esi + 0x12)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x12), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003760AE; /* je: equal / zero */

loc_0037600A: ;
    edi = esi + 0x14;
    PUSH32(esp, edi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00376019u); RECOMP_ABI_CALL(0x00374C8Du, sub_00374C8D); /* call 0x00374C8D */

loc_00376019: ;
    eax = ebp + -52;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00376024u); RECOMP_ABI_CALL(0x00374D3Eu, sub_00374D3E); /* call 0x00374D3E */

loc_00376024: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037602Fu); RECOMP_ABI_CALL(0x00374F92u, sub_00374F92); /* call 0x00374F92 */

loc_0037602F: ;
    eax = ZX8(MEM8(esi + 0x64));
    ecx = eax + eax * 8;

loc_00376036: ;
    edx = MEM32(-25034736);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00376036; /* jb: below (unsigned <) */

loc_00376043: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_003760AE; /* jbe: below or equal (unsigned <=) */

loc_00376049: ;
    edx = esi + 0xC;

loc_0037604C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    eax = ZX16(MEM16(edx));
    MEM32(0xFE8202F8u) = eax;
    eax = MEM32(ebp + -4);
    MEM32(-25033988) = 1;
    MEM32(0xFE820300u) = eax;
    eax = MEM32(edi);
    if (TEST_Z(_fa, _fb)) goto loc_00376071; /* je: equal / zero */

loc_0037606C: ;
    eax = eax | 0x400000;

loc_00376071: ;
    MEM32(0xFE820304u) = eax;
    eax = MEM32(ebp + ecx * 4 + -52);
    MEM32(0xFE820360u) = eax;
    eax = MEM32(ebp + ecx * 4 + -40);
    MEM32(0xFE820364u) = eax;
    eax = MEM32(ebp + ecx * 4 + -28);
    MEM32(0xFE820368u) = eax;
    eax = MEM32(ebp + -8);
    MEM32(0xFE82037Cu) = eax;
    MEM32(-25033988) = 0;
    eax = ZX8(MEM8(esi + 0x64));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0037604C; /* jb: below (unsigned <) */

loc_003760AE: ;
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003760B6u); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_003760B6: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003760BC
 * Original: 0x003760BC - 0x003760F4 (56 bytes, 21 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003760BC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003760BC: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3E201C;
    PUSH32(esp, 0x003760CAu); RECOMP_ABI_CALL(0x00375FB5u, sub_00375FB5); /* call 0x00375FB5 */

loc_003760CA: ;
    eax = MEM32(esi + 0x70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003760DB; /* je: equal / zero */

loc_003760D1: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x003760D7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003760D7: ;
    MEM32(esi + 0x70) = MEM32(esi + 0x70) & 0;

loc_003760DB: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003760EC; /* je: equal / zero */

loc_003760E2: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x003760E8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003760E8: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;

loc_003760EC: ;
    MEM32(esi) = 0x3E1EBC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003760F4
 * Original: 0x003760F4 - 0x003762C0 (460 bytes, 140 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003760F4(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003760F4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x1C));
    esp = esp - 0x1C;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -24) = MEM32(ebp + -24) & 0;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x12;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), 2 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ebp + -20) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_003762BC; /* jne: not equal / not zero */

loc_00376111: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00376116u); RECOMP_ABI_CALL(0x00375D0Cu, sub_00375D0C); /* call 0x00375D0C */

loc_00376116: ;
    SET_LO16(edx, 2);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00376121u); RECOMP_ABI_CALL(0x00374A65u, sub_00374A65); /* call 0x00374A65 */

loc_00376121: ;
    eax = MEM32(esi + 0x70);
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), 0x10 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00376131; /* je: equal / zero */

loc_0037612A: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00376131u); RECOMP_ABI_CALL(0x00375F30u, sub_00375F30); /* call 0x00375F30 */

loc_00376131: ;
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0037615D; /* je: equal / zero */

loc_0037613E: ;
    eax = MEM32(eax + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0037615D; /* je: equal / zero */

loc_00376145: ;
    ecx = MEM32(eax + 0x80);
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + 8), 0x82000 (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0037615D; /* je: equal / zero */

loc_00376154: ;
    PUSH32(esp, 0);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037615Du); RECOMP_ABI_CALL(0x00376B0Fu, sub_00376B0F); /* call 0x00376B0F */

loc_0037615D: ;
    ecx = ebp + -28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00376165u); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_00376165: ;
    eax = MEM32(0xFE820010u);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00376165; /* jb: below (unsigned <) */

loc_00376174: ;
    eax = MEM32(esi + 8);
    _cf = (int)((((uint64_t)(MEM32(eax + 0x84)) + (uint64_t)(1)) >> 32) & 1);
    MEM32(eax + 0x84) = MEM32(eax + 0x84) + 1;
    ecx = esi + 0x68;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00376186u); RECOMP_ABI_CALL(0x00374A8Bu, sub_00374A8B); /* call 0x00374A8B */

loc_00376186: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), 0x10 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00376191; /* je: equal / zero */

loc_0037618B: ;
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0x16) = MEM8(esi + 0x16) | 0x80;
    goto loc_00376195;

loc_00376191: ;
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0x16) = MEM8(esi + 0x16) & 0x7F;

loc_00376195: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -1;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003761A4u); RECOMP_ABI_CALL(0x00375014u, sub_00375014); /* call 0x00375014 */

loc_003761A4: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003761B6; /* je: equal / zero */

loc_003761AB: ;
    ecx = ZX8(MEM8(eax + 0x64));
    eax = ZX16(MEM16(eax + ecx * 2 + 0xA));
    goto loc_003761C8;

loc_003761B6: ;
    eax = ZX8(MEM8(ebp + -1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if (0x10) _cf = (int)(((eax) >> (32 - (0x10))) & 1);
    eax = eax << 0x10;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x30000;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFF;

loc_003761C8: ;
    SET_LO16(ecx, MEM16(edi));
    edx = ZX8(MEM8(esi + 0x64));
    _cf = 0; /* logical op clears CF */
    SET_LO16(ecx, LO16(ecx) & 0x444);
    _cf = (int)((LO16(ecx)) != 0);
    SET_LO16(ecx, (uint32_t)(-(int32_t)LO16(ecx)));
    MEM32(ebp + -12) = eax;
    eax = edx;
    PUSH32(esp, ebx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x40000;
    eax = (uint32_t)((int32_t)eax * (int32_t)7);

loc_003761E8: ;
    ebx = MEM32(-25034736);
    if (2) _cf = (int)(((ebx) >> ((2) - 1)) & 1);
    ebx = ebx >> 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_003761E8; /* jb: below (unsigned <) */

loc_003761F5: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = edx;
    if ((_fas < 0)) goto loc_00376263; /* js: sign (negative) */

loc_003761FB: ;
    ebx = esi + edx * 2 + 0xC;
    edi = 0xFFFF0000u;

loc_00376204: ;
    edx = ZX16(MEM16(ebx));
    eax = MEM32(esi + 0x40);
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edi;
    _cf = 0; /* logical op clears CF */
    eax = eax | edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx | edx;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(-25033992) = edx;
    MEM32(-25033988) = 1;
    edx = MEM32(esi + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_00376231; /* je: equal / zero */

loc_0037622B: ;
    _cf = 0; /* logical op clears CF */
    edx = edx | 0x400000;

loc_00376231: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(-25033980) = edx;
    edx = MEM32(ebp + -12);
    MEM32(-25034464) = edx;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0xFE820124u) = eax;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(-25034432) = ecx;
    MEM32(-25033988) = 0;
    if (CMP_GE(_fas, _fbs)) goto loc_00376204; /* jge: greater or equal (signed >=) */

loc_00376260: ;
    edi = MEM32(ebp + -20);

loc_00376263: ;
    ecx = MEM32(ebp + -16);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    POP32(esp, ebx);
    eax = esi + 0x4C;
    if (TEST_Z(_fa, _fb)) goto loc_00376273; /* je: equal / zero */

loc_0037626E: ;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x4C)) >> 32) & 1);
    ecx = ecx + 0x4C;
    goto loc_00376281;

loc_00376273: ;
    ecx = ZX8(MEM8(ebp + -1));
    edx = MEM32(esi + 8);
    ecx = edx + ecx * 8 + 0x488;

loc_00376281: ;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(eax);
    MEM32(ecx + 4) = eax;
    ecx = MEM32(eax + 4);
    MEM32(ecx) = eax;
    SET_LO8(eax, MEM8(ebp + -1));
    MEM8(esi + 0x65) = LO8(eax);

loc_00376298: ;
    eax = MEM32(0xFE820010u);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00376298; /* jb: below (unsigned <) */

loc_003762A7: ;
    esi = MEM32(esi + 8);
    _cf = (int)((uint32_t)(MEM32(esi + 0x84)) < (uint32_t)(1));
    MEM32(esi + 0x84) = MEM32(esi + 0x84) - 1;
    ecx = ebp + -28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003762B9u); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_003762B9: ;
    SET_LO16(eax, MEM16(edi));

loc_003762BC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003762C0
 * Original: 0x003762C0 - 0x003762DB (27 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003762C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003762C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003762C8u); RECOMP_ABI_CALL(0x003760BCu, sub_003760BC); /* call 0x003760BC */

loc_003762C8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003762D5; /* je: equal / zero */

loc_003762CF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003762D5u); RECOMP_ABI_CALL(0x00371CC4u, sub_00371CC4); /* call 0x00371CC4 */

loc_003762D5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003762DB
 * Original: 0x003762DB - 0x0037634D (114 bytes, 37 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003762DB(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003762DB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003762EFu); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_003762EF: ;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(MEM8(eax + 0xA)) & 0xFFu; _fb = (uint32_t)(0x18) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xA), 0x18 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0037630E; /* je: equal / zero */

loc_003762FB: ;
    ecx = MEM32(eax + 0xBC);
    ecx = ecx & 0xFFF;
    eax = 0x7FF;
    goto loc_00376335;

loc_0037630E: ;
    eax = MEM32(eax + 0xBC);
    ecx = MEM32(ebp + 8);
    edx = 0xFFF;
    eax = eax & edx;
    ecx = ecx + eax;
    eax = MEM32(esi + 0x84);
    eax = ZX16(MEM16(eax + 8));
    PUSH32(esp, edi);
    edi = ecx;
    edi = edi >> 0xC;
    eax = eax + edi;
    ecx = ecx & edx;
    POP32(esp, edi);

loc_00376335: ;
    eax = eax << 0xC;
    eax = eax | ecx;
    ecx = ebp + -8;
    MEM32(esi + 0x154) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00376348u); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_00376348: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037634D
 * Original: 0x0037634D - 0x00376390 (67 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037634D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037634D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0x00376357u); RECOMP_ABI_CALL(0x00376BDDu, sub_00376BDD); /* call 0x00376BDD */

loc_00376357: ;
    ecx = esi;
    PUSH32(esp, 0x0037635Eu); RECOMP_ABI_CALL(0x00375D0Cu, sub_00375D0C); /* call 0x00375D0C */

loc_0037635E: ;
    ecx = esi + 0x12;
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ecx), 0x100 (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0037638E; /* je: equal / zero */

loc_00376368: ;
    PUSH32(esp, edi);
    SET_LO16(edx, 0xFEFF);
    PUSH32(esp, 0x00376372u); RECOMP_ABI_CALL(0x00374A61u, sub_00374A61); /* call 0x00374A61 */

loc_00376372: ;
    edi = esi + 0x84;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0037638D; /* je: equal / zero */

loc_0037637E: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, eax);
    ecx = ecx + 0x60;
    PUSH32(esp, 0x0037638Au); RECOMP_ABI_CALL(0x00374A00u, sub_00374A00); /* call 0x00374A00 */

loc_0037638A: ;
    MEM32(edi) = MEM32(edi) & 0;

loc_0037638D: ;
    POP32(esp, edi);

loc_0037638E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00376390
 * Original: 0x00376390 - 0x003764D1 (321 bytes, 101 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00376390(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00376390: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x10;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003763A7u); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_003763A7: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 8), 1 (8-bit) */
    ecx = esi;
    if (TEST_Z(_fa, _fb)) goto loc_003763E8; /* je: equal / zero */

loc_003763AF: ;
    MEM8(esi + 0x17) = MEM8(esi + 0x17) | 2;
    edi = MEM32(esi + 0x80);
    ebx = MEM32(edi + 0xCC);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003763C5u); RECOMP_ABI_CALL(0x003735C8u, sub_003735C8); /* call 0x003735C8 */

loc_003763C5: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(edi + 0xD0);
    eax = eax + ebx;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003763D8u); RECOMP_ABI_CALL(0x003735C8u, sub_003735C8); /* call 0x003735C8 */

loc_003763D8: ;
    ecx = esi + 0x12;
    SET_LO16(edx, 0x200);
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003763E6u); RECOMP_ABI_CALL(0x00374A65u, sub_00374A65); /* call 0x00374A65 */

loc_003763E6: ;
    goto loc_0037640F;

loc_003763E8: ;
    eax = MEM32(esi + 0x80);
    MEM8(esi + 0x17) = MEM8(esi + 0x17) & 0xFD;
    PUSH32(esp, MEM32(eax + 0xC8));
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00376401u); RECOMP_ABI_CALL(0x003735C8u, sub_003735C8); /* call 0x003735C8 */

loc_00376401: ;
    ecx = esi + 0x12;
    SET_LO16(edx, 0xFDFF);
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037640Fu); RECOMP_ABI_CALL(0x00374A61u, sub_00374A61); /* call 0x00374A61 */

loc_0037640F: ;
    eax = MEM32(esi + 0x80);
    eax = ZX8(MEM8(eax + 0xF));
    eax = eax << 1;
    PUSH32(esp, 8);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ecx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = ZX8(MEM8(esi + 0x64));
    edx = ecx;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx << 3;
    MEM32(ebp + -8) = eax;

loc_0037642E: ;
    eax = MEM32(0xFE820010u);
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0037642E; /* jb: below (unsigned <) */

loc_0037643A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_003764B2; /* jbe: below or equal (unsigned <=) */

loc_00376440: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx & 2;
    MEM32(ebp + 8) = ecx;
    edi = 0; /* xor self */
    edx = esi + 0xC;

loc_0037644E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = ZX16(MEM16(edx));
    MEM32(-25033992) = ecx;
    MEM32(-25033988) = 1;
    ecx = MEM32(esi + 0x14);
    if (TEST_Z(_fa, _fb)) goto loc_0037646E; /* je: equal / zero */

loc_00376468: ;
    ecx = ecx | 0x400000;

loc_0037646E: ;
    MEM32(-25033980) = ecx;
    ecx = MEM32(esi + 0x154);
    ecx = ecx + edi;
    MEM32(-25033824) = ecx;
    ecx = MEM32(ebp + -4);
    MEM32(-25033764) = ebx;
    MEM32(-25033820) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037649E; /* je: equal / zero */

loc_00376498: ;
    MEM32(-25033768) = ecx;

loc_0037649E: ;
    edi = edi + MEM32(ebp + -8);
    MEM32(-25033988) = ecx;
    ecx = ZX8(MEM8(esi + 0x64));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0037644E; /* jb: below (unsigned <) */

loc_003764B2: ;
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003764BAu); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_003764BA: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003764C1u); RECOMP_ABI_CALL(0x003760F4u, sub_003760F4); /* call 0x003760F4 */

loc_003764C1: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x003764CAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003764CA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003764D1
 * Original: 0x003764D1 - 0x00376650 (383 bytes, 113 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003764D1(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003764D1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x2C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 9);
    POP32(esp, ecx);
    eax = eax | 0xFFFFFFFFu;
    edi = ebp + -44;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ebx = 0; /* xor self */
    ecx = ebp + -8;
    MEM32(ebp + -4) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003764F4u); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_003764F4: ;
    ecx = ZX8(MEM8(esi + 0x64));
    MEM8(esi + 0x17) = MEM8(esi + 0x17) | 2;
    eax = ecx + ecx * 4;
    eax = eax << 1;

loc_00376501: ;
    edx = MEM32(-25034736);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00376501; /* jb: below (unsigned <) */

loc_0037650E: ;
    edi = 0; /* xor self */
    eax = 0; /* xor self */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00376587; /* jbe: below or equal (unsigned <=) */

loc_00376517: ;
    edx = esi + 0xC;

loc_0037651A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    ecx = ZX16(MEM16(edx));
    MEM32(-25033992) = ecx;
    MEM32(-25033988) = edi;
    ecx = MEM32(esi + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_00376536; /* je: equal / zero */

loc_00376530: ;
    ecx = ecx | 0x400000;

loc_00376536: ;
    MEM32(-25033980) = ecx;
    ecx = MEM32(ebp + eax * 4 + -44);
    MEM32(-25033888) = ecx;
    ecx = MEM32(ebp + eax * 4 + -32);
    MEM32(-25033884) = ecx;
    ecx = MEM32(ebp + eax * 4 + -20);
    MEM32(-25033880) = ecx;
    ecx = MEM32(esi + 0x154);
    MEM32(-25033824) = ecx;
    MEM32(-25033764) = 0x20;
    MEM32(-25033820) = ebx;
    MEM32(-25033988) = ebx;
    ecx = ZX8(MEM8(esi + 0x64));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0037651A; /* jb: below (unsigned <) */

loc_00376587: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037658Fu); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_0037658F: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00376596u); RECOMP_ABI_CALL(0x003760F4u, sub_003760F4); /* call 0x003760F4 */

loc_00376596: ;
    eax = ZX8(MEM8(esi + 0x64));
    eax = ZX16(MEM16(esi + eax * 2 + 0xA));
    ecx = MEM32(0x37AE88);
    eax = eax << 7;
    eax = eax + ecx + 0x54;

loc_003765AC: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax), 0x100000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003765AC; /* jne: not equal / not zero */

loc_003765B4: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003765BEu); RECOMP_ABI_CALL(0x00376390u, sub_00376390); /* call 0x00376390 */

loc_003765BE: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003765C6u); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_003765C6: ;
    eax = ebp + -44;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003765D1u); RECOMP_ABI_CALL(0x00374D3Eu, sub_00374D3E); /* call 0x00374D3E */

loc_003765D1: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003765DBu); RECOMP_ABI_CALL(0x003735C8u, sub_003735C8); /* call 0x003735C8 */

loc_003765DB: ;
    edx = ZX8(MEM8(esi + 0x64));
    ecx = edx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)7);

loc_003765E4: ;
    ebx = MEM32(-25034736);
    ebx = ebx >> 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003765E4; /* jb: below (unsigned <) */

loc_003765F1: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00376641; /* jbe: below or equal (unsigned <=) */

loc_003765F7: ;
    edx = esi + 0xC;

loc_003765FA: ;
    ebx = ZX16(MEM16(edx));
    MEM32(-25033992) = ebx;
    MEM32(-25033988) = edi;
    ebx = MEM32(ebp + ecx * 4 + -44);
    MEM32(-25033888) = ebx;
    ebx = MEM32(ebp + ecx * 4 + -32);
    MEM32(-25033884) = ebx;
    ebx = MEM32(ebp + ecx * 4 + -20);
    MEM32(-25033880) = ebx;
    MEM32(0xFE8203D8u) = eax;
    MEM32(-25033988) = 0;
    ebx = ZX8(MEM8(esi + 0x64));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003765FA; /* jb: below (unsigned <) */

loc_00376641: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00376649u); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_00376649: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00376650
 * Original: 0x00376650 - 0x003766C3 (115 bytes, 43 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00376650(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00376650: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00376664u); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_00376664: ;
    SET_LO8(eax, MEM8(esi + 0x12));
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003766B1; /* jne: not equal / not zero */

loc_0037666D: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00376686; /* jne: not equal / not zero */

loc_00376673: ;
    eax = ZX16(MEM16(esi + 0x12));
    eax = eax & 0xFFFFFFBBu;

loc_0037667A: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00376682u); RECOMP_ABI_CALL(0x003753A1u, sub_003753A1); /* call 0x003753A1 */

loc_00376682: ;
    esi = eax;
    goto loc_003766B4;

loc_00376686: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00376698; /* jne: not equal / not zero */

loc_0037668C: ;
    eax = ZX16(MEM16(esi + 0x12));
    eax = eax & 0xFFFFFFBFu;
    eax = eax | 4;
    goto loc_0037667A;

loc_00376698: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003766AA; /* jne: not equal / not zero */

loc_0037669E: ;
    eax = ZX16(MEM16(esi + 0x12));
    eax = eax & 0xFFFFFFFBu;
    eax = eax | 0x40;
    goto loc_0037667A;

loc_003766AA: ;
    esi = 0x80004005u;
    goto loc_003766B4;

loc_003766B1: ;
    esi = MEM32(ebp + 8);

loc_003766B4: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003766BCu); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_003766BC: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003766C3
 * Original: 0x003766C3 - 0x00376705 (66 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003766C3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003766C3: ;
    eax = ZX16(MEM16(ecx + 0x12));
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 3 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003766EC; /* jne: not equal / not zero */

loc_003766D1: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x444) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), 0x444 (16-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, 0);
    POP32(esp, edx);
    SET_LO8(edx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ecx) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_00376700; /* je: equal / zero */

loc_003766E7: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ecx) = MEM32(ecx) | 4;
    goto loc_00376700;

loc_003766EC: ;
    ecx = 0x8001;
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    ecx = MEM32(esp + 4);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = eax;

loc_00376700: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00376705
 * Original: 0x00376705 - 0x003767E4 (223 bytes, 75 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00376705(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00376705: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037671Bu); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_0037671B: ;
    SET_LO8(eax, MEM8(esi + 0x12));
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003767B5; /* jne: not equal / not zero */

loc_00376728: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037672Fu); RECOMP_ABI_CALL(0x003758D2u, sub_003758D2); /* call 0x003758D2 */

loc_0037672F: ;
    ebx = eax;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0037673A; /* je: equal / zero */

loc_00376738: ;
    MEM32(eax) = ebx;

loc_0037673A: ;
    edi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003767D3; /* je: equal / zero */

loc_00376745: ;
    PUSH32(esp, 0x20);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037674Eu); RECOMP_ABI_CALL(0x003735E1u, sub_003735E1); /* call 0x003735E1 */

loc_0037674E: ;
    ecx = MEM32(esi + 0x80);
    ecx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0037675D; /* jae: above or equal (unsigned >=) */

loc_0037675B: ;
    eax = ecx;

loc_0037675D: ;
    eax = eax + ebx;
    MEM32(edi) = eax;
    _fa = (uint32_t)(MEM16(esi + 0x12)) & 0xFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(esi + 0x12), 0x200 (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003767A3; /* je: equal / zero */

loc_00376769: ;
    ecx = MEM32(esi + 0x80);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xCC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ecx + 0xCC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003767A3; /* jb: below (unsigned <) */

loc_00376777: ;
    edx = MEM32(ecx + 0xD0);
    edx = edx + MEM32(ecx + 0xCC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003767A3; /* jae: above or equal (unsigned >=) */

loc_00376787: ;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ecx + 0xD0));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ecx + 0xD0)); }
    MEM32(edi) = edx;
    eax = MEM32(esi + 0x80);
    eax = MEM32(eax + 0xCC);
    eax = eax + edx;
    MEM32(edi) = eax;
    goto loc_003767D3;

loc_003767A3: ;
    ecx = MEM32(esi + 0x80);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ecx + 0xC0));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ecx + 0xC0)); }
    MEM32(edi) = edx;
    goto loc_003767D3;

loc_003767B5: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003767C4; /* je: equal / zero */

loc_003767BC: ;
    ecx = MEM32(esi + 0x148);
    MEM32(eax) = ecx;

loc_003767C4: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003767D3; /* je: equal / zero */

loc_003767CB: ;
    ecx = MEM32(esi + 0x148);
    MEM32(eax) = ecx;

loc_003767D3: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003767DBu); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_003767DB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003767E4
 * Original: 0x003767E4 - 0x0037682B (71 bytes, 31 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003767E4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003767E4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x68;
    PUSH32(esp, 3);
    ecx = edi;
    PUSH32(esp, 0x003767F5u); RECOMP_ABI_CALL(0x003735AAu, sub_003735AA); /* call 0x003735AA */

loc_003767F5: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00376825; /* je: equal / zero */

loc_003767FB: ;
    eax = MEM32(edi);
    PUSH32(esp, 0);
    ecx = esi;
    MEM8(eax + 0x3F) = 0x80;
    PUSH32(esp, 0x0037680Au); RECOMP_ABI_CALL(0x00375DF6u, sub_00375DF6); /* call 0x00375DF6 */

loc_0037680A: ;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(MEM8(eax + 0xA)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xA), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00376825; /* je: equal / zero */

loc_00376816: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00376825u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00376825: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0037682B
 * Original: 0x0037682B - 0x0037688C (97 bytes, 28 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037682B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037682B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    goto loc_0037686D;

loc_00376835: ;
    eax = MEM32(esi + 0x80);
    ecx = MEM32(esi + 0x150);
    eax = MEM32(eax + 0xD8);
    eax = eax + ecx * 8;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00376881; /* je: equal / zero */

loc_00376851: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00376881; /* jae: above or equal (unsigned >=) */

loc_00376855: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00376867; /* je: equal / zero */

loc_0037685C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(eax + 4));
    { uint32_t _icall_target = MEM32(0x3C6C90); PUSH32(esp, 0x00376867u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00376867: ;
    MEM32(esi + 0x150) = MEM32(esi + 0x150) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x150)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0037686D: ;
    eax = MEM32(esi + 0x80);
    ecx = MEM32(esi + 0x150);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xDC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0xDC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00376835; /* jb: below (unsigned <) */

loc_00376881: ;
    MEM32(esi + 0x14C) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0037688C
 * Original: 0x0037688C - 0x003768C6 (58 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037688C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037688C: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x80);
    esi = MEM32(eax + 0xDC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_003768C3; /* jbe: below or equal (unsigned <=) */

loc_003768A0: ;
    eax = MEM32(edi + 0x80);
    eax = MEM32(eax + 0xD8);
    eax = eax + esi * 8;
    _fa = (uint32_t)(MEM32(eax + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + -8), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003768C3; /* jne: not equal / not zero */

loc_003768B5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(eax + -4));
    { uint32_t _icall_target = MEM32(0x3C6C90); PUSH32(esp, 0x003768C0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003768C0: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003768A0; /* jne: not equal / not zero */

loc_003768C3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003768C6
 * Original: 0x003768C6 - 0x003768F5 (47 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003768C6(void)
{

loc_003768C6: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = eax << 5;
    eax = eax + ecx + 0x88;
    MEM32(eax + 0x18) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 0x14) = edx;
    ecx = MEM32(ecx + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003768F2u); RECOMP_ABI_CALL(0x003733E8u, sub_003733E8); /* call 0x003733E8 */

loc_003768F2: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003768F5
 * Original: 0x003768F5 - 0x0037690F (26 bytes, 7 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003768F5(void)
{

loc_003768F5: ;
    eax = MEM32(esp + 4);
    eax = eax << 5;
    eax = eax + ecx + 0x88;
    ecx = MEM32(ecx + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0037690Cu); RECOMP_ABI_CALL(0x0037320Bu, sub_0037320B); /* call 0x0037320B */

loc_0037690C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037690F
 * Original: 0x0037690F - 0x0037696B (92 bytes, 25 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037690F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037690F: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x0037691Fu); RECOMP_ABI_CALL(0x00375D91u, sub_00375D91); /* call 0x00375D91 */

loc_0037691F: ;
    PUSH32(esp, MEM32(esp + 0xC));
    MEM32(esi) = 0x3E2044;
    PUSH32(esp, 0x0037692Eu); RECOMP_ABI_CALL(0x0037595Du, sub_0037595D); /* call 0x0037595D */

loc_0037692E: ;
    MEM32(esi + 0x80) = eax;
    ecx = 0; /* xor self */
    eax = esi + 0x88;

loc_0037693C: ;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    MEM32(eax + 0xC) = esi;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0037693C; /* jb: below (unsigned <) */

loc_00376950: ;
    MEM32(esi + 0x90) = MEM32(esi + 0x90) | 5;
    MEM32(esi + 0xB0) = MEM32(esi + 0xB0) | 5;
    MEM32(esi + 0xD0) = MEM32(esi + 0xD0) | 5;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0037696B
 * Original: 0x0037696B - 0x003769D0 (101 bytes, 30 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037696B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037696B: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 0x12;
    edx = 0x100;
    edi = 0; /* xor self */
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ecx), LO16(edx) (16-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003769B6; /* jne: not equal / not zero */

loc_0037697E: ;
    PUSH32(esp, 0x00376983u); RECOMP_ABI_CALL(0x00374A65u, sub_00374A65); /* call 0x00374A65 */

loc_00376983: ;
    eax = MEM32(esi + 0x80);
    PUSH32(esp, MEM32(eax + 0xC0));
    ecx = MEM32(esi + 8);
    PUSH32(esp, MEM32(eax + 0xBC));
    ecx = ecx + 0x60;
    PUSH32(esp, 0x003769A0u); RECOMP_ABI_CALL(0x00374861u, sub_00374861); /* call 0x00374861 */

loc_003769A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0x84) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_003769BB; /* jne: not equal / not zero */

loc_003769AA: ;
    ecx = esi;
    edi = 0x8007000Eu;
    PUSH32(esp, 0x003769B6u); RECOMP_ABI_CALL(0x0037634Du, sub_0037634D); /* call 0x0037634D */

loc_003769B6: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003769BB: ;
    eax = MEM32(esi + 0x80);
    PUSH32(esp, MEM32(eax + 0xC4));
    ecx = esi;
    PUSH32(esp, 0x003769CEu); RECOMP_ABI_CALL(0x003762DBu, sub_003762DB); /* call 0x003762DB */

loc_003769CE: ;
    goto loc_003769B6;

}

/**
 * sub_003769D0
 * Original: 0x003769D0 - 0x00376A22 (82 bytes, 27 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003769D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003769D0: ;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = edi + 0x12;
    edx = 0x100;
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ecx), LO16(edx) (16-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00376A20; /* jne: not equal / not zero */

loc_003769E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003769E6u); RECOMP_ABI_CALL(0x00374A65u, sub_00374A65); /* call 0x00374A65 */

loc_003769E6: ;
    PUSH32(esp, 0x20);
    ecx = edi;
    PUSH32(esp, 0x003769EFu); RECOMP_ABI_CALL(0x003735E1u, sub_003735E1); /* call 0x003735E1 */

loc_003769EF: ;
    esi = edi + 0x80;
    ecx = MEM32(esi);
    edx = MEM32(ecx + 0xD4);
    edx = edx - 0xB;
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    edx = edx + MEM32(0x37AF08);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00376A10u); RECOMP_ABI_CALL(0x00370F29u, sub_00370F29); /* call 0x00370F29 */

loc_00376A10: ;
    eax = MEM32(esi);
    PUSH32(esp, MEM32(eax + 0xC4));
    ecx = edi;
    PUSH32(esp, 0x00376A1Fu); RECOMP_ABI_CALL(0x003762DBu, sub_003762DB); /* call 0x003762DB */

loc_00376A1F: ;
    POP32(esp, esi);

loc_00376A20: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00376A22
 * Original: 0x00376A22 - 0x00376AC1 (159 bytes, 56 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00376A22(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00376A22: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(MEM32(eax + 0xDC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xDC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00376ABE; /* je: equal / zero */

loc_00376A3C: ;
    _fa = (uint32_t)(MEM8(esi + 0x17)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x17), 2 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00376A54; /* je: equal / zero */

loc_00376A44: ;
    ebx = MEM32(eax + 0xCC);
    edi = MEM32(eax + 0xD0);
    edi = edi + ebx;
    goto loc_00376A5C;

loc_00376A54: ;
    edi = MEM32(eax + 0xC8);
    ebx = 0; /* xor self */

loc_00376A5C: ;
    PUSH32(esp, 0);
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00376A69u); RECOMP_ABI_CALL(0x00376705u, sub_00376705); /* call 0x00376705 */

loc_00376A69: ;
    eax = MEM32(esi + 0x14C);
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00376A98; /* ja: above (unsigned >) */

loc_00376A74: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00376A98; /* ja: above (unsigned >) */

loc_00376A78: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00376AA4; /* jae: above or equal (unsigned >=) */

loc_00376A7D: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00376A87u); RECOMP_ABI_CALL(0x0037682Bu, sub_0037682B); /* call 0x0037682B */

loc_00376A87: ;
    MEM32(esi + 0x150) = MEM32(esi + 0x150) & 0;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00376A98u); RECOMP_ABI_CALL(0x0037682Bu, sub_0037682B); /* call 0x0037682B */

loc_00376A98: ;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + -4));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00376AA4u); RECOMP_ABI_CALL(0x0037682Bu, sub_0037682B); /* call 0x0037682B */

loc_00376AA4: ;
    _fa = (uint32_t)(MEM16(esi + 0x12)) & 0xFFFFu; _fb = (uint32_t)(0x8002) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(esi + 0x12), 0x8002 (16-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_00376ABE; /* jne: not equal / not zero */

loc_00376AAE: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00376AB7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00376AB7: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00376ABEu); RECOMP_ABI_CALL(0x0037688Cu, sub_0037688C); /* call 0x0037688C */

loc_00376ABE: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00376AC1
 * Original: 0x00376AC1 - 0x00376B0F (78 bytes, 27 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00376AC1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00376AC1: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00376ACAu); RECOMP_ABI_CALL(0x003759A7u, sub_003759A7); /* call 0x003759A7 */

loc_00376ACA: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00376B0A; /* jl: less (signed <) */

loc_00376AD0: ;
    eax = MEM32(esi + 0x80);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00376B0A; /* jne: not equal / not zero */

loc_00376ADE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x180000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x180000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00376AEF; /* je: equal / zero */

loc_00376AE6: ;
    ecx = esi;
    PUSH32(esp, 0x00376AEDu); RECOMP_ABI_CALL(0x003769D0u, sub_003769D0); /* call 0x003769D0 */

loc_00376AED: ;
    goto loc_00376B0A;

loc_00376AEF: ;
    _fa = (uint32_t)(MEM32(eax + 0xBC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xBC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00376B0A; /* je: equal / zero */

loc_00376AF8: ;
    _fa = (uint32_t)(MEM32(eax + 0xC0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC0), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00376B0A; /* je: equal / zero */

loc_00376B01: ;
    ecx = esi;
    PUSH32(esp, 0x00376B08u); RECOMP_ABI_CALL(0x0037696Bu, sub_0037696B); /* call 0x0037696B */

loc_00376B08: ;
    edi = eax;

loc_00376B0A: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00376B0F
 * Original: 0x00376B0F - 0x00376BBF (176 bytes, 66 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00376B0F(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00376B0F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x182000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 8), 0x182000 (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00376B29; /* je: equal / zero */

loc_00376B24: ;
    ebx = 0; /* xor self */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00376B2D;

loc_00376B29: ;
    ebx = MEM32(esp + 0x14);

loc_00376B2D: ;
    ecx = esi;
    PUSH32(esp, 0x00376B34u); RECOMP_ABI_CALL(0x00376AC1u, sub_00376AC1); /* call 0x00376AC1 */

loc_00376B34: ;
    ebp = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00376BB6; /* jl: less (signed <) */

loc_00376B3C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00376B52; /* je: equal / zero */

loc_00376B41: ;
    _fa = (uint32_t)(MEM8(esi + 0x12)) & 0xFFu; _fb = (uint32_t)(0x42) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x12), 0x42 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00376B52; /* jne: not equal / not zero */

loc_00376B47: ;
    PUSH32(esp, 0x40);
    ecx = esi;
    PUSH32(esp, 0x00376B50u); RECOMP_ABI_CALL(0x003753A1u, sub_003753A1); /* call 0x003753A1 */

loc_00376B50: ;
    ebp = eax;

loc_00376B52: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00376BB6; /* jl: less (signed <) */

loc_00376B56: ;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(MEM8(eax + 9)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 9), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00376B6B; /* je: equal / zero */

loc_00376B62: ;
    ecx = esi;
    PUSH32(esp, 0x00376B69u); RECOMP_ABI_CALL(0x003760F4u, sub_003760F4); /* call 0x003760F4 */

loc_00376B69: ;
    goto loc_00376BB6;

loc_00376B6B: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00376B80; /* jne: not equal / not zero */

loc_00376B70: ;
    _fa = (uint32_t)(MEM16(esi + 0x12)) & 0xFFFFu; _fb = (uint32_t)(0x446) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(esi + 0x12), 0x446 (16-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00376B80; /* jne: not equal / not zero */

loc_00376B78: ;
    eax = MEM32(esi + 0x148);
    goto loc_00376B82;

loc_00376B80: ;
    eax = 0; /* xor self */

loc_00376B82: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x148) = edi;
    ecx = esi;
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00376B97; /* je: equal / zero */

loc_00376B8F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00376B95u); RECOMP_ABI_CALL(0x003764D1u, sub_003764D1); /* call 0x003764D1 */

loc_00376B95: ;
    goto loc_00376B9C;

loc_00376B97: ;
    PUSH32(esp, 0x00376B9Cu); RECOMP_ABI_CALL(0x00376390u, sub_00376390); /* call 0x00376390 */

loc_00376B9C: ;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(MEM32(eax + 0xDC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xDC), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00376BB6; /* je: equal / zero */

loc_00376BAA: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00376BB6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00376BB6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00376BBF
 * Original: 0x00376BBF - 0x00376BDD (30 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00376BBF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00376BBF: ;
    SET_LO8(edx, MEM8(ecx + 0x12));
    SET_LO8(edx, LO8(edx) & 3);
    eax = 0; /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00376BDC; /* jne: not equal / not zero */

loc_00376BCC: ;
    SET_LO16(eax, MEM16(ecx + 0x12));
    eax = eax >> 9;
    eax = eax & 1;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00376BDCu); RECOMP_ABI_CALL(0x00376B0Fu, sub_00376B0F); /* call 0x00376B0F */

loc_00376BDC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00376BDD
 * Original: 0x00376BDD - 0x00376C6D (144 bytes, 54 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00376BDD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00376BDD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x12));
    PUSH32(esp, edi);
    SET_LO8(eax, LO8(eax) & 3);
    edi = 0; /* xor self */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00376C65; /* jne: not equal / not zero */

loc_00376BEF: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00376C20; /* je: equal / zero */

loc_00376BF6: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00376C17; /* je: equal / zero */

loc_00376BFD: ;
    SET_LO16(eax, MEM16(esi + 0x12));
    SET_LO16(eax, LO16(eax) & 0x203);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x203) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x203 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00376C17; /* jne: not equal / not zero */

loc_00376C0B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00376C11u); RECOMP_ABI_CALL(0x00376B0Fu, sub_00376B0F); /* call 0x00376B0F */

loc_00376C11: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00376C65; /* jl: less (signed <) */

loc_00376C17: ;
    ecx = esi;
    PUSH32(esp, 0x00376C1Eu); RECOMP_ABI_CALL(0x003752C9u, sub_003752C9); /* call 0x003752C9 */

loc_00376C1E: ;
    goto loc_00376C65;

loc_00376C20: ;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x182000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 8), 0x182000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00376C3E; /* jne: not equal / not zero */

loc_00376C2F: ;
    PUSH32(esp, edi);
    eax = esi + 0x148;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00376C3Eu); RECOMP_ABI_CALL(0x00376705u, sub_00376705); /* call 0x00376705 */

loc_00376C3E: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00376C46u); RECOMP_ABI_CALL(0x00375DF6u, sub_00375DF6); /* call 0x00375DF6 */

loc_00376C46: ;
    ecx = esi;
    PUSH32(esp, 0x00376C4Du); RECOMP_ABI_CALL(0x00376A22u, sub_00376A22); /* call 0x00376A22 */

loc_00376C4D: ;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(MEM8(eax + 0xA)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xA), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00376C65; /* je: equal / zero */

loc_00376C59: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00376C65u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00376C65: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00376C6D
 * Original: 0x00376C6D - 0x00376D63 (246 bytes, 74 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00376C6D(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00376C6D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x12));
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00376D4B; /* jne: not equal / not zero */

loc_00376C8B: ;
    eax = ZX8(MEM8(esi + 0x64));
    eax = ZX16(MEM16(esi + eax * 2 + 0xA));
    ecx = MEM32(0x37AE88);
    eax = eax << 7;
    eax = eax + ecx + 0x54;

loc_00376CA1: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax), 0x100000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00376CA1; /* jne: not equal / not zero */

loc_00376CA9: ;
    SET_LO16(eax, MEM16(esi + 0x12));
    SET_LO16(eax, LO16(eax) & 0x203);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x203) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x203 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00376CDE; /* jne: not equal / not zero */

loc_00376CB7: ;
    eax = MEM32(esi + 0x80);
    ecx = MEM32(eax + 0xD0);
    ecx = ecx + MEM32(eax + 0xCC);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00376CDE; /* jb: below (unsigned <) */

loc_00376CCE: ;
    PUSH32(esp, 0);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00376CD7u); RECOMP_ABI_CALL(0x00376B0Fu, sub_00376B0F); /* call 0x00376B0F */

loc_00376CD7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(ebp + -4) = eax;
    if (TEST_S(_fas, _fbs)) goto loc_00376D54; /* jl: less (signed <) */

loc_00376CDE: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00376CE9u); RECOMP_ABI_CALL(0x003735C8u, sub_003735C8); /* call 0x003735C8 */

loc_00376CE9: ;
    ecx = ebp + -12;
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00376CF3u); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_00376CF3: ;
    eax = ZX8(MEM8(esi + 0x64));
    ecx = eax;
    ecx = ecx << 2;

loc_00376CFC: ;
    edx = MEM32(-25034736);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00376CFC; /* jb: below (unsigned <) */

loc_00376D09: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00376D40; /* jbe: below or equal (unsigned <=) */

loc_00376D0F: ;
    eax = esi + 0xC;

loc_00376D12: ;
    edx = ZX16(MEM16(eax));
    MEM32(-25033992) = edx;
    MEM32(-25033988) = 1;
    MEM32(-25033768) = edi;
    MEM32(-25033988) = 0;
    edx = ZX8(MEM8(esi + 0x64));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00376D12; /* jb: below (unsigned <) */

loc_00376D40: ;
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00376D48u); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_00376D48: ;
    POP32(esp, edi);
    goto loc_00376D54;

loc_00376D4B: ;
    eax = MEM32(ebp + 8);
    MEM32(esi + 0x148) = eax;

loc_00376D54: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00376D5Bu); RECOMP_ABI_CALL(0x00376A22u, sub_00376A22); /* call 0x00376A22 */

loc_00376D5B: ;
    eax = MEM32(ebp + -4);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00376D63
 * Original: 0x00376D63 - 0x00376D87 (36 bytes, 14 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00376D63(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00376D63: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0x00376D6Du); RECOMP_ABI_CALL(0x00374AA7u, sub_00374AA7); /* call 0x00374AA7 */

loc_00376D6D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00376D85; /* jl: less (signed <) */

loc_00376D71: ;
    ecx = MEM32(esi + 0x80);
    _fa = (uint32_t)(MEM8(ecx + 0xA)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0xA), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00376D85; /* jne: not equal / not zero */

loc_00376D7D: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00376AC1(); return; /* tail jmp 0x00376AC1 */

loc_00376D85: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00376D87
 * Original: 0x00376D87 - 0x00376DA1 (26 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00376D87(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00376D87: ;
    edx = MEM32(ecx + 0x80);
    eax = 0; /* xor self */
    MEM32(ecx + 0x148) = eax;
    _fa = (uint32_t)(MEM8(edx + 0xA)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0xA), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00376DA0; /* jne: not equal / not zero */

loc_00376D9B: ;
    g_seh_ebp = ebp; sub_00376AC1(); return; /* tail jmp 0x00376AC1 */

loc_00376DA0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00376DA1
 * Original: 0x00376DA1 - 0x00376DEE (77 bytes, 30 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00376DA1(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00376DA1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x00376DAEu); RECOMP_ABI_CALL(0x00376BDDu, sub_00376BDD); /* call 0x00376BDD */

loc_00376DAE: ;
    ecx = esi;
    PUSH32(esp, 0x00376DB5u); RECOMP_ABI_CALL(0x00375D0Cu, sub_00375D0C); /* call 0x00375D0C */

loc_00376DB5: ;
    edi = esi + 0x90;

loc_00376DBB: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00376DC8; /* je: equal / zero */

loc_00376DC0: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00376DC8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00376DC8: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 6 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00376DBB; /* jb: below (unsigned <) */

loc_00376DD1: ;
    ecx = esi;
    PUSH32(esp, 0x00376DD8u); RECOMP_ABI_CALL(0x0037634Du, sub_0037634D); /* call 0x0037634D */

loc_00376DD8: ;
    ecx = esi + 0x12;
    SET_LO16(edx, 0x3111);
    PUSH32(esp, 0x00376DE4u); RECOMP_ABI_CALL(0x00374A61u, sub_00374A61); /* call 0x00374A61 */

loc_00376DE4: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00374C05(); return; /* tail jmp 0x00374C05 */

}

/**
 * sub_00376DEE
 * Original: 0x00376DEE - 0x00376E46 (88 bytes, 36 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00376DEE(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00376DEE: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 0x12));
    PUSH32(esp, edi);
    eax = eax & 1;
    edi = eax;
    if ((eax == 0)) goto loc_00376E2B; /* je: equal / zero */

loc_00376DFE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00376E05u); RECOMP_ABI_CALL(0x00376BDDu, sub_00376BDD); /* call 0x00376BDD */

loc_00376E05: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00376E43; /* jl: less (signed <) */

loc_00376E09: ;
    ecx = esi;
    PUSH32(esp, 0x00376E10u); RECOMP_ABI_CALL(0x00375D0Cu, sub_00375D0C); /* call 0x00375D0C */

loc_00376E10: ;
    eax = MEM32(esi + 0x80);
    eax = ZX8(MEM8(eax + 0xE));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x64)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 0x64) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00376E2B; /* je: equal / zero */

loc_00376E24: ;
    ecx = esi;
    PUSH32(esp, 0x00376E2Bu); RECOMP_ABI_CALL(0x00376DA1u, sub_00376DA1); /* call 0x00376DA1 */

loc_00376E2B: ;
    ecx = esi;
    PUSH32(esp, 0x00376E32u); RECOMP_ABI_CALL(0x00374AF2u, sub_00374AF2); /* call 0x00374AF2 */

loc_00376E32: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00376E43; /* jl: less (signed <) */

loc_00376E36: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00376E43; /* je: equal / zero */

loc_00376E3A: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00376AC1(); return; /* tail jmp 0x00376AC1 */

loc_00376E43: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00376E46
 * Original: 0x00376E46 - 0x00376E7F (57 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00376E46(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00376E46: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    eax = eax | MEM32(ebp + 0xC);
    esi = ecx;
    if ((eax == 0)) goto loc_00376E6B; /* je: equal / zero */

loc_00376E57: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = MEM32(esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00376E67u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00376E67: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00376E77; /* jne: not equal / not zero */

loc_00376E6B: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00376E75u); RECOMP_ABI_CALL(0x00376BDDu, sub_00376BDD); /* call 0x00376BDD */

loc_00376E75: ;
    edi = eax;

loc_00376E77: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00376E7F
 * Original: 0x00376E7F - 0x00376E9A (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00376E7F(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00376E7F: ;
    _fa = (uint32_t)(MEM8(ecx + 0x12)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x12), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00376E92; /* je: equal / zero */

loc_00376E85: ;
    _fa = (uint32_t)(MEM16(ecx + 0x12)) & 0xFFFFu; _fb = (uint32_t)(0x8002) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ecx + 0x12), 0x8002 (16-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00376E99; /* jne: not equal / not zero */

loc_00376E8D: ;
    g_seh_ebp = ebp; sub_00376DA1(); return; /* tail jmp 0x00376DA1 */

loc_00376E92: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00376E99u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00376E99: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00376E9A
 * Original: 0x00376E9A - 0x00376ED7 (61 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00376E9A(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00376E9A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi) = 0x3E2044;
    PUSH32(esp, 0x00376EA9u); RECOMP_ABI_CALL(0x00376DA1u, sub_00376DA1); /* call 0x00376DA1 */

loc_00376EA9: ;
    esi = 0; /* xor self */

loc_00376EAB: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00376EB3u); RECOMP_ABI_CALL(0x003768F5u, sub_003768F5); /* call 0x003768F5 */

loc_00376EB3: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 6 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00376EAB; /* jb: below (unsigned <) */

loc_00376EB9: ;
    esi = edi + 0x80;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00376ECE; /* je: equal / zero */

loc_00376EC5: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x00376ECBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00376ECB: ;
    MEM32(esi) = MEM32(esi) & 0;

loc_00376ECE: ;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_003760BC(); return; /* tail jmp 0x003760BC */

}

/**
 * sub_00376ED7
 * Original: 0x00376ED7 - 0x00376F08 (49 bytes, 15 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00376ED7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00376ED7: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00376EF4; /* jne: not equal / not zero */

loc_00376EE1: ;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(MEM8(eax + 0xA)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xA), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00376EF4; /* je: equal / zero */

loc_00376EED: ;
    PUSH32(esp, 0x00376EF2u); RECOMP_ABI_CALL(0x00376DA1u, sub_00376DA1); /* call 0x00376DA1 */

loc_00376EF2: ;
    goto loc_00376EFB;

loc_00376EF4: ;
    ecx = esi;
    PUSH32(esp, 0x00376EFBu); RECOMP_ABI_CALL(0x0037634Du, sub_0037634D); /* call 0x0037634D */

loc_00376EFB: ;
    MEM32(esi + 0x148) = MEM32(esi + 0x148) & 0;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00376F08
 * Original: 0x00376F08 - 0x00376F57 (79 bytes, 28 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00376F08(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00376F08: ;
    eax = MEM32(esp + 4);
    eax = eax - 0;
    if ((eax == 0)) goto loc_00376F4F; /* je: equal / zero */

loc_00376F11: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00376F48; /* je: equal / zero */

loc_00376F14: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00376F41; /* je: equal / zero */

loc_00376F17: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00376F36; /* je: equal / zero */

loc_00376F1A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00376F2B; /* je: equal / zero */

loc_00376F1D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00376F54; /* jne: not equal / not zero */

loc_00376F20: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x00376F29u); RECOMP_ABI_CALL(0x00376650u, sub_00376650); /* call 0x00376650 */

loc_00376F29: ;
    goto loc_00376F54;

loc_00376F2B: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x00376F34u); RECOMP_ABI_CALL(0x00376BDDu, sub_00376BDD); /* call 0x00376BDD */

loc_00376F34: ;
    goto loc_00376F54;

loc_00376F36: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x00376F3Fu); RECOMP_ABI_CALL(0x00376B0Fu, sub_00376B0F); /* call 0x00376B0F */

loc_00376F3F: ;
    goto loc_00376F54;

loc_00376F41: ;
    PUSH32(esp, 0x00376F46u); RECOMP_ABI_CALL(0x00376A22u, sub_00376A22); /* call 0x00376A22 */

loc_00376F46: ;
    goto loc_00376F54;

loc_00376F48: ;
    PUSH32(esp, 0x00376F4Du); RECOMP_ABI_CALL(0x00376E7Fu, sub_00376E7F); /* call 0x00376E7F */

loc_00376F4D: ;
    goto loc_00376F54;

loc_00376F4F: ;
    PUSH32(esp, 0x00376F54u); RECOMP_ABI_CALL(0x0037534Du, sub_0037534D); /* call 0x0037534D */

loc_00376F54: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00376F57
 * Original: 0x00376F57 - 0x00376F72 (27 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00376F57(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00376F57: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00376F5Fu); RECOMP_ABI_CALL(0x00376E9Au, sub_00376E9A); /* call 0x00376E9A */

loc_00376F5F: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00376F6C; /* je: equal / zero */

loc_00376F66: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00376F6Cu); RECOMP_ABI_CALL(0x00371CC4u, sub_00371CC4); /* call 0x00371CC4 */

loc_00376F6C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00376F72
 * Original: 0x00376F72 - 0x00376F7B (9 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00376F72(void)
{

loc_00376F72: ;
    eax = (int32_t)MEMF(esp + 4); /* cvttss2si */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00376F7B
 * Original: 0x00376F7B - 0x00376FC9 (78 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00376F7B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00376F7B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x14;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    MEM32(ebp + -8) = 0x40549A78;
    fp_top() = fp_top() * MEMF(0x3E206C); /* fmul dword ptr [0x3e206c] */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(ebp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = fp_top() * MEMF(ebp + -4); /* fmul dword ptr [ebp - 4] */
    fp_top() = rint(fp_top()); /* frndint */
    MEMF(ebp + -12) = (float)fp_top(); /* fst */
    /* wait - FPU sync */
    fp_push(1.0); /* fld1 */
    fp_top() = ldexp(fp_top(), (int)fp_st1()); /* fscale */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(ebp + -20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = fp_top() * MEMF(ebp + -4); /* fmul dword ptr [ebp - 4] */
    fp_top() = fp_top() - MEMF(ebp + -12); /* fsub dword ptr [ebp - 0xc] */
    fp_top() = exp2(fp_top()) - 1.0; /* f2xm1 */
    fp_top() = fp_top() + MEMF(ebp + 8); /* fadd dword ptr [ebp + 8] */
    fp_st1() = fp_st1() * fp_top(); fp_pop(); /* fmulp st(1) */
    MEMF(ebp + -16) = (float)fp_top(); fp_pop(); /* fstp */
    /* wait - FPU sync */
    fp_push(MEMF(ebp + -16)); /* fld float */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00376FC9
 * Original: 0x00376FC9 - 0x00377055 (140 bytes, 50 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns float_sse
 * Frame: standard_frame
 */
void sub_00376FC9(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_00376FC9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFD8F0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xFFFFD8F0u (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00377051; /* jle: less or equal (signed <=) */

loc_00376FD9: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00377051; /* je: equal / zero */

loc_00376FDE: ;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    eax = MEM32(ebp + 0xC);
    fp_top() = fp_top() / MEMF(ebp + 0x14); /* fdiv dword ptr [ebp + 0x14] */
    eax = eax + eax;
    PUSH32(esp, eax);
    fp_top() = fp_top() * MEMF(0x3C8328); /* fmul dword ptr [0x3c8328] */
    fp_top() = cos(fp_top()); /* fcos */
    MEMD(ebp + -8) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00376FFAu); RECOMP_ABI_CALL(0x00376F7Bu, sub_00376F7B); /* call 0x00376F7B */

loc_00376FFA: ;
    fp_push(MEMD(ebp + -8)); /* fld double */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_top() = MEMD(0x3D45C8) - fp_top(); /* fsubr qword ptr [0x3d45c8] */
    fp_push(1.0); /* fld1 */
    fp_top() = fp_top() - MEMD(ebp + -8); /* fsub qword ptr [ebp - 8] */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    fp_top() = fp_top() + fp_top(); /* fadd st(0), st(0) */
    fp_push(MEMD(ebp + -8)); /* fld double */
    fp_top() = fp_top() * MEMD(ebp + -8); /* fmul qword ptr [ebp - 8] */
    fp_top() = MEMD(0x3D45C8) - fp_top(); /* fsubr qword ptr [0x3d45c8] */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() - fp_top(); fp_pop(); /* fsubp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_st1() = fp_st1() - fp_top(); fp_pop(); /* fsubp st(1) */
    fp_push(1.0); /* fld1 */
    fp_top() = fp_top() - g_fp_stack[(g_fp_top + 2) & 7]; /* fsub st(2) */
    fp_st1() = fp_st1() / fp_top(); fp_pop(); /* fdivp st(1) */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00377042; /* jne: not equal / not zero */

loc_00377039: ;
    fp_pop(); /* fstp st(0) */
    eax = 0xFFFF;
    goto loc_00377051;

loc_00377042: ;
    fp_top() = fp_top() * MEMF(0x37A5D4); /* fmul dword ptr [0x37a5d4] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00377051u); RECOMP_ABI_CALL(0x00376F72u, sub_00376F72); /* call 0x00376F72 */

loc_00377051: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00377055
 * Original: 0x00377055 - 0x00377184 (303 bytes, 114 insns)
 * Category: game_audio
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00377055(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_00377055: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(ebp + 0x14);
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0x14); /* fmul dword ptr [ecx + 0x14] */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    fp_top() = fp_top() * MEMF(ebp + 0xC); /* fmul dword ptr [ebp + 0xc] */
    MEMF(ebp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(ecx + 0x18)); /* fild */
    fp_top() = fp_top() * MEMF(ecx + 0x1C); /* fmul dword ptr [ecx + 0x1c] */
    fp_push((double)SMEM32(ecx + 0x20)); /* fild */
    fp_top() = fp_top() * MEMF(ecx + 0x24); /* fmul dword ptr [ecx + 0x24] */
    MEMF(ebp + 0x14) = (float)fp_top(); /* fst */
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00377085u); RECOMP_ABI_CALL(0x00376F72u, sub_00376F72); /* call 0x00376F72 */

loc_00377085: ;
    eax = eax + MEM32(ecx + 4);
    fp_push(1.0); /* fld1 */
    edx = MEM32(ebp + 0x18);
    MEM32(edx) = eax;
    fp_top() = fp_top() - MEMF(ecx + 0x1C); /* fsub dword ptr [ecx + 0x1c] */
    fp_top() = fp_top() * (double)SMEM32(ecx + 0x18); /* fimul dword ptr [ecx + 0x18] */
    PUSH32(esp, ecx);
    fp_push(1.0); /* fld1 */
    fp_top() = fp_top() - MEMF(ecx + 0x24); /* fsub dword ptr [ecx + 0x24] */
    fp_top() = fp_top() * (double)SMEM32(ecx + 0x20); /* fimul dword ptr [ecx + 0x20] */
    MEMF(ebp + 0xC) = (float)fp_top(); /* fst */
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003770ADu); RECOMP_ABI_CALL(0x00376F72u, sub_00376F72); /* call 0x00376F72 */

loc_003770AD: ;
    edi = eax;
    edi = edi + MEM32(ecx + 8);
    edx = 0xFFFFD8F0u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003770BF; /* jge: greater or equal (signed >=) */

loc_003770BB: ;
    edi = edx;
    goto loc_003770C5;

loc_003770BF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_003770C5; /* jle: less or equal (signed <=) */

loc_003770C3: ;
    edi = 0; /* xor self */

loc_003770C5: ;
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    fp_push(MEMF(ebp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00377110; /* jne: not equal / not zero */

loc_003770D8: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3E2070)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3e2070] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_003770EF; /* jp: parity */

loc_003770EA: ;
    MEM32(ebp + 8) = edx;
    goto loc_0037710A;

loc_003770EF: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    PUSH32(esp, ecx);
    fp_push(0.30102999566398119521); /* fldlg2 */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    fp_top() = fp_top() * MEMF(0x3E09A0); /* fmul dword ptr [0x3e09a0] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00377107u); RECOMP_ABI_CALL(0x00376F72u, sub_00376F72); /* call 0x00376F72 */

loc_00377107: ;
    MEM32(ebp + 8) = eax;

loc_0037710A: ;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    fp_top() = fp_top() + MEMF(ebp + 0x14); /* fadd dword ptr [ebp + 0x14] */

loc_00377110: ;
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00377119u); RECOMP_ABI_CALL(0x00376F72u, sub_00376F72); /* call 0x00376F72 */

loc_00377119: ;
    eax = eax + MEM32(ecx + 0xC);
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    esi = MEM32(ebp + 0x1C);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037712Du); RECOMP_ABI_CALL(0x00376F72u, sub_00376F72); /* call 0x00376F72 */

loc_0037712D: ;
    esi = eax;
    esi = esi + MEM32(ecx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0037713A; /* jge: greater or equal (signed >=) */

loc_00377136: ;
    esi = edx;
    goto loc_00377140;

loc_0037713A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00377140; /* jle: less or equal (signed <=) */

loc_0037713E: ;
    esi = 0; /* xor self */

loc_00377140: ;
    fp_push(MEMF(0x3E2074)); /* fld float */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037715Au); RECOMP_ABI_CALL(0x00376FC9u, sub_00376FC9); /* call 0x00376FC9 */

loc_0037715A: ;
    fp_push(MEMF(0x3E2074)); /* fld float */
    ecx = MEM32(ebp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx) = eax;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00377179u); RECOMP_ABI_CALL(0x00376FC9u, sub_00376FC9); /* call 0x00376FC9 */

loc_00377179: ;
    ecx = MEM32(ebp + 0x24);
    POP32(esp, edi);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00377184
 * Original: 0x00377184 - 0x00377226 (162 bytes, 63 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00377184(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00377184: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = esi + 0xC;
    PUSH32(esp, 2);
    ecx = edi;
    MEM32(esi + 0x18) = 1;
    MEM32(esi + 0x1C) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003771A6u); RECOMP_ABI_CALL(0x00371E39u, sub_00371E39); /* call 0x00371E39 */

loc_003771A6: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003771B0u); RECOMP_ABI_CALL(0x00371E2Cu, sub_00371E2C); /* call 0x00371E2C */

loc_003771B0: ;
    ebx = ebx + ebx * 2;
    PUSH32(esp, 1);
    if (4) _cf = (int)(((ebx) >> (32 - (4))) & 1);
    ebx = ebx << 4;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x626F5344);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003771C3u); RECOMP_ABI_CALL(0x00371C5Cu, sub_00371C5C); /* call 0x00371C5C */

loc_003771C3: ;
    edi = eax;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FF8FFF2;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    eax = eax + 0x8007000Eu;
    MEM32(esi + 0x40) = edi;
    if (((int32_t)eax < 0)) goto loc_0037721D; /* js: sign (negative) */

loc_003771D8: ;
    ecx = ebx;
    edx = ecx;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + 8) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_0037721D; /* jbe: below or equal (unsigned <=) */

loc_003771F4: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */

loc_003771F6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003771FFu); RECOMP_ABI_CALL(0x0019F2A9u, sub_0019F2A9); /* call 0x0019F2A9 */

loc_003771FF: ;
    ecx = MEM32(esi + 0x40);
    MEM32(ecx + edi + 0x10) = eax;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(MEM32(eax + edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edi + 0x10), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0037721D; /* je: equal / zero */

loc_0037720F: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 8);
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x30)) >> 32) & 1);
    edi = edi + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x1C) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_003771F6; /* jb: below (unsigned <) */

loc_0037721D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00377226
 * Original: 0x00377226 - 0x0037723E (24 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00377226(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00377226: ;
    eax = MEM32(esp + 8);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    ecx = 0; /* xor self */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    eax = 0; /* xor self */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0037723E
 * Original: 0x0037723E - 0x00377284 (70 bytes, 31 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0037723E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037723E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), ecx (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_0037726F; /* je: equal / zero */

loc_00377250: ;
    eax = MEM32(ebp + 0x10);
    eax = eax - ecx;
    if ((eax == 0)) goto loc_00377269; /* je: equal / zero */

loc_00377257: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0037726C; /* jne: not equal / not zero */

loc_0037725B: ;
    eax = esi + 0x20;
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00377267u); RECOMP_ABI_CALL(0x00371FF1u, sub_00371FF1); /* call 0x00371FF1 */

loc_00377267: ;
    goto loc_0037726C;

loc_00377269: ;
    MEM32(esi + 0x20) = ecx;

loc_0037726C: ;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) + edi;

loc_0037726F: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = esi + 0xC;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037727Eu); RECOMP_ABI_CALL(0x00371F76u, sub_00371F76); /* call 0x00371F76 */

loc_0037727E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00377284
 * Original: 0x00377284 - 0x0037732A (166 bytes, 64 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00377284(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00377284: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00377319; /* je: equal / zero */

loc_00377298: ;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x10), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003772A6; /* je: equal / zero */

loc_0037729E: ;
    PUSH32(esp, MEM32(esi + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003772A6u); RECOMP_ABI_CALL(0x0034D2C7u, sub_0034D2C7); /* call 0x0034D2C7 */

loc_003772A6: ;
    eax = esi + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6C5C); PUSH32(esp, 0x003772B0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003772B0: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), ebx (32-bit) */
    MEM32(ebp + 8) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_0037730F; /* jbe: below or equal (unsigned <=) */

loc_003772B8: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */

loc_003772BB: ;
    eax = MEM32(esi + 0x40);
    eax = eax + edi;
    _fa = (uint32_t)(MEM32(eax + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000000Au) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x2C), 0x8000000Au (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003772D8; /* jne: not equal / not zero */

loc_003772C9: ;
    PUSH32(esp, 1);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003772D8u); RECOMP_ABI_CALL(0x001A1D76u, sub_001A1D76); /* call 0x001A1D76 */

loc_003772D8: ;
    eax = MEM32(esi + 0x40);
    MEM32(eax + edi + 0x2C) = ebx;
    eax = MEM32(esi + 0x40);
    PUSH32(esp, MEM32(eax + edi + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003772EBu); RECOMP_ABI_CALL(0x0019F30Au, sub_0019F30A); /* call 0x0019F30A */

loc_003772EB: ;
    eax = MEM32(esi + 0x40);
    PUSH32(esp, 0x80004004u);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = eax + edi + 0x14;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00377300u); RECOMP_ABI_CALL(0x0037354Bu, sub_0037354B); /* call 0x0037354B */

loc_00377300: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 8);
    edi = edi + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x1C) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003772BB; /* jb: below (unsigned <) */

loc_0037730E: ;
    POP32(esp, edi);

loc_0037730F: ;
    eax = esi + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x00377319u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00377319: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00377322u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00377322: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037732A
 * Original: 0x0037732A - 0x0037735F (53 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037732A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037732A: ;
    edx = MEM32(ecx + 0x1C);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_0037734A; /* jbe: below or equal (unsigned <=) */

loc_00377334: ;
    eax = MEM32(ecx + 0x40);
    eax = eax + 0x2C;

loc_0037733A: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000000Au) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x8000000Au (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00377350; /* jne: not equal / not zero */

loc_00377342: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0037733A; /* jb: below (unsigned <) */

loc_0037734A: ;
    eax = 0; /* xor self */

loc_0037734C: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00377350: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0037735A; /* je: equal / zero */

loc_00377358: ;
    MEM32(eax) = esi;

loc_0037735A: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0037734C;

}

/**
 * sub_0037735F
 * Original: 0x0037735F - 0x00377407 (168 bytes, 64 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0037735F(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037735F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00377401; /* je: equal / zero */

loc_00377374: ;
    eax = esi + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(ebp + -8) = eax;
    { uint32_t _icall_target = MEM32(0x3C6C5C); PUSH32(esp, 0x00377381u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00377381: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), ebx (32-bit) */
    MEM32(ebp + 8) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_003773F8; /* jbe: below or equal (unsigned <=) */

loc_00377389: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */

loc_0037738C: ;
    eax = MEM32(esi + 0x40);
    eax = eax + edi;
    _fa = (uint32_t)(MEM32(eax + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000000Au) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x2C), 0x8000000Au (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003773E9; /* jne: not equal / not zero */

loc_0037739A: ;
    PUSH32(esp, ebx);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003773A8u); RECOMP_ABI_CALL(0x001A1D76u, sub_001A1D76); /* call 0x001A1D76 */

loc_003773A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003773E9; /* je: equal / zero */

loc_003773AC: ;
    eax = MEM32(esi + 0x40);
    MEM32(eax + edi + 0x2C) = ebx;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(MEM32(eax + edi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edi + 0x1C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003773C5; /* je: equal / zero */

loc_003773BC: ;
    eax = MEM32(eax + edi + 0x1C);
    ecx = MEM32(ebp + -4);
    MEM32(eax) = ecx;

loc_003773C5: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(MEM32(eax + edi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edi + 0x20), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003773D8; /* je: equal / zero */

loc_003773CE: ;
    eax = eax + edi;
    ecx = MEM32(eax + 0x20);
    eax = MEM32(eax + 0x2C);
    MEM32(ecx) = eax;

loc_003773D8: ;
    eax = MEM32(esi + 0x40);
    eax = MEM32(eax + edi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003773E9; /* je: equal / zero */

loc_003773E3: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003773E9u); RECOMP_ABI_CALL(0x0019F30Au, sub_0019F30A); /* call 0x0019F30A */

loc_003773E9: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 8);
    edi = edi + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x1C) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0037738C; /* jb: below (unsigned <) */

loc_003773F7: ;
    POP32(esp, edi);

loc_003773F8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -8));
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x00377401u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00377401: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00377407
 * Original: 0x00377407 - 0x0037744B (68 bytes, 18 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00377407(void)
{

loc_00377407: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi + 4) = 0x3E1EBC;
    MEM32(esi + 8) = 1;
    PUSH32(esp, 0x00377420u); RECOMP_ABI_CALL(0x00371E1Eu, sub_00371E1E); /* call 0x00371E1E */

loc_00377420: ;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0;
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;
    eax = esi + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esi) = 0x3E2088;
    MEM32(esi + 4) = 0x3E2078;
    { uint32_t _icall_target = MEM32(0x3C6CC0); PUSH32(esp, 0x00377443u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00377443: ;
    MEM32(esi + 0x40) = MEM32(esi + 0x40) & 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0037744B
 * Original: 0x0037744B - 0x00377494 (73 bytes, 20 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037744B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037744B: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 8) = MEM32(eax + 8) + 1;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(eax + 8);
    esp += 8; return; /* ret 4 */

loc_00377458: ;
    eax = MEM32(esp + 4);
    eax = eax + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00377465u); RECOMP_ABI_CALL(0x0036F3CAu, sub_0036F3CA); /* call 0x0036F3CA */

loc_00377465: ;
    esp += 8; return; /* ret 4 */

    esp += 12; return; /* ret 8 */

    MEM32(esp + 4) = MEM32(esp + 4) - 4;
    goto loc_00377458;

}

/**
 * sub_00377458
 * Original: 0x00377458 - 0x00377494 (60 bytes, 16 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00377458(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00377458: ;
    eax = MEM32(esp + 4);
    eax = eax + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00377465u); RECOMP_ABI_CALL(0x0036F3CAu, sub_0036F3CA); /* call 0x0036F3CA */

loc_00377465: ;
    esp += 8; return; /* ret 4 */

    esp += 12; return; /* ret 8 */

    MEM32(esp + 4) = MEM32(esp + 4) - 4;
    goto loc_00377458;

}

/**
 * sub_00377468
 * Original: 0x00377468 - 0x00377494 (44 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00377468(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00377468: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

    esp += 12; return; /* ret 8 */

    MEM32(esp + 4) = MEM32(esp + 4) - 4;
    g_seh_ebp = ebp; sub_00377458(); return; /* tail jmp 0x00377458 */

}

/**
 * sub_0037746D
 * Original: 0x0037746D - 0x00377494 (39 bytes, 9 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037746D(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037746D: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = ecx + 0xC;
    PUSH32(esp, 0x0037747Du); RECOMP_ABI_CALL(0x00371FF1u, sub_00371FF1); /* call 0x00371FF1 */

loc_0037747D: ;
    esp += 12; return; /* ret 8 */

    MEM32(esp + 4) = MEM32(esp + 4) - 4;
    g_seh_ebp = ebp; sub_00377458(); return; /* tail jmp 0x00377458 */

}

/**
 * sub_00377480
 * Original: 0x00377480 - 0x00377494 (20 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00377480(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00377480: ;
    MEM32(esp + 4) = MEM32(esp + 4) - 4;
    g_seh_ebp = ebp; sub_0037744B(); return; /* tail jmp 0x0037744B */

    MEM32(esp + 4) = MEM32(esp + 4) - 4;
    g_seh_ebp = ebp; sub_00377458(); return; /* tail jmp 0x00377458 */

}

/**
 * sub_0037748A
 * Original: 0x0037748A - 0x00377494 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037748A(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0037748A: ;
    MEM32(esp + 4) = MEM32(esp + 4) - 4;
    g_seh_ebp = ebp; sub_00377458(); return; /* tail jmp 0x00377458 */

}

/**
 * sub_00377494
 * Original: 0x00377494 - 0x003774C4 (48 bytes, 18 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00377494(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00377494: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    MEM32(esi) = 3;
    _fa = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x18), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003774BD; /* je: equal / zero */

loc_003774AA: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003774B3u); RECOMP_ABI_CALL(0x0037732Au, sub_0037732A); /* call 0x0037732A */

loc_003774B3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003774BD; /* jne: not equal / not zero */

loc_003774B7: ;
    MEM32(esi) = 1;

loc_003774BD: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003774C4
 * Original: 0x003774C4 - 0x00377529 (101 bytes, 37 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003774C4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003774C4: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    MEM32(esi) = 0x3E2088;
    MEM32(esi + 4) = 0x3E2078;
    PUSH32(esp, 0x003774DAu); RECOMP_ABI_CALL(0x00377284u, sub_00377284); /* call 0x00377284 */

loc_003774DA: ;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00377518; /* je: equal / zero */

loc_003774E0: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00377506; /* jbe: below or equal (unsigned <=) */

loc_003774E8: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */

loc_003774EB: ;
    eax = MEM32(esi + 0x40);
    eax = MEM32(eax + edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003774FC; /* je: equal / zero */

loc_003774F6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003774FCu); RECOMP_ABI_CALL(0x0019DD85u, sub_0019DD85); /* call 0x0019DD85 */

loc_003774FC: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 0x30;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0x1C) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003774EB; /* jb: below (unsigned <) */

loc_00377505: ;
    POP32(esp, edi);

loc_00377506: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_00377518; /* je: equal / zero */

loc_0037750E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00377514u); RECOMP_ABI_CALL(0x00371CC4u, sub_00371CC4); /* call 0x00371CC4 */

loc_00377514: ;
    MEM32(esi + 0x40) = MEM32(esi + 0x40) & 0;

loc_00377518: ;
    ecx = esi + 0xC;
    PUSH32(esp, 0x00377520u); RECOMP_ABI_CALL(0x00372075u, sub_00372075); /* call 0x00372075 */

loc_00377520: ;
    MEM32(esi + 4) = 0x3E1EBC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00377529
 * Original: 0x00377529 - 0x0037768B (354 bytes, 138 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00377529(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00377529: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    esi = 0x80004005u;
    MEM32(ebp + -4) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0037757F; /* je: equal / zero */

loc_00377543: ;
    eax = MEM32(ebx);
    MEM32(ebp + 0x10) = eax;
    eax = MEM32(ebx + 4);
    PUSH32(esp, ebx);
    MEM32(ebp + -8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00377554u); RECOMP_ABI_CALL(0x0037352Du, sub_0037352D); /* call 0x0037352D */

loc_00377554: ;
    ecx = MEM32(ebp + 8);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    ecx = ecx + 0xC;
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00377569u); RECOMP_ABI_CALL(0x00371F0Fu, sub_00371F0F); /* call 0x00371F0F */

loc_00377569: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00377578; /* jl: less (signed <) */

loc_00377570: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -8));
    goto loc_0037757C;

loc_00377578: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);

loc_0037757C: ;
    PUSH32(esp, ebx);
    goto loc_003775C4;

loc_0037757F: ;
    esi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00377681; /* je: equal / zero */

loc_0037758A: ;
    eax = MEM32(esi);
    MEM32(ebp + -12) = eax;
    eax = MEM32(esi + 4);
    PUSH32(esp, esi);
    MEM32(ebp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037759Bu); RECOMP_ABI_CALL(0x0037352Du, sub_0037352D); /* call 0x0037352D */

loc_0037759B: ;
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003775D8; /* jne: not equal / not zero */

loc_003775A3: ;
    PUSH32(esp, edi);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ebx + 0xC;
    PUSH32(esp, MEM32(ebp + -12));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003775B6u); RECOMP_ABI_CALL(0x00371E7Bu, sub_00371E7B); /* call 0x00371E7B */

loc_003775B6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_003775CE; /* jl: less (signed <) */

loc_003775BD: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));

loc_003775C3: ;
    PUSH32(esp, esi);

loc_003775C4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003775C9u); RECOMP_ABI_CALL(0x0037354Bu, sub_0037354B); /* call 0x0037354B */

loc_003775C9: ;
    goto loc_00377681;

loc_003775CE: ;
    PUSH32(esp, 0x80004005u);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    goto loc_003775C3;

loc_003775D8: ;
    eax = ebx + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(ebp + -16) = eax;
    { uint32_t _icall_target = MEM32(0x3C6C5C); PUSH32(esp, 0x003775E5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003775E5: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(ebp + 8) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003775F3u); RECOMP_ABI_CALL(0x0037732Au, sub_0037732A); /* call 0x0037732A */

loc_003775F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0037766A; /* je: equal / zero */

loc_003775F7: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebx + 0x40);
    PUSH32(esp, 6);
    eax = eax + eax * 2;
    eax = eax << 4;
    edi = ecx + eax + 0x14;
    POP32(esp, ecx);
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = MEM32(ebx + 0x40);
    esi = MEM32(ebp + 0x10);
    MEM32(ecx + eax + 0x2C) = 0x8000000Au;
    ecx = MEM32(ebx + 0x40);
    edx = MEM32(ebx + 0x20);
    MEM32(ecx + eax + 8) = edx;
    ecx = MEM32(esi + 4);
    MEM32(ebx + 0x20) = MEM32(ebx + 0x20) + ecx;
    ecx = MEM32(ebx + 0x40);
    ecx = ecx + eax;
    PUSH32(esp, ecx);
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ebx + 0xC;
    PUSH32(esp, MEM32(ebp + -12));
    MEM32(ebp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00377644u); RECOMP_ABI_CALL(0x00371E7Bu, sub_00371E7B); /* call 0x00371E7B */

loc_00377644: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00377678; /* jge: greater or equal (signed >=) */

loc_0037764B: ;
    PUSH32(esp, 0x80004005u);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00377659u); RECOMP_ABI_CALL(0x0037354Bu, sub_0037354B); /* call 0x0037354B */

loc_00377659: ;
    eax = MEM32(ebx + 0x40);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, MEM32(eax + ecx + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00377668u); RECOMP_ABI_CALL(0x0019F30Au, sub_0019F30A); /* call 0x0019F30A */

loc_00377668: ;
    goto loc_00377678;

loc_0037766A: ;
    PUSH32(esp, 0x80004005u);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00377678u); RECOMP_ABI_CALL(0x0037354Bu, sub_0037354B); /* call 0x0037354B */

loc_00377678: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -16));
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x00377681u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00377681: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0037768B
 * Original: 0x0037768B - 0x003776A6 (27 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037768B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037768B: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00377693u); RECOMP_ABI_CALL(0x003774C4u, sub_003774C4); /* call 0x003774C4 */

loc_00377693: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003776A0; /* je: equal / zero */

loc_0037769A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003776A0u); RECOMP_ABI_CALL(0x00371CC4u, sub_00371CC4); /* call 0x00371CC4 */

loc_003776A0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003776A6
 * Original: 0x003776A6 - 0x003776C0 (26 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003776A6(void)
{

loc_003776A6: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = MEM32(ecx) & 0;
    PUSH32(esp, edi);
    MEM32(ecx + 8) = eax;
    eax = 0; /* xor self */
    edi = ecx + 0x14;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = ecx;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003776C0
 * Original: 0x003776C0 - 0x003776EE (46 bytes, 20 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003776C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003776C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003776EC; /* je: equal / zero */

loc_003776CA: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003776EC; /* je: equal / zero */

loc_003776D1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x3C6D68); PUSH32(esp, 0x003776DBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003776DB: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003776EC; /* je: equal / zero */

loc_003776E2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003776E8u); RECOMP_ABI_CALL(0x00371BDDu, sub_00371BDD); /* call 0x00371BDD */

loc_003776E8: ;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) & 0;

loc_003776EC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003776EE
 * Original: 0x003776EE - 0x003777A1 (179 bytes, 66 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003776EE(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003776EE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC;
    eax = 0; /* xor self */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 1 (32-bit) */
    PUSH32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    eax = eax + eax + 0xC;
    eax = eax << 4;
    ecx = eax;
    eax = ecx + 0x37AE58;
    MEM32(esi + 0x10) = eax;
    ecx = ecx + 0x37AE68;
    MEM32(esi + 0xC) = ecx;
    edx = MEM32(ecx + 8);
    edx = edx >> 3;
    edx = ZX16(LO16(edx));
    MEM32(esi) = edx;
    MEM32(esi + 4) = ebx;
    edi = MEM32(ecx);
    ecx = MEM32(eax + 8);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    MEM32(ebp + -8) = ecx;
    eax = MEM32(eax);
    MEM32(ebp + -12) = eax;
    eax = edx;
    eax = eax - ebx;
    if ((eax == 0)) goto loc_00377771; /* je: equal / zero */

loc_00377749: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037775Au); RECOMP_ABI_CALL(0x00378079u, sub_00378079); /* call 0x00378079 */

loc_0037775A: ;
    ecx = MEM32(ebp + 8);
    MEM32(edi + ecx * 8 + 4) = MEM32(edi + ecx * 8 + 4) & 0;
    MEM32(edi + ecx * 8) = eax;
    eax = MEM32(esi);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(ebp + 8) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_00377749; /* jb: below (unsigned <) */

loc_00377771: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 0 (32-bit) */
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_0037778E; /* je: equal / zero */

loc_0037777D: ;
    MEM32(0xFE802040u) = eax;
    eax = MEM32(esi);
    eax = eax - MEM32(esi + 4);
    MEM32(0xFE8020D4u) = eax;
    goto loc_0037779A;

loc_0037778E: ;
    MEM32(0xFE802048u) = eax;
    eax = MEM32(esi);
    MEM32(0xFE8020DCu) = eax;

loc_0037779A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003777A1
 * Original: 0x003777A1 - 0x003777F3 (82 bytes, 32 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003777A1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003777A1: ;
    edx = MEM32(ecx + 4);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = eax - edx;
    edx = edx - edi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(ecx + 4) = edx;
    edx = MEM32(0x37AF28);
    if (CMP_BE(_fa & _fb, 0)) goto loc_003777DB; /* jbe: below or equal (unsigned <=) */

loc_003777BC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    edx = edx + eax * 8;
    esi = esi + 4;

loc_003777C8: ;
    ebx = MEM32(esi);
    MEM32(edx + 4) = MEM32(edx + 4) & 0;
    MEM32(edx) = ebx;
    edx = edx + 8;
    esi = esi + 0x10;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003777C8; /* jne: not equal / not zero */

loc_003777D9: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_003777DB: ;
    edx = MEM32(ecx);
    edx = edx - MEM32(ecx + 4);
    ecx = MEM32(esp + 0x10);
    eax = eax << 0xC;
    MEM32(-25157420) = edx;
    MEM32(ecx) = eax;
    POP32(esp, edi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003777F3
 * Original: 0x003777F3 - 0x0037781B (40 bytes, 17 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003777F3(void)
{

loc_003777F3: ;
    eax = ecx;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    edi = edi + MEM32(esp + 0xC);
    eax = ecx;
    ecx = ecx >> 2;
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
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0037781B
 * Original: 0x0037781B - 0x003778F3 (216 bytes, 80 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0037781B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037781B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    ebx = ecx;
    edx = MEM32(ebx + 4);
    eax = MEM32(ebx);
    ecx = MEM32(ebp + 8);
    eax = eax - edx;
    MEM32(ebp + -12) = eax;
    eax = MEM32(0x37AF28);
    MEM32(ebp + -4) = eax;
    eax = ecx;
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -8) = eax;
    if (CMP_A(_fa, _fb)) goto loc_00377871; /* ja: above (unsigned >) */

loc_00377847: ;
    _fa = (uint32_t)(MEM32(ebx + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x1C), ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003778EA; /* jae: above or equal (unsigned >=) */

loc_00377850: ;
    esi = ebx + 0x14;
    edi = ebp + -28;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    PUSH32(esp, 0x61645344);
    MEM32(ebx + 0x1C) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037786Au); RECOMP_ABI_CALL(0x00371B96u, sub_00371B96); /* call 0x00371B96 */

loc_0037786A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(ebx + 0x14) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_00377878; /* jne: not equal / not zero */

loc_00377871: ;
    eax = 0x8007000Eu;
    goto loc_003778EC;

loc_00377878: ;
    edi = MEM32(0x3C6D68);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x00377886u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00377886: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_003778BF; /* jbe: below or equal (unsigned <=) */

loc_0037788D: ;
    ecx = MEM32(ebp + -4);
    edx = MEM32(ebp + -12);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    esi = ecx + edx * 8;
    MEM32(ebp + -4) = eax;

loc_0037789D: ;
    eax = MEM32(ebx + 0x14);
    eax = eax + MEM32(ebp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6D6C); PUSH32(esp, 0x003778AAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003778AA: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0x1000;
    MEM32(esi) = eax;
    esi = esi + 8;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0037789D; /* jne: not equal / not zero */

loc_003778BF: ;
    eax = MEM32(ebx);
    eax = eax - MEM32(ebx + 4);
    eax = eax + MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    MEM32(0xFE8020D4u) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003778EA; /* je: equal / zero */

loc_003778D2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, MEM32(ebp + -28));
    { uint32_t _icall_target = edi; PUSH32(esp, 0x003778DCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003778DC: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003778EA; /* je: equal / zero */

loc_003778E2: ;
    PUSH32(esp, MEM32(ebp + -28));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003778EAu); RECOMP_ABI_CALL(0x00371BDDu, sub_00371BDD); /* call 0x00371BDD */

loc_003778EA: ;
    eax = 0; /* xor self */

loc_003778EC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003778F3
 * Original: 0x003778F3 - 0x0037796C (121 bytes, 42 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003778F3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003778F3: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    edx = ecx;
    edx = edx | eax;
    if ((edx != 0)) goto loc_0037790C; /* jne: not equal / not zero */

loc_00377901: ;
    eax = MEM32(0x37AE54);
    ecx = MEM32(0x37AE50);

loc_0037790C: ;
    PUSH32(esp, esi);
    edx = ecx;
    esi = eax;
    esi = (esi << 2) | (edx >> (32 - 2)); /* shld */
    edx = edx << 2;
    edx = edx ^ ecx;
    esi = esi ^ eax;
    esi = (esi << 1) | (edx >> (32 - 1)); /* shld */
    edx = edx << 1;
    edx = edx ^ ecx;
    edx = edx << 0x1C;
    edx = edx ^ eax;
    ecx = (ecx >> 1) | (eax << (32 - 1)); /* shrd */
    esi = 0; /* xor self */
    edx = edx & 0x80000000u;
    eax = eax >> 1;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    esi = esi | ecx;
    edx = edx | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(0x37AE50) = esi;
    MEM32(0x37AE54) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_00377967; /* je: equal / zero */

loc_00377950: ;
    ecx = MEM32(esp + 0x18);
    eax = ecx;
    ecx = ecx >> 2;
    esi = 0x37AE50;
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

loc_00377967: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0037796C
 * Original: 0x0037796C - 0x00377999 (45 bytes, 17 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037796C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037796C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7FA49BCA);
    PUSH32(esp, 0x49DE12BA);
    PUSH32(esp, 0x00377980u); RECOMP_ABI_CALL(0x003778F3u, sub_003778F3); /* call 0x003778F3 */

loc_00377980: ;
    PUSH32(esp, 0x50);
    POP32(esp, esi);

loc_00377983: ;
    PUSH32(esp, 8);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00377992u); RECOMP_ABI_CALL(0x003778F3u, sub_003778F3); /* call 0x003778F3 */

loc_00377992: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00377983; /* jne: not equal / not zero */

loc_00377995: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00377999
 * Original: 0x00377999 - 0x00377A68 (207 bytes, 83 insns)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00377999(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00377999: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003779AAu); RECOMP_ABI_CALL(0x0037796Cu, sub_0037796C); /* call 0x0037796C */

loc_003779AA: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003779E2; /* je: equal / zero */

loc_003779B1: ;
    esi = MEM32(ebp + 0xC);
    eax = ebp + -8;
    ecx = 0; /* xor self */
    esi = esi - eax;

loc_003779BB: ;
    eax = ebp + ecx + -8;
    SET_LO8(edx, MEM8(esi + eax));
    SET_LO8(edx, LO8(edx) ^ MEM8(eax));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    MEM8(ebp + ecx + -17) = LO8(edx);
    if (CMP_B(_fa, _fb)) goto loc_003779BB; /* jb: below (unsigned <) */

loc_003779CE: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003779F9; /* je: equal / zero */

loc_003779D5: ;
    ecx = MEM32(ebp + -16);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -12);
    MEM32(eax + 4) = ecx;
    goto loc_003779F9;

loc_003779E2: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003779EE; /* jne: not equal / not zero */

loc_003779E9: ;
    eax = eax | 0xFFFFFFFFu;
    goto loc_00377A62;

loc_003779EE: ;
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    MEM32(ebp + -16) = ecx;
    MEM32(ebp + -12) = eax;

loc_003779F9: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00377A06u); RECOMP_ABI_CALL(0x003778F3u, sub_003778F3); /* call 0x003778F3 */

loc_00377A06: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00377A13; /* je: equal / zero */

loc_00377A0B: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 8;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 8;

loc_00377A13: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00377A60; /* jbe: below or equal (unsigned <=) */

loc_00377A18: ;
    eax = MEM32(ebp + 0xC);
    eax = eax - MEM32(ebp + 0x14);
    PUSH32(esp, ebx);
    MEM32(ebp + 0x18) = eax;

loc_00377A22: ;
    ecx = MEM32(ebp + 0x14);
    eax = edi;
    eax = eax & 7;
    SET_LO8(ebx, MEM8(ebp + eax + -8));
    SET_LO8(eax, MEM8(ebp + eax + -16));
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)LO8(ebx);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    esi = edi + ecx;
    ecx = MEM32(ebp + 0x18);
    SET_LO8(ecx, MEM8(ecx + esi));
    SET_LO8(ecx, LO8(ecx) - LO8(eax));
    PUSH32(esp, 1);
    eax = ebp + 0xF;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM8(ebp + 0xB) = LO8(ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00377A51u); RECOMP_ABI_CALL(0x003778F3u, sub_003778F3); /* call 0x003778F3 */

loc_00377A51: ;
    SET_LO8(ebx, LO8(ebx) ^ MEM8(ebp + 0xF));
    SET_LO8(ebx, LO8(ebx) ^ MEM8(ebp + 0xB));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 0x10) (32-bit) */
    MEM8(esi) = LO8(ebx);
    if (CMP_B(_fa, _fb)) goto loc_00377A22; /* jb: below (unsigned <) */

loc_00377A5F: ;
    POP32(esp, ebx);

loc_00377A60: ;
    eax = 0; /* xor self */

loc_00377A62: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00377A68
 * Original: 0x00377A68 - 0x00377B3B (211 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00377A68(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00377A68: ;
    eax = MEM32(0xFE820010u);
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00377A68; /* jb: below (unsigned <) */

loc_00377A75: ;
    ecx = 0; /* xor self */
    eax = 0; /* xor self */
    PUSH32(esp, esi);

loc_00377A7A: ;
    esi = MEM32(0x37AE88);
    edx = ecx;
    edx = edx & 0xFFFF;
    MEM32(eax + esi + 0x7C) = edx;
    eax = eax + 0x80;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8000 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00377A7A; /* jb: below (unsigned <) */

loc_00377A99: ;
    eax = MEM32(0x37AE8C);
    MEM32(0xFE80202Cu) = eax;
    eax = MEM32(0x37AECC);
    MEM32(0xFE802038u) = eax;
    eax = MEM32(0x37AEDC);
    MEM32(0xFE80203Cu) = eax;
    eax = MEM32(0x37AEAC);
    MEM32(0xFE802030u) = eax;
    eax = MEM32(0x37AEBC);
    MEM32(0xFE802034u) = eax;
    eax = MEM32(0x37AE9C);
    MEM32(0xFE80115Cu) = eax;
    eax = 0xFFF;
    MEM32(0xFE8202A4u) = eax;
    MEM32(0xFE8202B0u) = eax;
    MEM32(0xFE8202A0u) = eax;
    MEM32(0xFE8202A8u) = eax;
    MEM32(0xFE8202ACu) = eax;
    MEM32(-25032700) = 0x7FF;
    eax = MEM32(0x37AF0C);
    MEM32(0xFE820808u) = eax;
    eax = MEM32(0x37A4A8);
    edx = MEM32(eax + 0x18);
    esi = MEM32(eax + 0x10);
    PUSH32(esp, 0x1F);
    POP32(esp, ecx);
    edx = edx & ecx;
    edx = edx << 8;
    esi = esi & ecx;
    edx = edx | esi;
    esi = MEM32(eax + 8);
    eax = MEM32(eax);
    edx = edx << 8;
    esi = esi & ecx;
    edx = edx | esi;
    eax = eax & ecx;
    edx = edx << 8;
    edx = edx | eax;
    MEM32(-25034048) = edx;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00377B3B
 * Original: 0x00377B3B - 0x00377C7A (319 bytes, 91 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00377B3B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00377B3B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(0x37AEEC);
    MEM32(0xFE802044u) = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    MEM32(-24903936) = esi;
    MEM32(-24903932) = esi;
    eax = MEM32(0x37AE60);
    if (0xC) _cf = (int)(((eax) >> ((0xC) - 1)) & 1);
    eax = eax >> 0xC;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0xFE8020D8u) = eax;
    MEM32(0xFE801148u) = eax;
    PUSH32(esp, edi);
    MEM32(-25153500) = esi;
    edi = 0x2000;
    MEM32(-25153496) = edi;
    eax = MEM32(0x37AEE8);
    MEM32(ebp + -8) = ecx;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    MEM32(ebp + -4) = esi;

loc_00377B8C: ;
    ecx = MEM32(0x37AE5C);
    ebx = MEM32(ebp + -4);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebx)) >> 32) & 1);
    ecx = ecx + ebx;

loc_00377B97: ;
    ebx = MEM32(-25034736);
    _cf = 0; /* logical op clears CF */
    ebx = ebx & 0xFFFFFFFCu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00377B97; /* jb: below (unsigned <) */

loc_00377BA5: ;
    _cf = (int)((((uint64_t)(MEM32(ebp + -4)) + (uint64_t)(0x1000)) >> 32) & 1);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 0x1000;
    MEM32(-25028608) = edx;
    MEM32(-25028600) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = esi;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00377B8C; /* jb: below (unsigned <) */

loc_00377BC6: ;
    eax = MEM32(0xFE820010u);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00377BC6; /* jb: below (unsigned <) */

loc_00377BD3: ;
    ebx = MEM32(ebp + -8);
    MEM32(-25030656) = esi;
    MEM32(-25030652) = edi;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xC), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00377C24; /* jne: not equal / not zero */

loc_00377BEA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x626F5344);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00377BF7u); RECOMP_ABI_CALL(0x00371C5Cu, sub_00371C5C); /* call 0x00371C5C */

loc_00377BF7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00377C04; /* je: equal / zero */

loc_00377BFB: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00377C02u); RECOMP_ABI_CALL(0x0037279Au, sub_0037279A); /* call 0x0037279A */

loc_00377C02: ;
    goto loc_00377C06;

loc_00377C04: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */

loc_00377C06: ;
    esi = eax;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    esi = esi & 0x7FF8FFF2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    esi = esi + 0x8007000Eu;
    MEM32(ebx + 0xC) = eax;
    if (((int32_t)esi < 0)) goto loc_00377C24; /* js: sign (negative) */

loc_00377C1D: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00377C24u); RECOMP_ABI_CALL(0x003727B9u, sub_003727B9); /* call 0x003727B9 */

loc_00377C24: ;
    eax = MEM32(ebp + -8);
    MEM32(-24903684) = edi;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFF7u;
    _cf = 0; /* logical op clears CF */
    eax = eax | edi;
    MEM32(0xFE83FF10u) = eax;
    MEM32(-24903916) = 0xFF;
    eax = MEM32(0xFE803024u);
    MEM32(0xFE80302Cu) = eax;
    eax = MEM32(0xFE803034u);
    MEM32(0xFE80303Cu) = eax;
    eax = MEM32(0xFE803044u);
    MEM32(0xFE80304Cu) = eax;
    eax = MEM32(0xFE803054u);
    MEM32(0xFE80305Cu) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(-24903684) = 3;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00377C7A
 * Original: 0x00377C7A - 0x00377E1E (420 bytes, 130 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00377C7A(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00377C7A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    esi = ecx;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    MEM32(0xFE85FFFCu) = eax;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(ebp + -12) = ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -20) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00377CE1; /* je: equal / zero */

loc_00377CA1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x626F5344);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00377CAEu); RECOMP_ABI_CALL(0x00371C5Cu, sub_00371C5C); /* call 0x00371C5C */

loc_00377CAE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00377CBB; /* je: equal / zero */

loc_00377CB2: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00377CB9u); RECOMP_ABI_CALL(0x00378F7Cu, sub_00378F7C); /* call 0x00378F7C */

loc_00377CB9: ;
    goto loc_00377CBD;

loc_00377CBB: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */

loc_00377CBD: ;
    edx = eax;
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x7FF8FFF2;
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    edx = edx + 0x8007000Eu;
    MEM32(esi + 0x10) = eax;
    MEM32(ebp + -12) = edx;
    if (((int32_t)edx < 0)) goto loc_00377CE1; /* js: sign (negative) */

loc_00377CD7: ;
    PUSH32(esp, MEM32(esi + 0xC));
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00377CE1u); RECOMP_ABI_CALL(0x0037908Eu, sub_0037908E); /* call 0x0037908E */

loc_00377CE1: ;
    eax = MEM32(0x37AEFC);
    MEM32(0xFE80204Cu) = eax;
    MEM32(-24772864) = ebx;
    MEM32(-24772860) = ebx;
    eax = MEM32(0x37AE70);
    if (0xC) _cf = (int)(((eax) >> ((0xC) - 1)) & 1);
    eax = eax >> 0xC;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0xFE8020E0u) = eax;
    eax = MEM32(0x37AEF8);
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -8) = ebx;
    edi = 0xFE804028u;
    ecx = 0x37A680;
    MEM32(ebp + -16) = 2;

loc_00377D21: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFF000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx), 0xFFFFF000u (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ebp + -4) = ebx;
    if (CMP_BE(_fa & _fb, 0)) goto loc_00377D60; /* jbe: below or equal (unsigned <=) */

loc_00377D2C: ;
    eax = MEM32(ebp + -8);
    ebx = MEM32(ebp + -24);
    edx = eax;
    if (0xC) _cf = (int)(((edx) >> (32 - (0xC))) & 1);
    edx = edx << 0xC;
    eax = ebx + eax * 8;

loc_00377D3A: ;
    ebx = MEM32(0x37AE6C);
    _cf = 0; /* logical op clears CF */
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(edx)) >> 32) & 1);
    ebx = ebx + edx;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = ebx;
    ebx = MEM32(ecx);
    if (0xC) _cf = (int)(((ebx) >> ((0xC) - 1)) & 1);
    ebx = ebx >> 0xC;
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x1000)) >> 32) & 1);
    edx = edx + 0x1000;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00377D3A; /* jb: below (unsigned <) */

loc_00377D5E: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */

loc_00377D60: ;
    eax = MEM32(ebp + -8);
    if (0xC) _cf = (int)(((eax) >> (32 - (0xC))) & 1);
    eax = eax << 0xC;
    MEM32(edi + -4) = eax;
    edx = MEM32(ecx);
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(eax)) >> 32) & 1);
    edx = edx + eax;
    eax = MEM32(ebp + -4);
    _cf = (int)((((uint64_t)(MEM32(ebp + -8)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ebp + -8) = MEM32(ebp + -8) + eax;
    MEM32(edi) = edx;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x10)) >> 32) & 1);
    edi = edi + 0x10;
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00377D21; /* jne: not equal / not zero */

loc_00377D80: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00377DF2; /* jl: less (signed <) */

loc_00377D85: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00377DF2; /* je: equal / zero */

loc_00377D8A: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x2000);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00377D98u); RECOMP_ABI_CALL(0x00379004u, sub_00379004); /* call 0x00379004 */

loc_00377D98: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x4000);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00377DA7u); RECOMP_ABI_CALL(0x0037902Cu, sub_0037902C); /* call 0x0037902C */

loc_00377DA7: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x37AF08);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00377DB6u); RECOMP_ABI_CALL(0x003729B7u, sub_003729B7); /* call 0x003729B7 */

loc_00377DB6: ;
    eax = MEM32(0x37A6F8);
    ecx = eax;
    edi = 0xFFFF;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00377DF2; /* je: equal / zero */

loc_00377DC9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00377DF2; /* jne: not equal / not zero */

loc_00377DD0: ;
    ecx = MEM32(esi + 0x10);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00377DD8u); RECOMP_ABI_CALL(0x00378F89u, sub_00378F89); /* call 0x00378F89 */

loc_00377DD8: ;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    ecx = MEM32(0x37A6F8);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edi;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0xC) = edx;

loc_00377DF2: ;
    eax = MEM32(ebp + -12);
    MEM32(-24772772) = ebx;
    POP32(esp, edi);
    MEM32(-24772848) = 1;
    POP32(esp, esi);
    MEM32(-24772844) = 0xFFFFFFFFu;
    MEM32(-24772612) = 3;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00377E1E
 * Original: 0x00377E1E - 0x00377ED7 (185 bytes, 70 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00377E1E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00377E1E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x37AE6C);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    esi = ebx + 0x14;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00377E36u); RECOMP_ABI_CALL(0x00378DF9u, sub_00378DF9); /* call 0x00378DF9 */

loc_00377E36: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00377ED0; /* jl: less (signed <) */

loc_00377E40: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00377E4Bu); RECOMP_ABI_CALL(0x0037888Bu, sub_0037888B); /* call 0x0037888B */

loc_00377E4B: ;
    edi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00377ED0; /* jl: less (signed <) */

loc_00377E53: ;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00377E5Du); RECOMP_ABI_CALL(0x00378A9Eu, sub_00378A9E); /* call 0x00378A9E */

loc_00377E5D: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00377ED0; /* jl: less (signed <) */

loc_00377E63: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x2000);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00377E70u); RECOMP_ABI_CALL(0x003788F3u, sub_003788F3); /* call 0x003788F3 */

loc_00377E70: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00377E7Bu); RECOMP_ABI_CALL(0x0037888Bu, sub_0037888B); /* call 0x0037888B */

loc_00377E7B: ;
    edi = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00377ED0; /* jl: less (signed <) */

loc_00377E83: ;
    ecx = MEM32(ebx + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00377E8Eu); RECOMP_ABI_CALL(0x00378A9Eu, sub_00378A9E); /* call 0x00378A9E */

loc_00377E8E: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00377ED0; /* jl: less (signed <) */

loc_00377E94: ;
    _fa = (uint32_t)(MEM8(0x37A6FA)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x37A6FA), 1 (8-bit) */
    ecx = MEM32(ebx + 0x18);
    if (TEST_Z(_fa, _fb)) goto loc_00377EB8; /* je: equal / zero */

loc_00377EA0: ;
    PUSH32(esp, 0x4000);
    ebp = ebp + 0x2000;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00377EB1u); RECOMP_ABI_CALL(0x003788F3u, sub_003788F3); /* call 0x003788F3 */

loc_00377EB1: ;
    PUSH32(esp, 0x2000002);
    goto loc_00377EC8;

loc_00377EB8: ;
    PUSH32(esp, 0x2000);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00377EC3u); RECOMP_ABI_CALL(0x003788F3u, sub_003788F3); /* call 0x003788F3 */

loc_00377EC3: ;
    PUSH32(esp, 0x2000000);

loc_00377EC8: ;
    ecx = MEM32(ebx + 0x18);
    PUSH32(esp, 0x00377ED0u); RECOMP_ABI_CALL(0x0037881Eu, sub_0037881E); /* call 0x0037881E */

loc_00377ED0: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00377ED7
 * Original: 0x00377ED7 - 0x00377F0E (55 bytes, 19 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00377ED7(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00377ED7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00377EE8u); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_00377EE8: ;
    eax = MEM32(0xFE801004u);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = ecx ^ eax;
    ecx = ecx & 1;
    ecx = ecx ^ eax;
    MEM32(-25161724) = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00377F0Au); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_00377F0A: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00377F0E
 * Original: 0x00377F0E - 0x00377F45 (55 bytes, 19 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00377F0E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00377F0E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00377F1Fu); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_00377F1F: ;
    eax = MEM32(0xFE801510u);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = ecx ^ eax;
    ecx = ecx & 1;
    ecx = ecx ^ eax;
    MEM32(-25160432) = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00377F41u); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_00377F41: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00377F45
 * Original: 0x00377F45 - 0x00377FA0 (91 bytes, 30 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00377F45(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00377F45: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00377F56u); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_00377F56: ;
    eax = MEM32(ebp + 8);
    eax = eax - 0;
    ecx = MEM32(-25161472);
    if ((eax == 0)) goto loc_00377F85; /* je: equal / zero */

loc_00377F64: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00377F7D; /* je: equal / zero */

loc_00377F67: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00377F75; /* je: equal / zero */

loc_00377F6A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00377F8E; /* jne: not equal / not zero */

loc_00377F6D: ;
    ecx = ecx & 0xFFFFEFF8u;
    goto loc_00377F8E;

loc_00377F75: ;
    ecx = ecx | 0x1007;
    goto loc_00377F8E;

loc_00377F7D: ;
    ecx = ecx & 0xFFFFFF1Fu;
    goto loc_00377F8E;

loc_00377F85: ;
    ecx = ecx & 0xFFFFFF9Fu;
    ecx = ecx | 0x80;

loc_00377F8E: ;
    MEM32(-25161472) = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00377F9Cu); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_00377F9C: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00377FA0
 * Original: 0x00377FA0 - 0x00378002 (98 bytes, 39 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00377FA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00377FA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00377FB1u); RECOMP_ABI_CALL(0x0036F330u, sub_0036F330); /* call 0x0036F330 */

loc_00377FB1: ;
    eax = MEM32(ebp + 8);
    eax = eax - 0;
    ecx = MEM32(-25157632);
    if ((eax == 0)) goto loc_00377FED; /* je: equal / zero */

loc_00377FBF: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00377FE5; /* je: equal / zero */

loc_00377FC2: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00377FDD; /* je: equal / zero */

loc_00377FC5: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00377FD8; /* je: equal / zero */

loc_00377FC8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00377FD3; /* je: equal / zero */

loc_00377FCB: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00377FF0; /* jne: not equal / not zero */

loc_00377FCE: ;
    ecx = ecx & 0xFFFFFFF8u;
    goto loc_00377FF0;

loc_00377FD3: ;
    ecx = ecx | 7;
    goto loc_00377FF0;

loc_00377FD8: ;
    ecx = ecx | 0x18;
    goto loc_00377FF0;

loc_00377FDD: ;
    ecx = ecx & 0xFFFFFFF7u;
    ecx = ecx | 0x10;
    goto loc_00377FF0;

loc_00377FE5: ;
    ecx = ecx & 0xFFFFFFEFu;
    ecx = ecx | 8;
    goto loc_00377FF0;

loc_00377FED: ;
    ecx = ecx & 0xFFFFFFE7u;

loc_00377FF0: ;
    MEM32(-25157632) = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00377FFEu); RECOMP_ABI_CALL(0x0036F352u, sub_0036F352); /* call 0x0036F352 */

loc_00377FFE: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00378002
 * Original: 0x00378002 - 0x00378079 (119 bytes, 49 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00378002(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00378002: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x3C6D6C); PUSH32(esp, 0x0037800Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0037800F: ;
    ecx = MEM32(ebp + 0x10);
    edx = eax;
    eax = MEM32(ebp + 8);
    eax = eax & 0xFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(ebp + -4) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_00378025; /* je: equal / zero */

loc_00378023: ;
    MEM32(ecx) = eax;

loc_00378025: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00378072; /* je: equal / zero */

loc_0037802B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x1000;
    esi = edi;
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00378068; /* jae: above or equal (unsigned >=) */

loc_0037803B: ;
    eax = MEM32(ebp + 8);
    eax = eax - edx;
    PUSH32(esp, ebx);
    ebx = esi + edx;
    MEM32(ebp + 8) = eax;
    goto loc_0037804C;

loc_00378049: ;
    eax = MEM32(ebp + 8);

loc_0037804C: ;
    eax = eax + ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6D6C); PUSH32(esp, 0x00378055u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00378055: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00378062; /* jne: not equal / not zero */

loc_00378059: ;
    esi = esi + edi;
    ebx = ebx + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00378049; /* jb: below (unsigned <) */

loc_00378062: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0xC) (32-bit) */
    POP32(esp, ebx);
    if (CMP_B(_fa, _fb)) goto loc_0037806B; /* jb: below (unsigned <) */

loc_00378068: ;
    esi = MEM32(ebp + 0xC);

loc_0037806B: ;
    eax = MEM32(ebp + 0x14);
    POP32(esp, edi);
    MEM32(eax) = esi;
    POP32(esp, esi);

loc_00378072: ;
    eax = MEM32(ebp + -4);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00378079
 * Original: 0x00378079 - 0x003780B6 (61 bytes, 28 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00378079(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00378079: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, 0);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, MEM32(edi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00378093u); RECOMP_ABI_CALL(0x00378002u, sub_00378002); /* call 0x00378002 */

loc_00378093: ;
    edx = MEM32(esi);
    ecx = 0x1000;
    ecx = ecx - MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003780A3; /* jb: below (unsigned <) */

loc_003780A1: ;
    ecx = edx;

loc_003780A3: ;
    MEM32(edi) = MEM32(edi) + ecx;
    MEM32(esi) = MEM32(esi) - ecx;
    edx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_003780B2; /* je: equal / zero */

loc_003780B0: ;
    MEM32(edx) = ecx;

loc_003780B2: ;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003780B6
 * Original: 0x003780B6 - 0x003780F5 (63 bytes, 22 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003780B6(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_003780B6: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(edi + 8));
    PUSH32(esp, 0x003780CEu); RECOMP_ABI_CALL(0x00371BF5u, sub_00371BF5); /* call 0x00371BF5 */

loc_003780CE: ;
    esi = eax;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    esi = esi & 0x7FF8FFF2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    esi = esi + 0x8007000Eu;
    MEM32(edi) = eax;
    if (((int32_t)esi < 0)) goto loc_003780EE; /* js: sign (negative) */

loc_003780E4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6D6C); PUSH32(esp, 0x003780EBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003780EB: ;
    MEM32(edi + 4) = eax;

loc_003780EE: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003780F5
 * Original: 0x003780F5 - 0x0037816F (122 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003780F5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003780F5: ;
    _fa = (uint32_t)(MEM8(0x37AF58)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x37AF58), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00378111; /* jne: not equal / not zero */

loc_003780FE: ;
    MEM32(0x37AF58) = MEM32(0x37AF58) | 1;
    eax = 0x800;
    MEM32(0x37A688) = eax;
    goto loc_00378116;

loc_00378111: ;
    eax = MEM32(0x37A688);

loc_00378116: ;
    MEM32(0xFE802008u) = eax;
    MEM32(-25157620) = 0;
    MEM32(0xFE802010u) = eax;
    ecx = eax;
    ecx = ecx >> 1;
    MEM32(-25157612) = ecx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0xFE802018u) = eax;
    MEM32(-25157604) = 0;
    ecx = 0x600;
    MEM32(-25157600) = ecx;
    eax = 0x100;
    MEM32(0xFE802024u) = eax;
    MEM32(0xFE802028u) = eax;
    MEM32(-25149396) = ecx;
    MEM32(-25149380) = 0x3800;
    esp += 4; return; /* ret */

}

/**
 * sub_0037816F
 * Original: 0x0037816F - 0x0037819B (44 bytes, 18 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037816F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037816F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x00378178u); RECOMP_ABI_CALL(0x00377B3Bu, sub_00377B3B); /* call 0x00377B3B */

loc_00378178: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00378196; /* jl: less (signed <) */

loc_0037817E: ;
    ecx = edi;
    PUSH32(esp, 0x00378185u); RECOMP_ABI_CALL(0x00377C7Au, sub_00377C7A); /* call 0x00377C7A */

loc_00378185: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00378196; /* jl: less (signed <) */

loc_0037818B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2710);
    { uint32_t _icall_target = MEM32(0x3C6D40); PUSH32(esp, 0x00378196u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00378196: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0037819B
 * Original: 0x0037819B - 0x003781BE (35 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037819B(void)
{

loc_0037819B: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x14;
    MEM32(esi) = 0x3E20B0;
    PUSH32(esp, 0x003781ACu); RECOMP_ABI_CALL(0x00378691u, sub_00378691); /* call 0x00378691 */

loc_003781AC: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x003781B5u); RECOMP_ABI_CALL(0x0037595Du, sub_0037595D); /* call 0x0037595D */

loc_003781B5: ;
    MEM32(esi + 4) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003781BE
 * Original: 0x003781BE - 0x00378263 (165 bytes, 60 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003781BE(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003781BE: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    MEM32(esi) = 0x3E20B0;
    if (CMP_EQ(_fa, _fb)) goto loc_003781E2; /* je: equal / zero */

loc_003781D2: ;
    ecx = edi;
    PUSH32(esp, 0x003781D9u); RECOMP_ABI_CALL(0x003729CEu, sub_003729CE); /* call 0x003729CE */

loc_003781D9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003781DFu); RECOMP_ABI_CALL(0x00371CC4u, sub_00371CC4); /* call 0x00371CC4 */

loc_003781DF: ;
    MEM32(esi + 0xC) = ebp;

loc_003781E2: ;
    edi = MEM32(esi + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003781F9; /* je: equal / zero */

loc_003781E9: ;
    ecx = edi;
    PUSH32(esp, 0x003781F0u); RECOMP_ABI_CALL(0x00379071u, sub_00379071); /* call 0x00379071 */

loc_003781F0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003781F6u); RECOMP_ABI_CALL(0x00371CC4u, sub_00371CC4); /* call 0x00371CC4 */

loc_003781F6: ;
    MEM32(esi + 0x10) = ebp;

loc_003781F9: ;
    edi = 0; /* xor self */
    PUSH32(esp, ebx);

loc_003781FC: ;
    _fa = (uint32_t)(MEM32(edi + 0x37AE64)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x37AE64), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037821A; /* je: equal / zero */

loc_00378204: ;
    ebx = edi + 0x37AE58;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00378220; /* je: equal / zero */

loc_00378210: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00378216u); RECOMP_ABI_CALL(0x00371C44u, sub_00371C44); /* call 0x00371C44 */

loc_00378216: ;
    MEM32(ebx) = ebp;
    goto loc_00378220;

loc_0037821A: ;
    MEM32(edi + 0x37AE58) = ebp;

loc_00378220: ;
    MEM32(edi + 0x37AE5C) = ebp;
    MEM32(edi + 0x37AE60) = ebp;
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x100 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003781FC; /* jb: below (unsigned <) */

loc_00378237: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00378248; /* je: equal / zero */

loc_0037823F: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x00378245u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00378245: ;
    MEM32(esi + 4) = ebp;

loc_00378248: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00378258; /* je: equal / zero */

loc_0037824F: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x00378255u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00378255: ;
    MEM32(esi + 8) = ebp;

loc_00378258: ;
    POP32(esp, edi);
    ecx = esi + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_00378DEC(); return; /* tail jmp 0x00378DEC */

}

/**
 * sub_00378263
 * Original: 0x00378263 - 0x00378330 (205 bytes, 39 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00378263(void)
{

loc_00378263: ;
    MEM32(-25161724) = 0xD8;
    MEM32(-25161472) = 0x88;
    edx = 0; /* xor self */
    MEM32(-25157632) = edx;
    MEM32(-25160448) = edx;
    MEM32(-25160444) = 0x8000;
    PUSH32(esp, esi);
    MEM32(-25160440) = 0x800040;
    MEM32(-25160436) = edx;
    esi = ecx;
    PUSH32(esp, 0x003782A7u); RECOMP_ABI_CALL(0x003780F5u, sub_003780F5); /* call 0x003780F5 */

loc_003782A7: ;
    MEM32(-25161468) = 0xFF;
    MEM32(-25161464) = 0x3F;
    MEM32(-25161444) = 0x7F;
    MEM32(-25161436) = 0x1FFF;
    MEM32(-25161416) = 0x7FF;
    MEM32(-25161384) = 0x20;
    MEM32(-25161428) = edx;
    eax = 0x8000000;
    MEM32(0xFE801130u) = eax;
    MEM32(-25161408) = edx;
    MEM32(0xFE801144u) = eax;
    MEM32(-25161392) = edx;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(0xFE801154u) = eax;
    PUSH32(esp, 0x00378311u); RECOMP_ABI_CALL(0x00377F0Eu, sub_00377F0E); /* call 0x00377F0E */

loc_00378311: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0037831Au); RECOMP_ABI_CALL(0x00377F45u, sub_00377F45); /* call 0x00377F45 */

loc_0037831A: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x00378323u); RECOMP_ABI_CALL(0x00377F45u, sub_00377F45); /* call 0x00377F45 */

loc_00378323: ;
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x0037832Cu); RECOMP_ABI_CALL(0x00377FA0u, sub_00377FA0); /* call 0x00377FA0 */

loc_0037832C: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00378330
 * Original: 0x00378330 - 0x003784B0 (384 bytes, 123 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00378330(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00378330: ;
    PUSH32(esp, ebp);
    ebp = esp + -120;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x88));
    esp = esp - 0x88;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    edx = 0x2000;
    ecx = 0x1000;
    PUSH32(esp, edi);
    MEM32(ebp + 0x70) = ebx;
    MEM32(ebp + 0x74) = esi;
    MEM32(ebp + -16) = edx;
    MEM32(ebp + -12) = ecx;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */

loc_0037835A: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(esi + 0x37A680))) >> 32) & 1);
    eax = eax + MEM32(esi + 0x37A680);
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0037835A; /* jb: below (unsigned <) */

loc_00378368: ;
    MEM32(ebp + -8) = eax;
    esi = 0x8000;
    PUSH32(esp, 4);
    if (0xC) _cf = (int)(((eax) >> ((0xC) - 1)) & 1);
    eax = eax >> 0xC;
    POP32(esp, edi);
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = esi;
    esi = 0x4000;
    if (3) _cf = (int)(((eax) >> (32 - (3))) & 1);
    eax = eax << 3;
    MEM32(ebp + -4) = ecx;
    MEM32(ebp) = edi;
    MEM32(ebp + 4) = ecx;
    MEM32(ebp + 0x10) = 0x4020;
    MEM32(ebp + 0x14) = esi;
    MEM32(ebp + 0x18) = esi;
    MEM32(ebp + 0x1C) = esi;
    MEM32(ebp + 0x20) = 0x10000;
    MEM32(ebp + 0x24) = esi;
    MEM32(ebp + 0x28) = edx;
    MEM32(ebp + 0x2C) = esi;
    MEM32(ebp + 0x30) = edx;
    MEM32(ebp + 0x34) = esi;
    MEM32(ebp + 0x38) = 0x10;
    MEM32(ebp + 0x3C) = esi;
    MEM32(ebp + 0x40) = eax;
    MEM32(ebp + 0x44) = esi;
    MEM32(ebp + 0x48) = ecx;
    MEM32(ebp + 0x4C) = esi;
    MEM32(ebp + 0x50) = 0xC000;
    MEM32(ebp + 0x54) = esi;
    MEM32(ebp + 0x58) = 0x1060;
    MEM32(ebp + 0x5C) = esi;
    PUSH32(esp, 0x003783E2u); RECOMP_ABI_CALL(0x00378ED8u, sub_00378ED8); /* call 0x00378ED8 */

loc_003783E2: ;
    if (0xC) _cf = (int)(((eax) >> ((0xC) - 1)) & 1);
    eax = eax >> 0xC;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edi)) >> 32) & 1);
    eax = eax + edi;
    if (0xC) _cf = (int)(((eax) >> (32 - (0xC))) & 1);
    eax = eax << 0xC;
    MEM32(ebp + 0x60) = eax;
    if (0xC) _cf = (int)(((eax) >> ((0xC) - 1)) & 1);
    eax = eax >> 0xC;
    if (3) _cf = (int)(((eax) >> (32 - (3))) & 1);
    eax = eax << 3;
    MEM32(ebp + 0x68) = eax;
    eax = MEM32(0x37ACF8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ebp + 0x64) = esi;
    MEM32(ebp + 0x6C) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_00378410; /* je: equal / zero */

loc_00378405: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0037840Bu); RECOMP_ABI_CALL(0x0037595Du, sub_0037595D); /* call 0x0037595D */

loc_0037840B: ;
    MEM32(ebx + 8) = eax;
    goto loc_00378441;

loc_00378410: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x626F5344);
    PUSH32(esp, 0x0037841Eu); RECOMP_ABI_CALL(0x00371C5Cu, sub_00371C5C); /* call 0x00371C5C */

loc_0037841E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0037842B; /* je: equal / zero */

loc_00378422: ;
    ecx = eax;
    PUSH32(esp, 0x00378429u); RECOMP_ABI_CALL(0x00374640u, sub_00374640); /* call 0x00374640 */

loc_00378429: ;
    goto loc_0037842D;

loc_0037842B: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */

loc_0037842D: ;
    MEM32(ebx + 8) = eax;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FF8FFF2;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    eax = eax + 0x8007000Eu;
    MEM32(ebp + 0x74) = eax;

loc_00378441: ;
    edi = ebp + -12;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */

loc_00378446: ;
    _fa = (uint32_t)(MEM32(ebp + 0x74)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x74), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_003784A5; /* jl: less (signed <) */

loc_0037844C: ;
    eax = MEM32(edi + -4);
    PUSH32(esp, 4);
    PUSH32(esp, MEM32(edi));
    ebx = esi + 0x37AE58;
    PUSH32(esp, ebx);
    MEM32(esi + 0x37AE60) = eax;
    PUSH32(esp, 0x00378465u); RECOMP_ABI_CALL(0x003780B6u, sub_003780B6); /* call 0x003780B6 */

loc_00378465: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ebp + 0x74) = eax;
    if (TEST_S(_fas, _fbs)) goto loc_00378497; /* jl: less (signed <) */

loc_0037846C: ;
    eax = MEM32(esi + 0x37AE60);
    PUSH32(esp, eax);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFF)) >> 32) & 1);
    eax = eax + 0xFFF;
    if (0xC) _cf = (int)(((eax) >> ((0xC) - 1)) & 1);
    eax = eax >> 0xC;
    if (0xC) _cf = (int)(((eax) >> (32 - (0xC))) & 1);
    eax = eax << 0xC;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x70);
    PUSH32(esp, MEM32(ebx));
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x0037848Cu); RECOMP_ABI_CALL(0x003746C6u, sub_003746C6); /* call 0x003746C6 */

loc_0037848C: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x37AE64) = eax;

loc_00378497: ;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x10)) >> 32) & 1);
    esi = esi + 0x10;
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(8)) >> 32) & 1);
    edi = edi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x100 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00378446; /* jb: below (unsigned <) */

loc_003784A5: ;
    eax = MEM32(ebp + 0x74);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x78)) >> 32) & 1);
    ebp = ebp + 0x78;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}
