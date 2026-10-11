/**
 * X-Men Legends - Recompiled code chunk 77
 * Functions: 250 (0x0030FE20 - 0x00316310)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0030FE20
 * Original: 0x0030FE20 - 0x0030FE53 (51 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030FE20(void)
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

loc_0030FE20: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x5BF28C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030FE2F; /* je: equal / zero */

loc_0030FE2D: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x0030FE2Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030FE2F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp) = eax;
    fp_push((double)SMEM32(esp)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0030FE3F; /* jge: greater or equal (signed >=) */

loc_0030FE39: ;
    fp_top() = fp_top() + MEMD(0x3E1E90); /* fadd qword ptr [0x3e1e90] */

loc_0030FE3F: ;
    fp_top() = fp_top() * MEMD(0x42D248); /* fmul qword ptr [0x42d248] */
    PUSH32(esp, 0x0030FE4Au); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0030FE4A: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx + 0x18) = eax;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0030FE60
 * Original: 0x0030FE60 - 0x0030FE66 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030FE60(void)
{

loc_0030FE60: ;
    eax = 0x4000;
    esp += 4; return; /* ret */

}

/**
 * sub_0030FE70
 * Original: 0x0030FE70 - 0x0030FEB5 (69 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030FE70(void)
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

loc_0030FE70: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x5BF28C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030FE7F; /* je: equal / zero */

loc_0030FE7D: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x0030FE7Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030FE7F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp) = eax;
    fp_push((double)SMEM32(esp)); /* fild */
    PUSH32(esp, esi);
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0030FE90; /* jge: greater or equal (signed >=) */

loc_0030FE8A: ;
    fp_top() = fp_top() + MEMD(0x3E1E90); /* fadd qword ptr [0x3e1e90] */

loc_0030FE90: ;
    fp_top() = fp_top() * MEMD(0x42D250); /* fmul qword ptr [0x42d250] */
    PUSH32(esp, 0x0030FE9Bu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0030FE9B: ;
    esi = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x14);
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = ecx - eax;
    eax = ecx;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esi + 0x10));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esi + 0x10)); }
    MEM32(esi + 0x1C) = ecx;
    POP32(esp, esi);
    eax = edx;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0030FEC0
 * Original: 0x0030FEC0 - 0x0030FECC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030FEC0(void)
{

loc_0030FEC0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0xC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0030FED0
 * Original: 0x0030FED0 - 0x0030FED8 (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030FED0(void)
{

loc_0030FED0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_0030FEE0
 * Original: 0x0030FEE0 - 0x0030FEF5 (21 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030FEE0(void)
{

loc_0030FEE0: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    MEM32(eax) = 0;
    MEM32(ecx) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0030FF00
 * Original: 0x0030FF00 - 0x0030FF0E (14 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0030FF00(void)
{

loc_0030FF00: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 8) = 1;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0030FF10
 * Original: 0x0030FF10 - 0x0030FF46 (54 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030FF10(void)
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

loc_0030FF10: ;
    esp = esp - 0x10;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030FF1Du); RECOMP_ABI_CALL(0x0034D3D9u, sub_0034D3D9); /* call 0x0034D3D9 */

loc_0030FF1D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030FF25; /* jne: not equal / not zero */

loc_0030FF21: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_0030FF25: ;
    ecx = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0030FF2Eu); RECOMP_ABI_CALL(0x0034D3C8u, sub_0034D3C8); /* call 0x0034D3C8 */

loc_0030FF2E: ;
    fp_push((double)SMEM64(esp)); /* fild */
    fp_push((double)SMEM64(esp + 8)); /* fild */
    fp_top() = fp_top() * MEMF(0x3C89C0); /* fmul dword ptr [0x3c89c0] */
    fp_st1() = fp_st1() / fp_top(); fp_pop(); /* fdivp st(1) */
    PUSH32(esp, 0x0030FF42u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0030FF42: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0030FF50
 * Original: 0x0030FF50 - 0x0030FFAF (95 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030FF50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030FF50: ;
    PUSH32(esp, 0x0030FF55u); XML1_CHECK_CDECL0(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0030FF55: ;
    eax = MEM32(0x5BFAA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030FF63; /* je: equal / zero */

loc_0030FF5E: ;
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

loc_0030FF63: ;
    MEM32(0x5BFAA4) = 1;
    PUSH32(esp, 0x0030FF72u); XML1_CHECK_CDECL0(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_0030FF72: ;
    PUSH32(esp, 0x0030FF77u); XML1_CHECK_CDECL0(0x0030D5E0u, sub_0030D5E0); /* call 0x0030D5E0 */

loc_0030FF77: ;
    MEM32(0x5BFAA4) = 2;
    PUSH32(esp, 0x0030FF86u); XML1_CHECK_CDECL0(0x00308D40u, sub_00308D40); /* call 0x00308D40 */

loc_0030FF86: ;
    MEM32(0x5BFAA4) = 5;
    PUSH32(esp, 0x0030FF95u); XML1_CHECK_CDECL0(0x0030D5E0u, sub_0030D5E0); /* call 0x0030D5E0 */

loc_0030FF95: ;
    MEM32(0x5BFAA4) = 6;
    PUSH32(esp, 0x0030FFA4u); XML1_CHECK_CDECL0(0x003072A0u, sub_003072A0); /* call 0x003072A0 */

loc_0030FFA4: ;
    MEM32(0x5BFAA4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0030FFB0
 * Original: 0x0030FFB0 - 0x0030FFD0 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030FFB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030FFB0: ;
    eax = MEM32(0x5BFAA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030FFC9; /* jne: not equal / not zero */

loc_0030FFB9: ;
    PUSH32(esp, edi);
    ecx = 0x300;
    eax = 0; /* xor self */
    edi = 0x5E6F80;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);

loc_0030FFC9: ;
    MEM32(0x5BFAA8) = MEM32(0x5BFAA8) + 1;
    _fa = (uint32_t)(MEM32(0x5BFAA8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0030FFD0
 * Original: 0x0030FFD0 - 0x0030FFE9 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030FFD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030FFD0: ;
    MEM32(0x5BFAA8) = MEM32(0x5BFAA8) - 1;
    _fa = (uint32_t)(MEM32(0x5BFAA8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0030FFE8; /* jne: not equal / not zero */

loc_0030FFD8: ;
    PUSH32(esp, edi);
    ecx = 0x300;
    eax = 0; /* xor self */
    edi = 0x5E6F80;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);

loc_0030FFE8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0030FFF0
 * Original: 0x0030FFF0 - 0x00310009 (25 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030FFF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030FFF0: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00310008; /* je: equal / zero */

loc_0030FFF8: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0xC;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM8(edx + 4) = LO8(eax);
    POP32(esp, edi);

loc_00310008: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00310010
 * Original: 0x00310010 - 0x00310023 (19 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310010(void)
{

loc_00310010: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00310030
 * Original: 0x00310030 - 0x00310085 (85 bytes, 37 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00310030: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x10);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    edx = 0; /* xor self */
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0xC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(ecx + 0x14) = edi;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00310068; /* jle: less or equal (signed <=) */

loc_00310048: ;
    eax = edi + 8;
    PUSH32(esp, ebx);
    /* nop */

loc_00310050: ;
    ebx = eax + 8;
    MEM32(eax + -8) = ebx;
    MEM32(eax) = esi;
    MEM32(eax + 4) = esi;
    ebx = MEM32(ecx + 0x10);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 0x10;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00310050; /* jl: less (signed <) */

loc_00310067: ;
    POP32(esp, ebx);

loc_00310068: ;
    edx = edx << 4;
    eax = edx + edi;
    MEM32(eax) = esi;
    MEM32(eax + 8) = esi;
    MEM32(eax + 0xC) = esi;
    POP32(esp, edi);
    MEM32(ecx + 0x18) = esi;
    MEM32(ecx + 0x1C) = esi;
    MEM32(ecx + 0x20) = esi;
    MEM32(ecx + 0x24) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031003D
 * Original: 0x0031003D - 0x00310085 (72 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031003D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031003D: ;
    edi = MEM32(ecx + 0xC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(ecx + 0x14) = edi;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00310068; /* jle: less or equal (signed <=) */

loc_00310048: ;
    eax = edi + 8;
    PUSH32(esp, ebx);
    /* nop */

loc_00310050: ;
    ebx = eax + 8;
    MEM32(eax + -8) = ebx;
    MEM32(eax) = esi;
    MEM32(eax + 4) = esi;
    ebx = MEM32(ecx + 0x10);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 0x10;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00310050; /* jl: less (signed <) */

loc_00310067: ;
    POP32(esp, ebx);

loc_00310068: ;
    edx = edx << 4;
    eax = edx + edi;
    MEM32(eax) = esi;
    MEM32(eax + 8) = esi;
    MEM32(eax + 0xC) = esi;
    POP32(esp, edi);
    MEM32(ecx + 0x18) = esi;
    MEM32(ecx + 0x1C) = esi;
    MEM32(ecx + 0x20) = esi;
    MEM32(ecx + 0x24) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00310065
 * Original: 0x00310065 - 0x00310085 (32 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310065(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00310065: ;
    if (_flags /* jl: less (signed <) */) { g_seh_ebp = ebp; sub_00310050(); return; }

loc_00310067: ;
    POP32(esp, ebx);
    edx = edx << 4;
    eax = edx + edi;
    MEM32(eax) = esi;
    MEM32(eax + 8) = esi;
    MEM32(eax + 0xC) = esi;
    POP32(esp, edi);
    MEM32(ecx + 0x18) = esi;
    MEM32(ecx + 0x1C) = esi;
    MEM32(ecx + 0x20) = esi;
    MEM32(ecx + 0x24) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00310090
 * Original: 0x00310090 - 0x003100D5 (69 bytes, 29 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00310090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00310090: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_003100BC; /* jl: less (signed <) */

loc_00310098: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003100BC; /* jge: greater or equal (signed >=) */

loc_0031009D: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(edx + ecx * 4 + 0x18);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003100D4; /* je: equal / zero */

loc_003100AB: ;
    goto loc_003100B0;

    /* nop */

loc_003100B0: ;
    edx = MEM32(ecx + 0xC);
    ecx = MEM32(ecx);
    eax = eax + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003100B0; /* jne: not equal / not zero */

loc_003100BB: ;
    esp += 4; return; /* ret */

loc_003100BC: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003100D2; /* je: equal / zero */

loc_003100C7: ;
    ecx = MEM32(ecx + 0x2C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x003100CFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003100CF: ;
    esp = esp + 8;

loc_003100D2: ;
    eax = 0; /* xor self */

loc_003100D4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003100E0
 * Original: 0x003100E0 - 0x003101E9 (265 bytes, 93 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003100E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003100E0: ;
    esp = esp - 0x10;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_003101BD; /* jl: less (signed <) */

loc_003100F0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003101BD; /* jge: greater or equal (signed >=) */

loc_003100F9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003100FFu); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_003100FF: ;
    eax = MEM32(esp + 0x1C);
    esi = MEM32(eax + edi * 4 + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031011F; /* jne: not equal / not zero */

loc_0031010B: ;
    eax = MEM32(esp + 0x28);
    MEM32(eax) = esi;
    MEM32(eax + 4) = esi;
    PUSH32(esp, 0x00310119u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_00310119: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_0031011F: ;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 8);
    MEM32(esp + 0xC) = ebx;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_G(_fas, _fbs)) goto loc_00310159; /* jg: greater (signed >) */

loc_00310136: ;
    edx = MEM32(esp + 0x2C);
    MEM32(edx) = ebx;
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esi);
    MEM32(eax + edi * 4 + 0x18) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(esi) = edx;
    POP32(esp, ebx);
    MEM32(eax + 0x14) = esi;
    PUSH32(esp, 0x00310153u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_00310153: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00310159: ;
    _fa = (uint32_t)(MEM8(eax + 5)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 5), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003101A0; /* jne: not equal / not zero */

loc_0031015F: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00310172u); RECOMP_ABI_CALL(0x0030EDA0u, sub_0030EDA0); /* call 0x0030EDA0 */

loc_00310172: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x3C);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    eax = MEM32(esp + 0x24);
    esp = esp + 0x10;
    MEM32(esi + 8) = eax;
    ecx = MEM32(esp + 0x18);
    POP32(esp, ebx);
    MEM32(esi + 0xC) = ecx;
    PUSH32(esp, 0x0031019Au); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_0031019A: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_003101A0: ;
    eax = MEM32(esp + 0x2C);
    POP32(esp, ebx);
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    PUSH32(esp, 0x003101B7u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_003101B7: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_003101BD: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003101D3; /* je: equal / zero */

loc_003101C8: ;
    edx = MEM32(ecx + 0x2C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x003101D0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003101D0: ;
    esp = esp + 8;

loc_003101D3: ;
    eax = MEM32(esp + 0x24);
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    POP32(esp, edi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_003101F0
 * Original: 0x003101F0 - 0x003102C7 (215 bytes, 86 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003101F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003101F0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_003102AC; /* jl: less (signed <) */

loc_003101FD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003102AC; /* jge: greater or equal (signed >=) */

loc_00310206: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_003102C4; /* jle: less or equal (signed <=) */

loc_00310216: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003102C4; /* je: equal / zero */

loc_0031021F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00310225u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_00310225: ;
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + ebx * 4 + 0x18);
    ecx = esi + ebx * 4 + 0x18;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00310241; /* je: equal / zero */

loc_00310237: ;
    ecx = eax;
    edx = eax;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00310237; /* jne: not equal / not zero */

loc_00310241: ;
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 5), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031026B; /* jne: not equal / not zero */

loc_00310247: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031026B; /* je: equal / zero */

loc_0031024B: ;
    eax = MEM32(edx + 0xC);
    ebx = MEM32(edx + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(edi);
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    POP32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_0031026B; /* jne: not equal / not zero */

loc_0031025B: ;
    ecx = MEM32(edi + 4);
    POP32(esp, esi);
    ecx = ecx + eax;
    POP32(esp, edi);
    MEM32(edx + 0xC) = ecx;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

loc_0031026B: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031028C; /* jne: not equal / not zero */

loc_00310272: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003102A4; /* je: equal / zero */

loc_00310279: ;
    edx = MEM32(esi + 0x2C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00310281u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00310281: ;
    esp = esp + 8;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

loc_0031028C: ;
    edx = MEM32(eax);
    MEM32(esi + 0x14) = edx;
    MEM32(eax) = 0;
    edx = MEM32(edi);
    MEM32(eax + 8) = edx;
    edx = MEM32(edi + 4);
    MEM32(eax + 0xC) = edx;
    MEM32(ecx) = eax;

loc_003102A4: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

loc_003102AC: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003102C5; /* je: equal / zero */

loc_003102B7: ;
    ecx = MEM32(ecx + 0x2C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x003102BFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003102BF: ;
    esp = esp + 8;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003102C4: ;
    POP32(esp, edi);

loc_003102C5: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003102D0
 * Original: 0x003102D0 - 0x0031039F (207 bytes, 79 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003102D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003102D0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00310384; /* jl: less (signed <) */

loc_003102DD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00310384; /* jge: greater or equal (signed >=) */

loc_003102E6: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0031039C; /* jle: less or equal (signed <=) */

loc_003102F6: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031039C; /* je: equal / zero */

loc_003102FF: ;
    PUSH32(esp, 0x00310304u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_00310304: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM8(ecx + 5)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 5), 1 (8-bit) */
    eax = MEM32(ecx + edi * 4 + 0x18);
    if (CMP_NE(_fa, _fb)) goto loc_0031033D; /* jne: not equal / not zero */

loc_00310312: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031033D; /* je: equal / zero */

loc_00310316: ;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 4);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 8);
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_0031033D; /* jne: not equal / not zero */

loc_00310328: ;
    MEM32(eax + 8) = edx;
    ecx = MEM32(esi + 4);
    edx = MEM32(eax + 0xC);
    edx = edx + ecx;
    POP32(esp, esi);
    MEM32(eax + 0xC) = edx;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

loc_0031033D: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031035D; /* jne: not equal / not zero */

loc_00310344: ;
    eax = MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031037D; /* je: equal / zero */

loc_0031034B: ;
    edx = MEM32(ecx + 0x2C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00310353u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00310353: ;
    esp = esp + 8;
    POP32(esp, esi);
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

loc_0031035D: ;
    edx = MEM32(eax);
    MEM32(ecx + 0x14) = edx;
    MEM32(eax) = 0;
    edx = MEM32(esi);
    MEM32(eax + 8) = edx;
    edx = MEM32(esi + 4);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + edi * 4 + 0x18);
    MEM32(eax) = edx;
    MEM32(ecx + edi * 4 + 0x18) = eax;

loc_0031037D: ;
    POP32(esp, esi);
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

loc_00310384: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031039D; /* je: equal / zero */

loc_0031038F: ;
    ecx = MEM32(ecx + 0x2C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00310397u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00310397: ;
    esp = esp + 8;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0031039C: ;
    POP32(esp, esi);

loc_0031039D: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003103A0
 * Original: 0x003103A0 - 0x00310418 (120 bytes, 46 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003103A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003103A0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0x10);
    esp = esp - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(edx) = 0;
    if (TEST_S(_fas, _fbs)) goto loc_003103FC; /* jl: less (signed <) */

loc_003103B5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003103FC; /* jge: greater or equal (signed >=) */

loc_003103BA: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx + eax * 4 + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00310412; /* je: equal / zero */

loc_003103C6: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEM32(edx) = eax;
    _fa = (uint32_t)(MEM8(ecx + 5)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 5), 1 (8-bit) */
    MEM32(esp + 4) = esi;
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_003103EB; /* jne: not equal / not zero */

loc_003103DA: ;
    edx = MEM32(esp + 0x14);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    eax = ecx;
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_003103EB: ;
    ecx = MEM32(esp + 0x14);
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = edx;
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_003103FC: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00310412; /* je: equal / zero */

loc_00310407: ;
    ecx = MEM32(ecx + 0x2C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0031040Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0031040F: ;
    esp = esp + 8;

loc_00310412: ;
    eax = 0; /* xor self */
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00310420
 * Original: 0x00310420 - 0x00310468 (72 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00310420: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x42D268);
    ecx = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0031042Fu); RECOMP_ABI_CALL(0x003114A0u, sub_003114A0); /* call 0x003114A0 */

loc_0031042F: ;
    eax = MEM32(0x5BFAAC);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00310455; /* jne: not equal / not zero */

loc_0031043B: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    ecx = 0x11C0;
    edi = 0x5E2880;
    PUSH32(esp, eax);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 0x00310451u); RECOMP_ABI_CALL(0x003104C0u, sub_003104C0); /* call 0x003104C0 */

loc_00310451: ;
    esp = esp + 8;
    POP32(esp, edi);

loc_00310455: ;
    MEM32(0x5BFAAC) = MEM32(0x5BFAAC) + 1;
    _fa = (uint32_t)(MEM32(0x5BFAAC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00310464u); RECOMP_ABI_CALL(0x003114B0u, sub_003114B0); /* call 0x003114B0 */

loc_00310464: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00310470
 * Original: 0x00310470 - 0x003104B7 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00310470: ;
    MEM32(0x5BFAAC) = MEM32(0x5BFAAC) - 1;
    _fa = (uint32_t)(MEM32(0x5BFAAC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003104B6; /* jne: not equal / not zero */

loc_00310478: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x5E2880;
    /* nop */

loc_00310480: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031048E; /* jne: not equal / not zero */

loc_00310485: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031048Bu); RECOMP_ABI_CALL(0x0030DC40u, sub_0030DC40); /* call 0x0030DC40 */

loc_0031048B: ;
    esp = esp + 4;

loc_0031048E: ;
    esi = esi + 0x238;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5E6F80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x5E6F80 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00310480; /* jl: less (signed <) */

loc_0031049C: ;
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    ecx = 0x11C0;
    edi = 0x5E2880;
    PUSH32(esp, eax);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 0x003104B1u); RECOMP_ABI_CALL(0x003104C0u, sub_003104C0); /* call 0x003104C0 */

loc_003104B1: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003104B6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003104C0
 * Original: 0x003104C0 - 0x003104E6 (38 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003104C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003104C0: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003104D7; /* jne: not equal / not zero */

loc_003104CA: ;
    MEM32(0x5BFAB0) = ecx;
    MEM32(0x5BFAB4) = ecx;
    esp += 4; return; /* ret */

loc_003104D7: ;
    MEM32(0x5BFAB0) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x5BFAB4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003104F0
 * Original: 0x003104F0 - 0x00310522 (50 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003104F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003104F0: ;
    ecx = MEM32(esp + 4);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5E2780);
    PUSH32(esp, 0x00310504u); RECOMP_ABI_CALL(0x00342A40u, sub_00342A40); /* call 0x00342A40 */

loc_00310504: ;
    eax = MEM32(0x5BFAB0);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00310521; /* je: equal / zero */

loc_00310510: ;
    edx = MEM32(0x5BFAB4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5E2780);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0031051Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0031051E: ;
    esp = esp + 8;

loc_00310521: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00310530
 * Original: 0x00310530 - 0x00310566 (54 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310530(void)
{

loc_00310530: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x8C);
    edx = MEM32(esp + 8);
    MEM32(edx) = ecx;
    edx = MEM32(eax + 0x8C);
    ecx = MEM32(eax + 0x40);
    ecx = ecx - edx;
    edx = MEM32(esp + 0xC);
    MEM32(edx) = ecx;
    edx = MEM32(eax + 0x88);
    ecx = MEM32(eax + 0x18);
    ecx = ecx - edx;
    edx = MEM32(esp + 0x10);
    MEM32(edx) = ecx;
    eax = MEM32(eax + 0x3C);
    esp += 4; return; /* ret */

}

/**
 * sub_00310570
 * Original: 0x00310570 - 0x00310585 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310570(void)
{

loc_00310570: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0x8C) = MEM32(eax + 0x8C) + ecx;
    MEM32(eax + 0x88) = MEM32(eax + 0x88) + ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00310590
 * Original: 0x00310590 - 0x003105BE (46 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00310590: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003105BC; /* je: equal / zero */

loc_00310599: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esi + 8) = 0;
    PUSH32(esp, 0x003105AAu); RECOMP_ABI_CALL(0x003118A0u, sub_003118A0); /* call 0x003118A0 */

loc_003105AA: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    ecx = 0x39;
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(esi) = LO16(eax);
    POP32(esp, edi);

loc_003105BC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003105C0
 * Original: 0x003105C0 - 0x003105C9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003105C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003105C0: ;
    MEM32(0x5BFAB8) = MEM32(0x5BFAB8) + 1;
    _fa = (uint32_t)(MEM32(0x5BFAB8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_003105D0
 * Original: 0x003105D0 - 0x003106ED (285 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003105D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003105D0: ;
    eax = MEM32(0x5BFAB8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003105DE; /* jne: not equal / not zero */

loc_003105D9: ;
    PUSH32(esp, 0x003105DEu); RECOMP_ABI_CALL(0x003105C0u, sub_003105C0); /* call 0x003105C0 */

loc_003105DE: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM16(eax) = 0;
    eax = MEM32(esp + 0xC);
    MEM16(ecx) = 0;
    MEM16(edx) = 0;
    if (TEST_NZ(_fa, _fb)) goto loc_0031060E; /* jne: not equal / not zero */

loc_00310606: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_003106E9; /* jle: less or equal (signed <=) */

loc_0031060E: ;
    PUSH32(esp, ebx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    ebx = 0x4A1D;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00310651; /* jle: less or equal (signed <=) */

loc_0031061B: ;
    goto loc_00310620;

    /* nop */

loc_00310620: ;
    edx = (uint32_t)(int32_t)SMEM8(ecx + esi);
    edx = (uint32_t)(int32_t)SMEM16(edx * 2 + 0x42D3A0);
    edi = SX16(LO16(ebx));
    edx = (uint32_t)((int32_t)edx * (int32_t)edi);
    edx = edx & 0x800003FFu;
    if (((int32_t)edx >= 0)) goto loc_00310642; /* jns: not sign (positive) */

loc_0031063A: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx | 0xFFFFFC00u;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00310642: ;
    ebx = 0; /* xor self */
    SET_LO16(ebx, MEM16(edx * 2 + 0x42D2A0));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00310620; /* jl: less (signed <) */

loc_00310651: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edi = 0x53FF;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00310691; /* jle: less or equal (signed <=) */

loc_0031065C: ;
    /* nop */

loc_00310660: ;
    edx = (uint32_t)(int32_t)SMEM8(ecx + esi);
    edx = (uint32_t)(int32_t)SMEM16(edx * 2 + 0x42D3A0);
    edi = SX16(LO16(edi));
    edx = (uint32_t)((int32_t)edx * (int32_t)edi);
    edx = edx & 0x800003FFu;
    if (((int32_t)edx >= 0)) goto loc_00310682; /* jns: not sign (positive) */

loc_0031067A: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx | 0xFFFFFC00u;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00310682: ;
    edi = 0; /* xor self */
    SET_LO16(edi, MEM16(edx * 2 + 0x42D2A0));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00310660; /* jl: less (signed <) */

loc_00310691: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edx = 0x5DC1;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_003106D2; /* jle: less or equal (signed <=) */

loc_0031069C: ;
    PUSH32(esp, ebp);
    /* nop */

loc_003106A0: ;
    ebp = (uint32_t)(int32_t)SMEM8(ecx + esi);
    ebp = (uint32_t)(int32_t)SMEM16(ebp * 2 + 0x42D3A0);
    edx = SX16(LO16(edx));
    ebp = (uint32_t)((int32_t)ebp * (int32_t)edx);
    ebp = ebp & 0x800003FFu;
    if (((int32_t)ebp >= 0)) goto loc_003106C2; /* jns: not sign (positive) */

loc_003106BA: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp = ebp | 0xFFFFFC00u;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003106C2: ;
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(ebp * 2 + 0x42D2A0));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003106A0; /* jl: less (signed <) */

loc_003106D1: ;
    POP32(esp, ebp);

loc_003106D2: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    MEM16(eax) = LO16(ebx);
    eax = MEM32(esp + 0x20);
    MEM16(ecx) = LO16(edi);
    POP32(esp, edi);
    MEM16(eax) = LO16(edx);
    POP32(esp, ebx);

loc_003106E9: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003106F0
 * Original: 0x003106F0 - 0x00310703 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003106F0(void)
{

loc_003106F0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x78) = ecx;
    MEM32(eax + 0x7C) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00310710
 * Original: 0x00310710 - 0x00310718 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310710(void)
{

loc_00310710: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x3C);
    esp += 4; return; /* ret */

}

/**
 * sub_00310720
 * Original: 0x00310720 - 0x0031072C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310720(void)
{

loc_00310720: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x98);
    esp += 4; return; /* ret */

}

/**
 * sub_00310730
 * Original: 0x00310730 - 0x00310739 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310730(void)
{

loc_00310730: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0xE);
    esp += 4; return; /* ret */

}

/**
 * sub_00310740
 * Original: 0x00310740 - 0x0031079D (93 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00310740: ;
    ecx = MEM32(esp + 4);
    SET_LO16(eax, MEM16(ecx + 0x98));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), LO16(eax) (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00310797; /* je: equal / zero */

loc_00310750: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031077C; /* jne: not equal / not zero */

loc_00310756: ;
    SET_LO16(eax, MEM16(ecx + 0x9A));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00310769; /* jne: not equal / not zero */

loc_00310763: ;
    eax = 4;
    esp += 4; return; /* ret */

loc_00310769: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = ecx * 8 + 8;
    eax = ecx;
    esp += 4; return; /* ret */

loc_0031077C: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00310797; /* jne: not equal / not zero */

loc_00310782: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM16(ecx + 0x9A)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x9A), 2 (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 0xFFFFFFF4u;
    eax = eax + 0x10;
    esp += 4; return; /* ret */

loc_00310797: ;
    eax = 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_003107A0
 * Original: 0x003107A0 - 0x003107A8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003107A0(void)
{

loc_003107A0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_003107B0
 * Original: 0x003107B0 - 0x003107B9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003107B0(void)
{

loc_003107B0: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x24);
    esp += 4; return; /* ret */

}

/**
 * sub_003107C0
 * Original: 0x003107C0 - 0x003107C8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003107C0(void)
{

loc_003107C0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x28);
    esp += 4; return; /* ret */

}

/**
 * sub_003107D0
 * Original: 0x003107D0 - 0x003107DD (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003107D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003107D0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003107D9; /* jne: not equal / not zero */

loc_003107D8: ;
    esp += 4; return; /* ret */

loc_003107D9: ;
    eax = MEM32(eax + 0x2C);
    esp += 4; return; /* ret */

}

/**
 * sub_003107E0
 * Original: 0x003107E0 - 0x003107E8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003107E0(void)
{

loc_003107E0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x34);
    esp += 4; return; /* ret */

}

/**
 * sub_003107F0
 * Original: 0x003107F0 - 0x003107FB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003107F0(void)
{

loc_003107F0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xC8);
    esp += 4; return; /* ret */

}

/**
 * sub_00310800
 * Original: 0x00310800 - 0x0031080C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310800(void)
{

loc_00310800: ;
    eax = MEM32(esp + 4);
    SET_LO16(eax, MEM16(eax + 0xDC));
    esp += 4; return; /* ret */

}

/**
 * sub_00310810
 * Original: 0x00310810 - 0x00310821 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310810(void)
{

loc_00310810: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    SET_LO16(eax, MEM16(ecx + eax * 2 + 0xDE));
    esp += 4; return; /* ret */

}

/**
 * sub_00310830
 * Original: 0x00310830 - 0x0031086F (63 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310830(void)
{

loc_00310830: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = MEM32(esi + 8);
    eax = esi + 0xAC;
    PUSH32(esp, eax);
    ecx = esi + 0xA8;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0031084Cu); RECOMP_ABI_CALL(0x00311820u, sub_00311820); /* call 0x00311820 */

loc_0031084C: ;
    eax = esi + 0xA6;
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    ecx = esi + 0xA4;
    PUSH32(esp, ecx);
    edx = esi + 0xA2;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031086Au); RECOMP_ABI_CALL(0x00311870u, sub_00311870); /* call 0x00311870 */

loc_0031086A: ;
    esp = esp + 0x1C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00310870
 * Original: 0x00310870 - 0x003108B8 (72 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310870(void)
{

loc_00310870: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = MEM32(esi + 8);
    eax = esi + 0xAC;
    PUSH32(esp, eax);
    ecx = esi + 0xA8;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0031088Cu); RECOMP_ABI_CALL(0x003117F0u, sub_003117F0); /* call 0x003117F0 */

loc_0031088C: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0xA6));
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + 0xA4));
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(esi + 0xA2));
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003108B3u); RECOMP_ABI_CALL(0x00311850u, sub_00311850); /* call 0x00311850 */

loc_003108B3: ;
    esp = esp + 0x1C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003108C0
 * Original: 0x003108C0 - 0x0031098B (203 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003108C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003108C0: ;
    SET_LO8(edx, MEM8(esp + 8));
    eax = MEM32(esp + 4);
    esp = esp - 0x10;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 4 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00310976; /* jb: below (unsigned <) */

loc_003108D4: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x10 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00310905; /* jb: below (unsigned <) */

loc_003108D9: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, 0x3E8A58);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003108EDu); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_003108ED: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    edx = esp + 0x18;
    PUSH32(esp, 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003108FCu); RECOMP_ABI_CALL(0x003105D0u, sub_003105D0); /* call 0x003105D0 */

loc_003108FC: ;
    esp = esp + 0x20;
    eax = 0; /* xor self */
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00310905: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 8 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00310976; /* jb: below (unsigned <) */

loc_0031090A: ;
    _fa = (uint32_t)(MEM16(eax + 0x9C)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x9C), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00310952; /* jne: not equal / not zero */

loc_00310914: ;
    _fa = (uint32_t)(MEM16(eax + 0x9E)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x9E), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00310952; /* jne: not equal / not zero */

loc_0031091E: ;
    _fa = (uint32_t)(MEM16(eax + 0xA0)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0xA0), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00310952; /* jne: not equal / not zero */

loc_00310928: ;
    SET_LO16(ecx, MEM16(0x5BFAC8));
    MEM16(eax + 0x9C) = LO16(ecx);
    SET_LO16(edx, MEM16(0x5BFACC));
    MEM16(eax + 0x9E) = LO16(edx);
    SET_LO16(ecx, MEM16(0x5BFAD0));
    MEM16(eax + 0xA0) = LO16(ecx);

loc_00310952: ;
    SET_LO16(edx, MEM16(eax + 0x9C));
    MEM16(ebx) = LO16(edx);
    SET_LO16(ecx, MEM16(eax + 0x9E));
    MEM16(edi) = LO16(ecx);
    SET_LO16(edx, MEM16(eax + 0xA0));
    MEM16(esi) = LO16(edx);
    eax = 0; /* xor self */
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00310976: ;
    MEM16(ebx) = 0;
    MEM16(edi) = 0;
    MEM16(esi) = 0;
    eax = 0; /* xor self */
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00310990
 * Original: 0x00310990 - 0x003109F2 (98 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00310990: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(MEM16(ecx + 0x98)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x98), LO16(esi) (16-bit) */
    PUSH32(esp, edi);
    MEM32(ecx + 0x94) = esi;
    MEM32(ecx + 0x90) = esi;
    MEM32(ecx + 0x74) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_003109C8; /* jne: not equal / not zero */

loc_003109B0: ;
    eax = MEM32(esp + 0x10);
    edi = (uint32_t)(int32_t)SMEM8(ecx + 0xF);
    MEM32(ecx + 0x48) = eax;
    eax = MEM32(esp + 0x14);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 0x4C) = eax;
    esp += 4; return; /* ret */

loc_003109C8: ;
    edx = MEM32(esp + 0x10);
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0xD);
    MEM32(ecx + 0x48) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    eax = eax + edx;
    edi = eax;
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0xE);
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((3) & 31u));
    edi = (uint32_t)((int32_t)edi * (int32_t)eax);
    eax = MEM32(esp + 0x14);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 0x4C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00310A00
 * Original: 0x00310A00 - 0x00310A13 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00310A00: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00310A12; /* jne: not equal / not zero */

loc_00310A0B: ;
    MEM32(eax + 4) = 1;

loc_00310A12: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00310A20
 * Original: 0x00310A20 - 0x00310A3A (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310A20(void)
{

loc_00310A20: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00310A2Eu); RECOMP_ABI_CALL(0x00311960u, sub_00311960); /* call 0x00311960 */

loc_00310A2E: ;
    esp = esp + 4;
    MEM32(esi + 4) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00310A40
 * Original: 0x00310A40 - 0x00310A64 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00310A40: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00310A62; /* jne: not equal / not zero */

loc_00310A4B: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00310A54u); RECOMP_ABI_CALL(0x00311980u, sub_00311980); /* call 0x00311980 */

loc_00310A54: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    MEM32(esi + 0x8C) = eax;
    MEM32(esi + 4) = eax;

loc_00310A62: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00310A70
 * Original: 0x00310A70 - 0x00310A7B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310A70(void)
{

loc_00310A70: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x94);
    esp += 4; return; /* ret */

}

/**
 * sub_00310A80
 * Original: 0x00310A80 - 0x00310A8B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310A80(void)
{

loc_00310A80: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x90);
    esp += 4; return; /* ret */

}

/**
 * sub_00310A90
 * Original: 0x00310A90 - 0x00310ABE (46 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310A90(void)
{

loc_00310A90: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x5C);
    ecx = MEM32(eax + 0x68);
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    eax = MEM32(eax + 0x48);
    PUSH32(esp, 0);
    ecx = edx + ecx * 2;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00310AB3u); RECOMP_ABI_CALL(0x003118C0u, sub_003118C0); /* call 0x003118C0 */

loc_00310AB3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00310AB9u); RECOMP_ABI_CALL(0x00311940u, sub_00311940); /* call 0x00311940 */

loc_00310AB9: ;
    esp = esp + 0x18;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00310AC0
 * Original: 0x00310AC0 - 0x00310AF6 (54 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310AC0(void)
{

loc_00310AC0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x5C);
    ecx = MEM32(eax + 0x68);
    ecx = edx + ecx * 2;
    edx = MEM32(eax + 0x64);
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    eax = MEM32(eax + 0x48);
    edx = ecx + edx * 2;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    edx = ecx + ecx;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00310AEBu); RECOMP_ABI_CALL(0x00311900u, sub_00311900); /* call 0x00311900 */

loc_00310AEB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00310AF1u); RECOMP_ABI_CALL(0x00311940u, sub_00311940); /* call 0x00311940 */

loc_00310AF1: ;
    esp = esp + 0x18;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00310B00
 * Original: 0x00310B00 - 0x00310BC6 (198 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310B00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00310B00: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    eax = MEM32(esi + 0x4C);
    ecx = MEM32(esi + 0x50);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(esi + 0x58);
    ebp = MEM32(esi + 0x60);
    ebx = MEM32(esi + 0x68);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esi + 0x6C);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esi + 0x70);
    eax = eax + ecx + -1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = edi - edx;
    MEM32(esp + 0x10) = eax;
    edx = ebp;
    edx = edx - ebx;
    eax = edx + ecx + -1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = MEM32(esp + 0x10);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00310B64; /* jge: greater or equal (signed >=) */

loc_00310B52: ;
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    edx = edx - edi;
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00310B64; /* jge: greater or equal (signed >=) */

loc_00310B5F: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;

loc_00310B64: ;
    edx = MEM32(esi + 0x70);
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00310B71; /* jge: greater or equal (signed >=) */

loc_00310B6F: ;
    eax = eax + edi;

loc_00310B71: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00310B82; /* jle: less or equal (signed <=) */

loc_00310B7C: ;
    MEM32(esp + 0x20) = eax;
    ecx = eax;

loc_00310B82: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00310B90; /* jle: less or equal (signed <=) */

loc_00310B8A: ;
    MEM32(esp + 0x20) = eax;
    ecx = eax;

loc_00310B90: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00310B9E; /* jle: less or equal (signed <=) */

loc_00310B98: ;
    MEM32(esp + 0x20) = eax;
    ecx = eax;

loc_00310B9E: ;
    _fa = (uint32_t)(MEM32(esi + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x50), 2 (32-bit) */
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00310BB6; /* jne: not equal / not zero */

loc_00310BA6: ;
    PUSH32(esp, 0x00310BABu); RECOMP_ABI_CALL(0x00310AC0u, sub_00310AC0); /* call 0x00310AC0 */

loc_00310BAB: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_00310BB6: ;
    PUSH32(esp, 0x00310BBBu); RECOMP_ABI_CALL(0x00310A90u, sub_00310A90); /* call 0x00310A90 */

loc_00310BBB: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00310BD0
 * Original: 0x00310BD0 - 0x00310BF2 (34 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00310BD0: ;
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00310BF1; /* jle: less or equal (signed <=) */

loc_00310BD8: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);

loc_00310BE1: ;
    SET_LO16(esi, MEM16(ecx));
    MEM16(eax) = LO16(esi);
    eax = eax + 2;
    ecx = ecx + 2;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00310BE1; /* jne: not equal / not zero */

loc_00310BF0: ;
    POP32(esp, esi);

loc_00310BF1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00310C00
 * Original: 0x00310C00 - 0x00310C35 (53 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310C00(void)
{

loc_00310C00: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    eax = esi + ebx * 2;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00310C1Au); RECOMP_ABI_CALL(0x00310BD0u, sub_00310BD0); /* call 0x00310BD0 */

loc_00310C1A: ;
    eax = MEM32(esp + 0x24);
    ebx = ebx + eax;
    PUSH32(esp, edi);
    ecx = esi + ebx * 2;
    PUSH32(esp, ecx);
    edx = esi + eax * 2;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00310C2Eu); RECOMP_ABI_CALL(0x00310BD0u, sub_00310BD0); /* call 0x00310BD0 */

loc_00310C2E: ;
    esp = esp + 0x18;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00310C40
 * Original: 0x00310C40 - 0x00310C5B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310C40(void)
{

loc_00310C40: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    edx = eax + ecx * 2;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00310C57u); RECOMP_ABI_CALL(0x00310BD0u, sub_00310BD0); /* call 0x00310BD0 */

loc_00310C57: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00310C60
 * Original: 0x00310C60 - 0x00310D2D (205 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310C60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00310C60: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    edx = MEM32(esi + 0x5C);
    eax = MEM32(esi + 0x54);
    ecx = MEM32(esi + 0x70);
    ebp = MEM32(esi + 0x68);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x58);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esi + 0x40);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, edx);
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, 0x00310C9Du); RECOMP_ABI_CALL(0x0030D660u, sub_0030D660); /* call 0x0030D660 */

loc_00310C9D: ;
    ecx = MEM32(esi + 0x50);
    ebx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esp = esp + 4;
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esp + 0x18);
    eax = eax + edi + -1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00310CCD; /* jg: greater (signed >) */

loc_00310CC1: ;
    ecx = MEM32(esp + 0x28);
    edx = edx - edi;
    eax = ecx + edx + 1;
    goto loc_00310CD1;

loc_00310CCD: ;
    eax = MEM32(esp + 0x28);

loc_00310CD1: ;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(esp + 0x1C));
    ebp = ebp + eax;
    MEM32(esi + 0x90) = eax;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esi + 0x94) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_00310D25; /* jl: less (signed <) */

loc_00310CEC: ;
    ecx = MEM32(esi + 0x50);
    ebp = ebp - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    PUSH32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_00310D12; /* jne: not equal / not zero */

loc_00310CF7: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00310D07u); RECOMP_ABI_CALL(0x00310C00u, sub_00310C00); /* call 0x00310C00 */

