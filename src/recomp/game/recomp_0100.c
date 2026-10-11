/**
 * X-Men Legends - Recompiled code chunk 100
 * Functions: 250 (0x003A4A36 - 0x003AC10F)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_003A4A36
 * Original: 0x003A4A36 - 0x003A4A94 (94 bytes, 38 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4A36(void)
{

loc_003A4A36: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 4);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    edi = eax;
    PUSH32(esp, MEM32(esp + 0x10));
    edi = edi >> 4;
    edi = edi & 3;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    edi = eax;
    edi = edi >> 6;
    edi = edi & 3;
    PUSH32(esp, edi);
    edi = eax;
    edi = edi >> 8;
    edi = edi & 3;
    PUSH32(esp, edi);
    edi = eax;
    eax = eax >> 0xC;
    eax = eax & 1;
    edi = edi >> 0xA;
    edi = edi & 3;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(edx + 4));
    eax = eax & 0xFFFFFF0Fu;
    PUSH32(esp, eax);
    eax = MEM32(edx);
    eax = eax >> 0x1C;
    eax = eax & 3;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003A4A8Du); RECOMP_ABI_CALL(0x003A4623u, sub_003A4623); /* call 0x003A4623 */

loc_003A4A8D: ;
    eax = ZX8(LO8(eax));
    POP32(esp, edi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003A4A94
 * Original: 0x003A4A94 - 0x003A4AC0 (44 bytes, 19 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A4A94(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A4A94: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    eax = ebp + -1;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4AA7u); RECOMP_ABI_CALL(0x0039F517u, sub_0039F517); /* call 0x0039F517 */

loc_003A4AA7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_003A4ABB; /* jl: less (signed <) */

loc_003A4AAB: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A4ABB; /* je: equal / zero */

loc_003A4AB1: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4ABBu); RECOMP_ABI_CALL(0x003A483Du, sub_003A483D); /* call 0x003A483D */

loc_003A4ABB: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003A4AC0
 * Original: 0x003A4AC0 - 0x003A4C06 (326 bytes, 127 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A4AC0(void)
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

loc_003A4AC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    esi = ecx;
    ebx = 0; /* xor self */
    MEM32(edi) = 0x20;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x10), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A4B84; /* je: equal / zero */

loc_003A4ADF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4AE8u); RECOMP_ABI_CALL(0x003A028Bu, sub_003A028B); /* call 0x003A028B */

loc_003A4AE8: ;
    MEM8(ebp + ebx + -16) = LO8(eax);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003A4ADF; /* jl: less (signed <) */

loc_003A4AF2: ;
    fp_push(MEMF(esi + 0x14)); /* fld float */
    PUSH32(esp, 0x20);
    POP32(esp, ebx);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + -16));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + 0xC) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4B10u); RECOMP_ABI_CALL(0x003A44F4u, sub_003A44F4); /* call 0x003A44F4 */

loc_003A4B10: ;
    MEMF(ebp + -8) = (float)fp_top(); /* fst */
    eax = MEM32(ebp + 0xC);
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(edi) = eax;
    fp_push(MEMF(esi + 0x14)); /* fld float */
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + -15));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4B33u); RECOMP_ABI_CALL(0x003A4558u, sub_003A4558); /* call 0x003A4558 */

loc_003A4B33: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + -8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ebp - 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A4B41; /* je: equal / zero */

loc_003A4B3D: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A4B4B; /* jne: not equal / not zero */

loc_003A4B41: ;
    eax = MEM32(ebp + 0xC);
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(edi) = eax;
    goto loc_003A4B4D;

loc_003A4B4B: ;
    fp_pop(); /* fstp st(0) */

loc_003A4B4D: ;
    fp_push(MEMF(esi + 0x14)); /* fld float */
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + -14));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4B65u); RECOMP_ABI_CALL(0x003A45C0u, sub_003A45C0); /* call 0x003A45C0 */

loc_003A4B65: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + -4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ebp - 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A4B73; /* je: equal / zero */

loc_003A4B6F: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A4B7D; /* jne: not equal / not zero */

loc_003A4B73: ;
    eax = MEM32(ebp + 0xC);
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(edi) = eax;
    goto loc_003A4B7F;

loc_003A4B7D: ;
    fp_pop(); /* fstp st(0) */

loc_003A4B7F: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    goto loc_003A4BFF;

loc_003A4B84: ;
    edi = 0; /* xor self */

loc_003A4B86: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4B8Fu); RECOMP_ABI_CALL(0x003A028Bu, sub_003A028B); /* call 0x003A028B */

loc_003A4B8F: ;
    MEM8(ebp + edi + -16) = LO8(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003A4B86; /* jl: less (signed <) */

loc_003A4B99: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM32(ebp + 0xC) = ebx;
    fp_push((double)SMEM32(ebp + 0xC)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_003A4BA9; /* jge: greater or equal (signed >=) */

loc_003A4BA3: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_003A4BA9: ;
    fp_top() = fp_top() + MEMF(esi + 0x14); /* fadd dword ptr [esi + 0x14] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4BB1u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_003A4BB1: ;
    edi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -16));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4BC1u); RECOMP_ABI_CALL(0x003A4974u, sub_003A4974); /* call 0x003A4974 */

loc_003A4BC1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A4BE9; /* je: equal / zero */

loc_003A4BC5: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -15));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4BD3u); RECOMP_ABI_CALL(0x003A49D3u, sub_003A49D3); /* call 0x003A49D3 */

loc_003A4BD3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A4BE9; /* je: equal / zero */

loc_003A4BD7: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -14));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4BE5u); RECOMP_ABI_CALL(0x003A4A36u, sub_003A4A36); /* call 0x003A4A36 */

loc_003A4BE5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A4BEF; /* jne: not equal / not zero */

loc_003A4BE9: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 5 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003A4B99; /* jb: below (unsigned <) */

loc_003A4BEF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM32(ebp + 8) = ebx;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_003A4BFF; /* jge: greater or equal (signed >=) */

loc_003A4BF9: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_003A4BFF: ;
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
 * sub_003A4C06
 * Original: 0x003A4C06 - 0x003A4CE4 (222 bytes, 75 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A4C06(void)
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

loc_003A4C06: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    esi = ecx;
    MEM32(edi) = 0x20;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x10), 0 (8-bit) */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    if (CMP_EQ(_fa, _fb)) goto loc_003A4C6A; /* je: equal / zero */

loc_003A4C20: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4C25u); RECOMP_ABI_CALL(0x003A4AC0u, sub_003A4AC0); /* call 0x003A4AC0 */

loc_003A4C25: ;
    MEMF(ebp + 0x10) = (float)fp_top(); /* fst */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() + MEMF(esi + 0x14); /* fadd dword ptr [esi + 0x14] */
    MEMF(esi + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x431A78)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x431a78] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A4C48; /* jne: not equal / not zero */

loc_003A4C3D: ;
    ecx = esi + 0x1C0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4C48u); RECOMP_ABI_CALL(0x0039E410u, sub_0039E410); /* call 0x0039E410 */

loc_003A4C48: ;
    PUSH32(esp, MEM32(edi));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4C54u); RECOMP_ABI_CALL(0x003A210Cu, sub_003A210C); /* call 0x003A210C */

loc_003A4C54: ;
    fp_push(MEMF(esi + 0x14)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C7084); /* fadd dword ptr [0x3c7084] */
    ecx = MEM32(ebp + 0xC);
    MEMF(esi + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_003A4CDE;

loc_003A4C6A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4C6Fu); RECOMP_ABI_CALL(0x003A4AC0u, sub_003A4AC0); /* call 0x003A4AC0 */

loc_003A4C6F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4C74u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_003A4C74: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(ebp + 0x10) = edi;
    fp_push((double)SMEM32(ebp + 0x10)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_003A4C86; /* jge: greater or equal (signed >=) */

loc_003A4C80: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_003A4C86: ;
    PUSH32(esp, MEM32(ebp + 8));
    MEMF(ebp + 0x10) = (float)fp_top(); /* fst */
    fp_top() = fp_top() + MEMF(esi + 0x14); /* fadd dword ptr [esi + 0x14] */
    ecx = esi;
    MEMF(esi + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4C99u); RECOMP_ABI_CALL(0x003A1FC4u, sub_003A1FC4); /* call 0x003A1FC4 */

loc_003A4C99: ;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x10), 0 (8-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003A4CC8; /* je: equal / zero */

loc_003A4CA1: ;
    fp_push(MEMF(esi + 0x14)); /* fld float */
    PUSH32(esp, 3);
    fp_top() = fp_top() + MEMD(0x3DA0A0); /* fadd qword ptr [0x3da0a0] */
    edx = 0; /* xor self */
    eax = edi;
    MEMF(esi + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(ebp + 8) = eax;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_003A4CD7; /* jge: greater or equal (signed >=) */

loc_003A4CC0: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */
    goto loc_003A4CD7;

loc_003A4CC8: ;
    fp_push(MEMF(esi + 0x14)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C6E40); /* fadd dword ptr [0x3c6e40] */
    MEMF(esi + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */

loc_003A4CD7: ;
    eax = MEM32(ebp + 0xC);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ecx;

loc_003A4CDE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4CE4
 * Original: 0x003A4CE4 - 0x003A4DA2 (190 bytes, 68 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A4CE4(void)
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

loc_003A4CE4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x8D8;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebx);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebp + -2264;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4D03u); RECOMP_ABI_CALL(0x003A3CFEu, sub_003A3CFE); /* call 0x003A3CFE */

loc_003A4D03: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_003A4D9C; /* jl: less (signed <) */

loc_003A4D0B: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_003A4D9C; /* jle: less or equal (signed <=) */

loc_003A4D17: ;
    PUSH32(esp, edi);
    edi = ebx + 4;
    MEM32(ebp + -8) = edi;

loc_003A4D1E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_003A4D9B; /* jl: less (signed <) */

loc_003A4D22: ;
    PUSH32(esp, edi);
    eax = ebp + -20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4D2Cu); RECOMP_ABI_CALL(0x0039FCD8u, sub_0039FCD8); /* call 0x0039FCD8 */

loc_003A4D2C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A4D6D; /* je: equal / zero */

loc_003A4D30: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp + -2264;
    MEM32(ebp + 8) = 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4D47u); RECOMP_ABI_CALL(0x003A4AC0u, sub_003A4AC0); /* call 0x003A4AC0 */

loc_003A4D47: ;
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    ecx = ebp + -2264;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4D5Du); RECOMP_ABI_CALL(0x003A4AC0u, sub_003A4AC0); /* call 0x003A4AC0 */

loc_003A4D5D: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + -4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebp - 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_003A4D6D; /* jp: parity */

loc_003A4D67: ;
    esi = ebp + -20;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */

loc_003A4D6D: ;
    edi = MEM32(ebp + -8);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp + -2264;
    MEM32(ebp + 8) = 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4D8Bu); RECOMP_ABI_CALL(0x003A4C06u, sub_003A4C06); /* call 0x003A4C06 */

loc_003A4D8B: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(ebp + 0xC);
    edi = edi + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx) (32-bit) */
    MEM32(ebp + -8) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_003A4D1E; /* jl: less (signed <) */

loc_003A4D9B: ;
    POP32(esp, edi);

loc_003A4D9C: ;
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
 * sub_003A4DA2
 * Original: 0x003A4DA2 - 0x003A4E54 (178 bytes, 65 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A4DA2(void)
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

loc_003A4DA2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x8D0;
    PUSH32(esp, ebx);
    fp_push(0.0); /* fldz */
    PUSH32(esp, esi);
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    esi = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebp + -2256;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4DC7u); RECOMP_ABI_CALL(0x003A3CFEu, sub_003A3CFE); /* call 0x003A3CFE */

loc_003A4DC7: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_003A4E4B; /* jl: less (signed <) */

loc_003A4DCD: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    fp_push(0.0); /* fldz */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEMF(ebp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ebp + -12) = 0x20;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_003A4E2C; /* jle: less or equal (signed <=) */

loc_003A4DE1: ;
    edi = edi + 4;

loc_003A4DE4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_003A4E2C; /* jl: less (signed <) */

loc_003A4DE8: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp + -2256;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4DFCu); RECOMP_ABI_CALL(0x003A4C06u, sub_003A4C06); /* call 0x003A4C06 */

loc_003A4DFC: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 8), 1 (8-bit) */
    ebx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003A4E12; /* jne: not equal / not zero */

loc_003A4E04: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = fp_top() + MEMF(ebp + -4); /* fadd dword ptr [ebp - 4] */
    fp_top() = fp_top() + MEMD(0x3DA0A0); /* fadd qword ptr [0x3da0a0] */
    goto loc_003A4E1E;

loc_003A4E12: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = fp_top() + MEMF(ebp + -4); /* fadd dword ptr [ebp - 4] */
    fp_top() = fp_top() + MEMF(0x3C6E40); /* fadd dword ptr [0x3c6e40] */

loc_003A4E1E: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    edi = edi + 0xC;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003A4DE4; /* jl: less (signed <) */

loc_003A4E2C: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    ecx = ebp + -2256;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4E3Bu); RECOMP_ABI_CALL(0x0039E27Bu, sub_0039E27B); /* call 0x0039E27B */

loc_003A4E3B: ;
    fp_top() = fp_top() + MEMF(ebp + -4); /* fadd dword ptr [ebp - 4] */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_003A4E49; /* jl: less (signed <) */

loc_003A4E42: ;
    eax = MEM32(ebp + 0x10);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */

loc_003A4E49: ;
    fp_pop(); /* fstp st(0) */

loc_003A4E4B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
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
 * sub_003A4E54
 * Original: 0x003A4E54 - 0x003A4E83 (47 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A4E54(void)
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

loc_003A4E54: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + -4) = 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4E6Bu); RECOMP_ABI_CALL(0x003A4AC0u, sub_003A4AC0); /* call 0x003A4AC0 */

loc_003A4E6B: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A4E7D; /* jne: not equal / not zero */

loc_003A4E78: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003A4E7F;

loc_003A4E7D: ;
    eax = 0; /* xor self */

loc_003A4E7F: ;
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
 * sub_003A4E83
 * Original: 0x003A4E83 - 0x003A4F21 (158 bytes, 63 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A4E83(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A4E83: ;
    PUSH32(esp, ebp);
    ebp = esp + -112;
    esp = esp - 0xE4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -116;
    PUSH32(esp, 0x003A4E9Bu); RECOMP_ABI_CALL(0x0039F1F4u, sub_0039F1F4); /* call 0x0039F1F4 */

loc_003A4E9B: ;
    edi = MEM32(ebp + 0x78);
    ecx = MEM32(esi);
    eax = edi + edi * 2;
    eax = ecx + eax * 4 + 4;
    PUSH32(esp, eax);
    ecx = ebp + -116;
    PUSH32(esp, 0x003A4EB0u); RECOMP_ABI_CALL(0x0039F24Fu, sub_0039F24F); /* call 0x0039F24F */

loc_003A4EB0: ;
    eax = MEM32(esi);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003A4F0C; /* jge: greater or equal (signed >=) */

loc_003A4EB7: ;
    ebx = edi + edi * 2;
    ebx = ebx << 2;

loc_003A4EBD: ;
    eax = ebx + eax + 4;
    PUSH32(esp, eax);
    ecx = ebp + -116;
    MEM32(ebp + 0x6C) = eax;
    PUSH32(esp, 0x003A4ECDu); RECOMP_ABI_CALL(0x003A3EAFu, sub_003A3EAF); /* call 0x003A3EAF */

loc_003A4ECD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A4EF3; /* jne: not equal / not zero */

loc_003A4ED1: ;
    PUSH32(esp, MEM32(ebp + 0x6C));
    ecx = esi + 4;
    PUSH32(esp, 0x003A4EDCu); RECOMP_ABI_CALL(0x003A4E54u, sub_003A4E54); /* call 0x003A4E54 */

loc_003A4EDC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A4EF3; /* jne: not equal / not zero */

loc_003A4EE0: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x78));
    eax = ebp + -116;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003A4EEFu); RECOMP_ABI_CALL(0x003A3F2Eu, sub_003A3F2E); /* call 0x003A3F2E */

loc_003A4EEF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A4F18; /* jne: not equal / not zero */

loc_003A4EF3: ;
    eax = MEM32(esi);
    eax = ebx + eax + 4;
    PUSH32(esp, eax);
    ecx = ebp + -116;
    PUSH32(esp, 0x003A4F02u); RECOMP_ABI_CALL(0x0039F24Fu, sub_0039F24F); /* call 0x0039F24F */

loc_003A4F02: ;
    eax = MEM32(esi);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003A4EBD; /* jl: less (signed <) */

loc_003A4F0C: ;
    SET_LO8(eax, 0); /* xor self */

loc_003A4F0E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    ebp = ebp + 0x70;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

loc_003A4F18: ;
    eax = MEM32(ebp + 0x7C);
    MEM32(eax) = edi;
    SET_LO8(eax, 1);
    goto loc_003A4F0E;

}

/**
 * sub_003A4F21
 * Original: 0x003A4F21 - 0x003A508E (365 bytes, 150 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A4F21(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A4F21: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x24;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi) = eax;
    PUSH32(esp, MEM32(eax));
    ecx = esi + 4;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4F3Eu); RECOMP_ABI_CALL(0x003A3CFEu, sub_003A3CFE); /* call 0x003A3CFE */

loc_003A4F3E: ;
    edi = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM8(ebp + 0xF) = 0;
    if (CMP_L(_fas, _fbs)) goto loc_003A5085; /* jl: less (signed <) */

loc_003A4F4E: ;
    eax = MEM32(esi);
    eax = MEM32(eax);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_003A5028; /* jle: less or equal (signed <=) */

loc_003A4F5B: ;
    MEM32(ebp + -4) = ebx;

loc_003A4F5E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_003A5085; /* jl: less (signed <) */

loc_003A4F66: ;
    eax = MEM32(esi);
    ecx = MEM32(ebp + -4);
    eax = ecx + eax + 4;
    PUSH32(esp, eax);
    ecx = esi + 4;
    MEM32(ebp + -24) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4F7Bu); RECOMP_ABI_CALL(0x003A4E54u, sub_003A4E54); /* call 0x003A4E54 */

loc_003A4F7B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A4F9C; /* je: equal / zero */

loc_003A4F7F: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4F8Bu); RECOMP_ABI_CALL(0x003A4E83u, sub_003A4E83); /* call 0x003A4E83 */

loc_003A4F8B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A4F9C; /* je: equal / zero */

loc_003A4F8F: ;
    PUSH32(esp, MEM32(ebp + -8));
    ecx = esi;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4F9Au); RECOMP_ABI_CALL(0x0039F3C9u, sub_0039F3C9); /* call 0x0039F3C9 */

loc_003A4F9A: ;
    edi = eax;

loc_003A4F9C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_003A5016; /* jl: less (signed <) */

loc_003A4FA0: ;
    eax = ebp + -36;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4FB0u); RECOMP_ABI_CALL(0x003A3FA6u, sub_003A3FA6); /* call 0x003A3FA6 */

loc_003A4FB0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A4FF6; /* je: equal / zero */

loc_003A4FB4: ;
    eax = ebp + -36;
    PUSH32(esp, eax);
    ecx = esi + 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4FC0u); RECOMP_ABI_CALL(0x003A4E54u, sub_003A4E54); /* call 0x003A4E54 */

loc_003A4FC0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A4FE5; /* je: equal / zero */

loc_003A4FC4: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4FD0u); RECOMP_ABI_CALL(0x003A4E83u, sub_003A4E83); /* call 0x003A4E83 */

loc_003A4FD0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A4FE5; /* je: equal / zero */

loc_003A4FD4: ;
    PUSH32(esp, MEM32(ebp + -12));
    ecx = esi;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4FDFu); RECOMP_ABI_CALL(0x0039F3C9u, sub_0039F3C9); /* call 0x0039F3C9 */

loc_003A4FDF: ;
    MEM8(ebp + 0xF) = 1;
    goto loc_003A4FF4;

loc_003A4FE5: ;
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -16));
    ecx = esi;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4FF4u); RECOMP_ABI_CALL(0x0039F43Eu, sub_0039F43E); /* call 0x0039F43E */

loc_003A4FF4: ;
    edi = eax;

loc_003A4FF6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_003A5016; /* jl: less (signed <) */

loc_003A4FFA: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -24));
    ecx = esi + 4;
    MEM32(ebp + -20) = 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5014u); RECOMP_ABI_CALL(0x003A4C06u, sub_003A4C06); /* call 0x003A4C06 */

loc_003A5014: ;
    edi = eax;

loc_003A5016: ;
    eax = MEM32(esi);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 0xC;
    eax = MEM32(eax);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003A4F5E; /* jl: less (signed <) */

loc_003A5028: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_003A5085; /* jl: less (signed <) */

loc_003A502C: ;
    _fa = (uint32_t)(MEM8(ebp + 0xF)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xF), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A5085; /* je: equal / zero */

loc_003A5032: ;
    eax = MEM32(esi);
    PUSH32(esp, MEM32(eax));
    ecx = esi + 4;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5041u); RECOMP_ABI_CALL(0x003A3CFEu, sub_003A3CFE); /* call 0x003A3CFE */

loc_003A5041: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_003A5085; /* jl: less (signed <) */

loc_003A5047: ;
    eax = MEM32(esi);
    eax = MEM32(eax);
    ebx = 0; /* xor self */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_003A5085; /* jle: less or equal (signed <=) */

loc_003A5052: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_003A5085; /* jl: less (signed <) */

loc_003A5056: ;
    eax = ebp + -36;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5066u); RECOMP_ABI_CALL(0x003A3FA6u, sub_003A3FA6); /* call 0x003A3FA6 */

loc_003A5066: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A507B; /* je: equal / zero */

loc_003A506A: ;
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5079u); RECOMP_ABI_CALL(0x0039F43Eu, sub_0039F43E); /* call 0x0039F43E */

loc_003A5079: ;
    edi = eax;

loc_003A507B: ;
    eax = MEM32(esi);
    eax = MEM32(eax);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003A5052; /* jl: less (signed <) */

loc_003A5085: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003A508E
 * Original: 0x003A508E - 0x003A52EE (608 bytes, 202 insns)
 * Category: game_render
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A508E(void)
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

loc_003A508E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xAF4;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 8), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A50B1; /* je: equal / zero */

loc_003A509D: ;
    _fa = (uint32_t)(MEM8(ebp + 0x1C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x1C), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A50B1; /* jne: not equal / not zero */

loc_003A50A3: ;
    _fa = (uint32_t)(MEM8(ebp + 0x20)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x20), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A50B1; /* jne: not equal / not zero */

loc_003A50A9: ;
    MEM8(ebp + 0x1C) = 0;
    MEM8(ebp + 0x20) = 1;

loc_003A50B1: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x14), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A50BD; /* jne: not equal / not zero */

loc_003A50B7: ;
    _fa = (uint32_t)(MEM8(ebp + 0x15)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x15), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A50D5; /* je: equal / zero */

loc_003A50BD: ;
    _fa = (uint32_t)(MEM8(ebp + 0x1C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x1C), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A50CD; /* jne: not equal / not zero */

loc_003A50C3: ;
    _fa = (uint32_t)(MEM8(ebp + 0x20)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x20), 0 (8-bit) */
    MEM8(ebp + 0x1C) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_003A50D1; /* je: equal / zero */

loc_003A50CD: ;
    MEM8(ebp + 0x1C) = 1;

loc_003A50D1: ;
    MEM8(ebp + 0x20) = 0;

loc_003A50D5: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(MEM8(ebp + 0x20)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x20), 0 (8-bit) */
    MEM32(ebp + -4) = edi;
    MEM32(ebp + -12) = edi;
    MEM8(ebp + -5) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_003A515F; /* je: equal / zero */

loc_003A50ED: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x1324);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A50FCu); RECOMP_ABI_CALL(0x001A1DDBu, sub_001A1DDB); /* call 0x001A1DDB */

loc_003A50FC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003A510A; /* jne: not equal / not zero */

loc_003A5103: ;
    MEM32(ebp + -4) = 0x8007000Eu;

loc_003A510A: ;
    ecx = MEM32(ebx);
    MEM32(eax) = ecx;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), edi (32-bit) */
    MEM32(ebp + 0x18) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_003A5136; /* jle: less or equal (signed <=) */

loc_003A5115: ;
    edx = ebx;
    ecx = eax + 4;
    edx = edx - eax;

loc_003A511C: ;
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 0x18);
    esi = edx + ecx;
    edi = ecx;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003A511C; /* jl: less (signed <) */

loc_003A5131: ;
    eax = MEM32(ebp + -12);
    edi = 0; /* xor self */

loc_003A5136: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 8), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A5145; /* jne: not equal / not zero */

loc_003A513C: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xC), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A515F; /* je: equal / zero */

loc_003A5142: ;
    eax = MEM32(ebp + -12);

loc_003A5145: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A514Bu); RECOMP_ABI_CALL(0x003B0C38u, sub_003B0C38); /* call 0x003B0C38 */

loc_003A514B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A515F; /* jne: not equal / not zero */

loc_003A514F: ;
    _fa = (uint32_t)(MEM8(ebp + 0x1C)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x1C), LO8(eax) (8-bit) */
    MEM8(ebp + -5) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_003A5169; /* jne: not equal / not zero */

loc_003A5158: ;
    MEM32(ebp + -4) = 0xFFFFEFE5u;

loc_003A515F: ;
    _fa = (uint32_t)(MEM8(ebp + 0x1C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x1C), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A5268; /* je: equal / zero */

loc_003A5169: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edi (32-bit) */
    esi = MEM32(ebx);
    if (CMP_L(_fas, _fbs)) goto loc_003A52CC; /* jl: less (signed <) */

loc_003A5174: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 8), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A5183; /* je: equal / zero */

loc_003A517A: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5180u); RECOMP_ABI_CALL(0x003A3858u, sub_003A3858); /* call 0x003A3858 */

loc_003A5180: ;
    MEM32(ebp + -4) = eax;

loc_003A5183: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003A52CC; /* jl: less (signed <) */

loc_003A518C: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xC), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A51AF; /* je: equal / zero */

loc_003A5192: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = ebp + -556;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A51A1u); RECOMP_ABI_CALL(0x003A466Bu, sub_003A466B); /* call 0x003A466B */

loc_003A51A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_003A52CC; /* jl: less (signed <) */

loc_003A51AC: ;
    MEM32(ebp + -4) = edi;

loc_003A51AF: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003A52CC; /* jl: less (signed <) */

loc_003A51B8: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xC), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A51DE; /* je: equal / zero */

loc_003A51BE: ;
    _fa = (uint32_t)(MEM8(ebp + 0x15)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x15), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A51DE; /* jne: not equal / not zero */

loc_003A51C4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = ebp + -36;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A51D0u); RECOMP_ABI_CALL(0x003A4A94u, sub_003A4A94); /* call 0x003A4A94 */

loc_003A51D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_003A52CC; /* jl: less (signed <) */

loc_003A51DB: ;
    MEM32(ebp + -4) = edi;

loc_003A51DE: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003A52CC; /* jl: less (signed <) */

loc_003A51E7: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xC), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A520A; /* je: equal / zero */

loc_003A51ED: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = ebp + -2804;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A51FCu); RECOMP_ABI_CALL(0x003A4F21u, sub_003A4F21); /* call 0x003A4F21 */

loc_003A51FC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_003A52CC; /* jl: less (signed <) */

loc_003A5207: ;
    MEM32(ebp + -4) = edi;

loc_003A520A: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003A52CC; /* jl: less (signed <) */

loc_003A5213: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xC), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A5225; /* je: equal / zero */

loc_003A5219: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5222u); RECOMP_ABI_CALL(0x003A4CE4u, sub_003A4CE4); /* call 0x003A4CE4 */

loc_003A5222: ;
    MEM32(ebp + -4) = eax;

loc_003A5225: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003A52CC; /* jl: less (signed <) */

loc_003A522E: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 8), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A523D; /* je: equal / zero */

loc_003A5234: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A523Au); RECOMP_ABI_CALL(0x003A3926u, sub_003A3926); /* call 0x003A3926 */

loc_003A523A: ;
    MEM32(ebp + -4) = eax;

loc_003A523D: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003A52CC; /* jl: less (signed <) */

loc_003A5246: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xC), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A5255; /* je: equal / zero */

loc_003A524C: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5252u); RECOMP_ABI_CALL(0x003A39B5u, sub_003A39B5); /* call 0x003A39B5 */

loc_003A5252: ;
    MEM32(ebp + -4) = eax;

loc_003A5255: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003A52CC; /* jl: less (signed <) */

loc_003A525A: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xC), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A5268; /* je: equal / zero */

loc_003A5260: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003A5169; /* jl: less (signed <) */

loc_003A5268: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003A52CC; /* jl: less (signed <) */

loc_003A526D: ;
    _fa = (uint32_t)(MEM8(ebp + 0x20)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x20), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A52E4; /* je: equal / zero */

loc_003A5273: ;
    _fa = (uint32_t)(MEM8(ebp + -5)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -5), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A52CC; /* jne: not equal / not zero */

loc_003A5279: ;
    _fa = (uint32_t)(MEM8(ebp + 0x1C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x1C), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A52A8; /* je: equal / zero */

loc_003A527F: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A528Cu); RECOMP_ABI_CALL(0x003A4DA2u, sub_003A4DA2); /* call 0x003A4DA2 */

loc_003A528C: ;
    eax = ebp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A529Bu); RECOMP_ABI_CALL(0x003A4DA2u, sub_003A4DA2); /* call 0x003A4DA2 */

loc_003A529B: ;
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebp + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_003A52CC; /* jp: parity */

loc_003A52A8: ;
    ecx = MEM32(ebp + -12);
    eax = MEM32(ecx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebx) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_003A52CC; /* jle: less or equal (signed <=) */

loc_003A52B5: ;
    eax = ebx + 4;
    ecx = ecx - ebx;

loc_003A52BA: ;
    esi = ecx + eax;
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    eax = eax + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebx) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003A52BA; /* jl: less (signed <) */

loc_003A52CA: ;
    edi = 0; /* xor self */

loc_003A52CC: ;
    _fa = (uint32_t)(MEM8(ebp + 0x20)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x20), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A52E4; /* je: equal / zero */

loc_003A52D2: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A52E4; /* je: equal / zero */

loc_003A52D7: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, MEM32(ebp + -12));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A52E4u); RECOMP_ABI_CALL(0x001A1E7Bu, sub_001A1E7B); /* call 0x001A1E7B */

loc_003A52E4: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A52EE
 * Original: 0x003A52EE - 0x003A5759 (1131 bytes, 370 insns)
 * Category: game_render
 * CC: cdecl, 9 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A52EE(void)
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

loc_003A52EE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x9D0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x18);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A5315; /* je: equal / zero */

loc_003A5304: ;
    PUSH32(esp, MEM32(ebp + 0x20));
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5311u); RECOMP_ABI_CALL(0x003A1017u, sub_003A1017); /* call 0x003A1017 */

loc_003A5311: ;
    edi = eax;
    goto loc_003A535B;

loc_003A5315: ;
    _fa = (uint32_t)(MEM8(ebp + 0x15)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x15), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A535B; /* jne: not equal / not zero */

loc_003A531B: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x14), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A535B; /* je: equal / zero */

loc_003A5321: ;
    eax = MEM32(esi);
    eax = eax + eax * 2;
    eax = esi + eax * 4 + 4;
    MEM32(eax) = MEM32(eax) & 0xFFFFFFFEu;
    eax = MEM32(esi);
    ecx = eax + eax * 2;
    ecx = esi + ecx * 4 + 4;
    PUSH32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3BC52C);
    MEM32(esi) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5344u); RECOMP_ABI_CALL(0x0039FB00u, sub_0039FB00); /* call 0x0039FB00 */

loc_003A5344: ;
    eax = MEM32(esi);
    ecx = eax + eax * 2;
    ecx = esi + ecx * 4 + 4;
    PUSH32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3BC53C);
    MEM32(esi) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A535Bu); RECOMP_ABI_CALL(0x0039FB00u, sub_0039FB00); /* call 0x0039FB00 */

loc_003A535B: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    edi = MEM32(ebp + 0x1C);
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -12) = eax;
    if (TEST_S(_fas, _fbs)) goto loc_003A538E; /* jl: less (signed <) */

loc_003A536A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A538E; /* je: equal / zero */

loc_003A536E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3BC514);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A537Au); RECOMP_ABI_CALL(0x003A1EAFu, sub_003A1EAF); /* call 0x003A1EAF */

loc_003A537A: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_003A538E; /* jl: less (signed <) */

loc_003A5381: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A538Eu); RECOMP_ABI_CALL(0x003A4DA2u, sub_003A4DA2); /* call 0x003A4DA2 */

loc_003A538E: ;
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A53A6u); RECOMP_ABI_CALL(0x003A508Eu, sub_003A508E); /* call 0x003A508E */

loc_003A53A6: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_003A55DF; /* jl: less (signed <) */

loc_003A53B0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A55DF; /* je: equal / zero */

loc_003A53B8: ;
    eax = MEM32(ebp + 0x14);
    eax = eax & 0xFF;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = edi;
    if ((_fa == 0)) goto loc_003A53D7; /* je: equal / zero */

loc_003A53C6: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003A53D0; /* je: equal / zero */

loc_003A53C9: ;
    PUSH32(esp, 0x3BC4F4);
    goto loc_003A53DC;

loc_003A53D0: ;
    PUSH32(esp, 0x3BC4E8);
    goto loc_003A53DC;

loc_003A53D7: ;
    PUSH32(esp, 0x3BC4C8);

loc_003A53DC: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A53E1u); RECOMP_ABI_CALL(0x003A1F56u, sub_003A1F56); /* call 0x003A1F56 */

loc_003A53E1: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_003A55DF; /* jl: less (signed <) */

loc_003A53EB: ;
    _fa = (uint32_t)(MEM8(ebp + 0x15)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x15), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A53FF; /* je: equal / zero */

loc_003A53F1: ;
    PUSH32(esp, 0x3BC4B4);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A53FDu); RECOMP_ABI_CALL(0x003A1F56u, sub_003A1F56); /* call 0x003A1F56 */

loc_003A53FD: ;
    ebx = eax;

loc_003A53FF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_003A55DF; /* jl: less (signed <) */

loc_003A5407: ;
    PUSH32(esp, 0x3BC4A0);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5413u); RECOMP_ABI_CALL(0x003A1F56u, sub_003A1F56); /* call 0x003A1F56 */

loc_003A5413: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_003A55DF; /* jl: less (signed <) */

loc_003A541D: ;
    PUSH32(esp, MEM32(esi));
    ecx = ebp + -2512;
    PUSH32(esp, MEM32(ebp + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A542Du); RECOMP_ABI_CALL(0x003A3CFEu, sub_003A3CFE); /* call 0x003A3CFE */

loc_003A542D: ;
    ebx = eax;
    PUSH32(esp, 0x3F);
    eax = 0; /* xor self */
    MEM8(ebp + -268) = 0;
    POP32(esp, ecx);
    edi = ebp + -267;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    edi = 0; /* xor self */
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003A551D; /* jle: less or equal (signed <=) */

loc_003A5450: ;
    eax = esi + 4;
    MEM32(ebp + 0x28) = eax;

loc_003A5456: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_003A551D; /* jl: less (signed <) */

loc_003A545E: ;
    eax = ebp + 0x18;
    fp_push(0.0); /* fldz */
    PUSH32(esp, eax);
    MEMF(ebp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ebp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x28));
    ecx = ebp + -2512;
    MEM32(ebp + 0x18) = 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5480u); RECOMP_ABI_CALL(0x003A4C06u, sub_003A4C06); /* call 0x003A4C06 */

loc_003A5480: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_003A5510; /* jl: less (signed <) */

loc_003A548A: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(ebp + 0x24)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_003A54B7; /* jp: parity */

loc_003A549C: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0x20 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A54B7; /* jne: not equal / not zero */

loc_003A54A2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x3BC48C);
    PUSH32(esp, MEM32(ebp + 0x1C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A54B0u); RECOMP_ABI_CALL(0x003A1EAFu, sub_003A1EAF); /* call 0x003A1EAF */

loc_003A54B0: ;
    esp = esp + 0xC;
    ebx = eax;
    goto loc_003A54E9;

loc_003A54B7: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x18);
    fp_push(MEMF(ebp + 0x24)); /* fld float */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3BC478);
    PUSH32(esp, MEM32(ebp + 0x1C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A54D2u); RECOMP_ABI_CALL(0x003A1EAFu, sub_003A1EAF); /* call 0x003A1EAF */

loc_003A54D2: ;
    ebx = eax;
    eax = MEM32(ebp + 0x18);
    MEM8(ebp + eax + -268) = 1;
    esp = esp + 0x18;
    MEM8(ebp + -268) = 1;

loc_003A54E9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_003A5510; /* jl: less (signed <) */

loc_003A54ED: ;
    PUSH32(esp, MEM32(ebp + 0x1C));
    ecx = ebp + 0x10;
    PUSH32(esp, MEM32(ebp + 0x28));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A54FBu); RECOMP_ABI_CALL(0x003A4724u, sub_003A4724); /* call 0x003A4724 */

loc_003A54FB: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_003A5510; /* jl: less (signed <) */

loc_003A5501: ;
    ecx = MEM32(ebp + 0x1C);
    PUSH32(esp, 0x3D280C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A550Eu); RECOMP_ABI_CALL(0x003A1F56u, sub_003A1F56); /* call 0x003A1F56 */

loc_003A550E: ;
    ebx = eax;

loc_003A5510: ;
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) + 0xC;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003A5456; /* jl: less (signed <) */

loc_003A551D: ;
    eax = ebp + 0x18;
    PUSH32(esp, eax);
    ecx = ebp + -2512;
    MEM32(ebp + 0x18) = 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5533u); RECOMP_ABI_CALL(0x0039E27Bu, sub_0039E27B); /* call 0x0039E27B */

loc_003A5533: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_003A5562; /* jnp: not parity */

loc_003A5544: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3BC458);
    PUSH32(esp, MEM32(ebp + 0x1C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A555Bu); RECOMP_ABI_CALL(0x003A1EAFu, sub_003A1EAF); /* call 0x003A1EAF */

loc_003A555B: ;
    esp = esp + 0x14;
    ebx = eax;
    goto loc_003A5564;

loc_003A5562: ;
    fp_pop(); /* fstp st(0) */

loc_003A5564: ;
    _fa = (uint32_t)(MEM8(ebp + -268)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -268), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A55DF; /* jne: not equal / not zero */

loc_003A556D: ;
    PUSH32(esp, 0x3BC444);
    PUSH32(esp, MEM32(ebp + 0x1C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A557Au); RECOMP_ABI_CALL(0x003A1EAFu, sub_003A1EAF); /* call 0x003A1EAF */

loc_003A557A: ;
    POP32(esp, ecx);
    edi = 0x47B1D4;
    POP32(esp, ecx);
    MEM32(ebp + 0x18) = 1;
    edi = edi - 0x100;
    MEM32(ebp + 0x28) = 0xFFFFFF00u;

loc_003A5595: ;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF7Cu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 0xFFFFFF7Cu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A55BE; /* je: equal / zero */

loc_003A559E: ;
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(MEM8(ebp + eax + -268)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + eax + -268), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A55BE; /* je: equal / zero */

loc_003A55AB: ;
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, eax);
    PUSH32(esp, 0x3BC438);
    PUSH32(esp, MEM32(ebp + 0x1C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A55BBu); RECOMP_ABI_CALL(0x003A1EAFu, sub_003A1EAF); /* call 0x003A1EAF */

loc_003A55BB: ;
    esp = esp + 0x10;

loc_003A55BE: ;
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) + 4;
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x47B4CC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x47B4CC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003A5595; /* jl: less (signed <) */

loc_003A55D0: ;
    PUSH32(esp, 0x3D280C);
    PUSH32(esp, MEM32(ebp + 0x1C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A55DDu); RECOMP_ABI_CALL(0x003A1EAFu, sub_003A1EAF); /* call 0x003A1EAF */

loc_003A55DD: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_003A55DF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    edi = MEM32(esi);
    if (TEST_S(_fas, _fbs)) goto loc_003A570D; /* jl: less (signed <) */

loc_003A55E9: ;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A56B5; /* je: equal / zero */

loc_003A55F3: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 8), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A5677; /* je: equal / zero */

loc_003A55F9: ;
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5606u); RECOMP_ABI_CALL(0x003A4DA2u, sub_003A4DA2); /* call 0x003A4DA2 */

loc_003A5606: ;
    ebx = eax;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A5622; /* je: equal / zero */

loc_003A560F: ;
    MEM32(ebp + 0x18) = eax;
    fp_push((double)SMEM32(ebp + 0x18)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_003A561D; /* jge: greater or equal (signed >=) */

loc_003A5617: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_003A561D: ;
    fp_top() = MEMF(ebp + 0x14) / fp_top(); /* fdivr dword ptr [ebp + 0x14] */
    goto loc_003A5624;

loc_003A5622: ;
    fp_push(0.0); /* fldz */

loc_003A5624: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_003A570B; /* jl: less (signed <) */

loc_003A562C: ;
    esp = esp - 0x10;
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    PUSH32(esp, 0x3BC404);
    PUSH32(esp, MEM32(ebp + 0x1C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5647u); RECOMP_ABI_CALL(0x003A1EAFu, sub_003A1EAF); /* call 0x003A1EAF */

loc_003A5647: ;
    ebx = eax;
    esp = esp + 0x1C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_003A570D; /* jl: less (signed <) */

loc_003A5654: ;
    fp_push(MEMF(ebp + -8)); /* fld float */
    eax = MEM32(ebp + -12);
    fp_top() = fp_top() - MEMF(ebp + 0x14); /* fsub dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = eax - edi;
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3BC3D4);
    PUSH32(esp, MEM32(ebp + 0x1C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5672u); RECOMP_ABI_CALL(0x003A1EAFu, sub_003A1EAF); /* call 0x003A1EAF */

loc_003A5672: ;
    esp = esp + 0x14;
    goto loc_003A56B3;

loc_003A5677: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A5691; /* je: equal / zero */

loc_003A567E: ;
    MEM32(ebp + 0x14) = eax;
    fp_push((double)SMEM32(ebp + 0x14)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_003A568C; /* jge: greater or equal (signed >=) */

loc_003A5686: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_003A568C: ;
    fp_top() = MEMF(ebp + -8) / fp_top(); /* fdivr dword ptr [ebp - 8] */
    goto loc_003A5693;

loc_003A5691: ;
    fp_push(0.0); /* fldz */

loc_003A5693: ;
    esp = esp - 0x10;
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, 0x3BC404);
    PUSH32(esp, MEM32(ebp + 0x1C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A56B0u); RECOMP_ABI_CALL(0x003A1EAFu, sub_003A1EAF); /* call 0x003A1EAF */

loc_003A56B0: ;
    esp = esp + 0x1C;

loc_003A56B3: ;
    ebx = eax;

loc_003A56B5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_003A570D; /* jl: less (signed <) */

loc_003A56B9: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x88) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x88 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003A56F5; /* jle: less or equal (signed <=) */

loc_003A56C2: ;
    PUSH32(esp, eax);
    eax = ebp + -268;
    PUSH32(esp, 0x3BC3A0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A56D4u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_003A56D4: ;
    ecx = MEM32(ebp + 0x20);
    eax = MEM32(ecx);
    esp = esp + 0xC;
    edx = ebp + -268;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x258);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003A56F0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003A56F0: ;
    ebx = 0x80004005u;

loc_003A56F5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_003A570D; /* jl: less (signed <) */

loc_003A56F9: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A570D; /* je: equal / zero */

loc_003A56FF: ;
    eax = eax + eax * 2;
    esi = esi + eax * 4 + -8;
    MEM32(esi) = MEM32(esi) | 1;
    goto loc_003A570D;

loc_003A570B: ;
    fp_pop(); /* fstp st(0) */

loc_003A570D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFEFE5u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFEFE5u (32-bit) */
    esi = MEM32(ebp + 0x20);
    if (CMP_NE(_fa, _fb)) goto loc_003A5730; /* jne: not equal / not zero */

loc_003A5718: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3BC350);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x79);
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003A572Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003A572B: ;
    ebx = 0x80004005u;

loc_003A5730: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFEFE4u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFEFE4u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A5750; /* jne: not equal / not zero */

loc_003A5738: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3BC308);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x6D);
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003A574Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003A574B: ;
    ebx = 0x80004005u;

loc_003A5750: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 40; return; /* ret 36 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A5759
 * Original: 0x003A5759 - 0x003A589C (323 bytes, 114 insns)
 * Category: game_render
 * CC: cdecl, 10 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A5759(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A5759: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x24870000);
    edi = ecx;
    PUSH32(esp, 0x1324);
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5774u); RECOMP_ABI_CALL(0x001A1DDBu, sub_001A1DDB); /* call 0x001A1DDB */

loc_003A5774: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A5784; /* jne: not equal / not zero */

loc_003A577A: ;
    ebx = 0x8007000Eu;
    goto loc_003A5893;

loc_003A5784: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A57AF; /* jne: not equal / not zero */

loc_003A5789: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5791u); RECOMP_ABI_CALL(0x0039E23Cu, sub_0039E23C); /* call 0x0039E23C */

loc_003A5791: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A579Bu); RECOMP_ABI_CALL(0x0039E246u, sub_0039E246); /* call 0x0039E246 */

loc_003A579B: ;
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A57A5u); RECOMP_ABI_CALL(0x003A11EFu, sub_003A11EF); /* call 0x003A11EF */

loc_003A57A5: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_003A5888; /* jl: less (signed <) */

loc_003A57AF: ;
    PUSH32(esp, MEM32(ebp + 0x2C));
    edi = MEM32(ebp + 0x14);
    PUSH32(esp, MEM32(ebp + 0x28));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A57D1u); RECOMP_ABI_CALL(0x003A52EEu, sub_003A52EE); /* call 0x003A52EE */

loc_003A57D1: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_003A5888; /* jl: less (signed <) */

loc_003A57DB: ;
    eax = MEM32(esi);
    eax = eax << 4;
    ecx = ebp + 0x18;
    eax = eax + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A57EDu); RECOMP_ABI_CALL(0x003A1DC2u, sub_003A1DC2); /* call 0x003A1DC2 */

loc_003A57ED: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM32(ebp + 0x24) = ebx;
    if (TEST_S(_fas, _fbs)) goto loc_003A5888; /* jl: less (signed <) */

loc_003A57FA: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5802u); RECOMP_ABI_CALL(0x0039E23Cu, sub_0039E23C); /* call 0x0039E23C */

loc_003A5802: ;
    edi = edi & 0xFF;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A5810; /* jne: not equal / not zero */

loc_003A580F: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003A5810: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A5818; /* jne: not equal / not zero */

loc_003A5815: ;
    PUSH32(esp, 2);
    POP32(esp, ecx);

loc_003A5818: ;
    SET_LO16(ecx, MEM16(ecx * 2 + 0x3BC54C));
    MEM16(eax) = LO16(ecx);
    SET_LO16(ecx, MEM16(esi));
    MEM16(eax + 2) = LO16(ecx);
    edx = 0; /* xor self */
    eax = eax + 4;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), edx (32-bit) */
    ecx = esi + 4;
    if (CMP_LE(_fas, _fbs)) goto loc_003A5880; /* jle: less or equal (signed <=) */

loc_003A5836: ;
    MEM32(eax) = MEM32(eax) & 0;
    edi = MEM32(ecx + 8);
    edi = edi >> 4;
    eax = eax + 4;
    MEM32(eax) = edi;
    edi = MEM32(ecx + 4);
    ebx = MEM32(ecx + 8);
    edi = edi >> 2;
    edi = edi & 0xFFFFFFF;
    ebx = ebx << 0x1C;
    edi = edi | ebx;
    eax = eax + 4;
    MEM32(eax) = edi;
    edi = MEM32(ecx);
    ebx = MEM32(ecx + 4);
    edi = edi & 0x3FFFFFFF;
    ebx = ebx << 0x1E;
    eax = eax + 4;
    edi = edi | ebx;
    MEM32(eax) = edi;
    eax = eax + 4;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003A5836; /* jl: less (signed <) */

loc_003A587D: ;
    ebx = MEM32(ebp + 0x24);

loc_003A5880: ;
    eax = MEM32(ebp + 0x1C);
    ecx = MEM32(ebp + 0x18);
    MEM32(eax) = ecx;

loc_003A5888: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5893u); RECOMP_ABI_CALL(0x001A1E7Bu, sub_001A1E7B); /* call 0x001A1E7B */

loc_003A5893: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 44; return; /* ret 40 */

}

/**
 * sub_003A589C
 * Original: 0x003A589C - 0x003A5913 (119 bytes, 45 insns)
 * Category: game_render
 * CC: cdecl, 12 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A589C(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A589C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0x1C);
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A58EE; /* jne: not equal / not zero */

loc_003A58A8: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 8), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A58B2; /* je: equal / zero */

loc_003A58AD: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xC), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A58B6; /* jne: not equal / not zero */

loc_003A58B2: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A58D7; /* je: equal / zero */

loc_003A58B6: ;
    PUSH32(esp, MEM32(ebp + 0x2C));
    ecx = ZX8(MEM8(ecx));
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A58D5u); RECOMP_ABI_CALL(0x003B53DFu, sub_003B53DF); /* call 0x003B53DF */

loc_003A58D5: ;
    goto loc_003A590F;

loc_003A58D7: ;
    PUSH32(esp, MEM32(ebp + 0x2C));
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A58ECu); RECOMP_ABI_CALL(0x003B2B58u, sub_003B2B58); /* call 0x003B2B58 */

loc_003A58EC: ;
    goto loc_003A590F;

loc_003A58EE: ;
    PUSH32(esp, MEM32(ebp + 0x34));
    PUSH32(esp, MEM32(ebp + 0x30));
    PUSH32(esp, MEM32(ebp + 0x2C));
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A590Fu); RECOMP_ABI_CALL(0x003A5759u, sub_003A5759); /* call 0x003A5759 */

loc_003A590F: ;
    POP32(esp, ebp);
    esp += 52; return; /* ret 48 */

}

/**
 * sub_003A5913
 * Original: 0x003A5913 - 0x003A5DD0 (1213 bytes, 409 insns)
 * Category: game_render
 * CC: cdecl, 12 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5913(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A5913: ;
    eax = 0x355022;
    PUSH32(esp, 0x003A591Du); RECOMP_ABI_CALL(0x0034DEC0u, sub_0034DEC0); /* call 0x0034DEC0 */

loc_003A591D: ;
    esp = esp - 0x40C;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A5932; /* jne: not equal / not zero */

loc_003A592A: ;
    eax = MEM32(0x47B26C);
    MEM32(ebp + 0xC) = eax;

loc_003A5932: ;
    ecx = MEM32(ebp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    MEM32(edi + 4) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(edi + 8) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(edi + 0xC) = eax;
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(ebp + -29) = LO8(eax);
    eax = ecx;
    eax = eax >> 2;
    SET_LO8(eax, ~LO8(eax));
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(ebp + -68) = LO8(eax);
    if ((LO8(eax) == 0)) goto loc_003A596B; /* je: equal / zero */

loc_003A595F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x10000 (32-bit) */
    MEM8(ebp + -60) = 1;
    if (TEST_NZ(_fa, _fb)) goto loc_003A596F; /* jne: not equal / not zero */

loc_003A596B: ;
    MEM8(ebp + -60) = 0;

loc_003A596F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A597F; /* je: equal / zero */

loc_003A5973: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x20000 (32-bit) */
    MEM8(ebp + -56) = 1;
    if (TEST_NZ(_fa, _fb)) goto loc_003A5983; /* jne: not equal / not zero */

loc_003A597F: ;
    MEM8(ebp + -56) = 0;

loc_003A5983: ;
    edx = ecx;
    edx = edx >> 0xF;
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(ebp + -72) = LO8(edx);
    if (TEST_Z(_fa, _fb)) goto loc_003A599B; /* je: equal / zero */

loc_003A5992: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    MEM8(ebp + -64) = 1;
    if (TEST_Z(_fa, _fb)) goto loc_003A599F; /* je: equal / zero */

loc_003A599B: ;
    MEM8(ebp + -64) = 0;

loc_003A599F: ;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 0 (32-bit) */
    eax = ecx;
    MEM8(ebp + -37) = (CMP_NE(_fa, _fb)) ? 1 : 0; /* setne */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0xF0 (8-bit) */
    MEM8(ebp + 0x1B) = (TEST_NZ(_fa, _fb)) ? 1 : 0; /* setne */
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0xC (8-bit) */
    SET_LO8(edx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    eax = eax >> 3;
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(ebp + -13) = LO8(eax);
    eax = ecx;
    ebx = ecx;
    eax = eax >> 0xC;
    ebx = ebx >> 0xD;
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(ebx, LO8(ebx) & 1);
    _fa = (uint32_t)(MEM8(ebp + 0x1B)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x1B), 0 (8-bit) */
    MEM8(edi) = LO8(edx);
    MEM8(ebp + -21) = LO8(eax);
    esi = 0x100;
    if (CMP_EQ(_fa, _fb)) goto loc_003A5A1A; /* je: equal / zero */

loc_003A59E1: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A59EC; /* je: equal / zero */

loc_003A59E6: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    goto loc_003A5A13;

loc_003A59EC: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A59FA; /* je: equal / zero */

loc_003A59F1: ;
    MEM32(ebp + -20) = 1;
    goto loc_003A5A13;

loc_003A59FA: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A5A08; /* je: equal / zero */

loc_003A59FF: ;
    MEM32(ebp + -20) = 2;
    goto loc_003A5A13;

loc_003A5A08: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (((int8_t)((_fa) & (_fb)) >= 0)) goto loc_003A5A13; /* jns: not sign (positive) */

loc_003A5A0C: ;
    MEM32(ebp + -20) = 3;

loc_003A5A13: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A5A1A; /* je: equal / zero */

loc_003A5A17: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) | esi;

loc_003A5A1A: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) & 0;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    MEM8(edi + 1) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_003A5A88; /* je: equal / zero */

loc_003A5A26: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 2 (32-bit) */
    MEM32(ebp + -20) = 1;
    if (CMP_BE(_fa, _fb)) goto loc_003A5B02; /* jbe: below or equal (unsigned <=) */

loc_003A5A37: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x5350) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0x5350 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A5B02; /* jne: not equal / not zero */

loc_003A5A45: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0x003A5A55u); RECOMP_ABI_CALL(0x003A1DC2u, sub_003A1DC2); /* call 0x003A1DC2 */

loc_003A5A55: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_003A5A7A; /* jl: less (signed <) */

loc_003A5A59: ;
    PUSH32(esp, MEM32(ebp + -28));
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, 0x003A5A64u); RECOMP_ABI_CALL(0x0039E23Cu, sub_0039E23C); /* call 0x0039E23C */

loc_003A5A64: ;
    ecx = MEM32(ebp + 0x14);
    edi = eax;
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
    edi = MEM32(ebp + 8);

loc_003A5A7A: ;
    MEM8(ebp + -13) = 0;
    MEM8(ebp + -21) = 0;
    MEM8(ebp + -29) = 0;
    SET_LO8(ebx, 1);

loc_003A5A88: ;
    eax = 0; /* xor self */
    MEM32(ebp + -52) = 0x431A70;
    MEM32(ebp + -48) = eax;
    MEM32(ebp + -44) = eax;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ebp + -52;
    MEM32(ebp + -4) = eax;
    PUSH32(esp, 0x003A5AA5u); RECOMP_ABI_CALL(0x003A44ABu, sub_003A44AB); /* call 0x003A44AB */

loc_003A5AA5: ;
    MEM32(ebp + -36) = MEM32(ebp + -36) & 0;
    _fa = (uint32_t)(MEM8(ebp + 0x1B)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x1B), 0 (8-bit) */
    esi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003A5B64; /* jne: not equal / not zero */

loc_003A5AB5: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A5B64; /* jne: not equal / not zero */

loc_003A5ABE: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A5B1B; /* je: equal / zero */

loc_003A5AC2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_003A5B4E; /* jl: less (signed <) */

loc_003A5ACA: ;
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0x003A5AD6u); RECOMP_ABI_CALL(0x003A1DC2u, sub_003A1DC2); /* call 0x003A1DC2 */

loc_003A5AD6: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(ebp + 0x30) = esi;
    if (TEST_S(_fas, _fbs)) goto loc_003A5B4E; /* jl: less (signed <) */

loc_003A5ADF: ;
    PUSH32(esp, MEM32(ebp + -36));
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, 0x003A5AEAu); RECOMP_ABI_CALL(0x0039E23Cu, sub_0039E23C); /* call 0x0039E23C */

loc_003A5AEA: ;
    ecx = MEM32(ebp + 0x14);
    edi = eax;
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
    esi = MEM32(ebp + 0x30);
    goto loc_003A5B4E;

loc_003A5B02: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A5A7A; /* je: equal / zero */

loc_003A5B0B: ;
    MEM8(edi + 1) = 1;
    MEM32(ebp + -20) = 0x101;
    goto loc_003A5A7A;

loc_003A5B1B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -80) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -84) = 0x1388;
    MEM32(ebp + -76) = eax;
    if (TEST_S(_fas, _fbs)) goto loc_003A5B4E; /* jl: less (signed <) */

loc_003A5B32: ;
    eax = ebp + -52;
    PUSH32(esp, eax);
    eax = ebp + -36;
    PUSH32(esp, eax);
    eax = ebp + -84;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x30));
    PUSH32(esp, MEM32(ebp + 0x2C));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0x003A5B4Cu); RECOMP_ABI_CALL(0x003BAFABu, sub_003BAFAB); /* call 0x003BAFAB */

loc_003A5B4C: ;
    esi = eax;

loc_003A5B4E: ;
    _fa = (uint32_t)(MEM8(ebp + -21)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -21), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A5B64; /* je: equal / zero */

loc_003A5B54: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_003A5B64; /* jl: less (signed <) */

loc_003A5B58: ;
    eax = MEM32(ebp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A5B64; /* je: equal / zero */

loc_003A5B5F: ;
    ecx = MEM32(ebp + -36);
    MEM32(eax) = ecx;

loc_003A5B64: ;
    ebx = 0; /* xor self */
    edi = 0; /* xor self */
    _fa = (uint32_t)(MEM8(ebp + -21)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -21), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A5D82; /* jne: not equal / not zero */

loc_003A5B72: ;
    eax = MEM32(ebp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A5B7E; /* je: equal / zero */

loc_003A5B79: ;
    MEM32(eax) = ebx;
    edi = ebp + -28;

loc_003A5B7E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003A5C60; /* jl: less (signed <) */

loc_003A5B86: ;
    _fa = (uint32_t)(MEM8(ebp + 0x1B)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x1B), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A5C05; /* jne: not equal / not zero */

loc_003A5B8C: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A5C05; /* jne: not equal / not zero */

loc_003A5B94: ;
    ecx = ebp + -1048;
    PUSH32(esp, 0x003A5B9Fu); RECOMP_ABI_CALL(0x003B5427u, sub_003B5427); /* call 0x003B5427 */

loc_003A5B9F: ;
    esi = MEM32(ebp + -36);
    PUSH32(esp, esi);
    MEM8(ebp + -4) = 1;
    PUSH32(esp, 0x003A5BACu); RECOMP_ABI_CALL(0x0039E23Cu, sub_0039E23C); /* call 0x0039E23C */

loc_003A5BAC: ;
    ebx = eax;
    eax = ebp + -20;
    PUSH32(esp, eax);
    eax = ebp + -52;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    PUSH32(esp, 0x003A5BC7u); RECOMP_ABI_CALL(0x0039E246u, sub_0039E246); /* call 0x0039E246 */

loc_003A5BC7: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = ebp + -1048;
    PUSH32(esp, 0x003A5BD4u); RECOMP_ABI_CALL(0x003B809Eu, sub_003B809E); /* call 0x003B809E */

loc_003A5BD4: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_003A5BF4; /* jl: less (signed <) */

loc_003A5BDA: ;
    _fa = (uint32_t)(MEM32(ebp + -904)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -904), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A5BE7; /* je: equal / zero */

loc_003A5BE3: ;
    MEM8(ebp + -19) = MEM8(ebp + -19) | 1;

loc_003A5BE7: ;
    _fa = (uint32_t)(MEM32(ebp + -900)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -900), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A5BF4; /* je: equal / zero */

loc_003A5BF0: ;
    MEM8(ebp + -19) = MEM8(ebp + -19) | 2;

loc_003A5BF4: ;
    ecx = ebp + -1048;
    MEM8(ebp + -4) = 0;
    PUSH32(esp, 0x003A5C03u); RECOMP_ABI_CALL(0x003B54A9u, sub_003B54A9); /* call 0x003B54A9 */

loc_003A5C03: ;
    ebx = 0; /* xor self */

loc_003A5C05: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003A5C60; /* jl: less (signed <) */

loc_003A5C09: ;
    _fa = (uint32_t)(MEM8(ebp + 0x1B)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x1B), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A5C47; /* je: equal / zero */

loc_003A5C0F: ;
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0x003A5C1Bu); RECOMP_ABI_CALL(0x003A1DC2u, sub_003A1DC2); /* call 0x003A1DC2 */

loc_003A5C1B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(ebp + 0x30) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_003A5C60; /* jl: less (signed <) */

loc_003A5C24: ;
    PUSH32(esp, MEM32(ebp + -28));
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, 0x003A5C2Fu); RECOMP_ABI_CALL(0x0039E23Cu, sub_0039E23C); /* call 0x0039E23C */

loc_003A5C2F: ;
    ecx = MEM32(ebp + 0x14);
    edi = eax;
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
    esi = MEM32(ebp + 0x30);
    ebx = 0; /* xor self */

loc_003A5C47: ;
    _fa = (uint32_t)(MEM8(ebp + -13)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -13), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A5C60; /* je: equal / zero */

loc_003A5C4D: ;
    _fa = (uint32_t)(MEM8(ebp + -29)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -29), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A5C60; /* jne: not equal / not zero */

loc_003A5C53: ;
    PUSH32(esp, MEM32(ebp + -28));
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0x003A5C5Eu); RECOMP_ABI_CALL(0x003A3B34u, sub_003A3B34); /* call 0x003A3B34 */

loc_003A5C5E: ;
    esi = eax;

loc_003A5C60: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(MEM8(ebp + -37)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -37), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A5CA8; /* je: equal / zero */

loc_003A5C68: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x003A5C74u); RECOMP_ABI_CALL(0x001A1DDBu, sub_001A1DDB); /* call 0x001A1DDB */

loc_003A5C74: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A5C82; /* je: equal / zero */

loc_003A5C78: ;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    goto loc_003A5C84;

loc_003A5C82: ;
    eax = 0; /* xor self */

loc_003A5C84: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    edi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003A5C8F; /* jne: not equal / not zero */

loc_003A5C8A: ;
    esi = 0x8007000Eu;

loc_003A5C8F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003A5D41; /* jl: less (signed <) */

loc_003A5C97: ;
    PUSH32(esp, 0x4E20);
    ecx = eax;
    MEM32(eax + 8) = ebx;
    PUSH32(esp, 0x003A5CA6u); RECOMP_ABI_CALL(0x003A1E31u, sub_003A1E31); /* call 0x003A1E31 */

loc_003A5CA6: ;
    esi = eax;

loc_003A5CA8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003A5D41; /* jl: less (signed <) */

loc_003A5CB0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A5CC9; /* je: equal / zero */

loc_003A5CB4: ;
    PUSH32(esp, 0x36B9BC);
    PUSH32(esp, 0x3BC554);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003A5CC4u); RECOMP_ABI_CALL(0x003A1EAFu, sub_003A1EAF); /* call 0x003A1EAF */

loc_003A5CC4: ;
    esp = esp + 0xC;
    esi = eax;

loc_003A5CC9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003A5D41; /* jl: less (signed <) */

loc_003A5CCD: ;
    eax = MEM32(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A5D0E; /* je: equal / zero */

loc_003A5CD4: ;
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x20), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A5D0E; /* je: equal / zero */

loc_003A5CD9: ;
    _fa = (uint32_t)(MEM8(ebp + -13)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -13), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A5D0E; /* je: equal / zero */

loc_003A5CDF: ;
    ecx = MEM32(ebp + 0x20);
    PUSH32(esp, eax);
    MEM32(ecx) = eax;
    PUSH32(esp, 0x003A5CEAu); RECOMP_ABI_CALL(0x0039E231u, sub_0039E231); /* call 0x0039E231 */

loc_003A5CEA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A5D0E; /* je: equal / zero */

loc_003A5CEE: ;
    esi = MEM32(ebp + -28);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003A5CF7u); RECOMP_ABI_CALL(0x0039E23Cu, sub_0039E23C); /* call 0x0039E23C */

loc_003A5CF7: ;
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, 0x003A5CFFu); RECOMP_ABI_CALL(0x0039E246u, sub_0039E246); /* call 0x0039E246 */

loc_003A5CFF: ;
    eax = eax >> 2;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003A5D0Au); RECOMP_ABI_CALL(0x003A3A44u, sub_003A3A44); /* call 0x003A3A44 */

loc_003A5D0A: ;
    esi = eax;
    ebx = 0; /* xor self */

loc_003A5D0E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003A5D41; /* jl: less (signed <) */

loc_003A5D12: ;
    _fa = (uint32_t)(MEM8(ebp + -13)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -13), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A5D41; /* jne: not equal / not zero */

loc_003A5D18: ;
    PUSH32(esp, MEM32(ebp + -56));
    ecx = MEM32(ebp + 8);
    PUSH32(esp, MEM32(ebp + -60));
    eax = ebp + -52;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, MEM32(ebp + -72));
    PUSH32(esp, MEM32(ebp + -64));
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -68));
    PUSH32(esp, 0x003A5D3Fu); RECOMP_ABI_CALL(0x003A589Cu, sub_003A589C); /* call 0x003A589C */

loc_003A5D3F: ;
    esi = eax;

loc_003A5D41: ;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A5D51; /* je: equal / zero */

loc_003A5D46: ;
    PUSH32(esp, MEM32(ebp + -36));
    PUSH32(esp, 0x003A5D4Eu); RECOMP_ABI_CALL(0x003A1D8Du, sub_003A1D8D); /* call 0x003A1D8D */

loc_003A5D4E: ;
    MEM32(ebp + -36) = ebx;

loc_003A5D51: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A5D61; /* je: equal / zero */

loc_003A5D56: ;
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, 0x003A5D5Eu); RECOMP_ABI_CALL(0x003A1D8Du, sub_003A1D8D); /* call 0x003A1D8D */

loc_003A5D5E: ;
    MEM32(ebp + -28) = ebx;

loc_003A5D61: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003A5D75; /* jl: less (signed <) */

loc_003A5D65: ;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A5D75; /* je: equal / zero */

loc_003A5D6A: ;
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, edi);
    PUSH32(esp, 0x003A5D73u); RECOMP_ABI_CALL(0x003A3AE4u, sub_003A3AE4); /* call 0x003A3AE4 */

loc_003A5D73: ;
    esi = eax;

loc_003A5D75: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A5D82; /* je: equal / zero */

loc_003A5D79: ;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x003A5D82u); RECOMP_ABI_CALL(0x003A3AC0u, sub_003A3AC0); /* call 0x003A3AC0 */

loc_003A5D82: ;
    _fa = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x24), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A5D98; /* je: equal / zero */

loc_003A5D87: ;
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + -48));
    PUSH32(esp, 0x003A5D92u); RECOMP_ABI_CALL(0x003A3AE4u, sub_003A3AE4); /* call 0x003A3AE4 */

loc_003A5D92: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003A5DA8; /* jl: less (signed <) */

loc_003A5D96: ;
    esi = eax;

loc_003A5D98: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003A5DA8; /* jl: less (signed <) */

loc_003A5D9C: ;
    eax = MEM32(ebp + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A5DA8; /* je: equal / zero */

loc_003A5DA3: ;
    ecx = MEM32(ebp + -20);
    MEM32(eax) = ecx;

loc_003A5DA8: ;
    ecx = MEM32(ebp + -48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(ebp + -52) = 0x431A70;
    if (CMP_EQ(_fa, _fb)) goto loc_003A5DBD; /* je: equal / zero */

loc_003A5DB6: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x003A5DBDu); RECOMP_ABI_CALL(0x003A3AC0u, sub_003A3AC0); /* call 0x003A3AC0 */

loc_003A5DBD: ;
    ecx = MEM32(ebp + -12);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 52; return; /* ret 48 */

}

/**
 * sub_003A5DD0
 * Original: 0x003A5DD0 - 0x003A5E04 (52 bytes, 19 insns)
 * Category: game_render
 * CC: cdecl, 11 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A5DD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_003A5DD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x10;
    PUSH32(esp, MEM32(ebp + 0x30));
    eax = ebp + -16;
    PUSH32(esp, MEM32(ebp + 0x2C));
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5E00u); RECOMP_ABI_CALL(0x003A5913u, sub_003A5913); /* call 0x003A5913 */

loc_003A5E00: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 48; return; /* ret 44 */

}

/**
 * sub_003A5E04
 * Original: 0x003A5E04 - 0x003A5E23 (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5E04(void)
{

loc_003A5E04: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003A5E23
 * Original: 0x003A5E23 - 0x003A5E2D (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5E23(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A5E23: ;
    PUSH32(esp, ecx);
    MEM32(esp) = ecx;
    { uint32_t _bs_v = (uint32_t)(MEM32(esp)); int _bs_i;
      _fa = _bs_v; _fb = 0; _fas = (int32_t)_fa; _fbs = 0; /* bsf: ZF = src == 0 */
      if (_bs_v) {
        for (_bs_i = 0; _bs_i < 32; _bs_i++)
          if (_bs_v & (1u << _bs_i)) break;
        eax = (uint32_t)_bs_i;;
      } else { (void)(eax); } }
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003A5E2D
 * Original: 0x003A5E2D - 0x003A5EA1 (116 bytes, 46 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5E2D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A5E2D: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003A5E38u); RECOMP_ABI_CALL(0x003A5E23u, sub_003A5E23); /* call 0x003A5E23 */

loc_003A5E38: ;
    ecx = MEM32(esp + 0x10);
    edi = eax;
    PUSH32(esp, 0x003A5E43u); RECOMP_ABI_CALL(0x003A5E23u, sub_003A5E23); /* call 0x003A5E23 */

loc_003A5E43: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    ecx = edi;
    if (CMP_B(_fa, _fb)) goto loc_003A5E4B; /* jb: below (unsigned <) */

loc_003A5E49: ;
    ecx = eax;

loc_003A5E4B: ;
    edx = 0; /* xor self */
    ecx = ecx + ecx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx << LO8(ecx);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    ecx = edx;
    ecx = ~ecx;
    if (CMP_BE(_fa, _fb)) goto loc_003A5E65; /* jbe: below or equal (unsigned <=) */

loc_003A5E5B: ;
    esi = ecx;
    esi = esi | 0x55555555;
    goto loc_003A5E6D;

loc_003A5E65: ;
    esi = edx;
    esi = esi & 0x55555555;

loc_003A5E6D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003A5E7B; /* jae: above or equal (unsigned >=) */

loc_003A5E71: ;
    ecx = ecx | 0xAAAAAAAAu;
    edx = ecx;
    goto loc_003A5E81;

loc_003A5E7B: ;
    edx = edx & 0xAAAAAAAAu;

loc_003A5E81: ;
    ecx = eax + edi;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax << LO8(ecx);
    POP32(esp, edi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = eax;
    ecx = ecx & esi;
    esi = MEM32(esp + 0x10);
    MEM32(esi) = ecx;
    ecx = MEM32(esp + 0x14);
    eax = eax & edx;
    MEM32(ecx) = eax;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003A5EA1
 * Original: 0x003A5EA1 - 0x003A5FA1 (256 bytes, 106 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A5EA1(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */

loc_003A5EA1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5EBDu); RECOMP_ABI_CALL(0x003A5E2Du, sub_003A5E2D); /* call 0x003A5E2D */

loc_003A5EBD: ;
    eax = MEM32(ebp + -4);
    eax = eax & 0xFFFFFFC0u;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 0x14);
    eax = eax & 0xFFFFFF80u;
    MEM32(ebp + -8) = eax;
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    ebx = 0; /* xor self */
    ecx = 0; /* xor self */
    goto loc_003A5EE1;

    /* nop */

loc_003A5EE1: ;
    mm0 = MMX_MEM(esi); /* movq */
    mm1 = MMX_MEM(esi + edx); /* movq */
    esi = esi + edx;
    eax = ebx;
    mm4 = MMX_MEM(esi + edx); /* movq */
    mm5 = MMX_MEM(esi + edx * 2); /* movq */
    eax = eax | ecx;
    mm6 = mm4; /* movq */
    mm2 = mm0; /* movq */
    mm6 = MMX_PUNPCKHWD(mm6, mm5); /* punpckhwd */
    esi = esi + edx * 4;
    mm2 = MMX_PUNPCKHWD(mm2, mm1); /* punpckhwd */
    mm4 = MMX_PUNPCKLWD(mm4, mm5); /* punpcklwd */
    mm3 = MMX_MEM(esi); /* movq */
    mm5 = MMX_MEM(esi + edx); /* movq */
    mm7 = MMX_MEM(esi + edx * 2); /* movq */
    esi = esi - edx;
    mm0 = MMX_PUNPCKLWD(mm0, mm1); /* punpcklwd */
    mm1 = MMX_MEM(esi); /* movq */
    MMX_STORE(edi + eax, mm0); /* movq */
    MMX_STORE(edi + eax + 8, mm4); /* movq */
    MMX_STORE(edi + eax + 0x10, mm2); /* movq */
    MMX_STORE(edi + eax + 0x18, mm6); /* movq */
    mm0 = mm1; /* movq */
    mm4 = mm5; /* movq */
    mm0 = MMX_PUNPCKLWD(mm0, mm3); /* punpcklwd */
    mm4 = MMX_PUNPCKLWD(mm4, mm7); /* punpcklwd */
    mm1 = MMX_PUNPCKHWD(mm1, mm3); /* punpckhwd */
    mm5 = MMX_PUNPCKHWD(mm5, mm7); /* punpckhwd */
    MMX_STORE(edi + eax + 0x20, mm0); /* movq */
    MMX_STORE(edi + eax + 0x28, mm4); /* movq */
    MMX_STORE(edi + eax + 0x30, mm1); /* movq */
    MMX_STORE(edi + eax + 0x38, mm5); /* movq */
    esi = esi - edx;
    esi = esi - edx;
    esi = esi - edx;
    esi = esi - edx;
    ebx = ebx - MEM32(ebp + -12);
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    esi = esi + 8;
    ebx = ebx & MEM32(ebp + -4);
    if ((ebx != 0)) goto loc_003A5EE1; /* jne: not equal / not zero */

loc_003A5F87: ;
    ecx = ecx - MEM32(ebp + -8);
    esi = esi + edx * 8;
    esi = esi - edx;
    ecx = ecx & MEM32(ebp + 0x14);
    if ((ecx != 0)) goto loc_003A5EE1; /* jne: not equal / not zero */

loc_003A5F98: ;
    (void)0; /* emms - empty MMX state */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003A5FA1
 * Original: 0x003A5FA1 - 0x003A609F (254 bytes, 105 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A5FA1(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */

loc_003A5FA1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5FBDu); RECOMP_ABI_CALL(0x003A5E2Du, sub_003A5E2D); /* call 0x003A5E2D */

loc_003A5FBD: ;
    eax = MEM32(ebp + -4);
    eax = eax & 0xFFFFFFC0u;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 0x14);
    eax = eax & 0xFFFFFF80u;
    MEM32(ebp + -8) = eax;
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    ebx = 0; /* xor self */
    ecx = 0; /* xor self */
    edx = edx + edx;
    /* nop */

loc_003A5FE1: ;
    xmm0 = XMM_MEM(esi); /* movups */
    xmm1 = XMM_MEM(esi + edx); /* movups */
    esi = esi + edx;
    eax = ebx;
    xmm4 = XMM_MEM(esi + edx); /* movups */
    xmm5 = XMM_MEM(esi + edx * 2); /* movups */
    eax = eax | ecx;
    xmm6 = xmm4; /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm6 = XMM_UNPACK_HIGH(xmm6, xmm5); /* unpckhps */
    esi = esi + edx * 4;
    xmm2 = XMM_UNPACK_HIGH(xmm2, xmm1); /* unpckhps */
    xmm4 = XMM_UNPACK_LOW(xmm4, xmm5); /* unpcklps */
    xmm3 = XMM_MEM(esi); /* movups */
    xmm5 = XMM_MEM(esi + edx); /* movups */
    xmm7 = XMM_MEM(esi + edx * 2); /* movups */
    esi = esi - edx;
    xmm0 = XMM_UNPACK_LOW(xmm0, xmm1); /* unpcklps */
    xmm1 = XMM_MEM(esi); /* movups */
    XMM_STORE(edi + eax * 2, xmm0); /* movaps */
    XMM_STORE(edi + eax * 2 + 0x10, xmm4); /* movaps */
    XMM_STORE(edi + eax * 2 + 0x20, xmm2); /* movaps */
    XMM_STORE(edi + eax * 2 + 0x30, xmm6); /* movaps */
    xmm0 = xmm1; /* movaps */
    xmm4 = xmm5; /* movaps */
    xmm0 = XMM_UNPACK_LOW(xmm0, xmm3); /* unpcklps */
    xmm4 = XMM_UNPACK_LOW(xmm4, xmm7); /* unpcklps */
    xmm1 = XMM_UNPACK_HIGH(xmm1, xmm3); /* unpckhps */
    xmm5 = XMM_UNPACK_HIGH(xmm5, xmm7); /* unpckhps */
    XMM_STORE(edi + eax * 2 + 0x40, xmm0); /* movaps */
    XMM_STORE(edi + eax * 2 + 0x50, xmm4); /* movaps */
    XMM_STORE(edi + eax * 2 + 0x60, xmm1); /* movaps */
    XMM_STORE(edi + eax * 2 + 0x70, xmm5); /* movaps */
    esi = esi - edx;
    esi = esi - edx;
    esi = esi - edx;
    esi = esi - edx;
    ebx = ebx - MEM32(ebp + -12);
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    esi = esi + 0x10;
    ebx = ebx & MEM32(ebp + -4);
    if ((ebx != 0)) goto loc_003A5FE1; /* jne: not equal / not zero */

loc_003A6087: ;
    ecx = ecx - MEM32(ebp + -8);
    esi = esi + edx * 8;
    esi = esi - edx;
    ecx = ecx & MEM32(ebp + 0x14);
    if ((ecx != 0)) goto loc_003A5FE1; /* jne: not equal / not zero */

loc_003A6098: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003A609F
 * Original: 0x003A609F - 0x003A6198 (249 bytes, 101 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A609F(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */

loc_003A609F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A60BBu); RECOMP_ABI_CALL(0x003A5E2Du, sub_003A5E2D); /* call 0x003A5E2D */

loc_003A60BB: ;
    eax = MEM32(ebp + -4);
    eax = eax & 0xFFFFFFC0u;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 0x14);
    eax = eax & 0xFFFFFFE0u;
    MEM32(ebp + -8) = eax;
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    ebx = 0; /* xor self */
    ecx = 0; /* xor self */
    edx = edx << 2;
    edi = edi;

loc_003A60DF: ;
    eax = ebx;
    xmm0 = XMM_MEM(esi); /* movups */
    xmm4 = XMM_MEM(esi + 0x10); /* movups */
    xmm2 = XMM_MEM(esi + edx); /* movups */
    xmm6 = XMM_MEM(esi + edx + 0x10); /* movups */
    xmm1 = xmm0; /* movaps */
    xmm5 = xmm4; /* movaps */
    esi = esi + edx * 2;
    eax = eax | ecx;
    xmm0 = XMM_MOVE_LOW_TO_HIGH(xmm0, xmm2); /* movlhps */
    xmm2 = XMM_MOVE_HIGH_TO_LOW(xmm2, xmm1); /* movhlps */
    xmm4 = XMM_MOVE_LOW_TO_HIGH(xmm4, xmm6); /* movlhps */
    xmm6 = XMM_MOVE_HIGH_TO_LOW(xmm6, xmm5); /* movhlps */
    xmm1 = XMM_MEM(esi); /* movups */
    xmm5 = XMM_MEM(esi + 0x10); /* movups */
    xmm3 = XMM_MEM(esi + edx); /* movups */
    xmm7 = XMM_MEM(esi + edx + 0x10); /* movups */
    XMM_STORE(edi + eax * 4, xmm0); /* movaps */
    XMM_STORE(edi + eax * 4 + 0x10, xmm2); /* movaps */
    XMM_STORE(edi + eax * 4 + 0x40, xmm4); /* movaps */
    XMM_STORE(edi + eax * 4 + 0x50, xmm6); /* movaps */
    xmm0 = xmm1; /* movaps */
    xmm4 = xmm5; /* movaps */
    xmm1 = XMM_MOVE_LOW_TO_HIGH(xmm1, xmm3); /* movlhps */
    xmm3 = XMM_MOVE_HIGH_TO_LOW(xmm3, xmm0); /* movhlps */
    xmm5 = XMM_MOVE_LOW_TO_HIGH(xmm5, xmm7); /* movlhps */
    xmm7 = XMM_MOVE_HIGH_TO_LOW(xmm7, xmm4); /* movhlps */
    XMM_STORE(edi + eax * 4 + 0x20, xmm1); /* movaps */
    XMM_STORE(edi + eax * 4 + 0x30, xmm3); /* movaps */
    XMM_STORE(edi + eax * 4 + 0x60, xmm5); /* movaps */
    XMM_STORE(edi + eax * 4 + 0x70, xmm7); /* movaps */
    esi = esi - edx;
    esi = esi - edx;
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    ebx = ebx - MEM32(ebp + -12);
    esi = esi + 0x20;
    ebx = ebx & MEM32(ebp + -4);
    if ((ebx != 0)) goto loc_003A60DF; /* jne: not equal / not zero */

loc_003A6180: ;
    ecx = ecx - MEM32(ebp + -8);
    esi = esi + edx * 4;
    esi = esi - edx;
    ecx = ecx & MEM32(ebp + 0x14);
    if ((ecx != 0)) goto loc_003A60DF; /* jne: not equal / not zero */

loc_003A6191: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003A6174
 * Original: 0x003A6174 - 0x003A6198 (36 bytes, 13 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6174(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A6174: ;
    esi = esi + 0x20;
    ebx = ebx & MEM32(ebp + -4);
    if ((ebx != 0)) { g_seh_ebp = ebp; sub_003A60DF(); return; } /* jne: not equal / not zero */

loc_003A6180: ;
    ecx = ecx - MEM32(ebp + -8);
    esi = esi + edx * 4;
    esi = esi - edx;
    ecx = ecx & MEM32(ebp + 0x14);
    if ((ecx != 0)) { g_seh_ebp = ebp; sub_003A60DF(); return; } /* jne: not equal / not zero */

loc_003A6191: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003A6198
 * Original: 0x003A6198 - 0x003A627B (227 bytes, 71 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A6198(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */

loc_003A6198: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A61B4u); RECOMP_ABI_CALL(0x003A5E2Du, sub_003A5E2D); /* call 0x003A5E2D */

loc_003A61B4: ;
    eax = MEM32(ebp + -4);
    eax = eax & 0xFFFFFF00u;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 0x14);
    eax = eax & 0xFFFFFFE0u;
    MEM32(ebp + -8) = eax;
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    ebx = 0; /* xor self */
    ecx = 0; /* xor self */

loc_003A61D5: ;
    eax = ebx;
    ebx = ebx - MEM32(ebp + -12);
    eax = eax | ecx;
    mm0 = MMX_PSHUFW(MMX_MEM(esi + eax), 216u); /* pshufw */
    mm2 = MMX_PSHUFW(MMX_MEM(esi + eax + 0x40), 216u); /* pshufw */
    mm4 = MMX_PSHUFW(MMX_MEM(esi + eax + 0x10), 216u); /* pshufw */
    mm6 = MMX_PSHUFW(MMX_MEM(esi + eax + 0x50), 216u); /* pshufw */
    mm1 = mm0; /* movq */
    mm3 = mm2; /* movq */
    mm0 = MMX_PUNPCKLDQ(mm0, mm4); /* punpckldq */
    mm1 = MMX_PUNPCKHDQ(mm1, mm4); /* punpckhdq */
    mm2 = MMX_PUNPCKLDQ(mm2, mm6); /* punpckldq */
    mm3 = MMX_PUNPCKHDQ(mm3, mm6); /* punpckhdq */
    MMX_STORE(edi, mm0); /* movq */
    MMX_STORE(edi + 8, mm2); /* movq */
    MMX_STORE(edi + edx, mm1); /* movq */
    MMX_STORE(edi + edx + 8, mm3); /* movq */
    edi = edi + edx;
    mm4 = MMX_PSHUFW(MMX_MEM(esi + eax + 8), 216u); /* pshufw */
    mm5 = MMX_PSHUFW(MMX_MEM(esi + eax + 0x48), 216u); /* pshufw */
    mm6 = MMX_PSHUFW(MMX_MEM(esi + eax + 0x18), 216u); /* pshufw */
    mm7 = MMX_PSHUFW(MMX_MEM(esi + eax + 0x58), 216u); /* pshufw */
    mm0 = mm4; /* movq */
    mm1 = mm5; /* movq */
    mm0 = MMX_PUNPCKLDQ(mm0, mm6); /* punpckldq */
    mm4 = MMX_PUNPCKHDQ(mm4, mm6); /* punpckhdq */
    mm1 = MMX_PUNPCKLDQ(mm1, mm7); /* punpckldq */
    mm5 = MMX_PUNPCKHDQ(mm5, mm7); /* punpckhdq */
    MMX_STORE(edi + edx, mm0); /* movq */
    MMX_STORE(edi + edx + 8, mm1); /* movq */
    MMX_STORE(edi + edx * 2, mm4); /* movq */
    MMX_STORE(edi + edx * 2 + 8, mm5); /* movq */
    edi = edi - edx;
    edi = edi + 0x10;
    ebx = ebx & MEM32(ebp + -4);
    if ((ebx != 0)) goto loc_003A61D5; /* jne: not equal / not zero */

loc_003A6261: ;
    ecx = ecx - MEM32(ebp + -8);
    edi = edi + edx * 4;
    edi = edi - edx;
    ecx = ecx & MEM32(ebp + 0x14);
    if ((ecx != 0)) goto loc_003A61D5; /* jne: not equal / not zero */

loc_003A6272: ;
    (void)0; /* emms - empty MMX state */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003A627B
 * Original: 0x003A627B - 0x003A638D (274 bytes, 106 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A627B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */

loc_003A627B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6297u); RECOMP_ABI_CALL(0x003A5E2Du, sub_003A5E2D); /* call 0x003A5E2D */

loc_003A6297: ;
    eax = MEM32(ebp + -4);
    eax = eax & 0xFFFFFF00u;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 0x14);
    eax = eax & 0xFFFFFFE0u;
    MEM32(ebp + -8) = eax;
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    ebx = 0; /* xor self */
    ecx = 0; /* xor self */
    edx = edx + edx;
    /* nop */

loc_003A62BB: ;
    eax = ebx;
    ebx = ebx - MEM32(ebp + -12);
    eax = eax | ecx;
    xmm0 = XMM_MEM(esi + eax * 2); /* movaps */
    xmm4 = XMM_MEM(esi + eax * 2 + 0x20); /* movaps */
    xmm2 = XMM_MEM(esi + eax * 2 + 0x80); /* movaps */
    xmm6 = XMM_MEM(esi + eax * 2 + 0xA0); /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm3 = xmm2; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm4, 0x88); /* shufps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm4, 0xDD); /* shufps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm6, 0x88); /* shufps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm6, 0xDD); /* shufps */
    xmm4 = XMM_MEM(esi + eax * 2 + 0x10); /* movaps */
    xmm6 = XMM_MEM(esi + eax * 2 + 0x30); /* movaps */
    xmm5 = XMM_MEM(esi + eax * 2 + 0x90); /* movaps */
    xmm7 = XMM_MEM(esi + eax * 2 + 0xB0); /* movaps */
    XMM_STORE(edi, xmm0); /* movaps */
    XMM_STORE(edi + 0x10, xmm2); /* movaps */
    XMM_STORE(edi + edx, xmm1); /* movaps */
    XMM_STORE(edi + edx + 0x10, xmm3); /* movaps */
    edi = edi + edx;
    xmm0 = xmm4; /* movaps */
    xmm1 = xmm5; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm6, 0x88); /* shufps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm6, 0xDD); /* shufps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm7, 0x88); /* shufps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm7, 0xDD); /* shufps */
    XMM_STORE(edi + edx, xmm0); /* movaps */
    XMM_STORE(edi + edx + 0x10, xmm1); /* movaps */
    XMM_STORE(edi + edx * 2, xmm4); /* movaps */
    XMM_STORE(edi + edx * 2 + 0x10, xmm5); /* movaps */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    edi = edi - edx;
    edi = edi + 0x20;
    ebx = ebx & MEM32(ebp + -4);
    if ((ebx != 0)) goto loc_003A62BB; /* jne: not equal / not zero */

loc_003A6375: ;
    ecx = ecx - MEM32(ebp + -8);
    edi = edi + edx * 4;
    edi = edi - edx;
    ecx = ecx & MEM32(ebp + 0x14);
    if ((ecx != 0)) goto loc_003A62BB; /* jne: not equal / not zero */

loc_003A6386: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003A638D
 * Original: 0x003A638D - 0x003A6483 (246 bytes, 99 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A638D(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */

loc_003A638D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A63A9u); RECOMP_ABI_CALL(0x003A5E2Du, sub_003A5E2D); /* call 0x003A5E2D */

loc_003A63A9: ;
    eax = MEM32(ebp + -4);
    eax = eax & 0xFFFFFFC0u;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 0x14);
    eax = eax & 0xFFFFFFE0u;
    MEM32(ebp + -8) = eax;
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    ebx = 0; /* xor self */
    ecx = 0; /* xor self */
    edx = edx << 2;

loc_003A63CB: ;
    eax = ebx;
    eax = eax | ecx;
    ebx = ebx - MEM32(ebp + -12);
    xmm0 = XMM_MEM(esi + eax * 4); /* movaps */
    xmm2 = XMM_MEM(esi + eax * 4 + 0x10); /* movaps */
    xmm4 = XMM_MEM(esi + eax * 4 + 0x40); /* movaps */
    xmm6 = XMM_MEM(esi + eax * 4 + 0x50); /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm5 = xmm4; /* movaps */
    xmm0 = XMM_MOVE_LOW_TO_HIGH(xmm0, xmm2); /* movlhps */
    xmm2 = XMM_MOVE_HIGH_TO_LOW(xmm2, xmm1); /* movhlps */
    xmm4 = XMM_MOVE_LOW_TO_HIGH(xmm4, xmm6); /* movlhps */
    xmm6 = XMM_MOVE_HIGH_TO_LOW(xmm6, xmm5); /* movhlps */
    xmm1 = XMM_MEM(esi + eax * 4 + 0x20); /* movaps */
    xmm3 = XMM_MEM(esi + eax * 4 + 0x30); /* movaps */
    xmm5 = XMM_MEM(esi + eax * 4 + 0x60); /* movaps */
    xmm7 = XMM_MEM(esi + eax * 4 + 0x70); /* movaps */
    XMM_STORE(edi, xmm0); /* movaps */
    XMM_STORE(edi + 0x10, xmm4); /* movaps */
    XMM_STORE(edi + edx, xmm2); /* movaps */
    XMM_STORE(edi + edx + 0x10, xmm6); /* movaps */
    edi = edi + edx;
    xmm0 = xmm1; /* movaps */
    xmm4 = xmm5; /* movaps */
    xmm1 = XMM_MOVE_LOW_TO_HIGH(xmm1, xmm3); /* movlhps */
    xmm3 = XMM_MOVE_HIGH_TO_LOW(xmm3, xmm0); /* movhlps */
    xmm5 = XMM_MOVE_LOW_TO_HIGH(xmm5, xmm7); /* movlhps */
    xmm7 = XMM_MOVE_HIGH_TO_LOW(xmm7, xmm4); /* movhlps */
    XMM_STORE(edi + edx, xmm1); /* movaps */
    XMM_STORE(edi + edx + 0x10, xmm5); /* movaps */
    XMM_STORE(edi + edx * 2, xmm3); /* movaps */
    XMM_STORE(edi + edx * 2 + 0x10, xmm7); /* movaps */
    edi = edi - edx;
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    edi = edi + 0x20;
    ebx = ebx & MEM32(ebp + -4);
    if ((ebx != 0)) goto loc_003A63CB; /* jne: not equal / not zero */

loc_003A646B: ;
    ecx = ecx - MEM32(ebp + -8);
    edi = edi + edx * 4;
    edi = edi - edx;
    ecx = ecx & MEM32(ebp + 0x14);
    if ((ecx != 0)) goto loc_003A63CB; /* jne: not equal / not zero */

loc_003A647C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003A6483
 * Original: 0x003A6483 - 0x003A64C7 (68 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6483(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A6483: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2D (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003A64AE; /* jg: greater (signed >) */

loc_003A648C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x27) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x27 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003A64C2; /* jge: greater or equal (signed >=) */

loc_003A6491: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_003A64A9; /* jl: less (signed <) */

loc_003A6495: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003A64C2; /* jle: less or equal (signed <=) */

loc_003A649A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A64C2; /* je: equal / zero */

loc_003A649F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x18 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003A64A9; /* jle: less or equal (signed <=) */

loc_003A64A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1A (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003A64C2; /* jle: less or equal (signed <=) */

loc_003A64A9: ;
    eax = 0; /* xor self */

loc_003A64AB: ;
    esp += 8; return; /* ret 4 */

loc_003A64AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x32 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003A64A9; /* jl: less (signed <) */

loc_003A64B3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x33) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x33 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003A64C2; /* jle: less or equal (signed <=) */

loc_003A64B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x37) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x37 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003A64A9; /* jle: less or equal (signed <=) */

loc_003A64BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3C (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003A64A9; /* jg: greater (signed >) */

loc_003A64C2: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003A64AB;

}

/**
 * sub_003A64C7
 * Original: 0x003A64C7 - 0x003A6543 (124 bytes, 55 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A64C7(void)
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

loc_003A64C7: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x41 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003A64EC; /* ja: above (unsigned >) */

loc_003A64D0: ;
    eax = ZX8(MEM8(eax + 0x3A6501));
    { uint32_t _jt = MEM32(eax * 4 + 0x3A64F1); /* switch: 4 entries, 4 targets */
    if (_jt == 0x003A64DEu) goto loc_003A64DE;
    if (_jt == 0x003A64E2u) goto loc_003A64E2;
    if (_jt == 0x003A64E7u) goto loc_003A64E7;
    if (_jt == 0x003A64ECu) goto loc_003A64EC;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003A64DE: ;
    PUSH32(esp, 4);
    goto loc_003A64E4;

loc_003A64E2: ;
    PUSH32(esp, 2);

loc_003A64E4: ;
    POP32(esp, eax);
    goto loc_003A64EE;

loc_003A64E7: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003A64EE;

loc_003A64EC: ;
    eax = 0; /* xor self */

loc_003A64EE: ;
    esp += 8; return; /* ret 4 */

    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(eax) (8-bit) */
    fp_top() = fp_top() - (double)SMEM16(edx + edi); /* fisub word ptr [edx + edi] */
    /* TODO: in al, dx */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(XBOX_FS_BASE + eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(XBOX_FS_BASE + eax) (8-bit) */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM32(ecx) = MEM32(ecx) + eax;
    MEM32(ecx) = MEM32(ecx) + eax;
    SET_LO8(eax, LO8(eax) + MEM8(edx));
    eax = eax + MEM32(ebx);
    eax = eax + MEM32(eax);
    eax = eax + MEM32(ebx);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM32(ecx) = MEM32(ecx) + eax;
    SET_LO8(eax, LO8(eax) + MEM8(eax));
    eax = eax + MEM32(ebx);
    MEM32(ecx) = MEM32(ecx) + eax;
    eax = eax + MEM32(eax);
    MEM32(eax) = MEM32(eax) + eax;
    MEM32(ecx) = MEM32(ecx) + eax;
    SET_LO8(eax, LO8(eax) + MEM8(eax));
    MEM32(ebx) = MEM32(ebx) + eax;
    eax = eax + MEM32(ebx);
    SET_LO8(eax, LO8(eax) + MEM8(edx));
    eax = eax + MEM32(ecx);
    MEM32(ecx) = MEM32(ecx) + eax;
    SET_LO8(eax, LO8(eax) + MEM8(edx));
    MEM32(ecx) = MEM32(ecx) + eax;
    SET_LO8(eax, LO8(eax) + MEM8(edx));
    MEM32(ecx) = MEM32(ecx) + eax;
    MEM32(edx) = MEM32(edx) + eax;
    eax = eax + MEM32(ecx);
    eax = eax + MEM32(ecx);
    MEM32(ecx) = MEM32(ecx) + eax;
    SET_LO8(eax, LO8(eax) + MEM8(edx));
    SET_LO8(eax, LO8(eax) + MEM8(ecx));
    MEM32(edx) = MEM32(edx) + eax;
    SET_LO8(eax, LO8(eax) + MEM8(edx));

    g_seh_ebp = ebp; sub_003A6543(); return; /* fallthrough 0x003A6543 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A6543
 * Original: 0x003A6543 - 0x003A65C4 (129 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A6543(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A6543: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = MEM32(esi + 0x2C);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    eax = eax + ebx;
    edi = esi + 0x40;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A655Fu); RECOMP_ABI_CALL(0x001AF2C0u, sub_001AF2C0); /* call 0x001AF2C0 */

loc_003A655F: ;
    ecx = MEM32(esi + 0x24);
    MEM32(ebp + 8) = eax;
    eax = MEM32(esi + 0x30);
    ecx = ecx + eax;
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6572u); RECOMP_ABI_CALL(0x001AF2F0u, sub_001AF2F0); /* call 0x001AF2F0 */

loc_003A6572: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ebp + 8);
    MEM32(esi + 0x58) = MEM32(esi + 0x58) & 0;
    MEM32(esi + 0x5C) = eax;
    eax = MEM32(esi + 0xC);
    eax = eax + MEM32(esi + 0x30);
    ecx = ecx + ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 4));
    eax = eax + ecx * 4;
    ecx = MEM32(esi + 0x18);
    eax = eax + MEM32(esi);
    ecx = ecx + edx * 4;
    edx = MEM32(esi + 0x38);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A65BD; /* je: equal / zero */

loc_003A659D: ;
    MEM32(ebp + 8) = edx;

loc_003A65A0: ;
    ebx = MEM32(eax);
    edx = MEM32(esi + 0x5C);
    MEM32(ecx + edx * 4) = ebx;
    edx = MEM32(edi + 0x10);
    ebx = MEM32(edi + 0x1C);
    ebx = ebx - edx;
    ebx = ebx & edx;
    MEM32(edi + 0x1C) = ebx;
    eax = eax + MEM32(esi + 4);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003A65A0; /* jne: not equal / not zero */

loc_003A65BD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A65C4
 * Original: 0x003A65C4 - 0x003A6645 (129 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A65C4(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A65C4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = MEM32(esi + 0x2C);
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    eax = eax + ebx;
    edi = esi + 0x40;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A65E0u); RECOMP_ABI_CALL(0x001AF2C0u, sub_001AF2C0); /* call 0x001AF2C0 */

loc_003A65E0: ;
    ecx = MEM32(esi + 0xC);
    MEM32(ebp + 8) = eax;
    eax = MEM32(esi + 0x30);
    ecx = ecx + eax;
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A65F3u); RECOMP_ABI_CALL(0x001AF2F0u, sub_001AF2F0); /* call 0x001AF2F0 */

loc_003A65F3: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(esi + 0x28);
    MEM32(esi + 0x58) = MEM32(esi + 0x58) & 0;
    MEM32(esi + 0x5C) = eax;
    eax = MEM32(esi);
    ecx = eax + ecx * 4;
    eax = MEM32(esi + 0x24);
    eax = eax + MEM32(esi + 0x30);
    edx = edx + ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 4));
    eax = eax + edx * 4;
    edx = MEM32(esi + 0x38);
    eax = eax + MEM32(esi + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A663E; /* je: equal / zero */

loc_003A661E: ;
    MEM32(ebp + 8) = edx;

loc_003A6621: ;
    edx = MEM32(esi + 0x5C);
    edx = MEM32(ecx + edx * 4);
    MEM32(eax) = edx;
    edx = MEM32(edi + 0x10);
    ebx = MEM32(edi + 0x1C);
    ebx = ebx - edx;
    ebx = ebx & edx;
    MEM32(edi + 0x1C) = ebx;
    eax = eax + MEM32(esi + 4);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003A6621; /* jne: not equal / not zero */

loc_003A663E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A6645
 * Original: 0x003A6645 - 0x003A6719 (212 bytes, 85 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A6645(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A6645: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x2C);
    edx = MEM32(esi + 0x28);
    ebx = MEM32(esi + 0x50);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x4C);
    edx = edx + eax;
    ecx = esi + 0x40;
    PUSH32(esp, edx);
    MEM32(esi + 0x64) = edi;
    MEM32(esi + 0x68) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A666Du); RECOMP_ABI_CALL(0x001AF2C0u, sub_001AF2C0); /* call 0x001AF2C0 */

loc_003A666D: ;
    ecx = MEM32(esi + 0x24);
    MEM32(ebp + 8) = eax;
    eax = MEM32(esi + 0x30);
    ecx = ecx + eax;
    PUSH32(esp, ecx);
    ecx = esi + 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6681u); RECOMP_ABI_CALL(0x001AF2F0u, sub_001AF2F0); /* call 0x001AF2F0 */

loc_003A6681: ;
    edx = MEM32(esi + 0x34);
    ecx = MEM32(esi + 4);
    MEM32(ebp + 8) = MEM32(ebp + 8) >> 1;
    edi = edi >> 1;
    MEM32(esi + 0x4C) = edi;
    edx = edx << 1;
    edi = edx;
    edx = ecx;
    edx = edx - edi;
    edi = MEM32(esi + 0xC);
    edi = edi + MEM32(esi + 0x30);
    eax = eax >> 1;
    edi = (uint32_t)((int32_t)edi * (int32_t)ecx);
    ecx = MEM32(esi + 8);
    ecx = ecx + MEM32(esi + 0x2C);
    MEM32(esi + 0x5C) = eax;
    eax = MEM32(esi + 0x38);
    ecx = edi + ecx * 2;
    ecx = ecx + MEM32(esi);
    edi = MEM32(esi + 0x18);
    ebx = ebx >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0x50) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_003A6706; /* je: equal / zero */

loc_003A66BF: ;
    MEM32(ebp + -8) = eax;

loc_003A66C2: ;
    eax = MEM32(ebp + 8);
    MEM32(esi + 0x58) = eax;
    eax = MEM32(esi + 0x34);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    if ((eax == 0)) goto loc_003A66F2; /* je: equal / zero */

loc_003A66CF: ;
    MEM32(ebp + -4) = eax;

loc_003A66D2: ;
    eax = MEM32(esi + 0x5C);
    eax = eax | MEM32(esi + 0x58);
    ebx = MEM32(ecx);
    MEM32(edi + eax * 4) = ebx;
    eax = MEM32(esi + 0x4C);
    ebx = MEM32(esi + 0x58);
    ebx = ebx - eax;
    ebx = ebx & eax;
    ecx = ecx + 4;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x58) = ebx;
    if ((_fa != 0)) goto loc_003A66D2; /* jne: not equal / not zero */

loc_003A66F2: ;
    eax = MEM32(esi + 0x50);
    ebx = MEM32(esi + 0x5C);
    ebx = ebx - eax;
    ebx = ebx & eax;
    ecx = ecx + edx;
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x5C) = ebx;
    if ((_fa != 0)) goto loc_003A66C2; /* jne: not equal / not zero */

loc_003A6706: ;
    eax = MEM32(esi + 0x64);
    MEM32(esi + 0x4C) = eax;
    eax = MEM32(esi + 0x68);
    POP32(esp, edi);
    MEM32(esi + 0x50) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A6719
 * Original: 0x003A6719 - 0x003A67ED (212 bytes, 85 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A6719(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A6719: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x2C);
    edx = MEM32(esi + 8);
    ebx = MEM32(esi + 0x50);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x4C);
    edx = edx + eax;
    ecx = esi + 0x40;
    PUSH32(esp, edx);
    MEM32(esi + 0x64) = edi;
    MEM32(esi + 0x68) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6741u); RECOMP_ABI_CALL(0x001AF2C0u, sub_001AF2C0); /* call 0x001AF2C0 */

loc_003A6741: ;
    ecx = MEM32(esi + 0xC);
    MEM32(ebp + 8) = eax;
    eax = MEM32(esi + 0x30);
    ecx = ecx + eax;
    PUSH32(esp, ecx);
    ecx = esi + 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6755u); RECOMP_ABI_CALL(0x001AF2F0u, sub_001AF2F0); /* call 0x001AF2F0 */

loc_003A6755: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi + 0x34);
    MEM32(ebp + 8) = MEM32(ebp + 8) >> 1;
    ebx = ebx >> 1;
    MEM32(esi + 0x50) = ebx;
    ebx = MEM32(esi + 0x24);
    ebx = ebx + MEM32(esi + 0x30);
    edi = edi >> 1;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    edx = edx << 1;
    MEM32(esi + 0x4C) = edi;
    edi = edx;
    edx = ecx;
    ecx = MEM32(esi + 0x28);
    ecx = ecx + MEM32(esi + 0x2C);
    eax = eax >> 1;
    ecx = ebx + ecx * 2;
    ecx = ecx + MEM32(esi + 0x18);
    MEM32(esi + 0x5C) = eax;
    eax = MEM32(esi + 0x38);
    edx = edx - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edi = MEM32(esi);
    if (TEST_Z(_fa, _fb)) goto loc_003A67DA; /* je: equal / zero */

loc_003A6793: ;
    MEM32(ebp + -8) = eax;

loc_003A6796: ;
    eax = MEM32(ebp + 8);
    MEM32(esi + 0x58) = eax;
    eax = MEM32(esi + 0x34);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    if ((eax == 0)) goto loc_003A67C6; /* je: equal / zero */

loc_003A67A3: ;
    MEM32(ebp + -4) = eax;

loc_003A67A6: ;
    eax = MEM32(esi + 0x5C);
    eax = eax | MEM32(esi + 0x58);
    eax = MEM32(edi + eax * 4);
    MEM32(ecx) = eax;
    eax = MEM32(esi + 0x4C);
    ebx = MEM32(esi + 0x58);
    ebx = ebx - eax;
    ebx = ebx & eax;
    ecx = ecx + 4;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x58) = ebx;
    if ((_fa != 0)) goto loc_003A67A6; /* jne: not equal / not zero */

loc_003A67C6: ;
    eax = MEM32(esi + 0x50);
    ebx = MEM32(esi + 0x5C);
    ebx = ebx - eax;
    ebx = ebx & eax;
    ecx = ecx + edx;
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x5C) = ebx;
    if ((_fa != 0)) goto loc_003A6796; /* jne: not equal / not zero */

loc_003A67DA: ;
    eax = MEM32(esi + 0x64);
    MEM32(esi + 0x4C) = eax;
    eax = MEM32(esi + 0x68);
    POP32(esp, edi);
    MEM32(esi + 0x50) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A67ED
 * Original: 0x003A67ED - 0x003A6870 (131 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A67ED(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A67ED: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = MEM32(esi + 0x2C);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    eax = eax + ebx;
    edi = esi + 0x40;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6809u); RECOMP_ABI_CALL(0x001AF2C0u, sub_001AF2C0); /* call 0x001AF2C0 */

loc_003A6809: ;
    ecx = MEM32(esi + 0x24);
    MEM32(ebp + 8) = eax;
    eax = MEM32(esi + 0x30);
    ecx = ecx + eax;
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A681Cu); RECOMP_ABI_CALL(0x001AF2F0u, sub_001AF2F0); /* call 0x001AF2F0 */

loc_003A681C: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ebp + 8);
    MEM32(esi + 0x58) = MEM32(esi + 0x58) & 0;
    MEM32(esi + 0x5C) = eax;
    eax = MEM32(esi + 0xC);
    eax = eax + MEM32(esi + 0x30);
    ecx = ecx + ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 4));
    eax = eax + ecx * 2;
    ecx = MEM32(esi + 0x18);
    eax = eax + MEM32(esi);
    ecx = ecx + edx * 2;
    edx = MEM32(esi + 0x38);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A6869; /* je: equal / zero */

loc_003A6847: ;
    MEM32(ebp + 8) = edx;

loc_003A684A: ;
    SET_LO16(ebx, MEM16(eax));
    edx = MEM32(esi + 0x5C);
    MEM16(ecx + edx * 2) = LO16(ebx);
    edx = MEM32(edi + 0x10);
    ebx = MEM32(edi + 0x1C);
    ebx = ebx - edx;
    ebx = ebx & edx;
    MEM32(edi + 0x1C) = ebx;
    eax = eax + MEM32(esi + 4);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003A684A; /* jne: not equal / not zero */

loc_003A6869: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A6870
 * Original: 0x003A6870 - 0x003A68F3 (131 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A6870(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A6870: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = MEM32(esi + 0x2C);
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    eax = eax + ebx;
    edi = esi + 0x40;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A688Cu); RECOMP_ABI_CALL(0x001AF2C0u, sub_001AF2C0); /* call 0x001AF2C0 */

loc_003A688C: ;
    ecx = MEM32(esi + 0xC);
    MEM32(ebp + 8) = eax;
    eax = MEM32(esi + 0x30);
    ecx = ecx + eax;
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A689Fu); RECOMP_ABI_CALL(0x001AF2F0u, sub_001AF2F0); /* call 0x001AF2F0 */

loc_003A689F: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(esi + 0x28);
    MEM32(esi + 0x58) = MEM32(esi + 0x58) & 0;
    MEM32(esi + 0x5C) = eax;
    eax = MEM32(esi);
    ecx = eax + ecx * 2;
    eax = MEM32(esi + 0x24);
    eax = eax + MEM32(esi + 0x30);
    edx = edx + ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 4));
    eax = eax + edx * 2;
    edx = MEM32(esi + 0x38);
    eax = eax + MEM32(esi + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A68EC; /* je: equal / zero */

loc_003A68CA: ;
    MEM32(ebp + 8) = edx;

loc_003A68CD: ;
    edx = MEM32(esi + 0x5C);
    SET_LO16(edx, MEM16(ecx + edx * 2));
    MEM16(eax) = LO16(edx);
    edx = MEM32(edi + 0x10);
    ebx = MEM32(edi + 0x1C);
    ebx = ebx - edx;
    ebx = ebx & edx;
    MEM32(edi + 0x1C) = ebx;
    eax = eax + MEM32(esi + 4);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003A68CD; /* jne: not equal / not zero */

loc_003A68EC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A68F3
 * Original: 0x003A68F3 - 0x003A69BF (204 bytes, 82 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A68F3(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A68F3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x2C);
    edx = MEM32(esi + 0x28);
    ebx = MEM32(esi + 0x50);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x4C);
    edx = edx + eax;
    ecx = esi + 0x40;
    PUSH32(esp, edx);
    MEM32(esi + 0x64) = edi;
    MEM32(esi + 0x68) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A691Bu); RECOMP_ABI_CALL(0x001AF2C0u, sub_001AF2C0); /* call 0x001AF2C0 */

loc_003A691B: ;
    ecx = MEM32(esi + 0x24);
    MEM32(ebp + 8) = eax;
    eax = MEM32(esi + 0x30);
    ecx = ecx + eax;
    PUSH32(esp, ecx);
    ecx = esi + 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A692Fu); RECOMP_ABI_CALL(0x001AF2F0u, sub_001AF2F0); /* call 0x001AF2F0 */

loc_003A692F: ;
    ecx = MEM32(esi + 0xC);
    ecx = ecx + MEM32(esi + 0x30);
    MEM32(ebp + 8) = MEM32(ebp + 8) >> 1;
    edi = edi >> 1;
    MEM32(esi + 0x4C) = edi;
    edi = MEM32(esi + 4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi);
    ecx = ecx + MEM32(esi + 8);
    eax = eax >> 1;
    ecx = ecx + MEM32(esi + 0x2C);
    edx = edi;
    edx = edx - MEM32(esi + 0x34);
    ecx = ecx + MEM32(esi);
    edi = MEM32(esi + 0x18);
    MEM32(esi + 0x5C) = eax;
    eax = MEM32(esi + 0x38);
    ebx = ebx >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0x50) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_003A69AC; /* je: equal / zero */

loc_003A6964: ;
    MEM32(ebp + -8) = eax;

loc_003A6967: ;
    eax = MEM32(ebp + 8);
    MEM32(esi + 0x58) = eax;
    eax = MEM32(esi + 0x34);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    if ((eax == 0)) goto loc_003A6998; /* je: equal / zero */

loc_003A6974: ;
    MEM32(ebp + -4) = eax;

loc_003A6977: ;
    eax = MEM32(esi + 0x5C);
    eax = eax | MEM32(esi + 0x58);
    SET_LO16(ebx, MEM16(ecx));
    MEM16(edi + eax * 2) = LO16(ebx);
    eax = MEM32(esi + 0x4C);
    ebx = MEM32(esi + 0x58);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx - eax;
    ebx = ebx & eax;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x58) = ebx;
    if ((_fa != 0)) goto loc_003A6977; /* jne: not equal / not zero */

loc_003A6998: ;
    eax = MEM32(esi + 0x50);
    ebx = MEM32(esi + 0x5C);
    ebx = ebx - eax;
    ebx = ebx & eax;
    ecx = ecx + edx;
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x5C) = ebx;
    if ((_fa != 0)) goto loc_003A6967; /* jne: not equal / not zero */

loc_003A69AC: ;
    eax = MEM32(esi + 0x64);
    MEM32(esi + 0x4C) = eax;
    eax = MEM32(esi + 0x68);
    POP32(esp, edi);
    MEM32(esi + 0x50) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A69BF
 * Original: 0x003A69BF - 0x003A6A8B (204 bytes, 82 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A69BF(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A69BF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x2C);
    edx = MEM32(esi + 8);
    ebx = MEM32(esi + 0x50);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x4C);
    edx = edx + eax;
    ecx = esi + 0x40;
    PUSH32(esp, edx);
    MEM32(esi + 0x64) = edi;
    MEM32(esi + 0x68) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A69E7u); RECOMP_ABI_CALL(0x001AF2C0u, sub_001AF2C0); /* call 0x001AF2C0 */

loc_003A69E7: ;
    ecx = MEM32(esi + 0xC);
    MEM32(ebp + 8) = eax;
    eax = MEM32(esi + 0x30);
    ecx = ecx + eax;
    PUSH32(esp, ecx);
    ecx = esi + 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A69FBu); RECOMP_ABI_CALL(0x001AF2F0u, sub_001AF2F0); /* call 0x001AF2F0 */

loc_003A69FB: ;
    ecx = MEM32(esi + 0x24);
    ecx = ecx + MEM32(esi + 0x30);
    MEM32(ebp + 8) = MEM32(ebp + 8) >> 1;
    edi = edi >> 1;
    MEM32(esi + 0x4C) = edi;
    edi = MEM32(esi + 4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi);
    ecx = ecx + MEM32(esi + 0x28);
    eax = eax >> 1;
    ecx = ecx + MEM32(esi + 0x18);
    ebx = ebx >> 1;
    ecx = ecx + MEM32(esi + 0x2C);
    edx = edi;
    edx = edx - MEM32(esi + 0x34);
    MEM32(esi + 0x5C) = eax;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0x50) = ebx;
    ebx = MEM32(esi);
    if (TEST_Z(_fa, _fb)) goto loc_003A6A78; /* je: equal / zero */

loc_003A6A30: ;
    MEM32(ebp + -8) = eax;

loc_003A6A33: ;
    eax = MEM32(ebp + 8);
    MEM32(esi + 0x58) = eax;
    eax = MEM32(esi + 0x34);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    if ((eax == 0)) goto loc_003A6A64; /* je: equal / zero */

loc_003A6A40: ;
    MEM32(ebp + -4) = eax;

loc_003A6A43: ;
    eax = MEM32(esi + 0x5C);
    eax = eax | MEM32(esi + 0x58);
    SET_LO16(eax, MEM16(ebx + eax * 2));
    MEM16(ecx) = LO16(eax);
    eax = MEM32(esi + 0x4C);
    edi = MEM32(esi + 0x58);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi - eax;
    edi = edi & eax;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x58) = edi;
    if ((_fa != 0)) goto loc_003A6A43; /* jne: not equal / not zero */

loc_003A6A64: ;
    eax = MEM32(esi + 0x50);
    edi = MEM32(esi + 0x5C);
    edi = edi - eax;
    edi = edi & eax;
    ecx = ecx + edx;
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x5C) = edi;
    if ((_fa != 0)) goto loc_003A6A33; /* jne: not equal / not zero */

loc_003A6A78: ;
    eax = MEM32(esi + 0x64);
    MEM32(esi + 0x4C) = eax;
    eax = MEM32(esi + 0x68);
    POP32(esp, edi);
    MEM32(esi + 0x50) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A6A8B
 * Original: 0x003A6A8B - 0x003A6B06 (123 bytes, 50 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A6A8B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A6A8B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = MEM32(esi + 0x2C);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    eax = eax + ebx;
    edi = esi + 0x40;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6AA7u); RECOMP_ABI_CALL(0x001AF2C0u, sub_001AF2C0); /* call 0x001AF2C0 */

loc_003A6AA7: ;
    ecx = MEM32(esi + 0x24);
    MEM32(ebp + 8) = eax;
    eax = MEM32(esi + 0x30);
    ecx = ecx + eax;
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6ABAu); RECOMP_ABI_CALL(0x001AF2F0u, sub_001AF2F0); /* call 0x001AF2F0 */

loc_003A6ABA: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(esi + 0x38);
    MEM32(esi + 0x58) = MEM32(esi + 0x58) & 0;
    ecx = ecx + MEM32(ebp + 8);
    MEM32(esi + 0x5C) = eax;
    eax = MEM32(esi + 0xC);
    eax = eax + MEM32(esi + 0x30);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 4));
    eax = eax + MEM32(esi + 8);
    eax = eax + ebx;
    eax = eax + MEM32(esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A6AFF; /* je: equal / zero */

loc_003A6ADF: ;
    MEM32(ebp + 8) = edx;

loc_003A6AE2: ;
    SET_LO8(ebx, MEM8(eax));
    edx = MEM32(esi + 0x5C);
    MEM8(ecx + edx) = LO8(ebx);
    edx = MEM32(edi + 0x10);
    ebx = MEM32(edi + 0x1C);
    ebx = ebx - edx;
    ebx = ebx & edx;
    MEM32(edi + 0x1C) = ebx;
    eax = eax + MEM32(esi + 4);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003A6AE2; /* jne: not equal / not zero */

loc_003A6AFF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A6B06
 * Original: 0x003A6B06 - 0x003A6B81 (123 bytes, 50 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A6B06(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A6B06: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = MEM32(esi + 0x2C);
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    eax = eax + ebx;
    edi = esi + 0x40;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6B22u); RECOMP_ABI_CALL(0x001AF2C0u, sub_001AF2C0); /* call 0x001AF2C0 */

loc_003A6B22: ;
    ecx = MEM32(esi + 0xC);
    MEM32(ebp + 8) = eax;
    eax = MEM32(esi + 0x30);
    ecx = ecx + eax;
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6B35u); RECOMP_ABI_CALL(0x001AF2F0u, sub_001AF2F0); /* call 0x001AF2F0 */

loc_003A6B35: ;
    ecx = MEM32(esi);
    edx = MEM32(esi + 0x38);
    MEM32(esi + 0x58) = MEM32(esi + 0x58) & 0;
    ecx = ecx + MEM32(ebp + 8);
    MEM32(esi + 0x5C) = eax;
    eax = MEM32(esi + 0x24);
    eax = eax + MEM32(esi + 0x30);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 4));
    eax = eax + MEM32(esi + 0x28);
    eax = eax + MEM32(esi + 0x18);
    eax = eax + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A6B7A; /* je: equal / zero */

loc_003A6B5A: ;
    MEM32(ebp + 8) = edx;

loc_003A6B5D: ;
    edx = MEM32(esi + 0x5C);
    SET_LO8(edx, MEM8(ecx + edx));
    MEM8(eax) = LO8(edx);
    edx = MEM32(edi + 0x10);
    ebx = MEM32(edi + 0x1C);
    ebx = ebx - edx;
    ebx = ebx & edx;
    MEM32(edi + 0x1C) = ebx;
    eax = eax + MEM32(esi + 4);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003A6B5D; /* jne: not equal / not zero */

loc_003A6B7A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A6B81
 * Original: 0x003A6B81 - 0x003A6C5D (220 bytes, 87 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A6B81(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A6B81: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x2C);
    edx = MEM32(esi + 0x28);
    ebx = MEM32(esi + 0x50);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x4C);
    edx = edx + eax;
    ecx = esi + 0x40;
    PUSH32(esp, edx);
    MEM32(esi + 0x64) = edi;
    MEM32(esi + 0x68) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6BA9u); RECOMP_ABI_CALL(0x001AF2C0u, sub_001AF2C0); /* call 0x001AF2C0 */

loc_003A6BA9: ;
    ecx = MEM32(esi + 0x24);
    MEM32(ebp + 8) = eax;
    eax = MEM32(esi + 0x30);
    ecx = ecx + eax;
    PUSH32(esp, ecx);
    ecx = esi + 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6BBDu); RECOMP_ABI_CALL(0x001AF2F0u, sub_001AF2F0); /* call 0x001AF2F0 */

loc_003A6BBD: ;
    edx = MEM32(esi + 0x34);
    ecx = MEM32(esi + 4);
    MEM32(ebp + 8) = MEM32(ebp + 8) >> 1;
    edi = edi >> 1;
    MEM32(esi + 0x4C) = edi;
    edx = edx << 2;
    edi = edx;
    edx = ecx;
    edx = edx - edi;
    edi = MEM32(esi + 0xC);
    edi = edi + MEM32(esi + 0x30);
    eax = eax >> 1;
    edi = (uint32_t)((int32_t)edi * (int32_t)ecx);
    ecx = MEM32(esi + 8);
    ecx = ecx + MEM32(esi + 0x2C);
    MEM32(esi + 0x5C) = eax;
    eax = MEM32(esi + 0x38);
    ecx = edi + ecx * 4;
    ecx = ecx + MEM32(esi);
    edi = MEM32(esi + 0x18);
    ebx = ebx >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0x50) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_003A6C4A; /* je: equal / zero */

loc_003A6BFC: ;
    MEM32(ebp + -8) = eax;

loc_003A6BFF: ;
    eax = MEM32(ebp + 8);
    MEM32(esi + 0x58) = eax;
    eax = MEM32(esi + 0x34);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    if ((eax == 0)) goto loc_003A6C36; /* je: equal / zero */

loc_003A6C0C: ;
    MEM32(ebp + -4) = eax;

loc_003A6C0F: ;
    eax = MEM32(esi + 0x5C);
    eax = eax | MEM32(esi + 0x58);
    ebx = MEM32(ecx);
    MEM32(edi + eax * 8) = ebx;
    ebx = MEM32(ecx + 4);
    MEM32(edi + eax * 8 + 4) = ebx;
    eax = MEM32(esi + 0x4C);
    ebx = MEM32(esi + 0x58);
    ebx = ebx - eax;
    ebx = ebx & eax;
    ecx = ecx + 8;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x58) = ebx;
    if ((_fa != 0)) goto loc_003A6C0F; /* jne: not equal / not zero */

loc_003A6C36: ;
    eax = MEM32(esi + 0x50);
    ebx = MEM32(esi + 0x5C);
    ebx = ebx - eax;
    ebx = ebx & eax;
    ecx = ecx + edx;
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x5C) = ebx;
    if ((_fa != 0)) goto loc_003A6BFF; /* jne: not equal / not zero */

loc_003A6C4A: ;
    eax = MEM32(esi + 0x64);
    MEM32(esi + 0x4C) = eax;
    eax = MEM32(esi + 0x68);
    POP32(esp, edi);
    MEM32(esi + 0x50) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A6C5D
 * Original: 0x003A6C5D - 0x003A6D39 (220 bytes, 87 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A6C5D(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A6C5D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x2C);
    edx = MEM32(esi + 8);
    ebx = MEM32(esi + 0x50);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x4C);
    edx = edx + eax;
    ecx = esi + 0x40;
    PUSH32(esp, edx);
    MEM32(esi + 0x64) = edi;
    MEM32(esi + 0x68) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6C85u); RECOMP_ABI_CALL(0x001AF2C0u, sub_001AF2C0); /* call 0x001AF2C0 */

loc_003A6C85: ;
    ecx = MEM32(esi + 0xC);
    MEM32(ebp + 8) = eax;
    eax = MEM32(esi + 0x30);
    ecx = ecx + eax;
    PUSH32(esp, ecx);
    ecx = esi + 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6C99u); RECOMP_ABI_CALL(0x001AF2F0u, sub_001AF2F0); /* call 0x001AF2F0 */

loc_003A6C99: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi + 0x34);
    MEM32(ebp + 8) = MEM32(ebp + 8) >> 1;
    ebx = ebx >> 1;
    MEM32(esi + 0x50) = ebx;
    ebx = MEM32(esi + 0x24);
    ebx = ebx + MEM32(esi + 0x30);
    edi = edi >> 1;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    edx = edx << 2;
    MEM32(esi + 0x4C) = edi;
    edi = edx;
    edx = ecx;
    ecx = MEM32(esi + 0x28);
    ecx = ecx + MEM32(esi + 0x2C);
    eax = eax >> 1;
    ecx = ebx + ecx * 4;
    ecx = ecx + MEM32(esi + 0x18);
    MEM32(esi + 0x5C) = eax;
    eax = MEM32(esi + 0x38);
    edx = edx - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edi = MEM32(esi);
    if (TEST_Z(_fa, _fb)) goto loc_003A6D26; /* je: equal / zero */

loc_003A6CD8: ;
    MEM32(ebp + -8) = eax;

loc_003A6CDB: ;
    eax = MEM32(ebp + 8);
    MEM32(esi + 0x58) = eax;
    eax = MEM32(esi + 0x34);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    if ((eax == 0)) goto loc_003A6D12; /* je: equal / zero */

loc_003A6CE8: ;
    MEM32(ebp + -4) = eax;

loc_003A6CEB: ;
    eax = MEM32(esi + 0x5C);
    eax = eax | MEM32(esi + 0x58);
    ebx = MEM32(edi + eax * 8);
    MEM32(ecx) = ebx;
    eax = MEM32(edi + eax * 8 + 4);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esi + 0x4C);
    ebx = MEM32(esi + 0x58);
    ebx = ebx - eax;
    ebx = ebx & eax;
    ecx = ecx + 8;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x58) = ebx;
    if ((_fa != 0)) goto loc_003A6CEB; /* jne: not equal / not zero */

loc_003A6D12: ;
    eax = MEM32(esi + 0x50);
    ebx = MEM32(esi + 0x5C);
    ebx = ebx - eax;
    ebx = ebx & eax;
    ecx = ecx + edx;
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x5C) = ebx;
    if ((_fa != 0)) goto loc_003A6CDB; /* jne: not equal / not zero */

loc_003A6D26: ;
    eax = MEM32(esi + 0x64);
    MEM32(esi + 0x4C) = eax;
    eax = MEM32(esi + 0x68);
    POP32(esp, edi);
    MEM32(esi + 0x50) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A6D39
 * Original: 0x003A6D39 - 0x003A748A (1873 bytes, 655 insns)
 * Category: game_render
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A6D39(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A6D39: ;
    PUSH32(esp, ebp);
    ebp = esp + -88;
    esp = esp - 0x9C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x70);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    PUSH32(esp, 0x10);
    POP32(esp, edx);
    PUSH32(esp, 8);
    POP32(esp, ecx);
    PUSH32(esp, 7);
    POP32(esp, eax);
    PUSH32(esp, 3);
    MEM32(ebp + -56) = eax;
    MEM32(ebp + -52) = eax;
    MEM32(ebp + -48) = eax;
    MEM32(ebp + -68) = eax;
    MEM32(ebp + -64) = eax;
    POP32(esp, eax);
    MEM32(ebp + -32) = edx;
    MEM32(ebp + -28) = edx;
    MEM32(ebp + -24) = ecx;
    MEM32(ebp + -44) = ecx;
    MEM32(ebp + -40) = ecx;
    MEM32(ebp + -36) = ecx;
    MEM32(ebp + -60) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_003A7463; /* jbe: below or equal (unsigned <=) */

loc_003A6D83: ;
    _fa = (uint32_t)(MEM32(ebp + 0x74)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x74), 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003A7463; /* jbe: below or equal (unsigned <=) */

loc_003A6D8D: ;
    ebx = MEM32(ebp + 0x68);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    esi = MEM32(ebp + 0x7C);
    if (TEST_NZ(_fa, _fb)) goto loc_003A6E04; /* jne: not equal / not zero */

loc_003A6D97: ;
    _fa = (uint32_t)(MEM32(ebp + 0x78)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x78), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A6E04; /* jne: not equal / not zero */

loc_003A6D9D: ;
    _fa = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x64), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A6E04; /* jne: not equal / not zero */

loc_003A6DA3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A6DC5; /* jne: not equal / not zero */

loc_003A6DA8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003A6E04; /* jb: below (unsigned <) */

loc_003A6DAC: ;
    _fa = (uint32_t)(MEM32(ebp + 0x74)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x74), ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003A6E04; /* jb: below (unsigned <) */

loc_003A6DB1: ;
    PUSH32(esp, MEM32(ebp + 0x74));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x6C));
    PUSH32(esp, MEM32(ebp + 0x60));
    PUSH32(esp, 0x003A6DC0u); RECOMP_ABI_CALL(0x003A609Fu, sub_003A609F); /* call 0x003A609F */

loc_003A6DC0: ;
    goto loc_003A7480;

loc_003A6DC5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A6DE7; /* jne: not equal / not zero */

loc_003A6DCA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003A6E04; /* jb: below (unsigned <) */

loc_003A6DCE: ;
    _fa = (uint32_t)(MEM32(ebp + 0x74)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x74), ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003A6E04; /* jb: below (unsigned <) */

loc_003A6DD3: ;
    PUSH32(esp, MEM32(ebp + 0x74));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x6C));
    PUSH32(esp, MEM32(ebp + 0x60));
    PUSH32(esp, 0x003A6DE2u); RECOMP_ABI_CALL(0x003A5FA1u, sub_003A5FA1); /* call 0x003A5FA1 */

loc_003A6DE2: ;
    goto loc_003A7480;

loc_003A6DE7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003A6E04; /* jb: below (unsigned <) */

loc_003A6DEB: ;
    _fa = (uint32_t)(MEM32(ebp + 0x74)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x74), ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003A6E04; /* jb: below (unsigned <) */

loc_003A6DF0: ;
    PUSH32(esp, MEM32(ebp + 0x74));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x6C));
    PUSH32(esp, MEM32(ebp + 0x60));
    PUSH32(esp, 0x003A6DFFu); RECOMP_ABI_CALL(0x003A5EA1u, sub_003A5EA1); /* call 0x003A5EA1 */

loc_003A6DFF: ;
    goto loc_003A7480;

loc_003A6E04: ;
    ecx = ebp + 0x2C;
    PUSH32(esp, 0x003A6E0Cu); RECOMP_ABI_CALL(0x003A5E04u, sub_003A5E04); /* call 0x003A5E04 */

loc_003A6E0C: ;
    eax = MEM32(ebp + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edx = MEM32(ebp + 0x74);
    MEM32(ebp + 0x28) = esi;
    MEM32(ebp + 0xC) = edx;
    MEM32(ebp + 8) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_003A6E27; /* jne: not equal / not zero */

loc_003A6E1F: ;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) & eax;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & eax;
    goto loc_003A6E32;

loc_003A6E27: ;
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    MEM32(ebp + 0x14) = ecx;
    MEM32(ebp + 0x10) = eax;

loc_003A6E32: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    eax = MEM32(ebp + 0x6C);
    MEM32(ebp + 4) = eax;
    eax = MEM32(ebp + 0x60);
    MEM32(ebp + -20) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_003A6E50; /* jne: not equal / not zero */

loc_003A6E42: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) & ebx;
    MEM32(ebp + -8) = MEM32(ebp + -8) & ebx;
    MEM32(ebp) = edx;
    MEM32(ebp + -4) = edi;
    goto loc_003A6E6B;

loc_003A6E50: ;
    eax = MEM32(ebx + 4);
    ecx = MEM32(ebx + 0xC);
    ecx = ecx - eax;
    MEM32(ebp) = ecx;
    ecx = MEM32(ebx);
    ebx = MEM32(ebx + 8);
    ebx = ebx - ecx;
    MEM32(ebp + -4) = ebx;
    MEM32(ebp + -12) = ecx;
    MEM32(ebp + -8) = eax;

loc_003A6E6B: ;
    eax = MEM32(ebp + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A6E77; /* jne: not equal / not zero */

loc_003A6E72: ;
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);

loc_003A6E77: ;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = ebp + 0x2C;
    MEM32(ebp + -16) = eax;
    PUSH32(esp, 0x003A6E86u); RECOMP_ABI_CALL(0x001AF240u, sub_001AF240); /* call 0x001AF240 */

loc_003A6E86: ;
    eax = MEM32(ebp + 0x38);
    MEM32(ebp + 0x50) = eax;
    eax = MEM32(ebp + 0x3C);
    MEM32(ebp + 0x54) = eax;
    eax = MEM32(ebp);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A7480; /* je: equal / zero */

loc_003A6E9F: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A7480; /* je: equal / zero */

loc_003A6EA8: ;
    esi = esi >> 1;
    esi = esi << 2;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x14), 1 (8-bit) */
    ebx = MEM32(ebp + esi + -56);
    edi = MEM32(ebp + esi + -68);
    MEM32(ebp + 0x74) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_003A6F03; /* je: equal / zero */

loc_003A6EBE: ;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 4 (32-bit) */
    MEM32(ebp + 0x24) = eax;
    eax = ebp + -20;
    MEM32(ebp + 0x18) = ecx;
    MEM32(ebp + 0x1C) = ecx;
    MEM32(ebp + 0x20) = 1;
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) goto loc_003A6EDF; /* jne: not equal / not zero */

loc_003A6ED8: ;
    PUSH32(esp, 0x003A6EDDu); RECOMP_ABI_CALL(0x003A6543u, sub_003A6543); /* call 0x003A6543 */

loc_003A6EDD: ;
    goto loc_003A6EF1;

loc_003A6EDF: ;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A6EEC; /* jne: not equal / not zero */

loc_003A6EE5: ;
    PUSH32(esp, 0x003A6EEAu); RECOMP_ABI_CALL(0x003A67EDu, sub_003A67ED); /* call 0x003A67ED */

loc_003A6EEA: ;
    goto loc_003A6EF1;

loc_003A6EEC: ;
    PUSH32(esp, 0x003A6EF1u); RECOMP_ABI_CALL(0x003A6A8Bu, sub_003A6A8B); /* call 0x003A6A8B */

loc_003A6EF1: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003A7480; /* je: equal / zero */

loc_003A6F00: ;
    eax = MEM32(ebp);

loc_003A6F03: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A6F4D; /* je: equal / zero */

loc_003A6F09: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(ebp + -4);
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 4 (32-bit) */
    MEM32(ebp + 0x24) = eax;
    eax = ebp + -20;
    MEM32(ebp + 0x18) = ecx;
    MEM32(ebp + 0x20) = 1;
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) goto loc_003A6F31; /* jne: not equal / not zero */

loc_003A6F2A: ;
    PUSH32(esp, 0x003A6F2Fu); RECOMP_ABI_CALL(0x003A6543u, sub_003A6543); /* call 0x003A6543 */

loc_003A6F2F: ;
    goto loc_003A6F43;

loc_003A6F31: ;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A6F3E; /* jne: not equal / not zero */

loc_003A6F37: ;
    PUSH32(esp, 0x003A6F3Cu); RECOMP_ABI_CALL(0x003A67EDu, sub_003A67ED); /* call 0x003A67ED */

loc_003A6F3C: ;
    goto loc_003A6F43;

loc_003A6F3E: ;
    PUSH32(esp, 0x003A6F43u); RECOMP_ABI_CALL(0x003A6A8Bu, sub_003A6A8B); /* call 0x003A6A8B */

loc_003A6F43: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A7480; /* je: equal / zero */

loc_003A6F4D: ;
    ecx = MEM32(ebp + 0x14);
    edx = MEM32(ebp + -4);
    eax = ebx;
    eax = ~eax;
    ebx = ebx + ecx;
    edx = edx + ecx;
    ebx = ebx & eax;
    edx = edx & eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003A742A; /* jae: above or equal (unsigned >=) */

loc_003A6F67: ;
    ecx = MEM32(ebp + 0x10);
    ebx = MEM32(ebp);
    eax = edi;
    eax = ~eax;
    ebx = ebx + ecx;
    edx = edi + ecx;
    edx = edx & eax;
    ebx = ebx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003A742A; /* jae: above or equal (unsigned >=) */

loc_003A6F82: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + esi + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + esi + -32) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003A742A; /* jb: below (unsigned <) */

loc_003A6F8F: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + esi + -44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + esi + -44) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003A742A; /* jb: below (unsigned <) */

loc_003A6F9C: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A6FE3; /* je: equal / zero */

loc_003A6FA2: ;
    eax = MEM32(ebp + -4);
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = ecx & edi;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 4 (32-bit) */
    MEM32(ebp + 0x20) = eax;
    esi = ecx;
    eax = ebp + -20;
    MEM32(ebp + 0x18) = ebx;
    MEM32(ebp + 0x1C) = ebx;
    MEM32(ebp + 0x24) = esi;
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) goto loc_003A6FC8; /* jne: not equal / not zero */

loc_003A6FC1: ;
    PUSH32(esp, 0x003A6FC6u); RECOMP_ABI_CALL(0x003A6B81u, sub_003A6B81); /* call 0x003A6B81 */

loc_003A6FC6: ;
    goto loc_003A6FDA;

loc_003A6FC8: ;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A6FD5; /* jne: not equal / not zero */

loc_003A6FCE: ;
    PUSH32(esp, 0x003A6FD3u); RECOMP_ABI_CALL(0x003A6645u, sub_003A6645); /* call 0x003A6645 */

loc_003A6FD3: ;
    goto loc_003A6FDA;

loc_003A6FD5: ;
    PUSH32(esp, 0x003A6FDAu); RECOMP_ABI_CALL(0x003A68F3u, sub_003A68F3); /* call 0x003A68F3 */

loc_003A6FDA: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + esi;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + esi;
    MEM32(ebp) = MEM32(ebp) - esi;

loc_003A6FE3: ;
    eax = edi;
    eax = eax & MEM32(ebp);
    if ((eax == 0)) goto loc_003A7022; /* je: equal / zero */

loc_003A6FEA: ;
    MEM32(ebp) = MEM32(ebp) - eax;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 4 (32-bit) */
    ecx = MEM32(ebp);
    MEM32(ebp + 0x1C) = ecx;
    ecx = MEM32(ebp + -4);
    MEM32(ebp + 0x24) = eax;
    eax = ebp + -20;
    MEM32(ebp + 0x18) = ebx;
    MEM32(ebp + 0x20) = ecx;
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) goto loc_003A7010; /* jne: not equal / not zero */

loc_003A7009: ;
    PUSH32(esp, 0x003A700Eu); RECOMP_ABI_CALL(0x003A6B81u, sub_003A6B81); /* call 0x003A6B81 */

loc_003A700E: ;
    goto loc_003A7022;

loc_003A7010: ;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A701D; /* jne: not equal / not zero */

loc_003A7016: ;
    PUSH32(esp, 0x003A701Bu); RECOMP_ABI_CALL(0x003A6645u, sub_003A6645); /* call 0x003A6645 */

loc_003A701B: ;
    goto loc_003A7022;

loc_003A701D: ;
    PUSH32(esp, 0x003A7022u); RECOMP_ABI_CALL(0x003A68F3u, sub_003A68F3); /* call 0x003A68F3 */

loc_003A7022: ;
    esi = MEM32(ebp + 0x14);
    _fa = (uint32_t)(MEM32(ebp + 0x74)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 0x74), esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A7071; /* je: equal / zero */

loc_003A702A: ;
    eax = MEM32(ebp);
    esi = (uint32_t)(-(int32_t)esi);
    esi = esi & MEM32(ebp + 0x74);
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 4 (32-bit) */
    MEM32(ebp + 0x24) = eax;
    eax = ebp + -20;
    MEM32(ebp + 0x18) = ebx;
    MEM32(ebp + 0x1C) = ebx;
    MEM32(ebp + 0x20) = esi;
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) goto loc_003A704F; /* jne: not equal / not zero */

loc_003A7048: ;
    PUSH32(esp, 0x003A704Du); RECOMP_ABI_CALL(0x003A6B81u, sub_003A6B81); /* call 0x003A6B81 */

loc_003A704D: ;
    goto loc_003A7061;

loc_003A704F: ;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A705C; /* jne: not equal / not zero */

loc_003A7055: ;
    PUSH32(esp, 0x003A705Au); RECOMP_ABI_CALL(0x003A6645u, sub_003A6645); /* call 0x003A6645 */

loc_003A705A: ;
    goto loc_003A7061;

loc_003A705C: ;
    PUSH32(esp, 0x003A7061u); RECOMP_ABI_CALL(0x003A68F3u, sub_003A68F3); /* call 0x003A68F3 */

loc_003A7061: ;
    edi = MEM32(ebp + -12);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + esi;
    edi = edi + esi;
    MEM32(ebp + -4) = MEM32(ebp + -4) - esi;
    MEM32(ebp + -12) = edi;
    goto loc_003A7074;

loc_003A7071: ;
    edi = MEM32(ebp + -12);

loc_003A7074: ;
    eax = MEM32(ebp + 0x74);
    eax = eax & MEM32(ebp + -4);
    if ((eax == 0)) goto loc_003A70B7; /* je: equal / zero */

loc_003A707C: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) - eax;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 4 (32-bit) */
    ecx = MEM32(ebp + -4);
    MEM32(ebp + 0x20) = eax;
    eax = MEM32(ebp);
    MEM32(ebp + 0x24) = eax;
    eax = ebp + -20;
    MEM32(ebp + 0x18) = ecx;
    MEM32(ebp + 0x1C) = ebx;
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) goto loc_003A70A2; /* jne: not equal / not zero */

loc_003A709B: ;
    PUSH32(esp, 0x003A70A0u); RECOMP_ABI_CALL(0x003A6B81u, sub_003A6B81); /* call 0x003A6B81 */

loc_003A70A0: ;
    goto loc_003A70B4;

loc_003A70A2: ;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A70AF; /* jne: not equal / not zero */

loc_003A70A8: ;
    PUSH32(esp, 0x003A70ADu); RECOMP_ABI_CALL(0x003A6645u, sub_003A6645); /* call 0x003A6645 */

loc_003A70AD: ;
    goto loc_003A70B4;

loc_003A70AF: ;
    PUSH32(esp, 0x003A70B4u); RECOMP_ABI_CALL(0x003A68F3u, sub_003A68F3); /* call 0x003A68F3 */

loc_003A70B4: ;
    edi = MEM32(ebp + -12);

loc_003A70B7: ;
    eax = MEM32(ebp + 0x38);
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = eax & 0xFFFFFFC0u;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 4 (32-bit) */
    MEM32(ebp + 0x6C) = eax;
    eax = MEM32(ebp + 0x3C);
    ecx = ebp + 0x2C;
    if (CMP_NE(_fa, _fb)) goto loc_003A71F6; /* jne: not equal / not zero */

loc_003A70D3: ;
    eax = eax & 0xFFFFFFE0u;
    MEM32(ebp + 0x74) = eax;
    PUSH32(esp, 0x003A70DEu); RECOMP_ABI_CALL(0x001AF2C0u, sub_001AF2C0); /* call 0x001AF2C0 */

loc_003A70DE: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = ebp + 0x2C;
    MEM32(ebp + 0x64) = eax;
    PUSH32(esp, 0x003A70ECu); RECOMP_ABI_CALL(0x001AF2F0u, sub_001AF2F0); /* call 0x001AF2F0 */

loc_003A70EC: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) >> 3;
    MEM32(ebp + 0x78) = eax;
    eax = MEM32(ebp + -16);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -8));
    eax = eax + MEM32(ebp + -20);
    MEM32(ebp) = MEM32(ebp) >> 2;
    eax = eax + edi * 4;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -4);
    MEM32(ebp + 0x60) = eax;
    esi = MEM32(ebp + -20);
    edi = MEM32(ebp + 4);
    edx = MEM32(ebp + 8);
    edx = edx << 2;
    ebx = MEM32(ebp + 0x64);
    ecx = MEM32(ebp + 0x78);
    MEM32(ebp + 0x7C) = esi;
    /* nop */

loc_003A7129: ;
    eax = ebx;
    xmm0 = XMM_MEM(esi); /* movups */
    xmm4 = XMM_MEM(esi + 0x10); /* movups */
    xmm2 = XMM_MEM(esi + edx); /* movups */
    xmm6 = XMM_MEM(esi + edx + 0x10); /* movups */
    xmm1 = xmm0; /* movaps */
    xmm5 = xmm4; /* movaps */
    esi = esi + edx * 2;
    eax = eax | ecx;
    xmm0 = XMM_MOVE_LOW_TO_HIGH(xmm0, xmm2); /* movlhps */
    xmm2 = XMM_MOVE_HIGH_TO_LOW(xmm2, xmm1); /* movhlps */
    xmm4 = XMM_MOVE_LOW_TO_HIGH(xmm4, xmm6); /* movlhps */
    xmm6 = XMM_MOVE_HIGH_TO_LOW(xmm6, xmm5); /* movhlps */
    xmm1 = XMM_MEM(esi); /* movups */
    xmm5 = XMM_MEM(esi + 0x10); /* movups */
    xmm3 = XMM_MEM(esi + edx); /* movups */
    xmm7 = XMM_MEM(esi + edx + 0x10); /* movups */
    XMM_STORE(edi + eax * 4, xmm0); /* movaps */
    XMM_STORE(edi + eax * 4 + 0x10, xmm2); /* movaps */
    XMM_STORE(edi + eax * 4 + 0x40, xmm4); /* movaps */
    XMM_STORE(edi + eax * 4 + 0x50, xmm6); /* movaps */
    xmm0 = xmm1; /* movaps */
    xmm4 = xmm5; /* movaps */
    xmm1 = XMM_MOVE_LOW_TO_HIGH(xmm1, xmm3); /* movlhps */
    xmm3 = XMM_MOVE_HIGH_TO_LOW(xmm3, xmm0); /* movhlps */
    xmm5 = XMM_MOVE_LOW_TO_HIGH(xmm5, xmm7); /* movlhps */
    xmm7 = XMM_MOVE_HIGH_TO_LOW(xmm7, xmm4); /* movhlps */
    XMM_STORE(edi + eax * 4 + 0x20, xmm1); /* movaps */
    XMM_STORE(edi + eax * 4 + 0x30, xmm3); /* movaps */
    XMM_STORE(edi + eax * 4 + 0x60, xmm5); /* movaps */
    XMM_STORE(edi + eax * 4 + 0x70, xmm7); /* movaps */
    esi = esi - edx;
    esi = esi - edx;
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    ebx = ebx - MEM32(ebp + 0x6C);
    esi = esi + 0x20;
    ebx = ebx & MEM32(ebp + 0x38);
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003A7129; /* jne: not equal / not zero */

loc_003A71CD: ;
    esi = MEM32(ebp + 0x60);
    ebx = MEM32(ebp + 0x64);
    MEM32(ebp + -4) = esi;
    esi = MEM32(ebp + 0x7C);
    eax = MEM32(ebp + -16);
    ecx = ecx - MEM32(ebp + 0x74);
    esi = esi + eax * 4;
    ecx = ecx & MEM32(ebp + 0x3C);
    MEM32(ebp + 0x7C) = esi;
    MEM32(ebp) = MEM32(ebp) - 1;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003A7129; /* jne: not equal / not zero */

loc_003A71F1: ;
    goto loc_003A7480;

loc_003A71F6: ;
    eax = eax & 0xFFFFFF80u;
    MEM32(ebp + 0x74) = eax;
    PUSH32(esp, 0x003A7201u); RECOMP_ABI_CALL(0x001AF2C0u, sub_001AF2C0); /* call 0x001AF2C0 */

loc_003A7201: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = ebp + 0x2C;
    MEM32(ebp + 0x64) = eax;
    PUSH32(esp, 0x003A720Fu); RECOMP_ABI_CALL(0x001AF2F0u, sub_001AF2F0); /* call 0x001AF2F0 */

loc_003A720F: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) >> 3;
    MEM32(ebp + 0x78) = eax;
    eax = MEM32(ebp + -16);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -8));
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A732B; /* jne: not equal / not zero */

loc_003A7227: ;
    eax = eax + MEM32(ebp + -20);
    MEM32(ebp) = MEM32(ebp) >> 3;
    eax = eax + edi * 2;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -4);
    MEM32(ebp + 0x60) = eax;
    esi = MEM32(ebp + -20);
    edi = MEM32(ebp + 4);
    edx = MEM32(ebp + 8);
    edx = edx << 1;
    ebx = MEM32(ebp + 0x64);
    ecx = MEM32(ebp + 0x78);
    MEM32(ebp + 0x7C) = esi;
    goto loc_003A7259;

    /* nop */
    edi = edi;

loc_003A7259: ;
    xmm0 = XMM_MEM(esi); /* movups */
    xmm1 = XMM_MEM(esi + edx); /* movups */
    esi = esi + edx;
    eax = ebx;
    xmm4 = XMM_MEM(esi + edx); /* movups */
    xmm5 = XMM_MEM(esi + edx * 2); /* movups */
    eax = eax | ecx;
    xmm2 = xmm0; /* movaps */
    xmm6 = xmm4; /* movaps */
    xmm6 = XMM_UNPACK_HIGH(xmm6, xmm5); /* unpckhps */
    esi = esi + edx * 4;
    xmm2 = XMM_UNPACK_HIGH(xmm2, xmm1); /* unpckhps */
    xmm4 = XMM_UNPACK_LOW(xmm4, xmm5); /* unpcklps */
    xmm3 = XMM_MEM(esi); /* movups */
    xmm5 = XMM_MEM(esi + edx); /* movups */
    xmm7 = XMM_MEM(esi + edx * 2); /* movups */
    esi = esi - edx;
    xmm0 = XMM_UNPACK_LOW(xmm0, xmm1); /* unpcklps */
    xmm1 = XMM_MEM(esi); /* movups */
    XMM_STORE(edi + eax * 2, xmm0); /* movaps */
    XMM_STORE(edi + eax * 2 + 0x10, xmm4); /* movaps */
    XMM_STORE(edi + eax * 2 + 0x20, xmm2); /* movaps */
    XMM_STORE(edi + eax * 2 + 0x30, xmm6); /* movaps */
    xmm0 = xmm1; /* movaps */
    xmm4 = xmm5; /* movaps */
    xmm0 = XMM_UNPACK_LOW(xmm0, xmm3); /* unpcklps */
    xmm4 = XMM_UNPACK_LOW(xmm4, xmm7); /* unpcklps */
    xmm1 = XMM_UNPACK_HIGH(xmm1, xmm3); /* unpckhps */
    xmm5 = XMM_UNPACK_HIGH(xmm5, xmm7); /* unpckhps */
    XMM_STORE(edi + eax * 2 + 0x40, xmm0); /* movaps */
    XMM_STORE(edi + eax * 2 + 0x50, xmm4); /* movaps */
    XMM_STORE(edi + eax * 2 + 0x60, xmm1); /* movaps */
    XMM_STORE(edi + eax * 2 + 0x70, xmm5); /* movaps */
    esi = esi - edx;
    esi = esi - edx;
    esi = esi - edx;
    esi = esi - edx;
    ebx = ebx - MEM32(ebp + 0x6C);
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    esi = esi + 0x10;
    ebx = ebx & MEM32(ebp + 0x38);
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003A7259; /* jne: not equal / not zero */

loc_003A7302: ;
    esi = MEM32(ebp + 0x60);
    ebx = MEM32(ebp + 0x64);
    MEM32(ebp + -4) = esi;
    esi = MEM32(ebp + 0x7C);
    eax = MEM32(ebp + -16);
    ecx = ecx - MEM32(ebp + 0x74);
    esi = esi + eax * 8;
    ecx = ecx & MEM32(ebp + 0x3C);
    MEM32(ebp + 0x7C) = esi;
    MEM32(ebp) = MEM32(ebp) - 1;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003A7259; /* jne: not equal / not zero */

loc_003A7326: ;
    goto loc_003A7480;

loc_003A732B: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ebp + 0x28));
    edi = edi + MEM32(ebp + -20);
    edi = edi + eax;
    eax = MEM32(ebp + -4);
    MEM32(ebp) = MEM32(ebp) >> 3;
    MEM32(ebp + -20) = edi;
    MEM32(ebp + 0x60) = eax;
    esi = MEM32(ebp + -20);
    edi = MEM32(ebp + 4);
    edx = MEM32(ebp + 8);
    ebx = MEM32(ebp + 0x64);
    ecx = MEM32(ebp + 0x78);
    MEM32(ebp + 0x7C) = esi;
    /* nop */

loc_003A7359: ;
    mm0 = MMX_MEM(esi); /* movq */
    mm1 = MMX_MEM(esi + edx); /* movq */
    esi = esi + edx;
    eax = ebx;
    mm4 = MMX_MEM(esi + edx); /* movq */
    mm5 = MMX_MEM(esi + edx * 2); /* movq */
    eax = eax | ecx;
    mm2 = mm0; /* movq */
    mm6 = mm4; /* movq */
    mm6 = MMX_PUNPCKHWD(mm6, mm5); /* punpckhwd */
    esi = esi + edx * 4;
    mm2 = MMX_PUNPCKHWD(mm2, mm1); /* punpckhwd */
    mm4 = MMX_PUNPCKLWD(mm4, mm5); /* punpcklwd */
    mm3 = MMX_MEM(esi); /* movq */
    mm5 = MMX_MEM(esi + edx); /* movq */
    mm7 = MMX_MEM(esi + edx * 2); /* movq */
    esi = esi - edx;
    mm0 = MMX_PUNPCKLWD(mm0, mm1); /* punpcklwd */
    mm1 = MMX_MEM(esi); /* movq */
    MMX_STORE(edi + eax, mm0); /* movq */
    MMX_STORE(edi + eax + 8, mm4); /* movq */
    MMX_STORE(edi + eax + 0x10, mm2); /* movq */
    MMX_STORE(edi + eax + 0x18, mm6); /* movq */
    mm0 = mm1; /* movq */
    mm4 = mm5; /* movq */
    mm0 = MMX_PUNPCKLWD(mm0, mm3); /* punpcklwd */
    mm4 = MMX_PUNPCKLWD(mm4, mm7); /* punpcklwd */
    mm1 = MMX_PUNPCKHWD(mm1, mm3); /* punpckhwd */
    mm5 = MMX_PUNPCKHWD(mm5, mm7); /* punpckhwd */
    MMX_STORE(edi + eax + 0x20, mm0); /* movq */
    MMX_STORE(edi + eax + 0x28, mm4); /* movq */
    MMX_STORE(edi + eax + 0x30, mm1); /* movq */
    MMX_STORE(edi + eax + 0x38, mm5); /* movq */
    esi = esi - edx;
    esi = esi - edx;
    esi = esi - edx;
    esi = esi - edx;
    ebx = ebx - MEM32(ebp + 0x6C);
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    esi = esi + 8;
    ebx = ebx & MEM32(ebp + 0x38);
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003A7359; /* jne: not equal / not zero */

loc_003A7402: ;
    eax = MEM32(ebp + 0x60);
    ebx = MEM32(ebp + 0x64);
    MEM32(ebp + -4) = eax;
    esi = MEM32(ebp + 0x7C);
    eax = MEM32(ebp + -16);
    ecx = ecx - MEM32(ebp + 0x74);
    esi = esi + eax * 8;
    ecx = ecx & MEM32(ebp + 0x3C);
    MEM32(ebp + 0x7C) = esi;
    MEM32(ebp) = MEM32(ebp) - 1;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003A7359; /* jne: not equal / not zero */

loc_003A7426: ;
    (void)0; /* emms - empty MMX state */
    goto loc_003A7480;

loc_003A742A: ;
    eax = MEM32(ebp);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) & 0;
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 4 (32-bit) */
    MEM32(ebp + 0x24) = eax;
    eax = MEM32(ebp + -4);
    MEM32(ebp + 0x20) = eax;
    eax = ebp + -20;
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) goto loc_003A744F; /* jne: not equal / not zero */

loc_003A7448: ;
    PUSH32(esp, 0x003A744Du); RECOMP_ABI_CALL(0x003A6B81u, sub_003A6B81); /* call 0x003A6B81 */

loc_003A744D: ;
    goto loc_003A7480;

loc_003A744F: ;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A745C; /* jne: not equal / not zero */

loc_003A7455: ;
    PUSH32(esp, 0x003A745Au); RECOMP_ABI_CALL(0x003A6645u, sub_003A6645); /* call 0x003A6645 */

loc_003A745A: ;
    goto loc_003A7480;

loc_003A745C: ;
    PUSH32(esp, 0x003A7461u); RECOMP_ABI_CALL(0x003A68F3u, sub_003A68F3); /* call 0x003A68F3 */

loc_003A7461: ;
    goto loc_003A7480;

loc_003A7463: ;
    esi = MEM32(ebp + 0x60);
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0x74));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0x7C));
    edi = MEM32(ebp + 0x6C);
    edx = ecx;
    ecx = ecx >> 2;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & eax;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */

loc_003A7480: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    ebp = ebp + 0x58;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_003A748A
 * Original: 0x003A748A - 0x003A7BA1 (1815 bytes, 568 insns)
 * Category: game_render
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A748A(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A748A: ;
    PUSH32(esp, ebp);
    ebp = esp + -88;
    esp = esp - 0x9C;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x64);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    POP32(esp, eax);
    PUSH32(esp, 8);
    POP32(esp, edi);
    PUSH32(esp, 0xF);
    POP32(esp, ecx);
    PUSH32(esp, 3);
    POP32(esp, edx);
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -24) = edi;
    MEM32(ebp + -44) = eax;
    MEM32(ebp + -40) = eax;
    MEM32(ebp + -36) = edi;
    MEM32(ebp + -56) = ecx;
    MEM32(ebp + -52) = ecx;
    MEM32(ebp + -48) = 7;
    MEM32(ebp + -68) = edx;
    MEM32(ebp + -64) = edx;
    MEM32(ebp + -60) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_003A7B7A; /* jbe: below or equal (unsigned <=) */

loc_003A74D8: ;
    ecx = MEM32(ebp + 0x68);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003A7B7A; /* jbe: below or equal (unsigned <=) */

loc_003A74E4: ;
    esi = MEM32(ebp + 0x7C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x6C), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A7550; /* jne: not equal / not zero */

loc_003A74EE: ;
    _fa = (uint32_t)(MEM32(ebp + 0x78)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x78), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A7550; /* jne: not equal / not zero */

loc_003A74F3: ;
    _fa = (uint32_t)(MEM32(ebp + 0x74)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x74), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A7550; /* jne: not equal / not zero */

loc_003A74F8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A7517; /* jne: not equal / not zero */

loc_003A74FD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003A7550; /* jb: below (unsigned <) */

loc_003A7501: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003A7550; /* jb: below (unsigned <) */

loc_003A7505: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x70));
    PUSH32(esp, MEM32(ebp + 0x60));
    PUSH32(esp, 0x003A7512u); RECOMP_ABI_CALL(0x003A638Du, sub_003A638D); /* call 0x003A638D */

loc_003A7512: ;
    goto loc_003A7B97;

loc_003A7517: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A7536; /* jne: not equal / not zero */

loc_003A751C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003A7550; /* jb: below (unsigned <) */

loc_003A7520: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003A7550; /* jb: below (unsigned <) */

loc_003A7524: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x70));
    PUSH32(esp, MEM32(ebp + 0x60));
    PUSH32(esp, 0x003A7531u); RECOMP_ABI_CALL(0x003A627Bu, sub_003A627B); /* call 0x003A627B */

loc_003A7531: ;
    goto loc_003A7B97;

loc_003A7536: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003A7550; /* jb: below (unsigned <) */

loc_003A753A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003A7550; /* jb: below (unsigned <) */

loc_003A753E: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x70));
    PUSH32(esp, MEM32(ebp + 0x60));
    PUSH32(esp, 0x003A754Bu); RECOMP_ABI_CALL(0x003A6198u, sub_003A6198); /* call 0x003A6198 */

loc_003A754B: ;
    goto loc_003A7B97;

loc_003A7550: ;
    ecx = ebp + 0x2C;
    PUSH32(esp, 0x003A7558u); RECOMP_ABI_CALL(0x003A5E04u, sub_003A5E04); /* call 0x003A5E04 */

loc_003A7558: ;
    eax = MEM32(ebp + 0x78);
    edi = MEM32(ebp + 0x68);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebp + 0x28) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 8) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_003A7575; /* jne: not equal / not zero */

loc_003A756D: ;
    MEM32(ebp + 0x14) = ecx;
    MEM32(ebp + 0x10) = ecx;
    goto loc_003A7580;

loc_003A7575: ;
    edx = MEM32(eax);
    eax = MEM32(eax + 4);
    MEM32(ebp + 0x14) = edx;
    MEM32(ebp + 0x10) = eax;

loc_003A7580: ;
    eax = MEM32(ebp + 0x70);
    MEM32(ebp + 4) = eax;
    eax = MEM32(ebp + 0x60);
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A75A1; /* jne: not equal / not zero */

loc_003A7593: ;
    MEM32(ebp) = edi;
    MEM32(ebp + -4) = ebx;
    MEM32(ebp + -12) = ecx;
    MEM32(ebp + -8) = ecx;
    goto loc_003A75BE;

loc_003A75A1: ;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax + 0xC);
    edx = edx - ecx;
    MEM32(ebp) = edx;
    edx = MEM32(eax);
    eax = MEM32(eax + 8);
    eax = eax - edx;
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -12) = edx;
    ecx = 0; /* xor self */

loc_003A75BE: ;
    eax = MEM32(ebp + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A75CA; /* jne: not equal / not zero */

loc_003A75C5: ;
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);

loc_003A75CA: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = ebp + 0x2C;
    MEM32(ebp + -16) = eax;
    PUSH32(esp, 0x003A75D8u); RECOMP_ABI_CALL(0x001AF240u, sub_001AF240); /* call 0x001AF240 */

loc_003A75D8: ;
    eax = MEM32(ebp + 0x38);
    MEM32(ebp + 0x50) = eax;
    eax = MEM32(ebp + 0x3C);
    MEM32(ebp + 0x54) = eax;
    eax = MEM32(ebp);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A7B97; /* je: equal / zero */

loc_003A75F1: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A7B97; /* je: equal / zero */

loc_003A75FA: ;
    esi = esi >> 1;
    esi = esi << 2;
    _fa = (uint32_t)(MEM8(ebp + -12)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -12), 1 (8-bit) */
    ebx = MEM32(ebp + esi + -56);
    edi = MEM32(ebp + esi + -68);
    MEM32(ebp + 0x60) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_003A7655; /* je: equal / zero */

loc_003A7610: ;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 4 (32-bit) */
    MEM32(ebp + 0x24) = eax;
    eax = ebp + -20;
    MEM32(ebp + 0x18) = ecx;
    MEM32(ebp + 0x1C) = ecx;
    MEM32(ebp + 0x20) = 1;
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) goto loc_003A7631; /* jne: not equal / not zero */

loc_003A762A: ;
    PUSH32(esp, 0x003A762Fu); RECOMP_ABI_CALL(0x003A65C4u, sub_003A65C4); /* call 0x003A65C4 */

loc_003A762F: ;
    goto loc_003A7643;

loc_003A7631: ;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A763E; /* jne: not equal / not zero */

loc_003A7637: ;
    PUSH32(esp, 0x003A763Cu); RECOMP_ABI_CALL(0x003A6870u, sub_003A6870); /* call 0x003A6870 */

loc_003A763C: ;
    goto loc_003A7643;

loc_003A763E: ;
    PUSH32(esp, 0x003A7643u); RECOMP_ABI_CALL(0x003A6B06u, sub_003A6B06); /* call 0x003A6B06 */

loc_003A7643: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003A7B97; /* je: equal / zero */

loc_003A7652: ;
    eax = MEM32(ebp);

loc_003A7655: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A769F; /* je: equal / zero */

loc_003A765B: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(ebp + -4);
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 4 (32-bit) */
    MEM32(ebp + 0x24) = eax;
    eax = ebp + -20;
    MEM32(ebp + 0x18) = ecx;
    MEM32(ebp + 0x20) = 1;
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) goto loc_003A7683; /* jne: not equal / not zero */

loc_003A767C: ;
    PUSH32(esp, 0x003A7681u); RECOMP_ABI_CALL(0x003A65C4u, sub_003A65C4); /* call 0x003A65C4 */

loc_003A7681: ;
    goto loc_003A7695;

loc_003A7683: ;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A7690; /* jne: not equal / not zero */

loc_003A7689: ;
    PUSH32(esp, 0x003A768Eu); RECOMP_ABI_CALL(0x003A6870u, sub_003A6870); /* call 0x003A6870 */

loc_003A768E: ;
    goto loc_003A7695;

loc_003A7690: ;
    PUSH32(esp, 0x003A7695u); RECOMP_ABI_CALL(0x003A6B06u, sub_003A6B06); /* call 0x003A6B06 */

loc_003A7695: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A7B97; /* je: equal / zero */

loc_003A769F: ;
    ecx = MEM32(ebp + -12);
    edx = MEM32(ebp + -4);
    eax = ebx;
    ebx = ebx + ecx;
    eax = ~eax;
    ecx = ecx + edx;
    ebx = ebx & eax;
    ecx = ecx & eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003A7B41; /* jae: above or equal (unsigned >=) */

loc_003A76B9: ;
    ecx = MEM32(ebp + -8);
    ebx = MEM32(ebp);
    edx = edi + ecx;
    eax = edi;
    eax = ~eax;
    ecx = ecx + ebx;
    edx = edx & eax;
    ecx = ecx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003A7B41; /* jae: above or equal (unsigned >=) */

loc_003A76D4: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + esi + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + esi + -32) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003A7B41; /* jb: below (unsigned <) */

loc_003A76E1: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + esi + -44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + esi + -44) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003A7B41; /* jb: below (unsigned <) */

loc_003A76EE: ;
    esi = MEM32(ebp + -8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A7736; /* je: equal / zero */

loc_003A76F7: ;
    eax = MEM32(ebp + -4);
    esi = (uint32_t)(-(int32_t)esi);
    esi = esi & edi;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 4 (32-bit) */
    MEM32(ebp + 0x20) = eax;
    eax = ebp + -20;
    MEM32(ebp + 0x18) = ebx;
    MEM32(ebp + 0x1C) = ebx;
    MEM32(ebp + 0x24) = esi;
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) goto loc_003A771B; /* jne: not equal / not zero */

loc_003A7714: ;
    PUSH32(esp, 0x003A7719u); RECOMP_ABI_CALL(0x003A6C5Du, sub_003A6C5D); /* call 0x003A6C5D */

loc_003A7719: ;
    goto loc_003A772D;

loc_003A771B: ;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A7728; /* jne: not equal / not zero */

loc_003A7721: ;
    PUSH32(esp, 0x003A7726u); RECOMP_ABI_CALL(0x003A6719u, sub_003A6719); /* call 0x003A6719 */

loc_003A7726: ;
    goto loc_003A772D;

loc_003A7728: ;
    PUSH32(esp, 0x003A772Du); RECOMP_ABI_CALL(0x003A69BFu, sub_003A69BF); /* call 0x003A69BF */

loc_003A772D: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + esi;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + esi;
    MEM32(ebp) = MEM32(ebp) - esi;

loc_003A7736: ;
    eax = edi;
    eax = eax & MEM32(ebp);
    if ((eax == 0)) goto loc_003A7775; /* je: equal / zero */

loc_003A773D: ;
    MEM32(ebp) = MEM32(ebp) - eax;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 4 (32-bit) */
    ecx = MEM32(ebp);
    MEM32(ebp + 0x1C) = ecx;
    ecx = MEM32(ebp + -4);
    MEM32(ebp + 0x24) = eax;
    eax = ebp + -20;
    MEM32(ebp + 0x18) = ebx;
    MEM32(ebp + 0x20) = ecx;
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) goto loc_003A7763; /* jne: not equal / not zero */

loc_003A775C: ;
    PUSH32(esp, 0x003A7761u); RECOMP_ABI_CALL(0x003A6C5Du, sub_003A6C5D); /* call 0x003A6C5D */

loc_003A7761: ;
    goto loc_003A7775;

loc_003A7763: ;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A7770; /* jne: not equal / not zero */

loc_003A7769: ;
    PUSH32(esp, 0x003A776Eu); RECOMP_ABI_CALL(0x003A6719u, sub_003A6719); /* call 0x003A6719 */

loc_003A776E: ;
    goto loc_003A7775;

loc_003A7770: ;
    PUSH32(esp, 0x003A7775u); RECOMP_ABI_CALL(0x003A69BFu, sub_003A69BF); /* call 0x003A69BF */

loc_003A7775: ;
    esi = MEM32(ebp + -12);
    _fa = (uint32_t)(MEM32(ebp + 0x60)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 0x60), esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A77C4; /* je: equal / zero */

loc_003A777D: ;
    eax = MEM32(ebp);
    esi = (uint32_t)(-(int32_t)esi);
    esi = esi & MEM32(ebp + 0x60);
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 4 (32-bit) */
    MEM32(ebp + 0x24) = eax;
    eax = ebp + -20;
    MEM32(ebp + 0x18) = ebx;
    MEM32(ebp + 0x1C) = ebx;
    MEM32(ebp + 0x20) = esi;
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) goto loc_003A77A2; /* jne: not equal / not zero */

loc_003A779B: ;
    PUSH32(esp, 0x003A77A0u); RECOMP_ABI_CALL(0x003A6C5Du, sub_003A6C5D); /* call 0x003A6C5D */

loc_003A77A0: ;
    goto loc_003A77B4;

loc_003A77A2: ;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A77AF; /* jne: not equal / not zero */

loc_003A77A8: ;
    PUSH32(esp, 0x003A77ADu); RECOMP_ABI_CALL(0x003A6719u, sub_003A6719); /* call 0x003A6719 */

loc_003A77AD: ;
    goto loc_003A77B4;

loc_003A77AF: ;
    PUSH32(esp, 0x003A77B4u); RECOMP_ABI_CALL(0x003A69BFu, sub_003A69BF); /* call 0x003A69BF */

loc_003A77B4: ;
    edi = MEM32(ebp + 0x14);
    MEM32(ebp + -12) = MEM32(ebp + -12) + esi;
    edi = edi + esi;
    MEM32(ebp + -4) = MEM32(ebp + -4) - esi;
    MEM32(ebp + 0x14) = edi;
    goto loc_003A77C7;

loc_003A77C4: ;
    edi = MEM32(ebp + 0x14);

loc_003A77C7: ;
    eax = MEM32(ebp + 0x60);
    eax = eax & MEM32(ebp + -4);
    if ((eax == 0)) goto loc_003A780A; /* je: equal / zero */

loc_003A77CF: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) - eax;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 4 (32-bit) */
    ecx = MEM32(ebp + -4);
    MEM32(ebp + 0x20) = eax;
    eax = MEM32(ebp);
    MEM32(ebp + 0x24) = eax;
    eax = ebp + -20;
    MEM32(ebp + 0x18) = ecx;
    MEM32(ebp + 0x1C) = ebx;
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) goto loc_003A77F5; /* jne: not equal / not zero */

loc_003A77EE: ;
    PUSH32(esp, 0x003A77F3u); RECOMP_ABI_CALL(0x003A6C5Du, sub_003A6C5D); /* call 0x003A6C5D */

loc_003A77F3: ;
    goto loc_003A7807;

loc_003A77F5: ;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A7802; /* jne: not equal / not zero */

loc_003A77FB: ;
    PUSH32(esp, 0x003A7800u); RECOMP_ABI_CALL(0x003A6719u, sub_003A6719); /* call 0x003A6719 */

loc_003A7800: ;
    goto loc_003A7807;

loc_003A7802: ;
    PUSH32(esp, 0x003A7807u); RECOMP_ABI_CALL(0x003A69BFu, sub_003A69BF); /* call 0x003A69BF */

loc_003A7807: ;
    edi = MEM32(ebp + 0x14);

loc_003A780A: ;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 4 (32-bit) */
    PUSH32(esp, MEM32(ebp + -12));
    eax = MEM32(ebp + 0x38);
    ecx = ebp + 0x2C;
    if (CMP_NE(_fa, _fb)) goto loc_003A792A; /* jne: not equal / not zero */

loc_003A781D: ;
    eax = eax & 0xFFFFFFC0u;
    MEM32(ebp + 0x68) = eax;
    eax = MEM32(ebp + 0x3C);
    eax = eax & 0xFFFFFFE0u;
    MEM32(ebp + 0x60) = eax;
    PUSH32(esp, 0x003A7831u); RECOMP_ABI_CALL(0x001AF2C0u, sub_001AF2C0); /* call 0x001AF2C0 */

loc_003A7831: ;
    PUSH32(esp, MEM32(ebp + -8));
    ecx = ebp + 0x2C;
    MEM32(ebp + 0x6C) = eax;
    PUSH32(esp, 0x003A783Fu); RECOMP_ABI_CALL(0x001AF2F0u, sub_001AF2F0); /* call 0x001AF2F0 */

loc_003A783F: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) >> 3;
    MEM32(ebp + 0x78) = eax;
    eax = MEM32(ebp + -16);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x10));
    eax = eax + MEM32(ebp + 4);
    MEM32(ebp) = MEM32(ebp) >> 2;
    eax = eax + edi * 4;
    MEM32(ebp + 4) = eax;
    eax = MEM32(ebp + -4);
    MEM32(ebp + 0x70) = eax;
    esi = MEM32(ebp + -20);
    edi = MEM32(ebp + 4);
    edx = MEM32(ebp + 8);
    edx = edx << 2;
    ebx = MEM32(ebp + 0x6C);
    ecx = MEM32(ebp + 0x78);
    MEM32(ebp + 0x74) = edi;
    goto loc_003A787A;

    /* nop */

loc_003A787A: ;
    eax = ebx;
    eax = eax | ecx;
    ebx = ebx - MEM32(ebp + 0x68);
    xmm0 = XMM_MEM(esi + eax * 4); /* movaps */
    xmm2 = XMM_MEM(esi + eax * 4 + 0x10); /* movaps */
    xmm4 = XMM_MEM(esi + eax * 4 + 0x40); /* movaps */
    xmm6 = XMM_MEM(esi + eax * 4 + 0x50); /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm5 = xmm4; /* movaps */
    xmm0 = XMM_MOVE_LOW_TO_HIGH(xmm0, xmm2); /* movlhps */
    xmm2 = XMM_MOVE_HIGH_TO_LOW(xmm2, xmm1); /* movhlps */
    xmm4 = XMM_MOVE_LOW_TO_HIGH(xmm4, xmm6); /* movlhps */
    xmm6 = XMM_MOVE_HIGH_TO_LOW(xmm6, xmm5); /* movhlps */
    xmm1 = XMM_MEM(esi + eax * 4 + 0x20); /* movaps */
    xmm3 = XMM_MEM(esi + eax * 4 + 0x30); /* movaps */
    xmm5 = XMM_MEM(esi + eax * 4 + 0x60); /* movaps */
    xmm7 = XMM_MEM(esi + eax * 4 + 0x70); /* movaps */
    XMM_STORE(edi, xmm0); /* movups */
    XMM_STORE(edi + 0x10, xmm4); /* movups */
    XMM_STORE(edi + edx, xmm2); /* movups */
    XMM_STORE(edi + edx + 0x10, xmm6); /* movups */
    edi = edi + edx;
    xmm0 = xmm1; /* movaps */
    xmm4 = xmm5; /* movaps */
    xmm1 = XMM_MOVE_LOW_TO_HIGH(xmm1, xmm3); /* movlhps */
    xmm3 = XMM_MOVE_HIGH_TO_LOW(xmm3, xmm0); /* movhlps */
    xmm5 = XMM_MOVE_LOW_TO_HIGH(xmm5, xmm7); /* movlhps */
    xmm7 = XMM_MOVE_HIGH_TO_LOW(xmm7, xmm4); /* movhlps */
    XMM_STORE(edi + edx, xmm1); /* movups */
    XMM_STORE(edi + edx + 0x10, xmm5); /* movups */
    XMM_STORE(edi + edx * 2, xmm3); /* movups */
    XMM_STORE(edi + edx * 2 + 0x10, xmm7); /* movups */
    edi = edi - edx;
    edi = edi + 0x20;
    ebx = ebx & MEM32(ebp + 0x38);
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003A787A; /* jne: not equal / not zero */

loc_003A7901: ;
    eax = MEM32(ebp + 0x70);
    ebx = MEM32(ebp + 0x6C);
    MEM32(ebp + -4) = eax;
    edi = MEM32(ebp + 0x74);
    eax = MEM32(ebp + -16);
    ecx = ecx - MEM32(ebp + 0x60);
    edi = edi + eax * 4;
    ecx = ecx & MEM32(ebp + 0x3C);
    MEM32(ebp + 0x74) = edi;
    MEM32(ebp) = MEM32(ebp) - 1;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003A787A; /* jne: not equal / not zero */

loc_003A7925: ;
    goto loc_003A7B97;

loc_003A792A: ;
    eax = eax & 0xFFFFFF00u;
    MEM32(ebp + 0x68) = eax;
    eax = MEM32(ebp + 0x3C);
    eax = eax & 0xFFFFFFE0u;
    MEM32(ebp + 0x60) = eax;
    PUSH32(esp, 0x003A7940u); RECOMP_ABI_CALL(0x001AF2C0u, sub_001AF2C0); /* call 0x001AF2C0 */

loc_003A7940: ;
    PUSH32(esp, MEM32(ebp + -8));
    ecx = ebp + 0x2C;
    MEM32(ebp + 0x6C) = eax;
    PUSH32(esp, 0x003A794Eu); RECOMP_ABI_CALL(0x001AF2F0u, sub_001AF2F0); /* call 0x001AF2F0 */

loc_003A794E: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) >> 4;
    MEM32(ebp + 0x78) = eax;
    eax = MEM32(ebp + -16);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x10));
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A7A5E; /* jne: not equal / not zero */

loc_003A7966: ;
    eax = eax + MEM32(ebp + 4);
    MEM32(ebp) = MEM32(ebp) >> 2;
    eax = eax + edi * 2;
    MEM32(ebp + 4) = eax;
    eax = MEM32(ebp + -4);
    MEM32(ebp + 0x70) = eax;
    esi = MEM32(ebp + -20);
    edi = MEM32(ebp + 4);
    edx = MEM32(ebp + 8);
    edx = edx << 1;
    ebx = MEM32(ebp + 0x6C);
    ecx = MEM32(ebp + 0x78);
    MEM32(ebp + 0x74) = edi;
    goto loc_003A799A;

    /* nop */
    /* nop */

loc_003A799A: ;
    eax = ebx;
    ebx = ebx - MEM32(ebp + 0x68);
    eax = eax | ecx;
    xmm0 = XMM_MEM(esi + eax * 2); /* movaps */
    xmm4 = XMM_MEM(esi + eax * 2 + 0x20); /* movaps */
    xmm2 = XMM_MEM(esi + eax * 2 + 0x80); /* movaps */
    xmm6 = XMM_MEM(esi + eax * 2 + 0xA0); /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm3 = xmm2; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm4, 0x88); /* shufps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm4, 0xDD); /* shufps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm6, 0x88); /* shufps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm6, 0xDD); /* shufps */
    xmm4 = XMM_MEM(esi + eax * 2 + 0x10); /* movaps */
    xmm6 = XMM_MEM(esi + eax * 2 + 0x30); /* movaps */
    xmm5 = XMM_MEM(esi + eax * 2 + 0x90); /* movaps */
    xmm7 = XMM_MEM(esi + eax * 2 + 0xB0); /* movaps */
    XMM_STORE(edi, xmm0); /* movups */
    XMM_STORE(edi + 0x10, xmm2); /* movups */
    XMM_STORE(edi + edx, xmm1); /* movups */
    XMM_STORE(edi + edx + 0x10, xmm3); /* movups */
    edi = edi + edx;
    xmm0 = xmm4; /* movaps */
    xmm1 = xmm5; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm6, 0x88); /* shufps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm6, 0xDD); /* shufps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm7, 0x88); /* shufps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm7, 0xDD); /* shufps */
    XMM_STORE(edi + edx, xmm0); /* movups */
    XMM_STORE(edi + edx + 0x10, xmm1); /* movups */
    XMM_STORE(edi + edx * 2, xmm4); /* movups */
    XMM_STORE(edi + edx * 2 + 0x10, xmm5); /* movups */
    edi = edi - edx;
    edi = edi + 0x20;
    ebx = ebx & MEM32(ebp + 0x38);
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003A799A; /* jne: not equal / not zero */

loc_003A7A35: ;
    eax = MEM32(ebp + 0x70);
    ebx = MEM32(ebp + 0x6C);
    MEM32(ebp + -4) = eax;
    edi = MEM32(ebp + 0x74);
    eax = MEM32(ebp + -16);
    ecx = ecx - MEM32(ebp + 0x60);
    edi = edi + eax * 4;
    ecx = ecx & MEM32(ebp + 0x3C);
    MEM32(ebp + 0x74) = edi;
    MEM32(ebp) = MEM32(ebp) - 1;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003A799A; /* jne: not equal / not zero */

loc_003A7A59: ;
    goto loc_003A7B97;

loc_003A7A5E: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ebp + 0x28));
    edi = edi + MEM32(ebp + 4);
    edi = edi + eax;
    eax = MEM32(ebp + -4);
    MEM32(ebp) = MEM32(ebp) >> 2;
    MEM32(ebp + 4) = edi;
    MEM32(ebp + 0x70) = eax;
    esi = MEM32(ebp + -20);
    edi = MEM32(ebp + 4);
    edx = MEM32(ebp + 8);
    ebx = MEM32(ebp + 0x6C);
    ecx = MEM32(ebp + 0x78);
    MEM32(ebp + 0x74) = edi;
    /* nop */

loc_003A7A8A: ;
    eax = ebx;
    ebx = ebx - MEM32(ebp + 0x68);
    eax = eax | ecx;
    mm0 = MMX_PSHUFW(MMX_MEM(esi + eax), 216u); /* pshufw */
    mm2 = MMX_PSHUFW(MMX_MEM(esi + eax + 0x40), 216u); /* pshufw */
    mm4 = MMX_PSHUFW(MMX_MEM(esi + eax + 0x10), 216u); /* pshufw */
    mm6 = MMX_PSHUFW(MMX_MEM(esi + eax + 0x50), 216u); /* pshufw */
    mm1 = mm0; /* movq */
    mm3 = mm2; /* movq */
    mm0 = MMX_PUNPCKLDQ(mm0, mm4); /* punpckldq */
    mm1 = MMX_PUNPCKHDQ(mm1, mm4); /* punpckhdq */
    mm2 = MMX_PUNPCKLDQ(mm2, mm6); /* punpckldq */
    mm3 = MMX_PUNPCKHDQ(mm3, mm6); /* punpckhdq */
    MMX_STORE(edi, mm0); /* movq */
    MMX_STORE(edi + 8, mm2); /* movq */
    MMX_STORE(edi + edx, mm1); /* movq */
    MMX_STORE(edi + edx + 8, mm3); /* movq */
    edi = edi + edx;
    mm4 = MMX_PSHUFW(MMX_MEM(esi + eax + 8), 216u); /* pshufw */
    mm5 = MMX_PSHUFW(MMX_MEM(esi + eax + 0x48), 216u); /* pshufw */
    mm6 = MMX_PSHUFW(MMX_MEM(esi + eax + 0x18), 216u); /* pshufw */
    mm7 = MMX_PSHUFW(MMX_MEM(esi + eax + 0x58), 216u); /* pshufw */
    mm0 = mm4; /* movq */
    mm1 = mm5; /* movq */
    mm0 = MMX_PUNPCKLDQ(mm0, mm6); /* punpckldq */
    mm4 = MMX_PUNPCKHDQ(mm4, mm6); /* punpckhdq */
    mm1 = MMX_PUNPCKLDQ(mm1, mm7); /* punpckldq */
    mm5 = MMX_PUNPCKHDQ(mm5, mm7); /* punpckhdq */
    MMX_STORE(edi + edx, mm0); /* movq */
    MMX_STORE(edi + edx + 8, mm1); /* movq */
    MMX_STORE(edi + edx * 2, mm4); /* movq */
    MMX_STORE(edi + edx * 2 + 8, mm5); /* movq */
    edi = edi - edx;
    edi = edi + 0x10;
    ebx = ebx & MEM32(ebp + 0x38);
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003A7A8A; /* jne: not equal / not zero */

loc_003A7B19: ;
    eax = MEM32(ebp + 0x70);
    ebx = MEM32(ebp + 0x6C);
    MEM32(ebp + -4) = eax;
    edi = MEM32(ebp + 0x74);
    eax = MEM32(ebp + -16);
    ecx = ecx - MEM32(ebp + 0x60);
    edi = edi + eax * 4;
    ecx = ecx & MEM32(ebp + 0x3C);
    MEM32(ebp + 0x74) = edi;
    MEM32(ebp) = MEM32(ebp) - 1;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003A7A8A; /* jne: not equal / not zero */

loc_003A7B3D: ;
    (void)0; /* emms - empty MMX state */
    goto loc_003A7B97;

loc_003A7B41: ;
    eax = MEM32(ebp);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) & 0;
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 4 (32-bit) */
    MEM32(ebp + 0x24) = eax;
    eax = MEM32(ebp + -4);
    MEM32(ebp + 0x20) = eax;
    eax = ebp + -20;
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) goto loc_003A7B66; /* jne: not equal / not zero */

loc_003A7B5F: ;
    PUSH32(esp, 0x003A7B64u); RECOMP_ABI_CALL(0x003A6C5Du, sub_003A6C5D); /* call 0x003A6C5D */

loc_003A7B64: ;
    goto loc_003A7B97;

loc_003A7B66: ;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A7B73; /* jne: not equal / not zero */

loc_003A7B6C: ;
    PUSH32(esp, 0x003A7B71u); RECOMP_ABI_CALL(0x003A6719u, sub_003A6719); /* call 0x003A6719 */

loc_003A7B71: ;
    goto loc_003A7B97;

loc_003A7B73: ;
    PUSH32(esp, 0x003A7B78u); RECOMP_ABI_CALL(0x003A69BFu, sub_003A69BF); /* call 0x003A69BF */

loc_003A7B78: ;
    goto loc_003A7B97;

loc_003A7B7A: ;
    esi = MEM32(ebp + 0x60);
    edi = MEM32(ebp + 0x70);
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0x68));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0x7C));
    eax = ecx;
    ecx = ecx >> 2;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & edx;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */

loc_003A7B97: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    ebp = ebp + 0x58;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_003A7BA1
 * Original: 0x003A7BA1 - 0x003A7BBD (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7BA1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A7BA1: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A7BB8; /* je: equal / zero */

loc_003A7BAA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003A7BB4; /* jbe: below or equal (unsigned <=) */

loc_003A7BAF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003A7BB8; /* jbe: below or equal (unsigned <=) */

loc_003A7BB4: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_003A7BBA;

loc_003A7BB8: ;
    SET_LO8(eax, 1);

loc_003A7BBA: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A7BBD
 * Original: 0x003A7BBD - 0x003A7BD0 (19 bytes, 6 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7BBD(void)
{
    int _cf = 0; /* carry flag */

loc_003A7BBD: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x003A7BC6u); RECOMP_ABI_CALL(0x003A7BA1u, sub_003A7BA1); /* call 0x003A7BA1 */

loc_003A7BC6: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    eax = eax & 2;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A7BD0
 * Original: 0x003A7BD0 - 0x003A7D6F (415 bytes, 162 insns)
 * Category: game_render
 * CC: cdecl, 10 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A7BD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A7BD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x14));
    esp = esp - 0x14;
    ecx = MEM32(ebp + 0x18);
    SET_LO8(eax, MEM8(ecx + 0x3BC578));
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    SET_LO8(edx, LO8(eax));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ebp + 0x20));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    MEM32(ebp + -4) = esi;
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x3C;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    edi = edx;
    MEM32(ebp + -20) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_003A7C41; /* jne: not equal / not zero */

loc_003A7BFA: ;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7C00u); RECOMP_ABI_CALL(0x003A7BA1u, sub_003A7BA1); /* call 0x003A7BA1 */

loc_003A7C00: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003A7C41; /* jne: not equal / not zero */

loc_003A7C04: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003A7C18; /* jne: not equal / not zero */

loc_003A7C11: ;
    MEM32(ebp + 0x14) = 1;

loc_003A7C18: ;
    ecx = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = MEM32(ebp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_003A7C30; /* jne: not equal / not zero */

loc_003A7C22: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)eax);
    if (3) _cf = (int)(((edi) >> ((3) - 1)) & 1);
    edi = edi >> 3;
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x3F)) >> 32) & 1);
    edi = edi + 0x3F;
    _cf = 0; /* logical op clears CF */
    edi = edi & 0xFFFFFFC0u;
    ecx = edi;

loc_003A7C30: ;
    MEM32(ebp + 0x10) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -16) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    goto loc_003A7D00;

loc_003A7C41: ;
    ecx = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7C49u); RECOMP_ABI_CALL(0x003A5E23u, sub_003A5E23); /* call 0x003A5E23 */

loc_003A7C49: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(ebp + -8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7C54u); RECOMP_ABI_CALL(0x003A5E23u, sub_003A5E23); /* call 0x003A5E23 */

loc_003A7C54: ;
    ecx = MEM32(ebp + 0x10);
    edi = eax;
    MEM32(ebp + -12) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7C61u); RECOMP_ABI_CALL(0x003A5E23u, sub_003A5E23); /* call 0x003A5E23 */

loc_003A7C61: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7C73u); RECOMP_ABI_CALL(0x003A7BBDu, sub_003A7BBD); /* call 0x003A7BBD */

loc_003A7C73: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003A7C9A; /* jne: not equal / not zero */

loc_003A7C7C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = edi;
    if (CMP_A(_fa, _fb)) goto loc_003A7C84; /* ja: above (unsigned >) */

loc_003A7C82: ;
    ecx = esi;

loc_003A7C84: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003A7C8E; /* jbe: below or equal (unsigned <=) */

loc_003A7C89: ;
    ecx = MEM32(ebp + -8);
    goto loc_003A7C96;

loc_003A7C8E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = edi;
    if (CMP_A(_fa, _fb)) goto loc_003A7C96; /* ja: above (unsigned >) */

loc_003A7C94: ;
    ecx = esi;

loc_003A7C96: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x14) = ecx;

loc_003A7C9A: ;
    ecx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    eax = MEM32(ebp + -8);
    MEM32(ebp + 0x20) = edi;
    edi = esi;
    if (TEST_Z(_fa, _fb)) goto loc_003A7CEB; /* je: equal / zero */

loc_003A7CA9: ;
    MEM32(ebp + 0xC) = ecx;

loc_003A7CAC: ;
    edx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003A7CB5; /* jbe: below or equal (unsigned <=) */

loc_003A7CB3: ;
    edx = eax;

loc_003A7CB5: ;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x20), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003A7CC0; /* jbe: below or equal (unsigned <=) */

loc_003A7CBD: ;
    ecx = MEM32(ebp + 0x20);

loc_003A7CC0: ;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edx)) >> 32) & 1);
    ecx = ecx + edx;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edi)) >> 32) & 1);
    ecx = ecx + edi;
    if (LO8(ecx)) _cf = (int)(((edx) >> (32 - (LO8(ecx)))) & 1);
    edx = edx << LO8(ecx);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + -20));
    if (3) _cf = (int)(((edx) >> ((3) - 1)) & 1);
    edx = edx >> 3;
    _cf = (int)((((uint64_t)(MEM32(ebp + -4)) + (uint64_t)(edx)) >> 32) & 1);
    MEM32(ebp + -4) = MEM32(ebp + -4) + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_BE(_fa & _fb, 0)) goto loc_003A7CD8; /* jbe: below or equal (unsigned <=) */

loc_003A7CD7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_003A7CD8: ;
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x20), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003A7CE1; /* jbe: below or equal (unsigned <=) */

loc_003A7CDE: ;
    MEM32(ebp + 0x20) = MEM32(ebp + 0x20) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_003A7CE1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_BE(_fa & _fb, 0)) goto loc_003A7CE6; /* jbe: below or equal (unsigned <=) */

loc_003A7CE5: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_003A7CE6: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003A7CAC; /* jne: not equal / not zero */

loc_003A7CEB: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    ecx = MEM32(ebp + 0x1C);
    if (TEST_Z(_fa, _fb)) goto loc_003A7D03; /* je: equal / zero */

loc_003A7CF2: ;
    eax = MEM32(ebp + -4);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x7F)) >> 32) & 1);
    eax = eax + 0x7F;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFF80u;
    eax = eax + eax * 2;
    if (1) _cf = (int)(((eax) >> (32 - (1))) & 1);
    eax = eax << 1;

loc_003A7D00: ;
    MEM32(ebp + -4) = eax;

loc_003A7D03: ;
    if (4) _cf = (int)(((esi) >> (32 - (4))) & 1);
    esi = esi << 4;
    _cf = 0; /* logical op clears CF */
    esi = esi | MEM32(ebp + -12);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    if (4) _cf = (int)(((esi) >> (32 - (4))) & 1);
    esi = esi << 4;
    _cf = 0; /* logical op clears CF */
    esi = esi | MEM32(ebp + -8);
    POP32(esp, edi);
    if (4) _cf = (int)(((esi) >> (32 - (4))) & 1);
    esi = esi << 4;
    _cf = 0; /* logical op clears CF */
    esi = esi | MEM32(ebp + 0x14);
    if (8) _cf = (int)(((esi) >> (32 - (8))) & 1);
    esi = esi << 8;
    _cf = 0; /* logical op clears CF */
    esi = esi | MEM32(ebp + 0x18);
    if (4) _cf = (int)(((esi) >> (32 - (4))) & 1);
    esi = esi << 4;
    _fa = (uint32_t)(MEM8(ebp + 0x24)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x24), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    esi = esi | eax;
    eax = MEM32(ebp + 0x28);
    if (4) _cf = (int)(((esi) >> (32 - (4))) & 1);
    esi = esi << 4;
    _cf = (int)((LO8(ebx)) != 0);
    SET_LO8(ebx, (uint32_t)(-(int32_t)LO8(ebx)));
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    ebx = ebx & 4;
    _cf = 0; /* logical op clears CF */
    esi = esi | ebx;
    _cf = 0; /* logical op clears CF */
    esi = esi | 9;
    MEM32(eax) = esi;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_003A7D62; /* je: equal / zero */

loc_003A7D48: ;
    edx = MEM32(ebp + -16);
    if (6) _cf = (int)(((ecx) >> ((6) - 1)) & 1);
    ecx = ecx >> 6;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if (0xC) _cf = (int)(((ecx) >> (32 - (0xC))) & 1);
    ecx = ecx << 0xC;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | edx;
    if (0xC) _cf = (int)(((ecx) >> (32 - (0xC))) & 1);
    ecx = ecx << 0xC;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | eax;
    eax = MEM32(ebp + 0x2C);
    MEM32(eax) = ecx;
    goto loc_003A7D68;

loc_003A7D62: ;
    eax = MEM32(ebp + 0x2C);
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & 0;

loc_003A7D68: ;
    eax = MEM32(ebp + -4);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 44; return; /* ret 40 */

}

/**
 * sub_003A7D6F
 * Original: 0x003A7D6F - 0x003A7DBB (76 bytes, 29 insns)
 * Category: game_render
 * CC: cdecl, 11 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A7D6F(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A7D6F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x30);
    PUSH32(esp, edi);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    edi = esi + 0xC;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7D9Cu); RECOMP_ABI_CALL(0x003A7BD0u, sub_003A7BD0); /* call 0x003A7BD0 */

loc_003A7D9C: ;
    _fa = (uint32_t)(MEM8(ebp + 0x1A)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x1A), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A7DA5; /* je: equal / zero */

loc_003A7DA2: ;
    MEM32(edi) = MEM32(edi) & 0xFFFFFFF7u;

loc_003A7DA5: ;
    ecx = MEM32(ebp + 0x2C);
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    POP32(esp, edi);
    MEM32(esi) = 0x40001;
    MEM32(esi + 4) = ecx;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 48; return; /* ret 44 */

}

/**
 * sub_003A7DBB
 * Original: 0x003A7DBB - 0x003A7DFC (65 bytes, 25 insns)
 * Category: game_render
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A7DBB(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_003A7DBB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7DE3u); RECOMP_ABI_CALL(0x003A7BD0u, sub_003A7BD0); /* call 0x003A7BD0 */

loc_003A7DE3: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    ecx = MEM32(ebp + 0x18);
    MEM32(esi + 0x14) = MEM32(esi + 0x14) & 0;
    MEM32(esi) = 0x50001;
    MEM32(esi + 4) = ecx;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_003A7DFC
 * Original: 0x003A7DFC - 0x003A7E26 (42 bytes, 16 insns)
 * Category: game_render
 * CC: cdecl, 9 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A7DFC(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_003A7DFC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7E22u); RECOMP_ABI_CALL(0x003A7D6Fu, sub_003A7D6F); /* call 0x003A7D6F */

loc_003A7E22: ;
    POP32(esp, ebp);
    esp += 40; return; /* ret 36 */

}

/**
 * sub_003A7E26
 * Original: 0x003A7E26 - 0x003A7E4D (39 bytes, 11 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7E26(void)
{

loc_003A7E26: ;
    eax = ecx;
    SET_LO8(ecx, MEM8(esp + 4));
    MEM8(eax + 4) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 8));
    MEM8(eax + 5) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0xC));
    MEM8(eax + 6) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x10));
    MEM32(eax) = 0x431A80;
    MEM8(eax + 7) = LO8(ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003A7E54
 * Original: 0x003A7E54 - 0x003A7E81 (45 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7E54(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A7E54: ;
    SET_LO8(eax, MEM8(ecx + 4));
    SET_LO8(edx, MEM8(ecx + 5));
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    eax = eax & 8;
    _cf = (int)((LO8(edx)) != 0);
    SET_LO8(edx, (uint32_t)(-(int32_t)LO8(edx)));
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    edx = edx & 4;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    SET_LO8(edx, MEM8(ecx + 6));
    _cf = (int)((LO8(edx)) != 0);
    SET_LO8(edx, (uint32_t)(-(int32_t)LO8(edx)));
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    edx = edx & 2;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(MEM8(ecx + 7)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 7), LO8(edx) (8-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    esp += 4; return; /* ret */

}

/**
 * sub_003A7E81
 * Original: 0x003A7E81 - 0x003A7E9E (29 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7E81(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A7E81: ;
    eax = ecx;
    ecx = 0; /* xor self */

loc_003A7E85: ;
    PUSH32(esp, 8);
    POP32(esp, edx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 4), edx (32-bit) */
    SET_LO8(edx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(eax + ecx + 4) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003A7E85; /* jle: less or equal (signed <=) */

loc_003A7E9B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A7E9E
 * Original: 0x003A7E9E - 0x003A7EFD (95 bytes, 42 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A7E9E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A7E9E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM8(ecx + 7)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 7), LO8(eax) (8-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003A7EB4; /* jne: not equal / not zero */

loc_003A7EAC: ;
    _fa = (uint32_t)(MEM8(ebp + 0x13)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x13), LO8(eax) (8-bit) */
    MEM8(ebp + -4) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003A7EB8; /* je: equal / zero */

loc_003A7EB4: ;
    MEM8(ebp + -4) = 1;

loc_003A7EB8: ;
    _fa = (uint32_t)(MEM8(ecx + 6)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 6), LO8(eax) (8-bit) */
    PUSH32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_003A7EC7; /* jne: not equal / not zero */

loc_003A7EBE: ;
    _fa = (uint32_t)(MEM8(ebp + 0x12)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x12), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A7EC7; /* jne: not equal / not zero */

loc_003A7EC3: ;
    SET_LO8(ebx, 0); /* xor self */
    goto loc_003A7EC9;

loc_003A7EC7: ;
    SET_LO8(ebx, 1);

loc_003A7EC9: ;
    _fa = (uint32_t)(MEM8(ecx + 5)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 5), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A7ED7; /* jne: not equal / not zero */

loc_003A7ECE: ;
    _fa = (uint32_t)(MEM8(ebp + 0x11)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x11), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A7ED7; /* jne: not equal / not zero */

loc_003A7ED3: ;
    SET_LO8(edx, 0); /* xor self */
    goto loc_003A7ED9;

loc_003A7ED7: ;
    SET_LO8(edx, 1);

loc_003A7ED9: ;
    _fa = (uint32_t)(MEM8(ecx + 4)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 4), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A7EE3; /* jne: not equal / not zero */

loc_003A7EDE: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x10), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A7EE7; /* je: equal / zero */

loc_003A7EE3: ;
    eax = 0; /* xor self */
    SET_LO8(eax, 1);

loc_003A7EE7: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7EF5u); RECOMP_ABI_CALL(0x003A7E26u, sub_003A7E26); /* call 0x003A7E26 */

loc_003A7EF5: ;
    eax = MEM32(ebp + 8);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003A7EFD
 * Original: 0x003A7EFD - 0x003A7F5A (93 bytes, 41 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A7EFD(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A7EFD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM8(ecx + 7)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 7), LO8(eax) (8-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003A7F14; /* je: equal / zero */

loc_003A7F0B: ;
    _fa = (uint32_t)(MEM8(ebp + 0x13)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x13), LO8(eax) (8-bit) */
    MEM8(ebp + -4) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_003A7F17; /* jne: not equal / not zero */

loc_003A7F14: ;
    MEM8(ebp + -4) = LO8(eax);

loc_003A7F17: ;
    _fa = (uint32_t)(MEM8(ecx + 6)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 6), LO8(eax) (8-bit) */
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_003A7F26; /* je: equal / zero */

loc_003A7F1D: ;
    _fa = (uint32_t)(MEM8(ebp + 0x12)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x12), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A7F26; /* je: equal / zero */

loc_003A7F22: ;
    SET_LO8(ebx, 1);
    goto loc_003A7F28;

loc_003A7F26: ;
    SET_LO8(ebx, 0); /* xor self */

loc_003A7F28: ;
    _fa = (uint32_t)(MEM8(ecx + 5)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 5), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A7F36; /* je: equal / zero */

loc_003A7F2D: ;
    _fa = (uint32_t)(MEM8(ebp + 0x11)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x11), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A7F36; /* je: equal / zero */

loc_003A7F32: ;
    SET_LO8(edx, 1);
    goto loc_003A7F38;

loc_003A7F36: ;
    SET_LO8(edx, 0); /* xor self */

loc_003A7F38: ;
    _fa = (uint32_t)(MEM8(ecx + 4)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 4), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A7F44; /* je: equal / zero */

loc_003A7F3D: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x10), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A7F44; /* je: equal / zero */

loc_003A7F42: ;
    SET_LO8(eax, 1);

loc_003A7F44: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7F52u); RECOMP_ABI_CALL(0x003A7E26u, sub_003A7E26); /* call 0x003A7E26 */

loc_003A7F52: ;
    eax = MEM32(ebp + 8);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003A7F5A
 * Original: 0x003A7F5A - 0x003A7F8E (52 bytes, 22 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A7F5A(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A7F5A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM8(ecx + 7)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 7), LO8(eax) (8-bit) */
    MEM32(ebp + -4) = eax;
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(MEM8(ecx + 6)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 6), LO8(eax) (8-bit) */
    PUSH32(esp, edx);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(MEM8(ecx + 5)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 5), LO8(eax) (8-bit) */
    PUSH32(esp, edx);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(MEM8(ecx + 4)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 4), LO8(eax) (8-bit) */
    ecx = MEM32(ebp + 8);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7F87u); RECOMP_ABI_CALL(0x003A7E26u, sub_003A7E26); /* call 0x003A7E26 */

loc_003A7F87: ;
    eax = MEM32(ebp + 8);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A7F8E
 * Original: 0x003A7F8E - 0x003A7FA7 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7F8E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A7F8E: ;
    eax = ecx;
    MEM32(eax) = 0x431A84;
    edx = 0; /* xor self */
    ecx = eax + 4;

loc_003A7F9B: ;
    MEM32(ecx) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003A7F9B; /* jle: less or equal (signed <=) */

loc_003A7FA6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003A7FA7
 * Original: 0x003A7FA7 - 0x003A7FCE (39 bytes, 11 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7FA7(void)
{

loc_003A7FA7: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax) = 0x431A84;
    MEM32(eax + 0x10) = ecx;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003A7FD5
 * Original: 0x003A7FD5 - 0x003A7FF4 (31 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7FD5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A7FD5: ;
    edx = 0; /* xor self */
    eax = ecx + 4;

loc_003A7FDA: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A7FF0; /* je: equal / zero */

loc_003A7FE2: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003A7FDA; /* jle: less or equal (signed <=) */

loc_003A7FEB: ;
    SET_LO8(eax, 0); /* xor self */

loc_003A7FED: ;
    esp += 8; return; /* ret 4 */

loc_003A7FF0: ;
    SET_LO8(eax, 1);
    goto loc_003A7FED;

}

/**
 * sub_003A7FF4
 * Original: 0x003A7FF4 - 0x003A8016 (34 bytes, 19 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7FF4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A7FF4: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */

loc_003A7FFA: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003A8002u); RECOMP_ABI_CALL(0x003A7FD5u, sub_003A7FD5); /* call 0x003A7FD5 */

loc_003A8002: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A8012; /* je: equal / zero */

loc_003A8006: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003A7FFA; /* jle: less or equal (signed <=) */

loc_003A800C: ;
    PUSH32(esp, 4);
    POP32(esp, eax);

loc_003A800F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003A8012: ;
    eax = esi;
    goto loc_003A800F;

}

/**
 * sub_003A8016
 * Original: 0x003A8016 - 0x003A8051 (59 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8016(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A8016: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_003A8046; /* jle: less or equal (signed <=) */

loc_003A8022: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A8041; /* je: equal / zero */

loc_003A8027: ;
    edx = MEM32(ecx + eax * 4 + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A8041; /* je: equal / zero */

loc_003A8030: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A8039; /* jne: not equal / not zero */

loc_003A8035: ;
    PUSH32(esp, edi);
    POP32(esp, esi);
    goto loc_003A803D;

loc_003A8039: ;
    esi = MEM32(ecx + edi * 4 + 4);

loc_003A803D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A804D; /* je: equal / zero */

loc_003A8041: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003A8022; /* jl: less (signed <) */

loc_003A8046: ;
    SET_LO8(eax, 0); /* xor self */

loc_003A8048: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003A804D: ;
    SET_LO8(eax, 1);
    goto loc_003A8048;

}

/**
 * sub_003A8051
 * Original: 0x003A8051 - 0x003A8073 (34 bytes, 19 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8051(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A8051: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */

loc_003A8057: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003A805Fu); RECOMP_ABI_CALL(0x003A8016u, sub_003A8016); /* call 0x003A8016 */

loc_003A805F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A806F; /* jne: not equal / not zero */

loc_003A8063: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003A8057; /* jle: less or equal (signed <=) */

loc_003A8069: ;
    PUSH32(esp, 4);
    POP32(esp, eax);

loc_003A806C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003A806F: ;
    eax = esi;
    goto loc_003A806C;

}

/**
 * sub_003A8073
 * Original: 0x003A8073 - 0x003A808E (27 bytes, 10 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8073(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A8073: ;
    PUSH32(esp, esi);
    esi = ecx;
    goto loc_003A8080;

loc_003A8078: ;
    MEM32(esi + eax * 4 + 4) = 4;

loc_003A8080: ;
    ecx = esi;
    PUSH32(esp, 0x003A8087u); RECOMP_ABI_CALL(0x003A8051u, sub_003A8051); /* call 0x003A8051 */

loc_003A8087: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A8078; /* jne: not equal / not zero */

loc_003A808C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003A808E
 * Original: 0x003A808E - 0x003A80AE (32 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A808E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A808E: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A80A8; /* je: equal / zero */

loc_003A8097: ;
    ecx = MEM32(ecx + eax * 4 + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A80A8; /* je: equal / zero */

loc_003A809F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A80A8; /* je: equal / zero */

loc_003A80A4: ;
    eax = 0; /* xor self */
    goto loc_003A80AB;

loc_003A80A8: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003A80AB: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A80AE
 * Original: 0x003A80AE - 0x003A80D0 (34 bytes, 19 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A80AE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A80AE: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */

loc_003A80B4: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003A80BCu); RECOMP_ABI_CALL(0x003A808Eu, sub_003A808E); /* call 0x003A808E */

loc_003A80BC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A80CC; /* je: equal / zero */

loc_003A80C0: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003A80B4; /* jle: less or equal (signed <=) */

loc_003A80C6: ;
    PUSH32(esp, 4);
    POP32(esp, eax);

loc_003A80C9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003A80CC: ;
    eax = esi;
    goto loc_003A80C9;

}

/**
 * sub_003A80D0
 * Original: 0x003A80D0 - 0x003A80F1 (33 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A80D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A80D0: ;
    eax = 0; /* xor self */

loc_003A80D2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A80DB; /* jne: not equal / not zero */

loc_003A80D7: ;
    PUSH32(esp, eax);
    POP32(esp, edx);
    goto loc_003A80DF;

loc_003A80DB: ;
    edx = MEM32(ecx + eax * 4 + 4);

loc_003A80DF: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A80EE; /* je: equal / zero */

loc_003A80E5: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003A80D2; /* jle: less or equal (signed <=) */

loc_003A80EB: ;
    PUSH32(esp, 4);
    POP32(esp, eax);

loc_003A80EE: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A80F1
 * Original: 0x003A80F1 - 0x003A8112 (33 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A80F1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A80F1: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */

loc_003A80F7: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003A80FFu); RECOMP_ABI_CALL(0x003A7FD5u, sub_003A7FD5); /* call 0x003A7FD5 */

loc_003A80FF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A810E; /* je: equal / zero */

loc_003A8103: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003A80F7; /* jle: less or equal (signed <=) */

loc_003A8109: ;
    SET_LO8(eax, 1);

loc_003A810B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003A810E: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_003A810B;

}

/**
 * sub_003A8112
 * Original: 0x003A8112 - 0x003A8153 (65 bytes, 27 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A8112(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_003A8112: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A8124u); RECOMP_ABI_CALL(0x003A80D0u, sub_003A80D0); /* call 0x003A80D0 */

loc_003A8124: ;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A812Eu); RECOMP_ABI_CALL(0x003A80D0u, sub_003A80D0); /* call 0x003A80D0 */

loc_003A812E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A8138u); RECOMP_ABI_CALL(0x003A80D0u, sub_003A80D0); /* call 0x003A80D0 */

loc_003A8138: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A8142u); RECOMP_ABI_CALL(0x003A80D0u, sub_003A80D0); /* call 0x003A80D0 */

loc_003A8142: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A814Bu); RECOMP_ABI_CALL(0x003A7FA7u, sub_003A7FA7); /* call 0x003A7FA7 */

loc_003A814B: ;
    eax = MEM32(ebp + 8);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A8153
 * Original: 0x003A8153 - 0x003A8181 (46 bytes, 20 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8153(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A8153: ;
    edx = 0; /* xor self */
    PUSH32(esp, esi);

loc_003A8156: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A8171; /* je: equal / zero */

loc_003A815B: ;
    eax = MEM32(ecx + edx * 4 + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A8171; /* je: equal / zero */

loc_003A8164: ;
    esi = MEM32(esp + edx * 4 + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A8171; /* je: equal / zero */

loc_003A816D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A817D; /* jne: not equal / not zero */

loc_003A8171: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003A8156; /* jle: less or equal (signed <=) */

loc_003A8177: ;
    SET_LO8(eax, 1);

loc_003A8179: ;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

loc_003A817D: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_003A8179;

}

/**
 * sub_003A8181
 * Original: 0x003A8181 - 0x003A819D (28 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8181(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A8181: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A8197; /* je: equal / zero */

loc_003A8189: ;
    edx = MEM32(eax + 0x34);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A8194; /* je: equal / zero */

loc_003A8190: ;
    MEM32(edx + 0x30) = MEM32(edx + 0x30) & 0;

loc_003A8194: ;
    MEM32(eax + 0x34) = ecx;

loc_003A8197: ;
    MEM32(ecx + 0x30) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A819D
 * Original: 0x003A819D - 0x003A81C1 (36 bytes, 14 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A819D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A819D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A81BB; /* je: equal / zero */

loc_003A81A3: ;
    ecx = MEM32(ecx + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A81B7; /* je: equal / zero */

loc_003A81AA: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x003A81B3u); RECOMP_ABI_CALL(0x003A819Du, sub_003A819D); /* call 0x003A819D */

loc_003A81B3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A81BB; /* jne: not equal / not zero */

loc_003A81B7: ;
    eax = 0; /* xor self */
    goto loc_003A81BE;

loc_003A81BB: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003A81BE: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A81C1
 * Original: 0x003A81C1 - 0x003A81E5 (36 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003A81C1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A81C1: ;
    eax = MEM32(esp + 4);
    eax = eax * 4 + 0x20;
    goto loc_003A81D5;

loc_003A81CE: ;
    ecx = MEM32(ecx + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A81E0; /* je: equal / zero */

loc_003A81D5: ;
    _fa = (uint32_t)(MEM32(eax + ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A81CE; /* je: equal / zero */

loc_003A81DB: ;
    eax = MEM32(eax + ecx);
    goto loc_003A81E2;

loc_003A81E0: ;
    eax = 0; /* xor self */

loc_003A81E2: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A81E5
 * Original: 0x003A81E5 - 0x003A8208 (35 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A81E5(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_003A81E5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(eax) = 0x431A84;
    esi = ecx + 0x1C;
    edi = eax + 4;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A8208
 * Original: 0x003A8208 - 0x003A8228 (32 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8208(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A8208: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    eax = ecx;
    PUSH32(esp, 4);
    edx = eax + 4;
    esi = esi - eax;
    POP32(esp, ecx);

loc_003A8218: ;
    edi = MEM32(esi + edx);
    MEM32(edx) = edi;
    edx = edx + 4;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003A8218; /* jne: not equal / not zero */

loc_003A8223: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A8228
 * Original: 0x003A8228 - 0x003A8245 (29 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8228(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A8228: ;
    _fa = (uint32_t)(MEM32(ecx + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x2C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A8233; /* je: equal / zero */

loc_003A822E: ;
    ecx = MEM32(ecx + 0x38);
    goto loc_003A8236;

loc_003A8233: ;
    ecx = MEM32(ecx + 0x3C);

loc_003A8236: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A823F; /* je: equal / zero */

loc_003A823A: ;
    ecx = MEM32(ecx + 8);
    goto loc_003A8242;

loc_003A823F: ;
    PUSH32(esp, 0xF);
    POP32(esp, ecx);

loc_003A8242: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003A8245
 * Original: 0x003A8245 - 0x003A8260 (27 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A8245(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_003A8245: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    MEM32(eax) = 0x431A80;
    ecx = MEM32(ecx + 0x18);
    MEM32(eax + 4) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A8260
 * Original: 0x003A8260 - 0x003A827B (27 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A8260(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_003A8260: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    MEM32(eax) = 0x431A80;
    ecx = MEM32(ecx + 0x20);
    MEM32(eax + 4) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A827B
 * Original: 0x003A827B - 0x003A8296 (27 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A827B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_003A827B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    MEM32(eax) = 0x431A80;
    ecx = MEM32(ecx + 0x28);
    MEM32(eax + 4) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A8296
 * Original: 0x003A8296 - 0x003A82B7 (33 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8296(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A8296: ;
    eax = MEM32(esp + 4);
    eax = eax + ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(MEM8(eax + 0x20)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x20), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A82B1; /* jne: not equal / not zero */

loc_003A82A3: ;
    _fa = (uint32_t)(MEM8(ecx + 0x10)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x10), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A82AD; /* jne: not equal / not zero */

loc_003A82A8: ;
    _fa = (uint32_t)(MEM8(eax + 0x18)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x18), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A82B1; /* jne: not equal / not zero */

loc_003A82AD: ;
    eax = 0; /* xor self */
    goto loc_003A82B4;

loc_003A82B1: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003A82B4: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A82B7
 * Original: 0x003A82B7 - 0x003A82D8 (33 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A82B7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A82B7: ;
    eax = MEM32(esp + 4);
    eax = eax + ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(MEM8(eax + 0x28)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x28), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A82D2; /* jne: not equal / not zero */

loc_003A82C4: ;
    _fa = (uint32_t)(MEM8(ecx + 0x10)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x10), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A82CE; /* je: equal / zero */

loc_003A82C9: ;
    _fa = (uint32_t)(MEM8(eax + 0x18)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x18), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A82D2; /* jne: not equal / not zero */

loc_003A82CE: ;
    eax = 0; /* xor self */
    goto loc_003A82D5;

loc_003A82D2: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003A82D5: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A82D8
 * Original: 0x003A82D8 - 0x003A82F6 (30 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A82D8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A82D8: ;
    eax = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A82F2; /* je: equal / zero */

loc_003A82E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A82F2; /* je: equal / zero */

loc_003A82E5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003A82EF; /* jl: less (signed <) */

loc_003A82EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003A82F2; /* jle: less or equal (signed <=) */

loc_003A82EF: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_003A82F2: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_003A82F6
 * Original: 0x003A82F6 - 0x003A830A (20 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A82F6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A82F6: ;
    eax = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A8306; /* je: equal / zero */

loc_003A82FE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A8306; /* je: equal / zero */

loc_003A8303: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_003A8306: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_003A830A
 * Original: 0x003A830A - 0x003A8329 (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003A830A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A830A: ;
    eax = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A8318; /* jne: not equal / not zero */

loc_003A8312: ;
    _fa = (uint32_t)(MEM32(ecx + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x30), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A8322; /* je: equal / zero */

loc_003A8318: ;
    _fa = (uint32_t)(MEM32(ecx + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x30), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A8326; /* jne: not equal / not zero */

loc_003A831E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A8326; /* jne: not equal / not zero */

loc_003A8322: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_003A8326: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_003A8329
 * Original: 0x003A8329 - 0x003A8347 (30 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8329(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A8329: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    eax = ecx;
    PUSH32(esp, 4);
    edx = eax + 4;
    esi = esi - eax;
    POP32(esp, edi);

loc_003A8339: ;
    SET_LO8(ecx, MEM8(esi + edx));
    MEM8(edx) = LO8(ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003A8339; /* jne: not equal / not zero */

loc_003A8342: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A8347
 * Original: 0x003A8347 - 0x003A835E (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A8347(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_003A8347: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x449978);
    eax = ebp + -1;
    PUSH32(esp, eax);
    MEM8(ebp + -1) = 0x21;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A835Du); RECOMP_ABI_CALL(0x0034491Au, sub_0034491A); /* call 0x0034491A */

loc_003A835D: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003A835E
 * Original: 0x003A835E - 0x003A8385 (39 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A835E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A835E: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_003A8375; /* jge: greater or equal (signed >=) */

loc_003A8371: ;
    SET_LO8(eax, 1);
    goto loc_003A8381;

loc_003A8375: ;
    if (CMP_LE(_fas, _fbs)) goto loc_003A837B; /* jle: less or equal (signed <=) */

loc_003A8377: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    goto loc_003A8381;

loc_003A837B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);

loc_003A8381: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003A8385
 * Original: 0x003A8385 - 0x003A839A (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003A8385(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A8385: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A8397; /* je: equal / zero */

loc_003A838C: ;
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3BE70C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3BE70C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A8399; /* jne: not equal / not zero */

loc_003A8397: ;
    eax = 0; /* xor self */

loc_003A8399: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003A839A
 * Original: 0x003A839A - 0x003A83EE (84 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A839A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A839A: ;
    eax = MEM32(esp + 4);
    edx = 0; /* xor self */
    eax = eax - edx;
    if ((eax == 0)) goto loc_003A83E3; /* je: equal / zero */

loc_003A83A4: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003A83C9; /* je: equal / zero */

loc_003A83A7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003A83AE; /* je: equal / zero */

loc_003A83AA: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_003A83EB;

loc_003A83AE: ;
    _fa = (uint32_t)(MEM32(ecx + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x30), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A83C4; /* jne: not equal / not zero */

loc_003A83B3: ;
    ecx = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A83C4; /* je: equal / zero */

loc_003A83BB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A83C4; /* je: equal / zero */

loc_003A83C0: ;
    eax = 0; /* xor self */
    goto loc_003A83EB;

loc_003A83C4: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003A83EB;

loc_003A83C9: ;
    ecx = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A83C0; /* je: equal / zero */

loc_003A83D0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A83C0; /* je: equal / zero */

loc_003A83D5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A83C0; /* je: equal / zero */

loc_003A83DA: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A83EB; /* jne: not equal / not zero */

loc_003A83E1: ;
    goto loc_003A83C0;

loc_003A83E3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ecx + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x2C), edx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */

loc_003A83EB: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A83EE
 * Original: 0x003A83EE - 0x003A855E (368 bytes, 138 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A83EE(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A83EE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    if (CMP_G(_fas, _fbs)) goto loc_003A8482; /* jg: greater (signed >) */

loc_003A8404: ;
    if (CMP_EQ(_fa, _fb)) goto loc_003A8472; /* je: equal / zero */

loc_003A8406: ;
    eax = eax - 0;
    if ((eax == 0)) goto loc_003A841E; /* je: equal / zero */

loc_003A840B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003A8469; /* je: equal / zero */

loc_003A840E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003A8452; /* je: equal / zero */

loc_003A8412: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003A845B; /* je: equal / zero */

loc_003A8415: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A845B; /* je: equal / zero */

loc_003A8419: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A845B; /* je: equal / zero */

loc_003A841E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A84BA; /* jne: not equal / not zero */

loc_003A8427: ;
    eax = MEM32(esi + 0x30);
    eax = eax - 0;
    if ((eax == 0)) goto loc_003A84BA; /* je: equal / zero */

loc_003A8433: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003A8551; /* je: equal / zero */

loc_003A843A: ;
    eax = eax - 5;
    if ((eax == 0)) goto loc_003A8523; /* je: equal / zero */

loc_003A8443: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003A84FB; /* je: equal / zero */

loc_003A844A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */

loc_003A844C: ;
    if (_flags /* jne: not equal / not zero */) goto loc_003A84BA;

loc_003A844E: ;
    SET_LO8(eax, 1);
    goto loc_003A84BC;

loc_003A8452: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A845B; /* je: equal / zero */

loc_003A8456: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A84BA; /* jne: not equal / not zero */

loc_003A845B: ;
    ecx = esi;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A8463u); RECOMP_ABI_CALL(0x003A8296u, sub_003A8296); /* call 0x003A8296 */

loc_003A8463: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A841E; /* je: equal / zero */

loc_003A8467: ;
    goto loc_003A844E;

loc_003A8469: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A841E; /* jne: not equal / not zero */

loc_003A846D: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    goto loc_003A84AF;

loc_003A8472: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A847B; /* je: equal / zero */

loc_003A8476: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A841E; /* jne: not equal / not zero */

loc_003A847B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003A841E; /* jge: greater or equal (signed >=) */

loc_003A8480: ;
    goto loc_003A844E;

loc_003A8482: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003A8415; /* jl: less (signed <) */

loc_003A8487: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003A84E5; /* jle: less or equal (signed <=) */

loc_003A848C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A84A3; /* je: equal / zero */

loc_003A8491: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A8415; /* jne: not equal / not zero */

loc_003A849A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A841E; /* jne: not equal / not zero */

loc_003A849E: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), edi (32-bit) */
    goto loc_003A844C;

loc_003A84A3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A84CD; /* jne: not equal / not zero */

loc_003A84A7: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A84C3; /* jne: not equal / not zero */

loc_003A84AD: ;
    PUSH32(esp, 1);

loc_003A84AF: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A84B6u); RECOMP_ABI_CALL(0x003A8296u, sub_003A8296); /* call 0x003A8296 */

loc_003A84B6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A844E; /* jne: not equal / not zero */

loc_003A84BA: ;
    SET_LO8(eax, 0); /* xor self */

loc_003A84BC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_003A84C3: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A84BA; /* jne: not equal / not zero */

loc_003A84C9: ;
    PUSH32(esp, 2);
    goto loc_003A84AF;

loc_003A84CD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A841E; /* jne: not equal / not zero */

loc_003A84D6: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A84AD; /* je: equal / zero */

loc_003A84DB: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A84BA; /* jne: not equal / not zero */

loc_003A84E1: ;
    PUSH32(esp, 3);
    goto loc_003A84AF;

loc_003A84E5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A844E; /* je: equal / zero */

loc_003A84ED: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A841E; /* jne: not equal / not zero */

loc_003A84F6: ;
    goto loc_003A844E;

loc_003A84FB: ;
    PUSH32(esp, 2);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A8504u); RECOMP_ABI_CALL(0x003A82B7u, sub_003A82B7); /* call 0x003A82B7 */

loc_003A8504: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A8511; /* je: equal / zero */

loc_003A8508: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A844E; /* jne: not equal / not zero */

loc_003A8511: ;
    PUSH32(esp, 1);

loc_003A8513: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A851Au); RECOMP_ABI_CALL(0x003A82B7u, sub_003A82B7); /* call 0x003A82B7 */

loc_003A851A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A84BA; /* je: equal / zero */

loc_003A851E: ;
    goto loc_003A844A;

loc_003A8523: ;
    PUSH32(esp, 0);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A852Cu); RECOMP_ABI_CALL(0x003A82B7u, sub_003A82B7); /* call 0x003A82B7 */

loc_003A852C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A8538; /* je: equal / zero */

loc_003A8530: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A844E; /* je: equal / zero */

loc_003A8538: ;
    PUSH32(esp, 1);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A8541u); RECOMP_ABI_CALL(0x003A82B7u, sub_003A82B7); /* call 0x003A82B7 */

loc_003A8541: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A854D; /* je: equal / zero */

loc_003A8545: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A844E; /* je: equal / zero */

loc_003A854D: ;
    PUSH32(esp, 2);
    goto loc_003A8513;

loc_003A8551: ;
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A8559u); RECOMP_ABI_CALL(0x003A82B7u, sub_003A82B7); /* call 0x003A82B7 */

loc_003A8559: ;
    goto loc_003A84B6;

}

/**
 * sub_003A855E
 * Original: 0x003A855E - 0x003A85A8 (74 bytes, 34 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A855E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_003A855E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A8575u); RECOMP_ABI_CALL(0x003A83EEu, sub_003A83EE); /* call 0x003A83EE */

loc_003A8575: ;
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A8580u); RECOMP_ABI_CALL(0x003A83EEu, sub_003A83EE); /* call 0x003A83EE */

loc_003A8580: ;
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A858Bu); RECOMP_ABI_CALL(0x003A83EEu, sub_003A83EE); /* call 0x003A83EE */

loc_003A858B: ;
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A8596u); RECOMP_ABI_CALL(0x003A83EEu, sub_003A83EE); /* call 0x003A83EE */

loc_003A8596: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A859Fu); RECOMP_ABI_CALL(0x003A7E26u, sub_003A7E26); /* call 0x003A7E26 */

loc_003A859F: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003A85A8
 * Original: 0x003A85A8 - 0x003A85FC (84 bytes, 39 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A85A8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A85A8: ;
    PUSH32(esp, ecx);
    MEM32(esp) = MEM32(esp) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    PUSH32(esp, edi);
    ebx = ebp + 4;

loc_003A85B6: ;
    eax = MEM32(ebx);
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A85E2; /* je: equal / zero */

loc_003A85BF: ;
    esi = 0; /* xor self */
    edi = eax + 0x20;

loc_003A85C4: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = ebp;
    PUSH32(esp, 0x003A85D0u); RECOMP_ABI_CALL(0x003A83EEu, sub_003A83EE); /* call 0x003A83EE */

loc_003A85D0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A85D9; /* je: equal / zero */

loc_003A85D4: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A85F8; /* je: equal / zero */

loc_003A85D9: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003A85C4; /* jle: less or equal (signed <=) */

loc_003A85E2: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + 4;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003A85B6; /* jle: less or equal (signed <=) */

loc_003A85F0: ;
    SET_LO8(eax, 0); /* xor self */

loc_003A85F2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003A85F8: ;
    SET_LO8(eax, 1);
    goto loc_003A85F2;

}

/**
 * sub_003A85FC
 * Original: 0x003A85FC - 0x003A87A7 (427 bytes, 156 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A85FC(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A85FC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x38) (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_003A8758; /* jne: not equal / not zero */

loc_003A860E: ;
    edx = MEM32(ecx + 0x2C);
    PUSH32(esp, 4);
    POP32(esp, eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003A86F9; /* jg: greater (signed >) */

loc_003A861C: ;
    if (CMP_EQ(_fa, _fb)) goto loc_003A8698; /* je: equal / zero */

loc_003A861E: ;
    edx = edx - 0;
    if ((edx == 0)) goto loc_003A87A3; /* je: equal / zero */

loc_003A8627: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003A8673; /* je: equal / zero */

loc_003A862A: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003A8711; /* jne: not equal / not zero */

loc_003A8632: ;
    edi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A863D; /* jne: not equal / not zero */

loc_003A8639: ;
    ebx = eax;
    goto loc_003A8644;

loc_003A863D: ;
    edx = MEM32(ecx + 4);
    ebx = MEM32(edx + edi * 4 + 0x1C);

loc_003A8644: ;
    esi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A8652; /* jne: not equal / not zero */

loc_003A864B: ;
    edx = eax;
    goto loc_003A86E2;

loc_003A8652: ;
    edx = MEM32(ecx + 4);
    goto loc_003A86DE;

loc_003A865A: ;
    edx = MEM32(ecx + 0xC);
    edi = MEM32(edx + edi * 4 + 0x1C);

loc_003A8661: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A866C; /* je: equal / zero */

loc_003A8665: ;
    eax = MEM32(ecx + 0xC);

loc_003A8668: ;
    eax = MEM32(eax + esi * 4 + 0x1C);

loc_003A866C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    goto loc_003A879E;

loc_003A8673: ;
    edx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A867E; /* jne: not equal / not zero */

loc_003A867A: ;
    esi = eax;
    goto loc_003A8685;

loc_003A867E: ;
    esi = MEM32(ecx + 4);
    esi = MEM32(esi + edx * 4 + 0x1C);

loc_003A8685: ;
    edx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A879C; /* je: equal / zero */

loc_003A8690: ;
    eax = MEM32(ecx + 4);
    goto loc_003A8798;

loc_003A8698: ;
    edi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A86A3; /* jne: not equal / not zero */

loc_003A869F: ;
    ebx = eax;
    goto loc_003A86AA;

loc_003A86A3: ;
    edx = MEM32(ecx + 4);
    ebx = MEM32(edx + edi * 4 + 0x1C);

loc_003A86AA: ;
    esi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A86B5; /* jne: not equal / not zero */

loc_003A86B1: ;
    edx = eax;
    goto loc_003A86BC;

loc_003A86B5: ;
    edx = MEM32(ecx + 4);
    edx = MEM32(edx + esi * 4 + 0x1C);

loc_003A86BC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A8770; /* jne: not equal / not zero */

loc_003A86C4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A86CC; /* jne: not equal / not zero */

loc_003A86C8: ;
    ebx = eax;
    goto loc_003A86D3;

loc_003A86CC: ;
    edx = MEM32(ecx + 8);
    ebx = MEM32(edx + edi * 4 + 0x1C);

loc_003A86D3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A864B; /* je: equal / zero */

loc_003A86DB: ;
    edx = MEM32(ecx + 8);

loc_003A86DE: ;
    edx = MEM32(edx + esi * 4 + 0x1C);

loc_003A86E2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A8770; /* jne: not equal / not zero */

loc_003A86EA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A865A; /* jne: not equal / not zero */

loc_003A86F2: ;
    edi = eax;
    goto loc_003A8661;

loc_003A86F9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003A8711; /* jl: less (signed <) */

loc_003A86FE: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 7 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003A87A3; /* jle: less or equal (signed <=) */

loc_003A8707: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A8770; /* je: equal / zero */

loc_003A870C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A8770; /* je: equal / zero */

loc_003A8711: ;
    edi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A871C; /* jne: not equal / not zero */

loc_003A8718: ;
    ebx = eax;
    goto loc_003A8723;

loc_003A871C: ;
    edx = MEM32(ecx + 4);
    ebx = MEM32(edx + edi * 4 + 0x1C);

loc_003A8723: ;
    esi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A872E; /* jne: not equal / not zero */

loc_003A872A: ;
    edx = eax;
    goto loc_003A8735;

loc_003A872E: ;
    edx = MEM32(ecx + 4);
    edx = MEM32(edx + esi * 4 + 0x1C);

loc_003A8735: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A8770; /* jne: not equal / not zero */

loc_003A8739: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A8741; /* jne: not equal / not zero */

loc_003A873D: ;
    edi = eax;
    goto loc_003A8748;

loc_003A8741: ;
    edx = MEM32(ecx + 8);
    edi = MEM32(edx + edi * 4 + 0x1C);

loc_003A8748: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A866C; /* je: equal / zero */

loc_003A8750: ;
    eax = MEM32(ecx + 8);
    goto loc_003A8668;

loc_003A8758: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x3C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x3C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A8770; /* jne: not equal / not zero */

loc_003A875D: ;
    eax = MEM32(ecx + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A87A3; /* je: equal / zero */

loc_003A8764: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A8779; /* je: equal / zero */

loc_003A8769: ;
    if (CMP_LE(_fas, _fbs)) goto loc_003A8770; /* jle: less or equal (signed <=) */

loc_003A876B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003A87A3; /* jle: less or equal (signed <=) */

loc_003A8770: ;
    SET_LO8(eax, 0); /* xor self */

loc_003A8772: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_003A8779: ;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, 4);
    POP32(esp, eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A8787; /* jne: not equal / not zero */

loc_003A8783: ;
    esi = eax;
    goto loc_003A878E;

loc_003A8787: ;
    esi = MEM32(ecx + 0xC);
    esi = MEM32(esi + edx * 4 + 0x1C);

loc_003A878E: ;
    edx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A879C; /* je: equal / zero */

loc_003A8795: ;
    eax = MEM32(ecx + 0xC);

loc_003A8798: ;
    eax = MEM32(eax + edx * 4 + 0x1C);

loc_003A879C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */

loc_003A879E: ;
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    goto loc_003A8772;

loc_003A87A3: ;
    SET_LO8(eax, 1);
    goto loc_003A8772;

}

/**
 * sub_003A87A7
 * Original: 0x003A87A7 - 0x003A8800 (89 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A87A7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A87A7: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x38) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A87C7; /* jne: not equal / not zero */

loc_003A87B0: ;
    _fa = (uint32_t)(MEM32(ecx + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x2C), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A87C7; /* jne: not equal / not zero */

loc_003A87B6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ecx + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x34), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A87C2; /* je: equal / zero */

loc_003A87BD: ;
    _fa = (uint32_t)(MEM8(ecx + 0x10)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x10), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A87FB; /* je: equal / zero */

loc_003A87C2: ;
    ecx = MEM32(ecx + 4);
    goto loc_003A87EE;

loc_003A87C7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x3C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x3C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A87FB; /* jne: not equal / not zero */

loc_003A87CC: ;
    _fa = (uint32_t)(MEM32(ecx + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x30), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A87FB; /* jne: not equal / not zero */

loc_003A87D2: ;
    eax = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A87FB; /* je: equal / zero */

loc_003A87DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A87FB; /* je: equal / zero */

loc_003A87DF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ecx + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x34), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A87EB; /* je: equal / zero */

loc_003A87E6: ;
    _fa = (uint32_t)(MEM8(ecx + 0x10)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x10), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A87FB; /* jne: not equal / not zero */

loc_003A87EB: ;
    ecx = MEM32(ecx + 0xC);

loc_003A87EE: ;
    _fa = (uint32_t)(MEM8(ecx + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x14), LO8(eax) (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ecx + 0x14) = LO8(eax);
    SET_LO8(eax, 1);
    goto loc_003A87FD;

loc_003A87FB: ;
    SET_LO8(eax, 0); /* xor self */

loc_003A87FD: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A8800
 * Original: 0x003A8800 - 0x003A89D6 (470 bytes, 162 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A8800(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A8800: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x38) (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_003A8913; /* jne: not equal / not zero */

loc_003A8814: ;
    _fa = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x34), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A8820; /* je: equal / zero */

loc_003A881A: ;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x10), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A8837; /* je: equal / zero */

loc_003A8820: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003A8876; /* jl: less (signed <) */

loc_003A8828: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003A8840; /* jle: less or equal (signed <=) */

loc_003A882D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A8837; /* je: equal / zero */

loc_003A8832: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A8876; /* jne: not equal / not zero */

loc_003A8837: ;
    SET_LO8(eax, 0); /* xor self */

loc_003A8839: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

loc_003A8840: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x14), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A89CF; /* jne: not equal / not zero */

loc_003A884A: ;
    eax = MEM32(ebp + 0xC);
    ecx = eax + esi + 0x20;
    eax = MEM32(ebp + 0x10);
    SET_LO8(edx, MEM8(ecx));
    eax = eax + esi + 0x20;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A89CF; /* je: equal / zero */

loc_003A8862: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    SET_LO8(edx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ecx) = LO8(edx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */

loc_003A886C: ;
    SET_LO8(ecx, _flags /* sete */);
    MEM8(eax) = LO8(ecx);
    goto loc_003A89CF;

loc_003A8876: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A887Du); RECOMP_ABI_CALL(0x003A82F6u, sub_003A82F6); /* call 0x003A82F6 */

loc_003A887D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A8887; /* je: equal / zero */

loc_003A8881: ;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x30), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A8837; /* jne: not equal / not zero */

loc_003A8887: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x14), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A89CF; /* jne: not equal / not zero */

loc_003A8891: ;
    eax = MEM32(ebp + 0xC);
    ebx = MEM32(ebp + 0x10);
    edi = eax + esi + 0x20;
    SET_LO8(ecx, MEM8(edi));
    eax = ebx + esi + 0x20;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A88B4; /* je: equal / zero */

loc_003A88A5: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(edi) = LO8(ecx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(eax) = LO8(ecx);

loc_003A88B4: ;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) & 0;
    edi = esi + 4;

loc_003A88BB: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A88C5u); RECOMP_ABI_CALL(0x003A839Au, sub_003A839A); /* call 0x003A839A */

loc_003A88C5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A8902; /* je: equal / zero */

loc_003A88C9: ;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x30), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A88D5; /* je: equal / zero */

loc_003A88CF: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A8902; /* je: equal / zero */

loc_003A88D5: ;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, 4);
    POP32(esp, eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A88E3; /* jne: not equal / not zero */

loc_003A88DF: ;
    ecx = eax;
    goto loc_003A88E9;

loc_003A88E3: ;
    ecx = MEM32(edi);
    ecx = MEM32(ecx + edx * 4 + 0x1C);

loc_003A88E9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A88F3; /* je: equal / zero */

loc_003A88ED: ;
    eax = MEM32(edi);
    eax = MEM32(eax + ebx * 4 + 0x1C);

loc_003A88F3: ;
    ebx = MEM32(edi);
    MEM32(ebx + edx * 4 + 0x1C) = eax;
    eax = MEM32(edi);
    ebx = MEM32(ebp + 0x10);
    MEM32(eax + ebx * 4 + 0x1C) = ecx;

loc_003A8902: ;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003A88BB; /* jle: less or equal (signed <=) */

loc_003A890E: ;
    goto loc_003A89CF;

loc_003A8913: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x3C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x3C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A8837; /* jne: not equal / not zero */

loc_003A891C: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x34), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A892C; /* je: equal / zero */

loc_003A8923: ;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x10), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A8837; /* jne: not equal / not zero */

loc_003A892C: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A896E; /* je: equal / zero */

loc_003A8934: ;
    if (CMP_LE(_fas, _fbs)) goto loc_003A8837; /* jle: less or equal (signed <=) */

loc_003A893A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003A8837; /* jg: greater (signed >) */

loc_003A8943: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x14), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A89CF; /* jne: not equal / not zero */

loc_003A894C: ;
    eax = MEM32(ebp + 0xC);
    ecx = eax + esi + 0x28;
    eax = MEM32(ebp + 0x10);
    SET_LO8(edx, MEM8(ecx));
    eax = eax + esi + 0x28;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A89CF; /* je: equal / zero */

loc_003A8960: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ecx) = LO8(edx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(ebx) (8-bit) */
    goto loc_003A886C;

loc_003A896E: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A8975u); RECOMP_ABI_CALL(0x003A82F6u, sub_003A82F6); /* call 0x003A82F6 */

loc_003A8975: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A8837; /* jne: not equal / not zero */

loc_003A897D: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x14), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A89CF; /* jne: not equal / not zero */

loc_003A8982: ;
    edx = MEM32(ebp + 0xC);
    edi = MEM32(ebp + 0x10);
    SET_LO8(ecx, MEM8(edx + esi + 0x28));
    eax = edi + esi + 0x28;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A89A4; /* je: equal / zero */

loc_003A8994: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(edx + esi + 0x28) = LO8(ecx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(ebx) (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(eax) = LO8(ecx);

loc_003A89A4: ;
    PUSH32(esp, 4);
    POP32(esp, eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A89AF; /* jne: not equal / not zero */

loc_003A89AB: ;
    ecx = eax;
    goto loc_003A89B6;

loc_003A89AF: ;
    ecx = MEM32(esi + 0xC);
    ecx = MEM32(ecx + edx * 4 + 0x1C);

loc_003A89B6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A89C1; /* je: equal / zero */

loc_003A89BA: ;
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + edi * 4 + 0x1C);

loc_003A89C1: ;
    ebx = MEM32(esi + 0xC);
    MEM32(ebx + edx * 4 + 0x1C) = eax;
    eax = MEM32(esi + 0xC);
    MEM32(eax + edi * 4 + 0x1C) = ecx;

loc_003A89CF: ;
    SET_LO8(eax, 1);
    goto loc_003A8839;

}

/**
 * sub_003A89D6
 * Original: 0x003A89D6 - 0x003A8ABE (232 bytes, 87 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A89D6(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A89D6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x14;
    eax = MEM32(ebp + 8);
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_003A8ABA; /* jle: less or equal (signed <=) */

loc_003A89E9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xF);
    MEM32(ebp + -4) = 2;
    ecx = eax + 0x14;
    esi = 0xF00000;
    POP32(esp, ebx);

loc_003A89FE: ;
    edi = MEM32(ecx + -16);
    edi = edi & esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A8AA1; /* jne: not equal / not zero */

loc_003A8A0B: ;
    eax = 0; /* xor self */
    edi = ebp + -20;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = MEM32(ebp + -4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003A8A48; /* jge: greater or equal (signed >=) */

loc_003A8A1C: ;
    eax = MEM32(ecx + -4);
    eax = eax >> 0x14;
    eax = eax & ebx;
    MEM8(ebp + eax + -20) = 1;
    eax = MEM32(ecx + 4);
    eax = eax & ebx;
    MEM8(ebp + eax + -20) = 1;
    eax = MEM32(ecx);
    edi = eax;
    edi = edi >> 0xF;
    edi = edi & ebx;
    eax = eax & ebx;
    MEM8(ebp + edi + -20) = 1;
    MEM8(ebp + eax + -20) = 1;

loc_003A8A48: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003A8A7A; /* jge: greater or equal (signed >=) */

loc_003A8A4D: ;
    eax = MEM32(ecx + 8);
    eax = eax >> 0x14;
    eax = eax & ebx;
    MEM8(ebp + eax + -20) = 1;
    eax = MEM32(ecx + 0x10);
    eax = eax & ebx;
    MEM8(ebp + eax + -20) = 1;
    eax = MEM32(ecx + 0xC);
    edx = eax;
    edx = edx >> 0xF;
    edx = edx & ebx;
    eax = eax & ebx;
    MEM8(ebp + edx + -20) = 1;
    MEM8(ebp + eax + -20) = 1;

loc_003A8A7A: ;
    _fa = (uint32_t)(MEM8(ebp + -9)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -9), 0 (8-bit) */
    PUSH32(esp, 0xB);
    POP32(esp, eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003A8A8F; /* je: equal / zero */

loc_003A8A83: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_003A8A8F; /* jle: less or equal (signed <=) */

loc_003A8A87: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(ebp + eax + -20)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + eax + -20), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A8A83; /* jne: not equal / not zero */

loc_003A8A8F: ;
    edx = MEM32(ecx + -16);
    eax = eax << 0x14;
    eax = eax ^ edx;
    eax = eax & esi;
    eax = eax ^ edx;
    MEM32(ecx + -16) = eax;
    eax = MEM32(ebp + 8);

loc_003A8AA1: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = MEM32(ebp + -4);
    edx = MEM32(eax);
    edi = edi + 0xFFFFFFFEu;
    ecx = ecx + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003A89FE; /* jl: less (signed <) */

loc_003A8AB7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_003A8ABA: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A8ABE
 * Original: 0x003A8ABE - 0x003A8AE7 (41 bytes, 15 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8ABE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A8ABE: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A8AE3; /* je: equal / zero */

loc_003A8AC7: ;
    PUSH32(esp, MEM32(esi + 0xC));
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    PUSH32(esp, 0x003A8AD3u); RECOMP_ABI_CALL(0x003A8ABEu, sub_003A8ABE); /* call 0x003A8ABE */

loc_003A8AD3: ;
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x003A8ADBu); RECOMP_ABI_CALL(0x003A8ABEu, sub_003A8ABE); /* call 0x003A8ABE */

loc_003A8ADB: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003A8AE3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003A8AE3: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A8AE7
 * Original: 0x003A8AE7 - 0x003A8B10 (41 bytes, 15 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8AE7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A8AE7: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A8B0C; /* je: equal / zero */

loc_003A8AF0: ;
    PUSH32(esp, MEM32(esi + 0xC));
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    PUSH32(esp, 0x003A8AFCu); RECOMP_ABI_CALL(0x003A8AE7u, sub_003A8AE7); /* call 0x003A8AE7 */

loc_003A8AFC: ;
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x003A8B04u); RECOMP_ABI_CALL(0x003A8AE7u, sub_003A8AE7); /* call 0x003A8AE7 */

loc_003A8B04: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003A8B0Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003A8B0C: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A8B10
 * Original: 0x003A8B10 - 0x003A8B42 (50 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A8B10: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A8B24; /* jne: not equal / not zero */

loc_003A8B1E: ;
    eax = MEM32(eax + 0xC);
    MEM32(esi + 4) = eax;

loc_003A8B24: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A8B31; /* jne: not equal / not zero */

loc_003A8B2B: ;
    eax = MEM32(eax + 8);
    MEM32(esi + 8) = eax;

loc_003A8B31: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A8B3B; /* je: equal / zero */

loc_003A8B35: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003A8B3Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003A8B3B: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) - 1;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A8B42
 * Original: 0x003A8B42 - 0x003A8B70 (46 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8B42(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A8B42: ;
    eax = ecx;
    edx = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A8B62; /* je: equal / zero */

loc_003A8B4E: ;
    edx = esi;
    esi = MEM32(edx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A8B4E; /* jne: not equal / not zero */

loc_003A8B57: ;
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003A8B5B: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A8B69; /* jne: not equal / not zero */

loc_003A8B60: ;
    edx = esi;

loc_003A8B62: ;
    esi = MEM32(edx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A8B5B; /* jne: not equal / not zero */

loc_003A8B69: ;
    ecx = MEM32(edx + 8);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003A8B70
 * Original: 0x003A8B70 - 0x003A8BB8 (72 bytes, 32 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A8B70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_003A8BAC; /* je: equal / zero */

loc_003A8B7A: ;
    ebx = ecx + 4;

loc_003A8B7D: ;
    edi = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = ebx;
    PUSH32(esp, 0x003A8B8Cu); RECOMP_ABI_CALL(0x003A835Eu, sub_003A835E); /* call 0x003A835E */

loc_003A8B8C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A8B95; /* je: equal / zero */

loc_003A8B90: ;
    esi = MEM32(esi + 0xC);
    goto loc_003A8BA8;

loc_003A8B95: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = ebx;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003A8BA1u); RECOMP_ABI_CALL(0x003A835Eu, sub_003A835E); /* call 0x003A835E */

loc_003A8BA1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A8BB4; /* je: equal / zero */

loc_003A8BA5: ;
    esi = MEM32(esi + 0x10);

loc_003A8BA8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A8B7D; /* jne: not equal / not zero */

loc_003A8BAC: ;
    eax = 0; /* xor self */

loc_003A8BAE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_003A8BB4: ;
    eax = esi;
    goto loc_003A8BAE;

}

/**
 * sub_003A8BB8
 * Original: 0x003A8BB8 - 0x003A8BE1 (41 bytes, 15 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8BB8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A8BB8: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A8BDD; /* je: equal / zero */

loc_003A8BC1: ;
    PUSH32(esp, MEM32(esi + 0x10));
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    PUSH32(esp, 0x003A8BCDu); RECOMP_ABI_CALL(0x003A8BB8u, sub_003A8BB8); /* call 0x003A8BB8 */

loc_003A8BCD: ;
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, 0x003A8BD5u); RECOMP_ABI_CALL(0x003A8BB8u, sub_003A8BB8); /* call 0x003A8BB8 */

loc_003A8BD5: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003A8BDDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003A8BDD: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A8BE1
 * Original: 0x003A8BE1 - 0x003A8C0F (46 bytes, 15 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8BE1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A8BE1: ;
    edx = MEM32(esp + 0xC);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(eax) = 0x431A94;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_003A8C05; /* je: equal / zero */

loc_003A8C02: ;
    MEM32(ecx + 0xC) = eax;

loc_003A8C05: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A8C0C; /* je: equal / zero */

loc_003A8C09: ;
    MEM32(edx + 8) = eax;

loc_003A8C0C: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003A8C0F
 * Original: 0x003A8C0F - 0x003A8C33 (36 bytes, 13 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8C0F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A8C0F: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003A8C17u); RECOMP_ABI_CALL(0x003A8C33u, sub_003A8C33); /* call 0x003A8C33 */

loc_003A8C17: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A8C2D; /* je: equal / zero */

loc_003A8C1E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A8C2D; /* je: equal / zero */

loc_003A8C22: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003A8C2Du); RECOMP_ABI_CALL(0x001A1E7Bu, sub_001A1E7B); /* call 0x001A1E7B */

loc_003A8C2D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A8C33
 * Original: 0x003A8C33 - 0x003A8C54 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8C33(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A8C33: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(ecx) = 0x431A94;
    if (TEST_Z(_fa, _fb)) goto loc_003A8C46; /* je: equal / zero */

loc_003A8C40: ;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = edx;

loc_003A8C46: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A8C53; /* je: equal / zero */

loc_003A8C4D: ;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;

loc_003A8C53: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003A8C54
 * Original: 0x003A8C54 - 0x003A8C7D (41 bytes, 15 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8C54(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A8C54: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A8C79; /* je: equal / zero */

loc_003A8C5D: ;
    PUSH32(esp, MEM32(esi + 0xC));
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    PUSH32(esp, 0x003A8C69u); RECOMP_ABI_CALL(0x003A8C54u, sub_003A8C54); /* call 0x003A8C54 */

loc_003A8C69: ;
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x003A8C71u); RECOMP_ABI_CALL(0x003A8C54u, sub_003A8C54); /* call 0x003A8C54 */

loc_003A8C71: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003A8C79u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003A8C79: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A8C7D
 * Original: 0x003A8C7D - 0x003A8CA6 (41 bytes, 15 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8C7D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A8C7D: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A8CA2; /* je: equal / zero */

loc_003A8C86: ;
    PUSH32(esp, MEM32(esi + 0xC));
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    PUSH32(esp, 0x003A8C92u); RECOMP_ABI_CALL(0x003A8C7Du, sub_003A8C7D); /* call 0x003A8C7D */

loc_003A8C92: ;
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x003A8C9Au); RECOMP_ABI_CALL(0x003A8C7Du, sub_003A8C7D); /* call 0x003A8C7D */

loc_003A8C9A: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003A8CA2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003A8CA2: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A8CA6
 * Original: 0x003A8CA6 - 0x003A8CCF (41 bytes, 15 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8CA6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A8CA6: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A8CCB; /* je: equal / zero */

loc_003A8CAF: ;
    PUSH32(esp, MEM32(esi + 0xC));
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    PUSH32(esp, 0x003A8CBBu); RECOMP_ABI_CALL(0x003A8CA6u, sub_003A8CA6); /* call 0x003A8CA6 */

loc_003A8CBB: ;
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x003A8CC3u); RECOMP_ABI_CALL(0x003A8CA6u, sub_003A8CA6); /* call 0x003A8CA6 */

loc_003A8CC3: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003A8CCBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003A8CCB: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A8CCF
 * Original: 0x003A8CCF - 0x003A8CF8 (41 bytes, 15 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8CCF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A8CCF: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A8CF4; /* je: equal / zero */

loc_003A8CD8: ;
    PUSH32(esp, MEM32(esi + 0xC));
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    PUSH32(esp, 0x003A8CE4u); RECOMP_ABI_CALL(0x003A8CCFu, sub_003A8CCF); /* call 0x003A8CCF */

loc_003A8CE4: ;
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x003A8CECu); RECOMP_ABI_CALL(0x003A8CCFu, sub_003A8CCF); /* call 0x003A8CCF */

loc_003A8CEC: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003A8CF4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003A8CF4: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A8CF8
 * Original: 0x003A8CF8 - 0x003A8D10 (24 bytes, 8 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8CF8(void)
{

loc_003A8CF8: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    MEM32(esi) = 0x431A80;
    PUSH32(esp, 0x003A8D0Au); RECOMP_ABI_CALL(0x003A7E81u, sub_003A7E81); /* call 0x003A7E81 */

loc_003A8D0A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A8D10
 * Original: 0x003A8D10 - 0x003A8D30 (32 bytes, 13 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8D10(void)
{

loc_003A8D10: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 8);
    POP32(esp, eax);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((LO8(ecx)) & 31u));
    ecx = esi;
    MEM32(esi) = 0x431A80;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003A8D2Au); RECOMP_ABI_CALL(0x003A7E81u, sub_003A7E81); /* call 0x003A7E81 */

loc_003A8D2A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A8D30
 * Original: 0x003A8D30 - 0x003A8D51 (33 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A8D30: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x431A80;
    if (TEST_Z(_fa, _fb)) goto loc_003A8D4B; /* je: equal / zero */

loc_003A8D40: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003A8D4Bu); RECOMP_ABI_CALL(0x001A1E7Bu, sub_001A1E7B); /* call 0x001A1E7B */

loc_003A8D4B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A8D51
 * Original: 0x003A8D51 - 0x003A8D90 (63 bytes, 27 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A8D51(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A8D51: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */
    PUSH32(esp, 0xF);
    ecx = ebp + -8;
    MEM32(ebp + -4) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A8D69u); RECOMP_ABI_CALL(0x003A7E81u, sub_003A7E81); /* call 0x003A7E81 */

loc_003A8D69: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A8D71u); RECOMP_ABI_CALL(0x003A7FD5u, sub_003A7FD5); /* call 0x003A7FD5 */

loc_003A8D71: ;
    MEM8(ebp + esi + -4) = LO8(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003A8D69; /* jle: less or equal (signed <=) */

loc_003A8D7B: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    MEM32(eax) = 0x431A80;
    MEM32(eax + 4) = ecx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A8D90
 * Original: 0x003A8D90 - 0x003A8DB1 (33 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A8D90: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */

loc_003A8D96: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003A8D9Eu); RECOMP_ABI_CALL(0x003A808Eu, sub_003A808E); /* call 0x003A808E */

loc_003A8D9E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A8DAD; /* je: equal / zero */

loc_003A8DA2: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003A8D96; /* jle: less or equal (signed <=) */

loc_003A8DA8: ;
    SET_LO8(eax, 1);

loc_003A8DAA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003A8DAD: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_003A8DAA;

}

/**
 * sub_003A8DB1
 * Original: 0x003A8DB1 - 0x003A8E32 (129 bytes, 58 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A8DB1(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A8DB1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A8DC7u); RECOMP_ABI_CALL(0x003A7F8Eu, sub_003A7F8E); /* call 0x003A7F8E */

loc_003A8DC7: ;
    PUSH32(esp, 4);
    edi = 0; /* xor self */
    POP32(esp, edx);

loc_003A8DCC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A8DD8; /* je: equal / zero */

loc_003A8DD0: ;
    eax = MEM32(esi + edi * 4 + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A8E0F; /* jne: not equal / not zero */

loc_003A8DD8: ;
    eax = edi;

loc_003A8DDA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A8DE8; /* je: equal / zero */

loc_003A8DDE: ;
    _fa = (uint32_t)(MEM32(esi + eax * 4 + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + eax * 4 + 4), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A8DEB; /* jne: not equal / not zero */

loc_003A8DE4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_003A8DEB; /* jle: less or equal (signed <=) */

loc_003A8DE8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_003A8DDA;

loc_003A8DEB: ;
    ecx = esi + eax * 4 + 4;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A8E05; /* jne: not equal / not zero */

loc_003A8DF3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A8E0D; /* je: equal / zero */

loc_003A8DF7: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A8E05; /* jne: not equal / not zero */

loc_003A8DFB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003A8E05; /* jge: greater or equal (signed >=) */

loc_003A8E00: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + edx;
    goto loc_003A8DF3;

loc_003A8E05: ;
    eax = MEM32(esi + eax * 4 + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A8E0F; /* jne: not equal / not zero */

loc_003A8E0D: ;
    eax = 0; /* xor self */

loc_003A8E0F: ;
    MEM32(ebp + edi * 4 + -20) = eax;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003A8DCC; /* jle: less or equal (signed <=) */

loc_003A8E19: ;
    eax = MEM32(ebp + 8);
    edi = eax + 4;
    esi = ebp + -20;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    POP32(esp, edi);
    MEM32(eax) = 0x431A84;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A8E32
 * Original: 0x003A8E32 - 0x003A8E84 (82 bytes, 36 insns)
 * Category: game_render
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A8E32(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A8E32: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A8E48u); RECOMP_ABI_CALL(0x003A7F8Eu, sub_003A7F8E); /* call 0x003A7F8E */

loc_003A8E48: ;
    PUSH32(esp, 4);
    ecx = 0; /* xor self */
    POP32(esp, edx);

loc_003A8E4D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A8E59; /* je: equal / zero */

loc_003A8E51: ;
    eax = MEM32(esi + ecx * 4 + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A8E5D; /* jne: not equal / not zero */

loc_003A8E59: ;
    eax = edx;
    goto loc_003A8E61;

loc_003A8E5D: ;
    eax = MEM32(ebp + eax * 4 + 0x10);

loc_003A8E61: ;
    MEM32(ebp + ecx * 4 + -20) = eax;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003A8E4D; /* jle: less or equal (signed <=) */

loc_003A8E6B: ;
    eax = MEM32(ebp + 8);
    edi = eax + 4;
    esi = ebp + -20;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    POP32(esp, edi);
    MEM32(eax) = 0x431A84;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_003A8E84
 * Original: 0x003A8E84 - 0x003A8EA5 (33 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8E84(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A8E84: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x431A84;
    if (TEST_Z(_fa, _fb)) goto loc_003A8E9F; /* je: equal / zero */

loc_003A8E94: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003A8E9Fu); RECOMP_ABI_CALL(0x001A1E7Bu, sub_001A1E7B); /* call 0x001A1E7B */

loc_003A8E9F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A8EA5
 * Original: 0x003A8EA5 - 0x003A8EF3 (78 bytes, 34 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8EA5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A8EA5: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A8EB4; /* jne: not equal / not zero */

loc_003A8EB0: ;
    SET_LO8(eax, 1);
    goto loc_003A8EEF;

loc_003A8EB4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A8EED; /* je: equal / zero */

loc_003A8EB8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A8EED; /* je: equal / zero */

loc_003A8EBC: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A8EE9; /* jne: not equal / not zero */

loc_003A8EC2: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A8EE9; /* jne: not equal / not zero */

loc_003A8EC8: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A8EE9; /* jne: not equal / not zero */

loc_003A8ED0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003A8ED6u); RECOMP_ABI_CALL(0x003A8385u, sub_003A8385); /* call 0x003A8385 */

loc_003A8ED6: ;
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x003A8EDFu); RECOMP_ABI_CALL(0x003A8385u, sub_003A8385); /* call 0x003A8385 */

loc_003A8EDF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_003A8EE9; /* jne: not equal / not zero */

loc_003A8EE4: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003A8EEF;

loc_003A8EE9: ;
    eax = 0; /* xor self */
    goto loc_003A8EEF;

loc_003A8EED: ;
    SET_LO8(eax, 0); /* xor self */

loc_003A8EEF: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A8EF3
 * Original: 0x003A8EF3 - 0x003A8F0F (28 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8EF3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A8EF3: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A8F09; /* je: equal / zero */

loc_003A8EFB: ;
    edx = MEM32(eax + 0x30);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A8F06; /* je: equal / zero */

loc_003A8F02: ;
    MEM32(edx + 0x34) = MEM32(edx + 0x34) & 0;

loc_003A8F06: ;
    MEM32(eax + 0x30) = ecx;

loc_003A8F09: ;
    MEM32(ecx + 0x34) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A8F0F
 * Original: 0x003A8F0F - 0x003A8F45 (54 bytes, 21 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003A8F0F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A8F0F: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A8F1F; /* jne: not equal / not zero */

loc_003A8F15: ;
    _fa = (uint32_t)(MEM32(ecx + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x34), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A8F1F; /* jne: not equal / not zero */

loc_003A8F1B: ;
    SET_LO8(eax, 1);
    goto loc_003A8F42;

loc_003A8F1F: ;
    ecx = MEM32(ecx + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A8F40; /* je: equal / zero */

loc_003A8F26: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx + eax * 4 + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4 + 0x20), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A8F40; /* jne: not equal / not zero */

loc_003A8F31: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003A8F37u); RECOMP_ABI_CALL(0x003AB5DDu, sub_003AB5DD); /* call 0x003AB5DD */

loc_003A8F37: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A8F40; /* je: equal / zero */

loc_003A8F3B: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003A8F42;

loc_003A8F40: ;
    eax = 0; /* xor self */

loc_003A8F42: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A8F45
 * Original: 0x003A8F45 - 0x003A8F6B (38 bytes, 15 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003A8F45(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A8F45: ;
    ecx = MEM32(ecx + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A8F66; /* je: equal / zero */

loc_003A8F4C: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx + eax * 4 + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4 + 0x20), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A8F61; /* jne: not equal / not zero */

loc_003A8F57: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003A8F5Du); RECOMP_ABI_CALL(0x003A8F45u, sub_003A8F45); /* call 0x003A8F45 */

loc_003A8F5D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A8F66; /* je: equal / zero */

loc_003A8F61: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003A8F68;

loc_003A8F66: ;
    eax = 0; /* xor self */

loc_003A8F68: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A8F6B
 * Original: 0x003A8F6B - 0x003A8F91 (38 bytes, 15 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003A8F6B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A8F6B: ;
    ecx = MEM32(ecx + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A8F8C; /* je: equal / zero */

loc_003A8F72: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx + eax * 4 + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4 + 0x20), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A8F87; /* jne: not equal / not zero */

loc_003A8F7D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003A8F83u); RECOMP_ABI_CALL(0x003A8F6Bu, sub_003A8F6B); /* call 0x003A8F6B */

loc_003A8F83: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A8F8C; /* je: equal / zero */

loc_003A8F87: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003A8F8E;

loc_003A8F8C: ;
    eax = 0; /* xor self */

loc_003A8F8E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A8F91
 * Original: 0x003A8F91 - 0x003A8FD3 (66 bytes, 26 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A8F91(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A8F91: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0xF);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A8FA7u); RECOMP_ABI_CALL(0x003A7E81u, sub_003A7E81); /* call 0x003A7E81 */

loc_003A8FA7: ;
    eax = esi + 0x20;
    ecx = 0; /* xor self */
    POP32(esp, esi);

loc_003A8FAD: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + ecx + -4) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003A8FAD; /* jle: less or equal (signed <=) */

loc_003A8FC0: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    MEM32(eax) = 0x431A80;
    MEM32(eax + 4) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A8FD3
 * Original: 0x003A8FD3 - 0x003A9004 (49 bytes, 23 insns)
 * Category: game_render
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A8FD3(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_003A8FD3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    ecx = ecx + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A8FE9u); RECOMP_ABI_CALL(0x003A8208u, sub_003A8208); /* call 0x003A8208 */

loc_003A8FE9: ;
    ecx = eax;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0x431A84;
    esi = ecx + 4;
    edi = eax + 4;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_003A9004
 * Original: 0x003A9004 - 0x003A90B3 (175 bytes, 64 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A9004(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A9004: ;
    eax = 0x355044;
    PUSH32(esp, 0x003A900Eu); RECOMP_ABI_CALL(0x0034DEC0u, sub_0034DEC0); /* call 0x0034DEC0 */

loc_003A900E: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    esi = ecx;
    MEM32(ebp + -16) = ebx;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + -4) = ebx;
    MEM32(ebp + -16) = eax;
    edi = 0x431A80;
    if (CMP_EQ(_fa, _fb)) goto loc_003A9056; /* je: equal / zero */

loc_003A902D: ;
    eax = MEM32(esi + 0x18);
    MEM32(ebp + -24) = edi;
    MEM32(ebp + -20) = eax;
    MEM8(ebp + -4) = 1;

loc_003A903A: ;
    _fa = (uint32_t)(MEM8(ebp + ebx + -20)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + ebx + -20), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A904C; /* je: equal / zero */

loc_003A9041: ;
    ecx = MEM32(ebp + -16);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003A904Cu); RECOMP_ABI_CALL(0x003AA74Cu, sub_003AA74C); /* call 0x003AA74C */

loc_003A904C: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003A903A; /* jle: less or equal (signed <=) */

loc_003A9052: ;
    MEM8(ebp + -4) = 0;

loc_003A9056: ;
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM32(ebp + -24) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_003A9087; /* je: equal / zero */

loc_003A9060: ;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -20) = eax;
    MEM8(ebp + -4) = 2;
    edi = 0; /* xor self */

loc_003A906C: ;
    _fa = (uint32_t)(MEM8(ebp + edi + -20)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + edi + -20), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A907C; /* je: equal / zero */

loc_003A9073: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x003A907Cu); RECOMP_ABI_CALL(0x003AA74Cu, sub_003AA74C); /* call 0x003AA74C */

loc_003A907C: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003A906C; /* jle: less or equal (signed <=) */

loc_003A9082: ;
    eax = ebp + 0xC;
    goto loc_003A9094;

loc_003A9087: ;
    PUSH32(esp, 0);
    ecx = ebp + -24;
    PUSH32(esp, 0x003A9091u); RECOMP_ABI_CALL(0x003A7E81u, sub_003A7E81); /* call 0x003A7E81 */

loc_003A9091: ;
    eax = ebp + -24;

loc_003A9094: ;
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    PUSH32(esp, 0x003A909Du); RECOMP_ABI_CALL(0x003A8329u, sub_003A8329); /* call 0x003A8329 */

loc_003A909D: ;
    ecx = MEM32(ebp + -12);
    MEM32(esi + 0x34) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003A90B3
 * Original: 0x003A90B3 - 0x003A9162 (175 bytes, 64 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A90B3(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A90B3: ;
    eax = 0x355044;
    PUSH32(esp, 0x003A90BDu); RECOMP_ABI_CALL(0x0034DEC0u, sub_0034DEC0); /* call 0x0034DEC0 */

loc_003A90BD: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    esi = ecx;
    MEM32(ebp + -16) = ebx;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + -4) = ebx;
    MEM32(ebp + -16) = eax;
    edi = 0x431A80;
    if (CMP_EQ(_fa, _fb)) goto loc_003A9105; /* je: equal / zero */

loc_003A90DC: ;
    eax = MEM32(esi + 0x20);
    MEM32(ebp + -24) = edi;
    MEM32(ebp + -20) = eax;
    MEM8(ebp + -4) = 1;

loc_003A90E9: ;
    _fa = (uint32_t)(MEM8(ebp + ebx + -20)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + ebx + -20), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A90FB; /* je: equal / zero */

loc_003A90F0: ;
    ecx = MEM32(ebp + -16);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003A90FBu); RECOMP_ABI_CALL(0x003AA74Cu, sub_003AA74C); /* call 0x003AA74C */

loc_003A90FB: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003A90E9; /* jle: less or equal (signed <=) */

loc_003A9101: ;
    MEM8(ebp + -4) = 0;

loc_003A9105: ;
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM32(ebp + -24) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_003A9136; /* je: equal / zero */

loc_003A910F: ;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -20) = eax;
    MEM8(ebp + -4) = 2;
    edi = 0; /* xor self */

loc_003A911B: ;
    _fa = (uint32_t)(MEM8(ebp + edi + -20)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + edi + -20), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A912B; /* je: equal / zero */

loc_003A9122: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x003A912Bu); RECOMP_ABI_CALL(0x003AA74Cu, sub_003AA74C); /* call 0x003AA74C */

loc_003A912B: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003A911B; /* jle: less or equal (signed <=) */

loc_003A9131: ;
    eax = ebp + 0xC;
    goto loc_003A9143;

loc_003A9136: ;
    PUSH32(esp, 0);
    ecx = ebp + -24;
    PUSH32(esp, 0x003A9140u); RECOMP_ABI_CALL(0x003A7E81u, sub_003A7E81); /* call 0x003A7E81 */

loc_003A9140: ;
    eax = ebp + -24;

loc_003A9143: ;
    PUSH32(esp, eax);
    ecx = esi + 0x1C;
    PUSH32(esp, 0x003A914Cu); RECOMP_ABI_CALL(0x003A8329u, sub_003A8329); /* call 0x003A8329 */

loc_003A914C: ;
    ecx = MEM32(ebp + -12);
    MEM32(esi + 0x38) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003A9162
 * Original: 0x003A9162 - 0x003A9211 (175 bytes, 64 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A9162(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A9162: ;
    eax = 0x355044;
    PUSH32(esp, 0x003A916Cu); RECOMP_ABI_CALL(0x0034DEC0u, sub_0034DEC0); /* call 0x0034DEC0 */

loc_003A916C: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    esi = ecx;
    MEM32(ebp + -16) = ebx;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + -4) = ebx;
    MEM32(ebp + -16) = eax;
    edi = 0x431A80;
    if (CMP_EQ(_fa, _fb)) goto loc_003A91B4; /* je: equal / zero */

loc_003A918B: ;
    eax = MEM32(esi + 0x28);
    MEM32(ebp + -24) = edi;
    MEM32(ebp + -20) = eax;
    MEM8(ebp + -4) = 1;

loc_003A9198: ;
    _fa = (uint32_t)(MEM8(ebp + ebx + -20)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + ebx + -20), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A91AA; /* je: equal / zero */

loc_003A919F: ;
    ecx = MEM32(ebp + -16);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003A91AAu); RECOMP_ABI_CALL(0x003AA74Cu, sub_003AA74C); /* call 0x003AA74C */

loc_003A91AA: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003A9198; /* jle: less or equal (signed <=) */

loc_003A91B0: ;
    MEM8(ebp + -4) = 0;

loc_003A91B4: ;
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM32(ebp + -24) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_003A91E5; /* je: equal / zero */

loc_003A91BE: ;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -20) = eax;
    MEM8(ebp + -4) = 2;
    edi = 0; /* xor self */

loc_003A91CA: ;
    _fa = (uint32_t)(MEM8(ebp + edi + -20)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + edi + -20), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A91DA; /* je: equal / zero */

loc_003A91D1: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x003A91DAu); RECOMP_ABI_CALL(0x003AA74Cu, sub_003AA74C); /* call 0x003AA74C */

loc_003A91DA: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003A91CA; /* jle: less or equal (signed <=) */

loc_003A91E0: ;
    eax = ebp + 0xC;
    goto loc_003A91F2;

loc_003A91E5: ;
    PUSH32(esp, 0);
    ecx = ebp + -24;
    PUSH32(esp, 0x003A91EFu); RECOMP_ABI_CALL(0x003A7E81u, sub_003A7E81); /* call 0x003A7E81 */

loc_003A91EF: ;
    eax = ebp + -24;

loc_003A91F2: ;
    PUSH32(esp, eax);
    ecx = esi + 0x24;
    PUSH32(esp, 0x003A91FBu); RECOMP_ABI_CALL(0x003A8329u, sub_003A8329); /* call 0x003A8329 */

loc_003A91FB: ;
    ecx = MEM32(ebp + -12);
    MEM32(esi + 0x3C) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003A9211
 * Original: 0x003A9211 - 0x003A9244 (51 bytes, 21 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A9211(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A9211: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = MEM32(eax + edx * 4 + 0x20);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + esi * 4 + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + esi * 4 + 0x20) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A922A; /* je: equal / zero */

loc_003A9226: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_003A9240;

loc_003A922A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A9226; /* je: equal / zero */

loc_003A922E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A9226; /* je: equal / zero */

loc_003A9233: ;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003A923Bu); RECOMP_ABI_CALL(0x003A85FCu, sub_003A85FC); /* call 0x003A85FC */

loc_003A923B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */

loc_003A9240: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003A9244
 * Original: 0x003A9244 - 0x003A9267 (35 bytes, 12 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A9244(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A9244: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A9257; /* jne: not equal / not zero */

loc_003A924C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), eax (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    goto loc_003A9264;

loc_003A9257: ;
    PUSH32(esp, MEM32(esp + 4));
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003A9264u); RECOMP_ABI_CALL(0x003A83EEu, sub_003A83EE); /* call 0x003A83EE */

loc_003A9264: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A9267
 * Original: 0x003A9267 - 0x003A92B3 (76 bytes, 29 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A9267(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A9267: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A927Du); RECOMP_ABI_CALL(0x003A7E81u, sub_003A7E81); /* call 0x003A7E81 */

loc_003A927D: ;
    eax = 0; /* xor self */

loc_003A927F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A9299; /* je: equal / zero */

loc_003A9284: ;
    ecx = MEM32(esi + eax * 4 + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A9299; /* je: equal / zero */

loc_003A928D: ;
    _fa = (uint32_t)(MEM8(ebp + eax + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + eax + 0x10), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A9299; /* je: equal / zero */

loc_003A9294: ;
    MEM8(ebp + ecx + -4) = 1;

loc_003A9299: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003A927F; /* jle: less or equal (signed <=) */

loc_003A929F: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    MEM32(eax) = 0x431A80;
    MEM32(eax + 4) = ecx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003A92B3
 * Original: 0x003A92B3 - 0x003A9626 (883 bytes, 310 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A92B3(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A92B3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x44;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = MEM32(esi + 0x30);
    eax = MEM32(esi + 0x2C);
    edi = edi << 4;
    eax = eax & 0xF;
    edi = edi | eax;
    eax = MEM32(ebp + -20);
    edi = edi << 0x19;
    eax = eax & 0x1FFFF;
    edi = edi | eax;
    eax = esi + 4;
    edi = edi & 0xFE01FFFFu;
    MEM32(ebp + -28) = MEM32(ebp + -28) & 0xFFFFFFFDu;
    ebx = eax;
    MEM32(ebp + -4) = 3;

loc_003A92F3: ;
    eax = MEM32(ebx);
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A9328; /* je: equal / zero */

loc_003A92FC: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A9328; /* jne: not equal / not zero */

loc_003A9302: ;
    eax = MEM32(ecx + 8);
    eax = eax << 0x11;
    eax = eax ^ edi;
    eax = eax & 0x1FE0000;
    edi = edi ^ eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A9316u); RECOMP_ABI_CALL(0x003A8385u, sub_003A8385); /* call 0x003A8385 */

loc_003A9316: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = ecx << 1;
    ecx = ecx ^ MEM32(ebp + -28);
    ecx = ecx & 2;
    MEM32(ebp + -28) = MEM32(ebp + -28) ^ ecx;

loc_003A9328: ;
    ebx = ebx + 4;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003A92F3; /* jne: not equal / not zero */

loc_003A9330: ;
    eax = esi + 4;
    PUSH32(esp, 3);
    edi = edi & 0xFFFE1FFFu;
    ecx = eax;
    POP32(esp, edx);

loc_003A933E: ;
    eax = MEM32(ecx);
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A935C; /* je: equal / zero */

loc_003A9347: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A935C; /* jne: not equal / not zero */

loc_003A934D: ;
    eax = MEM32(eax + 8);
    eax = eax << 0xD;
    eax = eax ^ edi;
    eax = eax & 0x1E000;
    edi = edi ^ eax;

loc_003A935C: ;
    ecx = ecx + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003A933E; /* jne: not equal / not zero */

loc_003A9362: ;
    eax = esi + 4;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -8) = 3;
    ebx = 0x431A84;

loc_003A9374: ;
    eax = ebp + -68;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A9382u); RECOMP_ABI_CALL(0x003A81E5u, sub_003A81E5); /* call 0x003A81E5 */

loc_003A9382: ;
    esp = esp - 0x14;
    ecx = esp;
    MEM32(ebp + -12) = esp;
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A9392u); RECOMP_ABI_CALL(0x003A8DB1u, sub_003A8DB1); /* call 0x003A8DB1 */

loc_003A9392: ;
    eax = ebp + -48;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A93A0u); RECOMP_ABI_CALL(0x003A8FD3u, sub_003A8FD3); /* call 0x003A8FD3 */

loc_003A93A0: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 4;
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -48) = ebx;
    MEM32(ebp + -68) = ebx;
    if ((_fa != 0)) goto loc_003A9374; /* jne: not equal / not zero */

loc_003A93AF: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A93BE; /* je: equal / zero */

loc_003A93B9: ;
    eax = MEM32(edx + 8);
    goto loc_003A93C0;

loc_003A93BE: ;
    eax = 0; /* xor self */

loc_003A93C0: ;
    eax = eax ^ edi;
    eax = eax & 0xF;
    edi = edi ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A93D2; /* je: equal / zero */

loc_003A93CB: ;
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A93D5; /* jne: not equal / not zero */

loc_003A93D2: ;
    PUSH32(esp, 2);
    POP32(esp, eax);

loc_003A93D5: ;
    eax = eax << 0x1C;
    eax = eax ^ MEM32(ebp + -24);
    edx = 0x30000000;
    eax = eax & edx;
    MEM32(ebp + -24) = MEM32(ebp + -24) ^ eax;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + -24), edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A9400; /* jne: not equal / not zero */

loc_003A93EA: ;
    eax = MEM32(ebp + -24);
    eax = eax & 0xDFFFFFFFu;
    eax = eax | 0x10000000;
    edi = edi & 0xFFFFFFFCu;
    MEM32(ebp + -24) = eax;
    edi = edi | 0xC;

loc_003A9400: ;
    edx = MEM32(ecx + 0x1C);
    ebx = MEM32(ecx + 0x20);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ecx + 0x14));
    edx = edx & 3;
    MEM32(ebp + -8) = ebx;
    ebx = MEM32(ecx + 0x24);
    ecx = MEM32(ecx + 0x28);
    ebx = ebx & 3;
    ecx = ecx & 3;
    eax = eax & 1;
    eax = eax << 2;
    eax = eax | edx;
    edx = MEM32(ebp + -8);
    eax = eax << 2;
    edx = edx & 3;
    eax = eax | edx;
    eax = eax << 2;
    eax = eax | ebx;
    eax = eax << 2;
    eax = eax | ecx;
    ecx = MEM32(esi + 8);
    eax = eax << 4;
    edi = edi & 0xFFFFE00Fu;
    eax = eax | edi;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A9457; /* je: equal / zero */

loc_003A9452: ;
    edx = MEM32(eax + 8);
    goto loc_003A9459;

loc_003A9457: ;
    edx = 0; /* xor self */

loc_003A9459: ;
    edx = edx << 0xF;
    edx = edx ^ MEM32(ebp + -24);
    edx = edx & 0x78000;
    MEM32(ebp + -24) = MEM32(ebp + -24) ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A9473; /* je: equal / zero */

loc_003A946C: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A9476; /* jne: not equal / not zero */

loc_003A9473: ;
    PUSH32(esp, 2);
    POP32(esp, eax);

loc_003A9476: ;
    eax = eax << 0xD;
    eax = eax ^ MEM32(ebp + -24);
    edx = 0x6000;
    eax = eax & edx;
    MEM32(ebp + -24) = MEM32(ebp + -24) ^ eax;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + -24), edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A949B; /* jne: not equal / not zero */

loc_003A948B: ;
    eax = MEM32(ebp + -24);
    eax = eax & 0xFFFE3FFFu;
    eax = eax | 0x62000;
    MEM32(ebp + -24) = eax;

loc_003A949B: ;
    edx = MEM32(ecx + 0x1C);
    edi = MEM32(ecx + 0x20);
    ebx = MEM32(ecx + 0x24);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ecx + 0x14));
    ecx = MEM32(ecx + 0x28);
    edx = edx & 3;
    edi = edi & 3;
    ebx = ebx & 3;
    ecx = ecx & 3;
    eax = eax & 1;
    eax = eax << 2;
    eax = eax | edx;
    eax = eax << 2;
    eax = eax | edi;
    eax = eax << 2;
    eax = eax | ebx;
    eax = eax << 2;
    eax = eax | ecx;
    ecx = MEM32(ebp + -24);
    ecx = ecx & 0xF007FFFFu;
    eax = eax << 0x13;
    eax = eax | ecx;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A94EC; /* je: equal / zero */

loc_003A94E7: ;
    edi = MEM32(edx + 8);
    goto loc_003A94EE;

loc_003A94EC: ;
    edi = 0; /* xor self */

loc_003A94EE: ;
    edi = edi ^ eax;
    edi = edi & 0xF;
    eax = eax ^ edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    MEM32(ebp + -24) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003A9503; /* je: equal / zero */

loc_003A94FC: ;
    edx = MEM32(edx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A9506; /* jne: not equal / not zero */

loc_003A9503: ;
    PUSH32(esp, 2);
    POP32(esp, edx);

loc_003A9506: ;
    edx = edx << 0x1C;
    edx = edx ^ MEM32(ebp + -28);
    edi = 0x30000000;
    edx = edx & edi;
    MEM32(ebp + -28) = MEM32(ebp + -28) ^ edx;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + -28), edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A9536; /* jne: not equal / not zero */

loc_003A951B: ;
    edx = MEM32(ebp + -28);
    edx = edx & 0xDFFFFFFFu;
    edx = edx | 0x10000000;
    eax = eax & 0xFFFFFFFCu;
    eax = eax | 0xC;
    MEM32(ebp + -28) = edx;
    MEM32(ebp + -24) = eax;

loc_003A9536: ;
    edi = MEM32(ecx + 0x1C);
    edx = MEM32(ecx + 0x20);
    ebx = MEM32(ecx + 0x24);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ecx + 0x14));
    ecx = MEM32(ecx + 0x28);
    edi = edi & 3;
    edx = edx & 3;
    ebx = ebx & 3;
    ecx = ecx & 3;
    eax = eax & 1;
    eax = eax << 2;
    eax = eax | edi;
    eax = eax << 2;
    eax = eax | edx;
    eax = eax << 2;
    eax = eax | ebx;
    eax = eax << 2;
    eax = eax | ecx;
    ecx = MEM32(ebp + -24);
    ecx = ecx & 0xFFFFE00Fu;
    eax = eax << 4;
    eax = eax | ecx;
    ecx = esi + 0x14;
    MEM32(ebp + -24) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A9583u); RECOMP_ABI_CALL(0x003A7E54u, sub_003A7E54); /* call 0x003A7E54 */

loc_003A9583: ;
    ebx = MEM32(ebp + -28);
    eax = eax << 0xC;
    eax = eax ^ ebx;
    eax = eax & 0xF000;
    ebx = ebx ^ eax;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A95AE; /* jne: not equal / not zero */

loc_003A9598: ;
    PUSH32(esp, 0);
    ecx = ebp + -16;
    MEM32(ebp + -16) = 0x431A80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A95A9u); RECOMP_ABI_CALL(0x003A7E81u, sub_003A7E81); /* call 0x003A7E81 */

loc_003A95A9: ;
    ecx = ebp + -16;
    goto loc_003A95B1;

loc_003A95AE: ;
    ecx = esi + 0x1C;

loc_003A95B1: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A95B6u); RECOMP_ABI_CALL(0x003A7E54u, sub_003A7E54); /* call 0x003A7E54 */

loc_003A95B6: ;
    ecx = esi + 0x24;
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A95C0u); RECOMP_ABI_CALL(0x003A7E54u, sub_003A7E54); /* call 0x003A7E54 */

loc_003A95C0: ;
    edi = edi & 0xF;
    edi = edi << 8;
    eax = eax & 0xF;
    edi = edi | eax;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 0x10));
    edi = edi << 0xE;
    ebx = ebx & 0xF0F0FFFBu;
    eax = eax & 1;
    edi = edi | eax;
    eax = MEM32(esi + 0x34);
    edi = edi << 2;
    edi = edi | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A95EF; /* je: equal / zero */

loc_003A95EA: ;
    ebx = MEM32(eax + 8);
    goto loc_003A95F1;

loc_003A95EF: ;
    ebx = 0; /* xor self */

loc_003A95F1: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A95F8u); RECOMP_ABI_CALL(0x003A8228u, sub_003A8228); /* call 0x003A8228 */

loc_003A95F8: ;
    eax = eax & 0xF;
    eax = eax << 0x11;
    ebx = ebx & 0x1FF;
    eax = eax | ebx;
    edi = edi & 0xFF0FF007u;
    eax = eax << 3;
    eax = eax | edi;
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + 8);
    esi = ebp + -28;
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A9626
 * Original: 0x003A9626 - 0x003A9779 (339 bytes, 130 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A9626(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A9626: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ecx;
    PUSH32(esp, 0xF);
    ecx = ebp + -12;
    MEM32(ebp + -12) = 0x431A80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A9643u); RECOMP_ABI_CALL(0x003A7E81u, sub_003A7E81); /* call 0x003A7E81 */

loc_003A9643: ;
    esi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x10), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A96E0; /* jne: not equal / not zero */

loc_003A9650: ;
    edi = MEM32(esi + 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + 0xC) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ebp + 0xC) = esp;
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + 0xC) = eax;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A9670u); RECOMP_ABI_CALL(0x003A855Eu, sub_003A855E); /* call 0x003A855E */

loc_003A9670: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    ebx = ecx + eax * 4 + 4;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A9685u); RECOMP_ABI_CALL(0x003A9267u, sub_003A9267); /* call 0x003A9267 */

loc_003A9685: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A9690u); RECOMP_ABI_CALL(0x003A8245u, sub_003A8245); /* call 0x003A8245 */

loc_003A9690: ;
    ecx = ebp + -28;
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A969Bu); RECOMP_ABI_CALL(0x003A7EFDu, sub_003A7EFD); /* call 0x003A7EFD */

loc_003A969B: ;
    PUSH32(esp, eax);
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A96A4u); RECOMP_ABI_CALL(0x003A8329u, sub_003A8329); /* call 0x003A8329 */

loc_003A96A4: ;
    goto loc_003A96D4;

loc_003A96A6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A96E0; /* je: equal / zero */

loc_003A96AA: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A9775; /* je: equal / zero */

loc_003A96B5: ;
    edi = MEM32(edi + 0x34);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A96D4; /* je: equal / zero */

loc_003A96BC: ;
    ecx = 0; /* xor self */
    eax = edi + 0x20;

loc_003A96C1: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A96CB; /* je: equal / zero */

loc_003A96C6: ;
    MEM8(ebp + ecx + -8) = 0;

loc_003A96CB: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003A96C1; /* jle: less or equal (signed <=) */

loc_003A96D4: ;
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A96DCu); RECOMP_ABI_CALL(0x003A7E54u, sub_003A7E54); /* call 0x003A7E54 */

loc_003A96DC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A96A6; /* jne: not equal / not zero */

loc_003A96E0: ;
    edi = MEM32(esi + 0x38);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + 0xC) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ebp + 0xC) = esp;
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + 0xC) = eax;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A9700u); RECOMP_ABI_CALL(0x003A855Eu, sub_003A855E); /* call 0x003A855E */

loc_003A9700: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(ebp + 8);
    ebx = eax + ecx * 4 + 4;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A9715u); RECOMP_ABI_CALL(0x003A9267u, sub_003A9267); /* call 0x003A9267 */

loc_003A9715: ;
    eax = ebp + -28;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A9720u); RECOMP_ABI_CALL(0x003A8260u, sub_003A8260); /* call 0x003A8260 */

loc_003A9720: ;
    ecx = ebp + -20;
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A972Bu); RECOMP_ABI_CALL(0x003A7EFDu, sub_003A7EFD); /* call 0x003A7EFD */

loc_003A972B: ;
    PUSH32(esp, eax);
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A9734u); RECOMP_ABI_CALL(0x003A8329u, sub_003A8329); /* call 0x003A8329 */

loc_003A9734: ;
    goto loc_003A9760;

loc_003A9736: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A976C; /* je: equal / zero */

loc_003A973A: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A9775; /* je: equal / zero */

loc_003A9741: ;
    edi = MEM32(edi + 0x34);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A9760; /* je: equal / zero */

loc_003A9748: ;
    ecx = 0; /* xor self */
    eax = edi + 0x20;

loc_003A974D: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A9757; /* je: equal / zero */

loc_003A9752: ;
    MEM8(ebp + ecx + -8) = 0;

loc_003A9757: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003A974D; /* jle: less or equal (signed <=) */

loc_003A9760: ;
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A9768u); RECOMP_ABI_CALL(0x003A7E54u, sub_003A7E54); /* call 0x003A7E54 */

loc_003A9768: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A9736; /* jne: not equal / not zero */

loc_003A976C: ;
    SET_LO8(eax, 0); /* xor self */

loc_003A976E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

loc_003A9775: ;
    SET_LO8(eax, 1);
    goto loc_003A976E;

}

/**
 * sub_003A9779
 * Original: 0x003A9779 - 0x003A98CC (339 bytes, 130 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A9779(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A9779: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ecx;
    PUSH32(esp, 0xF);
    ecx = ebp + -12;
    MEM32(ebp + -12) = 0x431A80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A9796u); RECOMP_ABI_CALL(0x003A7E81u, sub_003A7E81); /* call 0x003A7E81 */

loc_003A9796: ;
    esi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x10), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A9833; /* je: equal / zero */

loc_003A97A3: ;
    edi = MEM32(esi + 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + 0xC) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ebp + 0xC) = esp;
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + 0xC) = eax;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A97C3u); RECOMP_ABI_CALL(0x003A855Eu, sub_003A855E); /* call 0x003A855E */

loc_003A97C3: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    ebx = ecx + eax * 4 + 4;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A97D8u); RECOMP_ABI_CALL(0x003A9267u, sub_003A9267); /* call 0x003A9267 */

loc_003A97D8: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A97E3u); RECOMP_ABI_CALL(0x003A8245u, sub_003A8245); /* call 0x003A8245 */

loc_003A97E3: ;
    ecx = ebp + -28;
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A97EEu); RECOMP_ABI_CALL(0x003A7EFDu, sub_003A7EFD); /* call 0x003A7EFD */

loc_003A97EE: ;
    PUSH32(esp, eax);
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A97F7u); RECOMP_ABI_CALL(0x003A8329u, sub_003A8329); /* call 0x003A8329 */

loc_003A97F7: ;
    goto loc_003A9827;

loc_003A97F9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A9833; /* je: equal / zero */

loc_003A97FD: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A98C8; /* je: equal / zero */

loc_003A9808: ;
    edi = MEM32(edi + 0x34);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A9827; /* je: equal / zero */

loc_003A980F: ;
    ecx = 0; /* xor self */
    eax = edi + 0x20;

loc_003A9814: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A981E; /* je: equal / zero */

loc_003A9819: ;
    MEM8(ebp + ecx + -8) = 0;

loc_003A981E: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003A9814; /* jle: less or equal (signed <=) */

loc_003A9827: ;
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A982Fu); RECOMP_ABI_CALL(0x003A7E54u, sub_003A7E54); /* call 0x003A7E54 */

loc_003A982F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A97F9; /* jne: not equal / not zero */

loc_003A9833: ;
    edi = MEM32(esi + 0x3C);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + 0xC) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ebp + 0xC) = esp;
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + 0xC) = eax;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A9853u); RECOMP_ABI_CALL(0x003A855Eu, sub_003A855E); /* call 0x003A855E */

loc_003A9853: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(ebp + 8);
    ebx = eax + ecx * 4 + 4;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A9868u); RECOMP_ABI_CALL(0x003A9267u, sub_003A9267); /* call 0x003A9267 */

loc_003A9868: ;
    eax = ebp + -28;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A9873u); RECOMP_ABI_CALL(0x003A827Bu, sub_003A827B); /* call 0x003A827B */

loc_003A9873: ;
    ecx = ebp + -20;
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A987Eu); RECOMP_ABI_CALL(0x003A7EFDu, sub_003A7EFD); /* call 0x003A7EFD */

loc_003A987E: ;
    PUSH32(esp, eax);
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A9887u); RECOMP_ABI_CALL(0x003A8329u, sub_003A8329); /* call 0x003A8329 */

loc_003A9887: ;
    goto loc_003A98B3;

loc_003A9889: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A98BF; /* je: equal / zero */

loc_003A988D: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A98C8; /* je: equal / zero */

loc_003A9894: ;
    edi = MEM32(edi + 0x34);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A98B3; /* je: equal / zero */

loc_003A989B: ;
    ecx = 0; /* xor self */
    eax = edi + 0x20;

loc_003A98A0: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A98AA; /* je: equal / zero */

loc_003A98A5: ;
    MEM8(ebp + ecx + -8) = 0;

loc_003A98AA: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003A98A0; /* jle: less or equal (signed <=) */

loc_003A98B3: ;
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A98BBu); RECOMP_ABI_CALL(0x003A7E54u, sub_003A7E54); /* call 0x003A7E54 */

loc_003A98BB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A9889; /* jne: not equal / not zero */

loc_003A98BF: ;
    SET_LO8(eax, 0); /* xor self */

loc_003A98C1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

loc_003A98C8: ;
    SET_LO8(eax, 1);
    goto loc_003A98C1;

}

/**
 * sub_003A98CC
 * Original: 0x003A98CC - 0x003A9947 (123 bytes, 55 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A98CC(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A98CC: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    SET_LO8(ebx, 1);
    PUSH32(esp, edi);
    edi = ecx;
    MEM8(esp + 0x13) = LO8(ebx);
    esi = 0; /* xor self */

loc_003A98DF: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003A98E8u); RECOMP_ABI_CALL(0x003A9626u, sub_003A9626); /* call 0x003A9626 */

loc_003A98E8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A990A; /* je: equal / zero */

loc_003A98EC: ;
    ecx = ebp;
    PUSH32(esp, 0x003A98F3u); RECOMP_ABI_CALL(0x003A82D8u, sub_003A82D8); /* call 0x003A82D8 */

loc_003A98F3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A98FD; /* jne: not equal / not zero */

loc_003A98F7: ;
    _fa = (uint32_t)(MEM32(ebp + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x30), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A990A; /* je: equal / zero */

loc_003A98FD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A9908; /* jne: not equal / not zero */

loc_003A9902: ;
    _fa = (uint32_t)(MEM32(edi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x30), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A990A; /* je: equal / zero */

loc_003A9908: ;
    SET_LO8(ebx, 0); /* xor self */

loc_003A990A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003A9913u); RECOMP_ABI_CALL(0x003A9779u, sub_003A9779); /* call 0x003A9779 */

loc_003A9913: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A9927; /* je: equal / zero */

loc_003A9917: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A9922; /* jne: not equal / not zero */

loc_003A991C: ;
    _fa = (uint32_t)(MEM32(edi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x30), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A9927; /* je: equal / zero */

loc_003A9922: ;
    MEM8(esp + 0x13) = 0;

loc_003A9927: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003A98DF; /* jle: less or equal (signed <=) */

loc_003A992D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_003A9941; /* je: equal / zero */

loc_003A9935: ;
    _fa = (uint32_t)(MEM8(esp + 3)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 3), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A9941; /* je: equal / zero */

loc_003A993C: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003A9943;

loc_003A9941: ;
    eax = 0; /* xor self */

loc_003A9943: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A9947
 * Original: 0x003A9947 - 0x003A99C5 (126 bytes, 51 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A9947(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A9947: ;
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
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A99BF; /* jne: not equal / not zero */

loc_003A9957: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x30), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A99BF; /* jne: not equal / not zero */

loc_003A995F: ;
    PUSH32(esp, edi);
    edi = esi + 0x24;
    PUSH32(esp, edi);
    ecx = esi + 0x1C;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A9972u); RECOMP_ABI_CALL(0x003A8329u, sub_003A8329); /* call 0x003A8329 */

loc_003A9972: ;
    PUSH32(esp, ebx);
    ecx = ebp + -8;
    MEM32(ebp + -8) = 0x431A80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A9982u); RECOMP_ABI_CALL(0x003A7E81u, sub_003A7E81); /* call 0x003A7E81 */

loc_003A9982: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A998Du); RECOMP_ABI_CALL(0x003A8329u, sub_003A8329); /* call 0x003A8329 */

loc_003A998D: ;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x10), LO8(ebx) (8-bit) */
    ecx = MEM32(esi + 0xC);
    MEM32(esi + 0x38) = eax;
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(esi + 0x10) = LO8(eax);
    eax = MEM32(esi + 4);
    MEM32(esi + 0xC) = eax;
    eax = ecx;
    MEM32(esi + 0x3C) = ebx;
    MEM32(esi + 4) = ecx;
    MEM32(eax + 0xC) = ebx;
    eax = MEM32(esi + 0xC);
    MEM32(eax + 0xC) = 2;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    goto loc_003A99C1;

loc_003A99BF: ;
    SET_LO8(eax, 0); /* xor self */

loc_003A99C1: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003A99C5
 * Original: 0x003A99C5 - 0x003A9AC5 (256 bytes, 97 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003A99C5(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A99C5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x30), ebx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_003A9ABE; /* jne: not equal / not zero */

loc_003A99DB: ;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A9ABE; /* jne: not equal / not zero */

loc_003A99E5: ;
    _fa = (uint32_t)(MEM8(0x3BE70B)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3BE70B), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A9A5C; /* je: equal / zero */

loc_003A99ED: ;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A9A5C; /* je: equal / zero */

loc_003A99F4: ;
    MEM8(ebp + -1) = LO8(ebx);

loc_003A99F7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A9A23; /* je: equal / zero */

loc_003A99FB: ;
    PUSH32(esp, 4);
    edi = ecx + 0x20;
    POP32(esp, eax);

loc_003A9A01: ;
    edx = MEM32(edi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A9A15; /* je: equal / zero */

loc_003A9A07: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A9A15; /* je: equal / zero */

loc_003A9A0C: ;
    _fa = (uint32_t)(MEM32(edx + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x3C), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A9A15; /* jne: not equal / not zero */

loc_003A9A11: ;
    MEM8(ebp + -1) = 1;

loc_003A9A15: ;
    edi = edi + 4;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003A9A01; /* jne: not equal / not zero */

loc_003A9A1B: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), LO8(ebx) (8-bit) */
    ecx = MEM32(ecx + 0x30);
    if (CMP_EQ(_fa, _fb)) goto loc_003A99F7; /* je: equal / zero */

loc_003A9A23: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), LO8(ebx) (8-bit) */
    eax = MEM32(esi + 0x38);
    if (CMP_NE(_fa, _fb)) goto loc_003A9A5C; /* jne: not equal / not zero */

loc_003A9A2B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A9A57; /* je: equal / zero */

loc_003A9A2F: ;
    PUSH32(esp, 4);
    edx = eax + 0x20;
    POP32(esp, edi);

loc_003A9A35: ;
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A9A49; /* je: equal / zero */

loc_003A9A3B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A9A49; /* je: equal / zero */

loc_003A9A40: ;
    _fa = (uint32_t)(MEM32(ecx + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x3C), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A9A49; /* jne: not equal / not zero */

loc_003A9A45: ;
    MEM8(ebp + -1) = 1;

loc_003A9A49: ;
    edx = edx + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003A9A35; /* jne: not equal / not zero */

loc_003A9A4F: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), LO8(ebx) (8-bit) */
    eax = MEM32(eax + 0x34);
    if (CMP_EQ(_fa, _fb)) goto loc_003A9A2B; /* je: equal / zero */

loc_003A9A57: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A9ABE; /* je: equal / zero */

loc_003A9A5C: ;
    edi = esi + 0x1C;
    PUSH32(esp, edi);
    ecx = esi + 0x24;
    MEM32(esi + 0x30) = 1;
    MEM32(esi + 0x2C) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A9A72u); RECOMP_ABI_CALL(0x003A8329u, sub_003A8329); /* call 0x003A8329 */

loc_003A9A72: ;
    PUSH32(esp, ebx);
    ecx = ebp + -12;
    MEM32(ebp + -12) = 0x431A80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A9A82u); RECOMP_ABI_CALL(0x003A7E81u, sub_003A7E81); /* call 0x003A7E81 */

loc_003A9A82: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A9A8Du); RECOMP_ABI_CALL(0x003A8329u, sub_003A8329); /* call 0x003A8329 */

loc_003A9A8D: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x10), LO8(ebx) (8-bit) */
    ecx = MEM32(esi + 0xC);
    MEM32(esi + 0x3C) = eax;
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(esi + 0x10) = LO8(eax);
    eax = MEM32(esi + 4);
    MEM32(esi + 0xC) = eax;
    eax = ecx;
    MEM32(esi + 0x38) = ebx;
    MEM32(esi + 4) = ecx;
    MEM32(eax + 0xC) = ebx;
    eax = MEM32(esi + 0xC);
    MEM32(eax + 0xC) = 2;
    SET_LO8(eax, 1);
    goto loc_003A9AC0;

loc_003A9ABE: ;
    SET_LO8(eax, 0); /* xor self */

loc_003A9AC0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003A9AC5
 * Original: 0x003A9AC5 - 0x003A9ADA (21 bytes, 8 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A9AC5(void)
{

loc_003A9AC5: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0x003A9AD0u); RECOMP_ABI_CALL(0x003A8ABEu, sub_003A8ABE); /* call 0x003A8ABE */

loc_003A9AD0: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003A9ADA
 * Original: 0x003A9ADA - 0x003A9AF5 (27 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A9ADA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A9ADA: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A9AEC; /* jne: not equal / not zero */

loc_003A9AE1: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

loc_003A9AEA: ;
    ecx = eax;

loc_003A9AEC: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A9AEA; /* jne: not equal / not zero */

loc_003A9AF3: ;
    goto loc_003A9AE1;

}

/**
 * sub_003A9AF5
 * Original: 0x003A9AF5 - 0x003A9B0A (21 bytes, 8 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A9AF5(void)
{

loc_003A9AF5: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0x003A9B00u); RECOMP_ABI_CALL(0x003A8AE7u, sub_003A8AE7); /* call 0x003A8AE7 */

loc_003A9B00: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003A9B0A
 * Original: 0x003A9B0A - 0x003A9B44 (58 bytes, 21 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A9B0A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A9B0A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x10);
    esi = ecx;
    PUSH32(esp, 0x003A9B19u); RECOMP_ABI_CALL(0x001A1DDBu, sub_001A1DDB); /* call 0x001A1DDB */

loc_003A9B19: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A9B2F; /* je: equal / zero */

loc_003A9B1D: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 8));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x003A9B2Du); RECOMP_ABI_CALL(0x003A8BE1u, sub_003A8BE1); /* call 0x003A8BE1 */

loc_003A9B2D: ;
    goto loc_003A9B31;

loc_003A9B2F: ;
    eax = 0; /* xor self */

loc_003A9B31: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0 (32-bit) */
    MEM32(esi + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003A9B3D; /* jne: not equal / not zero */

loc_003A9B3A: ;
    MEM32(esi + 4) = eax;

loc_003A9B3D: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A9B44
 * Original: 0x003A9B44 - 0x003A9B5F (27 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A9B44(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A9B44: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A9B56; /* jne: not equal / not zero */

loc_003A9B4B: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

loc_003A9B54: ;
    ecx = eax;

loc_003A9B56: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A9B54; /* jne: not equal / not zero */

loc_003A9B5D: ;
    goto loc_003A9B4B;

}

/**
 * sub_003A9B5F
 * Original: 0x003A9B5F - 0x003A9B74 (21 bytes, 8 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A9B5F(void)
{

loc_003A9B5F: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0x003A9B6Au); RECOMP_ABI_CALL(0x003A8BB8u, sub_003A8BB8); /* call 0x003A8BB8 */

loc_003A9B6A: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003A9B74
 * Original: 0x003A9B74 - 0x003A9B93 (31 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A9B74(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A9B74: ;
    eax = MEM32(ecx + 8);
    goto loc_003A9B8C;

loc_003A9B79: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 4) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003A9B87; /* jbe: below or equal (unsigned <=) */

loc_003A9B82: ;
    eax = MEM32(eax + 0xC);
    goto loc_003A9B8C;

loc_003A9B87: ;
    if (CMP_AE(_fa, _fb)) goto loc_003A9B90; /* jae: above or equal (unsigned >=) */

loc_003A9B89: ;
    eax = MEM32(eax + 0x10);

loc_003A9B8C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A9B79; /* jne: not equal / not zero */

loc_003A9B90: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A9B93
 * Original: 0x003A9B93 - 0x003A9BA8 (21 bytes, 8 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A9B93(void)
{

loc_003A9B93: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0x003A9B9Eu); RECOMP_ABI_CALL(0x003A8C54u, sub_003A8C54); /* call 0x003A8C54 */

loc_003A9B9E: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003A9BA8
 * Original: 0x003A9BA8 - 0x003A9BD0 (40 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A9BA8(void)
{

loc_003A9BA8: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax) = 0x431AD0;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x14) = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003A9BD0
 * Original: 0x003A9BD0 - 0x003A9BF1 (33 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A9BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A9BD0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x431AD0;
    if (TEST_Z(_fa, _fb)) goto loc_003A9BEB; /* je: equal / zero */

loc_003A9BE0: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003A9BEBu); RECOMP_ABI_CALL(0x001A1E7Bu, sub_001A1E7B); /* call 0x001A1E7B */

loc_003A9BEB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A9BF1
 * Original: 0x003A9BF1 - 0x003A9C06 (21 bytes, 8 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A9BF1(void)
{

loc_003A9BF1: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0x003A9BFCu); RECOMP_ABI_CALL(0x003A8C7Du, sub_003A8C7D); /* call 0x003A8C7D */

loc_003A9BFC: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003A9C06
 * Original: 0x003A9C06 - 0x003A9C2E (40 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A9C06(void)
{

loc_003A9C06: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax) = 0x431AD4;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x14) = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003A9C2E
 * Original: 0x003A9C2E - 0x003A9C4F (33 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A9C2E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A9C2E: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x431AD4;
    if (TEST_Z(_fa, _fb)) goto loc_003A9C49; /* je: equal / zero */

loc_003A9C3E: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003A9C49u); RECOMP_ABI_CALL(0x001A1E7Bu, sub_001A1E7B); /* call 0x001A1E7B */

loc_003A9C49: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A9C4F
 * Original: 0x003A9C4F - 0x003A9C8C (61 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A9C4F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A9C4F: ;
    eax = ecx;
    edx = MEM32(eax);
    ecx = MEM32(edx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_003A9C6C; /* je: equal / zero */

loc_003A9C5B: ;
    edx = ecx;
    goto loc_003A9C61;

loc_003A9C5F: ;
    edx = esi;

loc_003A9C61: ;
    esi = MEM32(edx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A9C5F; /* jne: not equal / not zero */

loc_003A9C68: ;
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003A9C6C: ;
    esi = MEM32(edx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A9C77; /* jne: not equal / not zero */

loc_003A9C73: ;
    MEM32(eax) = MEM32(eax) & esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003A9C77: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A9C85; /* jne: not equal / not zero */

loc_003A9C7C: ;
    edx = esi;
    esi = MEM32(edx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A9C77; /* jne: not equal / not zero */

loc_003A9C85: ;
    ecx = MEM32(edx + 8);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003A9C8C
 * Original: 0x003A9C8C - 0x003A9CB4 (40 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A9C8C(void)
{

loc_003A9C8C: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax) = 0x431AD8;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x14) = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003A9CB4
 * Original: 0x003A9CB4 - 0x003A9CD5 (33 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A9CB4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A9CB4: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x431AD8;
    if (TEST_Z(_fa, _fb)) goto loc_003A9CCF; /* je: equal / zero */

loc_003A9CC4: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003A9CCFu); RECOMP_ABI_CALL(0x001A1E7Bu, sub_001A1E7B); /* call 0x001A1E7B */

loc_003A9CCF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A9CD5
 * Original: 0x003A9CD5 - 0x003A9CFD (40 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A9CD5(void)
{

loc_003A9CD5: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax) = 0x431ADC;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x14) = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003A9CFD
 * Original: 0x003A9CFD - 0x003A9D1E (33 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A9CFD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A9CFD: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x431ADC;
    if (TEST_Z(_fa, _fb)) goto loc_003A9D18; /* je: equal / zero */

loc_003A9D0D: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003A9D18u); RECOMP_ABI_CALL(0x001A1E7Bu, sub_001A1E7B); /* call 0x001A1E7B */

loc_003A9D18: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A9D1E
 * Original: 0x003A9D1E - 0x003A9D33 (21 bytes, 8 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A9D1E(void)
{

loc_003A9D1E: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0x003A9D29u); RECOMP_ABI_CALL(0x003A8CA6u, sub_003A8CA6); /* call 0x003A8CA6 */

loc_003A9D29: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003A9D33
 * Original: 0x003A9D33 - 0x003A9D6C (57 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A9D33(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A9D33: ;
    eax = ecx;
    edx = MEM32(eax);
    ecx = MEM32(edx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_003A9D50; /* je: equal / zero */

loc_003A9D3F: ;
    edx = ecx;
    goto loc_003A9D45;

loc_003A9D43: ;
    edx = esi;

loc_003A9D45: ;
    esi = MEM32(edx + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A9D43; /* jne: not equal / not zero */

loc_003A9D4C: ;
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003A9D50: ;
    esi = MEM32(edx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A9D60; /* jne: not equal / not zero */

loc_003A9D57: ;
    MEM32(eax) = MEM32(eax) & esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003A9D5B: ;
    edx = esi;
    esi = MEM32(edx + 8);

loc_003A9D60: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A9D5B; /* je: equal / zero */

loc_003A9D65: ;
    ecx = MEM32(edx + 8);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003A9D6C
 * Original: 0x003A9D6C - 0x003A9D8B (31 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A9D6C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A9D6C: ;
    eax = MEM32(ecx + 8);
    goto loc_003A9D84;

loc_003A9D71: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 4) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003A9D7F; /* jle: less or equal (signed <=) */

loc_003A9D7A: ;
    eax = MEM32(eax + 0x10);
    goto loc_003A9D84;

loc_003A9D7F: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003A9D88; /* jge: greater or equal (signed >=) */

loc_003A9D81: ;
    eax = MEM32(eax + 0x14);

loc_003A9D84: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A9D71; /* jne: not equal / not zero */

loc_003A9D88: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003A9D8B
 * Original: 0x003A9D8B - 0x003A9DC8 (61 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A9D8B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A9D8B: ;
    eax = ecx;
    edx = MEM32(eax);
    ecx = MEM32(edx + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_003A9DA8; /* je: equal / zero */

loc_003A9D97: ;
    edx = ecx;
    goto loc_003A9D9D;

loc_003A9D9B: ;
    edx = esi;

loc_003A9D9D: ;
    esi = MEM32(edx + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A9D9B; /* jne: not equal / not zero */

loc_003A9DA4: ;
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003A9DA8: ;
    esi = MEM32(edx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A9DB3; /* jne: not equal / not zero */

loc_003A9DAF: ;
    MEM32(eax) = MEM32(eax) & esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003A9DB3: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A9DC1; /* jne: not equal / not zero */

loc_003A9DB8: ;
    edx = esi;
    esi = MEM32(edx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A9DB3; /* jne: not equal / not zero */

loc_003A9DC1: ;
    ecx = MEM32(edx + 0xC);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003A9DC8
 * Original: 0x003A9DC8 - 0x003A9DDD (21 bytes, 8 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A9DC8(void)
{

loc_003A9DC8: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0x003A9DD3u); RECOMP_ABI_CALL(0x003A8CCFu, sub_003A8CCF); /* call 0x003A8CCF */

loc_003A9DD3: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003A9DDD
 * Original: 0x003A9DDD - 0x003A9E05 (40 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A9DDD(void)
{

loc_003A9DDD: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax) = 0x431AE0;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x14) = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003A9E05
 * Original: 0x003A9E05 - 0x003A9E26 (33 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A9E05(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A9E05: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x431AE0;
    if (TEST_Z(_fa, _fb)) goto loc_003A9E20; /* je: equal / zero */

loc_003A9E15: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003A9E20u); RECOMP_ABI_CALL(0x001A1E7Bu, sub_001A1E7B); /* call 0x001A1E7B */

loc_003A9E20: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A9E26
 * Original: 0x003A9E26 - 0x003A9E4E (40 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A9E26(void)
{

loc_003A9E26: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax) = 0x431AE4;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x14) = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003A9E4E
 * Original: 0x003A9E4E - 0x003A9E6F (33 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A9E4E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A9E4E: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x431AE4;
    if (TEST_Z(_fa, _fb)) goto loc_003A9E69; /* je: equal / zero */

loc_003A9E5E: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003A9E69u); RECOMP_ABI_CALL(0x001A1E7Bu, sub_001A1E7B); /* call 0x001A1E7B */

loc_003A9E69: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A9E6F
 * Original: 0x003A9E6F - 0x003A9E9E (47 bytes, 12 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A9E6F(void)
{

loc_003A9E6F: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0;
    MEM32(eax + 0x14) = MEM32(eax + 0x14) & 0;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = 0x431AE8;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x18) = 1;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003A9E9E
 * Original: 0x003A9E9E - 0x003A9EBF (33 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A9E9E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A9E9E: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x431AE8;
    if (TEST_Z(_fa, _fb)) goto loc_003A9EB9; /* je: equal / zero */

loc_003A9EAE: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003A9EB9u); RECOMP_ABI_CALL(0x001A1E7Bu, sub_001A1E7B); /* call 0x001A1E7B */

loc_003A9EB9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003A9EBF
 * Original: 0x003A9EBF - 0x003A9EE0 (33 bytes, 15 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A9EBF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A9EBF: ;
    PUSH32(esp, esi);
    esi = ecx;
    goto loc_003A9EDA;

loc_003A9EC4: ;
    ecx = esi;
    PUSH32(esp, 0x003A9ECBu); RECOMP_ABI_CALL(0x003A9EE0u, sub_003A9EE0); /* call 0x003A9EE0 */

loc_003A9ECB: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A9ED8; /* je: equal / zero */

loc_003A9ED0: ;
    MEM32(esi + 0x14) = eax;
    esi = MEM32(esi + 8);
    goto loc_003A9EDA;

loc_003A9ED8: ;
    esi = 0; /* xor self */

loc_003A9EDA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A9EC4; /* jne: not equal / not zero */

loc_003A9EDE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003A9EE0
 * Original: 0x003A9EE0 - 0x003A9F18 (56 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A9EE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A9EE0: ;
    edx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_003A9EED; /* je: equal / zero */

loc_003A9EE8: ;
    esi = MEM32(edx + 0x14);
    goto loc_003A9EEF;

loc_003A9EED: ;
    esi = 0; /* xor self */

loc_003A9EEF: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A9EFB; /* je: equal / zero */

loc_003A9EF6: ;
    ecx = MEM32(eax + 0x14);
    goto loc_003A9EFD;

loc_003A9EFB: ;
    ecx = 0; /* xor self */

loc_003A9EFD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    POP32(esp, esi);
    if (CMP_LE(_fas, _fbs)) goto loc_003A9F0B; /* jle: less or equal (signed <=) */

loc_003A9F02: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A9F14; /* je: equal / zero */

loc_003A9F06: ;
    eax = MEM32(edx + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_003A9F0B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A9F14; /* je: equal / zero */

loc_003A9F0F: ;
    eax = MEM32(eax + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_003A9F14: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_003A9F18
 * Original: 0x003A9F18 - 0x003A9F50 (56 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A9F18(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A9F18: ;
    edx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_003A9F25; /* je: equal / zero */

loc_003A9F20: ;
    esi = MEM32(edx + 0x18);
    goto loc_003A9F27;

loc_003A9F25: ;
    esi = 0; /* xor self */

loc_003A9F27: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A9F33; /* je: equal / zero */

loc_003A9F2E: ;
    ecx = MEM32(eax + 0x18);
    goto loc_003A9F35;

loc_003A9F33: ;
    ecx = 0; /* xor self */

loc_003A9F35: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    POP32(esp, esi);
    if (CMP_LE(_fas, _fbs)) goto loc_003A9F43; /* jle: less or equal (signed <=) */

loc_003A9F3A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A9F4C; /* je: equal / zero */

loc_003A9F3E: ;
    eax = MEM32(edx + 0x18);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_003A9F43: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003A9F4C; /* je: equal / zero */

loc_003A9F47: ;
    eax = MEM32(eax + 0x18);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_003A9F4C: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_003A9F50
 * Original: 0x003A9F50 - 0x003A9F71 (33 bytes, 15 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A9F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A9F50: ;
    PUSH32(esp, esi);
    esi = ecx;
    goto loc_003A9F6B;

loc_003A9F55: ;
    ecx = esi;
    PUSH32(esp, 0x003A9F5Cu); RECOMP_ABI_CALL(0x003A9F18u, sub_003A9F18); /* call 0x003A9F18 */

loc_003A9F5C: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A9F69; /* je: equal / zero */

loc_003A9F61: ;
    MEM32(esi + 0x18) = eax;
    esi = MEM32(esi + 0xC);
    goto loc_003A9F6B;

loc_003A9F69: ;
    esi = 0; /* xor self */

loc_003A9F6B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A9F55; /* jne: not equal / not zero */

loc_003A9F6F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003A9F71
 * Original: 0x003A9F71 - 0x003A9FBC (75 bytes, 30 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A9F71(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A9F71: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x10);
    ecx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esi + 0x10) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_003A9F88; /* je: equal / zero */

loc_003A9F85: ;
    MEM32(ecx + 8) = esi;

loc_003A9F88: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 8) = edi;
    MEM32(edi + 0xC) = esi;
    MEM32(edi + 8) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003A9FA5; /* je: equal / zero */

loc_003A9F95: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A9F9D; /* jne: not equal / not zero */

loc_003A9F9A: ;
    MEM32(eax + 0xC) = edi;

loc_003A9F9D: ;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A9FA5; /* jne: not equal / not zero */

loc_003A9FA2: ;
    MEM32(eax + 0x10) = edi;

loc_003A9FA5: ;
    ecx = esi;
    PUSH32(esp, 0x003A9FACu); RECOMP_ABI_CALL(0x003A9EE0u, sub_003A9EE0); /* call 0x003A9EE0 */

loc_003A9FAC: ;
    ecx = edi;
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, 0x003A9FB6u); RECOMP_ABI_CALL(0x003A9EE0u, sub_003A9EE0); /* call 0x003A9EE0 */

loc_003A9FB6: ;
    MEM32(edi + 0x14) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003A9FBC
 * Original: 0x003A9FBC - 0x003AA007 (75 bytes, 30 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A9FBC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A9FBC: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    ecx = MEM32(edi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esi + 0xC) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_003A9FD3; /* je: equal / zero */

loc_003A9FD0: ;
    MEM32(ecx + 8) = esi;

loc_003A9FD3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 8) = edi;
    MEM32(edi + 0x10) = esi;
    MEM32(edi + 8) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003A9FF0; /* je: equal / zero */

loc_003A9FE0: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A9FE8; /* jne: not equal / not zero */

loc_003A9FE5: ;
    MEM32(eax + 0xC) = edi;

loc_003A9FE8: ;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A9FF0; /* jne: not equal / not zero */

loc_003A9FED: ;
    MEM32(eax + 0x10) = edi;

loc_003A9FF0: ;
    ecx = esi;
    PUSH32(esp, 0x003A9FF7u); RECOMP_ABI_CALL(0x003A9EE0u, sub_003A9EE0); /* call 0x003A9EE0 */

loc_003A9FF7: ;
    ecx = edi;
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, 0x003AA001u); RECOMP_ABI_CALL(0x003A9EE0u, sub_003A9EE0); /* call 0x003A9EE0 */

loc_003AA001: ;
    MEM32(edi + 0x14) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003AA007
 * Original: 0x003AA007 - 0x003AA052 (75 bytes, 30 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AA007(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AA007: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x14);
    ecx = MEM32(edi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esi + 0x14) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_003AA01E; /* je: equal / zero */

loc_003AA01B: ;
    MEM32(ecx + 0xC) = esi;

loc_003AA01E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0xC) = edi;
    MEM32(edi + 0x10) = esi;
    MEM32(edi + 0xC) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003AA03B; /* je: equal / zero */

loc_003AA02B: ;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AA033; /* jne: not equal / not zero */

loc_003AA030: ;
    MEM32(eax + 0x10) = edi;

loc_003AA033: ;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AA03B; /* jne: not equal / not zero */

loc_003AA038: ;
    MEM32(eax + 0x14) = edi;

loc_003AA03B: ;
    ecx = esi;
    PUSH32(esp, 0x003AA042u); RECOMP_ABI_CALL(0x003A9F18u, sub_003A9F18); /* call 0x003A9F18 */

loc_003AA042: ;
    ecx = edi;
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x003AA04Cu); RECOMP_ABI_CALL(0x003A9F18u, sub_003A9F18); /* call 0x003A9F18 */

loc_003AA04C: ;
    MEM32(edi + 0x18) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003AA052
 * Original: 0x003AA052 - 0x003AA09D (75 bytes, 30 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AA052(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AA052: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x10);
    ecx = MEM32(edi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esi + 0x10) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_003AA069; /* je: equal / zero */

loc_003AA066: ;
    MEM32(ecx + 0xC) = esi;

loc_003AA069: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0xC) = edi;
    MEM32(edi + 0x14) = esi;
    MEM32(edi + 0xC) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003AA086; /* je: equal / zero */

loc_003AA076: ;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AA07E; /* jne: not equal / not zero */

loc_003AA07B: ;
    MEM32(eax + 0x10) = edi;

loc_003AA07E: ;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AA086; /* jne: not equal / not zero */

loc_003AA083: ;
    MEM32(eax + 0x14) = edi;

loc_003AA086: ;
    ecx = esi;
    PUSH32(esp, 0x003AA08Du); RECOMP_ABI_CALL(0x003A9F18u, sub_003A9F18); /* call 0x003A9F18 */

loc_003AA08D: ;
    ecx = edi;
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x003AA097u); RECOMP_ABI_CALL(0x003A9F18u, sub_003A9F18); /* call 0x003A9F18 */

loc_003AA097: ;
    MEM32(edi + 0x18) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003AA09D
 * Original: 0x003AA09D - 0x003AA0B7 (26 bytes, 5 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AA09D(void)
{

loc_003AA09D: ;
    PUSH32(esp, MEM32(0x3BE728));
    PUSH32(esp, 0x003AA0A8u); RECOMP_ABI_CALL(0x003A8ABEu, sub_003A8ABE); /* call 0x003A8ABE */

loc_003AA0A8: ;
    MEM32(0x3BE728) = MEM32(0x3BE728) & 0;
    MEM32(0x3BE72C) = MEM32(0x3BE72C) & 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003AA0B7
 * Original: 0x003AA0B7 - 0x003AA0ED (54 bytes, 26 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AA0B7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AA0B7: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */

loc_003AA0BD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AA0C6; /* jne: not equal / not zero */

loc_003AA0C2: ;
    PUSH32(esp, esi);
    POP32(esp, eax);
    goto loc_003AA0CA;

loc_003AA0C6: ;
    eax = MEM32(edi + esi * 4 + 0x1C);

loc_003AA0CA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AA0DC; /* jne: not equal / not zero */

loc_003AA0D0: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003AA0D8u); RECOMP_ABI_CALL(0x003A9244u, sub_003A9244); /* call 0x003A9244 */

loc_003AA0D8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003AA0E9; /* jne: not equal / not zero */

loc_003AA0DC: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003AA0BD; /* jle: less or equal (signed <=) */

loc_003AA0E2: ;
    SET_LO8(eax, 0); /* xor self */

loc_003AA0E4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003AA0E9: ;
    SET_LO8(eax, 1);
    goto loc_003AA0E4;

}

/**
 * sub_003AA0ED
 * Original: 0x003AA0ED - 0x003AA107 (26 bytes, 5 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AA0ED(void)
{

loc_003AA0ED: ;
    PUSH32(esp, MEM32(0x3BE738));
    PUSH32(esp, 0x003AA0F8u); RECOMP_ABI_CALL(0x003A8AE7u, sub_003A8AE7); /* call 0x003A8AE7 */

loc_003AA0F8: ;
    MEM32(0x3BE738) = MEM32(0x3BE738) & 0;
    MEM32(0x3BE73C) = MEM32(0x3BE73C) & 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003AA107
 * Original: 0x003AA107 - 0x003AA12A (35 bytes, 14 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003AA107(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_003AA107: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + -4) = esp;
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(eax) = 0x431A80;
    edx = MEM32(ecx + 0x18);
    MEM32(eax + 4) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AA126u); RECOMP_ABI_CALL(0x003A9004u, sub_003A9004); /* call 0x003A9004 */

loc_003AA126: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003AA12A
 * Original: 0x003AA12A - 0x003AA14D (35 bytes, 14 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003AA12A(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_003AA12A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + -4) = esp;
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(eax) = 0x431A80;
    edx = MEM32(ecx + 0x20);
    MEM32(eax + 4) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AA149u); RECOMP_ABI_CALL(0x003A90B3u, sub_003A90B3); /* call 0x003A90B3 */

loc_003AA149: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003AA14D
 * Original: 0x003AA14D - 0x003AA170 (35 bytes, 14 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003AA14D(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_003AA14D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + -4) = esp;
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(eax) = 0x431A80;
    edx = MEM32(ecx + 0x28);
    MEM32(eax + 4) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AA16Cu); RECOMP_ABI_CALL(0x003A9162u, sub_003A9162); /* call 0x003A9162 */

loc_003AA16C: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003AA170
 * Original: 0x003AA170 - 0x003AA1E5 (117 bytes, 49 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AA170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AA170: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x20);
    ebx = ecx;
    edi = 0; /* xor self */
    POP32(esp, esi);

loc_003AA17A: ;
    _fa = (uint32_t)(MEM8(esp + edi + 0x18)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + edi + 0x18), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AA1AE; /* je: equal / zero */

loc_003AA181: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    eax = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_003AA1AE; /* je: equal / zero */

loc_003AA187: ;
    _fa = (uint32_t)(MEM32(esi + eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AA194; /* jne: not equal / not zero */

loc_003AA18D: ;
    eax = MEM32(eax + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003AA187; /* jne: not equal / not zero */

loc_003AA194: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AA1AE; /* je: equal / zero */

loc_003AA198: ;
    eax = MEM32(esi + eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AA1AE; /* je: equal / zero */

loc_003AA1A0: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003AA1AAu); RECOMP_ABI_CALL(0x003A8B70u, sub_003A8B70); /* call 0x003A8B70 */

loc_003AA1AA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AA1D9; /* je: equal / zero */

loc_003AA1AE: ;
    esi = esi + 4;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2C (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003AA17A; /* jle: less or equal (signed <=) */

loc_003AA1B7: ;
    ecx = ebx;
    PUSH32(esp, 0x003AA1BEu); RECOMP_ABI_CALL(0x003A8385u, sub_003A8385); /* call 0x003A8385 */

loc_003AA1BE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AA1DD; /* je: equal / zero */

loc_003AA1C2: ;
    ecx = ebx;
    PUSH32(esp, 0x003AA1C9u); RECOMP_ABI_CALL(0x003A8385u, sub_003A8385); /* call 0x003A8385 */

loc_003AA1C9: ;
    PUSH32(esp, MEM32(eax + 0x20));
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 0x003AA1D5u); RECOMP_ABI_CALL(0x003A8B70u, sub_003A8B70); /* call 0x003A8B70 */

loc_003AA1D5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003AA1DD; /* jne: not equal / not zero */

loc_003AA1D9: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_003AA1DF;

loc_003AA1DD: ;
    SET_LO8(eax, 1);

loc_003AA1DF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003AA1E5
 * Original: 0x003AA1E5 - 0x003AA20F (42 bytes, 20 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AA1E5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AA1E5: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */

loc_003AA1EB: ;
    _fa = (uint32_t)(MEM8(esp + esi + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + esi + 0x10), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AA1FE; /* je: equal / zero */

loc_003AA1F2: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003AA1FAu); RECOMP_ABI_CALL(0x003AA0B7u, sub_003AA0B7); /* call 0x003AA0B7 */

loc_003AA1FA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003AA20B; /* jne: not equal / not zero */

loc_003AA1FE: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003AA1EB; /* jle: less or equal (signed <=) */

loc_003AA204: ;
    SET_LO8(eax, 0); /* xor self */

loc_003AA206: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_003AA20B: ;
    SET_LO8(eax, 1);
    goto loc_003AA206;

}

/**
 * sub_003AA20F
 * Original: 0x003AA20F - 0x003AA254 (69 bytes, 29 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003AA20F(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AA20F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AA24D; /* je: equal / zero */

loc_003AA21B: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ebp + 0x14) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + 0x14) = esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(eax) = 0x431A80;
    MEM32(eax + 4) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AA240u); RECOMP_ABI_CALL(0x003A9267u, sub_003A9267); /* call 0x003A9267 */

loc_003AA240: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = MEM32(esi + 0x10);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AA24Bu); RECOMP_ABI_CALL(0x003AA170u, sub_003AA170); /* call 0x003AA170 */

loc_003AA24B: ;
    goto loc_003AA24F;

loc_003AA24D: ;
    SET_LO8(eax, 1);

loc_003AA24F: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003AA254
 * Original: 0x003AA254 - 0x003AA2AA (86 bytes, 37 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AA254(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AA254: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = 0; /* xor self */
    esi = edi + 4;

loc_003AA25E: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = edi;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003AA26Au); RECOMP_ABI_CALL(0x003A9626u, sub_003A9626); /* call 0x003A9626 */

loc_003AA26A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003AA2A6; /* jne: not equal / not zero */

loc_003AA26E: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = edi;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003AA27Au); RECOMP_ABI_CALL(0x003A9779u, sub_003A9779); /* call 0x003A9779 */

loc_003AA27A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003AA2A6; /* jne: not equal / not zero */

loc_003AA27E: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AA295; /* je: equal / zero */

loc_003AA287: ;
    PUSH32(esp, 0x003AA28Cu); RECOMP_ABI_CALL(0x003A8385u, sub_003A8385); /* call 0x003A8385 */

loc_003AA28C: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x38) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AA2A6; /* je: equal / zero */

loc_003AA295: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003AA25E; /* jle: less or equal (signed <=) */

loc_003AA29E: ;
    SET_LO8(eax, 0); /* xor self */

loc_003AA2A0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_003AA2A6: ;
    SET_LO8(eax, 1);
    goto loc_003AA2A0;

}

/**
 * sub_003AA2AA
 * Original: 0x003AA2AA - 0x003AA2F8 (78 bytes, 36 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003AA2AA(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003AA2AA: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    edi = ecx;
    PUSH32(esp, 0x003AA2B8u); RECOMP_ABI_CALL(0x003AA254u, sub_003AA254); /* call 0x003AA254 */

loc_003AA2B8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003AA2EF; /* je: equal / zero */

loc_003AA2BC: ;
    _fa = (uint32_t)(MEM32(ebp + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x2C), 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_003AA2E0; /* jne: not equal / not zero */

loc_003AA2C4: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    esi = edi + 4;

loc_003AA2C9: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, 0x003AA2D3u); RECOMP_ABI_CALL(0x003A8385u, sub_003A8385); /* call 0x003A8385 */

loc_003AA2D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003AA2F4; /* jne: not equal / not zero */

loc_003AA2D7: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_003AA2C9; /* jle: less or equal (signed <=) */

loc_003AA2E0: ;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x003AA2E8u); RECOMP_ABI_CALL(0x003A98CCu, sub_003A98CC); /* call 0x003A98CC */

loc_003AA2E8: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003AA2ED: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_003AA2EF: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_003AA2F4: ;
    SET_LO8(eax, 1);
    goto loc_003AA2ED;

}

/**
 * sub_003AA2F8
 * Original: 0x003AA2F8 - 0x003AA3A2 (170 bytes, 63 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AA2F8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AA2F8: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x34) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AA335; /* jne: not equal / not zero */

loc_003AA305: ;
    eax = MEM32(esp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(MEM8(eax + esi + 0x18)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + esi + 0x18), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AA31F; /* je: equal / zero */

loc_003AA311: ;
    PUSH32(esp, ebx);
    MEM8(eax + esi + 0x18) = LO8(ebx);
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003AA31Fu); RECOMP_ABI_CALL(0x003AA74Cu, sub_003AA74C); /* call 0x003AA74C */

loc_003AA31F: ;
    ecx = esi + 0x14;
    PUSH32(esp, 0x003AA327u); RECOMP_ABI_CALL(0x003A7E54u, sub_003A7E54); /* call 0x003A7E54 */

loc_003AA327: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003AA39D; /* jne: not equal / not zero */

loc_003AA32B: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x003AA333u); RECOMP_ABI_CALL(0x003AA107u, sub_003AA107); /* call 0x003AA107 */

loc_003AA333: ;
    goto loc_003AA39D;

loc_003AA335: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x38) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AA36A; /* jne: not equal / not zero */

loc_003AA33A: ;
    eax = MEM32(esp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(MEM8(eax + esi + 0x20)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + esi + 0x20), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AA354; /* je: equal / zero */

loc_003AA346: ;
    PUSH32(esp, ebx);
    MEM8(eax + esi + 0x20) = LO8(ebx);
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003AA354u); RECOMP_ABI_CALL(0x003AA74Cu, sub_003AA74C); /* call 0x003AA74C */

loc_003AA354: ;
    ecx = esi + 0x1C;
    PUSH32(esp, 0x003AA35Cu); RECOMP_ABI_CALL(0x003A7E54u, sub_003A7E54); /* call 0x003A7E54 */

loc_003AA35C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003AA39D; /* jne: not equal / not zero */

loc_003AA360: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x003AA368u); RECOMP_ABI_CALL(0x003AA12Au, sub_003AA12A); /* call 0x003AA12A */

loc_003AA368: ;
    goto loc_003AA39D;

loc_003AA36A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x3C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x3C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AA39D; /* jne: not equal / not zero */

loc_003AA36F: ;
    eax = MEM32(esp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(MEM8(eax + esi + 0x28)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + esi + 0x28), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AA389; /* je: equal / zero */

loc_003AA37B: ;
    PUSH32(esp, ebx);
    MEM8(eax + esi + 0x28) = LO8(ebx);
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003AA389u); RECOMP_ABI_CALL(0x003AA74Cu, sub_003AA74C); /* call 0x003AA74C */

loc_003AA389: ;
    ecx = esi + 0x24;
    PUSH32(esp, 0x003AA391u); RECOMP_ABI_CALL(0x003A7E54u, sub_003A7E54); /* call 0x003A7E54 */

loc_003AA391: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003AA39D; /* jne: not equal / not zero */

loc_003AA395: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x003AA39Du); RECOMP_ABI_CALL(0x003AA14Du, sub_003AA14D); /* call 0x003AA14D */

loc_003AA39D: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003AA3AD
 * Original: 0x003AA3AD - 0x003AA3CA (29 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AA3AD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AA3AD: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x431AB8;
    goto loc_003AA3C2;

loc_003AA3B8: ;
    PUSH32(esp, MEM32(esi + 8));
    ecx = esi;
    PUSH32(esp, 0x003AA3C2u); RECOMP_ABI_CALL(0x003A8B10u, sub_003A8B10); /* call 0x003A8B10 */

loc_003AA3C2: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AA3B8; /* jne: not equal / not zero */

loc_003AA3C8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003AA3E0
 * Original: 0x003AA3E0 - 0x003AA406 (38 bytes, 12 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AA3E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AA3E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x431A98;
    PUSH32(esp, 0x003AA3EEu); RECOMP_ABI_CALL(0x003A9B93u, sub_003A9B93); /* call 0x003A9B93 */

loc_003AA3EE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AA400; /* je: equal / zero */

loc_003AA3F5: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003AA400u); RECOMP_ABI_CALL(0x001A1E7Bu, sub_001A1E7B); /* call 0x001A1E7B */

loc_003AA400: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003AA406
 * Original: 0x003AA406 - 0x003AA42C (38 bytes, 12 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AA406(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AA406: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x431AA0;
    PUSH32(esp, 0x003AA414u); RECOMP_ABI_CALL(0x003A9AC5u, sub_003A9AC5); /* call 0x003A9AC5 */

loc_003AA414: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AA426; /* je: equal / zero */

loc_003AA41B: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003AA426u); RECOMP_ABI_CALL(0x001A1E7Bu, sub_001A1E7B); /* call 0x001A1E7B */

loc_003AA426: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003AA42C
 * Original: 0x003AA42C - 0x003AA452 (38 bytes, 12 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AA42C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AA42C: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x431AA8;
    PUSH32(esp, 0x003AA43Au); RECOMP_ABI_CALL(0x003A9BF1u, sub_003A9BF1); /* call 0x003A9BF1 */

loc_003AA43A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AA44C; /* je: equal / zero */

loc_003AA441: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003AA44Cu); RECOMP_ABI_CALL(0x001A1E7Bu, sub_001A1E7B); /* call 0x001A1E7B */

loc_003AA44C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003AA452
 * Original: 0x003AA452 - 0x003AA478 (38 bytes, 12 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AA452(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AA452: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x431AB0;
    PUSH32(esp, 0x003AA460u); RECOMP_ABI_CALL(0x003A9AF5u, sub_003A9AF5); /* call 0x003A9AF5 */

loc_003AA460: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AA472; /* je: equal / zero */

loc_003AA467: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003AA472u); RECOMP_ABI_CALL(0x001A1E7Bu, sub_001A1E7B); /* call 0x001A1E7B */

loc_003AA472: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003AA478
 * Original: 0x003AA478 - 0x003AA49C (36 bytes, 13 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AA478(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AA478: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003AA480u); RECOMP_ABI_CALL(0x003AA3ADu, sub_003AA3AD); /* call 0x003AA3AD */

loc_003AA480: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AA496; /* je: equal / zero */

loc_003AA487: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AA496; /* je: equal / zero */

loc_003AA48B: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003AA496u); RECOMP_ABI_CALL(0x001A1E7Bu, sub_001A1E7B); /* call 0x001A1E7B */

loc_003AA496: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003AA49C
 * Original: 0x003AA49C - 0x003AA4C2 (38 bytes, 12 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AA49C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AA49C: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x431AC0;
    PUSH32(esp, 0x003AA4AAu); RECOMP_ABI_CALL(0x003A9D1Eu, sub_003A9D1E); /* call 0x003A9D1E */

loc_003AA4AA: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AA4BC; /* je: equal / zero */

loc_003AA4B1: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003AA4BCu); RECOMP_ABI_CALL(0x001A1E7Bu, sub_001A1E7B); /* call 0x001A1E7B */

loc_003AA4BC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003AA4C2
 * Original: 0x003AA4C2 - 0x003AA4E8 (38 bytes, 12 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AA4C2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AA4C2: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x431AC8;
    PUSH32(esp, 0x003AA4D0u); RECOMP_ABI_CALL(0x003A9B5Fu, sub_003A9B5F); /* call 0x003A9B5F */

loc_003AA4D0: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AA4E2; /* je: equal / zero */

loc_003AA4D7: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003AA4E2u); RECOMP_ABI_CALL(0x001A1E7Bu, sub_001A1E7B); /* call 0x001A1E7B */

loc_003AA4E2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003AA4E8
 * Original: 0x003AA4E8 - 0x003AA50E (38 bytes, 12 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AA4E8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AA4E8: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x431A8C;
    PUSH32(esp, 0x003AA4F6u); RECOMP_ABI_CALL(0x003A9DC8u, sub_003A9DC8); /* call 0x003A9DC8 */

loc_003AA4F6: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AA508; /* je: equal / zero */

loc_003AA4FD: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003AA508u); RECOMP_ABI_CALL(0x001A1E7Bu, sub_001A1E7B); /* call 0x001A1E7B */

loc_003AA508: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003AA50E
 * Original: 0x003AA50E - 0x003AA523 (21 bytes, 10 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003AA50E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_003AA50E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + -4));
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AA51Fu); RECOMP_ABI_CALL(0x003A9D6Cu, sub_003A9D6C); /* call 0x003A9D6C */

loc_003AA51F: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003AA523
 * Original: 0x003AA523 - 0x003AA5D9 (182 bytes, 79 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AA523(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AA523: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;

loc_003AA528: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ebx = MEM32(edi + 8);
    if (TEST_Z(_fa, _fb)) goto loc_003AA537; /* je: equal / zero */

loc_003AA532: ;
    esi = MEM32(eax + 0x14);
    goto loc_003AA539;

loc_003AA537: ;
    esi = 0; /* xor self */

loc_003AA539: ;
    ecx = MEM32(edi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AA545; /* je: equal / zero */

loc_003AA540: ;
    edx = MEM32(ecx + 0x14);
    goto loc_003AA547;

loc_003AA545: ;
    edx = 0; /* xor self */

loc_003AA547: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003AA57C; /* jle: less or equal (signed <=) */

loc_003AA54C: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AA558; /* je: equal / zero */

loc_003AA553: ;
    edx = MEM32(ecx + 0x14);
    goto loc_003AA55A;

loc_003AA558: ;
    edx = 0; /* xor self */

loc_003AA55A: ;
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AA566; /* je: equal / zero */

loc_003AA561: ;
    ecx = MEM32(ecx + 0x14);
    goto loc_003AA568;

loc_003AA566: ;
    ecx = 0; /* xor self */

loc_003AA568: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003AA573; /* jge: greater or equal (signed >=) */

loc_003AA56C: ;
    ecx = eax;
    PUSH32(esp, 0x003AA573u); RECOMP_ABI_CALL(0x003A9F71u, sub_003A9F71); /* call 0x003A9F71 */

loc_003AA573: ;
    ecx = edi;
    PUSH32(esp, 0x003AA57Au); RECOMP_ABI_CALL(0x003A9FBCu, sub_003A9FBC); /* call 0x003A9FBC */

loc_003AA57A: ;
    goto loc_003AA5C3;

loc_003AA57C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AA585; /* je: equal / zero */

loc_003AA580: ;
    edx = MEM32(ecx + 0x14);
    goto loc_003AA587;

loc_003AA585: ;
    edx = 0; /* xor self */

loc_003AA587: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AA590; /* je: equal / zero */

loc_003AA58B: ;
    eax = MEM32(eax + 0x14);
    goto loc_003AA592;

loc_003AA590: ;
    eax = 0; /* xor self */

loc_003AA592: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003AA5C3; /* jle: less or equal (signed <=) */

loc_003AA597: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AA5A3; /* je: equal / zero */

loc_003AA59E: ;
    edx = MEM32(eax + 0x14);
    goto loc_003AA5A5;

loc_003AA5A3: ;
    edx = 0; /* xor self */

loc_003AA5A5: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AA5B1; /* je: equal / zero */

loc_003AA5AC: ;
    eax = MEM32(eax + 0x14);
    goto loc_003AA5B3;

loc_003AA5B1: ;
    eax = 0; /* xor self */

loc_003AA5B3: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003AA5BC; /* jge: greater or equal (signed >=) */

loc_003AA5B7: ;
    PUSH32(esp, 0x003AA5BCu); RECOMP_ABI_CALL(0x003A9FBCu, sub_003A9FBC); /* call 0x003A9FBC */

loc_003AA5BC: ;
    ecx = edi;
    PUSH32(esp, 0x003AA5C3u); RECOMP_ABI_CALL(0x003A9F71u, sub_003A9F71); /* call 0x003A9F71 */

loc_003AA5C3: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AA5D5; /* je: equal / zero */

loc_003AA5C7: ;
    ecx = ebx;
    PUSH32(esp, 0x003AA5CEu); RECOMP_ABI_CALL(0x003A9EBFu, sub_003A9EBF); /* call 0x003A9EBF */

loc_003AA5CE: ;
    edi = ebx;
    goto loc_003AA528;

loc_003AA5D5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003AA5D9
 * Original: 0x003AA5D9 - 0x003AA68F (182 bytes, 79 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AA5D9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AA5D9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;

loc_003AA5DE: ;
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ebx = MEM32(edi + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_003AA5ED; /* je: equal / zero */

loc_003AA5E8: ;
    esi = MEM32(eax + 0x18);
    goto loc_003AA5EF;

loc_003AA5ED: ;
    esi = 0; /* xor self */

loc_003AA5EF: ;
    ecx = MEM32(edi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AA5FB; /* je: equal / zero */

loc_003AA5F6: ;
    edx = MEM32(ecx + 0x18);
    goto loc_003AA5FD;

loc_003AA5FB: ;
    edx = 0; /* xor self */

loc_003AA5FD: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003AA632; /* jle: less or equal (signed <=) */

loc_003AA602: ;
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AA60E; /* je: equal / zero */

loc_003AA609: ;
    edx = MEM32(ecx + 0x18);
    goto loc_003AA610;

loc_003AA60E: ;
    edx = 0; /* xor self */

loc_003AA610: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AA61C; /* je: equal / zero */

loc_003AA617: ;
    ecx = MEM32(ecx + 0x18);
    goto loc_003AA61E;

loc_003AA61C: ;
    ecx = 0; /* xor self */

loc_003AA61E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003AA629; /* jge: greater or equal (signed >=) */

loc_003AA622: ;
    ecx = eax;
    PUSH32(esp, 0x003AA629u); RECOMP_ABI_CALL(0x003AA007u, sub_003AA007); /* call 0x003AA007 */

loc_003AA629: ;
    ecx = edi;
    PUSH32(esp, 0x003AA630u); RECOMP_ABI_CALL(0x003AA052u, sub_003AA052); /* call 0x003AA052 */

loc_003AA630: ;
    goto loc_003AA679;

loc_003AA632: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AA63B; /* je: equal / zero */

loc_003AA636: ;
    edx = MEM32(ecx + 0x18);
    goto loc_003AA63D;

loc_003AA63B: ;
    edx = 0; /* xor self */

loc_003AA63D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AA646; /* je: equal / zero */

loc_003AA641: ;
    eax = MEM32(eax + 0x18);
    goto loc_003AA648;

loc_003AA646: ;
    eax = 0; /* xor self */

loc_003AA648: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003AA679; /* jle: less or equal (signed <=) */

loc_003AA64D: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AA659; /* je: equal / zero */

loc_003AA654: ;
    edx = MEM32(eax + 0x18);
    goto loc_003AA65B;

loc_003AA659: ;
    edx = 0; /* xor self */

loc_003AA65B: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AA667; /* je: equal / zero */

loc_003AA662: ;
    eax = MEM32(eax + 0x18);
    goto loc_003AA669;

loc_003AA667: ;
    eax = 0; /* xor self */

loc_003AA669: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003AA672; /* jge: greater or equal (signed >=) */

loc_003AA66D: ;
    PUSH32(esp, 0x003AA672u); RECOMP_ABI_CALL(0x003AA052u, sub_003AA052); /* call 0x003AA052 */

loc_003AA672: ;
    ecx = edi;
    PUSH32(esp, 0x003AA679u); RECOMP_ABI_CALL(0x003AA007u, sub_003AA007); /* call 0x003AA007 */

loc_003AA679: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AA68B; /* je: equal / zero */

loc_003AA67D: ;
    ecx = ebx;
    PUSH32(esp, 0x003AA684u); RECOMP_ABI_CALL(0x003A9F50u, sub_003A9F50); /* call 0x003A9F50 */

loc_003AA684: ;
    edi = ebx;
    goto loc_003AA5DE;

loc_003AA68B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003AA68F
 * Original: 0x003AA68F - 0x003AA6A2 (19 bytes, 6 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AA68F(void)
{

loc_003AA68F: ;
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    MEM32(0x3BE718) = eax;
    MEM32(0x3BE71C) = eax;
    PUSH32(esp, 0x003AA6A1u); RECOMP_ABI_CALL(0x003A8C54u, sub_003A8C54); /* call 0x003A8C54 */

loc_003AA6A1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003AA6A2
 * Original: 0x003AA6A2 - 0x003AA6BD (27 bytes, 12 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AA6A2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AA6A2: ;
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ecx + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x1C), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AA6BB; /* je: equal / zero */

loc_003AA6AA: ;
    eax = esp;
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, 0x003AA6B6u); RECOMP_ABI_CALL(0x003A9ADAu, sub_003A9ADA); /* call 0x003A9ADA */

loc_003AA6B6: ;
    eax = MEM32(eax);
    eax = MEM32(eax + 4);

loc_003AA6BB: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003AA6BD
 * Original: 0x003AA6BD - 0x003AA710 (83 bytes, 31 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003AA6BD(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AA6BD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AA6C7u); RECOMP_ABI_CALL(0x003AA09Du, sub_003AA09D); /* call 0x003AA09D */

loc_003AA6C7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AA6CCu); RECOMP_ABI_CALL(0x003AA0EDu, sub_003AA0ED); /* call 0x003AA0ED */

loc_003AA6CC: ;
    eax = ebp + -4;
    esi = 0x3BE710;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AA6DCu); RECOMP_ABI_CALL(0x003A9ADAu, sub_003A9ADA); /* call 0x003A9ADA */

loc_003AA6DC: ;
    _fa = (uint32_t)(MEM32(0x3BE71C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x3BE71C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AA70D; /* je: equal / zero */

loc_003AA6E5: ;
    eax = MEM32(ebp + -4);

loc_003AA6E8: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AA6F7; /* je: equal / zero */

loc_003AA6EF: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003AA6F7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003AA6F7: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AA702u); RECOMP_ABI_CALL(0x003A9ADAu, sub_003A9ADA); /* call 0x003A9ADA */

loc_003AA702: ;
    _fa = (uint32_t)(MEM32(0x3BE71C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x3BE71C), 0 (32-bit) */
    eax = MEM32(eax);
    if (CMP_NE(_fa, _fb)) goto loc_003AA6E8; /* jne: not equal / not zero */

loc_003AA70D: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003AA710
 * Original: 0x003AA710 - 0x003AA74C (60 bytes, 23 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003AA710(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AA710: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AA720u); RECOMP_ABI_CALL(0x003A9ADAu, sub_003A9ADA); /* call 0x003A9ADA */

loc_003AA720: ;
    goto loc_003AA73C;

loc_003AA722: ;
    eax = MEM32(ebp + -4);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = MEM32(eax + 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AA730u); RECOMP_ABI_CALL(0x003AA0B7u, sub_003AA0B7); /* call 0x003AA0B7 */

loc_003AA730: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003AA748; /* jne: not equal / not zero */

loc_003AA734: ;
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AA73Cu); RECOMP_ABI_CALL(0x003A9C4Fu, sub_003A9C4F); /* call 0x003A9C4F */

loc_003AA73C: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AA722; /* jne: not equal / not zero */

loc_003AA742: ;
    SET_LO8(eax, 0); /* xor self */

loc_003AA744: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

loc_003AA748: ;
    SET_LO8(eax, 1);
    goto loc_003AA744;

}

/**
 * sub_003AA74C
 * Original: 0x003AA74C - 0x003AA773 (39 bytes, 16 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AA74C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AA74C: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx + edx * 4 + 0x20;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AA769; /* je: equal / zero */

loc_003AA75B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AA769; /* je: equal / zero */

loc_003AA760: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x003AA769u); RECOMP_ABI_CALL(0x003AA2F8u, sub_003AA2F8); /* call 0x003AA2F8 */

loc_003AA769: ;
    eax = MEM32(esp + 0xC);
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003AA773
 * Original: 0x003AA773 - 0x003AA823 (176 bytes, 70 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003AA773(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AA773: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AA788u); RECOMP_ABI_CALL(0x003A9211u, sub_003A9211); /* call 0x003A9211 */

loc_003AA788: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AA81C; /* je: equal / zero */

loc_003AA790: ;
    eax = MEM32(esi + 0x34);
    goto loc_003AA7A6;

loc_003AA795: ;
    _fa = (uint32_t)(MEM32(eax + ebx * 4 + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + ebx * 4 + 0x20), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AA7B5; /* jne: not equal / not zero */

loc_003AA79C: ;
    _fa = (uint32_t)(MEM32(eax + edi * 4 + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edi * 4 + 0x20), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AA7AC; /* jne: not equal / not zero */

loc_003AA7A3: ;
    eax = MEM32(eax + 0x34);

loc_003AA7A6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003AA795; /* jne: not equal / not zero */

loc_003AA7AA: ;
    goto loc_003AA7B5;

loc_003AA7AC: ;
    eax = edi;
    edi = ebx;
    ebx = eax;
    MEM32(ebp + 0xC) = ebx;

loc_003AA7B5: ;
    ecx = MEM32(esi + edi * 4 + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AA7C5; /* je: equal / zero */

loc_003AA7BE: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AA7C5u); RECOMP_ABI_CALL(0x003AA2F8u, sub_003AA2F8); /* call 0x003AA2F8 */

loc_003AA7C5: ;
    ebx = ebx * 4 + 0x20;

loc_003AA7CC: ;
    _fa = (uint32_t)(MEM32(ebx + esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AA81A; /* jne: not equal / not zero */

loc_003AA7D2: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    ecx = esi + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AA7DEu); RECOMP_ABI_CALL(0x003A9ADAu, sub_003A9ADA); /* call 0x003A9ADA */

loc_003AA7DE: ;
    goto loc_003AA80C;

loc_003AA7E0: ;
    eax = 0; /* xor self */

loc_003AA7E2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AA7EB; /* jne: not equal / not zero */

loc_003AA7E7: ;
    PUSH32(esp, eax);
    POP32(esp, edx);
    goto loc_003AA7F2;

loc_003AA7EB: ;
    edx = MEM32(ecx + 4);
    edx = MEM32(edx + eax * 4 + 0x1C);

loc_003AA7F2: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AA7FE; /* jne: not equal / not zero */

loc_003AA7F7: ;
    edx = MEM32(ecx + 4);
    MEM32(edx + eax * 4 + 0x1C) = edi;

loc_003AA7FE: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003AA7E2; /* jle: less or equal (signed <=) */

loc_003AA804: ;
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AA80Cu); RECOMP_ABI_CALL(0x003A8B42u, sub_003A8B42); /* call 0x003A8B42 */

loc_003AA80C: ;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003AA7E0; /* jne: not equal / not zero */

loc_003AA813: ;
    esi = MEM32(esi + 0x34);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003AA7CC; /* jne: not equal / not zero */

loc_003AA81A: ;
    SET_LO8(eax, 1);

loc_003AA81C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003AA823
 * Original: 0x003AA823 - 0x003AA983 (352 bytes, 131 insns)
 * Category: game_render
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AA823(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AA823: ;
    eax = 0x355056;
    PUSH32(esp, 0x003AA82Du); RECOMP_ABI_CALL(0x0034DEC0u, sub_0034DEC0); /* call 0x0034DEC0 */

loc_003AA82D: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    ecx = ebp + 0xC;
    PUSH32(esp, 0x003AA841u); RECOMP_ABI_CALL(0x003A7E54u, sub_003A7E54); /* call 0x003A7E54 */

loc_003AA841: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AA970; /* je: equal / zero */

loc_003AA849: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    ecx = esi + 0x10;
    MEM8(ebp + -13) = 1;
    PUSH32(esp, 0x003AA859u); RECOMP_ABI_CALL(0x003A9ADAu, sub_003A9ADA); /* call 0x003A9ADA */

loc_003AA859: ;
    ebx = 0x431A80;
    goto loc_003AA8D3;

loc_003AA860: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x10);
    eax = esp;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(edi + 4);
    MEM32(ebp + -24) = esp;
    PUSH32(esp, 0x003AA877u); RECOMP_ABI_CALL(0x003AA1E5u, sub_003AA1E5); /* call 0x003AA1E5 */

loc_003AA877: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AA8CB; /* je: equal / zero */

loc_003AA87B: ;
    edi = MEM32(edi + 4);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003AA887u); RECOMP_ABI_CALL(0x003A9B74u, sub_003A9B74); /* call 0x003A9B74 */

loc_003AA887: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003AA88E; /* jne: not equal / not zero */

loc_003AA88B: ;
    MEM8(ebp + -13) = LO8(eax);

loc_003AA88E: ;
    _fa = (uint32_t)(MEM8(ebp + -13)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -13), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AA8CB; /* jne: not equal / not zero */

loc_003AA894: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AA96C; /* je: equal / zero */

loc_003AA89F: ;
    PUSH32(esp, 3);
    ecx = eax + 4;
    POP32(esp, edx);

loc_003AA8A5: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AA8AF; /* jne: not equal / not zero */

loc_003AA8AB: ;
    MEM8(ebp + -13) = 1;

loc_003AA8AF: ;
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AA8BB; /* jne: not equal / not zero */

loc_003AA8B7: ;
    MEM8(ebp + -13) = 1;

loc_003AA8BB: ;
    ecx = ecx + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003AA8A5; /* jne: not equal / not zero */

loc_003AA8C1: ;
    _fa = (uint32_t)(MEM8(ebp + -13)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -13), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AA96C; /* je: equal / zero */

loc_003AA8CB: ;
    ecx = ebp + -20;
    PUSH32(esp, 0x003AA8D3u); RECOMP_ABI_CALL(0x003A9C4Fu, sub_003A9C4F); /* call 0x003A9C4F */

loc_003AA8D3: ;
    edi = MEM32(ebp + -20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003AA860; /* jne: not equal / not zero */

loc_003AA8DA: ;
    _fa = (uint32_t)(MEM8(ebp + 0x18)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x18), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AA922; /* je: equal / zero */

loc_003AA8E0: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x30), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AA922; /* je: equal / zero */

loc_003AA8E7: ;
    ecx = 0; /* xor self */
    eax = esi + 0x20;

loc_003AA8EC: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AA8F5; /* je: equal / zero */

loc_003AA8F0: ;
    MEM8(ebp + ecx + 0x10) = 0;

loc_003AA8F5: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003AA8EC; /* jle: less or equal (signed <=) */

loc_003AA8FE: ;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x10);
    eax = esp;
    MEM32(ebp + 0x18) = esp;
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, 0x003AA91Eu); RECOMP_ABI_CALL(0x003AA823u, sub_003AA823); /* call 0x003AA823 */

loc_003AA91E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AA96C; /* je: equal / zero */

loc_003AA922: ;
    _fa = (uint32_t)(MEM8(ebp + 0x1C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x1C), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AA970; /* je: equal / zero */

loc_003AA928: ;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AA970; /* je: equal / zero */

loc_003AA92F: ;
    ecx = 0; /* xor self */
    eax = eax + 0x20;

loc_003AA934: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AA93E; /* je: equal / zero */

loc_003AA939: ;
    MEM8(ebp + ecx + 0x10) = 0;

loc_003AA93E: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003AA934; /* jle: less or equal (signed <=) */

loc_003AA947: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x10);
    eax = esp;
    MEM32(ebp + 0x18) = esp;
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, 0x003AA968u); RECOMP_ABI_CALL(0x003AA823u, sub_003AA823); /* call 0x003AA823 */

loc_003AA968: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003AA970; /* jne: not equal / not zero */

loc_003AA96C: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_003AA972;

loc_003AA970: ;
    SET_LO8(eax, 1);

loc_003AA972: ;
    ecx = MEM32(ebp + -12);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_003AA983
 * Original: 0x003AA983 - 0x003AA9FA (119 bytes, 42 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AA983(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AA983: ;
    eax = 0x355068;
    PUSH32(esp, 0x003AA98Du); RECOMP_ABI_CALL(0x0034DEC0u, sub_0034DEC0); /* call 0x0034DEC0 */

loc_003AA98D: ;
    esp = esp - 0x10;
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = ecx;
    edi = 0x431A80;
    PUSH32(esp, 0);
    ecx = ebp + -28;
    MEM32(ebp + -28) = edi;
    PUSH32(esp, 0x003AA9ABu); RECOMP_ABI_CALL(0x003A7E81u, sub_003A7E81); /* call 0x003A7E81 */

loc_003AA9AB: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    esi = 0; /* xor self */

loc_003AA9B1: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ebp + -20) = esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003AA9C5u); RECOMP_ABI_CALL(0x003A8D10u, sub_003A8D10); /* call 0x003A8D10 */

loc_003AA9C5: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = MEM32(ebp + -16);
    PUSH32(esp, 0x003AA9D0u); RECOMP_ABI_CALL(0x003AA823u, sub_003AA823); /* call 0x003AA823 */

loc_003AA9D0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ebp + esi + -24) = LO8(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003AA9B1; /* jle: less or equal (signed <=) */

loc_003AA9DF: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -24);
    MEM32(eax) = edi;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + -12);
    POP32(esp, edi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003AA9FA
 * Original: 0x003AA9FA - 0x003AABA4 (426 bytes, 157 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003AA9FA(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AA9FA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x10), 0 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_003AAA17; /* je: equal / zero */

loc_003AAA08: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AAA17; /* je: equal / zero */

loc_003AAA0F: ;
    MEM8(ebp + 0x14) = 1;
    esi = eax;
    goto loc_003AAA08;

loc_003AAA17: ;
    eax = MEM32(ebp + 8);
    ebx = MEM32(esi + eax * 4 + 0x20);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    edx = MEM32(ebp + 0xC);
    edi = MEM32(esi + edx * 4 + 0x20);
    if (CMP_EQ(_fa, _fb)) goto loc_003AAA4B; /* je: equal / zero */

loc_003AAA2A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AAA4B; /* je: equal / zero */

loc_003AAA2F: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x14), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AAA52; /* je: equal / zero */

loc_003AAA35: ;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AAA52; /* je: equal / zero */

loc_003AAA3C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AAA47u); RECOMP_ABI_CALL(0x003AA9FAu, sub_003AA9FA); /* call 0x003AA9FA */

loc_003AAA47: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003AAA52; /* jne: not equal / not zero */

loc_003AAA4B: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_003AAB9D;

loc_003AAA52: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    MEM8(ebp + 0x13) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_003AAA7F; /* jne: not equal / not zero */

loc_003AAA5A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AAA76; /* je: equal / zero */

loc_003AAA5E: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = edi;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AAA6Eu); RECOMP_ABI_CALL(0x003A8800u, sub_003A8800); /* call 0x003A8800 */

loc_003AAA6E: ;
    MEM8(ebp + 0x13) = LO8(eax);
    goto loc_003AAB16;

loc_003AAA76: ;
    MEM8(ebp + 0x13) = 1;
    goto loc_003AAB16;

loc_003AAA7F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_003AAAB0; /* jne: not equal / not zero */

loc_003AAA8D: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AAA94u); RECOMP_ABI_CALL(0x003A8800u, sub_003A8800); /* call 0x003A8800 */

loc_003AAA94: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(ebp + 0x13) = LO8(eax);
    if (TEST_Z(_fa, _fb)) goto loc_003AAB7C; /* je: equal / zero */

loc_003AAA9F: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + eax * 4 + 0x20) = ebx;
    eax = MEM32(ebp + 8);

loc_003AAAA9: ;
    MEM32(esi + eax * 4 + 0x20) = MEM32(esi + eax * 4 + 0x20) & 0;
    goto loc_003AAB16;

loc_003AAAB0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    ecx = edi;
    if (CMP_NE(_fa, _fb)) goto loc_003AAAD2; /* jne: not equal / not zero */

loc_003AAAB6: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AAABBu); RECOMP_ABI_CALL(0x003A8800u, sub_003A8800); /* call 0x003A8800 */

loc_003AAABB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(ebp + 0x13) = LO8(eax);
    if (TEST_Z(_fa, _fb)) goto loc_003AAB7C; /* je: equal / zero */

loc_003AAAC6: ;
    eax = MEM32(ebp + 8);
    MEM32(esi + eax * 4 + 0x20) = edi;
    eax = MEM32(ebp + 0xC);
    goto loc_003AAAA9;

loc_003AAAD2: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AAAD7u); RECOMP_ABI_CALL(0x003A8800u, sub_003A8800); /* call 0x003A8800 */

loc_003AAAD7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AAB7C; /* je: equal / zero */

loc_003AAADF: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ebx;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AAAEFu); RECOMP_ABI_CALL(0x003A8800u, sub_003A8800); /* call 0x003A8800 */

loc_003AAAEF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(ebp + 0x13) = LO8(eax);
    if (TEST_Z(_fa, _fb)) goto loc_003AAB06; /* je: equal / zero */

loc_003AAAF6: ;
    eax = MEM32(ebp + 8);
    MEM32(esi + eax * 4 + 0x20) = edi;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + eax * 4 + 0x20) = ebx;
    goto loc_003AAB16;

loc_003AAB06: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = edi;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AAB16u); RECOMP_ABI_CALL(0x003A8800u, sub_003A8800); /* call 0x003A8800 */

loc_003AAB16: ;
    _fa = (uint32_t)(MEM8(ebp + 0x13)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x13), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AAB7C; /* je: equal / zero */

loc_003AAB1C: ;
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    ecx = esi + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AAB28u); RECOMP_ABI_CALL(0x003A9ADAu, sub_003A9ADA); /* call 0x003A9ADA */

loc_003AAB28: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AAB9A; /* je: equal / zero */

loc_003AAB2E: ;
    PUSH32(esp, 4);
    POP32(esp, edi);

loc_003AAB31: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax + 4);
    eax = 0; /* xor self */

loc_003AAB39: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    edx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_003AAB43; /* je: equal / zero */

loc_003AAB3F: ;
    edx = MEM32(ecx + eax * 4 + 0x1C);

loc_003AAB43: ;
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AAB53; /* jne: not equal / not zero */

loc_003AAB4A: ;
    edx = MEM32(ebp + 0xC);
    MEM32(ecx + eax * 4 + 0x1C) = edx;
    goto loc_003AAB66;

loc_003AAB53: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    edx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_003AAB5D; /* je: equal / zero */

loc_003AAB59: ;
    edx = MEM32(ecx + eax * 4 + 0x1C);

loc_003AAB5D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AAB66; /* jne: not equal / not zero */

loc_003AAB62: ;
    MEM32(ecx + eax * 4 + 0x1C) = esi;

loc_003AAB66: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003AAB39; /* jle: less or equal (signed <=) */

loc_003AAB6C: ;
    ecx = ebp + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AAB74u); RECOMP_ABI_CALL(0x003A8B42u, sub_003A8B42); /* call 0x003A8B42 */

loc_003AAB74: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AAB31; /* jne: not equal / not zero */

loc_003AAB7A: ;
    goto loc_003AAB9A;

loc_003AAB7C: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x14), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AAB9A; /* je: equal / zero */

loc_003AAB82: ;
    esi = MEM32(esi + 0x34);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AAB9A; /* je: equal / zero */

loc_003AAB89: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AAB9Au); RECOMP_ABI_CALL(0x003AA9FAu, sub_003AA9FA); /* call 0x003AA9FA */

loc_003AAB9A: ;
    SET_LO8(eax, MEM8(ebp + 0x13));

loc_003AAB9D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003AABA4
 * Original: 0x003AABA4 - 0x003AAE13 (623 bytes, 213 insns)
 * Category: game_render
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AABA4(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AABA4: ;
    eax = 0x35508A;
    PUSH32(esp, 0x003AABAEu); RECOMP_ABI_CALL(0x0034DEC0u, sub_0034DEC0); /* call 0x0034DEC0 */

loc_003AABAE: ;
    esp = esp - 0x38;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 4);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AABCC; /* je: equal / zero */

loc_003AABC0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AABCC; /* je: equal / zero */

loc_003AABC5: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_003AAE00;

loc_003AABCC: ;
    PUSH32(esp, esi);
    ecx = ebp + 8;
    PUSH32(esp, 0x003AABD5u); RECOMP_ABI_CALL(0x003A8073u, sub_003A8073); /* call 0x003A8073 */

loc_003AABD5: ;
    ecx = ebp + -68;
    PUSH32(esp, 0x003AABDDu); RECOMP_ABI_CALL(0x003A7F8Eu, sub_003A7F8E); /* call 0x003A7F8E */

loc_003AABDD: ;
    goto loc_003AAC05;

loc_003AABDF: ;
    PUSH32(esp, 0x003AABE4u); RECOMP_ABI_CALL(0x003A7FF4u, sub_003A7FF4); /* call 0x003A7FF4 */

loc_003AABE4: ;
    PUSH32(esp, 4);
    ecx = ebp + 8;
    esi = eax;
    PUSH32(esp, 0x003AABF0u); RECOMP_ABI_CALL(0x003A80D0u, sub_003A80D0); /* call 0x003A80D0 */

loc_003AABF0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AABF9; /* jne: not equal / not zero */

loc_003AABF5: ;
    PUSH32(esp, eax);
    POP32(esp, ecx);
    goto loc_003AABFD;

loc_003AABF9: ;
    ecx = MEM32(ebp + eax * 4 + 0xC);

loc_003AABFD: ;
    MEM32(ebp + esi * 4 + -64) = ecx;
    MEM32(ebp + eax * 4 + 0xC) = esi;

loc_003AAC05: ;
    ecx = ebp + 8;
    PUSH32(esp, 0x003AAC0Du); RECOMP_ABI_CALL(0x003A80F1u, sub_003A80F1); /* call 0x003A80F1 */

loc_003AAC0D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    ecx = ebp + 8;
    if (TEST_Z(_fa, _fb)) goto loc_003AABDF; /* je: equal / zero */

loc_003AAC14: ;
    PUSH32(esp, edi);
    eax = ebp + -48;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003AAC1Eu); RECOMP_ABI_CALL(0x003A8112u, sub_003A8112); /* call 0x003A8112 */

loc_003AAC1E: ;
    MEM8(ebp + -4) = 2;
    goto loc_003AADEC;

loc_003AAC27: ;
    ecx = ebp + -48;
    PUSH32(esp, 0x003AAC2Fu); RECOMP_ABI_CALL(0x003A80AEu, sub_003A80AE); /* call 0x003A80AE */

loc_003AAC2F: ;
    edi = eax;
    PUSH32(esp, edi);
    ecx = ebp + -48;
    MEM32(ebp + -24) = edi;
    PUSH32(esp, 0x003AAC3Du); RECOMP_ABI_CALL(0x003A80D0u, sub_003A80D0); /* call 0x003A80D0 */

loc_003AAC3D: ;
    ecx = MEM32(ebx + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    esi = eax;
    MEM32(ebp + -20) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_003AAC59; /* je: equal / zero */

loc_003AAC49: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003AAC54u); RECOMP_ABI_CALL(0x003AA9FAu, sub_003AA9FA); /* call 0x003AA9FA */

loc_003AAC54: ;
    goto loc_003AADD8;

loc_003AAC59: ;
    edi = MEM32(ebx + edi * 4 + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    esi = MEM32(ebx + esi * 4 + 0x20);
    if (CMP_EQ(_fa, _fb)) goto loc_003AAE0F; /* je: equal / zero */

loc_003AAC6A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AAE0F; /* je: equal / zero */

loc_003AAC73: ;
    ecx = MEM32(ebx + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AAC91; /* je: equal / zero */

loc_003AAC7A: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, 0x003AAC89u); RECOMP_ABI_CALL(0x003AA9FAu, sub_003AA9FA); /* call 0x003AA9FA */

loc_003AAC89: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AAE0F; /* je: equal / zero */

loc_003AAC91: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    MEM8(ebp + -13) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_003AACBE; /* jne: not equal / not zero */

loc_003AAC99: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AACB5; /* je: equal / zero */

loc_003AAC9D: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -20));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003AACADu); RECOMP_ABI_CALL(0x003A8800u, sub_003A8800); /* call 0x003A8800 */

loc_003AACAD: ;
    MEM8(ebp + -13) = LO8(eax);
    goto loc_003AAD55;

loc_003AACB5: ;
    MEM8(ebp + -13) = 1;
    goto loc_003AAD55;

loc_003AACBE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_003AACEF; /* jne: not equal / not zero */

loc_003AACCC: ;
    ecx = edi;
    PUSH32(esp, 0x003AACD3u); RECOMP_ABI_CALL(0x003A8800u, sub_003A8800); /* call 0x003A8800 */

loc_003AACD3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(ebp + -13) = LO8(eax);
    if (TEST_Z(_fa, _fb)) goto loc_003AADB9; /* je: equal / zero */

loc_003AACDE: ;
    eax = MEM32(ebp + -20);
    MEM32(ebx + eax * 4 + 0x20) = edi;
    eax = MEM32(ebp + -24);

loc_003AACE8: ;
    MEM32(ebx + eax * 4 + 0x20) = MEM32(ebx + eax * 4 + 0x20) & 0;
    goto loc_003AAD55;

loc_003AACEF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_003AAD11; /* jne: not equal / not zero */

loc_003AACF5: ;
    PUSH32(esp, 0x003AACFAu); RECOMP_ABI_CALL(0x003A8800u, sub_003A8800); /* call 0x003A8800 */

loc_003AACFA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(ebp + -13) = LO8(eax);
    if (TEST_Z(_fa, _fb)) goto loc_003AADB9; /* je: equal / zero */

loc_003AAD05: ;
    eax = MEM32(ebp + -24);
    MEM32(ebx + eax * 4 + 0x20) = esi;
    eax = MEM32(ebp + -20);
    goto loc_003AACE8;

loc_003AAD11: ;
    PUSH32(esp, 0x003AAD16u); RECOMP_ABI_CALL(0x003A8800u, sub_003A8800); /* call 0x003A8800 */

loc_003AAD16: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AADB9; /* je: equal / zero */

loc_003AAD1E: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -20));
    ecx = edi;
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003AAD2Eu); RECOMP_ABI_CALL(0x003A8800u, sub_003A8800); /* call 0x003A8800 */

loc_003AAD2E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(ebp + -13) = LO8(eax);
    if (TEST_Z(_fa, _fb)) goto loc_003AAD45; /* je: equal / zero */

loc_003AAD35: ;
    eax = MEM32(ebp + -24);
    MEM32(ebx + eax * 4 + 0x20) = esi;
    eax = MEM32(ebp + -20);
    MEM32(ebx + eax * 4 + 0x20) = edi;
    goto loc_003AAD55;

loc_003AAD45: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -20));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003AAD55u); RECOMP_ABI_CALL(0x003A8800u, sub_003A8800); /* call 0x003A8800 */

loc_003AAD55: ;
    _fa = (uint32_t)(MEM8(ebp + -13)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -13), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AADB9; /* je: equal / zero */

loc_003AAD5B: ;
    eax = ebp + -28;
    PUSH32(esp, eax);
    ecx = ebx + 0x10;
    PUSH32(esp, 0x003AAD67u); RECOMP_ABI_CALL(0x003A9ADAu, sub_003A9ADA); /* call 0x003A9ADA */

loc_003AAD67: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AADCF; /* je: equal / zero */

loc_003AAD6D: ;
    edi = MEM32(ebp + -24);

loc_003AAD70: ;
    eax = MEM32(ebp + -28);
    ecx = MEM32(eax + 4);
    eax = 0; /* xor self */

loc_003AAD78: ;
    PUSH32(esp, 4);
    POP32(esp, edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    esi = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_003AAD85; /* je: equal / zero */

loc_003AAD81: ;
    esi = MEM32(ecx + eax * 4 + 0x1C);

loc_003AAD85: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AAD92; /* jne: not equal / not zero */

loc_003AAD89: ;
    edx = MEM32(ebp + -20);
    MEM32(ecx + eax * 4 + 0x1C) = edx;
    goto loc_003AADA3;

loc_003AAD92: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AAD9A; /* je: equal / zero */

loc_003AAD96: ;
    edx = MEM32(ecx + eax * 4 + 0x1C);

loc_003AAD9A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + -20) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AADA3; /* jne: not equal / not zero */

loc_003AAD9F: ;
    MEM32(ecx + eax * 4 + 0x1C) = edi;

loc_003AADA3: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003AAD78; /* jle: less or equal (signed <=) */

loc_003AADA9: ;
    ecx = ebp + -28;
    PUSH32(esp, 0x003AADB1u); RECOMP_ABI_CALL(0x003A8B42u, sub_003A8B42); /* call 0x003A8B42 */

loc_003AADB1: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AAD70; /* jne: not equal / not zero */

loc_003AADB7: ;
    goto loc_003AADCF;

loc_003AADB9: ;
    ecx = MEM32(ebx + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AADCF; /* je: equal / zero */

loc_003AADC0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, 0x003AADCFu); RECOMP_ABI_CALL(0x003AA9FAu, sub_003AA9FA); /* call 0x003AA9FA */

loc_003AADCF: ;
    SET_LO8(eax, MEM8(ebp + -13));
    edi = MEM32(ebp + -24);
    esi = MEM32(ebp + -20);

loc_003AADD8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AAE0F; /* je: equal / zero */

loc_003AADDC: ;
    ecx = ebp + esi * 4 + -44;
    esi = MEM32(ecx);
    eax = ebp + edi * 4 + -44;
    edx = MEM32(eax);
    MEM32(eax) = esi;
    MEM32(ecx) = edx;

loc_003AADEC: ;
    ecx = ebp + -48;
    PUSH32(esp, 0x003AADF4u); RECOMP_ABI_CALL(0x003A8D90u, sub_003A8D90); /* call 0x003A8D90 */

loc_003AADF4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AAC27; /* je: equal / zero */

loc_003AADFC: ;
    SET_LO8(eax, 1);

loc_003AADFE: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003AAE00: ;
    ecx = MEM32(ebp + -12);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

loc_003AAE0F: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_003AADFE;

}

/**
 * sub_003AAE13
 * Original: 0x003AAE13 - 0x003AAE96 (131 bytes, 54 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AAE13(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AAE13: ;
    eax = 0x35509C;
    PUSH32(esp, 0x003AAE1Du); RECOMP_ABI_CALL(0x0034DEC0u, sub_0034DEC0); /* call 0x0034DEC0 */

loc_003AAE1D: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = ecx;
    edi = 0; /* xor self */
    MEM32(ebp + -4) = edi;

loc_003AAE29: ;
    _fa = (uint32_t)(MEM8(ebp + edi + 0xC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + edi + 0xC), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AAE79; /* je: equal / zero */

loc_003AAE30: ;
    ecx = MEM32(ebp + -16);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003AAE39u); RECOMP_ABI_CALL(0x003A81C1u, sub_003A81C1); /* call 0x003A81C1 */

loc_003AAE39: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AAE79; /* je: equal / zero */

loc_003AAE3D: ;
    SET_LO8(ebx, 0); /* xor self */
    esi = 0; /* xor self */

loc_003AAE41: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003AAE75; /* jg: greater (signed >) */

loc_003AAE46: ;
    _fa = (uint32_t)(MEM8(ebp + esi + 0xC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + esi + 0xC), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AAE70; /* jne: not equal / not zero */

loc_003AAE4D: ;
    ecx = MEM32(ebp + -16);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003AAE56u); RECOMP_ABI_CALL(0x003A81C1u, sub_003A81C1); /* call 0x003A81C1 */

loc_003AAE56: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003AAE70; /* jne: not equal / not zero */

loc_003AAE5A: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = MEM32(ebp + -16);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003AAE6Au); RECOMP_ABI_CALL(0x003AA9FAu, sub_003AA9FA); /* call 0x003AA9FA */

loc_003AAE6A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AAE70; /* je: equal / zero */

loc_003AAE6E: ;
    SET_LO8(ebx, 1);

loc_003AAE70: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AAE41; /* je: equal / zero */

loc_003AAE75: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AAE92; /* je: equal / zero */

loc_003AAE79: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003AAE29; /* jle: less or equal (signed <=) */

loc_003AAE7F: ;
    SET_LO8(eax, 1);

loc_003AAE81: ;
    ecx = MEM32(ebp + -12);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

loc_003AAE92: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_003AAE81;

}

/**
 * sub_003AAE96
 * Original: 0x003AAE96 - 0x003AAEB5 (31 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AAE96(void)
{

loc_003AAE96: ;
    eax = ecx;
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    MEM32(eax + 0x10) = 0x431A88;
    MEM32(eax) = 0x431AF0;
    MEM32(eax + 0x10) = 0x431AEC;
    esp += 4; return; /* ret */

}

/**
 * sub_003AAEB5
 * Original: 0x003AAEB5 - 0x003AAEC0 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AAEB5(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AAEB5: ;
    MEM32(ecx) = 0x431AC8;
    g_seh_ebp = ebp; sub_003A9B5F(); return; /* tail jmp 0x003A9B5F */

}

/**
 * sub_003AAEC0
 * Original: 0x003AAEC0 - 0x003AAEE4 (36 bytes, 13 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AAEC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AAEC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003AAEC8u); RECOMP_ABI_CALL(0x003AAEB5u, sub_003AAEB5); /* call 0x003AAEB5 */

loc_003AAEC8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AAEDE; /* je: equal / zero */

loc_003AAECF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AAEDE; /* je: equal / zero */

loc_003AAED3: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003AAEDEu); RECOMP_ABI_CALL(0x001A1E7Bu, sub_001A1E7B); /* call 0x001A1E7B */

loc_003AAEDE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003AAEE4
 * Original: 0x003AAEE4 - 0x003AAF40 (92 bytes, 41 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003AAEE4(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AAEE4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    MEM32(ebx) = MEM32(ebx) & 0;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + 8) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003AAF30; /* je: equal / zero */

loc_003AAEFE: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    goto loc_003AAF05;

loc_003AAF02: ;
    eax = MEM32(ebp + 8);

loc_003AAF05: ;
    ecx = ebp + -16;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AAF11u); RECOMP_ABI_CALL(0x003A92B3u, sub_003A92B3); /* call 0x003A92B3 */

loc_003AAF11: ;
    ecx = MEM32(ebx);
    ecx = ecx + ecx * 2;
    esi = eax;
    eax = MEM32(ebp + 8);
    edi = ebx + ecx * 4 + 4;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(ebx) = MEM32(ebx) + 1;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(ebp + 8) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_003AAF02; /* jne: not equal / not zero */

loc_003AAF2E: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003AAF30: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AAF39u); RECOMP_ABI_CALL(0x003A89D6u, sub_003A89D6); /* call 0x003A89D6 */

loc_003AAF39: ;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003AAF40
 * Original: 0x003AAF40 - 0x003AAF68 (40 bytes, 17 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003AAF40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_003AAF40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + 8;
    PUSH32(esp, eax);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AAF52u); RECOMP_ABI_CALL(0x003AAF68u, sub_003AAF68); /* call 0x003AAF68 */

loc_003AAF52: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0xC);
    MEM32(ebp + 8) = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AAF63u); RECOMP_ABI_CALL(0x003A8B10u, sub_003A8B10); /* call 0x003A8B10 */

loc_003AAF63: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003AAF68
 * Original: 0x003AAF68 - 0x003AAF86 (30 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AAF68(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AAF68: ;
    ecx = MEM32(ecx + 4);
    goto loc_003AAF79;

loc_003AAF6D: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AAF7D; /* je: equal / zero */

loc_003AAF76: ;
    ecx = MEM32(ecx + 0xC);

loc_003AAF79: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003AAF6D; /* jne: not equal / not zero */

loc_003AAF7D: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003AAF86
 * Original: 0x003AAF86 - 0x003AB04B (197 bytes, 76 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AAF86(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AAF86: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AAF96; /* je: equal / zero */

loc_003AAF91: ;
    edx = MEM32(edi + 0x14);
    goto loc_003AAF98;

loc_003AAF96: ;
    edx = 0; /* xor self */

loc_003AAF98: ;
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AAFA5; /* je: equal / zero */

loc_003AAFA0: ;
    eax = MEM32(esi + 0x14);
    goto loc_003AAFA7;

loc_003AAFA5: ;
    eax = 0; /* xor self */

loc_003AAFA7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    ebx = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_003AAFB4; /* jne: not equal / not zero */

loc_003AAFB2: ;
    ebx = esi;

loc_003AAFB4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003AAFBF; /* jne: not equal / not zero */

loc_003AAFB8: ;
    eax = 0; /* xor self */
    goto loc_003AB045;

loc_003AAFBF: ;
    MEM32(ebx + 8) = MEM32(ebx + 8) & 0;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AAFF9; /* je: equal / zero */

loc_003AAFC7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AB033; /* je: equal / zero */

loc_003AAFCB: ;
    PUSH32(esp, MEM32(edi + 0xC));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, 0x003AAFD7u); RECOMP_ABI_CALL(0x003AAF86u, sub_003AAF86); /* call 0x003AAF86 */

loc_003AAFD7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0x10) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003AAFE1; /* je: equal / zero */

loc_003AAFDE: ;
    MEM32(eax + 8) = esi;

loc_003AAFE1: ;
    MEM32(edi + 0xC) = esi;
    ecx = edi;
    MEM32(esi + 8) = edi;
    PUSH32(esp, 0x003AAFEEu); RECOMP_ABI_CALL(0x003A9EBFu, sub_003A9EBF); /* call 0x003A9EBF */

loc_003AAFEE: ;
    ecx = esi;
    PUSH32(esp, 0x003AAFF5u); RECOMP_ABI_CALL(0x003A9EBFu, sub_003A9EBF); /* call 0x003A9EBF */

loc_003AAFF5: ;
    ecx = esi;
    goto loc_003AB029;

loc_003AAFF9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AB033; /* je: equal / zero */

loc_003AAFFD: ;
    PUSH32(esp, MEM32(edi + 0xC));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, edi);
    PUSH32(esp, 0x003AB009u); RECOMP_ABI_CALL(0x003AAF86u, sub_003AAF86); /* call 0x003AAF86 */

loc_003AB009: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(edi + 0xC) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003AB013; /* je: equal / zero */

loc_003AB010: ;
    MEM32(eax + 8) = edi;

loc_003AB013: ;
    MEM32(esi + 0x10) = edi;
    ecx = esi;
    MEM32(edi + 8) = esi;
    PUSH32(esp, 0x003AB020u); RECOMP_ABI_CALL(0x003A9EBFu, sub_003A9EBF); /* call 0x003A9EBF */

loc_003AB020: ;
    ecx = edi;
    PUSH32(esp, 0x003AB027u); RECOMP_ABI_CALL(0x003A9EBFu, sub_003A9EBF); /* call 0x003A9EBF */

loc_003AB027: ;
    ecx = edi;

loc_003AB029: ;
    PUSH32(esp, 0x003AB02Eu); RECOMP_ABI_CALL(0x003AA523u, sub_003AA523); /* call 0x003AA523 */

loc_003AB02E: ;
    goto loc_003AB033;

loc_003AB030: ;
    ebx = MEM32(ebx + 8);

loc_003AB033: ;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AB030; /* jne: not equal / not zero */

loc_003AB039: ;
    ecx = ebx;
    PUSH32(esp, 0x003AB040u); RECOMP_ABI_CALL(0x003A9EE0u, sub_003A9EE0); /* call 0x003A9EE0 */

loc_003AB040: ;
    MEM32(ebx + 0x14) = eax;
    eax = ebx;

loc_003AB045: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003AB04B
 * Original: 0x003AB04B - 0x003AB110 (197 bytes, 76 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AB04B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AB04B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AB05B; /* je: equal / zero */

loc_003AB056: ;
    edx = MEM32(edi + 0x14);
    goto loc_003AB05D;

loc_003AB05B: ;
    edx = 0; /* xor self */

loc_003AB05D: ;
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AB06A; /* je: equal / zero */

loc_003AB065: ;
    eax = MEM32(esi + 0x14);
    goto loc_003AB06C;

loc_003AB06A: ;
    eax = 0; /* xor self */

loc_003AB06C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    ebx = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_003AB079; /* jne: not equal / not zero */

loc_003AB077: ;
    ebx = esi;

loc_003AB079: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003AB084; /* jne: not equal / not zero */

loc_003AB07D: ;
    eax = 0; /* xor self */
    goto loc_003AB10A;

loc_003AB084: ;
    MEM32(ebx + 8) = MEM32(ebx + 8) & 0;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AB0BE; /* je: equal / zero */

loc_003AB08C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AB0F8; /* je: equal / zero */

loc_003AB090: ;
    PUSH32(esp, MEM32(edi + 0xC));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, 0x003AB09Cu); RECOMP_ABI_CALL(0x003AB04Bu, sub_003AB04B); /* call 0x003AB04B */

loc_003AB09C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0x10) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003AB0A6; /* je: equal / zero */

loc_003AB0A3: ;
    MEM32(eax + 8) = esi;

loc_003AB0A6: ;
    MEM32(edi + 0xC) = esi;
    ecx = edi;
    MEM32(esi + 8) = edi;
    PUSH32(esp, 0x003AB0B3u); RECOMP_ABI_CALL(0x003A9EBFu, sub_003A9EBF); /* call 0x003A9EBF */

loc_003AB0B3: ;
    ecx = esi;
    PUSH32(esp, 0x003AB0BAu); RECOMP_ABI_CALL(0x003A9EBFu, sub_003A9EBF); /* call 0x003A9EBF */

loc_003AB0BA: ;
    ecx = esi;
    goto loc_003AB0EE;

loc_003AB0BE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AB0F8; /* je: equal / zero */

loc_003AB0C2: ;
    PUSH32(esp, MEM32(edi + 0xC));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, edi);
    PUSH32(esp, 0x003AB0CEu); RECOMP_ABI_CALL(0x003AB04Bu, sub_003AB04B); /* call 0x003AB04B */

loc_003AB0CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(edi + 0xC) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003AB0D8; /* je: equal / zero */

loc_003AB0D5: ;
    MEM32(eax + 8) = edi;

loc_003AB0D8: ;
    MEM32(esi + 0x10) = edi;
    ecx = esi;
    MEM32(edi + 8) = esi;
    PUSH32(esp, 0x003AB0E5u); RECOMP_ABI_CALL(0x003A9EBFu, sub_003A9EBF); /* call 0x003A9EBF */

loc_003AB0E5: ;
    ecx = edi;
    PUSH32(esp, 0x003AB0ECu); RECOMP_ABI_CALL(0x003A9EBFu, sub_003A9EBF); /* call 0x003A9EBF */

loc_003AB0EC: ;
    ecx = edi;

loc_003AB0EE: ;
    PUSH32(esp, 0x003AB0F3u); RECOMP_ABI_CALL(0x003AA523u, sub_003AA523); /* call 0x003AA523 */

loc_003AB0F3: ;
    goto loc_003AB0F8;

loc_003AB0F5: ;
    ebx = MEM32(ebx + 8);

loc_003AB0F8: ;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AB0F5; /* jne: not equal / not zero */

loc_003AB0FE: ;
    ecx = ebx;
    PUSH32(esp, 0x003AB105u); RECOMP_ABI_CALL(0x003A9EE0u, sub_003A9EE0); /* call 0x003A9EE0 */

loc_003AB105: ;
    MEM32(ebx + 0x14) = eax;
    eax = ebx;

loc_003AB10A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003AB110
 * Original: 0x003AB110 - 0x003AB1D5 (197 bytes, 76 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AB110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AB110: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AB120; /* je: equal / zero */

loc_003AB11B: ;
    edx = MEM32(edi + 0x14);
    goto loc_003AB122;

loc_003AB120: ;
    edx = 0; /* xor self */

loc_003AB122: ;
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AB12F; /* je: equal / zero */

loc_003AB12A: ;
    eax = MEM32(esi + 0x14);
    goto loc_003AB131;

loc_003AB12F: ;
    eax = 0; /* xor self */

loc_003AB131: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    ebx = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_003AB13E; /* jne: not equal / not zero */

loc_003AB13C: ;
    ebx = esi;

loc_003AB13E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003AB149; /* jne: not equal / not zero */

loc_003AB142: ;
    eax = 0; /* xor self */
    goto loc_003AB1CF;

loc_003AB149: ;
    MEM32(ebx + 8) = MEM32(ebx + 8) & 0;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AB183; /* je: equal / zero */

loc_003AB151: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AB1BD; /* je: equal / zero */

loc_003AB155: ;
    PUSH32(esp, MEM32(edi + 0xC));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, 0x003AB161u); RECOMP_ABI_CALL(0x003AB110u, sub_003AB110); /* call 0x003AB110 */

loc_003AB161: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0x10) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003AB16B; /* je: equal / zero */

loc_003AB168: ;
    MEM32(eax + 8) = esi;

loc_003AB16B: ;
    MEM32(edi + 0xC) = esi;
    ecx = edi;
    MEM32(esi + 8) = edi;
    PUSH32(esp, 0x003AB178u); RECOMP_ABI_CALL(0x003A9EBFu, sub_003A9EBF); /* call 0x003A9EBF */

loc_003AB178: ;
    ecx = esi;
    PUSH32(esp, 0x003AB17Fu); RECOMP_ABI_CALL(0x003A9EBFu, sub_003A9EBF); /* call 0x003A9EBF */

loc_003AB17F: ;
    ecx = esi;
    goto loc_003AB1B3;

loc_003AB183: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AB1BD; /* je: equal / zero */

loc_003AB187: ;
    PUSH32(esp, MEM32(edi + 0xC));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, edi);
    PUSH32(esp, 0x003AB193u); RECOMP_ABI_CALL(0x003AB110u, sub_003AB110); /* call 0x003AB110 */

loc_003AB193: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(edi + 0xC) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003AB19D; /* je: equal / zero */

loc_003AB19A: ;
    MEM32(eax + 8) = edi;

loc_003AB19D: ;
    MEM32(esi + 0x10) = edi;
    ecx = esi;
    MEM32(edi + 8) = esi;
    PUSH32(esp, 0x003AB1AAu); RECOMP_ABI_CALL(0x003A9EBFu, sub_003A9EBF); /* call 0x003A9EBF */

loc_003AB1AA: ;
    ecx = edi;
    PUSH32(esp, 0x003AB1B1u); RECOMP_ABI_CALL(0x003A9EBFu, sub_003A9EBF); /* call 0x003A9EBF */

loc_003AB1B1: ;
    ecx = edi;

loc_003AB1B3: ;
    PUSH32(esp, 0x003AB1B8u); RECOMP_ABI_CALL(0x003AA523u, sub_003AA523); /* call 0x003AA523 */

loc_003AB1B8: ;
    goto loc_003AB1BD;

loc_003AB1BA: ;
    ebx = MEM32(ebx + 8);

loc_003AB1BD: ;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AB1BA; /* jne: not equal / not zero */

loc_003AB1C3: ;
    ecx = ebx;
    PUSH32(esp, 0x003AB1CAu); RECOMP_ABI_CALL(0x003A9EE0u, sub_003A9EE0); /* call 0x003A9EE0 */

loc_003AB1CA: ;
    MEM32(ebx + 0x14) = eax;
    eax = ebx;

loc_003AB1CF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003AB1D5
 * Original: 0x003AB1D5 - 0x003AB29A (197 bytes, 76 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AB1D5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AB1D5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AB1E5; /* je: equal / zero */

loc_003AB1E0: ;
    edx = MEM32(edi + 0x14);
    goto loc_003AB1E7;

loc_003AB1E5: ;
    edx = 0; /* xor self */

loc_003AB1E7: ;
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AB1F4; /* je: equal / zero */

loc_003AB1EF: ;
    eax = MEM32(esi + 0x14);
    goto loc_003AB1F6;

loc_003AB1F4: ;
    eax = 0; /* xor self */

loc_003AB1F6: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    ebx = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_003AB203; /* jne: not equal / not zero */

loc_003AB201: ;
    ebx = esi;

loc_003AB203: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003AB20E; /* jne: not equal / not zero */

loc_003AB207: ;
    eax = 0; /* xor self */
    goto loc_003AB294;

loc_003AB20E: ;
    MEM32(ebx + 8) = MEM32(ebx + 8) & 0;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AB248; /* je: equal / zero */

loc_003AB216: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AB282; /* je: equal / zero */

loc_003AB21A: ;
    PUSH32(esp, MEM32(edi + 0xC));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, 0x003AB226u); RECOMP_ABI_CALL(0x003AB1D5u, sub_003AB1D5); /* call 0x003AB1D5 */

loc_003AB226: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0x10) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003AB230; /* je: equal / zero */

loc_003AB22D: ;
    MEM32(eax + 8) = esi;

loc_003AB230: ;
    MEM32(edi + 0xC) = esi;
    ecx = edi;
    MEM32(esi + 8) = edi;
    PUSH32(esp, 0x003AB23Du); RECOMP_ABI_CALL(0x003A9EBFu, sub_003A9EBF); /* call 0x003A9EBF */

loc_003AB23D: ;
    ecx = esi;
    PUSH32(esp, 0x003AB244u); RECOMP_ABI_CALL(0x003A9EBFu, sub_003A9EBF); /* call 0x003A9EBF */

loc_003AB244: ;
    ecx = esi;
    goto loc_003AB278;

loc_003AB248: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AB282; /* je: equal / zero */

loc_003AB24C: ;
    PUSH32(esp, MEM32(edi + 0xC));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, edi);
    PUSH32(esp, 0x003AB258u); RECOMP_ABI_CALL(0x003AB1D5u, sub_003AB1D5); /* call 0x003AB1D5 */

loc_003AB258: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(edi + 0xC) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003AB262; /* je: equal / zero */

loc_003AB25F: ;
    MEM32(eax + 8) = edi;

loc_003AB262: ;
    MEM32(esi + 0x10) = edi;
    ecx = esi;
    MEM32(edi + 8) = esi;
    PUSH32(esp, 0x003AB26Fu); RECOMP_ABI_CALL(0x003A9EBFu, sub_003A9EBF); /* call 0x003A9EBF */

loc_003AB26F: ;
    ecx = edi;
    PUSH32(esp, 0x003AB276u); RECOMP_ABI_CALL(0x003A9EBFu, sub_003A9EBF); /* call 0x003A9EBF */

loc_003AB276: ;
    ecx = edi;

loc_003AB278: ;
    PUSH32(esp, 0x003AB27Du); RECOMP_ABI_CALL(0x003AA523u, sub_003AA523); /* call 0x003AA523 */

loc_003AB27D: ;
    goto loc_003AB282;

loc_003AB27F: ;
    ebx = MEM32(ebx + 8);

loc_003AB282: ;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AB27F; /* jne: not equal / not zero */

loc_003AB288: ;
    ecx = ebx;
    PUSH32(esp, 0x003AB28Fu); RECOMP_ABI_CALL(0x003A9EE0u, sub_003A9EE0); /* call 0x003A9EE0 */

loc_003AB28F: ;
    MEM32(ebx + 0x14) = eax;
    eax = ebx;

loc_003AB294: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003AB29A
 * Original: 0x003AB29A - 0x003AB35F (197 bytes, 76 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AB29A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AB29A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AB2AA; /* je: equal / zero */

loc_003AB2A5: ;
    edx = MEM32(edi + 0x14);
    goto loc_003AB2AC;

loc_003AB2AA: ;
    edx = 0; /* xor self */

loc_003AB2AC: ;
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AB2B9; /* je: equal / zero */

loc_003AB2B4: ;
    eax = MEM32(esi + 0x14);
    goto loc_003AB2BB;

loc_003AB2B9: ;
    eax = 0; /* xor self */

loc_003AB2BB: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    ebx = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_003AB2C8; /* jne: not equal / not zero */

loc_003AB2C6: ;
    ebx = esi;

loc_003AB2C8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003AB2D3; /* jne: not equal / not zero */

loc_003AB2CC: ;
    eax = 0; /* xor self */
    goto loc_003AB359;

loc_003AB2D3: ;
    MEM32(ebx + 8) = MEM32(ebx + 8) & 0;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AB30D; /* je: equal / zero */

loc_003AB2DB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AB347; /* je: equal / zero */

loc_003AB2DF: ;
    PUSH32(esp, MEM32(edi + 0xC));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, 0x003AB2EBu); RECOMP_ABI_CALL(0x003AB29Au, sub_003AB29A); /* call 0x003AB29A */

loc_003AB2EB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0x10) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003AB2F5; /* je: equal / zero */

loc_003AB2F2: ;
    MEM32(eax + 8) = esi;

loc_003AB2F5: ;
    MEM32(edi + 0xC) = esi;
    ecx = edi;
    MEM32(esi + 8) = edi;
    PUSH32(esp, 0x003AB302u); RECOMP_ABI_CALL(0x003A9EBFu, sub_003A9EBF); /* call 0x003A9EBF */

loc_003AB302: ;
    ecx = esi;
    PUSH32(esp, 0x003AB309u); RECOMP_ABI_CALL(0x003A9EBFu, sub_003A9EBF); /* call 0x003A9EBF */

loc_003AB309: ;
    ecx = esi;
    goto loc_003AB33D;

loc_003AB30D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AB347; /* je: equal / zero */

loc_003AB311: ;
    PUSH32(esp, MEM32(edi + 0xC));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, edi);
    PUSH32(esp, 0x003AB31Du); RECOMP_ABI_CALL(0x003AB29Au, sub_003AB29A); /* call 0x003AB29A */

loc_003AB31D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(edi + 0xC) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003AB327; /* je: equal / zero */

loc_003AB324: ;
    MEM32(eax + 8) = edi;

loc_003AB327: ;
    MEM32(esi + 0x10) = edi;
    ecx = esi;
    MEM32(edi + 8) = esi;
    PUSH32(esp, 0x003AB334u); RECOMP_ABI_CALL(0x003A9EBFu, sub_003A9EBF); /* call 0x003A9EBF */

loc_003AB334: ;
    ecx = edi;
    PUSH32(esp, 0x003AB33Bu); RECOMP_ABI_CALL(0x003A9EBFu, sub_003A9EBF); /* call 0x003A9EBF */

loc_003AB33B: ;
    ecx = edi;

loc_003AB33D: ;
    PUSH32(esp, 0x003AB342u); RECOMP_ABI_CALL(0x003AA523u, sub_003AA523); /* call 0x003AA523 */

loc_003AB342: ;
    goto loc_003AB347;

loc_003AB344: ;
    ebx = MEM32(ebx + 8);

loc_003AB347: ;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AB344; /* jne: not equal / not zero */

loc_003AB34D: ;
    ecx = ebx;
    PUSH32(esp, 0x003AB354u); RECOMP_ABI_CALL(0x003A9EE0u, sub_003A9EE0); /* call 0x003A9EE0 */

loc_003AB354: ;
    MEM32(ebx + 0x14) = eax;
    eax = ebx;

loc_003AB359: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003AB35F
 * Original: 0x003AB35F - 0x003AB38C (45 bytes, 16 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AB35F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AB35F: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x003AB36Bu); RECOMP_ABI_CALL(0x003A9F50u, sub_003A9F50); /* call 0x003A9F50 */

loc_003AB36B: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x003AB374u); RECOMP_ABI_CALL(0x003AA5D9u, sub_003AA5D9); /* call 0x003AA5D9 */

loc_003AB374: ;
    eax = esi + 8;
    POP32(esp, esi);
    goto loc_003AB381;

loc_003AB37A: ;
    ecx = MEM32(eax);
    ecx = MEM32(ecx + 0xC);
    MEM32(eax) = ecx;

loc_003AB381: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AB37A; /* jne: not equal / not zero */

loc_003AB389: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003AB38C
 * Original: 0x003AB38C - 0x003AB451 (197 bytes, 76 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AB38C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AB38C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AB39C; /* je: equal / zero */

loc_003AB397: ;
    edx = MEM32(edi + 0x18);
    goto loc_003AB39E;

loc_003AB39C: ;
    edx = 0; /* xor self */

loc_003AB39E: ;
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AB3AB; /* je: equal / zero */

loc_003AB3A6: ;
    eax = MEM32(esi + 0x18);
    goto loc_003AB3AD;

loc_003AB3AB: ;
    eax = 0; /* xor self */

loc_003AB3AD: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    ebx = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_003AB3BA; /* jne: not equal / not zero */

loc_003AB3B8: ;
    ebx = esi;

loc_003AB3BA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003AB3C5; /* jne: not equal / not zero */

loc_003AB3BE: ;
    eax = 0; /* xor self */
    goto loc_003AB44B;

loc_003AB3C5: ;
    MEM32(ebx + 0xC) = MEM32(ebx + 0xC) & 0;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AB3FF; /* je: equal / zero */

loc_003AB3CD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AB439; /* je: equal / zero */

loc_003AB3D1: ;
    PUSH32(esp, MEM32(edi + 0x10));
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, esi);
    PUSH32(esp, 0x003AB3DDu); RECOMP_ABI_CALL(0x003AB38Cu, sub_003AB38C); /* call 0x003AB38C */

loc_003AB3DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0x14) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003AB3E7; /* je: equal / zero */

loc_003AB3E4: ;
    MEM32(eax + 0xC) = esi;

loc_003AB3E7: ;
    MEM32(edi + 0x10) = esi;
    ecx = edi;
    MEM32(esi + 0xC) = edi;
    PUSH32(esp, 0x003AB3F4u); RECOMP_ABI_CALL(0x003A9F50u, sub_003A9F50); /* call 0x003A9F50 */

loc_003AB3F4: ;
    ecx = esi;
    PUSH32(esp, 0x003AB3FBu); RECOMP_ABI_CALL(0x003A9F50u, sub_003A9F50); /* call 0x003A9F50 */

loc_003AB3FB: ;
    ecx = esi;
    goto loc_003AB42F;

loc_003AB3FF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AB439; /* je: equal / zero */

loc_003AB403: ;
    PUSH32(esp, MEM32(edi + 0x10));
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, edi);
    PUSH32(esp, 0x003AB40Fu); RECOMP_ABI_CALL(0x003AB38Cu, sub_003AB38C); /* call 0x003AB38C */

loc_003AB40F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(edi + 0x10) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003AB419; /* je: equal / zero */

loc_003AB416: ;
    MEM32(eax + 0xC) = edi;

loc_003AB419: ;
    MEM32(esi + 0x14) = edi;
    ecx = esi;
    MEM32(edi + 0xC) = esi;
    PUSH32(esp, 0x003AB426u); RECOMP_ABI_CALL(0x003A9F50u, sub_003A9F50); /* call 0x003A9F50 */

loc_003AB426: ;
    ecx = edi;
    PUSH32(esp, 0x003AB42Du); RECOMP_ABI_CALL(0x003A9F50u, sub_003A9F50); /* call 0x003A9F50 */

loc_003AB42D: ;
    ecx = edi;

loc_003AB42F: ;
    PUSH32(esp, 0x003AB434u); RECOMP_ABI_CALL(0x003AA5D9u, sub_003AA5D9); /* call 0x003AA5D9 */

loc_003AB434: ;
    goto loc_003AB439;

loc_003AB436: ;
    ebx = MEM32(ebx + 0xC);

loc_003AB439: ;
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AB436; /* jne: not equal / not zero */

loc_003AB43F: ;
    ecx = ebx;
    PUSH32(esp, 0x003AB446u); RECOMP_ABI_CALL(0x003A9F18u, sub_003A9F18); /* call 0x003A9F18 */

loc_003AB446: ;
    MEM32(ebx + 0x18) = eax;
    eax = ebx;

loc_003AB44B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003AB451
 * Original: 0x003AB451 - 0x003AB4EB (154 bytes, 67 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003AB451(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AB451: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_003AB461; /* jne: not equal / not zero */

loc_003AB460: ;
    /* int3: debug-trap slide byte, stepped over */

loc_003AB461: ;
    eax = MEM32(esi + 4);
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003AB4A4; /* jle: less or equal (signed <=) */

loc_003AB46B: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003AB4AD; /* jne: not equal / not zero */

loc_003AB472: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x1C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AB47Eu); RECOMP_ABI_CALL(0x001A1DDBu, sub_001A1DDB); /* call 0x001A1DDB */

loc_003AB47E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AB490; /* je: equal / zero */

loc_003AB482: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = eax;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AB48Eu); RECOMP_ABI_CALL(0x003A9E6Fu, sub_003A9E6F); /* call 0x003A9E6F */

loc_003AB48E: ;
    goto loc_003AB492;

loc_003AB490: ;
    eax = 0; /* xor self */

loc_003AB492: ;
    MEM32(esi + 0x10) = eax;

loc_003AB495: ;
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003AB498: ;
    PUSH32(esp, esi);
    ecx = edi;
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AB4A2u); RECOMP_ABI_CALL(0x003AB35Fu, sub_003AB35F); /* call 0x003AB35F */

loc_003AB4A2: ;
    goto loc_003AB4E2;

loc_003AB4A4: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003AB4E0; /* jge: greater or equal (signed >=) */

loc_003AB4A6: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AB4BB; /* je: equal / zero */

loc_003AB4AD: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = edi;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AB4B9u); RECOMP_ABI_CALL(0x003AB451u, sub_003AB451); /* call 0x003AB451 */

loc_003AB4B9: ;
    goto loc_003AB498;

loc_003AB4BB: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x1C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AB4C7u); RECOMP_ABI_CALL(0x001A1DDBu, sub_001A1DDB); /* call 0x001A1DDB */

loc_003AB4C7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AB4D9; /* je: equal / zero */

loc_003AB4CB: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = eax;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AB4D7u); RECOMP_ABI_CALL(0x003A9E6Fu, sub_003A9E6F); /* call 0x003A9E6F */

loc_003AB4D7: ;
    goto loc_003AB4DB;

loc_003AB4D9: ;
    eax = 0; /* xor self */

loc_003AB4DB: ;
    MEM32(esi + 0x14) = eax;
    goto loc_003AB495;

loc_003AB4E0: ;
    ebx = esi;

loc_003AB4E2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003AB4EB
 * Original: 0x003AB4EB - 0x003AB518 (45 bytes, 16 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AB4EB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AB4EB: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x003AB4F7u); RECOMP_ABI_CALL(0x003A9EBFu, sub_003A9EBF); /* call 0x003A9EBF */

loc_003AB4F7: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x003AB500u); RECOMP_ABI_CALL(0x003AA523u, sub_003AA523); /* call 0x003AA523 */

loc_003AB500: ;
    eax = esi + 8;
    POP32(esp, esi);
    goto loc_003AB50D;

loc_003AB506: ;
    ecx = MEM32(eax);
    ecx = MEM32(ecx + 8);
    MEM32(eax) = ecx;

loc_003AB50D: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AB506; /* jne: not equal / not zero */

loc_003AB515: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003AB518
 * Original: 0x003AB518 - 0x003AB5DD (197 bytes, 76 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AB518(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AB518: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AB528; /* je: equal / zero */

loc_003AB523: ;
    edx = MEM32(edi + 0x14);
    goto loc_003AB52A;

loc_003AB528: ;
    edx = 0; /* xor self */

loc_003AB52A: ;
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AB537; /* je: equal / zero */

loc_003AB532: ;
    eax = MEM32(esi + 0x14);
    goto loc_003AB539;

loc_003AB537: ;
    eax = 0; /* xor self */

loc_003AB539: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    ebx = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_003AB546; /* jne: not equal / not zero */

loc_003AB544: ;
    ebx = esi;

loc_003AB546: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003AB551; /* jne: not equal / not zero */

loc_003AB54A: ;
    eax = 0; /* xor self */
    goto loc_003AB5D7;

loc_003AB551: ;
    MEM32(ebx + 8) = MEM32(ebx + 8) & 0;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AB58B; /* je: equal / zero */

loc_003AB559: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AB5C5; /* je: equal / zero */

loc_003AB55D: ;
    PUSH32(esp, MEM32(edi + 0xC));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, 0x003AB569u); RECOMP_ABI_CALL(0x003AB518u, sub_003AB518); /* call 0x003AB518 */

loc_003AB569: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0x10) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003AB573; /* je: equal / zero */

loc_003AB570: ;
    MEM32(eax + 8) = esi;

loc_003AB573: ;
    MEM32(edi + 0xC) = esi;
    ecx = edi;
    MEM32(esi + 8) = edi;
    PUSH32(esp, 0x003AB580u); RECOMP_ABI_CALL(0x003A9EBFu, sub_003A9EBF); /* call 0x003A9EBF */

loc_003AB580: ;
    ecx = esi;
    PUSH32(esp, 0x003AB587u); RECOMP_ABI_CALL(0x003A9EBFu, sub_003A9EBF); /* call 0x003A9EBF */

loc_003AB587: ;
    ecx = esi;
    goto loc_003AB5BB;

loc_003AB58B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AB5C5; /* je: equal / zero */

loc_003AB58F: ;
    PUSH32(esp, MEM32(edi + 0xC));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, edi);
    PUSH32(esp, 0x003AB59Bu); RECOMP_ABI_CALL(0x003AB518u, sub_003AB518); /* call 0x003AB518 */

loc_003AB59B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(edi + 0xC) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003AB5A5; /* je: equal / zero */

loc_003AB5A2: ;
    MEM32(eax + 8) = edi;

loc_003AB5A5: ;
    MEM32(esi + 0x10) = edi;
    ecx = esi;
    MEM32(edi + 8) = esi;
    PUSH32(esp, 0x003AB5B2u); RECOMP_ABI_CALL(0x003A9EBFu, sub_003A9EBF); /* call 0x003A9EBF */

loc_003AB5B2: ;
    ecx = edi;
    PUSH32(esp, 0x003AB5B9u); RECOMP_ABI_CALL(0x003A9EBFu, sub_003A9EBF); /* call 0x003A9EBF */

loc_003AB5B9: ;
    ecx = edi;

loc_003AB5BB: ;
    PUSH32(esp, 0x003AB5C0u); RECOMP_ABI_CALL(0x003AA523u, sub_003AA523); /* call 0x003AA523 */

loc_003AB5C0: ;
    goto loc_003AB5C5;

loc_003AB5C2: ;
    ebx = MEM32(ebx + 8);

loc_003AB5C5: ;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AB5C2; /* jne: not equal / not zero */

loc_003AB5CB: ;
    ecx = ebx;
    PUSH32(esp, 0x003AB5D2u); RECOMP_ABI_CALL(0x003A9EE0u, sub_003A9EE0); /* call 0x003A9EE0 */

loc_003AB5D2: ;
    MEM32(ebx + 0x14) = eax;
    eax = ebx;

loc_003AB5D7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003AB5DD
 * Original: 0x003AB5DD - 0x003AB607 (42 bytes, 17 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AB5DD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AB5DD: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x003AB5E9u); RECOMP_ABI_CALL(0x003AA710u, sub_003AA710); /* call 0x003AA710 */

loc_003AB5E9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003AB600; /* jne: not equal / not zero */

loc_003AB5ED: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = esi;
    PUSH32(esp, 0x003AB5F8u); RECOMP_ABI_CALL(0x003A8F0Fu, sub_003A8F0F); /* call 0x003A8F0F */

loc_003AB5F8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003AB600; /* jne: not equal / not zero */

loc_003AB5FC: ;
    eax = 0; /* xor self */
    goto loc_003AB603;

loc_003AB600: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003AB603: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003AB607
 * Original: 0x003AB607 - 0x003AB643 (60 bytes, 22 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AB607(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AB607: ;
    eax = 0x35509C;
    PUSH32(esp, 0x003AB611u); RECOMP_ABI_CALL(0x0034DEC0u, sub_0034DEC0); /* call 0x0034DEC0 */

loc_003AB611: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    esi = 0; /* xor self */

loc_003AB61B: ;
    _fa = (uint32_t)(MEM8(ebp + esi + 0xC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + esi + 0xC), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AB62D; /* je: equal / zero */

loc_003AB622: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = edi;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003AB62Du); RECOMP_ABI_CALL(0x003AA74Cu, sub_003AA74C); /* call 0x003AA74C */

loc_003AB62D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003AB61B; /* jle: less or equal (signed <=) */

loc_003AB633: ;
    ecx = MEM32(ebp + -12);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003AB643
 * Original: 0x003AB643 - 0x003AB670 (45 bytes, 25 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AB643(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AB643: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    esi = 0; /* xor self */

loc_003AB64B: ;
    edi = esi + 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    ebx = edi;
    if (CMP_G(_fas, _fbs)) goto loc_003AB664; /* jg: greater (signed >) */

loc_003AB655: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x003AB65Eu); RECOMP_ABI_CALL(0x003AA773u, sub_003AA773); /* call 0x003AA773 */

loc_003AB65E: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003AB655; /* jle: less or equal (signed <=) */

loc_003AB664: ;
    esi = edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003AB64B; /* jle: less or equal (signed <=) */

loc_003AB66B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003AB670
 * Original: 0x003AB670 - 0x003AB6BC (76 bytes, 37 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AB670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AB670: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x34), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AB67F; /* je: equal / zero */

loc_003AB67B: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_003AB6B5;

loc_003AB67F: ;
    _fa = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x38), edi (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_003AB69A; /* je: equal / zero */

loc_003AB685: ;
    ebx = 0; /* xor self */

loc_003AB687: ;
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003AB690u); RECOMP_ABI_CALL(0x003AB5DDu, sub_003AB5DD); /* call 0x003AB5DD */

loc_003AB690: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003AB6B8; /* jne: not equal / not zero */

loc_003AB694: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003AB687; /* jle: less or equal (signed <=) */

loc_003AB69A: ;
    _fa = (uint32_t)(MEM32(esi + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x3C), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AB6B2; /* je: equal / zero */

loc_003AB69F: ;
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003AB6A8u); RECOMP_ABI_CALL(0x003AB5DDu, sub_003AB5DD); /* call 0x003AB5DD */

loc_003AB6A8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003AB6B8; /* jne: not equal / not zero */

loc_003AB6AC: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003AB69F; /* jle: less or equal (signed <=) */

loc_003AB6B2: ;
    SET_LO8(eax, 1);

loc_003AB6B4: ;
    POP32(esp, ebx);

loc_003AB6B5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003AB6B8: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_003AB6B4;

}

/**
 * sub_003AB6BC
 * Original: 0x003AB6BC - 0x003AB729 (109 bytes, 50 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AB6BC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AB6BC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 4 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_003AB704; /* jne: not equal / not zero */

loc_003AB6C7: ;
    edi = 0; /* xor self */
    ebx = esi + 0x20;

loc_003AB6CC: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AB6F5; /* jne: not equal / not zero */

loc_003AB6D1: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x003AB6D9u); RECOMP_ABI_CALL(0x003AB5DDu, sub_003AB5DD); /* call 0x003AB5DD */

loc_003AB6D9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003AB725; /* jne: not equal / not zero */

loc_003AB6DD: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x003AB6E5u); RECOMP_ABI_CALL(0x003A8F45u, sub_003A8F45); /* call 0x003A8F45 */

loc_003AB6E5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003AB6F5; /* jne: not equal / not zero */

loc_003AB6E9: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x003AB6F1u); RECOMP_ABI_CALL(0x003A8F6Bu, sub_003A8F6B); /* call 0x003A8F6B */

loc_003AB6F1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003AB725; /* jne: not equal / not zero */

loc_003AB6F5: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003AB6CC; /* jle: less or equal (signed <=) */

loc_003AB6FE: ;
    SET_LO8(eax, 0); /* xor self */

loc_003AB700: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003AB704: ;
    ebx = 0; /* xor self */
    edi = esi + 0x20;

loc_003AB709: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AB71A; /* jne: not equal / not zero */

loc_003AB70E: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x003AB716u); RECOMP_ABI_CALL(0x003AB5DDu, sub_003AB5DD); /* call 0x003AB5DD */

loc_003AB716: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003AB725; /* jne: not equal / not zero */

loc_003AB71A: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003AB709; /* jle: less or equal (signed <=) */

loc_003AB723: ;
    goto loc_003AB6FE;

loc_003AB725: ;
    SET_LO8(eax, 1);
    goto loc_003AB700;

}

/**
 * sub_003AB729
 * Original: 0x003AB729 - 0x003AB7EF (198 bytes, 77 insns)
 * Category: game_render
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AB729(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AB729: ;
    eax = 0x3550AE;
    PUSH32(esp, 0x003AB733u); RECOMP_ABI_CALL(0x0034DEC0u, sub_0034DEC0); /* call 0x0034DEC0 */

loc_003AB733: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -20) = ecx;
    edi = MEM32(ecx + 0x30);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    ebx = MEM32(ebp + 0x1C);
    esi = 0x431A80;
    if (TEST_Z(_fa, _fb)) goto loc_003AB7A7; /* je: equal / zero */

loc_003AB74E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + -16) = esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = edi;
    MEM32(eax) = esi;
    MEM32(eax + 4) = ebx;
    PUSH32(esp, 0x003AB76Bu); RECOMP_ABI_CALL(0x003AA823u, sub_003AA823); /* call 0x003AA823 */

loc_003AB76B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AB7D8; /* je: equal / zero */

loc_003AB76F: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    edi = edi + 0x20;

loc_003AB776: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(MEM8(ebp + eax + 0x1C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + eax + 0x1C), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AB798; /* je: equal / zero */

loc_003AB780: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AB798; /* je: equal / zero */

loc_003AB786: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AB798; /* je: equal / zero */

loc_003AB78B: ;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003AB794u); RECOMP_ABI_CALL(0x003A8B70u, sub_003A8B70); /* call 0x003A8B70 */

loc_003AB794: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AB7D8; /* je: equal / zero */

loc_003AB798: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) + 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 4;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003AB776; /* jle: less or equal (signed <=) */

loc_003AB7A4: ;
    ecx = MEM32(ebp + -20);

loc_003AB7A7: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AB7DC; /* jne: not equal / not zero */

loc_003AB7AD: ;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ecx + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x50), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AB7DC; /* je: equal / zero */

loc_003AB7B6: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + 0x14) = esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(eax) = esi;
    MEM32(eax + 4) = ebx;
    ecx = MEM32(ecx + 0x50);
    PUSH32(esp, 0x003AB7D4u); RECOMP_ABI_CALL(0x003AA823u, sub_003AA823); /* call 0x003AA823 */

loc_003AB7D4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003AB7DC; /* jne: not equal / not zero */

loc_003AB7D8: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_003AB7DE;

loc_003AB7DC: ;
    SET_LO8(eax, 1);

loc_003AB7DE: ;
    ecx = MEM32(ebp + -12);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_003AB7EF
 * Original: 0x003AB7EF - 0x003AB88B (156 bytes, 65 insns)
 * Category: game_render
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AB7EF(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AB7EF: ;
    eax = 0x3550C8;
    PUSH32(esp, 0x003AB7F9u); RECOMP_ABI_CALL(0x0034DEC0u, sub_0034DEC0); /* call 0x0034DEC0 */

loc_003AB7F9: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = 0; /* xor self */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    MEM32(ebp + -4) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_003AB874; /* je: equal / zero */

loc_003AB80B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x14);
    eax = esp;
    MEM32(eax + 4) = ecx;
    esi = 0x431A80;
    ecx = edi;
    MEM32(ebp + -16) = esp;
    MEM32(eax) = esi;
    PUSH32(esp, 0x003AB828u); RECOMP_ABI_CALL(0x003AAE13u, sub_003AAE13); /* call 0x003AAE13 */

loc_003AB828: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AB878; /* je: equal / zero */

loc_003AB82C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x1C);
    eax = esp;
    MEM32(eax) = esi;
    esi = MEM32(ebp + 8);
    MEM32(eax + 4) = ecx;
    ecx = esi;
    MEM32(ebp + -16) = esp;
    PUSH32(esp, 0x003AB847u); RECOMP_ABI_CALL(0x003AAE13u, sub_003AAE13); /* call 0x003AAE13 */

loc_003AB847: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AB878; /* je: equal / zero */

loc_003AB84B: ;
    _fa = (uint32_t)(MEM32(edi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x30), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AB878; /* jne: not equal / not zero */

loc_003AB851: ;
    eax = MEM32(edi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AB85E; /* je: equal / zero */

loc_003AB858: ;
    _fa = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x34), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AB878; /* jne: not equal / not zero */

loc_003AB85E: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xC), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AB874; /* jne: not equal / not zero */

loc_003AB864: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003AB86E; /* jne: not equal / not zero */

loc_003AB868: ;
    eax = MEM32(esi + 0x34);
    MEM32(edi + 0x34) = eax;

loc_003AB86E: ;
    MEM32(esi + 0x34) = edi;
    MEM32(edi + 0x30) = esi;

loc_003AB874: ;
    SET_LO8(eax, LO8(ebx));
    goto loc_003AB87A;

loc_003AB878: ;
    SET_LO8(eax, 0); /* xor self */

loc_003AB87A: ;
    ecx = MEM32(ebp + -12);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_003AB88B
 * Original: 0x003AB88B - 0x003AB8BF (52 bytes, 20 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003AB88B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AB88B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xC (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AB8A9; /* jne: not equal / not zero */

loc_003AB896: ;
    PUSH32(esp, MEM32(ebp + -4));
    eax = 0x100;
    PUSH32(esp, eax);
    ecx = ecx + 0x3C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AB8A7u); RECOMP_ABI_CALL(0x003A9D6Cu, sub_003A9D6C); /* call 0x003A9D6C */

loc_003AB8A7: ;
    goto loc_003AB8B4;

loc_003AB8A9: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ecx + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AB8B4u); RECOMP_ABI_CALL(0x003AA50Eu, sub_003AA50E); /* call 0x003AA50E */

loc_003AB8B4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AB8BB; /* je: equal / zero */

loc_003AB8B8: ;
    eax = MEM32(eax + 8);

loc_003AB8BB: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003AB8BF
 * Original: 0x003AB8BF - 0x003AB8FC (61 bytes, 30 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003AB8BF(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_003AB8BF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    esi = ecx;
    ecx = esp;
    MEM32(ebp + -4) = esp;
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AB8D6u); RECOMP_ABI_CALL(0x003A8CF8u, sub_003A8CF8); /* call 0x003A8CF8 */

loc_003AB8D6: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ebp + -4) = esp;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AB8E3u); RECOMP_ABI_CALL(0x003A8CF8u, sub_003A8CF8); /* call 0x003A8CF8 */

loc_003AB8E3: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, MEM32(esi + 0x50));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AB8F1u); RECOMP_ABI_CALL(0x003AB7EFu, sub_003AB7EF); /* call 0x003AB7EF */

loc_003AB8F1: ;
    MEM32(esi + 0x50) = edi;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003AB8FC
 * Original: 0x003AB8FC - 0x003AB946 (74 bytes, 33 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AB8FC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AB8FC: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    edi = ecx + 0x28;

loc_003AB903: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003AB90Bu); RECOMP_ABI_CALL(0x003AA50Eu, sub_003AA50E); /* call 0x003AA50E */

loc_003AB90B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AB934; /* je: equal / zero */

loc_003AB90F: ;
    ecx = MEM32(eax + 8);
    eax = ecx;
    goto loc_003AB91F;

loc_003AB916: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AB942; /* je: equal / zero */

loc_003AB91C: ;
    eax = MEM32(eax + 0x30);

loc_003AB91F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003AB916; /* jne: not equal / not zero */

loc_003AB923: ;
    eax = ecx;
    goto loc_003AB930;

loc_003AB927: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003AB942; /* je: equal / zero */

loc_003AB92D: ;
    eax = MEM32(eax + 0x34);

loc_003AB930: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003AB927; /* jne: not equal / not zero */

loc_003AB934: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003AB903; /* jle: less or equal (signed <=) */

loc_003AB93A: ;
    eax = eax | 0xFFFFFFFFu;

loc_003AB93D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003AB942: ;
    eax = esi;
    goto loc_003AB93D;

}

/**
 * sub_003AB946
 * Original: 0x003AB946 - 0x003AB9B7 (113 bytes, 49 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003AB946(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AB946: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ebx = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_003AB958; /* jne: not equal / not zero */

loc_003AB954: ;
    eax = 0; /* xor self */
    goto loc_003AB9B1;

loc_003AB958: ;
    PUSH32(esp, edi);
    ecx = ebp + 8;
    MEM32(ebp + 8) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AB964u); RECOMP_ABI_CALL(0x003A9C4Fu, sub_003A9C4F); /* call 0x003A9C4F */

loc_003AB964: ;
    PUSH32(esp, MEM32(esi + 0x10));
    edi = MEM32(esi + 8);
    PUSH32(esp, MEM32(esi + 0xC));
    eax = MEM32(eax);
    PUSH32(esp, edi);
    ecx = ebx;
    MEM32(ebp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AB97Au); RECOMP_ABI_CALL(0x003AAF86u, sub_003AAF86); /* call 0x003AAF86 */

loc_003AB97A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AB99F; /* je: equal / zero */

loc_003AB97E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AB985; /* je: equal / zero */

loc_003AB982: ;
    MEM32(eax + 8) = edi;

loc_003AB985: ;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xC), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AB98D; /* jne: not equal / not zero */

loc_003AB98A: ;
    MEM32(edi + 0xC) = eax;

loc_003AB98D: ;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003AB995; /* jne: not equal / not zero */

loc_003AB992: ;
    MEM32(edi + 0x10) = eax;

loc_003AB995: ;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AB99Du); RECOMP_ABI_CALL(0x003AB4EBu, sub_003AB4EB); /* call 0x003AB4EB */

loc_003AB99D: ;
    goto loc_003AB9A2;

loc_003AB99F: ;
    MEM32(ebx + 8) = eax;

loc_003AB9A2: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003AB9AAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003AB9AA: ;
    MEM32(ebx + 0xC) = MEM32(ebx + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 8);
    POP32(esp, edi);

loc_003AB9B1: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003AB9B7
 * Original: 0x003AB9B7 - 0x003ABA46 (143 bytes, 61 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AB9B7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003AB9B7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_003AB9C5; /* jne: not equal / not zero */

loc_003AB9C4: ;
    /* int3: debug-trap slide byte, stepped over */

loc_003AB9C5: ;
    eax = MEM32(esi + 4);
    ebx = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003ABA06; /* jbe: below or equal (unsigned <=) */

loc_003AB9D0: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003ABA0F; /* jne: not equal / not zero */

loc_003AB9D7: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x003AB9E3u); RECOMP_ABI_CALL(0x001A1DDBu, sub_001A1DDB); /* call 0x001A1DDB */

loc_003AB9E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003AB9F2; /* je: equal / zero */

loc_003AB9E7: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x003AB9F0u); RECOMP_ABI_CALL(0x003A9BA8u, sub_003A9BA8); /* call 0x003A9BA8 */

loc_003AB9F0: ;
    goto loc_003AB9F4;

loc_003AB9F2: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */

loc_003AB9F4: ;
    MEM32(esi + 0xC) = eax;

loc_003AB9F7: ;
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003AB9FA: ;
    PUSH32(esp, esi);
    ecx = edi;
    ebx = eax;
    PUSH32(esp, 0x003ABA04u); RECOMP_ABI_CALL(0x003AB4EBu, sub_003AB4EB); /* call 0x003AB4EB */

loc_003ABA04: ;
    goto loc_003ABA3E;

loc_003ABA06: ;
    if (CMP_AE(_fa, _fb)) goto loc_003ABA3C; /* jae: above or equal (unsigned >=) */

loc_003ABA08: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003ABA1A; /* je: equal / zero */

loc_003ABA0F: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x003ABA18u); RECOMP_ABI_CALL(0x003AB9B7u, sub_003AB9B7); /* call 0x003AB9B7 */

loc_003ABA18: ;
    goto loc_003AB9FA;

loc_003ABA1A: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x003ABA26u); RECOMP_ABI_CALL(0x001A1DDBu, sub_001A1DDB); /* call 0x001A1DDB */

loc_003ABA26: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003ABA35; /* je: equal / zero */

loc_003ABA2A: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x003ABA33u); RECOMP_ABI_CALL(0x003A9BA8u, sub_003A9BA8); /* call 0x003A9BA8 */

loc_003ABA33: ;
    goto loc_003ABA37;

loc_003ABA35: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */

loc_003ABA37: ;
    MEM32(esi + 0x10) = eax;
    goto loc_003AB9F7;

loc_003ABA3C: ;
    ebx = esi;

loc_003ABA3E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003ABA46
 * Original: 0x003ABA46 - 0x003ABAB7 (113 bytes, 49 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003ABA46(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003ABA46: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ebx = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_003ABA58; /* jne: not equal / not zero */

loc_003ABA54: ;
    eax = 0; /* xor self */
    goto loc_003ABAB1;

loc_003ABA58: ;
    PUSH32(esp, edi);
    ecx = ebp + 8;
    MEM32(ebp + 8) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ABA64u); RECOMP_ABI_CALL(0x003A9C4Fu, sub_003A9C4F); /* call 0x003A9C4F */

loc_003ABA64: ;
    PUSH32(esp, MEM32(esi + 0x10));
    edi = MEM32(esi + 8);
    PUSH32(esp, MEM32(esi + 0xC));
    eax = MEM32(eax);
    PUSH32(esp, edi);
    ecx = ebx;
    MEM32(ebp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ABA7Au); RECOMP_ABI_CALL(0x003AB04Bu, sub_003AB04B); /* call 0x003AB04B */

loc_003ABA7A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003ABA9F; /* je: equal / zero */

loc_003ABA7E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003ABA85; /* je: equal / zero */

loc_003ABA82: ;
    MEM32(eax + 8) = edi;

loc_003ABA85: ;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xC), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ABA8D; /* jne: not equal / not zero */

loc_003ABA8A: ;
    MEM32(edi + 0xC) = eax;

loc_003ABA8D: ;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ABA95; /* jne: not equal / not zero */

loc_003ABA92: ;
    MEM32(edi + 0x10) = eax;

loc_003ABA95: ;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ABA9Du); RECOMP_ABI_CALL(0x003AB4EBu, sub_003AB4EB); /* call 0x003AB4EB */

loc_003ABA9D: ;
    goto loc_003ABAA2;

loc_003ABA9F: ;
    MEM32(ebx + 8) = eax;

loc_003ABAA2: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003ABAAAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003ABAAA: ;
    MEM32(ebx + 0xC) = MEM32(ebx + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 8);
    POP32(esp, edi);

loc_003ABAB1: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003ABAB7
 * Original: 0x003ABAB7 - 0x003ABB46 (143 bytes, 61 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ABAB7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003ABAB7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_003ABAC5; /* jne: not equal / not zero */

loc_003ABAC4: ;
    /* int3: debug-trap slide byte, stepped over */

loc_003ABAC5: ;
    eax = MEM32(esi + 4);
    ebx = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003ABB06; /* jbe: below or equal (unsigned <=) */

loc_003ABAD0: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003ABB0F; /* jne: not equal / not zero */

loc_003ABAD7: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x003ABAE3u); RECOMP_ABI_CALL(0x001A1DDBu, sub_001A1DDB); /* call 0x001A1DDB */

loc_003ABAE3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003ABAF2; /* je: equal / zero */

loc_003ABAE7: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x003ABAF0u); RECOMP_ABI_CALL(0x003A9C06u, sub_003A9C06); /* call 0x003A9C06 */

loc_003ABAF0: ;
    goto loc_003ABAF4;

loc_003ABAF2: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */

loc_003ABAF4: ;
    MEM32(esi + 0xC) = eax;

loc_003ABAF7: ;
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003ABAFA: ;
    PUSH32(esp, esi);
    ecx = edi;
    ebx = eax;
    PUSH32(esp, 0x003ABB04u); RECOMP_ABI_CALL(0x003AB4EBu, sub_003AB4EB); /* call 0x003AB4EB */

loc_003ABB04: ;
    goto loc_003ABB3E;

loc_003ABB06: ;
    if (CMP_AE(_fa, _fb)) goto loc_003ABB3C; /* jae: above or equal (unsigned >=) */

loc_003ABB08: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003ABB1A; /* je: equal / zero */

loc_003ABB0F: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x003ABB18u); RECOMP_ABI_CALL(0x003ABAB7u, sub_003ABAB7); /* call 0x003ABAB7 */

loc_003ABB18: ;
    goto loc_003ABAFA;

loc_003ABB1A: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x003ABB26u); RECOMP_ABI_CALL(0x001A1DDBu, sub_001A1DDB); /* call 0x001A1DDB */

loc_003ABB26: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003ABB35; /* je: equal / zero */

loc_003ABB2A: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x003ABB33u); RECOMP_ABI_CALL(0x003A9C06u, sub_003A9C06); /* call 0x003A9C06 */

loc_003ABB33: ;
    goto loc_003ABB37;

loc_003ABB35: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */

loc_003ABB37: ;
    MEM32(esi + 0x10) = eax;
    goto loc_003ABAF7;

loc_003ABB3C: ;
    ebx = esi;

loc_003ABB3E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003ABB46
 * Original: 0x003ABB46 - 0x003ABBB7 (113 bytes, 49 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003ABB46(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003ABB46: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ebx = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_003ABB58; /* jne: not equal / not zero */

loc_003ABB54: ;
    eax = 0; /* xor self */
    goto loc_003ABBB1;

loc_003ABB58: ;
    PUSH32(esp, edi);
    ecx = ebp + 8;
    MEM32(ebp + 8) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ABB64u); RECOMP_ABI_CALL(0x003A9C4Fu, sub_003A9C4F); /* call 0x003A9C4F */

loc_003ABB64: ;
    PUSH32(esp, MEM32(esi + 0x10));
    edi = MEM32(esi + 8);
    PUSH32(esp, MEM32(esi + 0xC));
    eax = MEM32(eax);
    PUSH32(esp, edi);
    ecx = ebx;
    MEM32(ebp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ABB7Au); RECOMP_ABI_CALL(0x003AB110u, sub_003AB110); /* call 0x003AB110 */

loc_003ABB7A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003ABB9F; /* je: equal / zero */

loc_003ABB7E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003ABB85; /* je: equal / zero */

loc_003ABB82: ;
    MEM32(eax + 8) = edi;

loc_003ABB85: ;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xC), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ABB8D; /* jne: not equal / not zero */

loc_003ABB8A: ;
    MEM32(edi + 0xC) = eax;

loc_003ABB8D: ;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ABB95; /* jne: not equal / not zero */

loc_003ABB92: ;
    MEM32(edi + 0x10) = eax;

loc_003ABB95: ;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ABB9Du); RECOMP_ABI_CALL(0x003AB4EBu, sub_003AB4EB); /* call 0x003AB4EB */

loc_003ABB9D: ;
    goto loc_003ABBA2;

loc_003ABB9F: ;
    MEM32(ebx + 8) = eax;

loc_003ABBA2: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003ABBAAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003ABBAA: ;
    MEM32(ebx + 0xC) = MEM32(ebx + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 8);
    POP32(esp, edi);

loc_003ABBB1: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003ABBB7
 * Original: 0x003ABBB7 - 0x003ABC46 (143 bytes, 61 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ABBB7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003ABBB7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_003ABBC5; /* jne: not equal / not zero */

loc_003ABBC4: ;
    /* int3: debug-trap slide byte, stepped over */

loc_003ABBC5: ;
    eax = MEM32(esi + 4);
    ebx = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003ABC06; /* jbe: below or equal (unsigned <=) */

loc_003ABBD0: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003ABC0F; /* jne: not equal / not zero */

loc_003ABBD7: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x003ABBE3u); RECOMP_ABI_CALL(0x001A1DDBu, sub_001A1DDB); /* call 0x001A1DDB */

loc_003ABBE3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003ABBF2; /* je: equal / zero */

loc_003ABBE7: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x003ABBF0u); RECOMP_ABI_CALL(0x003A9C8Cu, sub_003A9C8C); /* call 0x003A9C8C */

loc_003ABBF0: ;
    goto loc_003ABBF4;

loc_003ABBF2: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */

loc_003ABBF4: ;
    MEM32(esi + 0xC) = eax;

loc_003ABBF7: ;
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003ABBFA: ;
    PUSH32(esp, esi);
    ecx = edi;
    ebx = eax;
    PUSH32(esp, 0x003ABC04u); RECOMP_ABI_CALL(0x003AB4EBu, sub_003AB4EB); /* call 0x003AB4EB */

loc_003ABC04: ;
    goto loc_003ABC3E;

loc_003ABC06: ;
    if (CMP_AE(_fa, _fb)) goto loc_003ABC3C; /* jae: above or equal (unsigned >=) */

loc_003ABC08: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003ABC1A; /* je: equal / zero */

loc_003ABC0F: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x003ABC18u); RECOMP_ABI_CALL(0x003ABBB7u, sub_003ABBB7); /* call 0x003ABBB7 */

loc_003ABC18: ;
    goto loc_003ABBFA;

loc_003ABC1A: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x003ABC26u); RECOMP_ABI_CALL(0x001A1DDBu, sub_001A1DDB); /* call 0x001A1DDB */

loc_003ABC26: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003ABC35; /* je: equal / zero */

loc_003ABC2A: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x003ABC33u); RECOMP_ABI_CALL(0x003A9C8Cu, sub_003A9C8C); /* call 0x003A9C8C */

loc_003ABC33: ;
    goto loc_003ABC37;

loc_003ABC35: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */

loc_003ABC37: ;
    MEM32(esi + 0x10) = eax;
    goto loc_003ABBF7;

loc_003ABC3C: ;
    ebx = esi;

loc_003ABC3E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003ABC46
 * Original: 0x003ABC46 - 0x003ABCB7 (113 bytes, 49 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003ABC46(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003ABC46: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ebx = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_003ABC58; /* jne: not equal / not zero */

loc_003ABC54: ;
    eax = 0; /* xor self */
    goto loc_003ABCB1;

loc_003ABC58: ;
    PUSH32(esp, edi);
    ecx = ebp + 8;
    MEM32(ebp + 8) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ABC64u); RECOMP_ABI_CALL(0x003A9C4Fu, sub_003A9C4F); /* call 0x003A9C4F */

loc_003ABC64: ;
    PUSH32(esp, MEM32(esi + 0x10));
    edi = MEM32(esi + 8);
    PUSH32(esp, MEM32(esi + 0xC));
    eax = MEM32(eax);
    PUSH32(esp, edi);
    ecx = ebx;
    MEM32(ebp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ABC7Au); RECOMP_ABI_CALL(0x003AB1D5u, sub_003AB1D5); /* call 0x003AB1D5 */

loc_003ABC7A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003ABC9F; /* je: equal / zero */

loc_003ABC7E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003ABC85; /* je: equal / zero */

loc_003ABC82: ;
    MEM32(eax + 8) = edi;

loc_003ABC85: ;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xC), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ABC8D; /* jne: not equal / not zero */

loc_003ABC8A: ;
    MEM32(edi + 0xC) = eax;

loc_003ABC8D: ;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ABC95; /* jne: not equal / not zero */

loc_003ABC92: ;
    MEM32(edi + 0x10) = eax;

loc_003ABC95: ;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ABC9Du); RECOMP_ABI_CALL(0x003AB4EBu, sub_003AB4EB); /* call 0x003AB4EB */

loc_003ABC9D: ;
    goto loc_003ABCA2;

loc_003ABC9F: ;
    MEM32(ebx + 8) = eax;

loc_003ABCA2: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003ABCAAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003ABCAA: ;
    MEM32(ebx + 0xC) = MEM32(ebx + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 8);
    POP32(esp, edi);

loc_003ABCB1: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003ABCB7
 * Original: 0x003ABCB7 - 0x003ABD46 (143 bytes, 61 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ABCB7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003ABCB7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_003ABCC5; /* jne: not equal / not zero */

loc_003ABCC4: ;
    /* int3: debug-trap slide byte, stepped over */

loc_003ABCC5: ;
    eax = MEM32(esi + 4);
    ebx = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003ABD06; /* jbe: below or equal (unsigned <=) */

loc_003ABCD0: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003ABD0F; /* jne: not equal / not zero */

loc_003ABCD7: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x003ABCE3u); RECOMP_ABI_CALL(0x001A1DDBu, sub_001A1DDB); /* call 0x001A1DDB */

loc_003ABCE3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003ABCF2; /* je: equal / zero */

loc_003ABCE7: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x003ABCF0u); RECOMP_ABI_CALL(0x003A9CD5u, sub_003A9CD5); /* call 0x003A9CD5 */

loc_003ABCF0: ;
    goto loc_003ABCF4;

loc_003ABCF2: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */

loc_003ABCF4: ;
    MEM32(esi + 0xC) = eax;

loc_003ABCF7: ;
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003ABCFA: ;
    PUSH32(esp, esi);
    ecx = edi;
    ebx = eax;
    PUSH32(esp, 0x003ABD04u); RECOMP_ABI_CALL(0x003AB4EBu, sub_003AB4EB); /* call 0x003AB4EB */

loc_003ABD04: ;
    goto loc_003ABD3E;

loc_003ABD06: ;
    if (CMP_AE(_fa, _fb)) goto loc_003ABD3C; /* jae: above or equal (unsigned >=) */

loc_003ABD08: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003ABD1A; /* je: equal / zero */

loc_003ABD0F: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x003ABD18u); RECOMP_ABI_CALL(0x003ABCB7u, sub_003ABCB7); /* call 0x003ABCB7 */

loc_003ABD18: ;
    goto loc_003ABCFA;

loc_003ABD1A: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x003ABD26u); RECOMP_ABI_CALL(0x001A1DDBu, sub_001A1DDB); /* call 0x001A1DDB */

loc_003ABD26: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003ABD35; /* je: equal / zero */

loc_003ABD2A: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x003ABD33u); RECOMP_ABI_CALL(0x003A9CD5u, sub_003A9CD5); /* call 0x003A9CD5 */

loc_003ABD33: ;
    goto loc_003ABD37;

loc_003ABD35: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */

loc_003ABD37: ;
    MEM32(esi + 0x10) = eax;
    goto loc_003ABCF7;

loc_003ABD3C: ;
    ebx = esi;

loc_003ABD3E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003ABD46
 * Original: 0x003ABD46 - 0x003ABDB7 (113 bytes, 49 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003ABD46(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003ABD46: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ebx = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_003ABD58; /* jne: not equal / not zero */

loc_003ABD54: ;
    eax = 0; /* xor self */
    goto loc_003ABDB1;

loc_003ABD58: ;
    PUSH32(esp, edi);
    ecx = ebp + 8;
    MEM32(ebp + 8) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ABD64u); RECOMP_ABI_CALL(0x003A9C4Fu, sub_003A9C4F); /* call 0x003A9C4F */

loc_003ABD64: ;
    PUSH32(esp, MEM32(esi + 0x10));
    edi = MEM32(esi + 8);
    PUSH32(esp, MEM32(esi + 0xC));
    eax = MEM32(eax);
    PUSH32(esp, edi);
    ecx = ebx;
    MEM32(ebp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ABD7Au); RECOMP_ABI_CALL(0x003AB29Au, sub_003AB29A); /* call 0x003AB29A */

loc_003ABD7A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003ABD9F; /* je: equal / zero */

loc_003ABD7E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003ABD85; /* je: equal / zero */

loc_003ABD82: ;
    MEM32(eax + 8) = edi;

loc_003ABD85: ;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xC), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ABD8D; /* jne: not equal / not zero */

loc_003ABD8A: ;
    MEM32(edi + 0xC) = eax;

loc_003ABD8D: ;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ABD95; /* jne: not equal / not zero */

loc_003ABD92: ;
    MEM32(edi + 0x10) = eax;

loc_003ABD95: ;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ABD9Du); RECOMP_ABI_CALL(0x003AB4EBu, sub_003AB4EB); /* call 0x003AB4EB */

loc_003ABD9D: ;
    goto loc_003ABDA2;

loc_003ABD9F: ;
    MEM32(ebx + 8) = eax;

loc_003ABDA2: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003ABDAAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003ABDAA: ;
    MEM32(ebx + 0xC) = MEM32(ebx + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 8);
    POP32(esp, edi);

loc_003ABDB1: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003ABDB7
 * Original: 0x003ABDB7 - 0x003ABE65 (174 bytes, 72 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003ABDB7(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003ABDB7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_003ABDC7; /* jne: not equal / not zero */

loc_003ABDC6: ;
    /* int3: debug-trap slide byte, stepped over */

loc_003ABDC7: ;
    ebx = MEM32(esi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = edi + 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ABDD6u); RECOMP_ABI_CALL(0x003A835Eu, sub_003A835E); /* call 0x003A835E */

loc_003ABDD6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003ABE12; /* je: equal / zero */

loc_003ABDDA: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003ABE29; /* jne: not equal / not zero */

loc_003ABDE1: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x18);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ABDEDu); RECOMP_ABI_CALL(0x001A1DDBu, sub_001A1DDB); /* call 0x001A1DDB */

loc_003ABDED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003ABDFE; /* je: equal / zero */

loc_003ABDF1: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ABDFCu); RECOMP_ABI_CALL(0x003A9DDDu, sub_003A9DDD); /* call 0x003A9DDD */

loc_003ABDFC: ;
    goto loc_003ABE00;

loc_003ABDFE: ;
    eax = 0; /* xor self */

loc_003ABE00: ;
    MEM32(esi + 0xC) = eax;

loc_003ABE03: ;
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003ABE06: ;
    PUSH32(esp, esi);
    ecx = edi;
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ABE10u); RECOMP_ABI_CALL(0x003AB4EBu, sub_003AB4EB); /* call 0x003AB4EB */

loc_003ABE10: ;
    goto loc_003ABE5C;

loc_003ABE12: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = edi + 4;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ABE1Eu); RECOMP_ABI_CALL(0x003A835Eu, sub_003A835E); /* call 0x003A835E */

loc_003ABE1E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003ABE5A; /* je: equal / zero */

loc_003ABE22: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003ABE36; /* je: equal / zero */

loc_003ABE29: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ABE34u); RECOMP_ABI_CALL(0x003ABDB7u, sub_003ABDB7); /* call 0x003ABDB7 */

loc_003ABE34: ;
    goto loc_003ABE06;

loc_003ABE36: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x18);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ABE42u); RECOMP_ABI_CALL(0x001A1DDBu, sub_001A1DDB); /* call 0x001A1DDB */

loc_003ABE42: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003ABE53; /* je: equal / zero */

loc_003ABE46: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ABE51u); RECOMP_ABI_CALL(0x003A9DDDu, sub_003A9DDD); /* call 0x003A9DDD */

loc_003ABE51: ;
    goto loc_003ABE55;

loc_003ABE53: ;
    eax = 0; /* xor self */

loc_003ABE55: ;
    MEM32(esi + 0x10) = eax;
    goto loc_003ABE03;

loc_003ABE5A: ;
    ebx = esi;

loc_003ABE5C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003ABE65
 * Original: 0x003ABE65 - 0x003ABED6 (113 bytes, 49 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003ABE65(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003ABE65: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ebx = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_003ABE77; /* jne: not equal / not zero */

loc_003ABE73: ;
    eax = 0; /* xor self */
    goto loc_003ABED0;

loc_003ABE77: ;
    PUSH32(esp, edi);
    ecx = ebp + 8;
    MEM32(ebp + 8) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ABE83u); RECOMP_ABI_CALL(0x003A9D8Bu, sub_003A9D8B); /* call 0x003A9D8B */

loc_003ABE83: ;
    PUSH32(esp, MEM32(esi + 0x14));
    edi = MEM32(esi + 0xC);
    PUSH32(esp, MEM32(esi + 0x10));
    eax = MEM32(eax);
    PUSH32(esp, edi);
    ecx = ebx;
    MEM32(ebp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ABE99u); RECOMP_ABI_CALL(0x003AB38Cu, sub_003AB38C); /* call 0x003AB38C */

loc_003ABE99: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003ABEBE; /* je: equal / zero */

loc_003ABE9D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003ABEA4; /* je: equal / zero */

loc_003ABEA1: ;
    MEM32(eax + 0xC) = edi;

loc_003ABEA4: ;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ABEAC; /* jne: not equal / not zero */

loc_003ABEA9: ;
    MEM32(edi + 0x10) = eax;

loc_003ABEAC: ;
    _fa = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x14), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ABEB4; /* jne: not equal / not zero */

loc_003ABEB1: ;
    MEM32(edi + 0x14) = eax;

loc_003ABEB4: ;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ABEBCu); RECOMP_ABI_CALL(0x003AB35Fu, sub_003AB35F); /* call 0x003AB35F */

loc_003ABEBC: ;
    goto loc_003ABEC1;

loc_003ABEBE: ;
    MEM32(ebx + 8) = eax;

loc_003ABEC1: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003ABEC9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003ABEC9: ;
    MEM32(ebx + 0xC) = MEM32(ebx + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 8);
    POP32(esp, edi);

loc_003ABED0: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003ABED6
 * Original: 0x003ABED6 - 0x003ABF25 (79 bytes, 27 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ABED6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003ABED6: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003ABF11; /* jne: not equal / not zero */

loc_003ABEE0: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x1C);
    MEM32(esi + 0xC) = 1;
    PUSH32(esp, 0x003ABEF3u); RECOMP_ABI_CALL(0x001A1DDBu, sub_001A1DDB); /* call 0x001A1DDB */

loc_003ABEF3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003ABF0A; /* je: equal / zero */

loc_003ABEF7: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x003ABF08u); RECOMP_ABI_CALL(0x003A9E6Fu, sub_003A9E6F); /* call 0x003A9E6F */

loc_003ABF08: ;
    goto loc_003ABF0C;

loc_003ABF0A: ;
    eax = 0; /* xor self */

loc_003ABF0C: ;
    MEM32(esi + 8) = eax;
    goto loc_003ABF21;

loc_003ABF11: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x003ABF21u); RECOMP_ABI_CALL(0x003AB451u, sub_003AB451); /* call 0x003AB451 */

loc_003ABF21: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003ABF25
 * Original: 0x003ABF25 - 0x003ABF96 (113 bytes, 49 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003ABF25(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003ABF25: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ebx = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_003ABF37; /* jne: not equal / not zero */

loc_003ABF33: ;
    eax = 0; /* xor self */
    goto loc_003ABF90;

loc_003ABF37: ;
    PUSH32(esp, edi);
    ecx = ebp + 8;
    MEM32(ebp + 8) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ABF43u); RECOMP_ABI_CALL(0x003A9C4Fu, sub_003A9C4F); /* call 0x003A9C4F */

loc_003ABF43: ;
    PUSH32(esp, MEM32(esi + 0x10));
    edi = MEM32(esi + 8);
    PUSH32(esp, MEM32(esi + 0xC));
    eax = MEM32(eax);
    PUSH32(esp, edi);
    ecx = ebx;
    MEM32(ebp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ABF59u); RECOMP_ABI_CALL(0x003AB518u, sub_003AB518); /* call 0x003AB518 */

loc_003ABF59: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003ABF7E; /* je: equal / zero */

loc_003ABF5D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003ABF64; /* je: equal / zero */

loc_003ABF61: ;
    MEM32(eax + 8) = edi;

loc_003ABF64: ;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xC), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ABF6C; /* jne: not equal / not zero */

loc_003ABF69: ;
    MEM32(edi + 0xC) = eax;

loc_003ABF6C: ;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ABF74; /* jne: not equal / not zero */

loc_003ABF71: ;
    MEM32(edi + 0x10) = eax;

loc_003ABF74: ;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ABF7Cu); RECOMP_ABI_CALL(0x003AB4EBu, sub_003AB4EB); /* call 0x003AB4EB */

loc_003ABF7C: ;
    goto loc_003ABF81;

loc_003ABF7E: ;
    MEM32(ebx + 8) = eax;

loc_003ABF81: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003ABF89u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003ABF89: ;
    MEM32(ebx + 0xC) = MEM32(ebx + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 8);
    POP32(esp, edi);

loc_003ABF90: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003ABF96
 * Original: 0x003ABF96 - 0x003AC025 (143 bytes, 61 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ABF96(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003ABF96: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_003ABFA4; /* jne: not equal / not zero */

loc_003ABFA3: ;
    /* int3: debug-trap slide byte, stepped over */

loc_003ABFA4: ;
    eax = MEM32(esi + 4);
    ebx = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003ABFE5; /* jbe: below or equal (unsigned <=) */

loc_003ABFAF: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003ABFEE; /* jne: not equal / not zero */

loc_003ABFB6: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x003ABFC2u); RECOMP_ABI_CALL(0x001A1DDBu, sub_001A1DDB); /* call 0x001A1DDB */

loc_003ABFC2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003ABFD1; /* je: equal / zero */

loc_003ABFC6: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x003ABFCFu); RECOMP_ABI_CALL(0x003A9E26u, sub_003A9E26); /* call 0x003A9E26 */

loc_003ABFCF: ;
    goto loc_003ABFD3;

loc_003ABFD1: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */

loc_003ABFD3: ;
    MEM32(esi + 0xC) = eax;

loc_003ABFD6: ;
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003ABFD9: ;
    PUSH32(esp, esi);
    ecx = edi;
    ebx = eax;
    PUSH32(esp, 0x003ABFE3u); RECOMP_ABI_CALL(0x003AB4EBu, sub_003AB4EB); /* call 0x003AB4EB */

loc_003ABFE3: ;
    goto loc_003AC01D;

loc_003ABFE5: ;
    if (CMP_AE(_fa, _fb)) goto loc_003AC01B; /* jae: above or equal (unsigned >=) */

loc_003ABFE7: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003ABFF9; /* je: equal / zero */

loc_003ABFEE: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x003ABFF7u); RECOMP_ABI_CALL(0x003ABF96u, sub_003ABF96); /* call 0x003ABF96 */

loc_003ABFF7: ;
    goto loc_003ABFD9;

loc_003ABFF9: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x003AC005u); RECOMP_ABI_CALL(0x001A1DDBu, sub_001A1DDB); /* call 0x001A1DDB */

loc_003AC005: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003AC014; /* je: equal / zero */

loc_003AC009: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x003AC012u); RECOMP_ABI_CALL(0x003A9E26u, sub_003A9E26); /* call 0x003A9E26 */

loc_003AC012: ;
    goto loc_003AC016;

loc_003AC014: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */

loc_003AC016: ;
    MEM32(esi + 0x10) = eax;
    goto loc_003ABFD6;

loc_003AC01B: ;
    ebx = esi;

loc_003AC01D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003AC025
 * Original: 0x003AC025 - 0x003AC051 (44 bytes, 20 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AC025(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AC025: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    goto loc_003AC036;

loc_003AC02F: ;
    esi = MEM32(esi + 0x30);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AC042; /* je: equal / zero */

loc_003AC036: ;
    ecx = edi;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003AC03Eu); RECOMP_ABI_CALL(0x003AB8FCu, sub_003AB8FC); /* call 0x003AB8FC */

loc_003AC03E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_003AC02F; /* jl: less (signed <) */

loc_003AC042: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, edi);
    SET_LO8(eax, LO8(ecx));
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003AC051
 * Original: 0x003AC051 - 0x003AC098 (71 bytes, 25 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AC051(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AC051: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003AC088; /* jne: not equal / not zero */

loc_003AC05B: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x18);
    MEM32(esi + 0xC) = 1;
    PUSH32(esp, 0x003AC06Eu); RECOMP_ABI_CALL(0x001A1DDBu, sub_001A1DDB); /* call 0x001A1DDB */

loc_003AC06E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AC081; /* je: equal / zero */

loc_003AC072: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, 0x003AC07Fu); RECOMP_ABI_CALL(0x003A9BA8u, sub_003A9BA8); /* call 0x003A9BA8 */

loc_003AC07F: ;
    goto loc_003AC083;

loc_003AC081: ;
    eax = 0; /* xor self */

loc_003AC083: ;
    MEM32(esi + 8) = eax;
    goto loc_003AC094;

loc_003AC088: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi;
    PUSH32(esp, 0x003AC094u); RECOMP_ABI_CALL(0x003AB9B7u, sub_003AB9B7); /* call 0x003AB9B7 */

loc_003AC094: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003AC098
 * Original: 0x003AC098 - 0x003AC0B0 (24 bytes, 9 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AC098(void)
{

loc_003AC098: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x003AC0A4u); RECOMP_ABI_CALL(0x003A9B74u, sub_003A9B74); /* call 0x003A9B74 */

loc_003AC0A4: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003AC0ACu); RECOMP_ABI_CALL(0x003AB946u, sub_003AB946); /* call 0x003AB946 */

loc_003AC0AC: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003AC0B0
 * Original: 0x003AC0B0 - 0x003AC0F7 (71 bytes, 25 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AC0B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AC0B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003AC0E7; /* jne: not equal / not zero */

loc_003AC0BA: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x18);
    MEM32(esi + 0xC) = 1;
    PUSH32(esp, 0x003AC0CDu); RECOMP_ABI_CALL(0x001A1DDBu, sub_001A1DDB); /* call 0x001A1DDB */

loc_003AC0CD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AC0E0; /* je: equal / zero */

loc_003AC0D1: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, 0x003AC0DEu); RECOMP_ABI_CALL(0x003A9C06u, sub_003A9C06); /* call 0x003A9C06 */

loc_003AC0DE: ;
    goto loc_003AC0E2;

loc_003AC0E0: ;
    eax = 0; /* xor self */

loc_003AC0E2: ;
    MEM32(esi + 8) = eax;
    goto loc_003AC0F3;

loc_003AC0E7: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi;
    PUSH32(esp, 0x003AC0F3u); RECOMP_ABI_CALL(0x003ABAB7u, sub_003ABAB7); /* call 0x003ABAB7 */

loc_003AC0F3: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003AC0F7
 * Original: 0x003AC0F7 - 0x003AC10F (24 bytes, 9 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AC0F7(void)
{

loc_003AC0F7: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x003AC103u); RECOMP_ABI_CALL(0x003A9B74u, sub_003A9B74); /* call 0x003A9B74 */

loc_003AC103: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003AC10Bu); RECOMP_ABI_CALL(0x003ABA46u, sub_003ABA46); /* call 0x003ABA46 */

loc_003AC10B: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003AC10F
 * Original: 0x003AC10F - 0x003AC156 (71 bytes, 25 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AC10F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003AC10F: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003AC146; /* jne: not equal / not zero */

loc_003AC119: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x18);
    MEM32(esi + 0xC) = 1;
    PUSH32(esp, 0x003AC12Cu); RECOMP_ABI_CALL(0x001A1DDBu, sub_001A1DDB); /* call 0x001A1DDB */

loc_003AC12C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003AC13F; /* je: equal / zero */

loc_003AC130: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, 0x003AC13Du); RECOMP_ABI_CALL(0x003A9C8Cu, sub_003A9C8C); /* call 0x003A9C8C */

loc_003AC13D: ;
    goto loc_003AC141;

loc_003AC13F: ;
    eax = 0; /* xor self */

loc_003AC141: ;
    MEM32(esi + 8) = eax;
    goto loc_003AC152;

loc_003AC146: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi;
    PUSH32(esp, 0x003AC152u); RECOMP_ABI_CALL(0x003ABBB7u, sub_003ABBB7); /* call 0x003ABBB7 */

loc_003AC152: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