loc_00310D07: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00310D12: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00310D22u); RECOMP_ABI_CALL(0x00310C40u, sub_00310C40); /* call 0x00310C40 */

loc_00310D22: ;
    esp = esp + 0x10;

loc_00310D25: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00310D30
 * Original: 0x00310D30 - 0x00310DC4 (148 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00310D30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00310D6E; /* jne: not equal / not zero */

loc_00310D3B: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00310D44u); RECOMP_ABI_CALL(0x0030FED0u, sub_0030FED0); /* call 0x0030FED0 */

loc_00310D44: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00310D6E; /* jne: not equal / not zero */

loc_00310D4B: ;
    ecx = esi + 0x70;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x7C);
    edx = esi + 0x6C;
    PUSH32(esp, edx);
    eax = esi + 0x68;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(esi + 0x78); PUSH32(esp, 0x00310D5Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00310D5E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00310D64u); RECOMP_ABI_CALL(0x00310B00u, sub_00310B00); /* call 0x00310B00 */

loc_00310D64: ;
    esp = esp + 0x14;
    MEM32(esi + 4) = 2;

loc_00310D6E: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00310DC2; /* jne: not equal / not zero */

loc_00310D74: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00310D7Du); RECOMP_ABI_CALL(0x003119B0u, sub_003119B0); /* call 0x003119B0 */

loc_00310D7D: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00310D86u); RECOMP_ABI_CALL(0x0030FED0u, sub_0030FED0); /* call 0x0030FED0 */

loc_00310D86: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00310DC2; /* jne: not equal / not zero */

loc_00310D8E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00310D94u); RECOMP_ABI_CALL(0x00310C60u, sub_00310C60); /* call 0x00310C60 */

loc_00310D94: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00310D9Du); RECOMP_ABI_CALL(0x00311980u, sub_00311980); /* call 0x00311980 */

loc_00310D9D: ;
    edx = MEM32(esi + 0x90);
    eax = MEM32(esi + 0x94);
    ecx = MEM32(esi + 0x84);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(esi + 0x80); PUSH32(esp, 0x00310DB8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00310DB8: ;
    esp = esp + 0x14;
    MEM32(esi + 4) = 3;

loc_00310DC2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00310DD0
 * Original: 0x00310DD0 - 0x00310E44 (116 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310DD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00310DD0: ;
    ecx = MEM32(esp + 4);
    SET_LO16(eax, MEM16(ecx + 0x98));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), LO16(eax) (16-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00310DE9; /* jne: not equal / not zero */

loc_00310DE0: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00310D30(); return; /* tail jmp 0x00310D30 */

loc_00310DE9: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xA (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00310DF8; /* jne: not equal / not zero */

loc_00310DEF: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00311470(); return; /* tail jmp 0x00311470 */

loc_00310DF8: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00310E07; /* jne: not equal / not zero */

loc_00310DFE: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00312C50(); return; /* tail jmp 0x00312C50 */

loc_00310E07: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(3) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 3 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00310E16; /* jne: not equal / not zero */

loc_00310E0D: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00312A80(); return; /* tail jmp 0x00312A80 */

loc_00310E16: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 4 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00310E25; /* jne: not equal / not zero */

loc_00310E1C: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00312410(); return; /* tail jmp 0x00312410 */

loc_00310E25: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00310E34; /* jne: not equal / not zero */

loc_00310E2B: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00311EE0(); return; /* tail jmp 0x00311EE0 */

loc_00310E34: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x14 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00310E43; /* jne: not equal / not zero */

loc_00310E3A: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00311350(); return; /* tail jmp 0x00311350 */

loc_00310E43: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00310E50
 * Original: 0x00310E50 - 0x00310E6B (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310E50(void)
{

loc_00310E50: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00310E56u); RECOMP_ABI_CALL(0x00311710u, sub_00311710); /* call 0x00311710 */

loc_00310E56: ;
    PUSH32(esp, 0x00310E5Bu); RECOMP_ABI_CALL(0x003105C0u, sub_003105C0); /* call 0x003105C0 */

loc_00310E5B: ;
    ecx = 0x390;
    eax = 0; /* xor self */
    edi = 0x5E1940;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00310E70
 * Original: 0x00310E70 - 0x00310F73 (259 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00310E70: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    eax = 0x5E1A24;
    goto loc_00310E80;

    /* nop */

loc_00310E80: ;
    _fa = (uint32_t)(MEM16(eax + -228)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + -228), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00310EC0; /* je: equal / zero */

loc_00310E8A: ;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00310EB5; /* je: equal / zero */

loc_00310E90: ;
    _fa = (uint32_t)(MEM16(eax + 0xE4)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0xE4), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00310EB8; /* je: equal / zero */

loc_00310E9A: ;
    _fa = (uint32_t)(MEM16(eax + 0x1C8)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x1C8), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00310EBD; /* je: equal / zero */

loc_00310EA4: ;
    eax = eax + 0x390;
    esi = esi + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5E2864) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5E2864 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00310E80; /* jl: less (signed <) */

loc_00310EB3: ;
    goto loc_00310EC0;

loc_00310EB5: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00310EC0;

loc_00310EB8: ;
    esi = esi + 2;
    goto loc_00310EC0;

loc_00310EBD: ;
    esi = esi + 3;

loc_00310EC0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00310F71; /* je: equal / zero */

loc_00310ECB: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0xE4);
    PUSH32(esp, edi);
    esi = esi + 0x5E1940;
    ecx = 0x39;
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(esi) = 1;
    PUSH32(esp, 0x00310EEBu); RECOMP_ABI_CALL(0x00311730u, sub_00311730); /* call 0x00311730 */

loc_00310EEB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 8) = eax;
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_00310F00; /* jne: not equal / not zero */

loc_00310EF3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00310EF9u); RECOMP_ABI_CALL(0x00310590u, sub_00310590); /* call 0x00310590 */

loc_00310EF9: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00310F00: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    MEM32(esi + 0x38) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x3C) = ecx;
    MEM32(esi + 0x40) = edx;
    eax = 0xFFFFFF80u;
    MEM16(esi + 0xDE) = LO16(eax);
    MEM16(esi + 0xE0) = LO16(eax);
    MEM32(esi + 0x78) = 0x310530;
    MEM32(esi + 0x7C) = esi;
    MEM32(esi + 0x80) = 0x310570;
    MEM32(esi + 0x84) = esi;
    MEM32(esi + 0xC8) = 0;
    MEM16(esi + 0xDC) = 0;
    ecx = 0; /* xor self */
    edx = esi + 0xCC;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    eax = esi;

loc_00310F71: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00310F80
 * Original: 0x00310F80 - 0x00311202 (642 bytes, 225 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310F80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00310F80: ;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x30);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebp + 0x10;
    PUSH32(esp, edi);
    edx = ebp + 0x18;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x44);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    ebx = ebp + 0xE;
    PUSH32(esp, ebx);
    ecx = ebp + 0xF;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x54);
    eax = ebp + 0xD;
    PUSH32(esp, eax);
    esi = ebp + 0xC;
    PUSH32(esp, esi);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM16(ebp + 2) = 1;
    PUSH32(esp, 0x00310FC1u); RECOMP_ABI_CALL(0x0030E7B0u, sub_0030E7B0); /* call 0x0030E7B0 */

loc_00310FC1: ;
    esp = esp + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00311145; /* jl: less (signed <) */

loc_00310FCC: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 4 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003110B1; /* jle: less or equal (signed <=) */

loc_00310FD5: ;
    eax = MEM32(ebp + 0xB0);
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00310FFE; /* jne: not equal / not zero */

loc_00310FE1: ;
    PUSH32(esp, 0x42DAF0);
    PUSH32(esp, 0x42DAD0);
    PUSH32(esp, 0x00310FF0u); RECOMP_ABI_CALL(0x00307450u, sub_00307450); /* call 0x00307450 */

loc_00310FF0: ;
    esp = esp + 8;

loc_00310FF3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_00310FFE: ;
    SET_LO8(eax, MEM8(ebx));
    SET_LO8(ecx, 0xC0);
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)LO8(ecx);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = MEM32(esp + 0x40);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x40);
    MEM8(ebp + 0xF) = LO8(eax);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM8(ebp + 0xD) = 8;
    MEM32(edi) = 0x60;
    MEM16(ebp + 0x98) = 0xA;
    MEM16(ebp + 0x1C) = LO16(esi);
    MEM16(ebp + 0x24) = LO16(esi);
    MEM16(ebp + 0x26) = LO16(esi);
    MEM32(ebp + 0x20) = esi;
    MEM32(ebp + 0x28) = esi;
    MEM32(ebp + 0x2C) = esi;
    MEM32(ebp + 0x30) = esi;
    MEM32(ebp + 0x34) = esi;
    MEM32(ebp + 0x88) = esi;
    PUSH32(esp, 0x00311054u); RECOMP_ABI_CALL(0x0030E8D0u, sub_0030E8D0); /* call 0x0030E8D0 */

loc_00311054: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00311145; /* jl: less (signed <) */

loc_0031105F: ;
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    SET_LO8(ecx, MEM8(esp + 0x40));
    MEM16(esp + 0x34) = LO16(esi);
    PUSH32(esp, ebp);
    esi = esp + 0x3E;
    edi = esp + 0x3C;
    ebx = esp + 0x3A;
    PUSH32(esp, 0x00311083u); RECOMP_ABI_CALL(0x003108C0u, sub_003108C0); /* call 0x003108C0 */

loc_00311083: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00310FF3; /* jl: less (signed <) */

loc_0031108E: ;
    eax = MEM32(0x5BFAC4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003111C5; /* je: equal / zero */

loc_0031109B: ;
    ecx = MEM32(ebp + 0xB0);
    edx = esp + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x003110A9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003110A9: ;
    esp = esp + 8;
    goto loc_003111C5;

loc_003110B1: ;
    ecx = MEM32(esp + 0x40);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x40);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003110CAu); RECOMP_ABI_CALL(0x0030E8D0u, sub_0030E8D0); /* call 0x0030E8D0 */

loc_003110CA: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00311145; /* jl: less (signed <) */

loc_003110D1: ;
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    SET_LO8(ecx, MEM8(esp + 0x40));
    PUSH32(esp, ebp);
    esi = esp + 0x24;
    edi = esp + 0x28;
    ebx = esp + 0x2C;
    PUSH32(esp, 0x003110F0u); RECOMP_ABI_CALL(0x003108C0u, sub_003108C0); /* call 0x003108C0 */

loc_003110F0: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00310FF3; /* jl: less (signed <) */

loc_003110FB: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00311113u); RECOMP_ABI_CALL(0x00311850u, sub_00311850); /* call 0x00311850 */

loc_00311113: ;
    esi = MEM32(esp + 0x50);
    edi = MEM32(esp + 0x4C);
    ebx = ebp + 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00311126u); RECOMP_ABI_CALL(0x0030E880u, sub_0030E880); /* call 0x0030E880 */

loc_00311126: ;
    esp = esp + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00311145; /* jl: less (signed <) */

loc_0031112D: ;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031113Eu); RECOMP_ABI_CALL(0x0030E930u, sub_0030E930); /* call 0x0030E930 */

loc_0031113E: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0031114F; /* jge: greater or equal (signed >=) */

loc_00311145: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_0031114F: ;
    edx = (uint32_t)(int32_t)SMEM16(ebx);
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00311160u); RECOMP_ABI_CALL(0x003117D0u, sub_003117D0); /* call 0x003117D0 */

loc_00311160: ;
    ecx = MEM32(ebp + 8);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00311173u); RECOMP_ABI_CALL(0x003117F0u, sub_003117F0); /* call 0x003117F0 */

loc_00311173: ;
    edx = ebp + 0x34;
    PUSH32(esp, edx);
    eax = ebp + 0x30;
    PUSH32(esp, eax);
    ecx = ebp + 0x2C;
    PUSH32(esp, ecx);
    edx = ebp + 0x28;
    PUSH32(esp, edx);
    eax = ebp + 0x26;
    PUSH32(esp, eax);
    ecx = ebp + 0x24;
    PUSH32(esp, ecx);
    edx = ebp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00311196u); RECOMP_ABI_CALL(0x0030EA10u, sub_0030EA10); /* call 0x0030EA10 */

loc_00311196: ;
    eax = ebp + 0xDE;
    PUSH32(esp, eax);
    ecx = ebp + 0xDC;
    PUSH32(esp, ecx);
    edx = ebp + 0xCC;
    PUSH32(esp, edx);
    eax = ebp + 0xC8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003111B9u); RECOMP_ABI_CALL(0x0030EBD0u, sub_0030EBD0); /* call 0x0030EBD0 */

loc_003111B9: ;
    esp = esp + 0x54;
    MEM16(ebp + 0x98) = 0;

loc_003111C5: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebp + 0xE);
    edx = (uint32_t)(int32_t)SMEM8(ebp + 0xF);
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + 0x58) = eax;
    eax = MEM32(ebp + 0x44);
    POP32(esp, edi);
    MEM32(ebp + 0x50) = ecx;
    ecx = MEM32(ebp + 0x3C);
    MEM32(ebp + 0x54) = edx;
    edx = MEM32(ebp + 0x40);
    POP32(esp, esi);
    MEM32(ebp + 0x64) = eax;
    eax = (uint32_t)(int32_t)SMEM16(esp + 8);
    MEM32(ebp + 0x5C) = ecx;
    MEM32(ebp + 0x60) = edx;
    MEM32(ebp + 0x8C) = 0;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_00311210
 * Original: 0x00311210 - 0x003112D4 (196 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00311210: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    SET_LO16(eax, ZX8(MEM8(esi + 1)));
    SET_HI8(eax, MEM8(esi));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x8000 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00311237; /* jne: not equal / not zero */

loc_00311222: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00311232u); RECOMP_ABI_CALL(0x00310F80u, sub_00310F80); /* call 0x00310F80 */

loc_00311232: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00311237: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031123Du); RECOMP_ABI_CALL(0x00312D50u, sub_00312D50); /* call 0x00312D50 */

loc_0031123D: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00311259; /* je: equal / zero */

loc_00311244: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00311254u); RECOMP_ABI_CALL(0x00312B90u, sub_00312B90); /* call 0x00312B90 */

loc_00311254: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00311259: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031125Fu); RECOMP_ABI_CALL(0x00311EB0u, sub_00311EB0); /* call 0x00311EB0 */

loc_0031125F: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031127B; /* je: equal / zero */

loc_00311266: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00311276u); RECOMP_ABI_CALL(0x00311BD0u, sub_00311BD0); /* call 0x00311BD0 */

loc_00311276: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031127B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00311281u); RECOMP_ABI_CALL(0x003126B0u, sub_003126B0); /* call 0x003126B0 */

loc_00311281: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031129D; /* je: equal / zero */

loc_00311288: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00311298u); RECOMP_ABI_CALL(0x003127A0u, sub_003127A0); /* call 0x003127A0 */

loc_00311298: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031129D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003112A3u); RECOMP_ABI_CALL(0x00312150u, sub_00312150); /* call 0x00312150 */

loc_003112A3: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003112BF; /* je: equal / zero */

loc_003112AA: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003112BAu); RECOMP_ABI_CALL(0x00312240u, sub_00312240); /* call 0x00312240 */

loc_003112BA: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003112BF: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003112CFu); RECOMP_ABI_CALL(0x00311370u, sub_00311370); /* call 0x00311370 */

loc_003112CF: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003112E0
 * Original: 0x003112E0 - 0x003112F9 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003112E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003112E0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xBC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003112F8; /* je: equal / zero */

loc_003112EE: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x5BFAD4)); return; /* indirect tail jmp */

loc_003112F8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00311300
 * Original: 0x00311300 - 0x00311321 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311300(void)
{

loc_00311300: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0xC0) = eax;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    eax = eax + edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    MEM32(ecx + 0xC4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00311330
 * Original: 0x00311330 - 0x00311349 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311330(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00311330: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xBC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00311348; /* je: equal / zero */

loc_0031133E: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x5BFAD8)); return; /* indirect tail jmp */

loc_00311348: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00311350
 * Original: 0x00311350 - 0x00311369 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311350(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00311350: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xBC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00311368; /* je: equal / zero */

loc_0031135E: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x5BFADC)); return; /* indirect tail jmp */

loc_00311368: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00311370
 * Original: 0x00311370 - 0x00311404 (148 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00311370: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0xBC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00311383; /* jne: not equal / not zero */

loc_00311380: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00311383: ;
    edx = 0x1000;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x58) = edx;
    edx = MEM32(eax + 0x3C);
    MEM32(eax + 0x5C) = edx;
    edx = MEM32(eax + 0x40);
    MEM32(eax + 0x60) = edx;
    edx = MEM32(eax + 0x44);
    MEM16(eax + 2) = 1;
    MEM32(eax + 0x14) = 0xAC44;
    MEM8(eax + 0xE) = 2;
    MEM8(eax + 0xD) = 0x10;
    MEM32(eax + 0x18) = 0x7FFFFFFF;
    MEM8(eax + 0xF) = 0x7F;
    MEM16(eax + 0x98) = 0x14;
    MEM32(eax + 0x50) = 2;
    MEM32(eax + 0x54) = 0x7F;
    MEM32(eax + 0x64) = edx;
    MEM32(eax + 0x8C) = ecx;
    MEM16(eax + 0x1C) = LO16(ecx);
    MEM16(eax + 0x24) = LO16(ecx);
    MEM16(eax + 0x26) = LO16(ecx);
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x88) = ecx;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00311410
 * Original: 0x00311410 - 0x00311429 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311410(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00311410: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00311428; /* je: equal / zero */

loc_0031141E: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x5BFAE0)); return; /* indirect tail jmp */

loc_00311428: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00311430
 * Original: 0x00311430 - 0x0031146F (63 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00311430: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (TEST_Z(_fa, _fb)) goto loc_0031144F; /* je: equal / zero */

loc_00311444: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x5BFAE4); PUSH32(esp, 0x0031144Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0031144C: ;
    esp = esp + 8;

loc_0031144F: ;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((4) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    MEM32(esi + 0xB4) = edi;
    eax = eax + edx;
    POP32(esp, edi);
    MEM32(esi + 0xB8) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00311470
 * Original: 0x00311470 - 0x00311476 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311470(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00311470: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x5BFAEC)); return; /* indirect tail jmp */

}

/**
 * sub_00311480
 * Original: 0x00311480 - 0x00311499 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311480(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00311480: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00311498; /* je: equal / zero */

loc_0031148E: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x5BFAE8)); return; /* indirect tail jmp */

loc_00311498: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003114A0
 * Original: 0x003114A0 - 0x003114A5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003114A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003114A0: ;
    g_seh_ebp = ebp; sub_0033EA10(); return; /* tail jmp 0x0033EA10 */

}

/**
 * sub_003114B0
 * Original: 0x003114B0 - 0x003114B5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003114B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003114B0: ;
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

}

/**
 * sub_003114C0
 * Original: 0x003114C0 - 0x0031159F (223 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003114C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003114C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x20);
    eax = eax << 5;
    PUSH32(esp, edi);
    edi = eax + esi + 0x38;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0031159C; /* jle: less or equal (signed <=) */

loc_003114DB: ;
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003114E6u); RECOMP_ABI_CALL(0x0030D160u, sub_0030D160); /* call 0x0030D160 */

loc_003114E6: ;
    edx = MEM32(esi + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003114EFu); RECOMP_ABI_CALL(0x0030D6D0u, sub_0030D6D0); /* call 0x0030D6D0 */

loc_003114EF: ;
    edx = MEM32(edi + 4);
    eax = edx;
    esp = esp + 8;
    ebx = eax + 1;
    /* nop */

loc_00311500: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00311500; /* jne: not equal / not zero */

loc_00311507: ;
    eax = eax - ebx;
    ebp = 0;
    ecx = ebp;
    if ((eax == 0)) goto loc_0031151D; /* je: equal / zero */

loc_00311512: ;
    ebx = ZX8(MEM8(ecx + edx));
    ebp = ebp + ebx;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00311512; /* jb: below (unsigned <) */

loc_0031151D: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(edi + 8) (32-bit) */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00311535; /* je: equal / zero */

loc_00311524: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x42DB18);
    PUSH32(esp, 0x0031152Fu); RECOMP_ABI_CALL(0x003104F0u, sub_003104F0); /* call 0x003104F0 */

loc_0031152F: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00311535: ;
    eax = MEM32(edi + 0x14);
    ecx = MEM32(edi + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0031154Bu); RECOMP_ABI_CALL(0x0030D020u, sub_0030D020); /* call 0x0030D020 */

loc_0031154B: ;
    edx = MEM32(edi + 0x14);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00311558u); RECOMP_ABI_CALL(0x0030D1E0u, sub_0030D1E0); /* call 0x0030D1E0 */

loc_00311558: ;
    ecx = MEM32(edi + 0x14);
    MEM32(esi + 0x2C) = ecx;
    MEM32(edi + 0x1C) = 0;
    edx = MEM32(esi + 0x18);
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM8(esi + 2) = 0;
    PUSH32(esp, 0x0031157Au); RECOMP_ABI_CALL(0x0030D620u, sub_0030D620); /* call 0x0030D620 */

loc_0031157A: ;
    edx = MEM32(esi + 0x28);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00311585u); RECOMP_ABI_CALL(0x0030D090u, sub_0030D090); /* call 0x0030D090 */

loc_00311585: ;
    eax = MEM32(esi + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031158Eu); RECOMP_ABI_CALL(0x0030D100u, sub_0030D100); /* call 0x0030D100 */

loc_0031158E: ;
    eax = 1;
    MEM8(esi + 2) = LO8(eax);
    esp = esp + 0x34;
    MEM32(edi + 0x18) = eax;

loc_0031159C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003115A0
 * Original: 0x003115A0 - 0x00311606 (102 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003115A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003115A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003115BA; /* jne: not equal / not zero */

loc_003115AC: ;
    POP32(esp, esi);
    MEM32(esp + 4) = 0x42DB58;
    g_seh_ebp = ebp; sub_003104F0(); return; /* tail jmp 0x003104F0 */

loc_003115BA: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, edi);
    ecx = ecx << 5;
    PUSH32(esp, eax);
    edi = ecx + esi + 0x38;
    PUSH32(esp, 0x003115CBu); RECOMP_ABI_CALL(0x0033EB20u, sub_0033EB20); /* call 0x0033EB20 */

loc_003115CB: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003115DA; /* jne: not equal / not zero */

loc_003115D3: ;
    POP32(esp, edi);
    MEM8(esi + 1) = 3;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003115DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003115F1; /* jne: not equal / not zero */

loc_003115DF: ;
    edx = MEM32(esi + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003115E8u); RECOMP_ABI_CALL(0x0030D0B0u, sub_0030D0B0); /* call 0x0030D0B0 */

loc_003115E8: ;
    esp = esp + 4;
    MEM32(edi + 0x1C) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003115F1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00311603; /* jne: not equal / not zero */

loc_003115F6: ;
    eax = MEM32(esi + 0x2C);
    MEM32(edi + 0x18) = 2;
    MEM32(edi + 0x1C) = eax;

loc_00311603: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00311610
 * Original: 0x00311610 - 0x00311695 (133 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311610(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00311610: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    edi = 0; /* xor self */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_0031168F; /* je: equal / zero */

loc_0031162A: ;
    _fa = (uint32_t)(MEM8(esi + 3)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 3), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031164E; /* jne: not equal / not zero */

loc_00311630: ;
    eax = MEM32(esi + 0x20);
    eax = eax << 5;
    ecx = MEM32(eax + esi + 0x4C);
    edi = MEM32(eax + esi + 0x3C);
    ebp = MEM32(eax + esi + 0x44);
    ebx = MEM32(eax + esi + 0x48);
    eax = eax + esi + 0x38;
    MEM32(esp + 0x10) = ecx;

loc_0031164E: ;
    edx = MEM32(esi + 0x24);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x24) = edx;
    eax = edx;
    edx = MEM32(esi + 0x20);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx & 0x8000000Fu;
    if (((int32_t)edx >= 0)) goto loc_00311668; /* jns: not sign (positive) */

loc_00311663: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx | 0xFFFFFFF0u;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00311668: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0x20) = edx;
    if (CMP_G(_fas & _fbs, 0)) goto loc_00311678; /* jg: greater (signed >) */

loc_0031166F: ;
    PUSH32(esp, 0x00311674u); RECOMP_ABI_CALL(0x0030DC00u, sub_0030DC00); /* call 0x0030DC00 */

loc_00311674: ;
    MEM8(esi + 1) = 1;

loc_00311678: ;
    _fa = (uint32_t)(MEM8(esi + 3)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 3), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031168F; /* jne: not equal / not zero */

loc_0031167E: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031168Cu); RECOMP_ABI_CALL(0x0030D9E0u, sub_0030D9E0); /* call 0x0030D9E0 */

loc_0031168C: ;
    esp = esp + 0x14;

loc_0031168F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003116A0
 * Original: 0x003116A0 - 0x00311702 (98 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003116A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003116A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(ecx, MEM8(esi + 4));
    eax = 1;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00311700; /* je: equal / zero */

loc_003116B1: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00311700; /* jne: not equal / not zero */

loc_003116B7: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00311700; /* jle: less or equal (signed <=) */

loc_003116BE: ;
    ecx = MEM32(esi + 0x20);
    ecx = ecx << 5;
    _fa = (uint32_t)(MEM32(ecx + esi + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + esi + 0x50), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003116D3; /* jne: not equal / not zero */

loc_003116CA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003116D0u); RECOMP_ABI_CALL(0x003115A0u, sub_003115A0); /* call 0x003115A0 */

loc_003116D0: ;
    esp = esp + 4;

loc_003116D3: ;
    edx = MEM32(esi + 0x20);
    edx = edx << 5;
    _fa = (uint32_t)(MEM32(edx + esi + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + esi + 0x50), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003116E9; /* jne: not equal / not zero */

loc_003116E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003116E6u); RECOMP_ABI_CALL(0x00311610u, sub_00311610); /* call 0x00311610 */

loc_003116E6: ;
    esp = esp + 4;

loc_003116E9: ;
    eax = MEM32(esi + 0x20);
    eax = eax << 5;
    ecx = MEM32(eax + esi + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00311700; /* jne: not equal / not zero */

loc_003116F7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003116FDu); RECOMP_ABI_CALL(0x003114C0u, sub_003114C0); /* call 0x003114C0 */

loc_003116FD: ;
    esp = esp + 4;

loc_00311700: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00311710
 * Original: 0x00311710 - 0x00311721 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311710(void)
{

loc_00311710: ;
    PUSH32(esp, edi);
    ecx = 0xF0;
    eax = 0; /* xor self */
    edi = 0x5E1580;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00311730
 * Original: 0x00311730 - 0x003117C2 (146 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00311730: ;
    edx = 0; /* xor self */
    eax = 0x5E15BC;

loc_00311737: ;
    ecx = MEM32(eax + -60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031176D; /* je: equal / zero */

loc_0031173E: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00311762; /* je: equal / zero */

loc_00311743: ;
    ecx = MEM32(eax + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00311765; /* je: equal / zero */

loc_0031174A: ;
    ecx = MEM32(eax + 0x78);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031176A; /* je: equal / zero */

loc_00311751: ;
    eax = eax + 0xF0;
    edx = edx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5E197C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5E197C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00311737; /* jl: less (signed <) */

loc_00311760: ;
    goto loc_0031176D;

loc_00311762: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0031176D;

loc_00311765: ;
    edx = edx + 2;
    goto loc_0031176D;

loc_0031176A: ;
    edx = edx + 3;

loc_0031176D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003117C1; /* je: equal / zero */

loc_00311774: ;
    PUSH32(esp, esi);
    esi = edx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x3C);
    esi = esi + 0x5E1580;
    PUSH32(esp, edi);
    ecx = 0xF;
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    eax = esi + 0x32;
    PUSH32(esp, eax);
    ecx = esi + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xAC44);
    PUSH32(esp, 0x1F4);
    MEM32(esi) = 1;
    MEM32(esi + 4) = edx;
    PUSH32(esp, 0x003117B0u); RECOMP_ABI_CALL(0x0030E700u, sub_0030E700); /* call 0x0030E700 */

loc_003117B0: ;
    esp = esp + 0x10;
    eax = esi + 0x28;
    edx = 0; /* xor self */
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);

loc_003117C1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003117D0
 * Original: 0x003117D0 - 0x003117EF (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003117D0(void)
{

loc_003117D0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    ecx = eax + 0x32;
    PUSH32(esp, ecx);
    eax = eax + 0x30;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003117EBu); RECOMP_ABI_CALL(0x0030E700u, sub_0030E700); /* call 0x0030E700 */

loc_003117EB: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_003117F0
 * Original: 0x003117F0 - 0x0031181D (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003117F0(void)
{

loc_003117F0: ;
    ecx = MEM32(esp + 8);
    SET_LO16(edx, MEM16(ecx));
    eax = MEM32(esp + 4);
    MEM16(eax + 0x28) = LO16(edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(edx));
    MEM16(eax + 0x2A) = LO16(esi);
    SET_LO16(ecx, MEM16(ecx + 2));
    MEM16(eax + 0x2C) = LO16(ecx);
    SET_LO16(edx, MEM16(edx + 2));
    MEM16(eax + 0x2E) = LO16(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00311820
 * Original: 0x00311820 - 0x0031184D (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311820(void)
{

loc_00311820: ;
    eax = MEM32(esp + 4);
    SET_LO16(edx, MEM16(eax + 0x28));
    ecx = MEM32(esp + 8);
    MEM16(ecx) = LO16(edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(eax + 0x2A));
    MEM16(edx) = LO16(esi);
    SET_LO16(esi, MEM16(eax + 0x2C));
    MEM16(ecx + 2) = LO16(esi);
    SET_LO16(eax, MEM16(eax + 0x2E));
    MEM16(edx + 2) = LO16(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00311850
 * Original: 0x00311850 - 0x00311870 (32 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311850(void)
{

loc_00311850: ;
    eax = MEM32(esp + 4);
    SET_LO16(ecx, MEM16(esp + 8));
    SET_LO16(edx, MEM16(esp + 0xC));
    MEM16(eax + 0x34) = LO16(ecx);
    SET_LO16(ecx, MEM16(esp + 0x10));
    MEM16(eax + 0x36) = LO16(edx);
    MEM16(eax + 0x38) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00311870
 * Original: 0x00311870 - 0x00311896 (38 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311870(void)
{

loc_00311870: ;
    eax = MEM32(esp + 4);
    SET_LO16(ecx, MEM16(eax + 0x34));
    edx = MEM32(esp + 8);
    MEM16(edx) = LO16(ecx);
    SET_LO16(ecx, MEM16(eax + 0x36));
    edx = MEM32(esp + 0xC);
    MEM16(edx) = LO16(ecx);
    SET_LO16(eax, MEM16(eax + 0x38));
    ecx = MEM32(esp + 0x10);
    MEM16(ecx) = LO16(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_003118A0
 * Original: 0x003118A0 - 0x003118BA (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003118A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003118A0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003118B8; /* je: equal / zero */

loc_003118A9: ;
    ecx = 0xF;
    eax = 0; /* xor self */
    MEM32(edi) = 0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_003118B8: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003118C0
 * Original: 0x003118C0 - 0x003118F7 (55 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003118C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003118C0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003118F4; /* jne: not equal / not zero */

loc_003118CB: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(eax + 0x14) = 1;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = edx;
    eax = 1;
    esp += 4; return; /* ret */

loc_003118F4: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00311900
 * Original: 0x00311900 - 0x00311937 (55 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00311900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00311900: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00311934; /* jne: not equal / not zero */

loc_0031190B: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(eax + 0x14) = 2;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = edx;
    eax = 1;
    esp += 4; return; /* ret */

loc_00311934: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00311940
 * Original: 0x00311940 - 0x0031195A (26 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00311940: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00311959; /* jne: not equal / not zero */

loc_0031194B: ;
    MEM32(eax + 0x10) = 0;
    MEM32(eax + 0xC) = 1;

loc_00311959: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00311960
 * Original: 0x00311960 - 0x00311976 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311960(void)
{

loc_00311960: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0xC) = 0;
    ecx = 0; /* xor self */
    eax = eax + 0x28;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00311980
 * Original: 0x00311980 - 0x00311992 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00311980: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00311991; /* jne: not equal / not zero */

loc_0031198A: ;
    MEM32(eax + 0xC) = 0;

loc_00311991: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003119A0
 * Original: 0x003119A0 - 0x003119AB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003119A0(void)
{

loc_003119A0: ;
    MEM32(0x5BFB00) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_003119B0
 * Original: 0x003119B0 - 0x00311A71 (193 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003119B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003119B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 1 (32-bit) */
    eax = 2;
    if (CMP_NE(_fa, _fb)) goto loc_003119C3; /* jne: not equal / not zero */

loc_003119C0: ;
    MEM32(esi + 0xC) = eax;

loc_003119C3: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00311A6F; /* jne: not equal / not zero */

loc_003119CC: ;
    eax = MEM32(esi + 0x14);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    SET_LO16(ecx, MEM16(esi + 0x36));
    edx = esi + 0x34;
    if (CMP_NE(_fa, _fb)) goto loc_00311A18; /* jne: not equal / not zero */

loc_003119DD: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x38));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x32));
    PUSH32(esp, edx);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + 0x30));
    edx = esi + 0x28;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00311A09u); RECOMP_ABI_CALL(0x00312D70u, sub_00312D70); /* call 0x00312D70 */

loc_00311A09: ;
    esp = esp + 0x24;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0xC) = 3;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00311A18: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x38));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x32));
    PUSH32(esp, edx);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + 0x30));
    edx = esi + 0x2C;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x20);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x1C);
    ecx = esi + 0x28;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00311A4Cu); RECOMP_ABI_CALL(0x00313570u, sub_00313570); /* call 0x00313570 */

loc_00311A4C: ;
    esp = esp + 0x2C;
    MEM32(esi + 0x10) = eax;
    eax = eax & 0x80000001u;
    if (((int32_t)eax >= 0)) goto loc_00311A5E; /* jns: not sign (positive) */

loc_00311A59: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFFEu;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00311A5E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00311A68; /* jne: not equal / not zero */

loc_00311A63: ;
    PUSH32(esp, 0x00311A68u); RECOMP_ABI_CALL(0x003119A0u, sub_003119A0); /* call 0x003119A0 */

loc_00311A68: ;
    MEM32(esi + 0xC) = 3;

loc_00311A6F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00311A80
 * Original: 0x00311A80 - 0x00311BC3 (323 bytes, 131 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311A80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00311A80: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00311AA3; /* jle: less or equal (signed <=) */

loc_00311A91: ;
    ecx = MEM32(0x476ADC);

loc_00311A97: ;
    edi = MEM32(eax + edx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00311AA3; /* je: equal / zero */

loc_00311A9E: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00311A97; /* jl: less (signed <) */

loc_00311AA3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00311AC4; /* je: equal / zero */

loc_00311AA7: ;
    ecx = eax;
    ecx = ecx & 0x80000003u;
    if (((int32_t)ecx >= 0)) goto loc_00311AB6; /* jns: not sign (positive) */

loc_00311AB1: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 0xFFFFFFFCu;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00311AB6: ;
    if (_flags /* jne: not equal / not zero */) goto loc_00311AC4;

loc_00311AB8: ;
    _fa = (uint32_t)(MEM16(eax + edx + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + edx + 8), 1 (16-bit) */
    eax = eax + edx + 8;
    if (CMP_LE(_fas, _fbs)) goto loc_00311ACB; /* jle: less or equal (signed <=) */

loc_00311AC4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00311ACB: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, ebp);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00311AE4; /* jle: less or equal (signed <=) */

loc_00311AD2: ;
    edi = MEM32(0x476AE0);

loc_00311AD8: ;
    ebx = MEM32(ecx + edx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00311AE4; /* je: equal / zero */

loc_00311ADF: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00311AD8; /* jl: less (signed <) */

loc_00311AE4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00311BBB; /* je: equal / zero */

loc_00311AEC: ;
    esi = MEM32(ecx + edx + 4);
    edx = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x2C);
    ebx = MEM32(esp + 0x28);
    ecx = ecx + 8;
    MEM16(edx) = LO16(ecx);
    ecx = MEM32(esp + 0x20);
    MEM8(ecx) = 0xFF;
    edx = MEM32(eax + 4);
    ecx = MEM32(esp + 0x30);
    MEM32(ecx) = edx;
    SET_LO8(edx, MEM8(eax + 2));
    ecx = MEM32(esp + 0x24);
    MEM8(edi) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0xE));
    MEM8(ecx) = LO8(edx);
    SET_LO8(eax, MEM8(eax + 0xC));
    MEM8(ebx) = LO8(eax);
    ebp = SX8(LO8(eax));
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebp));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebp)); }
    ebp = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x38);
    MEM32(ebp) = eax;
    MEM32(edx) = 1;
    SET_LO8(eax, MEM8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x10 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00311B4F; /* jne: not equal / not zero */

loc_00311B44: ;
    eax = MEM32(esp + 0x3C);
    MEM16(eax) = 0;
    goto loc_00311B8A;

loc_00311B4F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 8 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00311B5E; /* jne: not equal / not zero */

loc_00311B53: ;
    edx = MEM32(esp + 0x3C);
    MEM16(edx) = 1;
    goto loc_00311B8A;

loc_00311B5E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00311B8A; /* jne: not equal / not zero */

loc_00311B62: ;
    SET_LO8(eax, MEM8(edi));
    SET_LO8(eax, LO8(eax) << 1);
    MEM8(ebx) = LO8(eax);
    MEM32(edx) = 4;
    eax = esi;
    esi = (uint32_t)(int32_t)SMEM8(edi);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    edx = MEM32(esp + 0x3C);
    MEM32(ebp) = eax;
    MEM8(ecx) = 0x10;
    MEM16(edx) = 2;

loc_00311B8A: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00311B99; /* jne: not equal / not zero */

loc_00311B8F: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00311B99: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00311B8F; /* je: equal / zero */

loc_00311B9E: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00311BBB; /* jle: less or equal (signed <=) */

loc_00311BA4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00311BBB; /* jg: greater (signed >) */

loc_00311BA8: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_00311BBB: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00311BD0
 * Original: 0x00311BD0 - 0x00311C83 (179 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311BD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00311BD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    eax = esi + 0x9A;
    PUSH32(esp, eax);
    edi = esi + 0x10;
    PUSH32(esp, edi);
    ecx = esi + 0x18;
    PUSH32(esp, ecx);
    edx = esi + 0x14;
    PUSH32(esp, edx);
    ebx = esi + 0xE;
    PUSH32(esp, ebx);
    ebp = esi + 0xF;
    PUSH32(esp, ebp);
    eax = esi + 0xD;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x38);
    ecx = esi + 0xC;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x38);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM16(esi + 2) = 1;
    PUSH32(esp, 0x00311C15u); RECOMP_ABI_CALL(0x00311A80u, sub_00311A80); /* call 0x00311A80 */

loc_00311C15: ;
    esp = esp + 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00311C23; /* jge: greater or equal (signed >=) */

loc_00311C1C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00311C23: ;
    edx = (uint32_t)(int32_t)SMEM8(ebx);
    ecx = (uint32_t)(int32_t)SMEM8(ebp);
    eax = 0; /* xor self */
    MEM32(esi + 0x50) = edx;
    edx = MEM32(edi);
    MEM32(esi + 0x54) = ecx;
    ecx = MEM32(esi + 0x3C);
    MEM32(esi + 0x58) = edx;
    edx = MEM32(esi + 0x40);
    MEM32(esi + 0x5C) = ecx;
    ecx = MEM32(esi + 0x44);
    POP32(esp, edi);
    MEM16(esi + 0x1C) = LO16(eax);
    MEM16(esi + 0x26) = LO16(eax);
    MEM16(esi + 0x24) = LO16(eax);
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x8C) = eax;
    MEM32(esi + 0x88) = eax;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x10);
    MEM32(esi + 0x60) = edx;
    MEM32(esi + 0x64) = ecx;
    MEM16(esi + 0x98) = 1;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00311C90
 * Original: 0x00311C90 - 0x00311D9E (270 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311C90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00311C90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 1 (32-bit) */
    ebx = MEM32(esi + 0x48);
    if (CMP_NE(_fa, _fb)) goto loc_00311D70; /* jne: not equal / not zero */

loc_00311CA3: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00311CACu); RECOMP_ABI_CALL(0x0030FED0u, sub_0030FED0); /* call 0x0030FED0 */

loc_00311CAC: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00311D70; /* jne: not equal / not zero */

loc_00311CB7: ;
    edx = MEM32(esi + 0x7C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi + 0x70;
    PUSH32(esp, ecx);
    ebp = esi + 0x6C;
    PUSH32(esp, ebp);
    edi = esi + 0x68;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(esi + 0x78); PUSH32(esp, 0x00311CCCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00311CCC: ;
    eax = MEM32(edi);
    edi = MEM32(esi + 0x60);
    ebp = MEM32(ebp);
    edi = edi - eax;
    esp = esp + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00311CDF; /* jle: less or equal (signed <=) */

loc_00311CDD: ;
    edi = ebp;

loc_00311CDF: ;
    ecx = MEM32(esi + 0x4C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00311CE8; /* jle: less or equal (signed <=) */

loc_00311CE6: ;
    edi = ecx;

loc_00311CE8: ;
    _fa = (uint32_t)(MEM8(esi + 0xE)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xE), 2 (8-bit) */
    ecx = MEM32(esi + 0x5C);
    ebp = ecx + eax * 2;
    if (CMP_NE(_fa, _fb)) goto loc_00311D38; /* jne: not equal / not zero */

loc_00311CF4: ;
    edx = MEM32(esi + 0x64);
    edx = edx + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    ecx = ecx + edx * 2;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00311D54; /* jle: less or equal (signed <=) */

loc_00311D00: ;
    ebp = ebp - ebx;
    eax = ebx;
    ecx = ecx - ebx;
    MEM32(esp + 0x14) = edi;
    /* nop */

loc_00311D10: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(edx, LO8(edx) - 0x80);
    ebx = 0; /* xor self */
    SET_HI8(ebx, LO8(edx));
    eax = eax + 2;
    MEM16(eax + ebp + -2) = LO16(ebx);
    SET_LO8(edx, MEM8(eax + -1));
    SET_LO8(edx, LO8(edx) - 0x80);
    ebx = 0; /* xor self */
    SET_HI8(ebx, LO8(edx));
    MEM32(esp + 0x14) = MEM32(esp + 0x14) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(ecx + eax + -2) = LO16(ebx);
    if ((_fa != 0)) goto loc_00311D10; /* jne: not equal / not zero */

loc_00311D36: ;
    goto loc_00311D54;

loc_00311D38: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00311D54; /* jle: less or equal (signed <=) */

loc_00311D3E: ;
    edi = edi;

loc_00311D40: ;
    SET_LO8(ecx, MEM8(eax + ebx));
    edx = 0; /* xor self */
    SET_LO8(ecx, LO8(ecx) - 0x80);
    SET_HI8(edx, LO8(ecx));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM16(ebp + eax * 2 + -2) = LO16(edx);
    if (CMP_L(_fas, _fbs)) goto loc_00311D40; /* jl: less (signed <) */

loc_00311D54: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0xE);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    MEM32(esi + 0x90) = edi;
    POP32(esp, edi);
    MEM32(esi + 0x94) = eax;
    MEM32(esi + 4) = 2;
    POP32(esp, ebp);

loc_00311D70: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00311D9B; /* jne: not equal / not zero */

loc_00311D76: ;
    ecx = MEM32(esi + 0x90);
    edx = MEM32(esi + 0x94);
    eax = MEM32(esi + 0x84);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x80); PUSH32(esp, 0x00311D91u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00311D91: ;
    esp = esp + 0xC;
    MEM32(esi + 4) = 3;

loc_00311D9B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00311DA0
 * Original: 0x00311DA0 - 0x00311EA7 (263 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00311DA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00311DA0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 1 (32-bit) */
    ebp = MEM32(esi + 0x48);
    if (CMP_NE(_fa, _fb)) goto loc_00311E79; /* jne: not equal / not zero */

loc_00311DB3: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00311DBCu); RECOMP_ABI_CALL(0x0030FED0u, sub_0030FED0); /* call 0x0030FED0 */

loc_00311DBC: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00311E79; /* jne: not equal / not zero */

loc_00311DC7: ;
    edx = MEM32(esi + 0x7C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi + 0x70;
    PUSH32(esp, ecx);
    edi = esi + 0x6C;
    PUSH32(esp, edi);
    ebx = esi + 0x68;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(esi + 0x78); PUSH32(esp, 0x00311DDCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00311DDC: ;
    eax = MEM32(ebx);
    ecx = MEM32(esi + 0x60);
    edi = MEM32(edi);
    ecx = ecx - eax;
    esp = esp + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00311DEE; /* jle: less or equal (signed <=) */

loc_00311DEC: ;
    ecx = edi;

loc_00311DEE: ;
    edx = MEM32(esi + 0x4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00311DF7; /* jle: less or equal (signed <=) */

loc_00311DF5: ;
    ecx = edx;

loc_00311DF7: ;
    _fa = (uint32_t)(MEM8(esi + 0xE)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xE), 2 (8-bit) */
    edi = MEM32(esi + 0x5C);
    edx = edi + eax * 2;
    if (CMP_NE(_fa, _fb)) goto loc_00311E3C; /* jne: not equal / not zero */

loc_00311E03: ;
    ebx = MEM32(esi + 0x64);
    ebx = ebx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    edi = edi + ebx * 2;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00311E5B; /* jle: less or equal (signed <=) */

loc_00311E0F: ;
    eax = ebp + 3;
    ebp = edx;
    ebp = ebp - edi;
    edx = ecx;

loc_00311E18: ;
    ebx = 0; /* xor self */
    SET_HI8(ebx, MEM8(eax + -1));
    eax = eax + 4;
    edi = edi + 2;
    SET_LO8(ebx, MEM8(eax + -7));
    MEM16(edi + ebp + -2) = LO16(ebx);
    ebx = 0; /* xor self */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    SET_HI8(ebx, MEM8(eax + -4));
    SET_LO8(ebx, MEM8(eax + -6));
    MEM16(edi + -2) = LO16(ebx);
    if ((_fa != 0)) goto loc_00311E18; /* jne: not equal / not zero */

loc_00311E3A: ;
    goto loc_00311E5B;

loc_00311E3C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00311E5B; /* jle: less or equal (signed <=) */

loc_00311E40: ;
    edi = edx;
    eax = ebp;
    edi = edi - ebp;
    ebp = ecx;

loc_00311E48: ;
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(eax + 1));
    eax = eax + 2;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(edx, MEM8(eax + -2));
    MEM16(edi + eax + -2) = LO16(edx);
    if ((_fa != 0)) goto loc_00311E48; /* jne: not equal / not zero */

loc_00311E5B: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0xE);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = eax << 1;
    POP32(esp, edi);
    MEM32(esi + 0x90) = ecx;
    MEM32(esi + 0x94) = eax;
    MEM32(esi + 4) = 2;
    POP32(esp, ebx);

loc_00311E79: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00311EA4; /* jne: not equal / not zero */

loc_00311E7F: ;
    ecx = MEM32(esi + 0x90);
    edx = MEM32(esi + 0x94);
    eax = MEM32(esi + 0x84);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x80); PUSH32(esp, 0x00311E9Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00311E9A: ;
    esp = esp + 0xC;
    MEM32(esi + 4) = 3;

loc_00311EA4: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00311EB0
 * Original: 0x00311EB0 - 0x00311ED4 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00311EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00311EB0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    ecx = 0x42E3C0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00311ED1; /* jne: not equal / not zero */

loc_00311EBF: ;
    edx = MEM32(eax + 8);
    ecx = 0x42E3B8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00311ED1; /* jne: not equal / not zero */

loc_00311ECB: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00311ED1: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00311EE0
 * Original: 0x00311EE0 - 0x00311F18 (56 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311EE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00311EE0: ;
    ecx = MEM32(esp + 4);
    SET_LO16(eax, MEM16(ecx + 0x9A));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00311EFA; /* jne: not equal / not zero */

loc_00311EF1: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00311DA0(); return; /* tail jmp 0x00311DA0 */

loc_00311EFA: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00311F09; /* jne: not equal / not zero */

loc_00311F00: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00311C90(); return; /* tail jmp 0x00311C90 */

loc_00311F09: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), LO16(eax) (16-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00311F17; /* jne: not equal / not zero */

loc_00311F0E: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00312C50(); return; /* tail jmp 0x00312C50 */

loc_00311F17: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00311F20
 * Original: 0x00311F20 - 0x00312141 (545 bytes, 204 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311F20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00311F20: ;
    eax = 0; /* xor self */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    SET_HI8(eax, MEM8(ebp + 3));
    ecx = ZX8(MEM8(ebp + 1));
    edx = ZX8(MEM8(ebp));
    SET_LO8(eax, MEM8(ebp + 2));
    eax = eax << 8;
    eax = eax | ecx;
    eax = eax << 8;
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64732E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x64732E (32-bit) */
    ecx = ebp + 4;
    if (CMP_EQ(_fa, _fb)) goto loc_00311F54; /* je: equal / zero */

loc_00311F49: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x646E732E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x646E732E (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00311F54; /* je: equal / zero */

loc_00311F50: ;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00311F54: ;
    edx = ZX8(MEM8(ecx + 1));
    eax = 0; /* xor self */
    SET_HI8(eax, MEM8(ecx + 3));
    PUSH32(esp, edi);
    ecx = ecx + 4;
    SET_LO8(eax, MEM8(ecx + -2));
    eax = eax << 8;
    eax = eax | edx;
    edx = ZX8(MEM8(ecx + -4));
    eax = eax << 8;
    eax = eax | edx;
    edi = eax;
    edx = eax;
    edx = edx >> 0x10;
    edi = edi & 0xFF0000;
    edi = edi | edx;
    edx = eax;
    edx = edx & 0xFF00;
    eax = eax << 0x10;
    edx = edx | eax;
    eax = MEM32(esp + 0x10);
    edi = edi >> 8;
    edx = edx << 8;
    edi = edi | edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00311FA3; /* jle: less or equal (signed <=) */

loc_00311F9E: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00311FA3: ;
    eax = ZX8(MEM8(ecx + 1));
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(ecx + 3));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = ecx + 4;
    ecx = ecx + 4;
    SET_LO8(edx, MEM8(ecx + -6));
    edx = edx << 8;
    edx = edx | eax;
    eax = ZX8(MEM8(ecx + -8));
    edx = edx << 8;
    edx = edx | eax;
    eax = edx;
    esi = edx;
    esi = esi >> 0x10;
    eax = eax & 0xFF0000;
    eax = eax | esi;
    esi = edx;
    edx = edx << 0x10;
    esi = esi & 0xFF00;
    esi = esi | edx;
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(ecx + -1));
    esi = esi << 8;
    eax = eax >> 8;
    eax = eax | esi;
    esi = ZX8(MEM8(ecx + -3));
    SET_LO8(edx, MEM8(ecx + -2));
    edx = edx << 8;
    edx = edx | esi;
    esi = ZX8(MEM8(ecx + -4));
    edx = edx << 8;
    esi = esi | edx;
    edx = esi;
    edx = edx & 0xFF0000;
    ebx = esi;
    ebx = ebx >> 0x10;
    edx = edx | ebx;
    ebx = esi;
    ebx = ebx & 0xFF00;
    esi = esi << 0x10;
    ebx = ebx | esi;
    edx = edx >> 8;
    ebx = ebx << 8;
    edx = edx | ebx;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00312058; /* je: equal / zero */

loc_00312029: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0031204C; /* je: equal / zero */

loc_0031202C: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00312036; /* je: equal / zero */

loc_0031202F: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00312036: ;
    esi = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x24);
    MEM32(esi) = 0;
    MEM32(edx) = 0x10;
    goto loc_0031206C;

loc_0031204C: ;
    esi = MEM32(esp + 0x2C);
    MEM32(esi) = 1;
    goto loc_00312062;

loc_00312058: ;
    esi = MEM32(esp + 0x2C);
    MEM32(esi) = 2;

loc_00312062: ;
    edx = MEM32(esp + 0x24);
    MEM32(edx) = 8;

loc_0031206C: ;
    ebx = ZX8(MEM8(ecx + 1));
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(ecx + 3));
    ecx = ecx + 4;
    SET_LO8(edx, MEM8(ecx + -2));
    edx = edx << 8;
    edx = edx | ebx;
    ebx = ZX8(MEM8(ecx + -4));
    edx = edx << 8;
    edx = edx | ebx;
    ebx = edx;
    MEM32(esp + 0x14) = edx;
    edx = edx & 0xFF00;
    ebx = ebx << 0x10;
    ebx = ebx | edx;
    edx = MEM32(esp + 0x14);
    edx = edx >> 0x18;
    ebx = ebx << 8;
    ebx = ebx | edx;
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(esp + 0x16));
    ebx = ebx | edx;
    edx = MEM32(esp + 0x1C);
    MEM32(edx) = ebx;
    ebx = ZX8(MEM8(ecx + 1));
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(ecx + 3));
    SET_LO8(edx, MEM8(ecx + 2));
    ecx = ZX8(MEM8(ecx));
    edx = edx << 8;
    edx = edx | ebx;
    edx = edx << 8;
    edx = edx | ecx;
    ecx = edx;
    MEM32(esp + 0x14) = edx;
    edx = edx & 0xFF00;
    ecx = ecx << 0x10;
    ecx = ecx | edx;
    edx = MEM32(esp + 0x14);
    edx = edx >> 0x18;
    ecx = ecx << 8;
    ecx = ecx | edx;
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(esp + 0x16));
    ecx = ecx | edx;
    edx = MEM32(esp + 0x20);
    MEM32(edx) = ecx;
    edx = MEM32(esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031211E; /* je: equal / zero */

loc_003120FF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00312115; /* jne: not equal / not zero */

loc_00312104: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = MEM32(esp + 0x28);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(edx) = eax;
    eax = edi + ebp;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00312115: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031212F; /* jne: not equal / not zero */

loc_00312119: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));

loc_0031211E: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(esp + 0x28);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(ecx) = eax;
    eax = edi + ebp;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0031212F: ;
    edx = MEM32(esp + 0x28);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = edi + ebp;
    POP32(esp, edi);
    MEM32(edx) = 0x7FFF0000;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00312150
 * Original: 0x00312150 - 0x00312171 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00312150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00312150: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    ecx = 0x42E3CC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031216B; /* je: equal / zero */

loc_0031215F: ;
    ecx = 0x42E3C8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031216B; /* je: equal / zero */

loc_00312168: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0031216B: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00312180
 * Original: 0x00312180 - 0x00312236 (182 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00312180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00312180: ;
    eax = MEM32(esp + 8);
    esp = esp - 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0031219C; /* jge: greater or equal (signed >=) */

loc_0031218C: ;
    eax = MEM32(esp + 0x18);
    MEM16(eax) = 0;
    eax = eax | 0xFFFFFFFFu;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0031219C: ;
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003121C1u); RECOMP_ABI_CALL(0x00311F20u, sub_00311F20); /* call 0x00311F20 */

loc_003121C1: ;
    esp = esp + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003121D0; /* jne: not equal / not zero */

loc_003121C8: ;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_003121D0: ;
    edx = MEM32(esp + 0x1C);
    eax = eax - esi;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), LO16(eax) (16-bit) */
    MEM16(edx) = LO16(eax);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_003121C8; /* jle: less or equal (signed <=) */

loc_003121DE: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x18);
    SET_LO8(edx, MEM8(esp + 4));
    esi = MEM32(esp + 0xC);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x24);
    MEM8(ecx) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 8));
    MEM8(eax) = LO8(edx);
    edx = MEM32(esp + 0x34);
    MEM32(edx) = esi;
    edx = MEM32(esp + 0x20);
    MEM8(edx) = 0xFF;
    eax = (uint32_t)(int32_t)SMEM8(eax);
    ecx = (uint32_t)(int32_t)SMEM8(ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    eax = eax + edx;
    edx = MEM32(esp + 0x28);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    MEM8(edx) = LO8(eax);
    eax = MEM32(esp + 0x38);
    MEM32(eax) = 1;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00312240
 * Original: 0x00312240 - 0x00312300 (192 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00312240(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00312240: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    edi = esi + 0x10;
    PUSH32(esp, edi);
    ecx = esi + 0x18;
    PUSH32(esp, ecx);
    edx = esi + 0x14;
    PUSH32(esp, edx);
    ebx = esi + 0xE;
    PUSH32(esp, ebx);
    ebp = esi + 0xF;
    PUSH32(esp, ebp);
    eax = esi + 0xD;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x3C);
    ecx = esi + 0xC;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x3C);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM16(esi + 2) = 1;
    PUSH32(esp, 0x00312284u); RECOMP_ABI_CALL(0x00312180u, sub_00312180); /* call 0x00312180 */

loc_00312284: ;
    esp = esp + 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00312293; /* jge: greater or equal (signed >=) */

loc_0031228B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00312293: ;
    edx = (uint32_t)(int32_t)SMEM8(ebx);
    ecx = (uint32_t)(int32_t)SMEM8(ebp);
    eax = 0; /* xor self */
    MEM32(esi + 0x50) = edx;
    edx = MEM32(edi);
    MEM32(esi + 0x54) = ecx;
    ecx = MEM32(esi + 0x3C);
    MEM32(esi + 0x58) = edx;
    edx = MEM32(esi + 0x40);
    MEM32(esi + 0x5C) = ecx;
    ecx = MEM32(esi + 0x44);
    MEM32(esi + 0x60) = edx;
    SET_LO16(edx, MEM16(esp + 0x10));
    POP32(esp, edi);
    MEM16(esi + 0x1C) = LO16(eax);
    MEM16(esi + 0x26) = LO16(eax);
    MEM16(esi + 0x24) = LO16(eax);
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x8C) = eax;
    MEM32(esi + 0x88) = eax;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x14);
    MEM32(esi + 0x64) = ecx;
    MEM16(esi + 0x98) = 4;
    MEM16(esi + 0x9A) = LO16(edx);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00312300
 * Original: 0x00312300 - 0x0031240F (271 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00312300(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00312300: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 1 (32-bit) */
    ebp = MEM32(esi + 0x48);
    if (CMP_NE(_fa, _fb)) goto loc_003123E1; /* jne: not equal / not zero */

loc_00312313: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031231Cu); RECOMP_ABI_CALL(0x0030FED0u, sub_0030FED0); /* call 0x0030FED0 */

loc_0031231C: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003123E1; /* jne: not equal / not zero */

loc_00312327: ;
    edx = MEM32(esi + 0x7C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi + 0x70;
    PUSH32(esp, ecx);
    edi = esi + 0x6C;
    PUSH32(esp, edi);
    ebx = esi + 0x68;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(esi + 0x78); PUSH32(esp, 0x0031233Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0031233C: ;
    eax = MEM32(ebx);
    ecx = MEM32(esi + 0x60);
    edi = MEM32(edi);
    ecx = ecx - eax;
    esp = esp + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0031234E; /* jle: less or equal (signed <=) */

loc_0031234C: ;
    ecx = edi;

loc_0031234E: ;
    edx = MEM32(esi + 0x4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00312357; /* jle: less or equal (signed <=) */

loc_00312355: ;
    ecx = edx;

loc_00312357: ;
    _fa = (uint32_t)(MEM8(esi + 0xE)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xE), 2 (8-bit) */
    edi = MEM32(esi + 0x5C);
    edx = edi + eax * 2;
    if (CMP_NE(_fa, _fb)) goto loc_003123A7; /* jne: not equal / not zero */

loc_00312363: ;
    ebx = MEM32(esi + 0x64);
    ebx = ebx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    edi = edi + ebx * 2;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_003123C5; /* jle: less or equal (signed <=) */

loc_0031236F: ;
    edx = edx - ebp;
    eax = ebp;
    edi = edi - ebp;
    ebp = ecx;
    goto loc_00312380;

    /* nop */

loc_00312380: ;
    ebx = ZX8(MEM8(eax));
    SET_LO16(ebx, MEM16(ebx * 2 + 0x476AE8));
    MEM16(edx + eax) = LO16(ebx);
    ebx = ZX8(MEM8(eax + 1));
    SET_LO16(ebx, MEM16(ebx * 2 + 0x476AE8));
    MEM16(edi + eax) = LO16(ebx);
    eax = eax + 2;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00312380; /* jne: not equal / not zero */

loc_003123A5: ;
    goto loc_003123C5;

loc_003123A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_003123C5; /* jle: less or equal (signed <=) */

loc_003123AD: ;
    /* nop */

loc_003123B0: ;
    edi = ZX8(MEM8(eax + ebp));
    SET_LO16(edi, MEM16(edi * 2 + 0x476AE8));
    MEM16(edx + eax * 2) = LO16(edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003123B0; /* jl: less (signed <) */

loc_003123C5: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0xE);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    POP32(esp, edi);
    MEM32(esi + 0x90) = ecx;
    MEM32(esi + 0x94) = eax;
    MEM32(esi + 4) = 2;
    POP32(esp, ebx);

loc_003123E1: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031240C; /* jne: not equal / not zero */

loc_003123E7: ;
    ecx = MEM32(esi + 0x90);
    edx = MEM32(esi + 0x94);
    eax = MEM32(esi + 0x84);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x80); PUSH32(esp, 0x00312402u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00312402: ;
    esp = esp + 0xC;
    MEM32(esi + 4) = 3;

loc_0031240C: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00312410
 * Original: 0x00312410 - 0x0031243A (42 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00312410(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00312410: ;
    ecx = MEM32(esp + 4);
    SET_LO16(eax, MEM16(ecx + 0x9A));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 2 (16-bit) */
    MEM32(esp + 4) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0031242A; /* jne: not equal / not zero */

loc_00312425: ;
    g_seh_ebp = ebp; sub_00312300(); return; /* tail jmp 0x00312300 */

loc_0031242A: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00312435; /* jne: not equal / not zero */

loc_00312430: ;
    g_seh_ebp = ebp; sub_00312980(); return; /* tail jmp 0x00312980 */

loc_00312435: ;
    g_seh_ebp = ebp; sub_00312860(); return; /* tail jmp 0x00312860 */

}

/**
 * sub_00312440
 * Original: 0x00312440 - 0x003126A9 (617 bytes, 212 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00312440(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00312440: ;
    esp = esp - 8;
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(eax + 3));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(eax + 1));
    SET_LO8(ecx, MEM8(eax + 2));
    PUSH32(esp, edi);
    edx = 0; /* xor self */
    ebp = 0; /* xor self */
    edi = 0; /* xor self */
    ecx = ecx << 8;
    ecx = ecx | esi;
    esi = ZX8(MEM8(eax));
    ecx = ecx << 8;
    ecx = ecx | esi;
    esi = eax + 4;
    eax = 0; /* xor self */
    SET_HI8(eax, MEM8(esi + 3));
    MEM32(esp + 0x14) = ecx;
    ecx = ZX8(MEM8(esi + 1));
    ebx = ZX8(MEM8(esi + 5));
    SET_LO8(eax, MEM8(esi + 2));
    esi = esi + 4;
    esi = esi + 4;
    eax = eax << 8;
    eax = eax | ecx;
    ecx = ZX8(MEM8(esi + -8));
    eax = eax << 8;
    eax = eax | ecx;
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(esi + -1));
    MEM32(esp + 0x10) = eax;
    SET_LO8(ecx, MEM8(esi + -2));
    ecx = ecx << 8;
    ecx = ecx | ebx;
    ebx = ZX8(MEM8(esi + -4));
    ecx = ecx << 8;
    ecx = ecx | ebx;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4D524F46) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), 0x4D524F46 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031269F; /* jne: not equal / not zero */

loc_003124B9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x46464941) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x46464941 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031269F; /* jne: not equal / not zero */

loc_003124C5: ;
    ecx = eax;
    eax = eax << 0x10;
    ecx = ecx & 0xFF00;
    ecx = ecx | eax;
    eax = 0; /* xor self */
    SET_HI8(eax, MEM8(esp + 0x12));
    ecx = ecx << 8;
    ecx = ecx | eax;
    eax = ZX8(MEM8(esp + 0x13));
    ecx = ecx | eax;
    eax = ecx + esi + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_00312695; /* jae: above or equal (unsigned >=) */

loc_003124F4: ;
    ecx = ZX8(MEM8(esi + 1));
    eax = ZX8(MEM8(esi));
    ebx = 0; /* xor self */
    SET_HI8(ebx, MEM8(esi + 3));
    esi = esi + 4;
    esi = esi + 4;
    SET_LO8(ebx, MEM8(esi + -6));
    ebx = ebx << 8;
    ebx = ebx | ecx;
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(esi + -1));
    ebx = ebx << 8;
    ebx = ebx | eax;
    eax = ZX8(MEM8(esi + -3));
    SET_LO8(ecx, MEM8(esi + -2));
    ecx = ecx << 8;
    ecx = ecx | eax;
    eax = ZX8(MEM8(esi + -4));
    ecx = ecx << 8;
    ecx = ecx | eax;
    eax = ecx;
    MEM32(esp + 0x10) = ecx;
    ecx = ecx << 0x10;
    eax = eax & 0xFF00;
    eax = eax | ecx;
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(esp + 0x12));
    eax = eax << 8;
    eax = eax | ecx;
    ecx = MEM32(esp + 0x10);
    ecx = ecx >> 0x18;
    eax = eax | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x444E5353) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x444E5353 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031263B; /* je: equal / zero */

loc_0031255D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4D4D4F43) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x4D4D4F43 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00312570; /* je: equal / zero */

loc_00312565: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax & 0xFFFFFFFEu;
    esi = esi + eax;
    goto loc_0031268B;

loc_00312570: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031268B; /* jne: not equal / not zero */

loc_00312578: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031269F; /* jl: less (signed <) */

loc_00312581: ;
    edx = ZX8(MEM8(esi));
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(esi + 1));
    esi = esi + 2;
    esi = esi + 4;
    esi = esi + 2;
    esi = esi + 2;
    ebx = 0; /* xor self */
    esi = esi + 8;
    ecx = ecx | edx;
    eax = ZX8(HI8(ecx));
    SET_HI8(eax, LO8(ecx));
    ecx = MEM32(esp + 0x20);
    MEM32(ecx) = eax;
    edx = ZX8(MEM8(esi + -15));
    eax = ZX8(MEM8(esi + -16));
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(esi + -13));
    SET_LO8(ecx, MEM8(esi + -14));
    ecx = ecx << 8;
    ecx = ecx | edx;
    ecx = ecx << 8;
    ecx = ecx | eax;
    edx = ecx;
    MEM32(esp + 0x10) = ecx;
    eax = ecx;
    ecx = ecx & 0xFF00;
    edx = edx << 0x10;
    edx = edx | ecx;
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(esp + 0x12));
    eax = eax >> 0x18;
    edx = edx << 8;
    edx = edx | eax;
    eax = MEM32(esp + 0x28);
    edx = edx | ecx;
    MEM32(eax) = edx;
    edx = ZX8(MEM8(esi + -12));
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(esi + -11));
    ecx = ecx | edx;
    eax = ZX8(HI8(ecx));
    SET_HI8(eax, LO8(ecx));
    ecx = MEM32(esp + 0x24);
    edx = 0; /* xor self */
    MEM32(ecx) = eax;
    SET_HI8(edx, MEM8(esi + -7));
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(esi + -9));
    SET_LO16(eax, ZX8(HI8(ecx)));
    SET_LO8(edx, MEM8(esi + -8));
    SET_HI8(ebx, LO8(edx));
    SET_LO8(ecx, MEM8(esi + -10));
    SET_HI8(eax, LO8(ecx));
    ecx = 0x400E;
    ecx = ecx - eax;
    eax = ZX16(LO16(edx));
    edx = ZX16(LO16(ebx));
    eax = eax >> 8;
    eax = eax | edx;
    eax = eax >> LO8(ecx);
    ecx = MEM32(esp + 0x1C);
    edx = 1;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    MEM32(ecx) = eax;
    goto loc_00312689;

loc_0031263B: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031268B; /* jne: not equal / not zero */

loc_0031263F: ;
    eax = ZX8(MEM8(esi + 1));
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(esi + 3));
    esi = esi + 4;
    ebp = 1;
    SET_LO8(ecx, MEM8(esi + -2));
    ecx = ecx << 8;
    ecx = ecx | eax;
    eax = ZX8(MEM8(esi + -4));
    ecx = ecx << 8;
    ecx = ecx | eax;
    edi = ecx;
    edi = edi & 0xFF0000;
    eax = ecx;
    eax = eax >> 0x10;
    edi = edi | eax;
    eax = ecx;
    eax = eax << 0x10;
    ecx = ecx & 0xFF00;
    eax = eax | ecx;
    edi = edi >> 8;
    eax = eax << 8;
    edi = edi | eax;
    edi = edi + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */

loc_00312689: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00312695; /* jne: not equal / not zero */

loc_0031268B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x14) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003124F4; /* jb: below (unsigned <) */

loc_00312695: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0031269F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003126B0
 * Original: 0x003126B0 - 0x003126D4 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003126B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003126B0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    ecx = 0x42E3DC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003126D1; /* jne: not equal / not zero */

loc_003126BF: ;
    edx = MEM32(eax + 8);
    ecx = 0x42E3D4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003126D1; /* jne: not equal / not zero */

loc_003126CB: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_003126D1: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_003126E0
 * Original: 0x003126E0 - 0x00312793 (179 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003126E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003126E0: ;
    eax = MEM32(esp + 8);
    esp = esp - 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1000 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003126FE; /* jge: greater or equal (signed >=) */

loc_003126EE: ;
    eax = MEM32(esp + 0x18);
    MEM16(eax) = 0;
    eax = eax | 0xFFFFFFFFu;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_003126FE: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    eax = esi;
    PUSH32(esp, 0x0031271Eu); RECOMP_ABI_CALL(0x00312440u, sub_00312440); /* call 0x00312440 */

loc_0031271E: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031272D; /* jne: not equal / not zero */

loc_00312725: ;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0031272D: ;
    edx = MEM32(esp + 0x1C);
    eax = eax - esi;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), LO16(eax) (16-bit) */
    MEM16(edx) = LO16(eax);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00312725; /* jle: less or equal (signed <=) */

loc_0031273B: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x18);
    SET_LO8(edx, MEM8(esp + 4));
    esi = MEM32(esp + 0xC);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x24);
    MEM8(ecx) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 8));
    MEM8(eax) = LO8(edx);
    edx = MEM32(esp + 0x34);
    MEM32(edx) = esi;
    edx = MEM32(esp + 0x20);
    MEM8(edx) = 0xFF;
    eax = (uint32_t)(int32_t)SMEM8(eax);
    ecx = (uint32_t)(int32_t)SMEM8(ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    eax = eax + edx;
    edx = MEM32(esp + 0x28);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    MEM8(edx) = LO8(eax);
    eax = MEM32(esp + 0x38);
    MEM32(eax) = 1;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_003127A0
 * Original: 0x003127A0 - 0x0031285C (188 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003127A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003127A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = esi + 0x10;
    PUSH32(esp, edi);
    ecx = esi + 0x18;
    PUSH32(esp, ecx);
    edx = esi + 0x14;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x28);
    ebx = esi + 0xE;
    PUSH32(esp, ebx);
    ebp = esi + 0xF;
    PUSH32(esp, ebp);
    eax = esi + 0xD;
    PUSH32(esp, eax);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x34);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM16(esi + 2) = 1;
    PUSH32(esp, 0x003127DEu); RECOMP_ABI_CALL(0x003126E0u, sub_003126E0); /* call 0x003126E0 */

loc_003127DE: ;
    esp = esp + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_003127EC; /* jge: greater or equal (signed >=) */

loc_003127E5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003127EC: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebx);
    edx = (uint32_t)(int32_t)SMEM8(ebp);
    eax = 0; /* xor self */
    MEM32(esi + 0x50) = ecx;
    ecx = MEM32(edi);
    MEM32(esi + 0x58) = ecx;
    ecx = MEM32(esi + 0x40);
    MEM32(esi + 0x60) = ecx;
    SET_LO8(ecx, MEM8(esi + 0xD));
    MEM16(esi + 0x1C) = LO16(eax);
    MEM16(esi + 0x26) = LO16(eax);
    MEM16(esi + 0x24) = LO16(eax);
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x8C) = eax;
    MEM32(esi + 0x88) = eax;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 8 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esi + 0x54) = edx;
    edx = MEM32(esi + 0x3C);
    MEM32(esi + 0x5C) = edx;
    edx = MEM32(esi + 0x44);
    POP32(esp, edi);
    MEM32(esi + 0x64) = edx;
    MEM16(esi + 0x9A) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x10);
    MEM16(esi + 0x98) = 3;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00312860
 * Original: 0x00312860 - 0x00312980 (288 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00312860(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00312860: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 1 (32-bit) */
    ebx = MEM32(esi + 0x48);
    if (CMP_NE(_fa, _fb)) goto loc_00312952; /* jne: not equal / not zero */

loc_00312873: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031287Cu); RECOMP_ABI_CALL(0x0030FED0u, sub_0030FED0); /* call 0x0030FED0 */

loc_0031287C: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00312952; /* jne: not equal / not zero */

loc_00312887: ;
    edx = MEM32(esi + 0x7C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi + 0x70;
    PUSH32(esp, ecx);
    ebp = esi + 0x6C;
    PUSH32(esp, ebp);
    edi = esi + 0x68;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(esi + 0x78); PUSH32(esp, 0x0031289Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0031289C: ;
    eax = MEM32(edi);
    edi = MEM32(esi + 0x60);
    ebp = MEM32(ebp);
    edi = edi - eax;
    esp = esp + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003128AF; /* jle: less or equal (signed <=) */

loc_003128AD: ;
    edi = ebp;

loc_003128AF: ;
    ecx = MEM32(esi + 0x4C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003128B8; /* jle: less or equal (signed <=) */

loc_003128B6: ;
    edi = ecx;

loc_003128B8: ;
    _fa = (uint32_t)(MEM8(esi + 0xE)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xE), 2 (8-bit) */
    ecx = MEM32(esi + 0x5C);
    edx = ecx + eax * 2;
    if (CMP_NE(_fa, _fb)) goto loc_0031290C; /* jne: not equal / not zero */

loc_003128C4: ;
    ebp = MEM32(esi + 0x64);
    ebp = ebp + eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    ebp = ecx + ebp * 2;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00312934; /* jle: less or equal (signed <=) */

loc_003128D2: ;
    edx = edx - ebp;
    MEM32(esp + 0x14) = edx;
    goto loc_003128E0;

    /* nop */

loc_003128E0: ;
    SET_LO16(ecx, MEM16(ebx + eax * 4));
    SET_LO16(edx, ZX8(HI8(ecx)));
    SET_HI8(edx, LO8(ecx));
    ecx = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = ebp + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM16(ecx + ebp + -2) = LO16(edx);
    SET_LO16(ecx, MEM16(ebx + eax * 4 + -2));
    SET_LO16(edx, ZX8(HI8(ecx)));
    SET_HI8(edx, LO8(ecx));
    MEM16(ebp + -2) = LO16(edx);
    if (CMP_L(_fas, _fbs)) goto loc_003128E0; /* jl: less (signed <) */

loc_0031290A: ;
    goto loc_00312934;

loc_0031290C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00312934; /* jle: less or equal (signed <=) */

loc_00312910: ;
    ebp = ebx;
    eax = edx;
    ebp = ebp - edx;
    edx = edi;
    goto loc_00312920;

    /* nop */

loc_00312920: ;
    SET_LO16(ecx, MEM16(eax + ebp));
    SET_LO16(ebx, ZX8(HI8(ecx)));
    SET_HI8(ebx, LO8(ecx));
    eax = eax + 2;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(eax + -2) = LO16(ebx);
    if ((_fa != 0)) goto loc_00312920; /* jne: not equal / not zero */

loc_00312934: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0xE);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    MEM32(esi + 0x90) = edi;
    eax = eax << 1;
    POP32(esp, edi);
    MEM32(esi + 0x94) = eax;
    MEM32(esi + 4) = 2;
    POP32(esp, ebp);

loc_00312952: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031297D; /* jne: not equal / not zero */

loc_00312958: ;
    ecx = MEM32(esi + 0x90);
    edx = MEM32(esi + 0x94);
    eax = MEM32(esi + 0x84);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x80); PUSH32(esp, 0x00312973u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00312973: ;
    esp = esp + 0xC;
    MEM32(esi + 4) = 3;

loc_0031297D: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00312980
 * Original: 0x00312980 - 0x00312A79 (249 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00312980(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00312980: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 1 (32-bit) */
    ebx = MEM32(esi + 0x48);
    if (CMP_NE(_fa, _fb)) goto loc_00312A4B; /* jne: not equal / not zero */

loc_00312993: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031299Cu); RECOMP_ABI_CALL(0x0030FED0u, sub_0030FED0); /* call 0x0030FED0 */

loc_0031299C: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00312A4B; /* jne: not equal / not zero */

loc_003129A7: ;
    edx = MEM32(esi + 0x7C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi + 0x70;
    PUSH32(esp, ecx);
    edi = esi + 0x6C;
    PUSH32(esp, edi);
    ebp = esi + 0x68;
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(esi + 0x78); PUSH32(esp, 0x003129BCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003129BC: ;
    eax = MEM32(ebp);
    ecx = MEM32(esi + 0x60);
    edi = MEM32(edi);
    ecx = ecx - eax;
    esp = esp + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003129CF; /* jle: less or equal (signed <=) */

loc_003129CD: ;
    ecx = edi;

loc_003129CF: ;
    edx = MEM32(esi + 0x4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003129D8; /* jle: less or equal (signed <=) */

loc_003129D6: ;
    ecx = edx;

loc_003129D8: ;
    _fa = (uint32_t)(MEM8(esi + 0xE)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xE), 2 (8-bit) */
    edx = MEM32(esi + 0x5C);
    edi = edx + eax * 2;
    if (CMP_NE(_fa, _fb)) goto loc_00312A13; /* jne: not equal / not zero */

loc_003129E4: ;
    ebp = MEM32(esi + 0x64);
    ebp = ebp + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    ebp = edx + ebp * 2;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00312A2F; /* jle: less or equal (signed <=) */

loc_003129F0: ;
    edi = edi - ebx;
    eax = ebx;
    ebp = ebp - ebx;
    edx = ecx;

loc_003129F8: ;
    ebx = 0; /* xor self */
    SET_HI8(ebx, MEM8(eax));
    eax = eax + 2;
    MEM16(edi + eax + -2) = LO16(ebx);
    ebx = 0; /* xor self */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    SET_HI8(ebx, MEM8(eax + -1));
    MEM16(eax + ebp + -2) = LO16(ebx);
    if ((_fa != 0)) goto loc_003129F8; /* jne: not equal / not zero */

loc_00312A11: ;
    goto loc_00312A2F;

loc_00312A13: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00312A2F; /* jle: less or equal (signed <=) */

loc_00312A19: ;
    /* nop */

loc_00312A20: ;
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(eax + ebx));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM16(edi + eax * 2 + -2) = LO16(edx);
    if (CMP_L(_fas, _fbs)) goto loc_00312A20; /* jl: less (signed <) */

loc_00312A2F: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0xE);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    POP32(esp, edi);
    MEM32(esi + 0x90) = ecx;
    MEM32(esi + 0x94) = eax;
    MEM32(esi + 4) = 2;
    POP32(esp, ebp);

loc_00312A4B: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00312A76; /* jne: not equal / not zero */

loc_00312A51: ;
    ecx = MEM32(esi + 0x90);
    edx = MEM32(esi + 0x94);
    eax = MEM32(esi + 0x84);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x80); PUSH32(esp, 0x00312A6Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00312A6C: ;
    esp = esp + 0xC;
    MEM32(esi + 4) = 3;

loc_00312A76: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00312A80
 * Original: 0x00312A80 - 0x00312A9C (28 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00312A80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00312A80: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM16(eax + 0x9A)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x9A), 1 (16-bit) */
    MEM32(esp + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00312A97; /* jne: not equal / not zero */

loc_00312A92: ;
    g_seh_ebp = ebp; sub_00312980(); return; /* tail jmp 0x00312980 */

loc_00312A97: ;
    g_seh_ebp = ebp; sub_00312860(); return; /* tail jmp 0x00312860 */

}

/**
 * sub_00312AA0
 * Original: 0x00312AA0 - 0x00312B75 (213 bytes, 72 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00312AA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00312AA0: ;
    ecx = MEM32(esp + 4);
    SET_LO16(eax, ZX8(MEM8(ecx + 7)));
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2C);
    eax = eax << 4;
    MEM16(edx) = LO16(eax);
    SET_LO8(edx, MEM8(ecx + 9));
    eax = MEM32(esp + 0x28);
    SET_LO8(edx, LO8(edx) & 3);
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(edx);
    edx = ZX16(MEM16(ecx + 0x2A));
    MEM32(esi) = edx;
    edx = ZX8(MEM8(ecx + 8));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    esi = MEM32(esp + 0x34);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x34);
    if (CMP_A(_fa, _fb)) goto loc_00312B50; /* ja: above (unsigned >) */

loc_00312AE8: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x312B78); /* switch: 4 entries, 3 targets */
    if (_jt == 0x00312AEFu) goto loc_00312AEF;
    if (_jt == 0x00312B14u) goto loc_00312B14;
    if (_jt == 0x00312B32u) goto loc_00312B32;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00312AEF: ;
    MEM8(ebp) = 0x10;
    SET_LO8(eax, MEM8(eax));
    SET_LO8(eax, LO8(eax) << 1);
    MEM8(ebx) = LO8(eax);
    MEM32(esi) = 1;
    eax = MEM32(ecx + 0xC);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    edx = MEM32(esp + 0x3C);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    MEM32(edi) = eax;
    MEM16(edx) = 0;
    goto loc_00312B50;

loc_00312B14: ;
    MEM8(ebp) = 8;
    SET_LO8(eax, MEM8(eax));
    MEM8(ebx) = LO8(eax);
    eax = MEM32(esp + 0x3C);
    MEM32(esi) = 1;
    edx = MEM32(ecx + 0xC);
    MEM32(edi) = edx;
    MEM16(eax) = 1;
    goto loc_00312B50;

loc_00312B32: ;
    MEM8(ebp) = 4;
    SET_LO8(edx, MEM8(eax));
    MEM8(ebx) = LO8(edx);
    edx = MEM32(esp + 0x3C);
    MEM32(esi) = 2;
    eax = MEM32(ecx + 0xC);
    eax = eax << 1;
    MEM32(edi) = eax;
    MEM16(edx) = 2;

loc_00312B50: ;
    MEM8(ebx) = 2;
    MEM32(esi) = 1;
    eax = MEM32(ecx + 0xC);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    MEM32(edi) = eax;
    eax = MEM32(esp + 0x20);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebp) = 0x10;
    POP32(esp, ebp);
    MEM8(eax) = 0xFF;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00312B90
 * Original: 0x00312B90 - 0x00312C43 (179 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00312B90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00312B90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    eax = esi + 0x9A;
    PUSH32(esp, eax);
    edi = esi + 0x10;
    PUSH32(esp, edi);
    ecx = esi + 0x18;
    PUSH32(esp, ecx);
    edx = esi + 0x14;
    PUSH32(esp, edx);
    ebx = esi + 0xE;
    PUSH32(esp, ebx);
    ebp = esi + 0xF;
    PUSH32(esp, ebp);
    eax = esi + 0xD;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x38);
    ecx = esi + 0xC;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x38);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM16(esi + 2) = 1;
    PUSH32(esp, 0x00312BD5u); RECOMP_ABI_CALL(0x00312AA0u, sub_00312AA0); /* call 0x00312AA0 */

loc_00312BD5: ;
    esp = esp + 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00312BE3; /* jge: greater or equal (signed >=) */

loc_00312BDC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00312BE3: ;
    edx = (uint32_t)(int32_t)SMEM8(ebx);
    ecx = (uint32_t)(int32_t)SMEM8(ebp);
    eax = 0; /* xor self */
    MEM32(esi + 0x50) = edx;
    edx = MEM32(edi);
    MEM32(esi + 0x54) = ecx;
    ecx = MEM32(esi + 0x3C);
    MEM32(esi + 0x58) = edx;
    edx = MEM32(esi + 0x40);
    MEM32(esi + 0x5C) = ecx;
    ecx = MEM32(esi + 0x44);
    POP32(esp, edi);
    MEM16(esi + 0x1C) = LO16(eax);
    MEM16(esi + 0x26) = LO16(eax);
    MEM16(esi + 0x24) = LO16(eax);
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x8C) = eax;
    MEM32(esi + 0x88) = eax;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x10);
    MEM32(esi + 0x60) = edx;
    MEM32(esi + 0x64) = ecx;
    MEM16(esi + 0x98) = 2;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00312C50
 * Original: 0x00312C50 - 0x00312D4F (255 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00312C50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00312C50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 1 (32-bit) */
    ebx = MEM32(esi + 0x48);
    if (CMP_NE(_fa, _fb)) goto loc_00312D21; /* jne: not equal / not zero */

loc_00312C63: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00312C6Cu); RECOMP_ABI_CALL(0x0030FED0u, sub_0030FED0); /* call 0x0030FED0 */

loc_00312C6C: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00312D21; /* jne: not equal / not zero */

loc_00312C77: ;
    edx = MEM32(esi + 0x7C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi + 0x70;
    PUSH32(esp, ecx);
    edi = esi + 0x6C;
    PUSH32(esp, edi);
    ebp = esi + 0x68;
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(esi + 0x78); PUSH32(esp, 0x00312C8Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00312C8C: ;
    ecx = MEM32(ebp);
    eax = MEM32(esi + 0x60);
    edi = MEM32(edi);
    eax = eax - ecx;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00312C9F; /* jle: less or equal (signed <=) */

loc_00312C9D: ;
    eax = edi;

loc_00312C9F: ;
    edx = MEM32(esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00312CA8; /* jle: less or equal (signed <=) */

loc_00312CA6: ;
    eax = edx;

loc_00312CA8: ;
    _fa = (uint32_t)(MEM8(esi + 0xE)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xE), 2 (8-bit) */
    edx = MEM32(esi + 0x5C);
    edi = edx + ecx * 2;
    if (CMP_NE(_fa, _fb)) goto loc_00312CEA; /* jne: not equal / not zero */

loc_00312CB4: ;
    ebp = MEM32(esi + 0x64);
    ebp = ebp + ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edx = edx + ebp * 2;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00312D03; /* jle: less or equal (signed <=) */

loc_00312CC2: ;
    edi = edi - edx;
    goto loc_00312CD0;

    /* nop */
    /* nop */

loc_00312CD0: ;
    SET_LO16(ebp, MEM16(ebx + ecx * 4));
    MEM16(edi + edx) = LO16(ebp);
    SET_LO16(ebp, MEM16(ebx + ecx * 4 + 2));
    MEM16(edx) = LO16(ebp);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00312CD0; /* jl: less (signed <) */

loc_00312CE8: ;
    goto loc_00312D03;

loc_00312CEA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00312D03; /* jle: less or equal (signed <=) */

loc_00312CEE: ;
    edx = ebx;
    ecx = edi;
    edx = edx - edi;
    edi = eax;

loc_00312CF6: ;
    SET_LO16(ebx, MEM16(edx + ecx));
    MEM16(ecx) = LO16(ebx);
    ecx = ecx + 2;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00312CF6; /* jne: not equal / not zero */

loc_00312D03: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xE);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    ecx = ecx << 1;
    POP32(esp, edi);
    MEM32(esi + 0x90) = eax;
    MEM32(esi + 0x94) = ecx;
    MEM32(esi + 4) = 2;
    POP32(esp, ebp);

loc_00312D21: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00312D4C; /* jne: not equal / not zero */

loc_00312D27: ;
    edx = MEM32(esi + 0x90);
    eax = MEM32(esi + 0x94);
    ecx = MEM32(esi + 0x84);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(esi + 0x80); PUSH32(esp, 0x00312D42u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00312D42: ;
    esp = esp + 0xC;
    MEM32(esi + 4) = 3;

loc_00312D4C: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00312D50
 * Original: 0x00312D50 - 0x00312D65 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00312D50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00312D50: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    eax = 0x42E3E4;
    _cf = (int)((uint32_t)(edx) < (uint32_t)(MEM32(eax)));
    edx = edx - MEM32(eax);
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00312D70
 * Original: 0x00312D70 - 0x00312F16 (422 bytes, 127 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00312D70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00312D70: ;
    esp = esp - 0x10;
    ecx = MEM32(esp + 0x20);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 2);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM16(ecx);
    MEM32(esp + 0x10) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00312EF6; /* jle: less or equal (signed <=) */

loc_00312D9E: ;
    ebx = MEM32(esp + 0x2C);
    goto loc_00312DA8;

loc_00312DA4: ;
    esi = MEM32(esp + 0x24);

loc_00312DA8: ;
    SET_LO16(ecx, MEM16(esi));
    eax = MEM32(esp + 0x3C);
    SET_LO16(edx, ZX8(HI8(ecx)));
    SET_HI8(edx, LO8(ecx));
    ebp = edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, 0x8000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00312F0A; /* jne: not equal / not zero */

loc_00312DC3: ;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax));
    MEM32(esp + 0x1C) = 0x10;
    edx = ecx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0x40));
    edx = edx ^ ebp;
    ecx = ecx + MEM32(esp + 0x44);
    ebp = (uint32_t)(int32_t)SMEM16(esp + 0x38);
    edx = edx & 0x1FFF;
    ecx = ecx & 0x7FFF;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(eax) = LO16(ecx);
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x34);
    ecx = SX16(LO16(edx));
    esi = esi + 2;
    MEM32(esp + 0x24) = esi;
    MEM32(esp + 0x18) = ecx;
    goto loc_00312E10;

loc_00312E07: ;
    esi = MEM32(esp + 0x24);
    goto loc_00312E10;

    /* nop */

loc_00312E10: ;
    edx = MEM32(esp + 0x24);
    esi = (uint32_t)(int32_t)SMEM8(esi);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x24) = edx;
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)edi);
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x14));
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((4) & 31u));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0x18));
    edx = edx + eax;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xC) & 31u));
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x7FFF (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00312E50; /* jg: greater (signed >) */

loc_00312E41: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00312E64; /* jge: greater or equal (signed >=) */

loc_00312E49: ;
    edx = 0xFFFF8000u;
    goto loc_00312E64;

loc_00312E50: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00312E5F; /* jge: greater or equal (signed >=) */

loc_00312E58: ;
    edx = 0xFFFF8000u;
    goto loc_00312E64;

loc_00312E5F: ;
    edx = 0x7FFF;

loc_00312E64: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x34);
    MEM16(ebx) = LO16(edx);
    MEM32(esp + 0x14) = edx;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    edx = ebp;
    edx = (uint32_t)((int32_t)edx * (int32_t)edi);
    ecx = ecx + edx;
    esi = esi & 0xF;
    edx = MEM32(esi * 4 + 0x42E3F0);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0x18));
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0xC) & 31u));
    ecx = ecx + edx;
    ebx = ebx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x7FFF (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00312EAA; /* jg: greater (signed >) */

loc_00312E9B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00312EBE; /* jge: greater or equal (signed >=) */

loc_00312EA3: ;
    ecx = 0xFFFF8000u;
    goto loc_00312EBE;

loc_00312EAA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00312EB9; /* jge: greater or equal (signed >=) */

loc_00312EB2: ;
    ecx = 0xFFFF8000u;
    goto loc_00312EBE;

loc_00312EB9: ;
    ecx = 0x7FFF;

loc_00312EBE: ;
    edx = MEM32(esp + 0x14);
    MEM16(ebx) = LO16(ecx);
    edi = ecx;
    ecx = MEM32(esp + 0x1C);
    ebx = ebx + 2;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x1C) = ecx;
    if ((_fa != 0)) goto loc_00312E07; /* jne: not equal / not zero */

loc_00312EDD: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x28);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00312DA4; /* jl: less (signed <) */

loc_00312EF2: ;
    ecx = MEM32(esp + 0x30);

loc_00312EF6: ;
    SET_LO16(edx, MEM16(esp + 0x14));
    MEM16(ecx) = LO16(edi);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM16(ecx + 2) = LO16(edx);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00312F0A: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00312F20
 * Original: 0x00312F20 - 0x0031327E (862 bytes, 255 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00312F20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00312F20: ;
    esp = esp - 0x24;
    ecx = MEM32(esp + 0x34);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 2);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x40);
    edx = (uint32_t)(int32_t)SMEM16(ebx);
    PUSH32(esp, ebp);
    ebp = (uint32_t)(int32_t)SMEM16(ecx);
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM16(ebx + 2);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 0x38);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x38);
    MEM32(esp + 0x38) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x18) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0031324C; /* jle: less or equal (signed <=) */

loc_00312F6A: ;
    SET_LO16(eax, MEM16(edi));
    ebx = MEM32(esp + 0x58);
    SET_LO16(ecx, ZX8(HI8(eax)));
    SET_HI8(ecx, LO8(eax));
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(HI8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), HI8(ecx) (8-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00313270; /* js: sign (negative) */

loc_00312F7F: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebx));
    esi = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x5C));
    esi = esi ^ ecx;
    eax = eax + MEM32(esp + 0x60);
    eax = eax & 0x7FFF;
    MEM16(ebx) = LO16(eax);
    SET_LO16(ecx, MEM16(edi + 0x12));
    SET_LO16(edx, ZX8(HI8(ecx)));
    esi = esi & 0x1FFF;
    SET_HI8(edx, LO8(ecx));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(HI8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), HI8(edx) (8-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00313270; /* js: sign (negative) */

loc_00312FB2: ;
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x5C));
    ecx = ecx ^ edx;
    eax = eax + MEM32(esp + 0x60);
    eax = eax & 0x7FFF;
    ecx = ecx & 0x1FFF;
    MEM16(ebx) = LO16(eax);
    ebx = (uint32_t)(int32_t)SMEM16(esp + 0x54);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = SX16(LO16(esi));
    ecx = SX16(LO16(ecx));
    MEM32(esp + 0x20) = eax;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x50);
    edi = edi + 2;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = 0x10;
    goto loc_00313000;

loc_00312FF3: ;
    eax = MEM32(esp + 0x1C);
    goto loc_00313000;

    /* nop */

loc_00313000: ;
    esi = (uint32_t)(int32_t)SMEM8(edi + 0x12);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(esp + 0x10));
    eax = (uint32_t)((int32_t)eax * (int32_t)ebp);
    ecx = (uint32_t)(int32_t)SMEM8(edi);
    edx = esi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((4) & 31u));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x2C) = edi;
    edi = ecx;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((4) & 31u));
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(esp + 0x20));
    eax = eax + ebx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xC) & 31u));
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0031303F; /* jg: greater (signed >) */

loc_00313031: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00313052; /* jge: greater or equal (signed >=) */

loc_00313038: ;
    eax = 0xFFFF8000u;
    goto loc_00313052;

loc_0031303F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0031304D; /* jge: greater or equal (signed >=) */

loc_00313046: ;
    eax = 0xFFFF8000u;
    goto loc_00313052;

loc_0031304D: ;
    eax = 0x7FFF;

loc_00313052: ;
    ebx = (uint32_t)(int32_t)SMEM16(esp + 0x54);
    edi = eax;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x50);
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x1C) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x38));
    ebp = ebx;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)MEM32(esp + 0x14));
    eax = eax + ebp;
    ebp = MEM32(esp + 0x24);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)edx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xC) & 31u));
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00313095; /* jg: greater (signed >) */

loc_00313087: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003130A8; /* jge: greater or equal (signed >=) */

loc_0031308E: ;
    eax = 0xFFFF8000u;
    goto loc_003130A8;

loc_00313095: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003130A3; /* jge: greater or equal (signed >=) */

loc_0031309C: ;
    eax = 0xFFFF8000u;
    goto loc_003130A8;

loc_003130A3: ;
    eax = 0x7FFF;

loc_003130A8: ;
    edx = MEM32(esp + 0x38);
    MEM32(esp + 0x14) = edx;
    edx = eax + edi;
    edx = (uint32_t)((int32_t)edx * (int32_t)7);
    MEM32(esp + 0x38) = eax;
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003130E0; /* jg: greater (signed >) */

loc_003130D2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003130F3; /* jge: greater or equal (signed >=) */

loc_003130D9: ;
    eax = 0xFFFF8000u;
    goto loc_003130F3;

loc_003130E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003130EE; /* jge: greater or equal (signed >=) */

loc_003130E7: ;
    eax = 0xFFFF8000u;
    goto loc_003130F3;

loc_003130EE: ;
    eax = 0x7FFF;

loc_003130F3: ;
    ebp = MEM32(esp + 0x48);
    edx = MEM32(esp + 0x40);
    MEM16(ebp) = LO16(eax);
    MEM16(edx) = LO16(eax);
    edx = edx + 2;
    ebp = ebp + 2;
    MEM32(esp + 0x40) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 0x48) = ebp;
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ebp = ebx;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)MEM32(esp + 0x10));
    ecx = ecx & 0xF;
    ecx = MEM32(ecx * 4 + 0x42E3F0);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0x20));
    eax = eax + ebp;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xC) & 31u));
    esi = esi & 0xF;
    esi = MEM32(esi * 4 + 0x42E3F0);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00313155; /* jg: greater (signed >) */

loc_00313147: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00313168; /* jge: greater or equal (signed >=) */

loc_0031314E: ;
    eax = 0xFFFF8000u;
    goto loc_00313168;

loc_00313155: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00313163; /* jge: greater or equal (signed >=) */

loc_0031315C: ;
    eax = 0xFFFF8000u;
    goto loc_00313168;

loc_00313163: ;
    eax = 0x7FFF;

loc_00313168: ;
    ecx = MEM32(esp + 0x38);
    ebp = eax;
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    edx = ebx;
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0x14));
    eax = eax + edx;
    edx = MEM32(esp + 0x24);
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xC) & 31u));
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_G(_fas, _fbs)) goto loc_003131A1; /* jg: greater (signed >) */

loc_00313193: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003131B4; /* jge: greater or equal (signed >=) */

loc_0031319A: ;
    eax = 0xFFFF8000u;
    goto loc_003131B4;

loc_003131A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003131AF; /* jge: greater or equal (signed >=) */

loc_003131A8: ;
    eax = 0xFFFF8000u;
    goto loc_003131B4;

loc_003131AF: ;
    eax = 0x7FFF;

loc_003131B4: ;
    esi = ecx;
    ecx = eax + ebp;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)7);
    MEM32(esp + 0x38) = eax;
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    MEM32(esp + 0x14) = esi;
    if (CMP_G(_fas, _fbs)) goto loc_003131EA; /* jg: greater (signed >) */

loc_003131DC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003131FD; /* jge: greater or equal (signed >=) */

loc_003131E3: ;
    eax = 0xFFFF8000u;
    goto loc_003131FD;

loc_003131EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003131F8; /* jge: greater or equal (signed >=) */

loc_003131F1: ;
    eax = 0xFFFF8000u;
    goto loc_003131FD;

loc_003131F8: ;
    eax = 0x7FFF;

loc_003131FD: ;
    edx = MEM32(esp + 0x48);
    ecx = MEM32(esp + 0x40);
    edi = MEM32(esp + 0x2C);
    MEM16(edx) = LO16(eax);
    MEM16(ecx) = LO16(eax);
    eax = MEM32(esp + 0x28);
    ecx = ecx + 2;
    edx = edx + 2;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x48) = edx;
    MEM32(esp + 0x28) = eax;
    if ((_fa != 0)) goto loc_00312FF3; /* jne: not equal / not zero */

loc_0031322C: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x30);
    edi = edi + 0x12;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00312F6A; /* jl: less (signed <) */

loc_00313244: ;
    ecx = MEM32(esp + 0x44);
    ebx = MEM32(esp + 0x4C);

loc_0031324C: ;
    SET_LO16(eax, MEM16(esp + 0x10));
    MEM16(ecx) = LO16(ebp);
    MEM16(ecx + 2) = LO16(eax);
    SET_LO16(ecx, MEM16(esp + 0x38));
    eax = MEM32(esp + 0x3C);
    POP32(esp, edi);
    MEM16(ebx + 2) = LO16(esi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM16(ebx) = LO16(ecx);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_00313270: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax + eax;
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_0031307E
 * Original: 0x0031307E - 0x0031327E (512 bytes, 154 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031307E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031307E: ;
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00313095; /* jg: greater (signed >) */

loc_00313087: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003130A8; /* jge: greater or equal (signed >=) */

loc_0031308E: ;
    eax = 0xFFFF8000u;
    goto loc_003130A8;

loc_00313095: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003130A3; /* jge: greater or equal (signed >=) */

loc_0031309C: ;
    eax = 0xFFFF8000u;
    goto loc_003130A8;

loc_003130A3: ;
    eax = 0x7FFF;

loc_003130A8: ;
    edx = MEM32(esp + 0x38);
    MEM32(esp + 0x14) = edx;
    edx = eax + edi;
    edx = (uint32_t)((int32_t)edx * (int32_t)7);
    MEM32(esp + 0x38) = eax;
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003130E0; /* jg: greater (signed >) */

loc_003130D2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003130F3; /* jge: greater or equal (signed >=) */

loc_003130D9: ;
    eax = 0xFFFF8000u;
    goto loc_003130F3;

loc_003130E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003130EE; /* jge: greater or equal (signed >=) */

loc_003130E7: ;
    eax = 0xFFFF8000u;
    goto loc_003130F3;

loc_003130EE: ;
    eax = 0x7FFF;

loc_003130F3: ;
    ebp = MEM32(esp + 0x48);
    edx = MEM32(esp + 0x40);
    MEM16(ebp) = LO16(eax);
    MEM16(edx) = LO16(eax);
    edx = edx + 2;
    ebp = ebp + 2;
    MEM32(esp + 0x40) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 0x48) = ebp;
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ebp = ebx;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)MEM32(esp + 0x10));
    ecx = ecx & 0xF;
    ecx = MEM32(ecx * 4 + 0x42E3F0);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0x20));
    eax = eax + ebp;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xC) & 31u));
    esi = esi & 0xF;
    esi = MEM32(esi * 4 + 0x42E3F0);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00313155; /* jg: greater (signed >) */

loc_00313147: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00313168; /* jge: greater or equal (signed >=) */

loc_0031314E: ;
    eax = 0xFFFF8000u;
    goto loc_00313168;

loc_00313155: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00313163; /* jge: greater or equal (signed >=) */

loc_0031315C: ;
    eax = 0xFFFF8000u;
    goto loc_00313168;

loc_00313163: ;
    eax = 0x7FFF;

loc_00313168: ;
    ecx = MEM32(esp + 0x38);
    ebp = eax;
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    edx = ebx;
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0x14));
    eax = eax + edx;
    edx = MEM32(esp + 0x24);
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xC) & 31u));
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_G(_fas, _fbs)) goto loc_003131A1; /* jg: greater (signed >) */

loc_00313193: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003131B4; /* jge: greater or equal (signed >=) */

loc_0031319A: ;
    eax = 0xFFFF8000u;
    goto loc_003131B4;

loc_003131A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003131AF; /* jge: greater or equal (signed >=) */

loc_003131A8: ;
    eax = 0xFFFF8000u;
    goto loc_003131B4;

loc_003131AF: ;
    eax = 0x7FFF;

loc_003131B4: ;
    esi = ecx;
    ecx = eax + ebp;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)7);
    MEM32(esp + 0x38) = eax;
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    MEM32(esp + 0x14) = esi;
    if (CMP_G(_fas, _fbs)) goto loc_003131EA; /* jg: greater (signed >) */

loc_003131DC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003131FD; /* jge: greater or equal (signed >=) */

loc_003131E3: ;
    eax = 0xFFFF8000u;
    goto loc_003131FD;

loc_003131EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003131F8; /* jge: greater or equal (signed >=) */

loc_003131F1: ;
    eax = 0xFFFF8000u;
    goto loc_003131FD;

loc_003131F8: ;
    eax = 0x7FFF;

loc_003131FD: ;
    edx = MEM32(esp + 0x48);
    ecx = MEM32(esp + 0x40);
    edi = MEM32(esp + 0x2C);
    MEM16(edx) = LO16(eax);
    MEM16(ecx) = LO16(eax);
    eax = MEM32(esp + 0x28);
    ecx = ecx + 2;
    edx = edx + 2;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x48) = edx;
    MEM32(esp + 0x28) = eax;
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_00312FF3(); return; } /* jne: not equal / not zero */

loc_0031322C: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x30);
    edi = edi + 0x12;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00312F6A(); return; } /* jl: less (signed <) */

loc_00313244: ;
    ecx = MEM32(esp + 0x44);
    ebx = MEM32(esp + 0x4C);
    SET_LO16(eax, MEM16(esp + 0x10));
    MEM16(ecx) = LO16(ebp);
    MEM16(ecx + 2) = LO16(eax);
    SET_LO16(ecx, MEM16(esp + 0x38));
    eax = MEM32(esp + 0x3C);
    POP32(esp, edi);
    MEM16(ebx + 2) = LO16(esi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM16(ebx) = LO16(ecx);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_00313280
 * Original: 0x00313280 - 0x0031356F (751 bytes, 217 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313280(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00313280: ;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x3C);
    eax = (uint32_t)(int32_t)SMEM16(ebx + 2);
    ecx = (uint32_t)(int32_t)SMEM16(ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x34);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x4C);
    edx = (uint32_t)(int32_t)SMEM16(esi);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 0x3C);
    MEM32(esp + 0x38) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM16(esi + 2);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x18) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0031353D; /* jle: less or equal (signed <=) */

loc_003132CE: ;
    SET_LO16(eax, MEM16(ebp));
    ebx = MEM32(esp + 0x5C);
    SET_LO16(ecx, ZX8(HI8(eax)));
    SET_HI8(ecx, LO8(eax));
    eax = ecx;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(HI8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), HI8(eax) (8-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00313561; /* js: sign (negative) */

loc_003132E6: ;
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(ebx));
    edi = edx;
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0x60));
    edi = edi ^ eax;
    edx = edx + MEM32(esp + 0x64);
    edx = edx & 0x7FFF;
    MEM16(ebx) = LO16(edx);
    SET_LO16(eax, MEM16(ebp + 0x12));
    SET_LO16(ecx, ZX8(HI8(eax)));
    SET_HI8(ecx, LO8(eax));
    edi = edi & 0x1FFF;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(HI8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), HI8(eax) (8-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00313561; /* js: sign (negative) */

loc_0031331C: ;
    esi = edx;
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0x60));
    esi = esi ^ eax;
    edx = edx + MEM32(esp + 0x64);
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x54);
    esi = esi & 0x1FFF;
    edx = edx & 0x7FFF;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(ebx) = LO16(edx);
    ebx = (uint32_t)(int32_t)SMEM16(esp + 0x58);
    ecx = SX16(LO16(esi));
    edx = SX16(LO16(edi));
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esp + 0x1C);
    ebp = ebp + 2;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x28) = 0x10;

loc_00313360: ;
    edi = (uint32_t)(int32_t)SMEM8(ebp + 0x12);
    esi = (uint32_t)(int32_t)SMEM8(ebp);
    edx = edi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((4) & 31u));
    MEM32(esp + 0x30) = edx;
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0x10));
    edx = edx + ecx;
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((4) & 31u));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0x20));
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xC) & 31u));
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x7FFF (32-bit) */
    MEM32(esp + 0x2C) = ebp;
    if (CMP_G(_fas, _fbs)) goto loc_003133AA; /* jg: greater (signed >) */

loc_0031339B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003133BE; /* jge: greater or equal (signed >=) */

loc_003133A3: ;
    edx = 0xFFFF8000u;
    goto loc_003133BE;

loc_003133AA: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003133B9; /* jge: greater or equal (signed >=) */

loc_003133B2: ;
    edx = 0xFFFF8000u;
    goto loc_003133BE;

loc_003133B9: ;
    edx = 0x7FFF;

loc_003133BE: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x10) = ecx;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0x3C));
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x14));
    ecx = ecx + eax;
    eax = MEM32(esp + 0x24);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x30));
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0xC) & 31u));
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x7FFF (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003133FB; /* jg: greater (signed >) */

loc_003133EC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0031340F; /* jge: greater or equal (signed >=) */

loc_003133F4: ;
    ecx = 0xFFFF8000u;
    goto loc_0031340F;

loc_003133FB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0031340A; /* jge: greater or equal (signed >=) */

loc_00313403: ;
    ecx = 0xFFFF8000u;
    goto loc_0031340F;

loc_0031340A: ;
    ecx = 0x7FFF;

loc_0031340F: ;
    eax = MEM32(esp + 0x3C);
    ebp = MEM32(esp + 0x44);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esp + 0x4C);
    MEM16(ebp) = LO16(edx);
    MEM16(eax) = LO16(ecx);
    MEM32(esp + 0x3C) = ecx;
    eax = eax + 2;
    edi = edi & 0xF;
    ecx = MEM32(edi * 4 + 0x42E3F0);
    MEM32(esp + 0x4C) = eax;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x54);
    MEM32(esp + 0x30) = ecx;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    edi = ebx;
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(esp + 0x10));
    esi = esi & 0xF;
    esi = MEM32(esi * 4 + 0x42E3F0);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(esp + 0x20));
    ecx = ecx + edi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0xC) & 31u));
    ecx = ecx + esi;
    ebp = ebp + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x7FFF (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00313480; /* jg: greater (signed >) */

loc_00313471: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00313494; /* jge: greater or equal (signed >=) */

loc_00313479: ;
    ecx = 0xFFFF8000u;
    goto loc_00313494;

loc_00313480: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0031348F; /* jge: greater or equal (signed >=) */

loc_00313488: ;
    ecx = 0xFFFF8000u;
    goto loc_00313494;

loc_0031348F: ;
    ecx = 0x7FFF;

loc_00313494: ;
    esi = MEM32(esp + 0x3C);
    MEM32(esp + 0x10) = edx;
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    edi = ebx;
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(esp + 0x14));
    edx = edx + edi;
    edi = MEM32(esp + 0x24);
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(esp + 0x30));
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xC) & 31u));
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x7FFF (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    if (CMP_G(_fas, _fbs)) goto loc_003134D3; /* jg: greater (signed >) */

loc_003134C4: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003134E7; /* jge: greater or equal (signed >=) */

loc_003134CC: ;
    edx = 0xFFFF8000u;
    goto loc_003134E7;

loc_003134D3: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003134E2; /* jge: greater or equal (signed >=) */

loc_003134DB: ;
    edx = 0xFFFF8000u;
    goto loc_003134E7;

loc_003134E2: ;
    edx = 0x7FFF;

loc_003134E7: ;
    edi = esi;
    esi = MEM32(esp + 0x4C);
    MEM16(ebp) = LO16(ecx);
    MEM16(esi) = LO16(edx);
    MEM32(esp + 0x3C) = edx;
    edx = MEM32(esp + 0x28);
    ebp = ebp + 2;
    esi = esi + 2;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x44) = ebp;
    ebp = MEM32(esp + 0x2C);
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x4C) = esi;
    MEM32(esp + 0x28) = edx;
    if ((_fa != 0)) goto loc_00313360; /* jne: not equal / not zero */

loc_0031351D: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x34);
    ebp = ebp + 0x12;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_003132CE; /* jl: less (signed <) */

loc_00313535: ;
    esi = MEM32(esp + 0x50);
    ebx = MEM32(esp + 0x48);

loc_0031353D: ;
    SET_LO16(edx, MEM16(esp + 0x10));
    SET_LO16(eax, MEM16(esp + 0x3C));
    MEM16(ebx) = LO16(ecx);
    MEM16(ebx + 2) = LO16(edx);
    MEM16(esi + 2) = LO16(edi);
    POP32(esp, edi);
    MEM16(esi) = LO16(eax);
    eax = MEM32(esp + 0x3C);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

loc_00313561: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax + eax;
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_00313570
 * Original: 0x00313570 - 0x00313583 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313570(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00313570: ;
    eax = MEM32(0x5BFA74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031357E; /* jne: not equal / not zero */

loc_00313579: ;
    g_seh_ebp = ebp; sub_00313280(); return; /* tail jmp 0x00313280 */

loc_0031357E: ;
    g_seh_ebp = ebp; sub_00312F20(); return; /* tail jmp 0x00312F20 */

}

/**
 * sub_00313590
 * Original: 0x00313590 - 0x00313596 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313590(void)
{

loc_00313590: ;
    eax = 0x6E6AC0;
    esp += 4; return; /* ret */

}

/**
 * sub_003135A0
 * Original: 0x003135A0 - 0x003135AC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003135A0(void)
{

loc_003135A0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003135AAu); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_003135AA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003135B0
 * Original: 0x003135B0 - 0x003135DA (42 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003135B0(void)
{

loc_003135B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x31D300);
    PUSH32(esp, 2);
    PUSH32(esp, 0x003135BEu); RECOMP_ABI_CALL(0x0031CD30u, sub_0031CD30); /* call 0x0031CD30 */

loc_003135BE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x31D4A0);
    PUSH32(esp, 0x003135CAu); RECOMP_ABI_CALL(0x0031CDC0u, sub_0031CDC0); /* call 0x0031CDC0 */

loc_003135CA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x31D4E0);
    PUSH32(esp, 0x003135D6u); RECOMP_ABI_CALL(0x0031CD80u, sub_0031CD80); /* call 0x0031CD80 */

loc_003135D6: ;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_003135E0
 * Original: 0x003135E0 - 0x00313649 (105 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003135E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003135E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003135E7u); RECOMP_ABI_CALL(0x00313590u, sub_00313590); /* call 0x00313590 */

loc_003135E7: ;
    esi = eax;
    eax = 0; /* xor self */
    ecx = 0x43A;
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, 0x003135FCu); RECOMP_ABI_CALL(0x0031D160u, sub_0031D160); /* call 0x0031D160 */

loc_003135FC: ;
    esp = esp + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    MEM32(esi + 0x58) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0031362B; /* je: equal / zero */

loc_00313606: ;
    eax = MEM32(ebx);
    MEM32(esi + 4) = eax;
    ecx = MEM32(ebx + 4);
    MEM32(esi + 8) = ecx;
    edx = MEM32(ebx + 8);
    MEM32(esi + 0xC) = edx;
    eax = MEM32(ebx + 0xC);
    MEM32(esi + 0x10) = eax;
    eax = 1;
    POP32(esp, edi);
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x3C) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031362B: ;
    eax = 1;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 4) = 0x426FC28F;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    POP32(esp, edi);
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x3C) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00313650
 * Original: 0x00313650 - 0x00313659 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313650(void)
{

loc_00313650: ;
    PUSH32(esp, 0x00313655u); RECOMP_ABI_CALL(0x00313590u, sub_00313590); /* call 0x00313590 */

loc_00313655: ;
    eax = MEM32(eax + 0x38);
    esp += 4; return; /* ret */

}

/**
 * sub_00313660
 * Original: 0x00313660 - 0x00313669 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313660(void)
{

loc_00313660: ;
    PUSH32(esp, 0x00313665u); RECOMP_ABI_CALL(0x00313590u, sub_00313590); /* call 0x00313590 */

loc_00313665: ;
    eax = MEM32(eax + 0x3C);
    esp += 4; return; /* ret */

}

/**
 * sub_00313670
 * Original: 0x00313670 - 0x00313690 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313670(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00313670: ;
    fp_push(MEMF(eax)); /* fld float */
    PUSH32(esp, 0x00313677u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00313677: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00313681u); RECOMP_ABI_CALL(0x00315640u, sub_00315640); /* call 0x00315640 */

loc_00313681: ;
    PUSH32(esp, 1);
    PUSH32(esp, 7);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0031368Cu); RECOMP_ABI_CALL(0x00315640u, sub_00315640); /* call 0x00315640 */

loc_0031368C: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00313690
 * Original: 0x00313690 - 0x0031369F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313690(void)
{

loc_00313690: ;
    PUSH32(esp, 0x00313695u); RECOMP_ABI_CALL(0x00313590u, sub_00313590); /* call 0x00313590 */

loc_00313695: ;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x64) = ecx;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003136A0
 * Original: 0x003136A0 - 0x003136A8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003136A0(void)
{

loc_003136A0: ;
    PUSH32(esp, 0x003136A5u); RECOMP_ABI_CALL(0x0031D5C0u, sub_0031D5C0); /* call 0x0031D5C0 */

loc_003136A5: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_003136B0
 * Original: 0x003136B0 - 0x00313761 (177 bytes, 51 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003136B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003136B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003136CF; /* je: equal / zero */

loc_003136B9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003136BFu); RECOMP_ABI_CALL(0x003158D0u, sub_003158D0); /* call 0x003158D0 */

loc_003136BF: ;
    esp = esp + 4;
    MEM32(0x6E6AA0) = esi;
    MEM32(0x6E7BA8) = eax;
    goto loc_003136E3;

loc_003136CF: ;
    MEM32(0x6E6AA0) = 0;
    MEM32(0x6E7BA8) = 0;

loc_003136E3: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00313705; /* je: equal / zero */

loc_003136EC: ;
    ecx = MEM32(0x5BFB4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xF (32-bit) */
    MEM32(ecx * 4 + 0x5BFB08) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00313705; /* jge: greater or equal (signed >=) */

loc_003136FE: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x5BFB4C) = ecx;

loc_00313705: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF000F1Cu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF000F1Cu (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00313730; /* jg: greater (signed >) */

loc_0031370C: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00313724; /* je: equal / zero */

loc_0031370E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF000F17u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF000F17u (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00313742; /* jl: less (signed <) */

loc_00313715: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF000F18u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF000F18u (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00313742; /* jg: greater (signed >) */

loc_0031371C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x42E544);
    goto loc_00313748;

loc_00313724: ;
    PUSH32(esp, 0xFF000F1Cu);
    PUSH32(esp, 0x42E4E8);
    goto loc_00313748;

loc_00313730: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFDu (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00313742; /* jl: less (signed <) */

loc_00313735: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00313742; /* jg: greater (signed >) */

loc_0031373A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x42E4D4);
    goto loc_00313748;

loc_00313742: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x42E4C4);

loc_00313748: ;
    PUSH32(esp, 0x5BFB50);
    PUSH32(esp, 0x00313752u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_00313752: ;
    esp = esp + 0xC;
    PUSH32(esp, 0x5BFB50);
    PUSH32(esp, 0x0031375Fu); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_0031375F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00313770
 * Original: 0x00313770 - 0x003137DE (110 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313770(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00313770: ;
    PUSH32(esp, 0x00313775u); RECOMP_ABI_CALL(0x00313590u, sub_00313590); /* call 0x00313590 */

loc_00313775: ;
    MEM32(0x5BFBD0) = MEM32(0x5BFBD0) - 1;
    _fa = (uint32_t)(MEM32(0x5BFBD0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003137DD; /* jne: not equal / not zero */

loc_0031377D: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax + 0x68;
    edi = 8;

loc_00313787: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00313796; /* jne: not equal / not zero */

loc_0031378D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00313793u); RECOMP_ABI_CALL(0x00314AF0u, sub_00314AF0); /* call 0x00314AF0 */

loc_00313793: ;
    esp = esp + 4;

loc_00313796: ;
    esi = esi + 0x210;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00313787; /* jne: not equal / not zero */

loc_0031379F: ;
    PUSH32(esp, 0x003137A4u); RECOMP_ABI_CALL(0x0031CD60u, sub_0031CD60); /* call 0x0031CD60 */

loc_003137A4: ;
    PUSH32(esp, 0x003137A9u); RECOMP_ABI_CALL(0x0031CDE0u, sub_0031CDE0); /* call 0x0031CDE0 */

loc_003137A9: ;
    PUSH32(esp, 0x003137AEu); RECOMP_ABI_CALL(0x0031CDA0u, sub_0031CDA0); /* call 0x0031CDA0 */

loc_003137AE: ;
    PUSH32(esp, 0x003137B3u); RECOMP_ABI_CALL(0x003162B0u, sub_003162B0); /* call 0x003162B0 */

loc_003137B3: ;
    PUSH32(esp, 0x003137B8u); RECOMP_ABI_CALL(0x00310470u, sub_00310470); /* call 0x00310470 */

loc_003137B8: ;
    PUSH32(esp, 0x003137BDu); RECOMP_ABI_CALL(0x003136A0u, sub_003136A0); /* call 0x003136A0 */

loc_003137BD: ;
    PUSH32(esp, 0x003137C2u); RECOMP_ABI_CALL(0x0030C100u, sub_0030C100); /* call 0x0030C100 */

loc_003137C2: ;
    PUSH32(esp, 0x003137C7u); RECOMP_ABI_CALL(0x002123A0u, sub_002123A0); /* call 0x002123A0 */

loc_003137C7: ;
    PUSH32(esp, 0x003137CCu); RECOMP_ABI_CALL(0x0030FFD0u, sub_0030FFD0); /* call 0x0030FFD0 */

loc_003137CC: ;
    PUSH32(esp, 0x003137D1u); RECOMP_ABI_CALL(0x0030F550u, sub_0030F550); /* call 0x0030F550 */

loc_003137D1: ;
    PUSH32(esp, 0x003137D6u); RECOMP_ABI_CALL(0x0030EF60u, sub_0030EF60); /* call 0x0030EF60 */

loc_003137D6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0031CD20(); return; /* tail jmp 0x0031CD20 */

loc_003137DD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003137E0
 * Original: 0x003137E0 - 0x00313872 (146 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003137E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003137E0: ;
    esp = esp - 8;
    ecx = MEM32(0x42E4BC);
    eax = MEM32(0x42E4B8);
    PUSH32(esp, 0x2F68);
    MEM32(esp + 8) = ecx;
    PUSH32(esp, 0x42E5AC);
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = edx;
    PUSH32(esp, 0x00313809u); RECOMP_ABI_CALL(0x0031D510u, sub_0031D510); /* call 0x0031D510 */

loc_00313809: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00313825; /* je: equal / zero */

loc_00313811: ;
    PUSH32(esp, 0x42E578);
    PUSH32(esp, 0x0031381Bu); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_0031381B: ;
    esp = esp + 4;
    eax = eax | 0xFFFFFFFFu;
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00313825: ;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031382Eu); RECOMP_ABI_CALL(0x0031D7A0u, sub_0031D7A0); /* call 0x0031D7A0 */

loc_0031382E: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00313846; /* je: equal / zero */

loc_00313835: ;
    PUSH32(esp, 0xFFFFFED3u);
    PUSH32(esp, 0x0031383Fu); RECOMP_ABI_CALL(0x00313690u, sub_00313690); /* call 0x00313690 */

loc_0031383F: ;
    esp = esp + 4;
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00313846: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3136B0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00313854u); RECOMP_ABI_CALL(0x0031D690u, sub_0031D690); /* call 0x0031D690 */

loc_00313854: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031386C; /* je: equal / zero */

loc_0031385B: ;
    PUSH32(esp, 0xFFFFFED1u);
    PUSH32(esp, 0x00313865u); RECOMP_ABI_CALL(0x00313690u, sub_00313690); /* call 0x00313690 */

loc_00313865: ;
    esp = esp + 4;
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0031386C: ;
    eax = 0; /* xor self */
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00313880
 * Original: 0x00313880 - 0x00313962 (226 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313880(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00313880: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00313897; /* jne: not equal / not zero */

loc_00313889: ;
    POP32(esp, ebx);
    MEM32(esp + 4) = 0x42E5FC;
    g_seh_ebp = ebp; sub_0031CE70(); return; /* tail jmp 0x0031CE70 */

loc_00313897: ;
    MEM32(0x5BFB48) = 0x42E430;
    PUSH32(esp, 0x003138A6u); RECOMP_ABI_CALL(0x0031CD00u, sub_0031CD00); /* call 0x0031CD00 */

loc_003138A6: ;
    MEM32(ebx + 8) = MEM32(ebx + 8) + 0xFFFFFFFEu;
    if (((int32_t)MEM32(ebx + 8) >= 0)) goto loc_003138B3; /* jns: not sign (positive) */

loc_003138AC: ;
    MEM32(ebx + 8) = 0;

loc_003138B3: ;
    eax = MEM32(0x5BFBD0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031395A; /* jne: not equal / not zero */

loc_003138C0: ;
    PUSH32(esp, 0x003138C5u); RECOMP_ABI_CALL(0x0030C190u, sub_0030C190); /* call 0x0030C190 */

loc_003138C5: ;
    PUSH32(esp, 0x003138CAu); RECOMP_ABI_CALL(0x0030EF30u, sub_0030EF30); /* call 0x0030EF30 */

loc_003138CA: ;
    PUSH32(esp, 0x003138CFu); RECOMP_ABI_CALL(0x0030F530u, sub_0030F530); /* call 0x0030F530 */

loc_003138CF: ;
    PUSH32(esp, 0x003138D4u); RECOMP_ABI_CALL(0x0030FFB0u, sub_0030FFB0); /* call 0x0030FFB0 */

loc_003138D4: ;
    PUSH32(esp, 0x003138D9u); RECOMP_ABI_CALL(0x002123A0u, sub_002123A0); /* call 0x002123A0 */

loc_003138D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003138F1; /* je: equal / zero */

loc_003138DD: ;
    PUSH32(esp, 0xFFFFFF9Bu);
    PUSH32(esp, 0x003138E4u); RECOMP_ABI_CALL(0x00313690u, sub_00313690); /* call 0x00313690 */

loc_003138E4: ;
    PUSH32(esp, 0x42E5D4);
    PUSH32(esp, 0x003138EEu); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_003138EE: ;
    esp = esp + 8;

loc_003138F1: ;
    PUSH32(esp, 0x003138F6u); RECOMP_ABI_CALL(0x003135E0u, sub_003135E0); /* call 0x003135E0 */

loc_003138F6: ;
    MEM32(0x6E6A2C) = 0;
    fp_push(MEMF(ebx)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CEA68); /* fmul dword ptr [0x3cea68] */
    fp_top() = fp_top() + MEMD(0x3DA0A0); /* fadd qword ptr [0x3da0a0] */
    PUSH32(esp, 0x00313913u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00313913: ;
    edx = eax;
    PUSH32(esp, 0x0031391Au); RECOMP_ABI_CALL(0x003137E0u, sub_003137E0); /* call 0x003137E0 */

loc_0031391A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031392B; /* je: equal / zero */

loc_0031391E: ;
    PUSH32(esp, 0x42E5B4);
    PUSH32(esp, 0x00313928u); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_00313928: ;
    esp = esp + 4;

loc_0031392B: ;
    eax = ebx;
    MEM32(0x5BFBD4) = 1;
    PUSH32(esp, 0x0031393Cu); RECOMP_ABI_CALL(0x00313670u, sub_00313670); /* call 0x00313670 */

loc_0031393C: ;
    PUSH32(esp, 0x00313941u); RECOMP_ABI_CALL(0x00310420u, sub_00310420); /* call 0x00310420 */

loc_00313941: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3135A0);
    PUSH32(esp, 0x0031394Du); RECOMP_ABI_CALL(0x003104C0u, sub_003104C0); /* call 0x003104C0 */

loc_0031394D: ;
    esp = esp + 8;
    PUSH32(esp, 0x00313955u); RECOMP_ABI_CALL(0x00316730u, sub_00316730); /* call 0x00316730 */

loc_00313955: ;
    PUSH32(esp, 0x0031395Au); RECOMP_ABI_CALL(0x003135B0u, sub_003135B0); /* call 0x003135B0 */

loc_0031395A: ;
    MEM32(0x5BFBD0) = MEM32(0x5BFBD0) + 1;
    _fa = (uint32_t)(MEM32(0x5BFBD0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00313970
 * Original: 0x00313970 - 0x00313A77 (263 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313970(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00313970: ;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    if (CMP_G(_fas & _fbs, 0)) goto loc_00313986; /* jg: greater (signed >) */

loc_00313981: ;
    ecx = 1;

loc_00313986: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003139D1; /* jne: not equal / not zero */

loc_0031398B: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    eax = eax + edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    eax = eax + edx;
    edx = MEM32(esp + 0xC);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = MEM32(esp + 8);
    eax = eax << 0xB;
    MEM32(ecx) = eax;
    MEM32(edx) = 0;
    MEM32(ebp) = 0;
    MEM32(ebx) = 0;
    MEM32(edi) = 0;
    MEM32(esi) = 0;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003139D1: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    if (CMP_NE(_fa, _fb)) goto loc_00313A27; /* jne: not equal / not zero */

loc_003139D7: ;
    edx = edx & 7;
    eax = eax + edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    eax = eax + edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    ecx = MEM32(esp + 8);
    edx = edx << 0xB;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(edx) = 0;
    eax = eax << 0xB;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = eax + 0x800;
    MEM32(ebp) = eax;
    MEM32(ebx) = 0;
    MEM32(edi) = 0;
    MEM32(esi) = 0;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00313A27: ;
    edx = edx & 7;
    eax = eax + edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    eax = eax + edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    ecx = MEM32(esp + 8);
    edx = edx << 0xB;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(edx) = 0;
    eax = eax << 0xB;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = eax + 0x800;
    MEM32(ebp) = eax;
    MEM32(ebx) = 0x5DCC;
    MEM32(edi) = 0x5F0C;
    MEM32(esi) = 0x81C0;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00313A80
 * Original: 0x00313A80 - 0x00313ABE (62 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313A80(void)
{

loc_00313A80: ;
    ecx = MEM32(eax + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = eax + 0x1F;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x1F;
    eax = eax + edx;
    edx = MEM32(esp + 0x10);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = eax << 5;
    MEM32(edx) = eax;
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    edx = MEM32(esp + 0x14);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    MEM32(edx) = eax;
    eax = MEM32(esp + 8);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00313AC0
 * Original: 0x00313AC0 - 0x00313AEB (43 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313AC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00313AC0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00313AD8; /* ja: above (unsigned >) */

loc_00313AC5: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x313AEC); /* switch: 4 entries, 3 targets */
    if (_jt == 0x00313ACCu) goto loc_00313ACC;
    if (_jt == 0x00313AD2u) goto loc_00313AD2;
    if (_jt == 0x00313AE5u) goto loc_00313AE5;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00313ACC: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00313AD2: ;
    eax = 2;
    esp += 4; return; /* ret */

loc_00313AD8: ;
    PUSH32(esp, 0x42E690);
    PUSH32(esp, 0x00313AE2u); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_00313AE2: ;
    esp = esp + 4;

loc_00313AE5: ;
    eax = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_00313B00
 * Original: 0x00313B00 - 0x00313B14 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313B00(void)
{

loc_00313B00: ;
    MEM32(eax) = 0x4000;
    MEM32(ecx) = 0x700;
    eax = MEM32(eax);
    eax = eax + 0x700;
    esp += 4; return; /* ret */

}

/**
 * sub_00313B20
 * Original: 0x00313B20 - 0x00313B26 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313B20(void)
{

loc_00313B20: ;
    eax = 0x100;
    esp += 4; return; /* ret */

}

/**
 * sub_00313B30
 * Original: 0x00313B30 - 0x00313B5E (46 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00313B30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 8);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00313B43u); RECOMP_ABI_CALL(0x003162C0u, sub_003162C0); /* call 0x003162C0 */

loc_00313B43: ;
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x00313B4Bu); RECOMP_ABI_CALL(0x00316500u, sub_00316500); /* call 0x00316500 */

loc_00313B4B: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    eax = edi + 0x20000;
    if (CMP_EQ(_fa, _fb)) goto loc_00313B5B; /* je: equal / zero */

loc_00313B59: ;
    eax = edi;

loc_00313B5B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00313B60
 * Original: 0x00313B60 - 0x00313C29 (201 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00313B60: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x128);
    esp = esp - 0x18;
    edx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x40);
    if (CMP_EQ(_fa, _fb)) goto loc_00313C24; /* je: equal / zero */

loc_00313B7B: ;
    PUSH32(esp, edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x14C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x14C) (32-bit) */
    MEM32(esp + 0xC) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00313BAA; /* jne: not equal / not zero */

loc_00313B88: ;
    ecx = MEM32(eax + 0x150);
    eax = MEM32(eax + 0x154);
    MEM32(esp + 8) = 1;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = edx;
    goto loc_00313BF6;

loc_00313BAA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x12C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x12C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00313BCE; /* jne: not equal / not zero */

loc_00313BB2: ;
    ecx = MEM32(eax + 0x130);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(eax + 0x134);
    eax = MEM32(eax + 0x138);
    MEM32(esp + 8) = edx;
    goto loc_00313BEE;

loc_00313BCE: ;
    ecx = MEM32(eax + 0x140);
    edi = MEM32(eax + 0x13C);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(eax + 0x144);
    eax = MEM32(eax + 0x148);
    MEM32(esp + 8) = edi;

loc_00313BEE: ;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = eax;

loc_00313BF6: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 0x24) = edx;
    PUSH32(esp, 0x00313C05u); RECOMP_ABI_CALL(0x0031E190u, sub_0031E190); /* call 0x0031E190 */

loc_00313C05: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00313C24; /* je: equal / zero */

loc_00313C0D: ;
    PUSH32(esp, 0xFFFFFEC8u);
    PUSH32(esp, 0x00313C17u); RECOMP_ABI_CALL(0x00313690u, sub_00313690); /* call 0x00313690 */

loc_00313C17: ;
    PUSH32(esp, 0x42E6B8);
    PUSH32(esp, 0x00313C21u); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_00313C21: ;
    esp = esp + 8;

loc_00313C24: ;
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00313C30
 * Original: 0x00313C30 - 0x00313C73 (67 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313C30(void)
{

loc_00313C30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    MEM32(eax + 0xD8) = edi;
    esi = ecx;
    ecx = eax + 0xBC;
    MEM32(eax + 0xDC) = edx;
    MEM32(eax + 0xE0) = 0;
    MEM32(eax + 0xE4) = 0;
    edi = edi + edx;
    MEM32(ecx) = edi;
    esi = esi - edx;
    MEM32(ecx + 4) = esi;
    POP32(esp, edi);
    MEM32(ecx + 8) = edx;
    MEM32(eax + 0xD4) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00313C80
 * Original: 0x00313C80 - 0x00313CE0 (96 bytes, 40 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313C80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00313C80: ;
    eax = MEM32(ebx + 0xD4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00313C98; /* jne: not equal / not zero */

loc_00313C8A: ;
    PUSH32(esp, 0x42E718);
    PUSH32(esp, 0x00313C94u); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_00313C94: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

loc_00313C98: ;
    ecx = MEM32(ebx + 0x1C);
    edx = MEM32(eax + 4);
    PUSH32(esp, ebp);
    ebp = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    PUSH32(esp, edi);
    edi = ecx + 3;
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00313CC3; /* jge: greater or equal (signed >=) */

loc_00313CB2: ;
    PUSH32(esp, 0x42E6DC);
    PUSH32(esp, 0x00313CBCu); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_00313CBC: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00313CC3: ;
    PUSH32(esp, 0x00313CC8u); RECOMP_ABI_CALL(0x00313650u, sub_00313650); /* call 0x00313650 */

loc_00313CC8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00313CDC; /* jne: not equal / not zero */

loc_00313CCD: ;
    edx = MEM32(ebx + 0x40);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00313CD9u); RECOMP_ABI_CALL(0x00319BF0u, sub_00319BF0); /* call 0x00319BF0 */

loc_00313CD9: ;
    esp = esp + 0x10;

loc_00313CDC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00313CE0
 * Original: 0x00313CE0 - 0x00313D0C (44 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313CE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00313CE0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00313CEAu); RECOMP_ABI_CALL(0x0031E950u, sub_0031E950); /* call 0x0031E950 */

loc_00313CEA: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00313D0B; /* je: equal / zero */

loc_00313CF1: ;
    PUSH32(esp, 0xFFFFFECEu);
    PUSH32(esp, 0x00313CFBu); RECOMP_ABI_CALL(0x00313690u, sub_00313690); /* call 0x00313690 */

loc_00313CFB: ;
    esp = esp + 4;
    MEM32(esp + 4) = 0x42E750;
    g_seh_ebp = ebp; sub_0031CE70(); return; /* tail jmp 0x0031CE70 */

loc_00313D0B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00313D10
 * Original: 0x00313D10 - 0x00313DD4 (196 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313D10(void)
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

loc_00313D10: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00313D23u); RECOMP_ABI_CALL(0x0031EDC0u, sub_0031EDC0); /* call 0x0031EDC0 */

loc_00313D23: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00313D2Du); RECOMP_ABI_CALL(0x0031EDC0u, sub_0031EDC0); /* call 0x0031EDC0 */

loc_00313D2D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00313D37u); RECOMP_ABI_CALL(0x0031EDC0u, sub_0031EDC0); /* call 0x0031EDC0 */

loc_00313D37: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x17);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00313D41u); RECOMP_ABI_CALL(0x0031EDC0u, sub_0031EDC0); /* call 0x0031EDC0 */

loc_00313D41: ;
    ecx = MEM32(esp + 0x44);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0x48));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3E8);
    MEM32(esp + 0x3C) = ecx;
    esp = esp + 0x30;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = fp_top() + MEMD(0x3DA0A0); /* fadd qword ptr [0x3da0a0] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    PUSH32(esp, 0x00313D68u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00313D68: ;
    edi = eax;
    MEM32(esp + 0xC) = edi;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00313D7E; /* jne: not equal / not zero */

loc_00313D7D: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00313D7E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x2D);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00313D87u); RECOMP_ABI_CALL(0x0031EDC0u, sub_0031EDC0); /* call 0x0031EDC0 */

loc_00313D87: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00313D90u); RECOMP_ABI_CALL(0x0031EDC0u, sub_0031EDC0); /* call 0x0031EDC0 */

loc_00313D90: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x2A);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00313D99u); RECOMP_ABI_CALL(0x0031EDC0u, sub_0031EDC0); /* call 0x0031EDC0 */

loc_00313D99: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xF);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00313DA3u); RECOMP_ABI_CALL(0x0031EDC0u, sub_0031EDC0); /* call 0x0031EDC0 */

loc_00313DA3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x33);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00313DADu); RECOMP_ABI_CALL(0x0031EDC0u, sub_0031EDC0); /* call 0x0031EDC0 */

loc_00313DAD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xE);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00313DB7u); RECOMP_ABI_CALL(0x0031EDC0u, sub_0031EDC0); /* call 0x0031EDC0 */

loc_00313DB7: ;
    esp = esp + 0x48;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00313DC4u); RECOMP_ABI_CALL(0x0031EDC0u, sub_0031EDC0); /* call 0x0031EDC0 */

loc_00313DC4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00313DCEu); RECOMP_ABI_CALL(0x003189B0u, sub_003189B0); /* call 0x003189B0 */

loc_00313DCE: ;
    esp = esp + 0x18;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00313DE0
 * Original: 0x00313DE0 - 0x00313E43 (99 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00313DE0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x40);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00313DEFu); RECOMP_ABI_CALL(0x0031EA10u, sub_0031EA10); /* call 0x0031EA10 */

loc_00313DEF: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00313E09; /* je: equal / zero */

loc_00313DF6: ;
    PUSH32(esp, 0x42E7A8);
    PUSH32(esp, 0x00313E00u); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_00313E00: ;
    esp = esp + 4;
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00313E09: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3136B0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00313E15u); RECOMP_ABI_CALL(0x0031D690u, sub_0031D690); /* call 0x0031D690 */

loc_00313E15: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00313E39; /* je: equal / zero */

loc_00313E1C: ;
    PUSH32(esp, 0xFFFFFED1u);
    PUSH32(esp, 0x00313E26u); RECOMP_ABI_CALL(0x00313690u, sub_00313690); /* call 0x00313690 */

loc_00313E26: ;
    PUSH32(esp, 0x42E770);
    PUSH32(esp, 0x00313E30u); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_00313E30: ;
    esp = esp + 8;
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00313E39: ;
    PUSH32(esp, 0x00313E3Eu); RECOMP_ABI_CALL(0x00313C80u, sub_00313C80); /* call 0x00313C80 */

loc_00313E3E: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00313E50
 * Original: 0x00313E50 - 0x00313E6E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313E50(void)
{

loc_00313E50: ;
    ecx = MEM32(eax + 0x138);
    edx = MEM32(eax + 0x134);
    eax = MEM32(eax + 0x130);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00313E6Au); RECOMP_ABI_CALL(0x0030F470u, sub_0030F470); /* call 0x0030F470 */

loc_00313E6A: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00313E70
 * Original: 0x00313E70 - 0x00313E9B (43 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00313E70: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00313E76u); RECOMP_ABI_CALL(0x00313590u, sub_00313590); /* call 0x00313590 */

loc_00313E76: ;
    edx = MEM32(esp + 8);
    esi = MEM32(edx + 0x18);
    ecx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    POP32(esp, esi);
    if (TEST_NZ(_fa, _fb)) goto loc_00313E9A; /* jne: not equal / not zero */

loc_00313E86: ;
    edx = MEM32(ecx + 0x28);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00313E90; /* jne: not equal / not zero */

loc_00313E8D: ;
    eax = eax | 0xFFFFFFFFu;

loc_00313E90: ;
    edx = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00313E9A; /* jne: not equal / not zero */

loc_00313E97: ;
    eax = eax | 0xFFFFFFFFu;

loc_00313E9A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00313EA0
 * Original: 0x00313EA0 - 0x00313F2A (138 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313EA0(void)
{

loc_00313EA0: ;
    edx = MEM32(ecx + 0x18);
    MEM32(eax + 0x158) = edx;
    edx = MEM32(ecx + 0x1C);
    MEM32(eax + 0x15C) = edx;
    ecx = MEM32(ecx + 0x18);
    MEM32(eax + 0x160) = ecx;
    eax = eax + 0x16C;
    edx = 0; /* xor self */
    ecx = 0; /* xor self */
    MEM32(eax + -8) = ecx;
    MEM32(eax + -4) = ecx;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = edx;
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x24) = edx;
    MEM32(eax + 0x28) = edx;
    MEM32(eax + 0x2C) = edx;
    MEM32(eax + 0x30) = edx;
    MEM32(eax + 0x34) = edx;
    MEM32(eax + 0x38) = edx;
    MEM32(eax + 0x3C) = edx;
    MEM32(eax + 0x40) = edx;
    MEM32(eax + 0x44) = edx;
    MEM32(eax + 0x48) = edx;
    MEM32(eax + 0x4C) = edx;
    MEM32(eax + 0x50) = edx;
    MEM32(eax + 0x54) = edx;
    MEM32(eax + 0x58) = edx;
    MEM32(eax + 0x5C) = edx;
    MEM32(eax + 0x60) = edx;
    MEM32(eax + 0x64) = edx;
    MEM32(eax + 0x68) = edx;
    MEM32(eax + 0x6C) = edx;
    MEM32(eax + 0x70) = edx;
    MEM32(eax + 0x74) = edx;
    MEM32(eax + 0x78) = edx;
    MEM32(eax + 0x7C) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00313F30
 * Original: 0x00313F30 - 0x00313F51 (33 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00313F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00313F30: ;
    ecx = MEM32(ecx + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    eax = 1;
    if (TEST_Z(_fa, _fb)) goto loc_00313F50; /* je: equal / zero */

loc_00313F3C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00313F50; /* je: equal / zero */

loc_00313F41: ;
    PUSH32(esp, 0x42E7DC);
    PUSH32(esp, 0x00313F4Bu); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_00313F4B: ;
    esp = esp + 4;
    eax = 0; /* xor self */

loc_00313F50: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00313F60
 * Original: 0x00313F60 - 0x00313F8C (44 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00313F60: ;
    edx = MEM32(ecx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00313F7D; /* jne: not equal / not zero */

loc_00313F69: ;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00313F8B; /* je: equal / zero */

loc_00313F70: ;
    edx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00313F8B; /* jne: not equal / not zero */

loc_00313F77: ;
    eax = 2;
    esp += 4; return; /* ret */

loc_00313F7D: ;
    edx = MEM32(ecx + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    eax = eax + eax + 1;

loc_00313F8B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00313F90
 * Original: 0x00313F90 - 0x00313FAD (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00313F90: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00313F9A; /* jne: not equal / not zero */

loc_00313F97: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00313F9A: ;
    ecx = MEM32(eax + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(eax + 8));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x65400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x65400 (32-bit) */
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    esp += 4; return; /* ret */

}

/**
 * sub_00313FB0
 * Original: 0x00313FB0 - 0x00313FCB (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313FB0(void)
{

loc_00313FB0: ;
    PUSH32(esp, 0x00313FB5u); RECOMP_ABI_CALL(0x00313590u, sub_00313590); /* call 0x00313590 */

loc_00313FB5: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(eax + 0x28) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0x2C) = edx;
    MEM32(eax + 0x30) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00313FD0
 * Original: 0x00313FD0 - 0x00313FFE (46 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00313FD0: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(ecx + 0x164);
    edx = eax + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x15C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x15C) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00313FE8; /* jbe: below or equal (unsigned <=) */

loc_00313FE4: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00313FE8: ;
    eax = MEM32(ecx + 0x160);
    esi = esi + eax;
    MEM32(ecx + 0x160) = esi;
    MEM32(ecx + 0x164) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00314000
 * Original: 0x00314000 - 0x00314015 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00314000(void)
{

loc_00314000: ;
    PUSH32(esp, 0x00314005u); RECOMP_ABI_CALL(0x00313590u, sub_00313590); /* call 0x00313590 */

loc_00314005: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(eax + 0x30);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00314011u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00314011: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00314020
 * Original: 0x00314020 - 0x00314035 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00314020(void)
{

loc_00314020: ;
    PUSH32(esp, 0x00314025u); RECOMP_ABI_CALL(0x00313590u, sub_00313590); /* call 0x00313590 */

loc_00314025: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(eax + 0x30);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x00314031u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00314031: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00314040
 * Original: 0x00314040 - 0x00314047 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00314040(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00314040: ;
    MEM32(eax + 0x168) = MEM32(eax + 0x168) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x168)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00314050
 * Original: 0x00314050 - 0x00314057 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00314050(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00314050: ;
    MEM32(eax + 0x168) = MEM32(eax + 0x168) - 1;
    _fa = (uint32_t)(MEM32(eax + 0x168)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00314060
 * Original: 0x00314060 - 0x00314067 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00314060(void)
{

loc_00314060: ;
    eax = MEM32(eax + 0x168);
    esp += 4; return; /* ret */

}

/**
 * sub_00314070
 * Original: 0x00314070 - 0x0031413B (203 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00314070(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00314070: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x6E6A40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00314094; /* je: equal / zero */

loc_0031407F: ;
    eax = MEM32(esp + 0x18);
    MEM32(eax) = 0;
    MEM32(ebx) = 0;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00314094: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x10);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    eax = esi;
    PUSH32(esp, 0x003140B4u); RECOMP_ABI_CALL(0x00313A80u, sub_00313A80); /* call 0x00313A80 */

loc_003140B4: ;
    eax = MEM32(esi + 0x24);
    esp = esp + 0x10;
    PUSH32(esp, 0x003140BFu); RECOMP_ABI_CALL(0x00313AC0u, sub_00313AC0); /* call 0x00313AC0 */

loc_003140BF: ;
    eax = MEM32(esp + 0xC);
    eax = eax + 0xF;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0xF;
    eax = eax + edx;
    ecx = eax;
    eax = MEM32(esp + 0x10);
    eax = eax + 0xF;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0xF;
    eax = eax + edx;
    esi = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((4) & 31u));
    ecx = ecx << 4;
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = eax + 0x1F;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x1F;
    eax = eax + edx;
    ebp = eax;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    eax = esi;
    eax = eax << 4;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((5) & 31u));
    ebp = (uint32_t)((int32_t)ebp * (int32_t)eax);
    eax = ecx + 0x1F;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x1F;
    eax = eax + edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    ecx = MEM32(esp + 0x20);
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    eax = ebp + eax * 8;
    edx = eax;
    eax = eax << 6;
    edx = edx << 7;
    edx = edx + 0x40;
    eax = eax + 0x20;
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(ecx) = edx;
    MEM32(ebx) = eax;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00314140
 * Original: 0x00314140 - 0x003141D3 (147 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00314140(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00314140: ;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    esi = esp + 0x38;
    edi = esp + 0x34;
    ebx = esp + 0x30;
    ecx = ebp;
    PUSH32(esp, 0x0031416Du); RECOMP_ABI_CALL(0x00313970u, sub_00313970); /* call 0x00313970 */

loc_0031416D: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ebx = esp + 0x24;
    eax = ebp;
    PUSH32(esp, 0x0031417Du); RECOMP_ABI_CALL(0x00314070u, sub_00314070); /* call 0x00314070 */

loc_0031417D: ;
    esp = esp + 0x10;
    ecx = esp + 0x30;
    eax = esp + 0x34;
    PUSH32(esp, 0x0031418Du); RECOMP_ABI_CALL(0x00313B00u, sub_00313B00); /* call 0x00313B00 */

loc_0031418D: ;
    ecx = eax;
    PUSH32(esp, 0x00314194u); RECOMP_ABI_CALL(0x00313B20u, sub_00313B20); /* call 0x00313B20 */

loc_00314194: ;
    esi = MEM32(esp + 0x10);
    ebp = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x24);
    ecx = ecx + esi;
    esi = MEM32(esp + 0x20);
    eax = eax + ecx;
    ecx = MEM32(esp + 0x28);
    eax = eax + ebp;
    eax = eax + ebx;
    eax = eax + edi;
    eax = eax + esi;
    POP32(esp, edi);
    eax = eax + edx;
    edx = MEM32(esp + 0x28);
    POP32(esp, esi);
    eax = eax + ecx;
    POP32(esp, ebp);
    eax = eax + edx + 0x860;
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_003141E0
 * Original: 0x003141E0 - 0x00314211 (49 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003141E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003141E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003141FA; /* jne: not equal / not zero */

loc_003141E9: ;
    PUSH32(esp, 0x42E800);
    PUSH32(esp, 0x003141F3u); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_003141F3: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003141FA: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00314201u); RECOMP_ABI_CALL(0x00314140u, sub_00314140); /* call 0x00314140 */

loc_00314201: ;
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x00314209u); RECOMP_ABI_CALL(0x00313B30u, sub_00313B30); /* call 0x00313B30 */

loc_00314209: ;
    esp = esp + 8;
    eax = eax + edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00314220
 * Original: 0x00314220 - 0x00314332 (274 bytes, 91 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00314220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00314220: ;
    esp = esp - 0x64;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x70);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031431F; /* je: equal / zero */

loc_00314231: ;
    ebx = MEM32(esp + 0x78);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031431F; /* je: equal / zero */

loc_0031423D: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x78);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_0031425A; /* jg: greater (signed >) */

loc_00314246: ;
    PUSH32(esp, 0x42E858);
    PUSH32(esp, 0x00314250u); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_00314250: ;
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0x64;
    esp += 4; return; /* ret */

loc_0031425A: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = eax;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x38) = eax;
    PUSH32(esp, 0x0031428Cu); RECOMP_ABI_CALL(0x0031F520u, sub_0031F520); /* call 0x0031F520 */

loc_0031428C: ;
    SET_LO8(eax, MEM8(esp + 0x3C));
    esp = esp + 0xC;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00314305; /* je: equal / zero */

loc_00314297: ;
    SET_LO8(eax, MEM8(esp + 0x31));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00314305; /* je: equal / zero */

loc_0031429F: ;
    ecx = esp + 0x30;
    PUSH32(esp, 0x003142A8u); RECOMP_ABI_CALL(0x00313F60u, sub_00313F60); /* call 0x00313F60 */

loc_003142A8: ;
    ecx = MEM32(esp + 0x50);
    edx = MEM32(esp + 0x44);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x48);
    MEM32(esp + 0x1C) = ecx;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = eax;
    eax = (uint32_t)(int32_t)SMEM8(esp + 0x5C);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esp + 0x60);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x003142E1u); RECOMP_ABI_CALL(0x003160E0u, sub_003160E0); /* call 0x003160E0 */

loc_003142E1: ;
    esp = esp + 0xC;
    eax = esp + 0xC;
    PUSH32(esp, 0x003142EDu); RECOMP_ABI_CALL(0x00313F90u, sub_00313F90); /* call 0x00313F90 */

loc_003142ED: ;
    edi = ebx;
    ecx = 9;
    esi = esp + 0xC;
    MEM32(esp + 0xC) = eax;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0x64;
    esp += 4; return; /* ret */

loc_00314305: ;
    edi = ebx;
    ecx = 9;
    esi = esp + 0xC;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    POP32(esp, esi);
    POP32(esp, edi);
    MEM32(ebx) = 0;
    POP32(esp, ebx);
    esp = esp + 0x64;
    esp += 4; return; /* ret */

loc_0031431F: ;
    PUSH32(esp, 0x42E830);
    PUSH32(esp, 0x00314329u); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_00314329: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0x64;
    esp += 4; return; /* ret */

}

/**
 * sub_00314340
 * Original: 0x00314340 - 0x003143A1 (97 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00314340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00314340: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + 0x168)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x168), 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031435F; /* jl: less (signed <) */

loc_0031434E: ;
    PUSH32(esp, 0x42E884);
    PUSH32(esp, 0x00314358u); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_00314358: ;
    esp = esp + 4;

loc_0031435B: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031435F: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0031435B; /* jl: less (signed <) */

loc_00314367: ;
    ecx = MEM32(esi + 0x158);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031437A; /* je: equal / zero */

loc_00314371: ;
    ecx = esi;
    PUSH32(esp, 0x00314378u); RECOMP_ABI_CALL(0x00313FD0u, sub_00313FD0); /* call 0x00313FD0 */

loc_00314378: ;
    goto loc_00314383;

loc_0031437A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00314380u); RECOMP_ABI_CALL(0x00314000u, sub_00314000); /* call 0x00314000 */

loc_00314380: ;
    esp = esp + 4;

loc_00314383: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031439D; /* je: equal / zero */

loc_00314389: ;
    eax = MEM32(esi + 0x168);
    MEM32(esi + eax * 4 + 0x16C) = ecx;
    eax = esi;
    PUSH32(esp, 0x0031439Du); RECOMP_ABI_CALL(0x00314040u, sub_00314040); /* call 0x00314040 */

loc_0031439D: ;
    eax = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003143B0
 * Original: 0x003143B0 - 0x003143D4 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003143B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003143B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x158);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003143CC; /* jne: not equal / not zero */

loc_003143BF: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003143C9u); RECOMP_ABI_CALL(0x00314020u, sub_00314020); /* call 0x00314020 */

loc_003143C9: ;
    esp = esp + 4;

loc_003143CC: ;
    eax = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00314050(); return; /* tail jmp 0x00314050 */

}

/**
 * sub_003143E0
 * Original: 0x003143E0 - 0x0031440F (47 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003143E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003143E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = edi + 0x1E8;
    ebx = 0x20;
    /* nop */

loc_003143F0: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00314406; /* je: equal / zero */

loc_003143F6: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003143FDu); RECOMP_ABI_CALL(0x003143B0u, sub_003143B0); /* call 0x003143B0 */

loc_003143FD: ;
    esp = esp + 8;
    MEM32(esi) = 0;

loc_00314406: ;
    esi = esi - 4;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003143F0; /* jne: not equal / not zero */

loc_0031440C: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00314410
 * Original: 0x00314410 - 0x003144E5 (213 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00314410(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00314410: ;
    ecx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    eax = ecx + 0xF;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0xF;
    eax = eax + edx;
    ecx = eax;
    eax = esi + 0xF;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0xF;
    eax = eax + edx;
    esi = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((4) & 31u));
    ecx = ecx << 4;
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = eax + 0x1F;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x1F;
    eax = eax + edx;
    ebp = eax;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    eax = esi;
    eax = eax << 4;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((5) & 31u));
    ebp = (uint32_t)((int32_t)ebp * (int32_t)eax);
    eax = ecx + 0x1F;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x1F;
    eax = eax + edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    esi = ebp + eax * 8;
    eax = MEM32(0x6E6A40);
    esi = esi << 6;
    ebx = 0; /* xor self */
    esi = esi + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003144B2; /* je: equal / zero */

loc_0031447E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031449E; /* jl: less (signed <) */

loc_00314483: ;
    eax = MEM32(0x6E6A44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031449E; /* jl: less (signed <) */

loc_0031448C: ;
    eax = MEM32(0x6E6A60);
    MEM32(edi) = eax;
    ecx = MEM32(0x6E6A64);
    MEM32(edi + 4) = ecx;
    goto loc_003144CC;

loc_0031449E: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edi) = 0;
    MEM32(edi + 4) = 0;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003144B2: ;
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x003144BDu); RECOMP_ABI_CALL(0x00314340u, sub_00314340); /* call 0x00314340 */

loc_003144BD: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    MEM32(edi) = eax;
    PUSH32(esp, 0x003144C6u); RECOMP_ABI_CALL(0x00314340u, sub_00314340); /* call 0x00314340 */

loc_003144C6: ;
    esp = esp + 0x10;
    MEM32(edi + 4) = eax;

loc_003144CC: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003144D8; /* je: equal / zero */

loc_003144D1: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003144DF; /* jne: not equal / not zero */

loc_003144D8: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003144DF: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003144F0
 * Original: 0x003144F0 - 0x003145ED (253 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003144F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003144F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    eax = MEM32(eax + 0x24);
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00314512u); RECOMP_ABI_CALL(0x00313AC0u, sub_00313AC0); /* call 0x00313AC0 */

loc_00314512: ;
    eax = esi + 0xF;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0xF;
    eax = eax + edx;
    ecx = eax;
    eax = edi + 0xF;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0xF;
    eax = eax + edx;
    esi = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((4) & 31u));
    ecx = ecx << 4;
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = eax + 0x1F;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x1F;
    eax = eax + edx;
    edi = eax;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    eax = esi;
    eax = eax << 4;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((5) & 31u));
    edi = (uint32_t)((int32_t)edi * (int32_t)eax);
    eax = ecx + 0x1F;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x1F;
    eax = eax + edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    esi = edi + eax * 8;
    eax = MEM32(0x6E6A40);
    esi = esi << 6;
    esi = esi + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003145BA; /* je: equal / zero */

loc_00314574: ;
    ecx = ebx + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003145B1; /* jl: less (signed <) */

loc_0031457B: ;
    _fa = (uint32_t)(MEM32(0x6E6A44)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6E6A44), esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003145B1; /* jl: less (signed <) */

loc_00314583: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_003145E3; /* jle: less or equal (signed <=) */

loc_00314587: ;
    edx = 0x6E6A68;
    eax = ebp;
    edx = edx - ebp;

loc_00314590: ;
    ecx = MEM32(edx + eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(eax) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_003145A1; /* jne: not equal / not zero */

loc_00314599: ;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;

loc_003145A1: ;
    eax = eax + 4;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00314590; /* jne: not equal / not zero */

loc_003145A7: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003145B1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003145BA: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_003145E3; /* jle: less or equal (signed <=) */

loc_003145C0: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003145CBu); RECOMP_ABI_CALL(0x00314340u, sub_00314340); /* call 0x00314340 */

loc_003145CB: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(ebp + edi * 4) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_003145DE; /* jne: not equal / not zero */

loc_003145D6: ;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;

loc_003145DE: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003145C0; /* jl: less (signed <) */

loc_003145E3: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003145F0
 * Original: 0x003145F0 - 0x00314A35 (1093 bytes, 302 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003145F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003145F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0xCC;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ecx);
    edx = MEM32(ecx + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5BFBE0);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(ecx + 8);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(ecx + 0xC);
    PUSH32(esp, 0x5BFBEC);
    PUSH32(esp, 0x5BFBD8);
    esi = 0x5BFBF8;
    edi = 0x5BFBF4;
    ebx = 0x5BFBDC;
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x4C) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00314640u); RECOMP_ABI_CALL(0x00313970u, sub_00313970); /* call 0x00313970 */

loc_00314640: ;
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, 0x5BFBF0);
    ebx = 0x5BFBE4;
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00314654u); RECOMP_ABI_CALL(0x00314070u, sub_00314070); /* call 0x00314070 */

loc_00314654: ;
    ecx = esp + 0x1C;
    eax = esp + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00314661u); RECOMP_ABI_CALL(0x00313B00u, sub_00313B00); /* call 0x00313B00 */

loc_00314661: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00314666u); RECOMP_ABI_CALL(0x00313B20u, sub_00313B20); /* call 0x00313B20 */

loc_00314666: ;
    ecx = MEM32(0x5BFBEC);
    edx = MEM32(0x5BFBDC);
    ebx = MEM32(ebp + 8);
    MEM32(esp + 0x48) = eax;
    eax = MEM32(0x5BFBE0);
    ecx = ecx + eax;
    eax = ecx + edx + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031468Bu); RECOMP_ABI_CALL(0x00314340u, sub_00314340); /* call 0x00314340 */

loc_0031468B: ;
    MEM32(esp + 0x34) = eax;
    eax = MEM32(0x5BFBD8);
    eax = eax + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031469Eu); RECOMP_ABI_CALL(0x00314340u, sub_00314340); /* call 0x00314340 */

loc_0031469E: ;
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, ebx);
    edi = esp + 0x6C;
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003146AEu); RECOMP_ABI_CALL(0x00314410u, sub_00314410); /* call 0x00314410 */

loc_003146AE: ;
    ecx = esp + 0xBC;
    PUSH32(esp, ecx);
    MEM32(esp + 0x40) = eax;
    PUSH32(esp, ebx);
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003146C2u); RECOMP_ABI_CALL(0x003144F0u, sub_003144F0); /* call 0x003144F0 */

loc_003146C2: ;
    edx = MEM32(0x5BFBF4);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    MEM32(esp + 0x48) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003146D3u); RECOMP_ABI_CALL(0x00314340u, sub_00314340); /* call 0x00314340 */

loc_003146D3: ;
    edi = eax;
    eax = MEM32(0x5BFBF8);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003146E1u); RECOMP_ABI_CALL(0x00314340u, sub_00314340); /* call 0x00314340 */

loc_003146E1: ;
    PUSH32(esp, 0x800);
    PUSH32(esp, ebx);
    MEM32(esp + 0x78) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003146F0u); RECOMP_ABI_CALL(0x00314340u, sub_00314340); /* call 0x00314340 */

loc_003146F0: ;
    ecx = MEM32(esp + 0x64);
    esp = esp + 0x44;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    MEM32(esp + 0x34) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00314702u); RECOMP_ABI_CALL(0x00314340u, sub_00314340); /* call 0x00314340 */

loc_00314702: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    MEM32(esp + 0x40) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00314711u); RECOMP_ABI_CALL(0x00314340u, sub_00314340); /* call 0x00314340 */

loc_00314711: ;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esp + 0x48);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00314720u); RECOMP_ABI_CALL(0x00314340u, sub_00314340); /* call 0x00314340 */

loc_00314720: ;
    ecx = MEM32(esp + 0x34);
    esp = esp + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x44) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00314A18; /* je: equal / zero */

loc_00314733: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00314A18; /* je: equal / zero */

loc_0031473F: ;
    edx = MEM32(esp + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00314A18; /* jne: not equal / not zero */

loc_0031474B: ;
    edx = MEM32(esp + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00314A18; /* jne: not equal / not zero */

loc_00314757: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00314A18; /* je: equal / zero */

loc_0031475F: ;
    edx = MEM32(esp + 0x34);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00314A18; /* je: equal / zero */

loc_0031476B: ;
    edx = MEM32(esp + 0x2C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00314A18; /* je: equal / zero */

loc_00314777: ;
    edx = MEM32(esp + 0x30);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00314A18; /* je: equal / zero */

loc_00314783: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00314A18; /* je: equal / zero */

loc_0031478B: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00314A18; /* je: equal / zero */

loc_00314797: ;
    eax = ecx + 0x3F;
    eax = eax & 0xFFFFFFC0u;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    MEM32(0x5BFBE8) = eax;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003147BDu); RECOMP_ABI_CALL(0x00313A80u, sub_00313A80); /* call 0x00313A80 */

loc_003147BD: ;
    eax = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x1C);
    MEM32(0x476E08) = eax;
    eax = MEM32(esp + 0x20);
    MEM32(0x476E04) = edx;
    edx = 0; /* xor self */
    MEM32(0x476E0C) = eax;
    MEM32(0x476E18) = eax;
    eax = MEM32(esp + 0x34);
    MEM32(0x476E10) = ecx;
    MEM32(0x476E14) = edx;
    MEM32(0x476E1C) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(0x476E24) = edx;
    edx = MEM32(esp + 0x44);
    esp = esp + 0x10;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x476E20) = ecx;
    MEM32(0x476E30) = edi;
    MEM32(0x476E40) = edx;
    if ((_fa == 0)) goto loc_00314887; /* je: equal / zero */

loc_00314820: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00314859; /* je: equal / zero */

loc_00314823: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003148C2; /* jne: not equal / not zero */

loc_0031482A: ;
    eax = MEM32(0x5BFBE8);
    ecx = 0x11;
    esi = 0x476DC0;
    edi = esp + 0x50;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    MEM32(ebx + 0x130) = eax;
    ecx = MEM32(0x5BFBD8);
    ecx = ecx + 0xFFFFF800u;
    MEM32(ebx + 0x134) = ecx;
    goto loc_003148B5;

loc_00314859: ;
    edx = MEM32(0x5BFBE8);
    MEM32(ebx + 0x130) = edx;
    eax = MEM32(0x5BFBD8);
    ecx = 0x11;
    esi = 0x476D78;
    edi = esp + 0x50;
    eax = eax + 0xFFFFF800u;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    MEM32(ebx + 0x134) = eax;
    goto loc_003148B5;

loc_00314887: ;
    ecx = 0x11;
    esi = 0x476D30;
    edi = esp + 0x50;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = MEM32(0x5BFBE8);
    MEM32(ebx + 0x130) = ecx;
    edx = MEM32(0x5BFBD8);
    edx = edx + 0xFFFFF800u;
    MEM32(ebx + 0x134) = edx;

loc_003148B5: ;
    esi = MEM32(ebp + 0xC);
    MEM32(ebx + 0x138) = 0x800;

loc_003148C2: ;
    ecx = MEM32(0x5BFBEC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    edi = MEM32(0x476E44);
    MEM32(esp + 0x78) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_003148E3; /* je: equal / zero */

loc_003148D6: ;
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    ecx = ecx - edx;
    MEM32(0x5BFBEC) = ecx;

loc_003148E3: ;
    eax = MEM32(esi + 0x24);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003148EBu); RECOMP_ABI_CALL(0x00313AC0u, sub_00313AC0); /* call 0x00313AC0 */

loc_003148EB: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(0x5BFBEC);
    MEM32(esp + 0x54) = ecx;
    ecx = MEM32(0x5BFBE0);
    MEM32(esp + 0x58) = edx;
    edx = MEM32(0x5BFBDC);
    MEM32(esp + 0x5C) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(esp + 0x60) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(esp + 0x7C) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(esp + 0x80) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(esp + 0x84) = ecx;
    ecx = esp + 0x98;
    MEM32(esp + 0x8C) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x4C;
    MEM32(esp + 0x8C) = eax;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, 0x476E04);
    MEM32(esp + 0x9C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00314963u); RECOMP_ABI_CALL(0x003188A0u, sub_003188A0); /* call 0x003188A0 */

loc_00314963: ;
    eax = MEM32(esp + 0x30);
    esp = esp + 0xC;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0031497A; /* jne: not equal / not zero */

loc_0031496D: ;
    PUSH32(esp, 0x476E28);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00314977u); RECOMP_ABI_CALL(0x00317710u, sub_00317710); /* call 0x00317710 */

loc_00314977: ;
    esp = esp + 4;

loc_0031497A: ;
    eax = esp + 0x50;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00314986u); RECOMP_ABI_CALL(0x0031E880u, sub_0031E880); /* call 0x0031E880 */

loc_00314986: ;
    esi = eax;
    esp = esp + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003149AF; /* jne: not equal / not zero */

loc_0031498F: ;
    PUSH32(esp, 0xFFFFFECFu);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00314999u); RECOMP_ABI_CALL(0x00313690u, sub_00313690); /* call 0x00313690 */

loc_00314999: ;
    PUSH32(esp, 0x42E8EC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003149A3u); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_003149A3: ;
    esp = esp + 8;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003149AF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3136B0);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003149BBu); RECOMP_ABI_CALL(0x0031D690u, sub_0031D690); /* call 0x0031D690 */

loc_003149BB: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003149E2; /* je: equal / zero */

loc_003149C2: ;
    PUSH32(esp, 0xFFFFFED1u);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003149CCu); RECOMP_ABI_CALL(0x00313690u, sub_00313690); /* call 0x00313690 */

loc_003149CC: ;
    PUSH32(esp, 0x42E8C4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003149D6u); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_003149D6: ;
    esp = esp + 8;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003149E2: ;
    ecx = MEM32(esp + 0x44);
    edx = MEM32(esp + 0x38);
    eax = MEM32(esp + 0x2C);
    MEM32(ebx + 0x110) = ecx;
    MEM32(ebx + 0x114) = edx;
    PUSH32(esp, eax);
    edx = 0x40;
    ecx = 0x800;
    eax = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00314A0Cu); RECOMP_ABI_CALL(0x00313C30u, sub_00313C30); /* call 0x00313C30 */

loc_00314A0C: ;
    esp = esp + 4;
    eax = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00314A18: ;
    PUSH32(esp, 0x42E8A8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00314A22u); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_00314A22: ;
    esp = esp + 4;
    edi = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00314A2Cu); RECOMP_ABI_CALL(0x003143E0u, sub_003143E0); /* call 0x003143E0 */

loc_00314A2C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00314A40
 * Original: 0x00314A40 - 0x00314AE1 (161 bytes, 55 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00314A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00314A40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0x18);
    ecx = MEM32(edi + 0x14);
    esi = edi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00314A55u); RECOMP_ABI_CALL(0x003162C0u, sub_003162C0); /* call 0x003162C0 */

loc_00314A55: ;
    ebx = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00314A5Eu); RECOMP_ABI_CALL(0x00314340u, sub_00314340); /* call 0x00314340 */

loc_00314A5E: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00314A6C; /* jne: not equal / not zero */

loc_00314A65: ;
    PUSH32(esp, 0x42E940);
    goto loc_00314A9D;

loc_00314A6C: ;
    PUSH32(esp, esi);
    MEM32(edi + 0xAC) = eax;
    MEM32(edi + 0xB0) = ebx;
    PUSH32(esp, 0x00314A7Eu); RECOMP_ABI_CALL(0x00316500u, sub_00316500); /* call 0x00316500 */

loc_00314A7E: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00314AC7; /* jne: not equal / not zero */

loc_00314A86: ;
    PUSH32(esp, 0x20000);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00314A91u); RECOMP_ABI_CALL(0x00314340u, sub_00314340); /* call 0x00314340 */

loc_00314A91: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00314AB1; /* jne: not equal / not zero */

loc_00314A98: ;
    PUSH32(esp, 0x42E918);

loc_00314A9D: ;
    PUSH32(esp, 0x00314AA2u); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_00314AA2: ;
    esp = esp + 4;
    PUSH32(esp, 0x00314AAAu); RECOMP_ABI_CALL(0x003143E0u, sub_003143E0); /* call 0x003143E0 */

loc_00314AAA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00314AB1: ;
    MEM32(edi + 0xEC) = eax;
    MEM32(edi + 0xF0) = 0x20000;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00314AC7: ;
    MEM32(edi + 0xEC) = 0;
    MEM32(edi + 0xF0) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00314AF0
 * Original: 0x00314AF0 - 0x00314BC2 (210 bytes, 71 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00314AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00314AF0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00314BC0; /* je: equal / zero */

loc_00314AFD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00314B03u); RECOMP_ABI_CALL(0x003151C0u, sub_003151C0); /* call 0x003151C0 */

loc_00314B03: ;
    PUSH32(esp, esi);
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x00314B10u); RECOMP_ABI_CALL(0x00316570u, sub_00316570); /* call 0x00316570 */

loc_00314B10: ;
    eax = MEM32(esi + 0xA8);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00314B26; /* je: equal / zero */

loc_00314B1D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00314B23u); RECOMP_ABI_CALL(0x003162F0u, sub_003162F0); /* call 0x003162F0 */

loc_00314B23: ;
    esp = esp + 4;

loc_00314B26: ;
    eax = MEM32(esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00314B36; /* je: equal / zero */

loc_00314B2D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00314B33u); RECOMP_ABI_CALL(0x0030DC40u, sub_0030DC40); /* call 0x0030DC40 */

loc_00314B33: ;
    esp = esp + 4;

loc_00314B36: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00314B46; /* je: equal / zero */

loc_00314B3D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00314B43u); RECOMP_ABI_CALL(0x0031D820u, sub_0031D820); /* call 0x0031D820 */

loc_00314B43: ;
    esp = esp + 4;

loc_00314B46: ;
    eax = MEM32(esi + 0x12C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00314B59; /* je: equal / zero */

loc_00314B50: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0xC); PUSH32(esp, 0x00314B56u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00314B56: ;
    esp = esp + 4;

loc_00314B59: ;
    eax = MEM32(esi + 0x14C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00314B6C; /* je: equal / zero */

loc_00314B63: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00314B69u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00314B69: ;
    esp = esp + 4;

loc_00314B6C: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00314B7C; /* je: equal / zero */

loc_00314B73: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00314B79u); RECOMP_ABI_CALL(0x00313CE0u, sub_00313CE0); /* call 0x00313CE0 */

loc_00314B79: ;
    esp = esp + 4;

loc_00314B7C: ;
    eax = esi + 0x1EC;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00314B89u); RECOMP_ABI_CALL(0x00317090u, sub_00317090); /* call 0x00317090 */

loc_00314B89: ;
    esp = esp + 4;
    edi = esi;
    PUSH32(esp, 0x00314B93u); RECOMP_ABI_CALL(0x003143E0u, sub_003143E0); /* call 0x003143E0 */

loc_00314B93: ;
    eax = esi;
    PUSH32(esp, 0x00314B9Au); RECOMP_ABI_CALL(0x00314060u, sub_00314060); /* call 0x00314060 */

loc_00314B9A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00314BAB; /* je: equal / zero */

loc_00314B9E: ;
    PUSH32(esp, 0x42E964);
    PUSH32(esp, 0x00314BA8u); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_00314BA8: ;
    esp = esp + 4;

loc_00314BAB: ;
    eax = 0; /* xor self */
    ecx = 0x84;
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x476CE8;
    POP32(esp, edi);

loc_00314BC0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00314BD0
 * Original: 0x00314BD0 - 0x00314E70 (672 bytes, 235 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00314BD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00314BD0: ;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x28);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00314BF0; /* jne: not equal / not zero */

loc_00314BDC: ;
    PUSH32(esp, 0x42EA94);
    PUSH32(esp, 0x00314BE6u); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_00314BE6: ;
    esp = esp + 4;

loc_00314BE9: ;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

loc_00314BF0: ;
    ecx = ebx;
    PUSH32(esp, 0x00314BF7u); RECOMP_ABI_CALL(0x00313F30u, sub_00313F30); /* call 0x00313F30 */

loc_00314BF7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00314BE9; /* jne: not equal / not zero */

loc_00314BFC: ;
    PUSH32(esp, 0x00314C01u); RECOMP_ABI_CALL(0x00313590u, sub_00313590); /* call 0x00313590 */

loc_00314C01: ;
    MEM32(esp + 4) = eax;
    ecx = 0; /* xor self */
    eax = eax + 0x68;
    PUSH32(esp, ebp);
    goto loc_00314C10;

    /* nop */

loc_00314C10: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    ebp = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00314C24; /* je: equal / zero */

loc_00314C19: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 0x210;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00314C10; /* jl: less (signed <) */

loc_00314C24: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00314C45; /* jne: not equal / not zero */

loc_00314C29: ;
    PUSH32(esp, 0xFFFFFFF5u);
    PUSH32(esp, 0x00314C30u); RECOMP_ABI_CALL(0x00313690u, sub_00313690); /* call 0x00313690 */

loc_00314C30: ;
    PUSH32(esp, 0x42EA68);
    PUSH32(esp, 0x00314C3Au); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_00314C3A: ;
    esp = esp + 8;
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

loc_00314C45: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00314C4Bu); RECOMP_ABI_CALL(0x00313E70u, sub_00313E70); /* call 0x00313E70 */

loc_00314C4B: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00314C68; /* jne: not equal / not zero */

loc_00314C53: ;
    PUSH32(esp, 0x42EA2C);
    PUSH32(esp, 0x00314C5Du); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_00314C5D: ;
    esp = esp + 4;
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

loc_00314C68: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0x84;
    edi = ebp;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebx;
    eax = ebp;
    PUSH32(esp, 0x00314C7Eu); RECOMP_ABI_CALL(0x00313EA0u, sub_00313EA0); /* call 0x00313EA0 */

loc_00314C7E: ;
    PUSH32(esp, ebx);
    edi = ebp + 0xC;
    ecx = 0xC;
    esi = ebx;
    PUSH32(esp, ebp);
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    PUSH32(esp, 0x00314C91u); RECOMP_ABI_CALL(0x003145F0u, sub_003145F0); /* call 0x003145F0 */

loc_00314C91: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x18) = eax;
    MEM32(ebp + 0x40) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_00314CA9; /* jne: not equal / not zero */

loc_00314C9F: ;
    PUSH32(esp, 0x42EA08);
    goto loc_00314E42;

loc_00314CA9: ;
    ebx = ebp;
    PUSH32(esp, 0x00314CB0u); RECOMP_ABI_CALL(0x00313C80u, sub_00313C80); /* call 0x00313C80 */

loc_00314CB0: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x3C);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    esi = esp + 0x30;
    edi = esp + 0x34;
    ebx = esp + 0x38;
    PUSH32(esp, 0x00314CD4u); RECOMP_ABI_CALL(0x00313970u, sub_00313970); /* call 0x00313970 */

loc_00314CD4: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(eax + 8);
    edi = MEM32(esp + 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00314CEBu); RECOMP_ABI_CALL(0x00313D10u, sub_00313D10); /* call 0x00313D10 */

loc_00314CEB: ;
    esp = esp + 0x1C;
    eax = ebp;
    PUSH32(esp, 0x00314CF5u); RECOMP_ABI_CALL(0x00313E50u, sub_00313E50); /* call 0x00313E50 */

loc_00314CF5: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 0x12C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00314D0B; /* jne: not equal / not zero */

loc_00314D01: ;
    PUSH32(esp, 0x42E9E4);
    goto loc_00314E42;

loc_00314D0B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00314D12u); RECOMP_ABI_CALL(0x0030F810u, sub_0030F810); /* call 0x0030F810 */

loc_00314D12: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 0x14C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00314D29; /* jne: not equal / not zero */

loc_00314D1F: ;
    PUSH32(esp, 0x42E9C0);
    goto loc_00314E42;

loc_00314D29: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    esi = ebp + 0x48;
    PUSH32(esp, esi);
    MEM32(ebp) = 0x476CE8;
    MEM32(ebp + 0x58) = eax;
    MEM32(ebp + 0x3C) = 1;
    MEM32(ebp + 0x68) = ebx;
    MEM32(ebp + 8) = ebx;
    ecx = MEM32(edi + 0x20);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    MEM32(ebp + 0x50) = ecx;
    PUSH32(esp, 0x00314D5Au); RECOMP_ABI_CALL(0x0031ED50u, sub_0031ED50); /* call 0x0031ED50 */

loc_00314D5A: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00314D63; /* je: equal / zero */

loc_00314D61: ;
    MEM32(esi) = ebx;

loc_00314D63: ;
    PUSH32(esp, ebx);
    esi = 1;
    PUSH32(esp, ebp);
    MEM32(ebp + 0x6C) = esi;
    MEM8(ebp + 0x70) = LO8(ebx);
    MEM8(ebp + 0x71) = LO8(ebx);
    MEM8(ebp + 0x72) = LO8(ebx);
    MEM8(ebp + 0x73) = LO8(ebx);
    MEM32(ebp + 0x5C) = ebx;
    PUSH32(esp, 0x00314D81u); RECOMP_ABI_CALL(0x0031D170u, sub_0031D170); /* call 0x0031D170 */

loc_00314D81: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00314D88u); RECOMP_ABI_CALL(0x0031D190u, sub_0031D190); /* call 0x0031D190 */

loc_00314D88: ;
    eax = MEM32(ebp + 0x12C);
    PUSH32(esp, eax);
    MEM32(ebp + 0x54) = esi;
    MEM32(ebp + 0x84) = ebx;
    PUSH32(esp, 0x00314D9Du); RECOMP_ABI_CALL(0x0031D810u, sub_0031D810); /* call 0x0031D810 */

loc_00314D9D: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 0x44) = eax;
    PUSH32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_00314DD9; /* je: equal / zero */

loc_00314DA8: ;
    PUSH32(esp, 0x00314DADu); RECOMP_ABI_CALL(0x00315340u, sub_00315340); /* call 0x00315340 */

loc_00314DAD: ;
    ecx = MEM32(ebp + 0x12C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00314DB9u); RECOMP_ABI_CALL(0x0030D900u, sub_0030D900); /* call 0x0030D900 */

loc_00314DB9: ;
    edx = MEM32(ebp + 0x44);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(ebp + 0x4C) = eax;
    MEM32(ebp + 0x74) = ebx;
    PUSH32(esp, 0x00314DC9u); RECOMP_ABI_CALL(0x0030D9D0u, sub_0030D9D0); /* call 0x0030D9D0 */

loc_00314DC9: ;
    esp = esp + 0x10;
    eax = ebp;
    PUSH32(esp, 0x00314DD3u); RECOMP_ABI_CALL(0x00314A40u, sub_00314A40); /* call 0x00314A40 */

loc_00314DD3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00314DEB; /* jne: not equal / not zero */

loc_00314DD8: ;
    PUSH32(esp, ebp);

loc_00314DD9: ;
    PUSH32(esp, 0x00314DDEu); RECOMP_ABI_CALL(0x00314AF0u, sub_00314AF0); /* call 0x00314AF0 */

loc_00314DDE: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

loc_00314DEB: ;
    eax = MEM32(edi + 0xC);
    ecx = MEM32(edi + 8);
    edx = MEM32(ebp + 0xB0);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xAC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00314E06u); RECOMP_ABI_CALL(0x003162E0u, sub_003162E0); /* call 0x003162E0 */

loc_00314E06: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00314E14; /* jne: not equal / not zero */

loc_00314E0D: ;
    PUSH32(esp, 0x42E9A4);
    goto loc_00314E42;

loc_00314E14: ;
    ecx = MEM32(ebp + 0x2C);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    MEM32(ebp + 0xA8) = eax;
    PUSH32(esp, 0x00314E24u); RECOMP_ABI_CALL(0x00316450u, sub_00316450); /* call 0x00316450 */

loc_00314E24: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00314E2Au); RECOMP_ABI_CALL(0x00316520u, sub_00316520); /* call 0x00316520 */

loc_00314E2A: ;
    PUSH32(esp, ebp);
    MEM32(ebp + 0xE8) = eax;
    PUSH32(esp, 0x00314E36u); RECOMP_ABI_CALL(0x00316590u, sub_00316590); /* call 0x00316590 */

loc_00314E36: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00314E5A; /* je: equal / zero */

loc_00314E3D: ;
    PUSH32(esp, 0x42E97C);

loc_00314E42: ;
    PUSH32(esp, 0x00314E47u); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_00314E47: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00314E4Du); RECOMP_ABI_CALL(0x00314AF0u, sub_00314AF0); /* call 0x00314AF0 */

loc_00314E4D: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

loc_00314E5A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00314E60u); RECOMP_ABI_CALL(0x003165D0u, sub_003165D0); /* call 0x003165D0 */

loc_00314E60: ;
    esp = esp + 4;
    POP32(esp, edi);
    MEM32(ebp + 4) = esi;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_00314E70
 * Original: 0x00314E70 - 0x00314E9F (47 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00314E70(void)
{

loc_00314E70: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x476E48);
    PUSH32(esp, 0x00314E7Bu); RECOMP_ABI_CALL(0x00316D00u, sub_00316D00); /* call 0x00316D00 */

loc_00314E7B: ;
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00314E85u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00314E85: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00314E9Au); RECOMP_ABI_CALL(0x00316F20u, sub_00316F20); /* call 0x00316F20 */

loc_00314E9A: ;
    esp = esp + 0x18;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00314EA0
 * Original: 0x00314EA0 - 0x00314EB2 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00314EA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00314EA0: ;
    eax = MEM32(esp + 4);
    eax = eax + 0x1EC;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00317090(); return; /* tail jmp 0x00317090 */

}

/**
 * sub_00314EC0
 * Original: 0x00314EC0 - 0x00314EC5 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00314EC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00314EC0: ;
    g_seh_ebp = ebp; sub_0033E320(); return; /* tail jmp 0x0033E320 */

}

/**
 * sub_00314ED0
 * Original: 0x00314ED0 - 0x00314ED5 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00314ED0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00314ED0: ;
    g_seh_ebp = ebp; sub_0033E4F0(); return; /* tail jmp 0x0033E4F0 */

}

/**
 * sub_00314EE0
 * Original: 0x00314EE0 - 0x00314F0A (42 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00314EE0(void)
{

loc_00314EE0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax) = 0x6952C;
    MEM32(ecx) = 0x13C68;
    MEM32(edx) = 0x2000;
    eax = MEM32(eax);
    ecx = MEM32(ecx);
    eax = eax + ecx + 0x2000;
    esp += 4; return; /* ret */

}

/**
 * sub_00314F10
 * Original: 0x00314F10 - 0x00314F33 (35 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00314F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00314F10: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    PUSH32(esp, 0x00314F23u); RECOMP_ABI_CALL(0x0033E770u, sub_0033E770); /* call 0x0033E770 */

loc_00314F23: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00314F32; /* jne: not equal / not zero */

loc_00314F2A: ;
    /* nop */

loc_00314F30: ;
    goto loc_00314F30;

loc_00314F32: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00314F40
 * Original: 0x00314F40 - 0x00314F45 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00314F40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00314F40: ;
    g_seh_ebp = ebp; sub_0033E3A0(); return; /* tail jmp 0x0033E3A0 */

}

/**
 * sub_00314F50
 * Original: 0x00314F50 - 0x00314FF4 (164 bytes, 58 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00314F50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00314F50: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(ebx + 2));
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = 1;
    esi = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    SET_LO8(eax, MEM8(ebx + 3));
    ebp = SX8(LO8(eax));
    if (CMP_LE(_fas, _fbs)) goto loc_00314F89; /* jle: less or equal (signed <=) */

loc_00314F6E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00314F77; /* jl: less (signed <) */

loc_00314F72: ;
    ebp = 3;

loc_00314F77: ;
    MEM32(esp + 0x10) = 6;
    MEM32(esp + 0xC) = 2;
    goto loc_00314F9A;

loc_00314F89: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00314F92; /* jl: less (signed <) */

loc_00314F8D: ;
    ebp = 6;

loc_00314F92: ;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0xC) = ecx;

loc_00314F9A: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00314FDF; /* jle: less or equal (signed <=) */

loc_00314F9E: ;
    PUSH32(esp, edi);
    edi = ebx + 0xC;
    ebx = ebx + 0x1EC;

loc_00314FA8: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00314FB6; /* jne: not equal / not zero */

loc_00314FAF: ;
    MEM32(ebx + 4) = esi;
    MEM32(ebx) = esi;
    goto loc_00314FBC;

loc_00314FB6: ;
    MEM32(edi + 0x1E0) = esi;

loc_00314FBC: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(edi);
    ecx = esi + eax;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00314FCCu); RECOMP_ABI_CALL(0x0033E880u, sub_0033E880); /* call 0x0033E880 */

loc_00314FCC: ;
    esp = esp + 8;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 4;
    ebx = ebx + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00314FA8; /* jl: less (signed <) */

loc_00314FDA: ;
    ebx = MEM32(esp + 0x1C);
    POP32(esp, edi);

loc_00314FDF: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00314FEAu); RECOMP_ABI_CALL(0x0033E490u, sub_0033E490); /* call 0x0033E490 */

loc_00314FEA: ;
    esp = esp + 8;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00315000
 * Original: 0x00315000 - 0x00315005 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315000(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00315000: ;
    g_seh_ebp = ebp; sub_0033E1E0(); return; /* tail jmp 0x0033E1E0 */

}

/**
 * sub_00315010
 * Original: 0x00315010 - 0x00315044 (52 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315010(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00315010: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031501Au); RECOMP_ABI_CALL(0x0033DB30u, sub_0033DB30); /* call 0x0033DB30 */

loc_0031501A: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0031503E; /* ja: above (unsigned >) */

loc_00315022: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x315044); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00315029u) goto loc_00315029;
    if (_jt == 0x0031502Cu) goto loc_0031502C;
    if (_jt == 0x00315032u) goto loc_00315032;
    if (_jt == 0x00315038u) goto loc_00315038;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00315029: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0031502C: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00315032: ;
    eax = 2;
    esp += 4; return; /* ret */

loc_00315038: ;
    eax = 3;
    esp += 4; return; /* ret */

loc_0031503E: ;
    eax = 4;
    esp += 4; return; /* ret */

}

/**
 * sub_00315060
 * Original: 0x00315060 - 0x00315070 (16 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315060(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00315060: ;
    g_seh_ebp = ebp; sub_0033E280(); return; /* tail jmp 0x0033E280 */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00315070
 * Original: 0x00315070 - 0x0031509B (43 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315070: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    esi = 0; /* xor self */
    /* nop */

loc_00315080: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00315087u); RECOMP_ABI_CALL(0x0033DB50u, sub_0033DB50); /* call 0x0033DB50 */

loc_00315087: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031508Eu); RECOMP_ABI_CALL(0x00305EC0u, sub_00305EC0); /* call 0x00305EC0 */

loc_0031508E: ;
    esp = esp + 0x10;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00315080; /* jl: less (signed <) */

loc_00315097: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003150A0
 * Original: 0x003150A0 - 0x003150C4 (36 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003150A0(void)
{

loc_003150A0: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003150B7u); RECOMP_ABI_CALL(0x00314E70u, sub_00314E70); /* call 0x00314E70 */

loc_003150B7: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003150BFu); RECOMP_ABI_CALL(0x00315890u, sub_00315890); /* call 0x00315890 */

loc_003150BF: ;
    esp = esp + 0x18;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003150D0
 * Original: 0x003150D0 - 0x003150E8 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003150D0(void)
{

loc_003150D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003150DBu); RECOMP_ABI_CALL(0x00314EA0u, sub_00314EA0); /* call 0x00314EA0 */

loc_003150DB: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003150E3u); RECOMP_ABI_CALL(0x00315890u, sub_00315890); /* call 0x00315890 */

loc_003150E3: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003150F0
 * Original: 0x003150F0 - 0x00315124 (52 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003150F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003150F0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003150FDu); RECOMP_ABI_CALL(0x0031F650u, sub_0031F650); /* call 0x0031F650 */

loc_003150FD: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00315121; /* je: equal / zero */

loc_00315104: ;
    PUSH32(esp, 0xFFFFFEC9u);
    PUSH32(esp, 0x0031510Eu); RECOMP_ABI_CALL(0x00313690u, sub_00313690); /* call 0x00313690 */

loc_0031510E: ;
    PUSH32(esp, 0x42EAC0);
    PUSH32(esp, 0x00315118u); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_00315118: ;
    esp = esp + 8;
    eax = 0xFFFFFEC9u;
    esp += 4; return; /* ret */

loc_00315121: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00315130
 * Original: 0x00315130 - 0x00315164 (52 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00315130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315130: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031513Du); RECOMP_ABI_CALL(0x0031E580u, sub_0031E580); /* call 0x0031E580 */

loc_0031513D: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00315161; /* je: equal / zero */

loc_00315144: ;
    PUSH32(esp, 0xFFFFFECDu);
    PUSH32(esp, 0x0031514Eu); RECOMP_ABI_CALL(0x00313690u, sub_00313690); /* call 0x00313690 */

loc_0031514E: ;
    PUSH32(esp, 0x42EAE0);
    PUSH32(esp, 0x00315158u); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_00315158: ;
    esp = esp + 8;
    eax = 0xFFFFFECDu;
    esp += 4; return; /* ret */

loc_00315161: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00315170
 * Original: 0x00315170 - 0x003151A1 (49 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315170: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031517Du); RECOMP_ABI_CALL(0x0031F580u, sub_0031F580); /* call 0x0031F580 */

loc_0031517D: ;
    ecx = eax;
    esp = esp + 4;
    ecx = ecx - 0;
    if ((ecx == 0)) goto loc_00315198; /* je: equal / zero */

loc_00315187: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0031519B; /* je: equal / zero */

loc_0031518A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x42EAFC);
    PUSH32(esp, 0x00315195u); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_00315195: ;
    esp = esp + 8;

loc_00315198: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0031519B: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_003151B0
 * Original: 0x003151B0 - 0x003151BC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003151B0(void)
{

loc_003151B0: ;
    ecx = 0; /* xor self */
    MEM32(eax + 0x7C) = ecx;
    MEM32(eax + 0x80) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003151C0
 * Original: 0x003151C0 - 0x0031522A (106 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003151C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003151C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x40);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00315227; /* je: equal / zero */

loc_003151CD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003151D3u); RECOMP_ABI_CALL(0x0031D3B0u, sub_0031D3B0); /* call 0x0031D3B0 */

loc_003151D3: ;
    PUSH32(esp, edi);
    MEM32(esi + 8) = 0;
    PUSH32(esp, 0x003151E0u); RECOMP_ABI_CALL(0x0031EA10u, sub_0031EA10); /* call 0x0031EA10 */

loc_003151E0: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003151FE; /* je: equal / zero */

loc_003151E7: ;
    PUSH32(esp, 0xFFFFFECCu);
    PUSH32(esp, 0x003151F1u); RECOMP_ABI_CALL(0x00313690u, sub_00313690); /* call 0x00313690 */

loc_003151F1: ;
    PUSH32(esp, 0x42EB2C);
    PUSH32(esp, 0x003151FBu); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_003151FB: ;
    esp = esp + 8;

loc_003151FE: ;
    eax = esi + 0x1EC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031520Au); RECOMP_ABI_CALL(0x00316E70u, sub_00316E70); /* call 0x00316E70 */

loc_0031520A: ;
    MEM32(esi + 0x20C) = 0;
    esi = MEM32(esi + 0x44);
    esp = esp + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00315227; /* je: equal / zero */

loc_0031521E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00315224u); RECOMP_ABI_CALL(0x0031D880u, sub_0031D880); /* call 0x0031D880 */

loc_00315224: ;
    esp = esp + 4;

loc_00315227: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00315230
 * Original: 0x00315230 - 0x00315275 (69 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315230(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00315230: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031523Bu); RECOMP_ABI_CALL(0x00315690u, sub_00315690); /* call 0x00315690 */

loc_0031523B: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00315250; /* jne: not equal / not zero */

loc_00315242: ;
    POP32(esp, esi);
    MEM32(esp + 4) = 0x42EB4C;
    g_seh_ebp = ebp; sub_0031CE70(); return; /* tail jmp 0x0031CE70 */

loc_00315250: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00315256u); RECOMP_ABI_CALL(0x003151C0u, sub_003151C0); /* call 0x003151C0 */

loc_00315256: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031525Eu); RECOMP_ABI_CALL(0x00316B30u, sub_00316B30); /* call 0x00316B30 */

loc_0031525E: ;
    eax = MEM32(esi + 0x4C);
    esp = esp + 0xC;
    MEM32(esi + 0x74) = 0;
    POP32(esp, esi);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0030DB00(); return; /* tail jmp 0x0030DB00 */

}

/**
 * sub_00315280
 * Original: 0x00315280 - 0x0031533B (187 bytes, 69 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315280: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031528Cu); RECOMP_ABI_CALL(0x00315690u, sub_00315690); /* call 0x00315690 */

loc_0031528C: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003152A3; /* jne: not equal / not zero */

loc_00315293: ;
    PUSH32(esp, 0x42EBA0);
    PUSH32(esp, 0x0031529Du); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_0031529D: ;
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003152A3: ;
    SET_LO8(eax, MEM8(esi + 0x72));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x40);
    if (TEST_NZ(_fa, _fb)) goto loc_003152B7; /* jne: not equal / not zero */

loc_003152B3: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00315336; /* je: equal / zero */

loc_003152B7: ;
    PUSH32(esp, 0x003152BCu); RECOMP_ABI_CALL(0x00313660u, sub_00313660); /* call 0x00313660 */

loc_003152BC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003152EB; /* jne: not equal / not zero */

loc_003152C1: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003152EB; /* jne: not equal / not zero */

loc_003152C7: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003152D4u); RECOMP_ABI_CALL(0x0031ECF0u, sub_0031ECF0); /* call 0x0031ECF0 */

loc_003152D4: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003152E2; /* jne: not equal / not zero */

loc_003152DB: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003152EB; /* jne: not equal / not zero */

loc_003152E2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003152E8u); RECOMP_ABI_CALL(0x0031D3B0u, sub_0031D3B0); /* call 0x0031D3B0 */

loc_003152E8: ;
    esp = esp + 4;

loc_003152EB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003152F2u); RECOMP_ABI_CALL(0x0031F6E0u, sub_0031F6E0); /* call 0x0031F6E0 */

loc_003152F2: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00315323; /* je: equal / zero */

loc_003152F9: ;
    PUSH32(esp, 0xFFFFFECAu);
    PUSH32(esp, 0x00315303u); RECOMP_ABI_CALL(0x00313690u, sub_00313690); /* call 0x00313690 */

loc_00315303: ;
    esp = esp + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    eax = 0x42EB9C;
    if (CMP_EQ(_fa, _fb)) goto loc_00315315; /* je: equal / zero */

loc_00315310: ;
    eax = 0x42EB98;

loc_00315315: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x42EB74);
    PUSH32(esp, 0x00315320u); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_00315320: ;
    esp = esp + 8;

loc_00315323: ;
    ecx = esi + 0x1EC;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00315330u); RECOMP_ABI_CALL(0x00316EE0u, sub_00316EE0); /* call 0x00316EE0 */

loc_00315330: ;
    esp = esp + 8;
    MEM8(esi + 0x72) = LO8(ebx);

loc_00315336: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00315340
 * Original: 0x00315340 - 0x0031536B (43 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315340(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00315340: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x134);
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    PUSH32(esp, eax);
    fp_top() = fp_top() * MEMD(0x40AE08); /* fmul qword ptr [0x40ae08] */
    PUSH32(esp, 0x0031535Fu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0031535F: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00315366u); RECOMP_ABI_CALL(0x00315660u, sub_00315660); /* call 0x00315660 */

loc_00315366: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00315370
 * Original: 0x00315370 - 0x003153D0 (96 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315370: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = edi;
    edx = eax + 1;
    goto loc_00315380;

    /* nop */

loc_00315380: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00315380; /* jne: not equal / not zero */

loc_00315387: ;
    esi = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x114);
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003153BB; /* jle: less or equal (signed <=) */

loc_00315397: ;
    PUSH32(esp, 0x42EBC8);
    PUSH32(esp, 0x003153A1u); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_003153A1: ;
    eax = MEM32(esi + 0x114);
    ecx = MEM32(esi + 0x110);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003153B5u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_003153B5: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003153BB: ;
    edx = MEM32(esi + 0x110);
    ecx = edi;

loc_003153C3: ;
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
    if (TEST_NZ(_fa, _fb)) goto loc_003153C3; /* jne: not equal / not zero */

loc_003153CD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003153D0
 * Original: 0x003153D0 - 0x00315407 (55 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003153D0(void)
{

loc_003153D0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003153E0u); RECOMP_ABI_CALL(0x00315370u, sub_00315370); /* call 0x00315370 */

loc_003153E0: ;
    eax = 0; /* xor self */
    esp = esp + 8;
    MEM32(esi + 0x11C) = eax;
    MEM32(esi + 0x120) = eax;
    MEM32(esi + 0x124) = 0xFFFFF;
    MEM32(esi + 0x118) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00315410
 * Original: 0x00315410 - 0x003154B4 (164 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315410: ;
    PUSH32(esp, 0x00315415u); RECOMP_ABI_CALL(0x00313590u, sub_00313590); /* call 0x00313590 */

loc_00315415: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031546D; /* je: equal / zero */

loc_0031541C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00315422u); RECOMP_ABI_CALL(0x00313DE0u, sub_00313DE0); /* call 0x00313DE0 */

loc_00315422: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00315437; /* je: equal / zero */

loc_00315429: ;
    PUSH32(esp, 0x42EC14);
    PUSH32(esp, 0x00315433u); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_00315433: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

loc_00315437: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031543Du); RECOMP_ABI_CALL(0x00317030u, sub_00317030); /* call 0x00317030 */

loc_0031543D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00315443u); RECOMP_ABI_CALL(0x00315C20u, sub_00315C20); /* call 0x00315C20 */

loc_00315443: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00315449u); RECOMP_ABI_CALL(0x00316600u, sub_00316600); /* call 0x00316600 */

loc_00315449: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031544Fu); RECOMP_ABI_CALL(0x00316590u, sub_00316590); /* call 0x00316590 */

loc_0031544F: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00315464; /* je: equal / zero */

loc_00315456: ;
    PUSH32(esp, 0x42EBE8);
    PUSH32(esp, 0x00315460u); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_00315460: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

loc_00315464: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031546Au); RECOMP_ABI_CALL(0x003165D0u, sub_003165D0); /* call 0x003165D0 */

loc_0031546A: ;
    esp = esp + 4;

loc_0031546D: ;
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0x00315475u); RECOMP_ABI_CALL(0x003151B0u, sub_003151B0); /* call 0x003151B0 */

loc_00315475: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031547Bu); RECOMP_ABI_CALL(0x003150F0u, sub_003150F0); /* call 0x003150F0 */

loc_0031547B: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x72);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00315486u); RECOMP_ABI_CALL(0x00315280u, sub_00315280); /* call 0x00315280 */

loc_00315486: ;
    edi = esi + 0x1EC;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00315494u); RECOMP_ABI_CALL(0x00316EE0u, sub_00316EE0); /* call 0x00316EE0 */

loc_00315494: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031549Au); RECOMP_ABI_CALL(0x00316E30u, sub_00316E30); /* call 0x00316E30 */

loc_0031549A: ;
    esp = esp + 0x18;
    MEM32(esi + 0x84) = 0;
    MEM8(esi + 0x71) = 0;
    MEM32(esi + 8) = 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003154C0
 * Original: 0x003154C0 - 0x00315508 (72 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003154C0(void)
{

loc_003154C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x12C);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(esi + 0x128) = eax;
    PUSH32(esp, 0x003154D9u); RECOMP_ABI_CALL(0x003151C0u, sub_003151C0); /* call 0x003151C0 */

loc_003154D9: ;
    PUSH32(esp, 0x003154DEu); RECOMP_ABI_CALL(0x00315410u, sub_00315410); /* call 0x00315410 */

loc_003154DE: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003154E9u); RECOMP_ABI_CALL(0x003153D0u, sub_003153D0); /* call 0x003153D0 */

loc_003154E9: ;
    edi = MEM32(esp + 0x28);
    ebx = MEM32(esp + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003154F9u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_003154F9: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00315501u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00315501: ;
    esp = esp + 0x24;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00315510
 * Original: 0x00315510 - 0x0031557E (110 bytes, 37 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315510: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031551Bu); RECOMP_ABI_CALL(0x00315690u, sub_00315690); /* call 0x00315690 */

loc_0031551B: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00315531; /* jne: not equal / not zero */

loc_00315522: ;
    PUSH32(esp, 0x42EC40);
    PUSH32(esp, 0x0031552Cu); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_0031552C: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00315531: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00315539u); RECOMP_ABI_CALL(0x003151C0u, sub_003151C0); /* call 0x003151C0 */

loc_00315539: ;
    eax = MEM32(esi + 0x14C);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0xC); PUSH32(esp, 0x00315545u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00315545: ;
    edi = MEM32(esp + 0x20);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00315554u); RECOMP_ABI_CALL(0x0030F810u, sub_0030F810); /* call 0x0030F810 */

loc_00315554: ;
    MEM32(esi + 0x14C) = eax;
    MEM32(esi + 0x128) = eax;
    MEM32(esi + 0x150) = ebx;
    MEM32(esi + 0x154) = edi;
    PUSH32(esp, 0x00315571u); RECOMP_ABI_CALL(0x00315410u, sub_00315410); /* call 0x00315410 */

loc_00315571: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00315577u); RECOMP_ABI_CALL(0x00313B60u, sub_00313B60); /* call 0x00313B60 */

loc_00315577: ;
    esp = esp + 0x14;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00315580
 * Original: 0x00315580 - 0x003155DF (95 bytes, 27 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315580: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031558Bu); RECOMP_ABI_CALL(0x00315690u, sub_00315690); /* call 0x00315690 */

loc_0031558B: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003155A1; /* jne: not equal / not zero */

loc_00315592: ;
    PUSH32(esp, 0x42EC6C);
    PUSH32(esp, 0x0031559Cu); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_0031559C: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003155A1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003155A7u); RECOMP_ABI_CALL(0x003151C0u, sub_003151C0); /* call 0x003151C0 */

loc_003155A7: ;
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x128) = eax;
    eax = 0; /* xor self */
    MEM32(esi + 0x13C) = 2;
    MEM32(esi + 0x140) = eax;
    MEM32(esi + 0x144) = eax;
    MEM32(esi + 0x148) = eax;
    PUSH32(esp, 0x003155D4u); RECOMP_ABI_CALL(0x00315410u, sub_00315410); /* call 0x00315410 */

loc_003155D4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003155DAu); RECOMP_ABI_CALL(0x00313B60u, sub_00313B60); /* call 0x00313B60 */

loc_003155DA: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003155E0
 * Original: 0x003155E0 - 0x00315628 (72 bytes, 28 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003155E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003155E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003155EBu); RECOMP_ABI_CALL(0x00315690u, sub_00315690); /* call 0x00315690 */

loc_003155EB: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00315601; /* jne: not equal / not zero */

loc_003155F2: ;
    PUSH32(esp, 0x42ECC4);
    PUSH32(esp, 0x003155FCu); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_003155FC: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00315601: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00315618; /* jne: not equal / not zero */

loc_00315609: ;
    PUSH32(esp, 0x42EC98);
    PUSH32(esp, 0x00315613u); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_00315613: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00315618: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00315623u); RECOMP_ABI_CALL(0x003154C0u, sub_003154C0); /* call 0x003154C0 */

loc_00315623: ;
    esp = esp + 0x10;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00315630
 * Original: 0x00315630 - 0x00315640 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315630(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00315630: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x40);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0031EBD0(); return; /* tail jmp 0x0031EBD0 */

}

/**
 * sub_00315640
 * Original: 0x00315640 - 0x0031565F (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315640(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00315640: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00315654; /* je: equal / zero */

loc_00315648: ;
    eax = MEM32(eax + 0x40);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0031EDC0(); return; /* tail jmp 0x0031EDC0 */

loc_00315654: ;
    eax = 0; /* xor self */
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0031EDC0(); return; /* tail jmp 0x0031EDC0 */

}

/**
 * sub_00315660
 * Original: 0x00315660 - 0x00315686 (38 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315660(void)
{

loc_00315660: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = MEM32(edi + 0x44);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00315679u); RECOMP_ABI_CALL(0x0031D7F0u, sub_0031D7F0); /* call 0x0031D7F0 */

loc_00315679: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00315680u); RECOMP_ABI_CALL(0x00316B10u, sub_00316B10); /* call 0x00316B10 */

loc_00315680: ;
    esp = esp + 0x14;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00315690
 * Original: 0x00315690 - 0x0031569D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315690: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00315699; /* jne: not equal / not zero */

loc_00315698: ;
    esp += 4; return; /* ret */

loc_00315699: ;
    eax = MEM32(eax + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_003156A0
 * Original: 0x003156A0 - 0x003156FB (91 bytes, 34 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003156A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003156A0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003156AAu); RECOMP_ABI_CALL(0x00315690u, sub_00315690); /* call 0x00315690 */

loc_003156AA: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003156C8; /* jne: not equal / not zero */

loc_003156B1: ;
    PUSH32(esp, 0xFFFFFFF4u);
    PUSH32(esp, 0x003156B8u); RECOMP_ABI_CALL(0x00313690u, sub_00313690); /* call 0x00313690 */

loc_003156B8: ;
    PUSH32(esp, 0x42ECF4);
    PUSH32(esp, 0x003156C2u); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_003156C2: ;
    esp = esp + 8;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_003156C8: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003156FA; /* jne: not equal / not zero */

loc_003156D0: ;
    eax = MEM32(ecx + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003156D9u); RECOMP_ABI_CALL(0x0031EB60u, sub_0031EB60); /* call 0x0031EB60 */

loc_003156D9: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003156F5; /* je: equal / zero */

loc_003156E1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003156F5; /* je: equal / zero */

loc_003156E6: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas & _fbs, 0)) ? 1 : 0); /* setge */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 3;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx;
    esp += 4; return; /* ret */

loc_003156F5: ;
    eax = 2;

loc_003156FA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00315700
 * Original: 0x00315700 - 0x0031573C (60 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315700: ;
    ecx = MEM32(esp + 4);
    esp = esp - 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0031570Du); RECOMP_ABI_CALL(0x00315690u, sub_00315690); /* call 0x00315690 */

loc_0031570D: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00315727; /* jne: not equal / not zero */

loc_00315714: ;
    PUSH32(esp, 0x42ED1C);
    PUSH32(esp, 0x0031571Eu); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_0031571E: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    esp = esp + 0x40;
    esp += 4; return; /* ret */

loc_00315727: ;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00315731u); RECOMP_ABI_CALL(0x00315630u, sub_00315630); /* call 0x00315630 */

loc_00315731: ;
    eax = MEM32(esp + 8);
    esp = esp + 8;
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_00315740
 * Original: 0x00315740 - 0x003157C6 (134 bytes, 40 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315740: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0031574Au); RECOMP_ABI_CALL(0x00315690u, sub_00315690); /* call 0x00315690 */

loc_0031574A: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00315773; /* jne: not equal / not zero */

loc_00315751: ;
    PUSH32(esp, 0x42ED74);
    PUSH32(esp, 0x0031575Bu); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_0031575B: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    MEM32(eax) = 0;
    esp = esp + 4;
    MEM32(ecx) = 1;
    esp += 4; return; /* ret */

loc_00315773: ;
    eax = MEM32(ecx + 0x40);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00315788u); RECOMP_ABI_CALL(0x00320850u, sub_00320850); /* call 0x00320850 */

loc_00315788: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003157B2; /* je: equal / zero */

loc_0031578F: ;
    PUSH32(esp, 0xFFFFFECBu);
    PUSH32(esp, 0x00315799u); RECOMP_ABI_CALL(0x00313690u, sub_00313690); /* call 0x00313690 */

loc_00315799: ;
    PUSH32(esp, 0x42ED50);
    PUSH32(esp, 0x003157A3u); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_003157A3: ;
    MEM32(esi) = 0;
    esp = esp + 8;
    MEM32(edi) = 1;

loc_003157B2: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003157C3; /* jge: greater or equal (signed >=) */

loc_003157B7: ;
    MEM32(esi) = 0;
    MEM32(edi) = 1;

loc_003157C3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003157D0
 * Original: 0x003157D0 - 0x003157F8 (40 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003157D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003157D0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003157DAu); RECOMP_ABI_CALL(0x00315690u, sub_00315690); /* call 0x00315690 */

loc_003157DA: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003157EF; /* jne: not equal / not zero */

loc_003157E1: ;
    PUSH32(esp, 0x42EDA0);
    PUSH32(esp, 0x003157EBu); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_003157EB: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

loc_003157EF: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00320890(); return; /* tail jmp 0x00320890 */

}

/**
 * sub_00315800
 * Original: 0x00315800 - 0x0031582A (42 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315800(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00315800: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0031580Au); RECOMP_ABI_CALL(0x00315690u, sub_00315690); /* call 0x00315690 */

loc_0031580A: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00315821; /* jne: not equal / not zero */

loc_00315811: ;
    PUSH32(esp, 0x42EDCC);
    PUSH32(esp, 0x0031581Bu); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_0031581B: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00315821: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_003208A0(); return; /* tail jmp 0x003208A0 */

}

/**
 * sub_00315830
 * Original: 0x00315830 - 0x00315858 (40 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315830(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00315830: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0031583Au); RECOMP_ABI_CALL(0x00315690u, sub_00315690); /* call 0x00315690 */

loc_0031583A: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031584F; /* jne: not equal / not zero */

loc_00315841: ;
    PUSH32(esp, 0x42EDF8);
    PUSH32(esp, 0x0031584Bu); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_0031584B: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

loc_0031584F: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_003208B0(); return; /* tail jmp 0x003208B0 */

}

/**
 * sub_00315860
 * Original: 0x00315860 - 0x0031588A (42 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315860(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00315860: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0031586Au); RECOMP_ABI_CALL(0x00315690u, sub_00315690); /* call 0x00315690 */

loc_0031586A: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00315881; /* jne: not equal / not zero */

loc_00315871: ;
    PUSH32(esp, 0x42EE24);
    PUSH32(esp, 0x0031587Bu); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_0031587B: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00315881: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_003208C0(); return; /* tail jmp 0x003208C0 */

}

/**
 * sub_00315890
 * Original: 0x00315890 - 0x003158C3 (51 bytes, 18 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315890: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0031589Au); RECOMP_ABI_CALL(0x00315690u, sub_00315690); /* call 0x00315690 */

loc_0031589A: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003158AF; /* jne: not equal / not zero */

loc_003158A1: ;
    PUSH32(esp, 0x42EE50);
    PUSH32(esp, 0x003158ABu); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_003158AB: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

loc_003158AF: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(ecx + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003158BFu); RECOMP_ABI_CALL(0x0031EDC0u, sub_0031EDC0); /* call 0x0031EDC0 */

loc_003158BF: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_003158D0
 * Original: 0x003158D0 - 0x003158F5 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003158D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003158D0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003158DAu); RECOMP_ABI_CALL(0x00315690u, sub_00315690); /* call 0x00315690 */

loc_003158DA: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003158F1; /* jne: not equal / not zero */

loc_003158E1: ;
    PUSH32(esp, 0x42EE80);
    PUSH32(esp, 0x003158EBu); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_003158EB: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_003158F1: ;
    eax = MEM32(ecx + 0x40);
    esp += 4; return; /* ret */

}

/**
 * sub_00315900
 * Original: 0x00315900 - 0x00315949 (73 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315900: ;
    ecx = MEM32(esp + 4);
    esp = esp - 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0031590Du); RECOMP_ABI_CALL(0x00315690u, sub_00315690); /* call 0x00315690 */

loc_0031590D: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00315927; /* jne: not equal / not zero */

loc_00315914: ;
    PUSH32(esp, 0x42EEAC);
    PUSH32(esp, 0x0031591Eu); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_0031591E: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    esp = esp + 0x40;
    esp += 4; return; /* ret */

loc_00315927: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0031592Du); RECOMP_ABI_CALL(0x003158D0u, sub_003158D0); /* call 0x003158D0 */

loc_0031592D: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00315938u); RECOMP_ABI_CALL(0x0031EBD0u, sub_0031EBD0); /* call 0x0031EBD0 */

loc_00315938: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x1C);
    esp = esp + 0xC;
    eax = eax - ecx;
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_00315950
 * Original: 0x00315950 - 0x00315990 (64 bytes, 22 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315950: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0031595Au); RECOMP_ABI_CALL(0x00315690u, sub_00315690); /* call 0x00315690 */

loc_0031595A: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031596F; /* jne: not equal / not zero */

loc_00315961: ;
    PUSH32(esp, 0x42EF08);
    PUSH32(esp, 0x0031596Bu); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_0031596B: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

loc_0031596F: ;
    eax = MEM32(ecx + 0x40);
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031597Du); RECOMP_ABI_CALL(0x0031F5E0u, sub_0031F5E0); /* call 0x0031F5E0 */

loc_0031597D: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031598F; /* je: equal / zero */

loc_00315984: ;
    PUSH32(esp, 0x42EEE0);
    PUSH32(esp, 0x0031598Eu); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_0031598E: ;
    POP32(esp, ecx);

loc_0031598F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00315990
 * Original: 0x00315990 - 0x003159CA (58 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315990: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031599Bu); RECOMP_ABI_CALL(0x00315690u, sub_00315690); /* call 0x00315690 */

loc_0031599B: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003159B3; /* jne: not equal / not zero */

loc_003159A2: ;
    PUSH32(esp, 0x42EF38);
    PUSH32(esp, 0x003159ACu); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_003159AC: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003159B3: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003159BAu); RECOMP_ABI_CALL(0x00315900u, sub_00315900); /* call 0x00315900 */

loc_003159BA: ;
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x003159C2u); RECOMP_ABI_CALL(0x00315E30u, sub_00315E30); /* call 0x00315E30 */

loc_003159C2: ;
    esp = esp + 8;
    eax = eax + edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003159D0
 * Original: 0x003159D0 - 0x003159F8 (40 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003159D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003159D0: ;
    eax = MEM32(esi + 0xFC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x2C) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003159EE; /* jge: greater or equal (signed >=) */

loc_003159DB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003159E1u); RECOMP_ABI_CALL(0x00316A20u, sub_00316A20); /* call 0x00316A20 */

loc_003159E1: ;
    ecx = MEM32(edi + 0x2C);
    esp = esp + 4;
    MEM32(esi + 0xFC) = ecx;
    esp += 4; return; /* ret */

loc_003159EE: ;
    edx = MEM32(edi + 0x2C);
    MEM32(esi + 0xFC) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00315A00
 * Original: 0x00315A00 - 0x00315A56 (86 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315A00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00315A00: ;
    eax = MEM32(eax + 0x38);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    ecx = MEM32(ebp + 0xD4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, 0x00315A1Eu); RECOMP_ABI_CALL(0x00313650u, sub_00313650); /* call 0x00313650 */

loc_00315A1E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00315A31; /* jne: not equal / not zero */

loc_00315A23: ;
    eax = MEM32(esp + 0x10);
    ebp = ebp + 0xBC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00315A3D; /* jne: not equal / not zero */

loc_00315A31: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    MEM32(ebx + 0x40) = eax;
    MEM32(ebx + 0x44) = eax;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00315A3D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00315A4C; /* je: equal / zero */

loc_00315A41: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00315A4C; /* jle: less or equal (signed <=) */

loc_00315A46: ;
    edi = edi + 4;
    esi = esi - 4;

loc_00315A4C: ;
    MEM32(ebx + 0x40) = edi;
    POP32(esp, edi);
    MEM32(ebx + 0x44) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00315A60
 * Original: 0x00315A60 - 0x00315A76 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315A60(void)
{

loc_00315A60: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3E8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00315A72u); RECOMP_ABI_CALL(0x003208D0u, sub_003208D0); /* call 0x003208D0 */

loc_00315A72: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00315A80
 * Original: 0x00315A80 - 0x00315A9D (29 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315A80: ;
    eax = MEM32(esp + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00315A97; /* je: equal / zero */

loc_00315A87: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00315A91; /* je: equal / zero */

loc_00315A8A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = 3;
    esp += 4; return; /* ret */

loc_00315A91: ;
    eax = 2;
    esp += 4; return; /* ret */

loc_00315A97: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00315AA0
 * Original: 0x00315AA0 - 0x00315AD6 (54 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315AA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00315AA0: ;
    eax = MEM32(esp + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00315AC3; /* ja: above (unsigned >) */

loc_00315AAA: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x315AD8); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00315AB1u) goto loc_00315AB1;
    if (_jt == 0x00315AB7u) goto loc_00315AB7;
    if (_jt == 0x00315ABDu) goto loc_00315ABD;
    if (_jt == 0x00315AD0u) goto loc_00315AD0;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00315AB1: ;
    eax = 2;
    esp += 4; return; /* ret */

loc_00315AB7: ;
    eax = 3;
    esp += 4; return; /* ret */

loc_00315ABD: ;
    eax = 4;
    esp += 4; return; /* ret */

loc_00315AC3: ;
    PUSH32(esp, 0x42EF68);
    PUSH32(esp, 0x00315ACDu); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_00315ACD: ;
    esp = esp + 4;

loc_00315AD0: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00315AD6
 * Original: 0x00315AD6 - 0x00315AF0 (26 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315AD6(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00315AD6: ;
    edi = edi;
    /* TODO: rcr byte ptr [edx + 0x31], 1 */
    MEM8(ecx + -1224724134) = MEM8(ecx + -1224724134) + HI8(edx);
    POP32(esp, edx);
    MEM32(eax) = MEM32(eax) ^ eax;
    ebp = 0xCC00315Au;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00315AF0
 * Original: 0x00315AF0 - 0x00315B44 (84 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315AF0: ;
    eax = MEM32(ecx + 0x3C);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00315B12; /* jle: less or equal (signed <=) */

loc_00315AFA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00315B0B; /* jle: less or equal (signed <=) */

loc_00315AFF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00315B12; /* jne: not equal / not zero */

loc_00315B04: ;
    eax = MEM32(ecx + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00315B1F; /* jne: not equal / not zero */

loc_00315B0B: ;
    esi = 2;
    goto loc_00315B1F;

loc_00315B12: ;
    PUSH32(esp, 0x42EF90);
    PUSH32(esp, 0x00315B1Cu); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_00315B1C: ;
    esp = esp + 4;

loc_00315B1F: ;
    PUSH32(esp, 0x00315B24u); RECOMP_ABI_CALL(0x00313650u, sub_00313650); /* call 0x00313650 */

loc_00315B24: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00315B40; /* jne: not equal / not zero */

loc_00315B29: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00315B33u); RECOMP_ABI_CALL(0x00316710u, sub_00316710); /* call 0x00316710 */

loc_00315B33: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    eax = 2;
    if (CMP_EQ(_fa, _fb)) goto loc_00315B42; /* je: equal / zero */

loc_00315B40: ;
    eax = esi;

loc_00315B42: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00315B50
 * Original: 0x00315B50 - 0x00315B9A (74 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315B50(void)
{

loc_00315B50: ;
    edx = MEM32(ecx + 0x3C);
    MEM32(eax + 0x88) = edx;
    edx = MEM32(ecx + 0x40);
    MEM32(eax + 0x8C) = edx;
    edx = MEM32(ecx + 0x44);
    MEM32(eax + 0x90) = edx;
    edx = MEM32(ecx + 0x48);
    MEM32(eax + 0x94) = edx;
    edx = MEM32(ecx + 0x4C);
    MEM32(eax + 0x98) = edx;
    edx = MEM32(ecx + 0x50);
    MEM32(eax + 0x9C) = edx;
    ecx = MEM32(ecx + 0x54);
    MEM32(eax + 0xA0) = ecx;
    MEM32(eax + 0xA4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00315BA0
 * Original: 0x00315BA0 - 0x00315C20 (128 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315BA0: ;
    esp = esp - 0xC;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00315BADu); RECOMP_ABI_CALL(0x00321460u, sub_00321460); /* call 0x00321460 */

loc_00315BAD: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00315C1C; /* je: equal / zero */

loc_00315BB4: ;
    eax = MEM32(esp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00315C1C; /* je: equal / zero */

loc_00315BBB: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xE0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00315BCBu); RECOMP_ABI_CALL(0x00320C00u, sub_00320C00); /* call 0x00320C00 */

loc_00315BCB: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00315C1C; /* je: equal / zero */

loc_00315BD2: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00315C1C; /* je: equal / zero */

loc_00315BDA: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0xE0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00315BEAu); RECOMP_ABI_CALL(0x00321230u, sub_00321230); /* call 0x00321230 */

loc_00315BEA: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00315C1C; /* je: equal / zero */

loc_00315BF1: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00315C11; /* jne: not equal / not zero */

loc_00315BF8: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    MEM32(edi + 0xB8) = 1;
    PUSH32(esp, 0x00315C0Au); RECOMP_ABI_CALL(0x00316470u, sub_00316470); /* call 0x00316470 */

loc_00315C0A: ;
    esp = esp + 8;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_00315C11: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00315C19u); RECOMP_ABI_CALL(0x00316470u, sub_00316470); /* call 0x00316470 */

loc_00315C19: ;
    esp = esp + 8;

loc_00315C1C: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00315C20
 * Original: 0x00315C20 - 0x00315C3D (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315C20(void)
{

loc_00315C20: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(eax + 0xB4) = ecx;
    MEM32(eax + 0xB8) = ecx;
    PUSH32(esp, 0x00315C39u); RECOMP_ABI_CALL(0x00316470u, sub_00316470); /* call 0x00316470 */

loc_00315C39: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00315C40
 * Original: 0x00315C40 - 0x00315D31 (241 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315C40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00315C40: ;
    eax = MEM32(eax + 0x38);
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = MEM32(eax);
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    PUSH32(esp, 0x00315C52u); RECOMP_ABI_CALL(0x00313650u, sub_00313650); /* call 0x00313650 */

loc_00315C52: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00315D2B; /* jne: not equal / not zero */

loc_00315C5B: ;
    eax = MEM32(ebx + 0xD8);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00315D2A; /* je: equal / zero */

loc_00315C6C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00315CFF; /* je: equal / zero */

loc_00315C74: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00315CFF; /* jle: less or equal (signed <=) */

loc_00315C7D: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    edi = edi + 0xFFFFFFFCu;
    PUSH32(esp, edi);
    esi = esi + 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00315C94u); RECOMP_ABI_CALL(0x003215F0u, sub_003215F0); /* call 0x003215F0 */

loc_00315C94: ;
    eax = MEM32(esp + 0x20);
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00315D07; /* je: equal / zero */

loc_00315C9F: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00315D07; /* jle: less or equal (signed <=) */

loc_00315CA7: ;
    ecx = MEM32(ebx + 0xDC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00315CB5; /* jle: less or equal (signed <=) */

loc_00315CB1: ;
    MEM32(esp + 0xC) = ecx;

loc_00315CB5: ;
    edi = MEM32(ebx + 0xD8);
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    ecx = MEM32(esp + 0xC);
    esi = MEM32(esp + 0x10);
    edi = MEM32(ebx + 0xD8);
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
    ecx = MEM32(ebx + 0xD8);
    edx = MEM32(esp + 0xC);
    MEM32(ebx + 0xE0) = ecx;
    MEM32(ebx + 0xE4) = edx;
    goto loc_00315D13;

loc_00315CFF: ;
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0xC) = ebp;

loc_00315D07: ;
    MEM32(ebx + 0xE0) = ebp;
    MEM32(ebx + 0xE4) = ebp;

loc_00315D13: ;
    eax = MEM32(ebx + 0xE4);
    ecx = MEM32(ebx + 0xE0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00315D27u); RECOMP_ABI_CALL(0x003166D0u, sub_003166D0); /* call 0x003166D0 */

loc_00315D27: ;
    esp = esp + 0xC;

loc_00315D2A: ;
    POP32(esp, ebp);

loc_00315D2B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00315D40
 * Original: 0x00315D40 - 0x00315D52 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315D40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315D40: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0xE0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_00315D60
 * Original: 0x00315D60 - 0x00315D8E (46 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315D60(void)
{

loc_00315D60: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 8);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = edx;
    edx = MEM32(eax);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 8) = edx;
    edx = (uint32_t)(int32_t)SMEM16(eax + 0xE);
    MEM32(ecx + 0xC) = edx;
    edx = (uint32_t)(int32_t)SMEM16(eax + 0xC);
    MEM32(ecx + 0x10) = edx;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0xC);
    MEM32(ecx + 0x14) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00315D90
 * Original: 0x00315D90 - 0x00315DEB (91 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315D90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00315D90: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00315D9Bu); RECOMP_ABI_CALL(0x00315690u, sub_00315690); /* call 0x00315690 */

loc_00315D9B: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00315DB0; /* jne: not equal / not zero */

loc_00315DA2: ;
    POP32(esp, esi);
    MEM32(esp + 4) = 0x42EFC4;
    g_seh_ebp = ebp; sub_0031CE70(); return; /* tail jmp 0x0031CE70 */

loc_00315DB0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x80);
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 0x78);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x7C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00315DC5u); RECOMP_ABI_CALL(0x003158D0u, sub_003158D0); /* call 0x003158D0 */

loc_00315DC5: ;
    esp = esp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00315DE6; /* jle: less or equal (signed <=) */

loc_00315DCC: ;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00315DD3u); RECOMP_ABI_CALL(0x0031E140u, sub_0031E140); /* call 0x0031E140 */

loc_00315DD3: ;
    eax = MEM32(esi + 0x80);
    esp = esp + 8;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x80) = eax;
    MEM32(esi + 0x7C) = eax;

loc_00315DE6: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00315DF0
 * Original: 0x00315DF0 - 0x00315E26 (54 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315DF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00315DF0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00315DFBu); RECOMP_ABI_CALL(0x00315690u, sub_00315690); /* call 0x00315690 */

loc_00315DFB: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00315E13; /* jne: not equal / not zero */

loc_00315E02: ;
    PUSH32(esp, 0x42EFF4);
    PUSH32(esp, 0x00315E0Cu); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_00315E0C: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00315E13: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00315E19u); RECOMP_ABI_CALL(0x003158D0u, sub_003158D0); /* call 0x003158D0 */

loc_00315E19: ;
    esp = esp + 4;
    POP32(esp, esi);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00318A20(); return; /* tail jmp 0x00318A20 */

}

/**
 * sub_00315E30
 * Original: 0x00315E30 - 0x00315E5B (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315E30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00315E3Bu); RECOMP_ABI_CALL(0x00315690u, sub_00315690); /* call 0x00315690 */

loc_00315E3B: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00315E53; /* jne: not equal / not zero */

loc_00315E42: ;
    PUSH32(esp, 0x42F028);
    PUSH32(esp, 0x00315E4Cu); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_00315E4C: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00315E53: ;
    eax = MEM32(esi + 0x84);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00315E60
 * Original: 0x00315E60 - 0x00315E7C (28 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315E60: ;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00315E6Bu); RECOMP_ABI_CALL(0x00320E90u, sub_00320E90); /* call 0x00320E90 */

loc_00315E6B: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00315E77; /* jne: not equal / not zero */

loc_00315E72: ;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00315E77: ;
    eax = MEM32(esp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00315E80
 * Original: 0x00315E80 - 0x00315EBC (60 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315E80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315E80: ;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0xE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00315E90u); RECOMP_ABI_CALL(0x00321410u, sub_00321410); /* call 0x00321410 */

loc_00315E90: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00315E9C; /* jne: not equal / not zero */

loc_00315E97: ;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00315E9C: ;
    eax = MEM32(esp);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00315EB5; /* je: equal / zero */

loc_00315EA2: ;
    eax = eax - 2;
    if ((eax == 0)) goto loc_00315EAE; /* je: equal / zero */

loc_00315EA7: ;
    eax = 0x11;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00315EAE: ;
    eax = 0x41;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00315EB5: ;
    eax = 0x21;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00315EC0
 * Original: 0x00315EC0 - 0x00315EF3 (51 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315EC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00315EC6u); RECOMP_ABI_CALL(0x00315D40u, sub_00315D40); /* call 0x00315D40 */

loc_00315EC6: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00315EF2; /* jne: not equal / not zero */

loc_00315ECE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00315ED4u); RECOMP_ABI_CALL(0x003166F0u, sub_003166F0); /* call 0x003166F0 */

loc_00315ED4: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00315EE7; /* jne: not equal / not zero */

loc_00315EDC: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00315EE3u); RECOMP_ABI_CALL(0x00316490u, sub_00316490); /* call 0x00316490 */

loc_00315EE3: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00315EE7: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00315EEFu); RECOMP_ABI_CALL(0x00316490u, sub_00316490); /* call 0x00316490 */

loc_00315EEF: ;
    esp = esp + 8;

loc_00315EF2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00315F00
 * Original: 0x00315F00 - 0x0031602F (303 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315F00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00315F00: ;
    esp = esp - 0x30;
    eax = MEM32(esp + 0x34);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x40);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x44);
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, 0x00315F22u); RECOMP_ABI_CALL(0x00315A80u, sub_00315A80); /* call 0x00315A80 */

loc_00315F22: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi + 8);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esi);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esi + 0x10);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x00315F4Au); RECOMP_ABI_CALL(0x00315AA0u, sub_00315AA0); /* call 0x00315AA0 */

loc_00315F4A: ;
    edx = MEM32(esi + 0x30);
    ecx = MEM32(esi + 0x24);
    ebp = MEM32(esi + 0x34);
    edi = MEM32(esi + 0x18);
    MEM32(esp + 0x34) = eax;
    eax = MEM32(esi + 0x2C);
    MEM32(esp + 0x3C) = eax;
    eax = esp + 0x50;
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esi + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    MEM32(esp + 0x48) = ecx;
    MEM32(esp + 0x4C) = edx;
    PUSH32(esp, 0x00315F7Bu); RECOMP_ABI_CALL(0x0031FDA0u, sub_0031FDA0); /* call 0x0031FDA0 */

loc_00315F7B: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00315F8F; /* je: equal / zero */

loc_00315F82: ;
    PUSH32(esp, 0x42F05C);
    PUSH32(esp, 0x00315F8Cu); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_00315F8C: ;
    esp = esp + 4;

loc_00315F8F: ;
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, ecx);
    eax = edi;
    ecx = ebp;
    PUSH32(esp, 0x00315F9Du); RECOMP_ABI_CALL(0x00315A60u, sub_00315A60); /* call 0x00315A60 */

loc_00315F9D: ;
    edx = MEM32(esp + 0x4C);
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, edx);
    eax = edi;
    PUSH32(esp, 0x00315FB1u); RECOMP_ABI_CALL(0x00315A60u, sub_00315A60); /* call 0x00315A60 */

loc_00315FB1: ;
    ebx = MEM32(esp + 0x54);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    MEM32(ebx) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(ebx + 4) = edx;
    edx = MEM32(esp + 0x28);
    MEM32(ebx + 8) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(ebx + 0xC) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(ebx + 0x10) = ecx;
    ecx = MEM32(esp + 0x34);
    MEM32(ebx + 0x14) = edx;
    edx = MEM32(esp + 0x50);
    MEM32(ebx + 0x30) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(ebx + 0x18) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(ebx + 0x1C) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(ebx + 0x34) = eax;
    eax = MEM32(esp + 0x4C);
    MEM32(ebx + 0x20) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(ebx + 0x2C) = edx;
    edx = MEM32(esp + 0x44);
    PUSH32(esp, eax);
    eax = esi;
    MEM32(ebx + 0x24) = ebp;
    MEM32(ebx + 0x28) = edi;
    MEM32(ebx + 0x38) = ecx;
    MEM32(ebx + 0x3C) = edx;
    PUSH32(esp, 0x00316024u); RECOMP_ABI_CALL(0x00315A00u, sub_00315A00); /* call 0x00315A00 */

loc_00316024: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_00315F45
 * Original: 0x00315F45 - 0x0031602F (234 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315F45(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00315F45: ;
    PUSH32(esp, 0x00315F4Au); RECOMP_ABI_CALL(0x00315AA0u, sub_00315AA0); /* call 0x00315AA0 */

loc_00315F4A: ;
    edx = MEM32(esi + 0x30);
    ecx = MEM32(esi + 0x24);
    ebp = MEM32(esi + 0x34);
    edi = MEM32(esi + 0x18);
    MEM32(esp + 0x34) = eax;
    eax = MEM32(esi + 0x2C);
    MEM32(esp + 0x3C) = eax;
    eax = esp + 0x50;
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esi + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    MEM32(esp + 0x48) = ecx;
    MEM32(esp + 0x4C) = edx;
    PUSH32(esp, 0x00315F7Bu); RECOMP_ABI_CALL(0x0031FDA0u, sub_0031FDA0); /* call 0x0031FDA0 */

loc_00315F7B: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00315F8F; /* je: equal / zero */

loc_00315F82: ;
    PUSH32(esp, 0x42F05C);
    PUSH32(esp, 0x00315F8Cu); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_00315F8C: ;
    esp = esp + 4;

loc_00315F8F: ;
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, ecx);
    eax = edi;
    ecx = ebp;
    PUSH32(esp, 0x00315F9Du); RECOMP_ABI_CALL(0x00315A60u, sub_00315A60); /* call 0x00315A60 */

loc_00315F9D: ;
    edx = MEM32(esp + 0x4C);
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, edx);
    eax = edi;
    PUSH32(esp, 0x00315FB1u); RECOMP_ABI_CALL(0x00315A60u, sub_00315A60); /* call 0x00315A60 */

loc_00315FB1: ;
    ebx = MEM32(esp + 0x54);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    MEM32(ebx) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(ebx + 4) = edx;
    edx = MEM32(esp + 0x28);
    MEM32(ebx + 8) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(ebx + 0xC) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(ebx + 0x10) = ecx;
    ecx = MEM32(esp + 0x34);
    MEM32(ebx + 0x14) = edx;
    edx = MEM32(esp + 0x50);
    MEM32(ebx + 0x30) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(ebx + 0x18) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(ebx + 0x1C) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(ebx + 0x34) = eax;
    eax = MEM32(esp + 0x4C);
    MEM32(ebx + 0x20) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(ebx + 0x2C) = edx;
    edx = MEM32(esp + 0x44);
    PUSH32(esp, eax);
    eax = esi;
    MEM32(ebx + 0x24) = ebp;
    MEM32(ebx + 0x28) = edi;
    MEM32(ebx + 0x38) = ecx;
    MEM32(ebx + 0x3C) = edx;
    PUSH32(esp, 0x00316024u); RECOMP_ABI_CALL(0x00315A00u, sub_00315A00); /* call 0x00315A00 */

loc_00316024: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_00316030
 * Original: 0x00316030 - 0x003160A8 (120 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00316030: ;
    esp = esp - 8;
    PUSH32(esp, edi);
    edi = eax;
    ecx = MEM32(edi + 0xB4);
    eax = 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003160A3; /* je: equal / zero */

loc_00316045: ;
    MEM32(edi + 0xB4) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    MEM32(edi + 0xB8) = 0;
    edx = MEM32(edi + 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00316068u); RECOMP_ABI_CALL(0x0031EC40u, sub_0031EC40); /* call 0x0031EC40 */

loc_00316068: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003160A3; /* jne: not equal / not zero */

loc_0031606F: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x800 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003160A3; /* jb: below (unsigned <) */

loc_0031607B: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003160A3; /* je: equal / zero */

loc_00316083: ;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031608Bu); RECOMP_ABI_CALL(0x00320B60u, sub_00320B60); /* call 0x00320B60 */

loc_0031608B: ;
    esi = eax;
    esp = esp + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003160A2; /* je: equal / zero */

loc_00316094: ;
    PUSH32(esp, 0x00316099u); RECOMP_ABI_CALL(0x00315BA0u, sub_00315BA0); /* call 0x00315BA0 */

loc_00316099: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031609Fu); RECOMP_ABI_CALL(0x00320BC0u, sub_00320BC0); /* call 0x00320BC0 */

loc_0031609F: ;
    esp = esp + 4;

loc_003160A2: ;
    POP32(esp, esi);

loc_003160A3: ;
    POP32(esp, edi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003160B0
 * Original: 0x003160B0 - 0x003160DE (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003160B0(void)
{

loc_003160B0: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    esp = esp - 0x10;
    eax = esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003160CBu); RECOMP_ABI_CALL(0x00318920u, sub_00318920); /* call 0x00318920 */

loc_003160CB: ;
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003160DAu); RECOMP_ABI_CALL(0x00315D60u, sub_00315D60); /* call 0x00315D60 */

loc_003160DA: ;
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_003160E0
 * Original: 0x003160E0 - 0x0031619D (189 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003160E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003160E0: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax + 0x1C) = 0xFFFFFFFFu;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x800 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0031619C; /* jb: below (unsigned <) */

loc_003160FA: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031619C; /* je: equal / zero */

loc_00316106: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebp = 2;
    ebx = ecx + 0x800;
    edi = eax + -2048;
    PUSH32(esp, esi);
    goto loc_00316120;

    /* nop */

loc_00316120: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00316127u); RECOMP_ABI_CALL(0x00320B60u, sub_00320B60); /* call 0x00320B60 */

loc_00316127: ;
    esi = eax;
    esp = esp + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00316160; /* je: equal / zero */

loc_00316130: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031613Bu); RECOMP_ABI_CALL(0x00321460u, sub_00321460); /* call 0x00321460 */

loc_0031613B: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031614A; /* je: equal / zero */

loc_00316142: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00316177; /* jne: not equal / not zero */

loc_0031614A: ;
    eax = MEM32(esp + 0x1C);
    ecx = ecx | 0xFFFFFFFFu;
    PUSH32(esp, esi);
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    PUSH32(esp, 0x0031615Du); RECOMP_ABI_CALL(0x00320BC0u, sub_00320BC0); /* call 0x00320BC0 */

loc_0031615D: ;
    esp = esp + 4;

loc_00316160: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi - 0x800;
    ebx = ebx + 0x800;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00316120; /* jle: less or equal (signed <=) */

loc_00316172: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00316177: ;
    ecx = esi;
    PUSH32(esp, 0x0031617Eu); RECOMP_ABI_CALL(0x00315E60u, sub_00315E60); /* call 0x00315E60 */

loc_0031617E: ;
    edi = MEM32(esp + 0x1C);
    ecx = esi;
    MEM32(edi + 0x1C) = eax;
    PUSH32(esp, 0x0031618Cu); RECOMP_ABI_CALL(0x00315E80u, sub_00315E80); /* call 0x00315E80 */

loc_0031618C: ;
    PUSH32(esp, esi);
    MEM32(edi + 0x20) = eax;
    PUSH32(esp, 0x00316195u); RECOMP_ABI_CALL(0x00320BC0u, sub_00320BC0); /* call 0x00320BC0 */

loc_00316195: ;
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0031619C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003161A0
 * Original: 0x003161A0 - 0x003162A9 (265 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003161A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003161A0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003161ACu); RECOMP_ABI_CALL(0x00315690u, sub_00315690); /* call 0x00315690 */

loc_003161AC: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003161CD; /* jne: not equal / not zero */

loc_003161B3: ;
    PUSH32(esp, 0x42F07C);
    PUSH32(esp, 0x003161BDu); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_003161BD: ;
    eax = MEM32(esp + 0x14);
    esp = esp + 4;
    MEM32(eax) = 0;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003161CD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003161D5u); RECOMP_ABI_CALL(0x003158D0u, sub_003158D0); /* call 0x003158D0 */

loc_003161D5: ;
    ecx = esp + 0x10;
    edi = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003161E2u); RECOMP_ABI_CALL(0x0031E0D0u, sub_0031E0D0); /* call 0x0031E0D0 */

loc_003161E2: ;
    eax = MEM32(esp + 0x18);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031629A; /* je: equal / zero */

loc_003161F1: ;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031623C; /* jne: not equal / not zero */

loc_003161F8: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 0x1C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0031623B; /* jle: less or equal (signed <=) */

loc_00316202: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00316208u); RECOMP_ABI_CALL(0x00315DF0u, sub_00315DF0); /* call 0x00315DF0 */

loc_00316208: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031623B; /* jne: not equal / not zero */

loc_00316210: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031621Bu); RECOMP_ABI_CALL(0x0031E140u, sub_0031E140); /* call 0x0031E140 */

loc_0031621B: ;
    edx = MEM32(esi + 0x84);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    MEM32(esi + 0x84) = edx;
    PUSH32(esp, 0x00316233u); RECOMP_ABI_CALL(0x0031E0D0u, sub_0031E0D0); /* call 0x0031E0D0 */

loc_00316233: ;
    esp = esp + 0x10;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00316202; /* jl: less (signed <) */

loc_0031623B: ;
    POP32(esp, ebp);

loc_0031623C: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031629A; /* je: equal / zero */

loc_00316244: ;
    eax = esi;
    PUSH32(esp, 0x0031624Bu); RECOMP_ABI_CALL(0x00316030u, sub_00316030); /* call 0x00316030 */

loc_0031624B: ;
    edx = MEM32(esi + 0x7C);
    ecx = MEM32(esp + 0xC);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi;
    MEM32(esi + 0x7C) = edx;
    MEM32(esi + 0x78) = ecx;
    PUSH32(esp, 0x00316260u); RECOMP_ABI_CALL(0x00315B50u, sub_00315B50); /* call 0x00315B50 */

loc_00316260: ;
    edi = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00316270u); RECOMP_ABI_CALL(0x00315F00u, sub_00315F00); /* call 0x00315F00 */

loc_00316270: ;
    eax = MEM32(esp + 0x18);
    ebx = esi;
    PUSH32(esp, 0x0031627Bu); RECOMP_ABI_CALL(0x00315C40u, sub_00315C40); /* call 0x00315C40 */

loc_0031627B: ;
    PUSH32(esp, 0x00316280u); RECOMP_ABI_CALL(0x003159D0u, sub_003159D0); /* call 0x003159D0 */

loc_00316280: ;
    PUSH32(esp, 0x00316285u); RECOMP_ABI_CALL(0x00315EC0u, sub_00315EC0); /* call 0x00315EC0 */

loc_00316285: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031628Fu); RECOMP_ABI_CALL(0x00315AF0u, sub_00315AF0); /* call 0x00315AF0 */

loc_0031628F: ;
    esp = esp + 0x10;
    MEM32(edi + 0x48) = eax;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0031629A: ;
    edx = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, ebx);
    MEM32(edx) = 0;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003162B0
 * Original: 0x003162B0 - 0x003162B5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003162B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003162B0: ;
    g_seh_ebp = ebp; sub_00321AE0(); return; /* tail jmp 0x00321AE0 */

}

/**
 * sub_003162C0
 * Original: 0x003162C0 - 0x003162D5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003162C0(void)
{

loc_003162C0: ;
    ecx = MEM32(esp + 4);
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = eax + ecx;
    eax = eax * 8 + 0x205D;
    esp += 4; return; /* ret */

}

/**
 * sub_003162E0
 * Original: 0x003162E0 - 0x003162E5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003162E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003162E0: ;
    g_seh_ebp = ebp; sub_00321CA0(); return; /* tail jmp 0x00321CA0 */

}

/**
 * sub_003162F0
 * Original: 0x003162F0 - 0x003162F5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003162F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003162F0: ;
    g_seh_ebp = ebp; sub_00321BD0(); return; /* tail jmp 0x00321BD0 */

}

/**
 * sub_00316300
 * Original: 0x00316300 - 0x0031630B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316300(void)
{

loc_00316300: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xA8);
    esp += 4; return; /* ret */

}

/**
 * sub_00316310
 * Original: 0x00316310 - 0x00316338 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00316310: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00316332; /* je: equal / zero */

loc_00316313: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0031632C; /* je: equal / zero */

loc_00316316: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00316326; /* je: equal / zero */

loc_00316319: ;
    PUSH32(esp, 0x42F0AC);
    PUSH32(esp, 0x00316323u); RECOMP_ABI_CALL(0x0031CE70u, sub_0031CE70); /* call 0x0031CE70 */

loc_00316323: ;
    esp = esp + 4;

loc_00316326: ;
    eax = 3;
    esp += 4; return; /* ret */

loc_0031632C: ;
    eax = 2;
    esp += 4; return; /* ret */

loc_00316332: ;
    eax = 1;
    esp += 4; return; /* ret */

}
