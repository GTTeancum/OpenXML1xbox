/**
 * X-Men Legends - Recompiled code chunk 80
 * Functions: 250 (0x003206C0 - 0x00324AE0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_003206C0
 * Original: 0x003206C0 - 0x0032073C (124 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003206C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003206C0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x94C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xF34);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xF30);
    if (TEST_NZ(_fa, _fb)) goto loc_003206E6; /* jne: not equal / not zero */

loc_003206DD: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003206E6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFBu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFBu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003206F1; /* jne: not equal / not zero */

loc_003206EB: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003206F1: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00320701u); RECOMP_ABI_CALL(0x003205A0u, sub_003205A0); /* call 0x003205A0 */

loc_00320701: ;
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x7D0);
    eax = 0x8BF338ABu;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    ecx = MEM32(esp + 0x18);
    if (((0xF) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edx)) >> ((((0xF) & 31u)) - 1)) & 1);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xF) & 31u));
    eax = edx;
    if (0x1F) _cf = (int)(((eax) >> ((0x1F) - 1)) & 1);
    eax = eax >> 0x1F;
    PUSH32(esp, ecx);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edi)) >> 32) & 1);
    eax = eax + edi;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032072Fu); RECOMP_ABI_CALL(0x00327730u, sub_00327730); /* call 0x00327730 */

loc_0032072F: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1C)) >> 32) & 1);
    esp = esp + 0x1C;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    POP32(esp, edi);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00320740
 * Original: 0x00320740 - 0x00320769 (41 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320740: ;
    eax = MEM32(0x6E69B0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    MEM32(0x6E69B0) = eax;
    esi = 0x6E6A04;

loc_00320751: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0032075C; /* je: equal / zero */

loc_00320757: ;
    PUSH32(esp, 0x0032075Cu); RECOMP_ABI_CALL(0x00320580u, sub_00320580); /* call 0x00320580 */

loc_0032075C: ;
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6E6A24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x6E6A24 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00320751; /* jl: less (signed <) */

loc_00320767: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00320770
 * Original: 0x00320770 - 0x0032077C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320770(void)
{

loc_00320770: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00320778u); RECOMP_ABI_CALL(0x003205A0u, sub_003205A0); /* call 0x003205A0 */

loc_00320778: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00320780
 * Original: 0x00320780 - 0x003207B8 (56 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320780: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x9D8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00320794; /* je: equal / zero */

loc_0032078E: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00320794: ;
    ecx = MEM32(eax + 0xA50);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    edx = esp + 8;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003207B0u); RECOMP_ABI_CALL(0x003205D0u, sub_003205D0); /* call 0x003205D0 */

loc_003207B0: ;
    eax = MEM32(esp + 0x18);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_003207C0
 * Original: 0x003207C0 - 0x00320829 (105 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003207C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003207C0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    eax = ebx;
    ecx = edi;
    edx = esi;
    PUSH32(esp, 0x003207DBu); RECOMP_ABI_CALL(0x00320770u, sub_00320770); /* call 0x00320770 */

loc_003207DB: ;
    ebp = eax;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320822; /* je: equal / zero */

loc_003207E4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xE08)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xE08) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003207FB; /* jne: not equal / not zero */

loc_003207EC: ;
    eax = MEM32(esi + 0xE04);
    MEM32(edi) = MEM32(edi) + eax;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003207FB: ;
    ecx = MEM32(esi + 0xDD8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00320822; /* je: equal / zero */

loc_00320805: ;
    ecx = MEM32(esi + 0xE00);
    edx = MEM32(esi + 0xDFC);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00320819u); RECOMP_ABI_CALL(0x003208D0u, sub_003208D0); /* call 0x003208D0 */

loc_00320819: ;
    ecx = MEM32(edi);
    esp = esp + 0xC;
    ecx = ecx + eax;
    MEM32(edi) = ecx;

loc_00320822: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00320830
 * Original: 0x00320830 - 0x0032084F (31 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320830: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00320839; /* jne: not equal / not zero */

loc_00320838: ;
    esp += 4; return; /* ret */

loc_00320839: ;
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x14);
    eax = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032084Bu); RECOMP_ABI_CALL(0x00320780u, sub_00320780); /* call 0x00320780 */

loc_0032084B: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00320850
 * Original: 0x00320850 - 0x00320888 (56 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320850: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0032085Bu); RECOMP_ABI_CALL(0x0031D560u, sub_0031D560); /* call 0x0031D560 */

loc_0032085B: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00320873; /* je: equal / zero */

loc_00320862: ;
    PUSH32(esp, 0xFF000121u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0032086Eu); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_0032086E: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00320873: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00320883u); RECOMP_ABI_CALL(0x003207C0u, sub_003207C0); /* call 0x003207C0 */

loc_00320883: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00320890
 * Original: 0x00320890 - 0x003208A0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320890(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00320890: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x40);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_00317380(); return; /* tail jmp 0x00317380 */

}

/**
 * sub_003208A0
 * Original: 0x003208A0 - 0x003208B0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003208A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003208A0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x40);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_003173D0(); return; /* tail jmp 0x003173D0 */

}

/**
 * sub_003208B0
 * Original: 0x003208B0 - 0x003208C0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003208B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003208B0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0x40);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_003172E0(); return; /* tail jmp 0x003172E0 */

}

/**
 * sub_003208C0
 * Original: 0x003208C0 - 0x003208D0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003208C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003208C0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x40);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00317330(); return; /* tail jmp 0x00317330 */

}

/**
 * sub_003208D0
 * Original: 0x003208D0 - 0x00320904 (52 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003208D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003208D0: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    eax = MEM32(esp + 4);
    if (TEST_NZ(_fa, _fb)) goto loc_003208EB; /* jne: not equal / not zero */

loc_003208DC: ;
    eax = eax ^ MEM32(esp + 8);
    eax = ecx;
    SET_LO8(eax, (((int32_t)eax < 0)) ? 1 : 0); /* setl */
    eax = eax + 0x7FFFFFFF;
    esp += 4; return; /* ret */

loc_003208EB: ;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)MEM32(esp + 8);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    edi = edx;
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00320901u); RECOMP_ABI_CALL(0x00342E20u, sub_00342E20); /* call 0x00342E20 */

loc_00320901: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00320910
 * Original: 0x00320910 - 0x00320916 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320910(void)
{

loc_00320910: ;
    eax = 0x42FB00;
    esp += 4; return; /* ret */

}

/**
 * sub_00320920
 * Original: 0x00320920 - 0x0032092B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320920(void)
{

loc_00320920: ;
    ecx = 0; /* xor self */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00320930
 * Original: 0x00320930 - 0x0032093D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320930(void)
{

loc_00320930: ;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00320940
 * Original: 0x00320940 - 0x0032094E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320940(void)
{

loc_00320940: ;
    ecx = 0; /* xor self */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00320950
 * Original: 0x00320950 - 0x0032095D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320950(void)
{

loc_00320950: ;
    MEM32(eax) = 1;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00320960
 * Original: 0x00320960 - 0x00320970 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320960: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0032096F; /* jle: less or equal (signed <=) */

loc_00320964: ;
    PUSH32(esp, 0x00320969u); RECOMP_ABI_CALL(0x00320940u, sub_00320940); /* call 0x00320940 */

loc_00320969: ;
    eax = eax + 0x10;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00320964; /* jne: not equal / not zero */

loc_0032096F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00320970
 * Original: 0x00320970 - 0x0032097A (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320970: ;
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_00320980
 * Original: 0x00320980 - 0x00320995 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320980: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0032098F; /* jl: less (signed <) */

loc_00320987: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0032098F; /* jg: greater (signed >) */

loc_0032098C: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0032098F: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_003209A0
 * Original: 0x003209A0 - 0x003209C5 (37 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003209A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003209A0: ;
    edx = 0; /* xor self */
    ecx = 0; /* xor self */
    eax = eax + 0x180;
    PUSH32(esp, edi);
    /* nop */

loc_003209B0: ;
    edi = ZX8(MEM8(eax + 0x18));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003209C3; /* je: equal / zero */

loc_003209B8: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1A (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003209B0; /* jl: less (signed <) */

loc_003209C1: ;
    eax = edx;

loc_003209C3: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003209D0
 * Original: 0x003209D0 - 0x00320A18 (72 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003209D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003209D0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    esi = esi + 0x60;
    PUSH32(esp, 0x003209E0u); RECOMP_ABI_CALL(0x00320980u, sub_00320980); /* call 0x00320980 */

loc_003209E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003209E6; /* jne: not equal / not zero */

loc_003209E4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003209E6: ;
    eax = 0; /* xor self */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ecx = edi;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM8(ecx + 0x20) = LO8(eax);
    ecx = 8;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00320A20
 * Original: 0x00320A20 - 0x00320A5A (58 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320A20: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    edx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2E (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320A53; /* je: equal / zero */

loc_00320A2A: ;
    /* nop */

loc_00320A30: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320A53; /* je: equal / zero */

loc_00320A35: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00320A53; /* je: equal / zero */

loc_00320A39: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x30 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00320A53; /* jl: less (signed <) */

loc_00320A3E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x39) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x39 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00320A53; /* jg: greater (signed >) */

loc_00320A43: ;
    edx = edx + edx * 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ecx + edx * 2 + -48;
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00320A30; /* jne: not equal / not zero */

loc_00320A53: ;
    ecx = MEM32(esp + 4);
    MEM32(ecx) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00320A60
 * Original: 0x00320A60 - 0x00320AA0 (64 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00320A60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00320A60: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00320A9D; /* ja: above (unsigned >) */

loc_00320A66: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x320AA0); /* switch: 8 entries, 8 targets */
    if (_jt == 0x00320A6Du) goto loc_00320A6D;
    if (_jt == 0x00320A73u) goto loc_00320A73;
    if (_jt == 0x00320A79u) goto loc_00320A79;
    if (_jt == 0x00320A7Fu) goto loc_00320A7F;
    if (_jt == 0x00320A85u) goto loc_00320A85;
    if (_jt == 0x00320A8Bu) goto loc_00320A8B;
    if (_jt == 0x00320A91u) goto loc_00320A91;
    if (_jt == 0x00320A97u) goto loc_00320A97;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00320A6D: ;
    eax = 0x5DA8;
    esp += 4; return; /* ret */

loc_00320A73: ;
    eax = 0x5DC0;
    esp += 4; return; /* ret */

loc_00320A79: ;
    eax = 0x61A8;
    esp += 4; return; /* ret */

loc_00320A7F: ;
    eax = 0x7512;
    esp += 4; return; /* ret */

loc_00320A85: ;
    eax = 0x7530;
    esp += 4; return; /* ret */

loc_00320A8B: ;
    eax = 0xC350;
    esp += 4; return; /* ret */

loc_00320A91: ;
    eax = 0xEA24;
    esp += 4; return; /* ret */

loc_00320A97: ;
    eax = 0xEA60;
    esp += 4; return; /* ret */

loc_00320A9D: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00320AC0
 * Original: 0x00320AC0 - 0x00320AFF (63 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320AC0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00320AD4; /* jb: below (unsigned <) */

loc_00320AC7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xDF (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00320AD4; /* ja: above (unsigned >) */

loc_00320ACE: ;
    eax = 0xC0;
    esp += 4; return; /* ret */

loc_00320AD4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE0 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00320AE8; /* jb: below (unsigned <) */

loc_00320ADB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xEF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xEF (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00320AE8; /* ja: above (unsigned >) */

loc_00320AE2: ;
    eax = 0xE0;
    esp += 4; return; /* ret */

loc_00320AE8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320AF9; /* je: equal / zero */

loc_00320AEF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320AF9; /* je: equal / zero */

loc_00320AF6: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00320AF9: ;
    eax = 0xBD;
    esp += 4; return; /* ret */

}

/**
 * sub_00320B00
 * Original: 0x00320B00 - 0x00320B3D (61 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320B00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00320B00: ;
    eax = MEM32(0x5D3484);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_00320B3C; /* jg: greater (signed >) */

loc_00320B09: ;
    PUSH32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    MEM32(0x5D3484) = eax;
    PUSH32(esp, 0x00320B16u); RECOMP_ABI_CALL(0x00320910u, sub_00320910); /* call 0x00320910 */

loc_00320B16: ;
    esi = MEM32(esp + 0x10);
    edi = MEM32(esp + 0xC);
    MEM32(0x5D3480) = eax;
    eax = esi;
    edx = edi;
    PUSH32(esp, 0x00320B2Cu); RECOMP_ABI_CALL(0x00320960u, sub_00320960); /* call 0x00320960 */

loc_00320B2C: ;
    ecx = edi;
    POP32(esp, edi);
    edx = esi;
    eax = 0x5D3488;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00320930(); return; /* tail jmp 0x00320930 */

loc_00320B3C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00320B40
 * Original: 0x00320B40 - 0x00320B5A (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320B40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00320B40: ;
    eax = MEM32(0x5D3484);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(0x5D3484) = eax;
    if (CMP_G(_fas & _fbs, 0)) goto loc_00320B59; /* jg: greater (signed >) */

loc_00320B4F: ;
    eax = 0x5D3488;
    g_seh_ebp = ebp; sub_00320920(); return; /* tail jmp 0x00320920 */

loc_00320B59: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00320B60
 * Original: 0x00320B60 - 0x00320BB8 (88 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320B60: ;
    eax = MEM32(0x5D348C);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(0x5D3488);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00320B78; /* jl: less (signed <) */

loc_00320B73: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00320B78: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00320B98; /* jle: less or equal (signed <=) */

loc_00320B7F: ;
    ecx = MEM32(0x5D3490);

loc_00320B85: ;
    ebx = ecx;
    PUSH32(esp, 0x00320B8Cu); RECOMP_ABI_CALL(0x00320970u, sub_00320970); /* call 0x00320970 */

loc_00320B8C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00320B98; /* jne: not equal / not zero */

loc_00320B90: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00320B85; /* jl: less (signed <) */

loc_00320B98: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    eax = ebx;
    PUSH32(esp, 0x00320BA7u); RECOMP_ABI_CALL(0x00320950u, sub_00320950); /* call 0x00320950 */

loc_00320BA7: ;
    eax = MEM32(0x5D348C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x5D348C) = eax;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00320BC0
 * Original: 0x00320BC0 - 0x00320BD0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320BC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320BC0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x00320BC9u); RECOMP_ABI_CALL(0x00320940u, sub_00320940); /* call 0x00320940 */

loc_00320BC9: ;
    MEM32(0x5D348C) = MEM32(0x5D348C) - 1;
    _fa = (uint32_t)(MEM32(0x5D348C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00320BD0
 * Original: 0x00320BD0 - 0x00320BF1 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320BD0: ;
    eax = ecx;
    PUSH32(esp, 0x00320BD7u); RECOMP_ABI_CALL(0x00320980u, sub_00320980); /* call 0x00320980 */

loc_00320BD7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00320BE8; /* je: equal / zero */

loc_00320BDB: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6B (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320BEB; /* je: equal / zero */

loc_00320BE3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6E (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00320BEB; /* jge: greater or equal (signed >=) */

loc_00320BE8: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00320BEB: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00320C00
 * Original: 0x00320C00 - 0x00320C38 (56 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00320C00: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    MEM32(edi) = 0;
    PUSH32(esp, 0x00320C14u); RECOMP_ABI_CALL(0x00320BD0u, sub_00320BD0); /* call 0x00320BD0 */

loc_00320C14: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00320C1A; /* jne: not equal / not zero */

loc_00320C18: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00320C1A: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(esp + 0x10));
    PUSH32(esp, 0x00320C28u); RECOMP_ABI_CALL(0x003209A0u, sub_003209A0); /* call 0x003209A0 */

loc_00320C28: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    MEM32(edi) = eax;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00320C40
 * Original: 0x00320C40 - 0x00320C63 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320C40: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x00320C49u); RECOMP_ABI_CALL(0x00320BD0u, sub_00320BD0); /* call 0x00320BD0 */

loc_00320C49: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00320C4E; /* jne: not equal / not zero */

loc_00320C4D: ;
    esp += 4; return; /* ret */

loc_00320C4E: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(eax + 0x80);
    edx = MEM32(esp + 8);
    MEM32(edx) = ecx;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00320C70
 * Original: 0x00320C70 - 0x00320C94 (36 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320C70: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x00320C79u); RECOMP_ABI_CALL(0x00320BD0u, sub_00320BD0); /* call 0x00320BD0 */

loc_00320C79: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00320C7E; /* jne: not equal / not zero */

loc_00320C7D: ;
    esp += 4; return; /* ret */

loc_00320C7E: ;
    eax = MEM32(ecx + 4);
    ecx = ZX8(MEM8(eax + 0x84));
    edx = MEM32(esp + 8);
    MEM32(edx) = ecx;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00320CA0
 * Original: 0x00320CA0 - 0x00320CC4 (36 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320CA0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x00320CA9u); RECOMP_ABI_CALL(0x00320BD0u, sub_00320BD0); /* call 0x00320BD0 */

loc_00320CA9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00320CAE; /* jne: not equal / not zero */

loc_00320CAD: ;
    esp += 4; return; /* ret */

loc_00320CAE: ;
    eax = MEM32(ecx + 4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x88);
    edx = MEM32(esp + 8);
    MEM32(edx) = ecx;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00320CD0
 * Original: 0x00320CD0 - 0x00320CF3 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320CD0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x00320CD9u); RECOMP_ABI_CALL(0x00320BD0u, sub_00320BD0); /* call 0x00320BD0 */

loc_00320CD9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00320CDE; /* jne: not equal / not zero */

loc_00320CDD: ;
    esp += 4; return; /* ret */

loc_00320CDE: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(eax + 0x8C);
    edx = MEM32(esp + 8);
    MEM32(edx) = ecx;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00320D00
 * Original: 0x00320D00 - 0x00320D34 (52 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320D00: ;
    PUSH32(esp, 0x42FB34);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00320D0Bu); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_00320D0B: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00320D13; /* jne: not equal / not zero */

loc_00320D12: ;
    esp += 4; return; /* ret */

loc_00320D13: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    eax = eax + 4;
    PUSH32(esp, 0x00320D20u); RECOMP_ABI_CALL(0x00320A20u, sub_00320A20); /* call 0x00320A20 */

loc_00320D20: ;
    edx = MEM32(esp + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    PUSH32(esp, 0x00320D2Bu); RECOMP_ABI_CALL(0x00320A20u, sub_00320A20); /* call 0x00320A20 */

loc_00320D2B: ;
    esp = esp + 8;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00320D40
 * Original: 0x00320D40 - 0x00320D64 (36 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320D40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320D40: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x00320D49u); RECOMP_ABI_CALL(0x00320BD0u, sub_00320BD0); /* call 0x00320BD0 */

loc_00320D49: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00320D4E; /* jne: not equal / not zero */

loc_00320D4D: ;
    esp += 4; return; /* ret */

loc_00320D4E: ;
    eax = MEM32(ecx + 4);
    ecx = ZX8(MEM8(eax + 0xB0));
    edx = MEM32(esp + 8);
    MEM32(edx) = ecx;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00320D70
 * Original: 0x00320D70 - 0x00320D94 (36 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320D70: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x00320D79u); RECOMP_ABI_CALL(0x00320BD0u, sub_00320BD0); /* call 0x00320BD0 */

loc_00320D79: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00320D7E; /* jne: not equal / not zero */

loc_00320D7D: ;
    esp += 4; return; /* ret */

loc_00320D7E: ;
    eax = MEM32(ecx + 4);
    ecx = ZX8(MEM8(eax + 0xB1));
    edx = MEM32(esp + 8);
    MEM32(edx) = ecx;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00320DA0
 * Original: 0x00320DA0 - 0x00320DC4 (36 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320DA0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x00320DA9u); RECOMP_ABI_CALL(0x00320BD0u, sub_00320BD0); /* call 0x00320BD0 */

loc_00320DA9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00320DAE; /* jne: not equal / not zero */

loc_00320DAD: ;
    esp += 4; return; /* ret */

loc_00320DAE: ;
    eax = MEM32(ecx + 4);
    ecx = ZX8(MEM8(eax + 0xB2));
    edx = MEM32(esp + 8);
    MEM32(edx) = ecx;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00320DD0
 * Original: 0x00320DD0 - 0x00320DF4 (36 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320DD0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x00320DD9u); RECOMP_ABI_CALL(0x00320BD0u, sub_00320BD0); /* call 0x00320BD0 */

loc_00320DD9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00320DDE; /* jne: not equal / not zero */

loc_00320DDD: ;
    esp += 4; return; /* ret */

loc_00320DDE: ;
    eax = MEM32(ecx + 4);
    ecx = ZX8(MEM8(eax + 0xB3));
    edx = MEM32(esp + 8);
    MEM32(edx) = ecx;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00320E00
 * Original: 0x00320E00 - 0x00320E2B (43 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320E00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320E00: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x00320E09u); RECOMP_ABI_CALL(0x00320BD0u, sub_00320BD0); /* call 0x00320BD0 */

loc_00320E09: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00320E13; /* je: equal / zero */

loc_00320E0D: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), 0x6E (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00320E16; /* jge: greater or equal (signed >=) */

loc_00320E13: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00320E16: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(eax + 0xB4);
    edx = MEM32(esp + 8);
    MEM32(edx) = ecx;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00320E30
 * Original: 0x00320E30 - 0x00320E53 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320E30: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x00320E39u); RECOMP_ABI_CALL(0x00320BD0u, sub_00320BD0); /* call 0x00320BD0 */

loc_00320E39: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00320E3E; /* jne: not equal / not zero */

loc_00320E3D: ;
    esp += 4; return; /* ret */

loc_00320E3E: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(eax + 0xB8);
    edx = MEM32(esp + 8);
    MEM32(edx) = ecx;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00320E60
 * Original: 0x00320E60 - 0x00320E83 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320E60: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x00320E69u); RECOMP_ABI_CALL(0x00320BD0u, sub_00320BD0); /* call 0x00320BD0 */

loc_00320E69: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00320E6E; /* jne: not equal / not zero */

loc_00320E6D: ;
    esp += 4; return; /* ret */

loc_00320E6E: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(eax + 0xBC);
    edx = MEM32(esp + 8);
    MEM32(edx) = ecx;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00320E90
 * Original: 0x00320E90 - 0x00320EB3 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320E90: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x00320E99u); RECOMP_ABI_CALL(0x00320BD0u, sub_00320BD0); /* call 0x00320BD0 */

loc_00320E99: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00320E9E; /* jne: not equal / not zero */

loc_00320E9D: ;
    esp += 4; return; /* ret */

loc_00320E9E: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(eax + 0xC0);
    edx = MEM32(esp + 8);
    MEM32(edx) = ecx;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00320EC0
 * Original: 0x00320EC0 - 0x00320ED2 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320EC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00320EC0: ;
    PUSH32(esp, 0x00320EC5u); RECOMP_ABI_CALL(0x00320BD0u, sub_00320BD0); /* call 0x00320BD0 */

loc_00320EC5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00320ECA; /* jne: not equal / not zero */

loc_00320EC9: ;
    esp += 4; return; /* ret */

loc_00320ECA: ;
    eax = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_003209A0(); return; /* tail jmp 0x003209A0 */

}

/**
 * sub_00320EE0
 * Original: 0x00320EE0 - 0x00320F18 (56 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320EE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320EE0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(esp + 0xC));
    PUSH32(esp, 0x00320EEFu); RECOMP_ABI_CALL(0x00320EC0u, sub_00320EC0); /* call 0x00320EC0 */

loc_00320EEF: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00320F03; /* je: equal / zero */

loc_00320EF5: ;
    eax = esi;
    PUSH32(esp, 0x00320EFCu); RECOMP_ABI_CALL(0x00320AC0u, sub_00320AC0); /* call 0x00320AC0 */

loc_00320EFC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320F07; /* je: equal / zero */

loc_00320F03: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00320F07: ;
    eax = ZX8(MEM8(ecx + 0x19));
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = eax;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00320F20
 * Original: 0x00320F20 - 0x00320F5F (63 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320F20: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(esp + 0xC));
    PUSH32(esp, 0x00320F2Fu); RECOMP_ABI_CALL(0x00320EC0u, sub_00320EC0); /* call 0x00320EC0 */

loc_00320F2F: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00320F4F; /* je: equal / zero */

loc_00320F35: ;
    eax = esi;
    PUSH32(esp, 0x00320F3Cu); RECOMP_ABI_CALL(0x00320AC0u, sub_00320AC0); /* call 0x00320AC0 */

loc_00320F3C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00320F4F; /* jne: not equal / not zero */

loc_00320F43: ;
    SET_LO8(edx, MEM8(ecx + 0x19));
    eax = 1;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320F53; /* je: equal / zero */

loc_00320F4F: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00320F53: ;
    ecx = ZX8(MEM8(ecx + 0x1A));
    edx = MEM32(esp + 0x10);
    MEM32(edx) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00320F60
 * Original: 0x00320F60 - 0x00320F98 (56 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320F60: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(esp + 0xC));
    PUSH32(esp, 0x00320F6Fu); RECOMP_ABI_CALL(0x00320EC0u, sub_00320EC0); /* call 0x00320EC0 */

loc_00320F6F: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00320F83; /* je: equal / zero */

loc_00320F75: ;
    eax = esi;
    PUSH32(esp, 0x00320F7Cu); RECOMP_ABI_CALL(0x00320AC0u, sub_00320AC0); /* call 0x00320AC0 */

loc_00320F7C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320F87; /* je: equal / zero */

loc_00320F83: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00320F87: ;
    eax = ZX8(MEM8(ecx + 0x1B));
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = eax;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00320FA0
 * Original: 0x00320FA0 - 0x00320FD7 (55 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320FA0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(esp + 0xC));
    PUSH32(esp, 0x00320FAFu); RECOMP_ABI_CALL(0x00320EC0u, sub_00320EC0); /* call 0x00320EC0 */

loc_00320FAF: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00320FC3; /* je: equal / zero */

loc_00320FB5: ;
    eax = esi;
    PUSH32(esp, 0x00320FBCu); RECOMP_ABI_CALL(0x00320AC0u, sub_00320AC0); /* call 0x00320AC0 */

loc_00320FBC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320FC7; /* je: equal / zero */

loc_00320FC3: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00320FC7: ;
    eax = MEM32(ecx + 0x1C);
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = eax;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00320FE0
 * Original: 0x00320FE0 - 0x00321018 (56 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320FE0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(esp + 0xC));
    PUSH32(esp, 0x00320FEFu); RECOMP_ABI_CALL(0x00320EC0u, sub_00320EC0); /* call 0x00320EC0 */

loc_00320FEF: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00321003; /* je: equal / zero */

loc_00320FF5: ;
    eax = esi;
    PUSH32(esp, 0x00320FFCu); RECOMP_ABI_CALL(0x00320AC0u, sub_00320AC0); /* call 0x00320AC0 */

loc_00320FFC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00321007; /* je: equal / zero */

loc_00321003: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00321007: ;
    eax = ZX8(MEM8(ecx + 0x19));
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = eax;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00321020
 * Original: 0x00321020 - 0x00321061 (65 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321020: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(esp + 0xC));
    PUSH32(esp, 0x0032102Fu); RECOMP_ABI_CALL(0x00320EC0u, sub_00320EC0); /* call 0x00320EC0 */

loc_0032102F: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00321043; /* je: equal / zero */

loc_00321035: ;
    eax = esi;
    PUSH32(esp, 0x0032103Cu); RECOMP_ABI_CALL(0x00320AC0u, sub_00320AC0); /* call 0x00320AC0 */

loc_0032103C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00321047; /* je: equal / zero */

loc_00321043: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00321047: ;
    eax = ZX16(MEM16(ecx + 0x1A));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00321054; /* jne: not equal / not zero */

loc_00321052: ;
    eax = 0; /* xor self */

loc_00321054: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = eax;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00321070
 * Original: 0x00321070 - 0x003210D7 (103 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321070: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(esp + 0xC));
    PUSH32(esp, 0x0032107Fu); RECOMP_ABI_CALL(0x00320EC0u, sub_00320EC0); /* call 0x00320EC0 */

loc_0032107F: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00321093; /* je: equal / zero */

loc_00321085: ;
    eax = esi;
    PUSH32(esp, 0x0032108Cu); RECOMP_ABI_CALL(0x00320AC0u, sub_00320AC0); /* call 0x00320AC0 */

loc_0032108C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00321097; /* je: equal / zero */

loc_00321093: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00321097: ;
    eax = ZX8(MEM8(ecx + 0x1C));
    edx = MEM32(esp + 0x10);
    MEM32(edx) = eax;
    esi = ZX8(MEM8(ecx + 0x1D));
    eax = eax << 4;
    esi = esi >> 4;
    esi = esi | eax;
    esi = esi & 0xFFF;
    MEM32(edx) = esi;
    eax = ZX8(MEM8(ecx + 0x1D));
    edx = MEM32(esp + 0x14);
    MEM32(edx) = eax;
    ecx = ZX8(MEM8(ecx + 0x1E));
    eax = eax << 8;
    ecx = ecx | eax;
    ecx = ecx & 0xFFF;
    MEM32(edx) = ecx;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003210E0
 * Original: 0x003210E0 - 0x0032111D (61 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003210E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003210E0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(esp + 0xC));
    PUSH32(esp, 0x003210EFu); RECOMP_ABI_CALL(0x00320EC0u, sub_00320EC0); /* call 0x00320EC0 */

loc_003210EF: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00321103; /* je: equal / zero */

loc_003210F5: ;
    eax = esi;
    PUSH32(esp, 0x003210FCu); RECOMP_ABI_CALL(0x00320AC0u, sub_00320AC0); /* call 0x00320AC0 */

loc_003210FC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00321107; /* je: equal / zero */

loc_00321103: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00321107: ;
    eax = ZX8(MEM8(ecx + 0x1F));
    PUSH32(esp, 0x00321110u); RECOMP_ABI_CALL(0x00320A60u, sub_00320A60); /* call 0x00320A60 */

loc_00321110: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = eax;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00321120
 * Original: 0x00321120 - 0x00321144 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321120: ;
    PUSH32(esp, 0x00321125u); RECOMP_ABI_CALL(0x00320AC0u, sub_00320AC0); /* call 0x00320AC0 */

loc_00321125: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032112F; /* je: equal / zero */

loc_0032112C: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0032112F: ;
    eax = MEM32(esp + 4);
    SET_LO8(eax, MEM8(eax + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0032112C; /* ja: above (unsigned >) */

loc_0032113A: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00321150
 * Original: 0x00321150 - 0x00321174 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321150: ;
    PUSH32(esp, 0x00321155u); RECOMP_ABI_CALL(0x00320AC0u, sub_00320AC0); /* call 0x00320AC0 */

loc_00321155: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032115F; /* je: equal / zero */

loc_0032115C: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0032115F: ;
    eax = MEM32(esp + 4);
    SET_LO8(eax, MEM8(eax + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0032115C; /* ja: above (unsigned >) */

loc_0032116A: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00321180
 * Original: 0x00321180 - 0x003211EC (108 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321180: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), 0x6E (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0032118D; /* jge: greater or equal (signed >=) */

loc_0032118A: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0032118D: ;
    PUSH32(esp, esi);
    esi = ZX8(MEM8(esp + 0xC));
    eax = esi;
    PUSH32(esp, 0x0032119Au); RECOMP_ABI_CALL(0x00320AC0u, sub_00320AC0); /* call 0x00320AC0 */

loc_0032119A: ;
    eax = eax - 0xC0;
    if ((eax == 0)) goto loc_003211CB; /* je: equal / zero */

loc_003211A1: ;
    eax = eax - 0x20;
    if ((eax == 0)) goto loc_003211AA; /* je: equal / zero */

loc_003211A6: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003211AA: ;
    PUSH32(esp, 0x003211AFu); RECOMP_ABI_CALL(0x00320EC0u, sub_00320EC0); /* call 0x00320EC0 */

loc_003211AF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003211A6; /* je: equal / zero */

loc_003211B3: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0x003211BBu); RECOMP_ABI_CALL(0x00321150u, sub_00321150); /* call 0x00321150 */

loc_003211BB: ;
    ecx = MEM32(esp + 0x14);
    esp = esp + 4;
    MEM32(ecx) = eax;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003211CB: ;
    PUSH32(esp, 0x003211D0u); RECOMP_ABI_CALL(0x00320EC0u, sub_00320EC0); /* call 0x00320EC0 */

loc_003211D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003211A6; /* je: equal / zero */

loc_003211D4: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0x003211DCu); RECOMP_ABI_CALL(0x00321120u, sub_00321120); /* call 0x00321120 */

loc_003211DC: ;
    edx = MEM32(esp + 0x14);
    esp = esp + 4;
    MEM32(edx) = eax;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003211F0
 * Original: 0x003211F0 - 0x0032122C (60 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003211F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003211F0: ;
    ecx = MEM32(esp + 4);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x24));
    esp = esp - 0x24;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00321201u); RECOMP_ABI_CALL(0x003209D0u, sub_003209D0); /* call 0x003209D0 */

loc_00321201: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0032120C; /* jne: not equal / not zero */

loc_00321208: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_0032120C: ;
    edx = MEM32(esp + 0x30);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 8;
    PUSH32(esp, 0x0032121Fu); RECOMP_ABI_CALL(0x00320D00u, sub_00320D00); /* call 0x00320D00 */

loc_0032121F: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_00321230
 * Original: 0x00321230 - 0x00321269 (57 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321230: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(esp + 0xC));
    PUSH32(esp, 0x0032123Fu); RECOMP_ABI_CALL(0x00320EC0u, sub_00320EC0); /* call 0x00320EC0 */

loc_0032123F: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00321254; /* je: equal / zero */

loc_00321245: ;
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, 0x0032124Du); RECOMP_ABI_CALL(0x00321150u, sub_00321150); /* call 0x00321150 */

loc_0032124D: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00321258; /* jne: not equal / not zero */

loc_00321254: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00321258: ;
    eax = ZX8(MEM8(edx + 0x21));
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = eax;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00321270
 * Original: 0x00321270 - 0x003212A9 (57 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321270: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(esp + 0xC));
    PUSH32(esp, 0x0032127Fu); RECOMP_ABI_CALL(0x00320EC0u, sub_00320EC0); /* call 0x00320EC0 */

loc_0032127F: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00321294; /* je: equal / zero */

loc_00321285: ;
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, 0x0032128Du); RECOMP_ABI_CALL(0x00321150u, sub_00321150); /* call 0x00321150 */

loc_0032128D: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00321298; /* jne: not equal / not zero */

loc_00321294: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00321298: ;
    eax = ZX8(MEM8(edx + 0x22));
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = eax;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003212B0
 * Original: 0x003212B0 - 0x003212ED (61 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003212B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003212B0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(esp + 0xC));
    PUSH32(esp, 0x003212BFu); RECOMP_ABI_CALL(0x00320EC0u, sub_00320EC0); /* call 0x00320EC0 */

loc_003212BF: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003212D4; /* je: equal / zero */

loc_003212C5: ;
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, 0x003212CDu); RECOMP_ABI_CALL(0x00321150u, sub_00321150); /* call 0x00321150 */

loc_003212CD: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003212D8; /* jne: not equal / not zero */

loc_003212D4: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003212D8: ;
    ecx = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(edx + 0x23));
    POP32(esp, esi);
    eax = eax & 1;
    MEM32(ecx) = eax;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_003212F0
 * Original: 0x003212F0 - 0x00321330 (64 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003212F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003212F0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(esp + 0xC));
    PUSH32(esp, 0x003212FFu); RECOMP_ABI_CALL(0x00320EC0u, sub_00320EC0); /* call 0x00320EC0 */

loc_003212FF: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00321314; /* je: equal / zero */

loc_00321305: ;
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, 0x0032130Du); RECOMP_ABI_CALL(0x00321150u, sub_00321150); /* call 0x00321150 */

loc_0032130D: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00321318; /* jne: not equal / not zero */

loc_00321314: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00321318: ;
    ecx = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(edx + 0x23));
    POP32(esp, esi);
    eax = eax >> 4;
    eax = eax & 1;
    MEM32(ecx) = eax;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00321330
 * Original: 0x00321330 - 0x00321369 (57 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321330: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(esp + 0xC));
    PUSH32(esp, 0x0032133Fu); RECOMP_ABI_CALL(0x00320EC0u, sub_00320EC0); /* call 0x00320EC0 */

loc_0032133F: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00321354; /* je: equal / zero */

loc_00321345: ;
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, 0x0032134Du); RECOMP_ABI_CALL(0x00321150u, sub_00321150); /* call 0x00321150 */

loc_0032134D: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00321358; /* jne: not equal / not zero */

loc_00321354: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00321358: ;
    eax = ZX8(MEM8(edx + 0x24));
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = eax;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00321370
 * Original: 0x00321370 - 0x003213B4 (68 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321370: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(esp + 0xC));
    PUSH32(esp, 0x0032137Fu); RECOMP_ABI_CALL(0x00320EC0u, sub_00320EC0); /* call 0x00320EC0 */

loc_0032137F: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00321394; /* je: equal / zero */

loc_00321385: ;
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, 0x0032138Du); RECOMP_ABI_CALL(0x00321150u, sub_00321150); /* call 0x00321150 */

loc_0032138D: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00321398; /* jne: not equal / not zero */

loc_00321394: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00321398: ;
    eax = ZX8(MEM8(edx + 0x25));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3F (32-bit) */
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_003213AD; /* jle: less or equal (signed <=) */

loc_003213A7: ;
    MEM32(ecx) = 0xFFFFFFFFu;

loc_003213AD: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003213C0
 * Original: 0x003213C0 - 0x00321404 (68 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003213C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003213C0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(esp + 0xC));
    PUSH32(esp, 0x003213CFu); RECOMP_ABI_CALL(0x00320EC0u, sub_00320EC0); /* call 0x00320EC0 */

loc_003213CF: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003213E4; /* je: equal / zero */

loc_003213D5: ;
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, 0x003213DDu); RECOMP_ABI_CALL(0x00321150u, sub_00321150); /* call 0x00321150 */

loc_003213DD: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003213E8; /* jne: not equal / not zero */

loc_003213E4: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003213E8: ;
    eax = ZX8(MEM8(edx + 0x26));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3F (32-bit) */
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_003213FD; /* jle: less or equal (signed <=) */

loc_003213F7: ;
    MEM32(ecx) = 0xFFFFFFFFu;

loc_003213FD: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00321410
 * Original: 0x00321410 - 0x00321457 (71 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321410: ;
    PUSH32(esp, esi);
    esi = ZX8(MEM8(esp + 0xC));
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = edi;
    PUSH32(esp, 0x00321422u); RECOMP_ABI_CALL(0x00320EC0u, sub_00320EC0); /* call 0x00320EC0 */

loc_00321422: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00321440; /* je: equal / zero */

loc_00321428: ;
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, 0x00321430u); RECOMP_ABI_CALL(0x00321150u, sub_00321150); /* call 0x00321150 */

loc_00321430: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00321440; /* je: equal / zero */

loc_00321437: ;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xC), 0xD2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00321445; /* jge: greater or equal (signed >=) */

loc_00321440: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00321445: ;
    eax = ZX8(MEM8(edx + 0x27));
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    MEM32(ecx) = eax;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00321460
 * Original: 0x00321460 - 0x003214E7 (135 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321460(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00321460: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    ecx = ebx;
    MEM32(ebp) = 0;
    PUSH32(esp, 0x00321478u); RECOMP_ABI_CALL(0x00320970u, sub_00320970); /* call 0x00320970 */

loc_00321478: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003214A6; /* je: equal / zero */

loc_0032147D: ;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 8), 0x800 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003214A0; /* jb: below (unsigned <) */

loc_00321486: ;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 4);
    PUSH32(esp, edi);
    esi = esi + 0x20;
    ecx = 6;
    edi = 0x42FB3C;
    eax = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    POP32(esp, edi);
    POP32(esp, esi);
    if ((eax == 0)) goto loc_003214AB; /* je: equal / zero */

loc_003214A0: ;
    MEM32(ebx) = 0xFFFFFFFFu;

loc_003214A6: ;
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003214AB: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    MEM32(ebx) = 2;
    PUSH32(esp, 0x003214C1u); RECOMP_ABI_CALL(0x003211F0u, sub_003211F0); /* call 0x003211F0 */

loc_003214C1: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003214A6; /* je: equal / zero */

loc_003214C8: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    eax = eax + ecx;
    MEM32(ebx + 0xC) = eax;
    MEM32(ebp) = 1;
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003214F0
 * Original: 0x003214F0 - 0x003214F6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003214F0(void)
{

loc_003214F0: ;
    eax = 0x42FB58;
    esp += 4; return; /* ret */

}

/**
 * sub_00321500
 * Original: 0x00321500 - 0x00321510 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321500: ;
    eax = MEM32(0x5D3498);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0032150F; /* jle: less or equal (signed <=) */

loc_00321509: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x5D3498) = eax;

loc_0032150F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00321510
 * Original: 0x00321510 - 0x0032153C (44 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00321510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00321510: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00321539; /* je: equal / zero */

loc_00321518: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_00321539; /* jl: less (signed <) */

loc_00321520: ;
    PUSH32(esp, 1);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x12)) >> 32) & 1);
    eax = eax + 0x12;
    PUSH32(esp, 0x3FD470);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00321530u); RECOMP_ABI_CALL(0x00343260u, sub_00343260); /* call 0x00343260 */

loc_00321530: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_00321539: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00321540
 * Original: 0x00321540 - 0x0032156C (44 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00321540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00321540: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00321569; /* je: equal / zero */

loc_00321548: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_00321569; /* jl: less (signed <) */

loc_00321550: ;
    PUSH32(esp, 1);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x13)) >> 32) & 1);
    eax = eax + 0x13;
    PUSH32(esp, 0x3DD4F4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00321560u); RECOMP_ABI_CALL(0x00343260u, sub_00343260); /* call 0x00343260 */

loc_00321560: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_00321569: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00321570
 * Original: 0x00321570 - 0x003215C0 (80 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00321570: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003215BC; /* je: equal / zero */

loc_00321579: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_003215BC; /* jl: less (signed <) */

loc_00321581: ;
    SET_LO16(eax, MEM16(esi + 0x10));
    PUSH32(esp, 2);
    ecx = esp + 0xC;
    PUSH32(esp, 0x42FB8C);
    PUSH32(esp, ecx);
    MEM16(esp + 0x14) = LO16(eax);
    PUSH32(esp, 0x0032159Bu); RECOMP_ABI_CALL(0x00343260u, sub_00343260); /* call 0x00343260 */

loc_0032159B: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003215BC; /* je: equal / zero */

loc_003215A2: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3FD46C);
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x14)) >> 32) & 1);
    esi = esi + 0x14;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003215B2u); RECOMP_ABI_CALL(0x00343260u, sub_00343260); /* call 0x00343260 */

loc_003215B2: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003215BC: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003215C0
 * Original: 0x003215C0 - 0x003215CC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003215C0(void)
{
    int _cf = 0; /* carry flag */

loc_003215C0: ;
    eax = MEM32(esp + 4);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x15;
    esp += 4; return; /* ret */

}

/**
 * sub_003215D0
 * Original: 0x003215D0 - 0x003215EA (26 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003215D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003215D0: ;
    _fa = (uint32_t)(MEM32(0x5D3498)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5D3498), 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003215E9; /* jge: greater or equal (signed >=) */

loc_003215D9: ;
    PUSH32(esp, 0x003215DEu); RECOMP_ABI_CALL(0x003214F0u, sub_003214F0); /* call 0x003214F0 */

loc_003215DE: ;
    MEM32(0x5D3494) = eax;
    MEM32(0x5D3498) = MEM32(0x5D3498) + 1;
    _fa = (uint32_t)(MEM32(0x5D3498)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003215E9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003215F0
 * Original: 0x003215F0 - 0x0032165C (108 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003215F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003215F0: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    MEM32(ebx) = 0;
    MEM32(ebp) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00321659; /* je: equal / zero */

loc_0032160F: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00321659; /* jle: less or equal (signed <=) */

loc_00321617: ;
    PUSH32(esp, esi);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, edi);
    /* nop */

loc_00321620: ;
    SET_LO8(ecx, MEM8(edx));
    eax = 0x3D5788;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032164B; /* jne: not equal / not zero */

loc_0032162B: ;
    ecx = 2;
    edi = 0x42FB90;
    esi = edx;
    eax = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((eax != 0)) goto loc_0032164B; /* jne: not equal / not zero */

loc_0032163D: ;
    PUSH32(esp, edx);
    MEM32(ebx) = edx;
    PUSH32(esp, 0x00321645u); RECOMP_ABI_CALL(0x003215C0u, sub_003215C0); /* call 0x003215C0 */

loc_00321645: ;
    esp = esp + 4;
    MEM32(ebp) = eax;

loc_0032164B: ;
    eax = MEM32(esp + 0x14);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    if ((_fa != 0)) goto loc_00321620; /* jne: not equal / not zero */

loc_00321657: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00321659: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00321660
 * Original: 0x00321660 - 0x0032169B (59 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321660: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x1C68);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    edx = edx + 0x14C;
    eax = 0; /* xor self */
    ecx = ecx + 0x161C;
    /* nop */

loc_00321680: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00321691; /* je: equal / zero */

loc_00321684: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 0x5C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00321680; /* jl: less (signed <) */

loc_0032168D: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00321691: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xB8);
    eax = eax + edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003216A0
 * Original: 0x003216A0 - 0x003216E3 (67 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003216A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003216A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x1C68);
    edx = MEM32(eax + 0x148);
    ecx = eax + 0x14C;
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_003216D1; /* jle: less or equal (signed <=) */

loc_003216BE: ;
    edi = MEM32(esp + 0x10);

loc_003216C2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003216D6; /* je: equal / zero */

loc_003216C6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 0xB8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003216C2; /* jl: less (signed <) */

loc_003216D1: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003216D6: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x5C);
    POP32(esp, edi);
    eax = eax + esi + 0x1618;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003216F0
 * Original: 0x003216F0 - 0x00321702 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003216F0(void)
{

loc_003216F0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x1C68);
    MEM32(ecx + 0x7C) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00321710
 * Original: 0x00321710 - 0x0032171E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321710(void)
{

loc_00321710: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x1C68);
    eax = MEM32(ecx + 0x7C);
    esp += 4; return; /* ret */

}

/**
 * sub_00321720
 * Original: 0x00321720 - 0x00321735 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321720(void)
{

loc_00321720: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x1C68);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x80) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00321740
 * Original: 0x00321740 - 0x003217A6 (102 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321740: ;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032174Bu); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0032174B: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx + 0x1C68);
    eax = MEM32(edx + 0x148);
    esp = esp + 4;
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = edx + 0x14C;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00321787; /* jle: less or equal (signed <=) */

loc_0032176A: ;
    PUSH32(esp, esi);
    esi = eax;
    /* nop */

loc_00321770: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032177C; /* je: equal / zero */

loc_00321777: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032177D; /* jne: not equal / not zero */

loc_0032177C: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0032177D: ;
    ecx = ecx + 0xB8;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00321770; /* jne: not equal / not zero */

loc_00321786: ;
    POP32(esp, esi);

loc_00321787: ;
    _fa = (uint32_t)(MEM32(edx + 0x7C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x7C), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00321794; /* jne: not equal / not zero */

loc_0032178D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00321794; /* jne: not equal / not zero */

loc_00321791: ;
    edi = edi | 0xFFFFFFFFu;

loc_00321794: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0032179Eu); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_0032179E: ;
    esp = esp + 4;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003217B0
 * Original: 0x003217B0 - 0x00321817 (103 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003217B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003217B0: ;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003217BBu); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_003217BB: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx + 0x1C68);
    ecx = MEM32(eax + 0x148);
    esi = eax + 0x14C;
    esp = esp + 4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_003217FF; /* jle: less or equal (signed <=) */

loc_003217DA: ;
    /* nop */

loc_003217E0: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003217EC; /* jne: not equal / not zero */

loc_003217E5: ;
    edx = MEM32(esi + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003217F9; /* je: equal / zero */

loc_003217EC: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 0xB8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003217E0; /* jl: less (signed <) */

loc_003217F7: ;
    goto loc_003217FF;

loc_003217F9: ;
    MEM32(esi) = 1;

loc_003217FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00321805; /* jne: not equal / not zero */

loc_00321803: ;
    esi = 0; /* xor self */

loc_00321805: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0032180Fu); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_0032180F: ;
    esp = esp + 4;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00321820
 * Original: 0x00321820 - 0x0032182F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321820: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0032182E; /* je: equal / zero */

loc_00321828: ;
    MEM32(eax) = 0;

loc_0032182E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00321830
 * Original: 0x00321830 - 0x0032183F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321830: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0032183E; /* je: equal / zero */

loc_00321838: ;
    MEM32(eax) = 2;

loc_0032183E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00321840
 * Original: 0x00321840 - 0x0032184F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321840: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0032184E; /* je: equal / zero */

loc_00321848: ;
    MEM32(eax) = 4;

loc_0032184E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00321850
 * Original: 0x00321850 - 0x00321869 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321850: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00321868; /* je: equal / zero */

loc_00321858: ;
    edx = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 3;
    MEM32(eax) = ecx;

loc_00321868: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00321870
 * Original: 0x00321870 - 0x00321889 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321870: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00321888; /* je: equal / zero */

loc_00321878: ;
    edx = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 2;
    MEM32(eax) = ecx;

loc_00321888: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00321890
 * Original: 0x00321890 - 0x003218FF (111 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321890: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0032189A; /* jne: not equal / not zero */

loc_00321894: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0032189A: ;
    edx = MEM32(ecx + 0x48);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x48);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003218AC; /* jge: greater or equal (signed >=) */

loc_003218A5: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003218AC: ;
    if (CMP_LE(_fas, _fbs)) goto loc_003218B2; /* jle: less or equal (signed <=) */

loc_003218AE: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003218B2: ;
    edx = MEM32(ecx + 0x8C);
    esi = MEM32(eax + 0x8C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003218A5; /* jl: less (signed <) */

loc_003218C2: ;
    if (CMP_G(_fas, _fbs)) goto loc_003218AE; /* jg: greater (signed >) */

loc_003218C4: ;
    edx = MEM32(ecx + 0x88);
    esi = MEM32(eax + 0x88);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003218A5; /* jl: less (signed <) */

loc_003218D4: ;
    if (CMP_G(_fas, _fbs)) goto loc_003218AE; /* jg: greater (signed >) */

loc_003218D6: ;
    ecx = MEM32(ecx + 0x6C);
    eax = MEM32(eax + 0x6C);
    edx = ecx;
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x200 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003218A5; /* jg: greater (signed >) */

loc_003218E8: ;
    edx = eax;
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x200 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003218AE; /* jg: greater (signed >) */

loc_003218F4: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    SET_LO8(edx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    POP32(esp, esi);
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00321900
 * Original: 0x00321900 - 0x003219B5 (181 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321900(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00321900: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = esp + 0xC;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032190Fu); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0032190F: ;
    ecx = MEM32(esp + 0x1C);
    edi = MEM32(ecx + 0x1C68);
    eax = MEM32(edi + 0x148);
    edx = MEM32(esp + 0x20);
    esp = esp + 4;
    ebx = 0; /* xor self */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(edx) = 0;
    esi = edi + 0x14C;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_003219A0; /* jle: less or equal (signed <=) */

loc_0032193A: ;
    MEM32(esp + 0x18) = eax;
    edi = edi;

loc_00321940: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032194C; /* je: equal / zero */

loc_00321947: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032195C; /* jne: not equal / not zero */

loc_0032194C: ;
    ecx = esi;
    eax = ebx;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00321956u); RECOMP_ABI_CALL(0x00321890u, sub_00321890); /* call 0x00321890 */

loc_00321956: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0032195C; /* je: equal / zero */

loc_0032195A: ;
    ebx = esi;

loc_0032195C: ;
    eax = MEM32(esp + 0x18);
    esi = esi + 0xB8;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;
    if ((_fa != 0)) goto loc_00321940; /* jne: not equal / not zero */

loc_0032196D: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003219A0; /* jne: not equal / not zero */

loc_00321972: ;
    eax = MEM32(edi + 0x7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00321994; /* je: equal / zero */

loc_00321979: ;
    eax = MEM32(esp + 0x1C);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM32(eax) = ebp;
    PUSH32(esp, 0x00321989u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_00321989: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00321994: ;
    eax = MEM32(edi + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003219A0; /* jne: not equal / not zero */

loc_0032199E: ;
    ebx = 0; /* xor self */

loc_003219A0: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003219AAu); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_003219AA: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003219C0
 * Original: 0x003219C0 - 0x00321AA8 (232 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003219C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003219C0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = esp + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003219D1u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_003219D1: ;
    ecx = MEM32(esp + 0x24);
    ebp = MEM32(ecx + 0x1C68);
    eax = MEM32(ebp + 0x148);
    ebx = 0; /* xor self */
    esp = esp + 4;
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    esi = ebp + 0x14C;
    MEM32(esp + 0x10) = ebx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00321A4C; /* jle: less or equal (signed <=) */

loc_003219F6: ;
    MEM32(esp + 0x14) = eax;
    /* nop */

loc_00321A00: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00321A0C; /* je: equal / zero */

loc_00321A07: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00321A37; /* jne: not equal / not zero */

loc_00321A0C: ;
    edx = MEM32(esp + 0x10);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    eax = ebx;
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0x00321A1Eu); RECOMP_ABI_CALL(0x00321890u, sub_00321890); /* call 0x00321890 */

loc_00321A1E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00321A28; /* je: equal / zero */

loc_00321A22: ;
    edi = ebx;
    ebx = esi;
    goto loc_00321A37;

loc_00321A28: ;
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0x00321A31u); RECOMP_ABI_CALL(0x00321890u, sub_00321890); /* call 0x00321890 */

loc_00321A31: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00321A37; /* je: equal / zero */

loc_00321A35: ;
    edi = esi;

loc_00321A37: ;
    eax = MEM32(esp + 0x14);
    esi = esi + 0xB8;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    if ((_fa != 0)) goto loc_00321A00; /* jne: not equal / not zero */

loc_00321A48: ;
    ecx = MEM32(esp + 0x20);

loc_00321A4C: ;
    _fa = (uint32_t)(MEM32(ecx + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x48), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00321A8F; /* jne: not equal / not zero */

loc_00321A52: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00321A8F; /* jle: less or equal (signed <=) */

loc_00321A5B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00321A67; /* jne: not equal / not zero */

loc_00321A60: ;
    eax = MEM32(ebp + 0x7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00321A8F; /* je: equal / zero */

loc_00321A67: ;
    PUSH32(esp, 0xF);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00321A6Fu); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_00321A6F: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00321A91; /* je: equal / zero */

loc_00321A76: ;
    ecx = MEM32(edi + 0x3C);
    edx = MEM32(edi + 0x38);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00321A88u); RECOMP_ABI_CALL(0x00320780u, sub_00320780); /* call 0x00320780 */

loc_00321A88: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00321A91; /* jne: not equal / not zero */

loc_00321A8F: ;
    edi = 0; /* xor self */

loc_00321A91: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00321A9Bu); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_00321A9B: ;
    esp = esp + 4;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00321AB0
 * Original: 0x00321AB0 - 0x00321AC4 (20 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321AB0(void)
{
    int _cf = 0; /* carry flag */

loc_00321AB0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00321ABAu); RECOMP_ABI_CALL(0x003219C0u, sub_003219C0); /* call 0x003219C0 */

loc_00321ABA: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00321AD0
 * Original: 0x00321AD0 - 0x00321AD6 (6 bytes, 2 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321AD0(void)
{

loc_00321AD0: ;
    eax = 0x42FB9C;
    esp += 4; return; /* ret */

}

/**
 * sub_00321AE0
 * Original: 0x00321AE0 - 0x00321AFF (31 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321AE0: ;
    eax = MEM32(0x5D34A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00321AFE; /* jle: less or equal (signed <=) */

loc_00321AE9: ;
    PUSH32(esp, 0x00321AEEu); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00321AEE: ;
    PUSH32(esp, 0x00321AF3u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00321AF3: ;
    PUSH32(esp, 0x00321AF8u); RECOMP_ABI_CALL(0x00321F50u, sub_00321F50); /* call 0x00321F50 */

loc_00321AF8: ;
    MEM32(0x5D34A0) = MEM32(0x5D34A0) - 1;
    _fa = (uint32_t)(MEM32(0x5D34A0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00321AFE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00321B00
 * Original: 0x00321B00 - 0x00321B14 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321B00(void)
{

loc_00321B00: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(0x6E6328) = eax;
    MEM32(0x6E632C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00321B20
 * Original: 0x00321B20 - 0x00321B43 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00321B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321B20: ;
    edx = MEM32(0x6E6324);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00321B40; /* jle: less or equal (signed <=) */

loc_00321B2C: ;
    eax = 0x6E6338;

loc_00321B31: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00321B42; /* je: equal / zero */

loc_00321B36: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 0x90;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00321B31; /* jl: less (signed <) */

loc_00321B40: ;
    eax = 0; /* xor self */

loc_00321B42: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00321B50
 * Original: 0x00321B50 - 0x00321BAC (92 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321B50(void)
{

loc_00321B50: ;
    eax = 0; /* xor self */
    PUSH32(esp, edi);
    ecx = 0x24;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(edx + 4) = eax;
    MEM32(edx + 8) = eax;
    MEM32(edx + 0xC) = eax;
    MEM32(edx + 0x2C) = eax;
    MEM32(edx + 0x38) = eax;
    eax = esi + 0x1F;
    eax = eax & 0xFFFFFFE0u;
    MEM32(edx + 0x3C) = eax;
    eax = eax + 0x400;
    MEM32(edx + 0x40) = eax;
    eax = eax + 0x400;
    MEM32(edx + 0x44) = eax;
    eax = eax + 0x400;
    MEM32(edx + 0x48) = eax;
    eax = MEM32(esp + 8);
    MEM32(edx + 0x28) = 1;
    MEM32(edx + 0x54) = esi;
    MEM32(edx + 0x58) = eax;
    MEM32(edx + 0x64) = 0xFFFFFFFFu;
    MEM32(edx) = 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00321BB0
 * Original: 0x00321BB0 - 0x00321BCE (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321BB0: ;
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    edx = MEM32(esp + 4);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = eax + ecx;
    eax = eax * 8 + 0x205D;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00321BD0
 * Original: 0x00321BD0 - 0x00321C01 (49 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321BD0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00321C00; /* je: equal / zero */

loc_00321BD8: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x30);
    MEM32(eax) = 0;
    eax = MEM32(eax + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00321BEBu); RECOMP_ABI_CALL(0x00329F50u, sub_00329F50); /* call 0x00329F50 */

loc_00321BEB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00321BF1u); RECOMP_ABI_CALL(0x00329E50u, sub_00329E50); /* call 0x00329E50 */

loc_00321BF1: ;
    eax = MEM32(0x6E6320);
    esp = esp + 8;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x6E6320) = eax;
    POP32(esp, esi);

loc_00321C00: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00321C10
 * Original: 0x00321C10 - 0x00321C38 (40 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321C10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321C10: ;
    edx = MEM32(0x6E6330);
    eax = MEM32(0x6E6328);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(0x6E6330) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_00321C37; /* je: equal / zero */

loc_00321C26: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(0x6E632C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00321C34u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00321C34: ;
    esp = esp + 8;

loc_00321C37: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00321C40
 * Original: 0x00321C40 - 0x00321C4A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321C40(void)
{

loc_00321C40: ;
    eax = MEM32(esp + 4);
    MEM32(0x6E6334) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00321C50
 * Original: 0x00321C50 - 0x00321C56 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321C50(void)
{

loc_00321C50: ;
    eax = MEM32(0x6E6334);
    esp += 4; return; /* ret */

}

/**
 * sub_00321C60
 * Original: 0x00321C60 - 0x00321C66 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321C60(void)
{

loc_00321C60: ;
    eax = MEM32(0x5D34A4);
    esp += 4; return; /* ret */

}

/**
 * sub_00321C70
 * Original: 0x00321C70 - 0x00321C9E (46 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321C70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00321C70: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0x12A;
    edi = 0x6E6320;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 1);
    MEM32(0x6E6324) = 8;
    PUSH32(esp, 0x00321C90u); RECOMP_ABI_CALL(0x00321C40u, sub_00321C40); /* call 0x00321C40 */

loc_00321C90: ;
    esp = esp + 4;
    PUSH32(esp, 0x00321C98u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00321C98: ;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_0032A840(); return; /* tail jmp 0x0032A840 */

}

/**
 * sub_00321CA0
 * Original: 0x00321CA0 - 0x00321D41 (161 bytes, 64 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321CA0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00321CA6u); RECOMP_ABI_CALL(0x00321B20u, sub_00321B20); /* call 0x00321B20 */

loc_00321CA6: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00321CAE; /* jne: not equal / not zero */

loc_00321CAC: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00321CAE: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00321CBDu); RECOMP_ABI_CALL(0x00321BB0u, sub_00321BB0); /* call 0x00321BB0 */

loc_00321CBD: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00321CDB; /* je: equal / zero */

loc_00321CC5: ;
    PUSH32(esp, 0x42FC10);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00321CD3u); RECOMP_ABI_CALL(0x00321C10u, sub_00321C10); /* call 0x00321C10 */

loc_00321CD3: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00321CDB: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    edx = edi;
    PUSH32(esp, 0x00321CE7u); RECOMP_ABI_CALL(0x00321B50u, sub_00321B50); /* call 0x00321B50 */

loc_00321CE7: ;
    esp = esp + 4;
    PUSH32(esp, 0x00321CEFu); RECOMP_ABI_CALL(0x0032A460u, sub_0032A460); /* call 0x0032A460 */

loc_00321CEF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00321D0D; /* jne: not equal / not zero */

loc_00321CF3: ;
    PUSH32(esp, 0x42FBF0);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00321CFFu); RECOMP_ABI_CALL(0x00321C10u, sub_00321C10); /* call 0x00321C10 */

loc_00321CFF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00321D05u); RECOMP_ABI_CALL(0x00321BD0u, sub_00321BD0); /* call 0x00321BD0 */

loc_00321D05: ;
    esp = esp + 0x10;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00321D0D: ;
    MEM32(edi + 0x24) = eax;
    PUSH32(esp, 0x00321D15u); RECOMP_ABI_CALL(0x00329EF0u, sub_00329EF0); /* call 0x00329EF0 */

loc_00321D15: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00321D33; /* jne: not equal / not zero */

loc_00321D19: ;
    PUSH32(esp, 0x42FBD0);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00321D25u); RECOMP_ABI_CALL(0x00321C10u, sub_00321C10); /* call 0x00321C10 */

loc_00321D25: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00321D2Bu); RECOMP_ABI_CALL(0x00321BD0u, sub_00321BD0); /* call 0x00321BD0 */

loc_00321D2B: ;
    esp = esp + 0x10;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00321D33: ;
    MEM32(edi + 0x30) = eax;
    MEM32(0x6E6320) = MEM32(0x6E6320) + 1;
    _fa = (uint32_t)(MEM32(0x6E6320)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00321D50
 * Original: 0x00321D50 - 0x00321D88 (56 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321D50: ;
    _fa = (uint32_t)(MEM32(0x5D34A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5D34A0), 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00321D87; /* jge: greater or equal (signed >=) */

loc_00321D59: ;
    PUSH32(esp, 0x00321D5Eu); RECOMP_ABI_CALL(0x00321AD0u, sub_00321AD0); /* call 0x00321AD0 */

loc_00321D5E: ;
    MEM32(0x5D349C) = eax;
    PUSH32(esp, 0x00321D68u); RECOMP_ABI_CALL(0x00321C70u, sub_00321C70); /* call 0x00321C70 */

loc_00321D68: ;
    PUSH32(esp, 0x00321D6Du); RECOMP_ABI_CALL(0x00321F40u, sub_00321F40); /* call 0x00321F40 */

loc_00321D6D: ;
    PUSH32(esp, 0x00321D72u); RECOMP_ABI_CALL(0x0032A730u, sub_0032A730); /* call 0x0032A730 */

loc_00321D72: ;
    PUSH32(esp, 0x00321D77u); RECOMP_ABI_CALL(0x00329EE0u, sub_00329EE0); /* call 0x00329EE0 */

loc_00321D77: ;
    MEM32(0x5D34A0) = MEM32(0x5D34A0) + 1;
    _fa = (uint32_t)(MEM32(0x5D34A0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x5D34A4) = 0;

loc_00321D87: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00321D90
 * Original: 0x00321D90 - 0x00321D9C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321D90(void)
{

loc_00321D90: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00321DA0
 * Original: 0x00321DA0 - 0x00321DB3 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321DA0(void)
{

loc_00321DA0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00321DC0
 * Original: 0x00321DC0 - 0x00321DD7 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321DC0(void)
{

loc_00321DC0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 8);
    edx = MEM32(esp + 8);
    MEM32(edx) = ecx;
    eax = MEM32(eax + 0xC);
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00321DE0
 * Original: 0x00321DE0 - 0x00321DEC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321DE0(void)
{

loc_00321DE0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x10) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00321DF0
 * Original: 0x00321DF0 - 0x00321E56 (102 bytes, 36 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321DF0: ;
    esp = esp - 0x10;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x24);
    MEM32(esi + 0x18) = eax;
    MEM32(esp + 8) = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x42F1A8);
    MEM32(esi + 0x1C) = ecx;
    MEM32(esp + 0x14) = ecx;
    ecx = esp + 0x10;
    PUSH32(esp, 0x42FC3C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00321E2Bu); RECOMP_ABI_CALL(0x0030EE90u, sub_0030EE90); /* call 0x0030EE90 */

loc_00321E2B: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00321E36; /* jne: not equal / not zero */

loc_00321E32: ;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    goto loc_00321E40;

loc_00321E36: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);

loc_00321E40: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00321E46u); RECOMP_ABI_CALL(0x0032A480u, sub_0032A480); /* call 0x0032A480 */

loc_00321E46: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    MEM32(esi + 0x14) = 1;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00321E60
 * Original: 0x00321E60 - 0x00321E92 (50 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321E60: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00321E7F; /* je: equal / zero */

loc_00321E6A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = 0;
    MEM32(ecx) = 0;
    esp += 4; return; /* ret */

loc_00321E7F: ;
    edx = MEM32(eax + 0x18);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 0x1C);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00321EA0
 * Original: 0x00321EA0 - 0x00321EA8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321EA0(void)
{

loc_00321EA0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x64);
    esp += 4; return; /* ret */

}

/**
 * sub_00321EB0
 * Original: 0x00321EB0 - 0x00321EB8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321EB0(void)
{

loc_00321EB0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x68);
    esp += 4; return; /* ret */

}

/**
 * sub_00321EC0
 * Original: 0x00321EC0 - 0x00321ED7 (23 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321EC0(void)
{

loc_00321EC0: ;
    edx = MEM32(eax + 4);
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    esi = esi + edx;
    edx = MEM32(eax + 8);
    edx = edx - ecx;
    MEM32(eax) = esi;
    MEM32(eax + 8) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00321EE0
 * Original: 0x00321EE0 - 0x00321EFE (30 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321EE0(void)
{

loc_00321EE0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = eax << 1;
    MEM32(ecx + 0xC) = eax;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x2C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00321F00
 * Original: 0x00321F00 - 0x00321F34 (52 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321F00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00321F00: ;
    eax = MEM32(esp + 8);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    ecx = eax;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    ecx = ecx << 1;
    eax = esi + 4;
    PUSH32(esp, 0x00321F1Au); RECOMP_ABI_CALL(0x00321EC0u, sub_00321EC0); /* call 0x00321EC0 */

loc_00321F1A: ;
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    eax = esi + 0x14;
    PUSH32(esp, 0x00321F2Bu); RECOMP_ABI_CALL(0x00321EC0u, sub_00321EC0); /* call 0x00321EC0 */

loc_00321F2B: ;
    eax = esi + 0x24;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00321EC0(); return; /* tail jmp 0x00321EC0 */

}

/**
 * sub_00321F40
 * Original: 0x00321F40 - 0x00321F45 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321F40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00321F40: ;
    g_seh_ebp = ebp; sub_003215D0(); return; /* tail jmp 0x003215D0 */

}

/**
 * sub_00321F50
 * Original: 0x00321F50 - 0x00321F55 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321F50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00321F50: ;
    g_seh_ebp = ebp; sub_00321500(); return; /* tail jmp 0x00321500 */

}

/**
 * sub_00321F60
 * Original: 0x00321F60 - 0x00321F73 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321F60(void)
{

loc_00321F60: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x5C) = ecx;
    MEM32(eax + 0x60) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00321F80
 * Original: 0x00321F80 - 0x00321F8F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321F80: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x5C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_00321F90
 * Original: 0x00321F90 - 0x00321FA5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321F90(void)
{

loc_00321F90: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x5C);
    eax = MEM32(eax + 0x60);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00321FA1u); RECOMP_ABI_CALL(0x00321510u, sub_00321510); /* call 0x00321510 */

loc_00321FA1: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00321FB0
 * Original: 0x00321FB0 - 0x00321FC5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321FB0(void)
{

loc_00321FB0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x5C);
    eax = MEM32(eax + 0x60);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00321FC1u); RECOMP_ABI_CALL(0x00321540u, sub_00321540); /* call 0x00321540 */

loc_00321FC1: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00321FD0
 * Original: 0x00321FD0 - 0x00321FE5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321FD0(void)
{

loc_00321FD0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x5C);
    eax = MEM32(eax + 0x60);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00321FE1u); RECOMP_ABI_CALL(0x00321570u, sub_00321570); /* call 0x00321570 */

loc_00321FE1: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00321FF0
 * Original: 0x00321FF0 - 0x00322045 (85 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321FF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00321FF6u); RECOMP_ABI_CALL(0x00321EA0u, sub_00321EA0); /* call 0x00321EA0 */

loc_00321FF6: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00322010; /* je: equal / zero */

loc_00321FFE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0032200D; /* je: equal / zero */

loc_00322002: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = ecx;
    esp += 4; return; /* ret */

loc_0032200D: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00322010: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = 0; /* xor self */
    PUSH32(esp, 0x00322019u); RECOMP_ABI_CALL(0x00321F80u, sub_00321F80); /* call 0x00321F80 */

loc_00322019: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00322041; /* jne: not equal / not zero */

loc_00322021: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00322027u); RECOMP_ABI_CALL(0x00321F90u, sub_00321F90); /* call 0x00321F90 */

loc_00322027: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00322041; /* jne: not equal / not zero */

loc_0032202F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00322035u); RECOMP_ABI_CALL(0x00321EB0u, sub_00321EB0); /* call 0x00321EB0 */

loc_00322035: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    eax = 1;
    if (TEST_Z(_fa, _fb)) goto loc_00322043; /* je: equal / zero */

loc_00322041: ;
    eax = edi;

loc_00322043: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00322050
 * Original: 0x00322050 - 0x0032214B (251 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00322050(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00322050: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0032205Bu); RECOMP_ABI_CALL(0x00321C60u, sub_00321C60); /* call 0x00321C60 */

loc_0032205B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00322075; /* jne: not equal / not zero */

loc_00322060: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 0x00322069u); RECOMP_ABI_CALL(0x00321FF0u, sub_00321FF0); /* call 0x00321FF0 */

loc_00322069: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00322075; /* je: equal / zero */

loc_0032206E: ;
    eax = 1;
    goto loc_00322077;

loc_00322075: ;
    eax = 0; /* xor self */

loc_00322077: ;
    ecx = MEM32(esp + 0xC);
    esi = MEM32(ecx + 0x3C);
    edx = MEM32(esp + 0x10);
    esi = esi + 0x201F;
    _fa = (uint32_t)(MEM32(edx + 0x74)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x74), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003220D6; /* jne: not equal / not zero */

loc_0032208E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003220B3; /* je: equal / zero */

loc_00322092: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003220DF; /* je: equal / zero */

loc_00322097: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0032209Du); RECOMP_ABI_CALL(0x00321FD0u, sub_00321FD0); /* call 0x00321FD0 */

loc_0032209D: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003220FB; /* je: equal / zero */

loc_003220A5: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003220ADu); RECOMP_ABI_CALL(0x0032C3D0u, sub_0032C3D0); /* call 0x0032C3D0 */

loc_003220AD: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003220B3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032210F; /* je: equal / zero */

loc_003220B8: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003220BEu); RECOMP_ABI_CALL(0x00321FD0u, sub_00321FD0); /* call 0x00321FD0 */

loc_003220BE: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00322134; /* jne: not equal / not zero */

loc_003220C6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003220D0u); RECOMP_ABI_CALL(0x0032B870u, sub_0032B870); /* call 0x0032B870 */

loc_003220D0: ;
    esp = esp + 0x10;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003220D6: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0032210A; /* je: equal / zero */

loc_003220DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003220ED; /* jne: not equal / not zero */

loc_003220DF: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003220E7u); RECOMP_ABI_CALL(0x0032C400u, sub_0032C400); /* call 0x0032C400 */

loc_003220E7: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003220ED: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003220F3u); RECOMP_ABI_CALL(0x00321FD0u, sub_00321FD0); /* call 0x00321FD0 */

loc_003220F3: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003220A5; /* jne: not equal / not zero */

loc_003220FB: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00322104u); RECOMP_ABI_CALL(0x0032B870u, sub_0032B870); /* call 0x0032B870 */

loc_00322104: ;
    esp = esp + 0x10;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0032210A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00322126; /* jne: not equal / not zero */

loc_0032210F: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 8) = edi;
    MEM32(esp + 4) = ebx;
    g_seh_ebp = ebp; sub_0032C400(); return; /* tail jmp 0x0032C400 */

loc_00322126: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0032212Cu); RECOMP_ABI_CALL(0x00321FD0u, sub_00321FD0); /* call 0x00321FD0 */

loc_0032212C: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003220C6; /* je: equal / zero */

loc_00322134: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 8) = edi;
    MEM32(esp + 4) = ebx;
    g_seh_ebp = ebp; sub_0032C3D0(); return; /* tail jmp 0x0032C3D0 */

}

/**
 * sub_00322150
 * Original: 0x00322150 - 0x00322196 (70 bytes, 25 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00322150: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x41 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00322169; /* jg: greater (signed >) */

loc_00322158: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0032218D; /* je: equal / zero */

loc_0032215A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x11 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032218D; /* je: equal / zero */

loc_0032215F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x21) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x21 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00322190; /* je: equal / zero */

loc_00322164: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x31) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x31 (32-bit) */
    goto loc_0032217A;

loc_00322169: ;
    eax = eax - 0xF1;
    if ((eax == 0)) goto loc_0032218D; /* je: equal / zero */

loc_00322170: ;
    eax = eax - 0x10;
    if ((eax == 0)) goto loc_00322190; /* je: equal / zero */

loc_00322175: ;
    eax = eax - 0xF00;

loc_0032217A: ;
    if (_flags /* je: equal / zero */) goto loc_0032218D;

loc_0032217C: ;
    PUSH32(esp, 0x42FC44);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0032218Au); RECOMP_ABI_CALL(0x00321C10u, sub_00321C10); /* call 0x00321C10 */

loc_0032218A: ;
    esp = esp + 0xC;

loc_0032218D: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00322190: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_003221A0
 * Original: 0x003221A0 - 0x003221BA (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003221A0(void)
{

loc_003221A0: ;
    ecx = MEM32(eax + 0xC);
    edx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, edx);
    edx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003221B6u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_003221B6: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_003221C0
 * Original: 0x003221C0 - 0x00322238 (120 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003221C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003221C0: ;
    esp = esp - 0x24;
    ecx = MEM32(esi + 0x48);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esi + 4);
    MEM32(esp + 4) = eax;
    eax = MEM32(esi + 0x44);
    MEM32(esp + 8) = eax;
    MEM32(esp + 0x14) = eax;
    eax = edi;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0x003221EAu); RECOMP_ABI_CALL(0x00322150u, sub_00322150); /* call 0x00322150 */

loc_003221EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    eax = MEM32(esi + 0x48);
    if (CMP_NE(_fa, _fb)) goto loc_003221F7; /* jne: not equal / not zero */

loc_003221F2: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));

loc_003221F7: ;
    MEM32(esp + 0x18) = eax;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0032220E; /* jne: not equal / not zero */

loc_00322202: ;
    ecx = MEM32(esi + 8);
    ecx = ecx << 2;
    MEM32(esp + 0x1C) = ecx;
    goto loc_00322212;

loc_0032220E: ;
    MEM32(esp + 0x1C) = eax;

loc_00322212: ;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x2C), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032221E; /* jne: not equal / not zero */

loc_00322219: ;
    edi = MEM32(edi + 0x3C);
    goto loc_00322220;

loc_0032221E: ;
    edi = 0; /* xor self */

loc_00322220: ;
    PUSH32(esp, edi);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00322230u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00322230: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_00322240
 * Original: 0x00322240 - 0x003222E2 (162 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00322240: ;
    esp = esp - 0x24;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 0x44);
    MEM32(esp) = eax;
    eax = MEM32(esi + 0x48);
    MEM32(esp + 8) = eax;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 4) = ecx;
    MEM32(esp + 0xC) = edi;
    MEM32(esp + 0x10) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0032227B; /* jne: not equal / not zero */

loc_0032226F: ;
    ecx = MEM32(esi + 8);
    ecx = ecx << 2;
    MEM32(esp + 0x18) = ecx;
    goto loc_0032227F;

loc_0032227B: ;
    MEM32(esp + 0x18) = eax;

loc_0032227F: ;
    PUSH32(esp, 0);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00322290u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00322290: ;
    eax = MEM32(esi + 0x44);
    ecx = MEM32(esi + 4);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(ebx + 8);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(esi + 0x48);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = edi;
    MEM32(esp + 0x14) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_003222C7; /* jne: not equal / not zero */

loc_003222BB: ;
    edx = MEM32(esi + 8);
    edx = edx << 2;
    MEM32(esp + 0x18) = edx;
    goto loc_003222CB;

loc_003222C7: ;
    MEM32(esp + 0x18) = eax;

loc_003222CB: ;
    eax = MEM32(ebx + 0x3C);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003222DEu); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_003222DE: ;
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_003222F0
 * Original: 0x003222F0 - 0x00322326 (54 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003222F0(void)
{

loc_003222F0: ;
    esp = esp - 0x30;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(eax + 0x44);
    eax = MEM32(eax + 0x48);
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 8) = eax;
    eax = esp;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 4) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    MEM32(esp + 8) = edx;
    PUSH32(esp, 0x00322322u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00322322: ;
    esp = esp + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_00322330
 * Original: 0x00322330 - 0x00322373 (67 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322330(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00322330: ;
    eax = MEM32(ecx + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x64 (32-bit) */
    PUSH32(esp, esi);
    esi = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00322342; /* jne: not equal / not zero */

loc_0032233E: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00322342: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032236F; /* jne: not equal / not zero */

loc_00322346: ;
    eax = edx + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x15 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0032236F; /* ja: above (unsigned >) */

loc_0032234E: ;
    eax = ZX8(MEM8(eax + 0x322380));
    { uint32_t _jt = MEM32(eax * 4 + 0x322374); /* switch: 3 entries, 3 targets */
    if (_jt == 0x0032235Cu) goto loc_0032235C;
    if (_jt == 0x0032236Du) goto loc_0032236D;
    if (_jt == 0x0032236Fu) goto loc_0032236F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0032235C: ;
    ecx = MEM32(ecx + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00322365u); RECOMP_ABI_CALL(0x00329ED0u, sub_00329ED0); /* call 0x00329ED0 */

loc_00322365: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032236F; /* je: equal / zero */

loc_0032236D: ;
    esi = 0; /* xor self */

loc_0032236F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003223A0
 * Original: 0x003223A0 - 0x003223B5 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003223A0(void)
{

loc_003223A0: ;
    ecx = MEM32(eax + 0x3C);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x4C);
    edx = MEM32(eax + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003223B1u); RECOMP_ABI_CALL(0x0032A7C0u, sub_0032A7C0); /* call 0x0032A7C0 */

loc_003223B1: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_003223C0
 * Original: 0x003223C0 - 0x003223D5 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003223C0(void)
{

loc_003223C0: ;
    ecx = MEM32(eax + 0x3C);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x4C);
    edx = MEM32(eax + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003223D1u); RECOMP_ABI_CALL(0x0032A800u, sub_0032A800); /* call 0x0032A800 */

loc_003223D1: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_003223E0
 * Original: 0x003223E0 - 0x00322449 (105 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003223E0(void)
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

loc_003223E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    PUSH32(esp, ebp);
    ecx = ebx;
    MEM32(ecx) = eax;
    PUSH32(esp, esi);
    MEM32(ecx + 4) = eax;
    PUSH32(esp, edi);
    MEM32(ecx + 8) = eax;
    edi = 0xFFFFFFF0u;
    MEM32(ecx + 0xC) = eax;
    esi = ebx + 0x10;
    edi = edi - ebx;
    ebp = 0xDC;
    goto loc_00322410;

    /* nop */

loc_00322410: ;
    edx = edi + esi;
    MEM32(esp + 0x10) = edx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = fp_top() * MEMF(0x42FC74); /* fmul dword ptr [0x42fc74] */
    PUSH32(esp, 0x00322426u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00322426: ;
    MEM8(esi) = LO8(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00322410; /* jne: not equal / not zero */

loc_0032242C: ;
    eax = ebx + 0xEC;
    ecx = ecx | 0xFFFFFFFFu;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    POP32(esp, edi);
    MEM32(eax + 8) = ecx;
    POP32(esp, esi);
    MEM32(eax + 0xC) = ecx;
    POP32(esp, ebp);
    MEM32(eax + 0x10) = ecx;
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
 * sub_00322450
 * Original: 0x00322450 - 0x00322465 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322450(void)
{

loc_00322450: ;
    ecx = MEM32(eax + 0x3C);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x4C);
    edx = MEM32(eax + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00322461u); RECOMP_ABI_CALL(0x00329E70u, sub_00329E70); /* call 0x00329E70 */

loc_00322461: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00322470
 * Original: 0x00322470 - 0x00322485 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322470(void)
{

loc_00322470: ;
    ecx = MEM32(eax + 0x3C);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x4C);
    edx = MEM32(eax + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00322481u); RECOMP_ABI_CALL(0x00329EA0u, sub_00329EA0); /* call 0x00329EA0 */

loc_00322481: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00322490
 * Original: 0x00322490 - 0x0032249B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322490(void)
{

loc_00322490: ;
    ecx = MEM32(eax + 0x3C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00322499u); RECOMP_ABI_CALL(0x0032D090u, sub_0032D090); /* call 0x0032D090 */

loc_00322499: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003224A0
 * Original: 0x003224A0 - 0x003224AB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003224A0(void)
{

loc_003224A0: ;
    ecx = MEM32(eax + 0x3C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003224A9u); RECOMP_ABI_CALL(0x0032CD50u, sub_0032CD50); /* call 0x0032CD50 */

loc_003224A9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003224B0
 * Original: 0x003224B0 - 0x00322549 (153 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003224B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003224B0: ;
    esp = esp - 0x34;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(esi + 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esi + 4);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esi + 8);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esi + 0x18);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esp + 0x40);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(esi + 0x28);
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(esi + 0x44);
    MEM32(esp + 8) = eax;
    eax = edi;
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, 0x003224F7u); RECOMP_ABI_CALL(0x00322150u, sub_00322150); /* call 0x00322150 */

loc_003224F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032250A; /* jne: not equal / not zero */

loc_003224FC: ;
    eax = MEM32(esi + 0x48);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    MEM32(esp + 0x10) = eax;
    goto loc_00322511;

loc_0032250A: ;
    edx = MEM32(esi + 0x48);
    MEM32(esp + 0x10) = edx;

loc_00322511: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0032251E; /* jne: not equal / not zero */

loc_00322518: ;
    eax = MEM32(esi + 8);
    eax = eax << 2;

loc_0032251E: ;
    MEM32(esp + 0x14) = eax;
    _fa = (uint32_t)(MEM32(esp + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x44), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032252E; /* jne: not equal / not zero */

loc_00322529: ;
    eax = MEM32(edi + 0x3C);
    goto loc_00322530;

loc_0032252E: ;
    eax = 0; /* xor self */

loc_00322530: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = esp + 0x14;
    ebx = esp + 0x2C;
    PUSH32(esp, 0x00322540u); RECOMP_ABI_CALL(0x00322050u, sub_00322050); /* call 0x00322050 */

loc_00322540: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_00322550
 * Original: 0x00322550 - 0x003225F8 (168 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00322550: ;
    esp = esp - 0x34;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = eax;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    eax = edi;
    PUSH32(esp, 0x00322563u); RECOMP_ABI_CALL(0x003224B0u, sub_003224B0); /* call 0x003224B0 */

loc_00322563: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(esi + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    edx = MEM32(esi + 4);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    edx = edx + eax;
    MEM32(esp + 0x28) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    edx = MEM32(esi + 0x14);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    edx = edx + eax;
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(esi + 0x24);
    edx = edx + eax;
    eax = MEM32(esi + 0x18);
    MEM32(esp + 0x38) = eax;
    eax = MEM32(esi + 0x48);
    MEM32(esp + 0x30) = edx;
    edx = MEM32(esi + 0x44);
    MEM32(esp + 0x14) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    MEM32(esp + 0x18) = eax;
    eax = MEM32(edi + 8);
    MEM32(esp + 0x34) = ecx;
    ecx = MEM32(esi + 0x28);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 8) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_003225CA; /* jne: not equal / not zero */

loc_003225C4: ;
    eax = MEM32(esi + 8);
    eax = eax << 2;

loc_003225CA: ;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x003225D3u); RECOMP_ABI_CALL(0x00321C50u, sub_00321C50); /* call 0x00321C50 */

loc_003225D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003225DD; /* jne: not equal / not zero */

loc_003225D8: ;
    edi = MEM32(edi + 0x3C);
    goto loc_003225DF;

loc_003225DD: ;
    edi = 0; /* xor self */

loc_003225DF: ;
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003225EFu); RECOMP_ABI_CALL(0x0032CD30u, sub_0032CD30); /* call 0x0032CD30 */

loc_003225EF: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_00322600
 * Original: 0x00322600 - 0x00322626 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322600(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00322600: ;
    ecx = MEM32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x11 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032261C; /* je: equal / zero */

loc_00322608: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x21) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x21 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032261D; /* je: equal / zero */

loc_0032260D: ;
    PUSH32(esp, 0x42FC78);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00322619u); RECOMP_ABI_CALL(0x00321C10u, sub_00321C10); /* call 0x00321C10 */

loc_00322619: ;
    esp = esp + 0xC;

loc_0032261C: ;
    esp += 4; return; /* ret */

loc_0032261D: ;
    edx = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_003222F0(); return; /* tail jmp 0x003222F0 */

}

/**
 * sub_00322630
 * Original: 0x00322630 - 0x0032263B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322630(void)
{

loc_00322630: ;
    ecx = MEM32(eax + 0x3C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00322639u); RECOMP_ABI_CALL(0x003223E0u, sub_003223E0); /* call 0x003223E0 */

loc_00322639: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00322640
 * Original: 0x00322640 - 0x003226B0 (112 bytes, 35 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322640(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00322640: ;
    edx = edi;
    ecx = esi;
    PUSH32(esp, 0x00322649u); RECOMP_ABI_CALL(0x00322330u, sub_00322330); /* call 0x00322330 */

loc_00322649: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003226AF; /* jne: not equal / not zero */

loc_0032264E: ;
    eax = edi + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x15 (32-bit) */
    MEM32(esi + 0x38) = edi;
    if (CMP_A(_fa, _fb)) goto loc_003226A0; /* ja: above (unsigned >) */

loc_00322659: ;
    eax = ZX8(MEM8(eax + 0x3226D0));
    { uint32_t _jt = MEM32(eax * 4 + 0x3226B0); /* switch: 8 entries, 8 targets */
    if (_jt == 0x00322667u) goto loc_00322667;
    if (_jt == 0x00322670u) goto loc_00322670;
    if (_jt == 0x00322679u) goto loc_00322679;
    if (_jt == 0x00322682u) goto loc_00322682;
    if (_jt == 0x0032268Bu) goto loc_0032268B;
    if (_jt == 0x00322692u) goto loc_00322692;
    if (_jt == 0x00322699u) goto loc_00322699;
    if (_jt == 0x003226A0u) goto loc_003226A0;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00322667: ;
    edx = ebx;
    eax = esi;
    g_seh_ebp = ebp; sub_003223A0(); return; /* tail jmp 0x003223A0 */

loc_00322670: ;
    edx = ebx;
    eax = esi;
    g_seh_ebp = ebp; sub_003223C0(); return; /* tail jmp 0x003223C0 */

loc_00322679: ;
    edx = ebx;
    eax = esi;
    g_seh_ebp = ebp; sub_00322450(); return; /* tail jmp 0x00322450 */

loc_00322682: ;
    edx = ebx;
    eax = esi;
    g_seh_ebp = ebp; sub_00322470(); return; /* tail jmp 0x00322470 */

loc_0032268B: ;
    eax = esi;
    g_seh_ebp = ebp; sub_00322490(); return; /* tail jmp 0x00322490 */

loc_00322692: ;
    eax = esi;
    g_seh_ebp = ebp; sub_003224A0(); return; /* tail jmp 0x003224A0 */

loc_00322699: ;
    eax = esi;
    g_seh_ebp = ebp; sub_00322630(); return; /* tail jmp 0x00322630 */

loc_003226A0: ;
    PUSH32(esp, 0x42FCB0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003226ACu); RECOMP_ABI_CALL(0x00321C10u, sub_00321C10); /* call 0x00321C10 */

loc_003226AC: ;
    esp = esp + 0xC;

loc_003226AF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003226F0
 * Original: 0x003226F0 - 0x00322803 (275 bytes, 108 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003226F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003226F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x41 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_G(_fas, _fbs)) goto loc_00322796; /* jg: greater (signed >) */

loc_00322704: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0032276C; /* je: equal / zero */

loc_00322706: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x11 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00322744; /* je: equal / zero */

loc_0032270B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x21) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x21 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00322720; /* je: equal / zero */

loc_00322710: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x31) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x31 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003227A9; /* jne: not equal / not zero */

loc_00322719: ;
    edi = 2;
    goto loc_00322771;

loc_00322720: ;
    ebx = MEM32(esp + 0x18);
    edi = 1;
    esi = ebp;
    PUSH32(esp, 0x00322730u); RECOMP_ABI_CALL(0x00322640u, sub_00322640); /* call 0x00322640 */

loc_00322730: ;
    ebx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x18);
    ecx = ebp;
    PUSH32(esp, 0x0032273Fu); RECOMP_ABI_CALL(0x00322550u, sub_00322550); /* call 0x00322550 */

loc_0032273F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00322744: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0032274Au); RECOMP_ABI_CALL(0x003107E0u, sub_003107E0); /* call 0x003107E0 */

loc_0032274A: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003227C1; /* je: equal / zero */

loc_00322752: ;
    ecx = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    eax = ebp;
    PUSH32(esp, 0x00322764u); RECOMP_ABI_CALL(0x003224B0u, sub_003224B0); /* call 0x003224B0 */

loc_00322764: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0032276C: ;
    edi = 3;

loc_00322771: ;
    ebx = MEM32(esp + 0x18);
    esi = ebp;
    PUSH32(esp, 0x0032277Cu); RECOMP_ABI_CALL(0x00322640u, sub_00322640); /* call 0x00322640 */

loc_0032277C: ;
    PUSH32(esp, 1);

loc_0032277E: ;
    eax = MEM32(esp + 0x20);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    eax = ebp;
    PUSH32(esp, 0x0032278Eu); RECOMP_ABI_CALL(0x003224B0u, sub_003224B0); /* call 0x003224B0 */

loc_0032278E: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00322796: ;
    eax = eax - 0xF1;
    if ((eax == 0)) goto loc_003227ED; /* je: equal / zero */

loc_0032279D: ;
    eax = eax - 0x10;
    if ((eax == 0)) goto loc_003227E9; /* je: equal / zero */

loc_003227A2: ;
    eax = eax - 0xF00;
    if ((eax == 0)) goto loc_003227C1; /* je: equal / zero */

loc_003227A9: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x42FC78);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x003227B9u); RECOMP_ABI_CALL(0x00321C10u, sub_00321C10); /* call 0x00321C10 */

loc_003227B9: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003227C1: ;
    ebx = MEM32(esp + 0x18);
    edi = 0x15;
    esi = ebp;
    PUSH32(esp, 0x003227D1u); RECOMP_ABI_CALL(0x00322640u, sub_00322640); /* call 0x00322640 */

loc_003227D1: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    esi = ebx;
    eax = ebp;
    PUSH32(esp, 0x003227E1u); RECOMP_ABI_CALL(0x003224B0u, sub_003224B0); /* call 0x003224B0 */

loc_003227E1: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003227E9: ;
    PUSH32(esp, 0);
    goto loc_0032277E;

loc_003227ED: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003227FBu); RECOMP_ABI_CALL(0x003221A0u, sub_003221A0); /* call 0x003221A0 */

loc_003227FB: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00322810
 * Original: 0x00322810 - 0x003228C2 (178 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322810(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00322810: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = eax;
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x31) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x31 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_G(_fas, _fbs)) goto loc_00322878; /* jg: greater (signed >) */

loc_00322822: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00322871; /* je: equal / zero */

loc_00322824: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x11 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032284C; /* je: equal / zero */

loc_00322829: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x21) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x21 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00322884; /* jne: not equal / not zero */

loc_0032282E: ;
    edi = 1;
    esi = ebp;
    PUSH32(esp, 0x0032283Au); RECOMP_ABI_CALL(0x00322640u, sub_00322640); /* call 0x00322640 */

loc_0032283A: ;
    edi = MEM32(esp + 0x18);
    esi = ebx;
    ebx = ebp;
    PUSH32(esp, 0x00322847u); RECOMP_ABI_CALL(0x00322240u, sub_00322240); /* call 0x00322240 */

loc_00322847: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0032284C: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00322852u); RECOMP_ABI_CALL(0x003107E0u, sub_003107E0); /* call 0x003107E0 */

loc_00322852: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00322898; /* je: equal / zero */

loc_0032285A: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    eax = ebp;
    esi = ebx;
    PUSH32(esp, 0x00322869u); RECOMP_ABI_CALL(0x003221C0u, sub_003221C0); /* call 0x003221C0 */

loc_00322869: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00322871: ;
    edi = 2;
    goto loc_003228A4;

loc_00322878: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x41 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032289F; /* je: equal / zero */

loc_0032287D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1001) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1001 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00322898; /* je: equal / zero */

loc_00322884: ;
    PUSH32(esp, 0x42FC78);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00322890u); RECOMP_ABI_CALL(0x00321C10u, sub_00321C10); /* call 0x00321C10 */

loc_00322890: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00322898: ;
    edi = 0x15;
    goto loc_003228A4;

loc_0032289F: ;
    edi = 3;

loc_003228A4: ;
    esi = ebp;
    PUSH32(esp, 0x003228ABu); RECOMP_ABI_CALL(0x00322640u, sub_00322640); /* call 0x00322640 */

loc_003228AB: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 1);
    eax = ebp;
    esi = ebx;
    PUSH32(esp, 0x003228BAu); RECOMP_ABI_CALL(0x003221C0u, sub_003221C0); /* call 0x003221C0 */

loc_003228BA: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003228D0
 * Original: 0x003228D0 - 0x0032292E (94 bytes, 42 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003228D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003228D0: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esi);
    if (TEST_NZ(_fa, _fb)) goto loc_003228EB; /* jne: not equal / not zero */

loc_003228DA: ;
    PUSH32(esp, 0x42FCA8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003228E5u); RECOMP_ABI_CALL(0x0032D0C0u, sub_0032D0C0); /* call 0x0032D0C0 */

loc_003228E5: ;
    esp = esp + 8;
    MEM32(edi + 4) = eax;

loc_003228EB: ;
    eax = ebp;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    if ((_fa == 0)) goto loc_00322921; /* je: equal / zero */

loc_003228F1: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00322913; /* je: equal / zero */

loc_003228F4: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00322907; /* je: equal / zero */

loc_003228F7: ;
    PUSH32(esp, 0x42FCE4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00322903u); RECOMP_ABI_CALL(0x00321C10u, sub_00321C10); /* call 0x00321C10 */

loc_00322903: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_00322907: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0032290Fu); RECOMP_ABI_CALL(0x003226F0u, sub_003226F0); /* call 0x003226F0 */

loc_0032290F: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_00322913: ;
    PUSH32(esp, ebx);
    eax = esi;
    edx = edi;
    PUSH32(esp, 0x0032291Du); RECOMP_ABI_CALL(0x00322600u, sub_00322600); /* call 0x00322600 */

loc_0032291D: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

loc_00322921: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0x0032292Au); RECOMP_ABI_CALL(0x00322810u, sub_00322810); /* call 0x00322810 */

loc_0032292A: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00322930
 * Original: 0x00322930 - 0x003229BE (142 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322930(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00322930: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    ebp = MEM32(esi + 0x48);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00322952u); RECOMP_ABI_CALL(0x00321DC0u, sub_00321DC0); /* call 0x00321DC0 */

loc_00322952: ;
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, ebp);
    eax = edx + edx;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00322961u); RECOMP_ABI_CALL(0x00321DA0u, sub_00321DA0); /* call 0x00321DA0 */

loc_00322961: ;
    eax = MEM32(esi + 0x48);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    MEM32(esi + 0x48) = eax;
    eax = ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x0032297Eu); RECOMP_ABI_CALL(0x00321EE0u, sub_00321EE0); /* call 0x00321EE0 */

loc_0032297E: ;
    ebx = MEM32(esp + 0x44);
    PUSH32(esp, 0x00322987u); RECOMP_ABI_CALL(0x003228D0u, sub_003228D0); /* call 0x003228D0 */

loc_00322987: ;
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, ebp);
    edx = ecx + ecx;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00322996u); RECOMP_ABI_CALL(0x00321DA0u, sub_00321DA0); /* call 0x00321DA0 */

loc_00322996: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0032299Du); RECOMP_ABI_CALL(0x00321EE0u, sub_00321EE0); /* call 0x00321EE0 */

loc_0032299D: ;
    eax = MEM32(esp + 0x44);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003229A8u); RECOMP_ABI_CALL(0x00321F00u, sub_00321F00); /* call 0x00321F00 */

loc_003229A8: ;
    ecx = MEM32(esp + 0x5C);
    esp = esp + 0x3C;
    ebx = ebx + ecx;
    PUSH32(esp, 0x003229B6u); RECOMP_ABI_CALL(0x003228D0u, sub_003228D0); /* call 0x003228D0 */

loc_003229B6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003229C0
 * Original: 0x003229C0 - 0x00322A03 (67 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003229C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003229C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003229C7u); RECOMP_ABI_CALL(0x00321C60u, sub_00321C60); /* call 0x00321C60 */

loc_003229C7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edi = MEM32(esp + 0xC);
    if (TEST_NZ(_fa, _fb)) goto loc_003229F1; /* jne: not equal / not zero */

loc_003229CF: ;
    esi = edi;
    PUSH32(esp, 0x003229D6u); RECOMP_ABI_CALL(0x00321FF0u, sub_00321FF0); /* call 0x00321FF0 */

loc_003229D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003229F1; /* jne: not equal / not zero */

loc_003229DB: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003229EBu); RECOMP_ABI_CALL(0x00322930u, sub_00322930); /* call 0x00322930 */

loc_003229EB: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003229F1: ;
    esi = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, 0x003229FFu); RECOMP_ABI_CALL(0x003228D0u, sub_003228D0); /* call 0x003228D0 */

loc_003229FF: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00322A10
 * Original: 0x00322A10 - 0x00322A44 (52 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322A10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00322A10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00322A1Bu); RECOMP_ABI_CALL(0x0031D560u, sub_0031D560); /* call 0x0031D560 */

loc_00322A1B: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00322A33; /* je: equal / zero */

loc_00322A22: ;
    PUSH32(esp, 0xFF000161u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00322A2Eu); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_00322A2E: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00322A33: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x31);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00322A3Du); RECOMP_ABI_CALL(0x0031ECA0u, sub_0031ECA0); /* call 0x0031ECA0 */

loc_00322A3D: ;
    esp = esp + 0xC;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00322A50
 * Original: 0x00322A50 - 0x00322A66 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322A50(void)
{
    int _cf = 0; /* carry flag */

loc_00322A50: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x31);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00322A5Cu); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_00322A5C: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00322A70
 * Original: 0x00322A70 - 0x00322A9C (44 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00322A70: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x31);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00322A7Du); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_00322A7D: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00322A95; /* jne: not equal / not zero */

loc_00322A84: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00322A8Cu); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_00322A8C: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00322A95; /* jne: not equal / not zero */

loc_00322A93: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00322A95: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00322AA0
 * Original: 0x00322AA0 - 0x00322ACC (44 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00322AA0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x31);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00322AADu); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_00322AAD: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00322AC5; /* jne: not equal / not zero */

loc_00322AB4: ;
    PUSH32(esp, 0x39);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00322ABCu); RECOMP_ABI_CALL(0x0031EBC0u, sub_0031EBC0); /* call 0x0031EBC0 */

loc_00322ABC: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00322AC5; /* jne: not equal / not zero */

loc_00322AC3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00322AC5: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00322AD0
 * Original: 0x00322AD0 - 0x00322B25 (85 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322AD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00322AD0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00322ADFu); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_00322ADF: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esi + 0xE18);
    eax = eax + ecx;
    MEM32(esi + 0xE18) = eax;
    ecx = eax;
    eax = MEM32(esi + 0xE1C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = eax;
    edx = edx & 0x8000001Fu;
    if (((int32_t)edx >= 0)) goto loc_00322B09; /* jns: not sign (positive) */

loc_00322B04: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx | 0xFFFFFFE0u;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00322B09: ;
    MEM32(esi + edx * 4 + 0xE20) = ecx;
    MEM32(esi + 0xE1C) = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00322B20u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_00322B20: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00322B30
 * Original: 0x00322B30 - 0x00322BB1 (129 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00322B30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esp + 8;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00322B40u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_00322B40: ;
    eax = MEM32(esi + 0xEA8);
    edi = MEM32(esi + 0xEAC);
    ecx = eax;
    ecx = ecx - edi;
    esp = esp + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00322B6C; /* jl: less (signed <) */

loc_00322B58: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    edi = 0; /* xor self */
    PUSH32(esp, 0x00322B64u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_00322B64: ;
    esp = esp + 4;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00322B6C: ;
    eax = eax & 0x8000001Fu;
    edx = MEM32(esp + 0x14);
    edi = 1;
    MEM32(esi + 0xEA0) = edx;
    if (((int32_t)eax >= 0)) goto loc_00322B87; /* jns: not sign (positive) */

loc_00322B82: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFE0u;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00322B87: ;
    ecx = MEM32(esp + 0x10);
    MEM32(esi + eax * 4 + 0xEB0) = ecx;
    eax = MEM32(esi + 0xEA8);
    edx = esp + 0xC;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    MEM32(esi + 0xEA8) = eax;
    PUSH32(esp, 0x00322BA9u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_00322BA9: ;
    esp = esp + 4;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00322BC0
 * Original: 0x00322BC0 - 0x00322C51 (145 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322BC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00322BC0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esp + 8;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00322BD0u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_00322BD0: ;
    ecx = MEM32(esi + 0xEA8);
    ecx = ecx - MEM32(esi + 0xEAC);
    esp = esp + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_00322C01; /* jg: greater (signed >) */

loc_00322BE3: ;
    edx = MEM32(esp + 0x10);
    MEM32(edx) = 0xFFFFFFFFu;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    edi = 0; /* xor self */
    PUSH32(esp, 0x00322BF9u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_00322BF9: ;
    esp = esp + 4;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00322C01: ;
    eax = MEM32(esi + 0xEA0);
    ecx = MEM32(esp + 0x14);
    MEM32(ecx) = eax;
    edx = MEM32(esi + 0xEAC);
    edx = edx & 0x8000001Fu;
    edi = 1;
    if (((int32_t)edx >= 0)) goto loc_00322C25; /* jns: not sign (positive) */

loc_00322C20: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx | 0xFFFFFFE0u;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00322C25: ;
    eax = MEM32(esi + edx * 4 + 0xEB0);
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = eax;
    eax = MEM32(esi + 0xEAC);
    edx = esp + 0xC;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    MEM32(esi + 0xEAC) = eax;
    PUSH32(esp, 0x00322C49u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_00322C49: ;
    esp = esp + 4;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00322C60
 * Original: 0x00322C60 - 0x00322C94 (52 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322C60(void)
{

loc_00322C60: ;
    PUSH32(esp, esi);
    esi = eax;
    MEM32(ecx) = esi;
    eax = MEM32(edx);
    eax = eax + esi;
    MEM32(ecx + 4) = eax;
    eax = eax + MEM32(edx + 4);
    MEM32(ecx + 8) = eax;
    eax = eax + MEM32(edx + 8);
    MEM32(ecx + 0xC) = eax;
    eax = eax + MEM32(edx + 0xC);
    MEM32(ecx + 0x10) = eax;
    eax = eax + MEM32(edx + 0x10);
    MEM32(ecx + 0x14) = eax;
    eax = eax + MEM32(edx + 0x14);
    MEM32(ecx + 0x18) = eax;
    edx = MEM32(edx + 0x18);
    edx = edx + eax;
    MEM32(ecx + 0x1C) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00322CA0
 * Original: 0x00322CA0 - 0x00322CCE (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00322CA0: ;
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi) = 0;
    MEM32(esi + 8) = edx;
    MEM32(esi + 0xC) = eax;
    if (CMP_G(_fas & _fbs, 0)) goto loc_00322CB5; /* jg: greater (signed >) */

loc_00322CB2: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00322CB5: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x14) = 0;
    PUSH32(esp, 0x00322CC7u); RECOMP_ABI_CALL(0x0030F470u, sub_0030F470); /* call 0x0030F470 */

loc_00322CC7: ;
    esp = esp + 0xC;
    MEM32(esi + 4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00322CD0
 * Original: 0x00322CD0 - 0x00322CF9 (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00322CD0: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    PUSH32(esp, esi);
    esi = eax + ecx + 0x1278;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00322CF7; /* jne: not equal / not zero */

loc_00322CE0: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00322CF7; /* je: equal / zero */

loc_00322CE7: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00322CEDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00322CED: ;
    esp = esp + 4;
    MEM32(esi + 0x14) = 0;

loc_00322CF7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00322D00
 * Original: 0x00322D00 - 0x00322D19 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322D00(void)
{

loc_00322D00: ;
    MEM32(eax) = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    ecx = 9;
    MEM32(eax + 4) = edx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x50) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00322D20
 * Original: 0x00322D20 - 0x00322D46 (38 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322D20(void)
{

loc_00322D20: ;
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
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00322D50
 * Original: 0x00322D50 - 0x00322D78 (40 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00322D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00322D50: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00322D71; /* je: equal / zero */

loc_00322D57: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00322D75; /* jne: not equal / not zero */

loc_00322D5C: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00322D71; /* je: equal / zero */

loc_00322D63: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00322D71; /* jle: less or equal (signed <=) */

loc_00322D6A: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00322D75; /* jle: less or equal (signed <=) */

loc_00322D71: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_00322D75: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00322D80
 * Original: 0x00322D80 - 0x00322D8E (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322D80(void)
{

loc_00322D80: ;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00322D90
 * Original: 0x00322D90 - 0x00322DC6 (54 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322D90(void)
{

loc_00322D90: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    ecx = MEM32(esp + 0xC);
    eax = eax + edx;
    ecx = ecx << 4;
    edx = ecx + eax + 0x1288;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax);
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(edx + 8) = ecx;
    eax = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00322DD0
 * Original: 0x00322DD0 - 0x00322E06 (54 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322DD0(void)
{

loc_00322DD0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    edx = MEM32(esp + 0xC);
    eax = eax + ecx + 0x1288;
    edx = edx << 4;
    edx = edx + eax;
    ecx = MEM32(edx);
    eax = MEM32(esp + 0x10);
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(edx + 8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(edx + 0xC);
    MEM32(eax + 0xC) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00322E10
 * Original: 0x00322E10 - 0x00322E7C (108 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322E10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00322E10: ;
    eax = MEM32(esi);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00322E18u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00322E18: ;
    ecx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ebp = eax;
    { uint32_t _icall_target = MEM32(ecx + 0x18); PUSH32(esp, 0x00322E27u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00322E27: ;
    eax = MEM32(ebx + 4);
    esp = esp + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    eax = MEM32(esp + 8);
    if (CMP_GE(_fas, _fbs)) goto loc_00322E60; /* jge: greater or equal (signed >=) */

loc_00322E35: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00322E42u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00322E42: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ecx + 0x1C); PUSH32(esp, 0x00322E4Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00322E4E: ;
    eax = MEM32(esi);
    esp = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00322E59u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00322E59: ;
    esp = esp + 0xC;
    eax = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00322E60: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00322E75u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00322E75: ;
    esp = esp + 0xC;
    eax = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00322E80
 * Original: 0x00322E80 - 0x00322EAA (42 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322E80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00322E80: ;
    eax = MEM32(esi);
    esp = esp - 8;
    ecx = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00322E8Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00322E8F: ;
    eax = MEM32(esi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    SET_LO8(edx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00322EA2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00322EA2: ;
    eax = MEM32(esp + 0x20);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_00322EB0
 * Original: 0x00322EB0 - 0x00322EED (61 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322EB0(void)
{

loc_00322EB0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    PUSH32(esp, esi);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    esi = eax + ecx + 0x12A0;
    PUSH32(esp, 0x00322ECDu); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_00322ECD: ;
    eax = MEM32(esi);
    ecx = MEM32(esp + 0x14);
    MEM32(ecx) = eax;
    edx = MEM32(esi + 4);
    eax = MEM32(esp + 0x18);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM32(eax) = edx;
    PUSH32(esp, 0x00322EE8u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_00322EE8: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00322EF0
 * Original: 0x00322EF0 - 0x00322F29 (57 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322EF0(void)
{

loc_00322EF0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    PUSH32(esp, esi);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    esi = eax + ecx + 0x12A0;
    PUSH32(esp, 0x00322F0Du); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_00322F0D: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEM32(esi) = eax;
    MEM32(esi + 4) = ecx;
    PUSH32(esp, 0x00322F24u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_00322F24: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00322F30
 * Original: 0x00322F30 - 0x00322F42 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322F30(void)
{

loc_00322F30: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    eax = eax + 0x29;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    eax = MEM32(eax + ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00322F50
 * Original: 0x00322F50 - 0x00322F63 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322F50(void)
{

loc_00322F50: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    eax = MEM32(eax + ecx + 0x12AC);
    esp += 4; return; /* ret */

}

/**
 * sub_00322F70
 * Original: 0x00322F70 - 0x00322FCE (94 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322F70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00322F70: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    edi = eax + ecx + 0x1288;
    PUSH32(esp, 0x00322F8Fu); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_00322F8F: ;
    esi = MEM32(edi + 0x20);
    ebx = MEM32(edi + 0x24);
    esp = esp + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00322FB4; /* jne: not equal / not zero */

loc_00322F9C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00322FBB; /* je: equal / zero */

loc_00322FA0: ;
    edi = MEM32(edi + 4);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00322FABu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00322FAB: ;
    esi = eax;
    esi = esi + ebx;
    esp = esp + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */

loc_00322FB4: ;
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00322FBB; /* jge: greater or equal (signed >=) */

loc_00322FB6: ;
    esi = 0x7FFFFFFF;

loc_00322FBB: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00322FC5u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_00322FC5: ;
    esp = esp + 4;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00322FD0
 * Original: 0x00322FD0 - 0x0032300C (60 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00322FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00322FD0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    eax = eax + edx + 0x1278;
    MEM32(ecx) = 0;
    esi = MEM32(eax + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    POP32(esp, esi);
    if (TEST_NZ(_fa, _fb)) goto loc_00323004; /* jne: not equal / not zero */

loc_00322FF5: ;
    PUSH32(esp, 0xFF000401u);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00323000u); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_00323000: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00323004: ;
    edx = MEM32(eax + 0x14);
    MEM32(ecx) = edx;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00323010
 * Original: 0x00323010 - 0x00323033 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00323010: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    eax = eax + ecx + 0x1288;
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00323032; /* jl: less (signed <) */

loc_00323029: ;
    edx = MEM32(esp + 0xC);
    ecx = ecx + edx;
    MEM32(eax + 0x24) = ecx;

loc_00323032: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00323040
 * Original: 0x00323040 - 0x00323077 (55 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00323040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00323040: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    edx = MEM32(eax + ecx + 0x127C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    eax = eax + ecx + 0x1278;
    if (TEST_NZ(_fa, _fb)) goto loc_00323074; /* jne: not equal / not zero */

loc_0032305D: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(eax + 0x4C);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0xB);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00323070u); RECOMP_ABI_CALL(0x00323870u, sub_00323870); /* call 0x00323870 */

loc_00323070: ;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00323074: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00323080
 * Original: 0x00323080 - 0x003230BE (62 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00323080: ;
    ecx = MEM32(esp + 8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x74);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = MEM32(ecx + esi + 0x127C);
    ecx = ecx + esi + 0x1278;
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003230B5; /* jne: not equal / not zero */

loc_003230A0: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x4C);
    PUSH32(esp, edx);
    PUSH32(esp, 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003230B2u); RECOMP_ABI_CALL(0x00323870u, sub_00323870); /* call 0x00323870 */

loc_003230B2: ;
    esp = esp + 0x14;

loc_003230B5: ;
    MEM32(esi + 0x44) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003230C0
 * Original: 0x003230C0 - 0x003230D7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003230C0(void)
{

loc_003230C0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    edx = MEM32(esp + 4);
    MEM32(eax + edx + 0x1280) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003230E0
 * Original: 0x003230E0 - 0x003230F3 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003230E0(void)
{

loc_003230E0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    eax = MEM32(eax + ecx + 0x1280);
    esp += 4; return; /* ret */

}

/**
 * sub_00323100
 * Original: 0x00323100 - 0x00323117 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323100(void)
{

loc_00323100: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    edx = MEM32(esp + 4);
    MEM32(eax + edx + 0x1284) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00323120
 * Original: 0x00323120 - 0x00323133 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323120(void)
{

loc_00323120: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    eax = MEM32(eax + ecx + 0x1284);
    esp += 4; return; /* ret */

}

/**
 * sub_00323140
 * Original: 0x00323140 - 0x00323167 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323140(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00323140: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    ecx = esi;
    PUSH32(esp, 0x0032314Eu); RECOMP_ABI_CALL(0x00322CD0u, sub_00322CD0); /* call 0x00322CD0 */

loc_0032314E: ;
    eax = 1;
    ecx = esi;
    PUSH32(esp, 0x0032315Au); RECOMP_ABI_CALL(0x00322CD0u, sub_00322CD0); /* call 0x00322CD0 */

loc_0032315A: ;
    ecx = esi;
    eax = 2;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00322CD0(); return; /* tail jmp 0x00322CD0 */

}

/**
 * sub_00323170
 * Original: 0x00323170 - 0x003231D8 (104 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00323170: ;
    PUSH32(esp, esi);
    esi = edx;
    edx = ecx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x74);
    ecx = ecx << 2;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = esi + ecx;
    edi = edi + ecx;
    ecx = MEM32(esi);
    eax = eax + edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    SET_LO8(edx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = 1;
    PUSH32(esp, 0x00323199u); RECOMP_ABI_CALL(0x00322D00u, sub_00322D00); /* call 0x00322D00 */

loc_00323199: ;
    ecx = MEM32(edi);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(esi);
    ecx = MEM32(esp + 0xC);
    ecx = ecx + 0x1618;
    POP32(esp, edi);
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = 0;
    MEM32(eax + 0x1C) = 0;
    ecx = 0; /* xor self */
    POP32(esp, esi);

loc_003231C2: ;
    edx = MEM32(eax + 0x20);
    MEM32(ecx + edx) = 0;
    ecx = ecx + 0x5C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x5C0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003231C2; /* jl: less (signed <) */

loc_003231D7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003231E0
 * Original: 0x003231E0 - 0x00323238 (88 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003231E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003231E0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = edx;
    edx = ecx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x74);
    ecx = ecx << 2;
    edi = edi + ecx;
    ebx = ebx + ecx;
    ecx = MEM32(edi);
    eax = eax + edx;
    edx = 0; /* xor self */
    esi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = 2;
    PUSH32(esp, 0x0032320Cu); RECOMP_ABI_CALL(0x00322D00u, sub_00322D00); /* call 0x00322D00 */

loc_0032320C: ;
    ecx = MEM32(ebx);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(edi);
    POP32(esp, edi);
    MEM32(eax + 0x18) = esi;
    MEM32(eax + 0x1C) = esi;
    MEM32(eax + 0x20) = esi;
    MEM32(eax + 0x24) = esi;
    MEM32(eax + 0x28) = esi;
    MEM32(eax + 0x2C) = esi;
    MEM32(eax + 0x30) = esi;
    MEM32(eax + 0x34) = esi;
    MEM32(eax + 0x38) = esi;
    MEM32(eax + 0x3C) = esi;
    POP32(esp, esi);
    MEM32(eax + 0x14) = edx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00323240
 * Original: 0x00323240 - 0x0032325C (28 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323240(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00323240: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x74);
    eax = eax + ecx;
    edx = 1;
    ecx = 3;
    PUSH32(esp, 0x00323254u); RECOMP_ABI_CALL(0x00322D00u, sub_00322D00); /* call 0x00322D00 */

loc_00323254: ;
    eax = eax + 0x10;
    g_seh_ebp = ebp; sub_00322D20(); return; /* tail jmp 0x00322D20 */

}

/**
 * sub_00323260
 * Original: 0x00323260 - 0x003232C6 (102 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323260(void)
{

loc_00323260: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032326Eu); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0032326E: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esi);
    eax = edi;
    MEM32(eax) = ecx;
    edx = MEM32(esi + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esi + 8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(esi + 0xC);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(esi + 0x10);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(esi + 0x14);
    MEM32(eax + 0x14) = edx;
    eax = edi + 0x18;
    PUSH32(esp, 0x003232A5u); RECOMP_ABI_CALL(0x00322D80u, sub_00322D80); /* call 0x00322D80 */

loc_003232A5: ;
    eax = 0; /* xor self */
    MEM32(edi + 0x20) = eax;
    MEM32(edi + 0x24) = eax;
    edi = edi + 0x28;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003232B6u); RECOMP_ABI_CALL(0x003282E0u, sub_003282E0); /* call 0x003282E0 */

loc_003232B6: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003232C0u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_003232C0: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003232D0
 * Original: 0x003232D0 - 0x00323351 (129 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003232D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003232D0: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    ecx = 0; /* xor self */
    esp = esp - 0x10;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    eax = eax + edx + 0x1278;
    MEM32(ebp) = ecx;
    MEM32(ebp + 4) = ecx;
    MEM32(ebp + 8) = ecx;
    MEM32(ebp + 0xC) = ecx;
    MEM32(ebp + 0x10) = ecx;
    MEM32(ebp + 0x14) = ecx;
    MEM32(ebp + 0x18) = ecx;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ecx (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_00323349; /* je: equal / zero */

loc_00323302: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00323349; /* je: equal / zero */

loc_00323306: ;
    eax = esp + 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00323311u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_00323311: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ebx = esp + 0x14;
    PUSH32(esp, 0x0032331Fu); RECOMP_ABI_CALL(0x00322E10u, sub_00322E10); /* call 0x00322E10 */

loc_0032331F: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x1C);
    MEM32(ebp + 4) = eax;
    MEM32(ebp) = edx;
    edx = MEM32(esp + 0x20);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    MEM32(ebp + 8) = ecx;
    MEM32(ebp + 0xC) = edx;
    PUSH32(esp, 0x00323345u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_00323345: ;
    esp = esp + 0xC;
    POP32(esp, ebx);

loc_00323349: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00323360
 * Original: 0x00323360 - 0x003233BB (91 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323360(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00323360: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 4);
    PUSH32(esp, edi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ebx = esp + 0x14;
    edi = 1;
    PUSH32(esp, 0x00323381u); RECOMP_ABI_CALL(0x00322E10u, sub_00322E10); /* call 0x00322E10 */

loc_00323381: ;
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(esp + 0x14);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00323399; /* jb: below (unsigned <) */

loc_0032338F: ;
    edx = MEM32(esp + 0x14);
    edx = edx + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003233B3; /* jb: below (unsigned <) */

loc_00323399: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003233AB; /* jb: below (unsigned <) */

loc_003233A1: ;
    edx = MEM32(esp + 0x1C);
    edx = edx + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003233B3; /* jb: below (unsigned <) */

loc_003233AB: ;
    eax = 0; /* xor self */
    MEM32(ebp + 0x18) = eax;
    MEM32(ebp + 0x1C) = eax;

loc_003233B3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_003233C0
 * Original: 0x003233C0 - 0x0032343F (127 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003233C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003233C0: ;
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x74);
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    ebp = ebp + edx;
    edx = eax * 4;
    eax = MEM32(ecx + edx);
    ecx = ecx + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_003233EB; /* jne: not equal / not zero */

loc_003233E2: ;
    edi = 0; /* xor self */
    ebx = 4;
    goto loc_0032342A;

loc_003233EB: ;
    esi = MEM32(esp + 0x30);
    edx = MEM32(edx + esi);
    ecx = MEM32(esp + 0x34);
    esi = esp + 0x10;
    edi = 1;
    ebx = 5;
    PUSH32(esp, 0x00323409u); RECOMP_ABI_CALL(0x00322CA0u, sub_00322CA0); /* call 0x00322CA0 */

loc_00323409: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00323418; /* jne: not equal / not zero */

loc_0032340D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_00323418: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    eax = ebp + 0x10;
    esi = esp + 0x18;
    PUSH32(esp, 0x00323427u); RECOMP_ABI_CALL(0x00323260u, sub_00323260); /* call 0x00323260 */

loc_00323427: ;
    esp = esp + 8;

loc_0032342A: ;
    edx = edi;
    ecx = ebx;
    eax = ebp;
    PUSH32(esp, 0x00323435u); RECOMP_ABI_CALL(0x00322D00u, sub_00322D00); /* call 0x00322D00 */

loc_00323435: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00323440
 * Original: 0x00323440 - 0x00323480 (64 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00323440: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = eax + edx + 0x1278;
    PUSH32(esp, edi);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 4 (32-bit) */
    eax = ecx + 0x10;
    if (CMP_EQ(_fa, _fb)) goto loc_00323467; /* je: equal / zero */

loc_00323456: ;
    PUSH32(esp, 0xFF000409u);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00323461u); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_00323461: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00323467: ;
    edi = MEM32(esi + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    SET_LO8(edx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00323478u); RECOMP_ABI_CALL(0x00323260u, sub_00323260); /* call 0x00323260 */

loc_00323478: ;
    esp = esp + 8;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00323480
 * Original: 0x00323480 - 0x0032349A (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323480(void)
{

loc_00323480: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    edi = 0; /* xor self */
    PUSH32(esp, 0x00323495u); RECOMP_ABI_CALL(0x003232D0u, sub_003232D0); /* call 0x003232D0 */

loc_00323495: ;
    esp = esp + 4;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003234A0
 * Original: 0x003234A0 - 0x003234BD (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003234A0(void)
{

loc_003234A0: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    edi = 1;
    PUSH32(esp, 0x003234B8u); RECOMP_ABI_CALL(0x003232D0u, sub_003232D0); /* call 0x003232D0 */

loc_003234B8: ;
    esp = esp + 4;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003234C0
 * Original: 0x003234C0 - 0x003235A3 (227 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003234C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003234C0: ;
    esp = esp - 8;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esp + 0x20);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    eax = eax + ecx + 0x1278;
    esi = MEM32(eax + 0x14);
    ebx = eax + 0x10;
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00323599; /* je: equal / zero */

loc_003234F5: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00323599; /* je: equal / zero */

loc_00323500: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00323599; /* je: equal / zero */

loc_00323508: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00323512u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_00323512: ;
    esp = esp + 4;
    edx = ebp;
    PUSH32(esp, 0x0032351Cu); RECOMP_ABI_CALL(0x00322E80u, sub_00322E80); /* call 0x00322E80 */

loc_0032351C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00323547; /* jge: greater or equal (signed >=) */

loc_00323520: ;
    ebp = ebp - eax;
    edx = ebp;
    PUSH32(esp, 0x00323529u); RECOMP_ABI_CALL(0x00322E80u, sub_00322E80); /* call 0x00322E80 */

loc_00323529: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00323543; /* jge: greater or equal (signed >=) */

loc_0032352D: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, 0xFF00040Bu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032353Cu); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_0032353C: ;
    esp = esp + 8;
    MEM32(esp + 0x10) = eax;

loc_00323543: ;
    ebp = MEM32(esp + 0x24);

loc_00323547: ;
    esi = 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032356D; /* jne: not equal / not zero */

loc_00323550: ;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x20), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032355F; /* jne: not equal / not zero */

loc_00323556: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0032355Cu); RECOMP_ABI_CALL(0x00323360u, sub_00323360); /* call 0x00323360 */

loc_0032355C: ;
    esp = esp + 4;

loc_0032355F: ;
    eax = MEM32(ebx + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00323579; /* jl: less (signed <) */

loc_00323566: ;
    eax = eax + ebp;
    MEM32(ebx + 0x24) = eax;
    goto loc_00323579;

loc_0032356D: ;
    eax = MEM32(ebx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00323579; /* jl: less (signed <) */

loc_00323574: ;
    eax = eax + ebp;
    MEM32(ebx + 0x20) = eax;

loc_00323579: ;
    ecx = MEM32(esp + 0x1C);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    MEM32(ecx + 0x44) = esi;
    PUSH32(esp, 0x0032358Au); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_0032358A: ;
    eax = MEM32(esp + 0x14);
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00323599: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003235B0
 * Original: 0x003235B0 - 0x003235D4 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003235B0(void)
{

loc_003235B0: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    esp = esp - 0x1C;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003235C6u); RECOMP_ABI_CALL(0x003234A0u, sub_003234A0); /* call 0x003234A0 */

loc_003235C6: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x18);
    eax = eax + ecx;
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_003235E0
 * Original: 0x003235E0 - 0x003236D7 (247 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003235E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003235E0: ;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x3C);
    eax = MEM32(edi + 4);
    esi = edi + 8;
    edx = esi;
    ecx = esp + 0x10;
    PUSH32(esp, 0x003235FCu); RECOMP_ABI_CALL(0x00322C60u, sub_00322C60); /* call 0x00322C60 */

loc_003235FC: ;
    eax = MEM32(esi);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(edi + 0x28)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(edi + 0x28))); }
    edi = MEM32(esp + 0x38);
    eax = ecx;
    ecx = esi;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    PUSH32(esp, 0x00323614u); RECOMP_ABI_CALL(0x003233C0u, sub_003233C0); /* call 0x003233C0 */

loc_00323614: ;
    PUSH32(esp, 0x800);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ebx = eax;
    PUSH32(esp, edi);
    eax = 1;
    ecx = esi;
    PUSH32(esp, 0x0032362Du); RECOMP_ABI_CALL(0x003233C0u, sub_003233C0); /* call 0x003233C0 */

loc_0032362D: ;
    PUSH32(esp, 0);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ebp = eax;
    PUSH32(esp, edi);
    eax = 2;
    ecx = esi;
    PUSH32(esp, 0x00323643u); RECOMP_ABI_CALL(0x003233C0u, sub_003233C0); /* call 0x003233C0 */

loc_00323643: ;
    esp = esp + 0x24;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003236BD; /* jne: not equal / not zero */

loc_0032364A: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003236BD; /* jne: not equal / not zero */

loc_0032364E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003236BD; /* jne: not equal / not zero */

loc_00323652: ;
    ebx = MEM32(esp + 0x34);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = 3;
    edx = esi;
    eax = edi;
    PUSH32(esp, 0x0032366Au); RECOMP_ABI_CALL(0x00323170u, sub_00323170); /* call 0x00323170 */

loc_0032366A: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = 4;
    edx = esi;
    eax = edi;
    PUSH32(esp, 0x0032367Du); RECOMP_ABI_CALL(0x003231E0u, sub_003231E0); /* call 0x003231E0 */

loc_0032367D: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    ecx = 5;
    edx = esi;
    eax = edi;
    PUSH32(esp, 0x00323691u); RECOMP_ABI_CALL(0x00323170u, sub_00323170); /* call 0x00323170 */

loc_00323691: ;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = 6;
    edx = esi;
    eax = edi;
    PUSH32(esp, 0x003236A4u); RECOMP_ABI_CALL(0x003231E0u, sub_003231E0); /* call 0x003231E0 */

loc_003236A4: ;
    esp = esp + 0x18;
    ecx = 7;
    eax = edi;
    PUSH32(esp, 0x003236B3u); RECOMP_ABI_CALL(0x00323240u, sub_00323240); /* call 0x00323240 */

loc_003236B3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

loc_003236BD: ;
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, 0xFF00040Au);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003236CCu); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_003236CC: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_003236E0
 * Original: 0x003236E0 - 0x0032375B (123 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003236E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003236E0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = edi;
    PUSH32(esp, 0x003236ECu); RECOMP_ABI_CALL(0x00322D50u, sub_00322D50); /* call 0x00322D50 */

loc_003236EC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003236FE; /* je: equal / zero */

loc_003236F0: ;
    POP32(esp, edi);
    MEM32(esp + 8) = 0xFF000408u;
    g_seh_ebp = ebp; sub_0031D640(); return; /* tail jmp 0x0031D640 */

loc_003236FE: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0032370Bu); RECOMP_ABI_CALL(0x00323920u, sub_00323920); /* call 0x00323920 */

loc_0032370B: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0032371F; /* je: equal / zero */

loc_00323712: ;
    edx = esi;
    POP32(esp, esi);
    ecx = edi;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_00323440(); return; /* tail jmp 0x00323440 */

loc_0032371F: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00323727u); RECOMP_ABI_CALL(0x00323920u, sub_00323920); /* call 0x00323920 */

loc_00323727: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0032373E; /* je: equal / zero */

loc_0032372E: ;
    edx = esi;
    POP32(esp, esi);
    ecx = edi;
    eax = 1;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_00323440(); return; /* tail jmp 0x00323440 */

loc_0032373E: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00323746u); RECOMP_ABI_CALL(0x00323920u, sub_00323920); /* call 0x00323920 */

loc_00323746: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    edx = esi;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    POP32(esp, esi);
    ecx = edi;
    _cf = 0; /* logical op clears CF */
    eax = eax & 2;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_00323440(); return; /* tail jmp 0x00323440 */

}

/**
 * sub_00323760
 * Original: 0x00323760 - 0x0032377A (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323760(void)
{

loc_00323760: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    PUSH32(esp, 0x00323776u); RECOMP_ABI_CALL(0x003234C0u, sub_003234C0); /* call 0x003234C0 */

loc_00323776: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00323780
 * Original: 0x00323780 - 0x0032378A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323780(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00323780: ;
    eax = 1;
    g_seh_ebp = ebp; sub_003234C0(); return; /* tail jmp 0x003234C0 */

}

/**
 * sub_00323790
 * Original: 0x00323790 - 0x003237B6 (38 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00323790: ;
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    esi = 0; /* xor self */

loc_00323795: ;
    ecx = MEM32(ebx + esi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003237B4; /* je: equal / zero */

loc_0032379C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(ecx + edi * 4); PUSH32(esp, 0x003237A7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003237A7: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003237B4; /* jne: not equal / not zero */

loc_003237AE: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00323795; /* jl: less (signed <) */

loc_003237B4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003237C0
 * Original: 0x003237C0 - 0x003237E9 (41 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003237C0(void)
{

loc_003237C0: ;
    MEM32(eax + 0xC) = ecx;
    ecx = 8;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_003237F0
 * Original: 0x003237F0 - 0x0032380D (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003237F0(void)
{

loc_003237F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    esi = esi << 4;
    esi = esi + edi;
    esi = esi + ecx;
    MEM32(edx + esi * 4 + 0x1BEC) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    MEM32(eax + edx + 0x12C4) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00323810
 * Original: 0x00323810 - 0x00323829 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323810(void)
{

loc_00323810: ;
    PUSH32(esp, esi);
    esi = ecx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x74);
    MEM32(esi + edx + 0x12C8) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44);
    MEM32(eax + edx + 0x1BE8) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00323830
 * Original: 0x00323830 - 0x0032386B (59 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323830(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00323830: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    edi = 0; /* xor self */
    esi = ebx + 0x1BE4;

loc_00323846: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0032385D; /* je: equal / zero */

loc_0032384C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(ecx + ebp * 4); PUSH32(esp, 0x00323856u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00323856: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00323866; /* jne: not equal / not zero */

loc_0032385D: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 0x44;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 9 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00323846; /* jl: less (signed <) */

loc_00323866: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00323870
 * Original: 0x00323870 - 0x0032389E (46 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00323870: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    eax = eax + 0x69;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44);
    eax = MEM32(eax + ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00323886; /* jne: not equal / not zero */

loc_00323885: ;
    esp += 4; return; /* ret */

loc_00323886: ;
    edx = MEM32(esp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    { uint32_t _icall_target = MEM32(eax + ecx * 4); PUSH32(esp, 0x0032389Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0032389A: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_003238A0
 * Original: 0x003238A0 - 0x003238B7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003238A0(void)
{

loc_003238A0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44);
    edx = MEM32(esp + 4);
    MEM32(eax + edx + 0x1BD8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003238C0
 * Original: 0x003238C0 - 0x003238D3 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003238C0(void)
{

loc_003238C0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44);
    eax = MEM32(eax + ecx + 0x1BD8);
    esp += 4; return; /* ret */

}

/**
 * sub_003238E0
 * Original: 0x003238E0 - 0x003238F7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003238E0(void)
{

loc_003238E0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44);
    edx = MEM32(esp + 4);
    MEM32(eax + edx + 0x1BDC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00323900
 * Original: 0x00323900 - 0x00323913 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323900(void)
{

loc_00323900: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44);
    eax = MEM32(eax + ecx + 0x1BDC);
    esp += 4; return; /* ret */

}

/**
 * sub_00323920
 * Original: 0x00323920 - 0x0032393D (29 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00323920: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    eax = eax + 0x69;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44);
    PUSH32(esp, esi);
    esi = MEM32(eax + edx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00323940
 * Original: 0x00323940 - 0x0032395F (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323940(void)
{

loc_00323940: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ecx = 0xF;
    esi = ebx;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    edi = 0; /* xor self */
    PUSH32(esp, 0x0032395Bu); RECOMP_ABI_CALL(0x00323790u, sub_00323790); /* call 0x00323790 */

loc_0032395B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00323960
 * Original: 0x00323960 - 0x00323973 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323960(void)
{

loc_00323960: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = 1;
    PUSH32(esp, 0x00323970u); RECOMP_ABI_CALL(0x00323790u, sub_00323790); /* call 0x00323790 */

loc_00323970: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00323980
 * Original: 0x00323980 - 0x0032398F (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323980(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00323980: ;
    eax = 8;
    ecx = 7;
    g_seh_ebp = ebp; sub_00323810(); return; /* tail jmp 0x00323810 */

}

/**
 * sub_00323990
 * Original: 0x00323990 - 0x0032399A (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323990(void)
{

loc_00323990: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    PUSH32(esp, 0x00323998u); RECOMP_ABI_CALL(0x003237F0u, sub_003237F0); /* call 0x003237F0 */

loc_00323998: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003239A0
 * Original: 0x003239A0 - 0x003239AD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003239A0(void)
{

loc_003239A0: ;
    PUSH32(esp, edi);
    edi = 1;
    PUSH32(esp, 0x003239ABu); RECOMP_ABI_CALL(0x003237F0u, sub_003237F0); /* call 0x003237F0 */

loc_003239AB: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003239B0
 * Original: 0x003239B0 - 0x003239BD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003239B0(void)
{

loc_003239B0: ;
    PUSH32(esp, edi);
    edi = 2;
    PUSH32(esp, 0x003239BBu); RECOMP_ABI_CALL(0x003237F0u, sub_003237F0); /* call 0x003237F0 */

loc_003239BB: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003239C0
 * Original: 0x003239C0 - 0x00323A16 (86 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003239C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003239C0: ;
    eax = 2;
    ecx = 1;
    PUSH32(esp, 0x003239CFu); RECOMP_ABI_CALL(0x00323810u, sub_00323810); /* call 0x00323810 */

loc_003239CF: ;
    eax = 3;
    ecx = 2;
    PUSH32(esp, 0x003239DEu); RECOMP_ABI_CALL(0x00323990u, sub_00323990); /* call 0x00323990 */

loc_003239DE: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    ecx = 3;
    if (TEST_Z(_fa, _fb)) goto loc_00323A0C; /* je: equal / zero */

loc_003239EE: ;
    eax = 4;
    PUSH32(esp, 0x003239F8u); RECOMP_ABI_CALL(0x00323810u, sub_00323810); /* call 0x00323810 */

loc_003239F8: ;
    eax = 5;
    ecx = 4;
    PUSH32(esp, 0x00323A07u); RECOMP_ABI_CALL(0x00323990u, sub_00323990); /* call 0x00323990 */

loc_00323A07: ;
    ecx = 5;

loc_00323A0C: ;
    eax = 6;
    g_seh_ebp = ebp; sub_00323810(); return; /* tail jmp 0x00323810 */

}

/**
 * sub_00323A20
 * Original: 0x00323A20 - 0x00323A76 (86 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323A20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00323A20: ;
    eax = 3;
    ecx = 2;
    PUSH32(esp, 0x00323A2Fu); RECOMP_ABI_CALL(0x00323810u, sub_00323810); /* call 0x00323810 */

loc_00323A2F: ;
    eax = 4;
    ecx = 3;
    PUSH32(esp, 0x00323A3Eu); RECOMP_ABI_CALL(0x00323990u, sub_00323990); /* call 0x00323990 */

loc_00323A3E: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    ecx = 4;
    if (TEST_Z(_fa, _fb)) goto loc_00323A6C; /* je: equal / zero */

loc_00323A4E: ;
    eax = 5;
    PUSH32(esp, 0x00323A58u); RECOMP_ABI_CALL(0x00323810u, sub_00323810); /* call 0x00323810 */

loc_00323A58: ;
    eax = 6;
    ecx = 5;
    PUSH32(esp, 0x00323A67u); RECOMP_ABI_CALL(0x00323990u, sub_00323990); /* call 0x00323990 */

loc_00323A67: ;
    ecx = 6;

loc_00323A6C: ;
    eax = 7;
    g_seh_ebp = ebp; sub_00323810(); return; /* tail jmp 0x00323810 */

}

/**
 * sub_00323A80
 * Original: 0x00323A80 - 0x00323B1B (155 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323A80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00323A80: ;
    eax = 1;
    ecx = 0; /* xor self */
    edx = esi;
    PUSH32(esp, 0x00323A8Eu); RECOMP_ABI_CALL(0x00323810u, sub_00323810); /* call 0x00323810 */

loc_00323A8E: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00323AAC; /* je: equal / zero */

loc_00323A95: ;
    eax = 1;
    ecx = eax;
    PUSH32(esp, 0x00323AA1u); RECOMP_ABI_CALL(0x00323990u, sub_00323990); /* call 0x00323990 */

loc_00323AA1: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00323AA7u); RECOMP_ABI_CALL(0x003239C0u, sub_003239C0); /* call 0x003239C0 */

loc_00323AA7: ;
    esp = esp + 4;
    goto loc_00323AC3;

loc_00323AAC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00323AB6u); RECOMP_ABI_CALL(0x0031ECA0u, sub_0031ECA0); /* call 0x0031ECA0 */

loc_00323AB6: ;
    esp = esp + 0xC;
    MEM32(esi + 0xB44) = 0;

loc_00323AC3: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00323AE6; /* je: equal / zero */

loc_00323ACA: ;
    eax = 2;
    ecx = 1;
    edx = esi;
    PUSH32(esp, 0x00323ADBu); RECOMP_ABI_CALL(0x003239A0u, sub_003239A0); /* call 0x003239A0 */

loc_00323ADB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00323AE1u); RECOMP_ABI_CALL(0x00323A20u, sub_00323A20); /* call 0x00323A20 */

loc_00323AE1: ;
    esp = esp + 4;
    goto loc_00323AFD;

loc_00323AE6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00323AF0u); RECOMP_ABI_CALL(0x0031ECA0u, sub_0031ECA0); /* call 0x0031ECA0 */

loc_00323AF0: ;
    esp = esp + 0xC;
    MEM32(esi + 0xB48) = 0;

loc_00323AFD: ;
    eax = MEM32(edi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00323B1A; /* je: equal / zero */

loc_00323B04: ;
    eax = 7;
    ecx = 1;
    edx = esi;
    PUSH32(esp, 0x00323B15u); RECOMP_ABI_CALL(0x003239B0u, sub_003239B0); /* call 0x003239B0 */

loc_00323B15: ;
    g_seh_ebp = ebp; sub_00323980(); return; /* tail jmp 0x00323980 */

loc_00323B1A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00323B20
 * Original: 0x00323B20 - 0x00323BEE (206 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00323B20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00323B46; /* je: equal / zero */

loc_00323B30: ;
    eax = 0; /* xor self */
    ecx = 0; /* xor self */
    edx = esi;
    PUSH32(esp, 0x00323B3Bu); RECOMP_ABI_CALL(0x00323990u, sub_00323990); /* call 0x00323990 */

loc_00323B3B: ;
    PUSH32(esp, 0x00323B40u); RECOMP_ABI_CALL(0x00323A80u, sub_00323A80); /* call 0x00323A80 */

loc_00323B40: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00323B46: ;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00323B77; /* je: equal / zero */

loc_00323B4B: ;
    eax = 1;
    ecx = 0; /* xor self */
    edx = esi;
    PUSH32(esp, 0x00323B59u); RECOMP_ABI_CALL(0x00323990u, sub_00323990); /* call 0x00323990 */

loc_00323B59: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00323B5Fu); RECOMP_ABI_CALL(0x003239C0u, sub_003239C0); /* call 0x003239C0 */

loc_00323B5F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00323B68u); RECOMP_ABI_CALL(0x0031ECA0u, sub_0031ECA0); /* call 0x0031ECA0 */

loc_00323B68: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    MEM32(esi + 0xB48) = ebx;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00323B77: ;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00323BA8; /* je: equal / zero */

loc_00323B7C: ;
    eax = 2;
    ecx = 0; /* xor self */
    edx = esi;
    PUSH32(esp, 0x00323B8Au); RECOMP_ABI_CALL(0x00323990u, sub_00323990); /* call 0x00323990 */

loc_00323B8A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00323B90u); RECOMP_ABI_CALL(0x00323A20u, sub_00323A20); /* call 0x00323A20 */

loc_00323B90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00323B99u); RECOMP_ABI_CALL(0x0031ECA0u, sub_0031ECA0); /* call 0x0031ECA0 */

loc_00323B99: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    MEM32(esi + 0xB44) = ebx;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00323BA8: ;
    _fa = (uint32_t)(MEM32(edi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x20), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00323BE7; /* je: equal / zero */

loc_00323BAD: ;
    eax = 7;
    ecx = 0; /* xor self */
    edx = esi;
    PUSH32(esp, 0x00323BBBu); RECOMP_ABI_CALL(0x00323990u, sub_00323990); /* call 0x00323990 */

loc_00323BBB: ;
    PUSH32(esp, 0x00323BC0u); RECOMP_ABI_CALL(0x00323980u, sub_00323980); /* call 0x00323980 */

loc_00323BC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00323BC9u); RECOMP_ABI_CALL(0x0031ECA0u, sub_0031ECA0); /* call 0x0031ECA0 */

loc_00323BC9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00323BD2u); RECOMP_ABI_CALL(0x0031ECA0u, sub_0031ECA0); /* call 0x0031ECA0 */

loc_00323BD2: ;
    esp = esp + 0x18;
    POP32(esp, edi);
    MEM32(esi + 0xB44) = ebx;
    MEM32(esi + 0xB48) = ebx;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00323BE7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00323BF0
 * Original: 0x00323BF0 - 0x00323C3D (77 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00323BF0: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    eax = MEM32(esp + 0xC);
    edx = 0; /* xor self */
    /* nop */

loc_00323C00: ;
    MEM32(eax + 8) = 0;
    ecx = MEM32(esi + edx * 4);
    PUSH32(esp, 0x00323C0Fu); RECOMP_ABI_CALL(0x003237C0u, sub_003237C0); /* call 0x003237C0 */

loc_00323C0F: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 0x44;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 9 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00323C00; /* jl: less (signed <) */

loc_00323C18: ;
    eax = esi;
    esi = MEM32(esp + 8);
    ecx = esi;
    PUSH32(esp, 0x00323C25u); RECOMP_ABI_CALL(0x00323B20u, sub_00323B20); /* call 0x00323B20 */

loc_00323C25: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00323C39; /* je: equal / zero */

loc_00323C29: ;
    PUSH32(esp, 0xFF000302u);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00323C34u); RECOMP_ABI_CALL(0x0031D640u, sub_0031D640); /* call 0x0031D640 */

loc_00323C34: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00323C39: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00323C40
 * Original: 0x00323C40 - 0x00323CCF (143 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00323C40: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    edx = esi;
    edx = edx & 0xF;
    eax = eax + esi * 4;
    if ((edx == 0)) goto loc_00323C5F; /* je: equal / zero */

loc_00323C57: ;
    eax = eax - 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax) = ecx;
    if ((_fa != 0)) goto loc_00323C57; /* jne: not equal / not zero */

loc_00323C5F: ;
    esi = esi >> 4;
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00323CCE; /* je: equal / zero */

loc_00323C69: ;
    /* nop */

loc_00323C70: ;
    MEM32(eax + -4) = ecx;
    eax = eax - 4;
    MEM32(eax + -4) = ecx;
    eax = eax - 4;
    MEM32(eax + -4) = ecx;
    eax = eax - 4;
    MEM32(eax + -4) = ecx;
    eax = eax - 4;
    MEM32(eax + -4) = ecx;
    eax = eax - 4;
    MEM32(eax + -4) = ecx;
    eax = eax - 4;
    MEM32(eax + -4) = ecx;
    eax = eax - 4;
    MEM32(eax + -4) = ecx;
    eax = eax - 4;
    MEM32(eax + -4) = ecx;
    eax = eax - 4;
    MEM32(eax + -4) = ecx;
    eax = eax - 4;
    MEM32(eax + -4) = ecx;
    eax = eax - 4;
    eax = eax - 4;
    MEM32(eax) = ecx;
    eax = eax - 4;
    MEM32(eax) = ecx;
    eax = eax - 4;
    MEM32(eax) = ecx;
    eax = eax - 4;
    MEM32(eax) = ecx;
    eax = eax - 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax) = ecx;
    if ((_fa != 0)) goto loc_00323C70; /* jne: not equal / not zero */

loc_00323CCE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00323CD0
 * Original: 0x00323CD0 - 0x00323D3E (110 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00323CD0: ;
    eax = MEM32(0x6E631C);
    esp = esp - 8;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x6E631C) = eax;
    _fa = (uint32_t)(MEM32(0x6E631C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6E631C), 1 (32-bit) */
    eax = MEM32(esp + 0xC);
    if (CMP_LE(_fas, _fbs)) goto loc_00323CF3; /* jle: less or equal (signed <=) */

loc_00323CEB: ;
    _fa = (uint32_t)(MEM32(0x6E6318)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6E6318), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00323D3A; /* je: equal / zero */

loc_00323CF3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(0x6E6318) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00323D26; /* je: equal / zero */

loc_00323CFD: ;
    ecx = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00323D06u); RECOMP_ABI_CALL(0x0034D3D9u, sub_0034D3D9); /* call 0x0034D3D9 */

loc_00323D06: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00323D26; /* je: equal / zero */

loc_00323D0A: ;
    eax = MEM32(esp);
    ecx = MEM32(esp + 4);
    edx = eax;
    edx = edx | ecx;
    if ((edx == 0)) goto loc_00323D26; /* je: equal / zero */

loc_00323D17: ;
    MEM32(0x6E6310) = eax;
    MEM32(0x6E6314) = ecx;
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00323D26: ;
    MEM32(0x6E6310) = 1;
    MEM32(0x6E6314) = 0;

loc_00323D3A: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00323D40
 * Original: 0x00323D40 - 0x00323D5E (30 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323D40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00323D40: ;
    eax = MEM32(0x6E631C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x6E631C) = eax;
    ecx = MEM32(0x6E631C);
    if ((_fas >= 0)) goto loc_00323D5D; /* jns: not sign (positive) */

loc_00323D53: ;
    MEM32(0x6E631C) = 0;

loc_00323D5D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00323D60
 * Original: 0x00323D60 - 0x00323D97 (55 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00323D60: ;
    eax = MEM32(0x6E631C);
    esp = esp - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00323D8F; /* jle: less or equal (signed <=) */

loc_00323D6C: ;
    _fa = (uint32_t)(MEM32(0x6E6318)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6E6318), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00323D8F; /* je: equal / zero */

loc_00323D75: ;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00323D7Eu); RECOMP_ABI_CALL(0x0034D3C8u, sub_0034D3C8); /* call 0x0034D3C8 */

loc_00323D7E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00323D8F; /* je: equal / zero */

loc_00323D82: ;
    eax = MEM32(esp);
    edx = MEM32(esp + 4);
    ecx = eax;
    ecx = ecx | edx;
    if ((ecx != 0)) goto loc_00323D93; /* jne: not equal / not zero */

loc_00323D8F: ;
    eax = 0; /* xor self */
    edx = 0; /* xor self */

loc_00323D93: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00323DA0
 * Original: 0x00323DA0 - 0x00323DC1 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00323DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00323DA0: ;
    PUSH32(esp, 0x00323DA5u); RECOMP_ABI_CALL(0x00323D60u, sub_00323D60); /* call 0x00323D60 */

loc_00323DA5: ;
    ecx = MEM32(0x6E6310);
    eax = 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00323DBE; /* jne: not equal / not zero */

loc_00323DB4: ;
    ecx = MEM32(0x6E6314);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00323DC0; /* je: equal / zero */

loc_00323DBE: ;
    eax = 0; /* xor self */

loc_00323DC0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00323DD0
 * Original: 0x00323DD0 - 0x00323DDC (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323DD0(void)
{

loc_00323DD0: ;
    eax = MEM32(0x6E6310);
    edx = MEM32(0x6E6314);
    esp += 4; return; /* ret */

}

/**
 * sub_00323DE0
 * Original: 0x00323DE0 - 0x00323DF8 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323DE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00323DE0: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0x3C;
    edi = edx + 0x18;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(edx + 0x14) = eax;
    MEM32(edx + 0x19C) = MEM32(edx + 0x19C) + 1;
    _fa = (uint32_t)(MEM32(edx + 0x19C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00323E00
 * Original: 0x00323E00 - 0x00323E0B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323E00(void)
{

loc_00323E00: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00323E10
 * Original: 0x00323E10 - 0x00323E34 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323E10(void)
{

loc_00323E10: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    eax = eax + 0x138;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00323E40
 * Original: 0x00323E40 - 0x00323E64 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323E40(void)
{

loc_00323E40: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    eax = eax + 0x148;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00323E70
 * Original: 0x00323E70 - 0x00323E94 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323E70(void)
{

loc_00323E70: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    eax = eax + 0x158;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00323EA0
 * Original: 0x00323EA0 - 0x00323EC4 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323EA0(void)
{

loc_00323EA0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    eax = eax + 0x168;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00323ED0
 * Original: 0x00323ED0 - 0x00323EE0 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00323ED0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00323EDF; /* jle: less or equal (signed <=) */

loc_00323ED8: ;
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x10) = eax;

loc_00323EDF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00323EE0
 * Original: 0x00323EE0 - 0x00323F39 (89 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323EE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00323EE0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00323F37; /* jne: not equal / not zero */

loc_00323EEC: ;
    edx = MEM32(esi + 0x134);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi + 4);
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x130);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00323F0Bu); RECOMP_ABI_CALL(0x00342DE0u, sub_00342DE0); /* call 0x00342DE0 */

loc_00323F0B: ;
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00323F1Au); RECOMP_ABI_CALL(0x00342E20u, sub_00342E20); /* call 0x00342E20 */

loc_00323F1A: ;
    ecx = MEM32(esi + 0x128);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    eax = MEM32(esi + 0x12C);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    MEM32(esi + 0x128) = ecx;
    MEM32(esi + 0x12C) = eax;
    POP32(esp, edi);

loc_00323F37: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00323F40
 * Original: 0x00323F40 - 0x00323F5D (29 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00323F40: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00323F58; /* jle: less or equal (signed <=) */

loc_00323F4A: ;
    ecx = ecx + 0x18;
    edx = esi;
    /* nop */

loc_00323F50: ;
    eax = eax + MEM32(ecx);
    ecx = ecx + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00323F50; /* jne: not equal / not zero */

loc_00323F58: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00323F60
 * Original: 0x00323F60 - 0x00323FE4 (132 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00323F60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00323F60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x118;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x44;
    esi = 0x42FD20;
    edi = esp + 8;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    edi = MEM32(0x5D34AC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00323FDE; /* je: equal / zero */

loc_00323F8A: ;
    ecx = MEM32(0x5D34A8);
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
    edx = MEM32(0x5D34AC);
    MEM32(0x6E6308) = edx;
    ecx = esp + 8;

loc_00323FB0: ;
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
    if (TEST_NZ(_fa, _fb)) goto loc_00323FB0; /* jne: not equal / not zero */

loc_00323FBA: ;
    eax = esp + 8;
    edx = eax + 1;

loc_00323FC1: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00323FC1; /* jne: not equal / not zero */

loc_00323FC8: ;
    ecx = MEM32(0x6E6308);
    eax = eax - edx;
    ecx = ecx + eax;
    MEM32(0x6E6308) = ecx;
    MEM32(0x6E6304) = ecx;

loc_00323FDE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00323FF0
 * Original: 0x00323FF0 - 0x003241B4 (452 bytes, 133 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323FF0(void)
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

loc_00323FF0: ;
    eax = MEM32(0x5D34AC);
    esp = esp - 0x10C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003241AD; /* je: equal / zero */

loc_00324003: ;
    fp_push((double)SMEM64(esi + 0x118)); /* fild */
    fp_push((double)SMEM64(esi + 0x120)); /* fild */
    fp_st1() = fp_st1() / fp_top(); fp_pop(); /* fdivp st(1) */
    fp_top() = fp_top() * MEMD(0x42FEC8); /* fmul qword ptr [0x42fec8] */
    fp_top() = fp_top() + MEMD(0x3DA0A0); /* fadd qword ptr [0x3da0a0] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    PUSH32(esp, 0x00324024u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00324024: ;
    MEM32(esp) = eax;
    fp_push((double)SMEM32(esp)); /* fild */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    fp_push((double)SMEM64(esi + 0x118)); /* fild */
    if (TEST_NZ(_fa, _fb)) goto loc_00324069; /* jne: not equal / not zero */

loc_0032403B: ;
    eax = MEM32(esi + 0x120);
    ecx = MEM32(esi + 0x124);
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = ecx;
    fp_push((double)SMEM64(esp + 4)); /* fild */
    fp_st1() = fp_st1() / fp_top(); fp_pop(); /* fdivp st(1) */
    fp_top() = fp_top() * MEMD(0x42FEC8); /* fmul qword ptr [0x42fec8] */
    fp_top() = fp_top() + MEMD(0x3DA0A0); /* fadd qword ptr [0x3da0a0] */
    PUSH32(esp, 0x00324066u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00324066: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_00324094;

loc_00324069: ;
    edx = MEM32(esi + 0x120);
    eax = MEM32(esi + 0x124);
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM64(esp + 4)); /* fild */
    fp_st1() = fp_st1() / fp_top(); fp_pop(); /* fdivp st(1) */
    fp_top() = fp_top() * MEMD(0x42FEC8); /* fmul qword ptr [0x42fec8] */
    fp_top() = fp_top() + MEMD(0x3DA0A0); /* fadd qword ptr [0x3da0a0] */
    PUSH32(esp, 0x00324094u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00324094: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x6E6A3C);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 0x1A8);
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 0x1A4);
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 0x198);
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 0x194);
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 0x190);
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 0x1A0);
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 0x19C);
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 4);
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 0x1B8);
    edi = MEM32(esi + 0x188);
    ecx = MEM32(esi + 0x128);
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 0x1B4);
    ebx = MEM32(esi + 0x108);
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 0x1B0);
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 0x1AC);
    PUSH32(esp, ebp);
    edx = MEM32(esi + 0x11C);
    ebp = edi;
    ebp = ebp - ecx;
    PUSH32(esp, ebp);
    MEM32(esp + 0x48) = eax;
    eax = MEM32(esi + 0x118);
    ebp = ebx;
    ebp = ebp - ecx;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x7FFFFFFF;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x5C);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x6C);
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x1F) & 31u));
    eax = MEM32(esp + 0x70);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x118);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032414Eu); RECOMP_ABI_CALL(0x00342E20u, sub_00342E20); /* call 0x00342E20 */

loc_0032414E: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    edx = esp + 0x7C;
    PUSH32(esp, 0x42FE38);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0032415Fu); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_0032415F: ;
    edx = MEM32(0x6E6308);
    esp = esp + 0x6C;
    ecx = esp + 0x18;
    /* nop */

loc_00324170: ;
    SET_LO8(ebx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edx) = LO8(ebx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00324170; /* jne: not equal / not zero */

loc_0032417A: ;
    ecx = MEM32(0x6E6308);
    edx = MEM32(0x5D34A8);
    ecx = ecx + eax;
    eax = MEM32(0x5D34AC);
    POP32(esp, edi);
    eax = edx + eax + -1024;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    POP32(esp, ebp);
    MEM32(0x6E6308) = ecx;
    POP32(esp, ebx);
    if (CMP_B(_fa, _fb)) goto loc_003241AD; /* jb: below (unsigned <) */

loc_003241A1: ;
    ecx = MEM32(0x6E6304);
    MEM32(0x6E6308) = ecx;

loc_003241AD: ;
    esp = esp + 0x10C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003241C0
 * Original: 0x003241C0 - 0x00324314 (340 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003241C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003241C0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0x70;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = 1;
    esi = 0; /* xor self */
    MEM32(edx) = edi;
    MEM32(edx + 4) = esi;
    MEM32(edx + 8) = esi;
    MEM32(edx + 0xC) = edi;
    MEM32(edx + 0x10) = 0xA;
    PUSH32(esp, 0x003241EFu); RECOMP_ABI_CALL(0x00323DE0u, sub_00323DE0); /* call 0x00323DE0 */

loc_003241EF: ;
    eax = 0xF4240;
    MEM32(edx + 0x110) = edi;
    MEM32(edx + 0x120) = edi;
    MEM32(edx + 0x130) = edi;
    MEM32(edx + 0x140) = eax;
    MEM32(edx + 0x150) = eax;
    MEM32(edx + 0x160) = eax;
    MEM32(edx + 0x170) = eax;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, edi);
    MEM32(edx + 0x108) = esi;
    MEM32(edx + 0x10C) = esi;
    MEM32(edx + 0x114) = esi;
    MEM32(edx + 0x118) = esi;
    MEM32(edx + 0x11C) = esi;
    MEM32(edx + 0x124) = esi;
    MEM32(edx + 0x128) = esi;
    MEM32(edx + 0x12C) = esi;
    MEM32(edx + 0x134) = esi;
    MEM32(edx + 0x13C) = esi;
    MEM32(edx + 0x144) = esi;
    MEM32(edx + 0x14C) = esi;
    MEM32(edx + 0x154) = esi;
    MEM32(edx + 0x158) = esi;
    MEM32(edx + 0x15C) = esi;
    MEM32(edx + 0x164) = esi;
    MEM32(edx + 0x168) = esi;
    MEM32(edx + 0x16C) = esi;
    MEM32(edx + 0x174) = esi;
    MEM32(edx + 0x180) = esi;
    MEM32(edx + 0x184) = esi;
    MEM32(edx + 0x188) = esi;
    MEM32(edx + 0x18C) = esi;
    MEM32(edx + 0x190) = esi;
    MEM32(edx + 0x194) = esi;
    MEM32(edx + 0x198) = esi;
    MEM32(edx + 0x19C) = esi;
    MEM32(edx + 0x1A0) = esi;
    MEM32(edx + 0x1A4) = esi;
    MEM32(edx + 0x1A8) = esi;
    MEM32(edx + 0x1AC) = esi;
    MEM32(edx + 0x1B0) = esi;
    MEM32(edx + 0x1B4) = esi;
    MEM32(edx + 0x1B8) = esi;
    MEM32(edx + 0x138) = 0x412B;
    MEM32(edx + 0x148) = 0x30D40;
    MEM32(edx + 0x178) = eax;
    MEM32(edx + 0x17C) = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00323F60(); return; /* tail jmp 0x00323F60 */

}

/**
 * sub_00324320
 * Original: 0x00324320 - 0x00324346 (38 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00324320(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00324320: ;
    eax = MEM32(esi + 0x14);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esi + 0x10)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esi + 0x10))); }
    eax = MEM32(esp + 4);
    ecx = esi;
    MEM32(esi + edx * 4 + 0x18) = eax;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00324339u); RECOMP_ABI_CALL(0x00323F40u, sub_00323F40); /* call 0x00323F40 */

loc_00324339: ;
    MEM32(esi + 0x1A4) = eax;
    MEM32(esi + 0x1A8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00324350
 * Original: 0x00324350 - 0x0032437C (44 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00324350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00324350: ;
    eax = MEM32(esi + 0x10);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0032436E; /* jle: less or equal (signed <=) */

loc_00324359: ;
    eax = esi + 0x18;
    PUSH32(esp, edi);
    /* nop */

loc_00324360: ;
    MEM32(eax) = MEM32(eax) - edx;
    edi = MEM32(esi + 0x10);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00324360; /* jl: less (signed <) */

loc_0032436D: ;
    POP32(esp, edi);

loc_0032436E: ;
    ecx = esi;
    PUSH32(esp, 0x00324375u); RECOMP_ABI_CALL(0x00323F40u, sub_00323F40); /* call 0x00323F40 */

loc_00324375: ;
    MEM32(esi + 0x1A8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00324380
 * Original: 0x00324380 - 0x00324955 (1493 bytes, 479 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00324380(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00324380: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x28);
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 8), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0032439A; /* jne: not equal / not zero */

loc_0032438F: ;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00324931; /* je: equal / zero */

loc_0032439A: ;
    esi = MEM32(esp + 0x24);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00324931; /* je: equal / zero */

loc_003243A7: ;
    eax = MEM32(esi + 0x18C);
    edx = MEM32(esi + 0x188);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    ebp = MEM32(edi);
    if (CMP_L(_fas, _fbs)) goto loc_003243C8; /* jl: less (signed <) */

loc_003243C2: ;
    if (CMP_G(_fas, _fbs)) goto loc_003243CC; /* jg: greater (signed >) */

loc_003243C4: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_003243CC; /* ja: above (unsigned >) */

loc_003243C8: ;
    edx = ebp;
    eax = ecx;

loc_003243CC: ;
    MEM32(edi + 4) = eax;
    MEM32(edi) = edx;
    ecx = MEM32(esi + 4);
    eax = 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003243E9; /* jne: not equal / not zero */

loc_003243DD: ;
    MEM32(esi + 8) = 0;
    goto loc_003244BC;

loc_003243E9: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003244BC; /* jne: not equal / not zero */

loc_003243F4: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x18C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x18C) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_003244B2; /* jl: less (signed <) */

loc_00324403: ;
    if (CMP_G(_fas, _fbs)) goto loc_00324413; /* jg: greater (signed >) */

loc_00324405: ;
    edx = MEM32(edi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x188)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x188) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003244B2; /* jbe: below or equal (unsigned <=) */

loc_00324413: ;
    edx = MEM32(esi + 0x17C);
    MEM32(esi + 8) = eax;
    eax = MEM32(esi + 0x178);
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324453; /* jne: not equal / not zero */

loc_00324429: ;
    ecx = MEM32(edi + 0xC);
    edx = MEM32(edi + 8);
    eax = MEM32(esi + 0x15C);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x158);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00324444u); RECOMP_ABI_CALL(0x00342DE0u, sub_00342DE0); /* call 0x00342DE0 */

loc_00324444: ;
    ecx = MEM32(esi + 0x164);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x160);
    goto loc_0032447B;

loc_00324453: ;
    edx = MEM32(edi + 0xC);
    eax = MEM32(edi + 8);
    ecx = MEM32(esi + 0x16C);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x168);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0032446Eu); RECOMP_ABI_CALL(0x00342DE0u, sub_00342DE0); /* call 0x00342DE0 */

loc_0032446E: ;
    ecx = MEM32(esi + 0x174);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x170);

loc_0032447B: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00324483u); RECOMP_ABI_CALL(0x00342E20u, sub_00342E20); /* call 0x00342E20 */

loc_00324483: ;
    ecx = MEM32(ebx);
    MEM32(esi + 0x178) = ecx;
    ecx = MEM32(ebx + 4);
    MEM32(esi + 0x17C) = ecx;
    ecx = MEM32(edi);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    eax = MEM32(edi + 4);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    edx = esi;
    MEM32(esi + 0x180) = ecx;
    MEM32(esi + 0x184) = eax;
    PUSH32(esp, 0x003244B0u); RECOMP_ABI_CALL(0x00323DE0u, sub_00323DE0); /* call 0x00323DE0 */

loc_003244B0: ;
    goto loc_003244BC;

loc_003244B2: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003244BC; /* jne: not equal / not zero */

loc_003244B9: ;
    MEM32(esi + 8) = eax;

loc_003244BC: ;
    eax = MEM32(esi + 0x18C);
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    edx = MEM32(esi + 0x188);
    ebp = MEM32(edi);
    if (CMP_L(_fas, _fbs)) goto loc_003244D7; /* jl: less (signed <) */

loc_003244D1: ;
    if (CMP_G(_fas, _fbs)) goto loc_003244DB; /* jg: greater (signed >) */

loc_003244D3: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_003244DB; /* ja: above (unsigned >) */

loc_003244D7: ;
    edx = ebp;
    eax = ecx;

loc_003244DB: ;
    ecx = MEM32(esi + 0x17C);
    MEM32(esi + 0x18C) = eax;
    eax = MEM32(esi + 0x178);
    MEM32(esi + 0x188) = edx;
    edx = eax;
    _cf = 0; /* logical op clears CF */
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324508; /* jne: not equal / not zero */

loc_003244FC: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    goto loc_00324547;

loc_00324508: ;
    edx = MEM32(ebx);
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    eax = MEM32(ebx + 4);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(ecx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00324520u); RECOMP_ABI_CALL(0x00342DE0u, sub_00342DE0); /* call 0x00342DE0 */

loc_00324520: ;
    ecx = MEM32(ebx + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032452Fu); RECOMP_ABI_CALL(0x00342E20u, sub_00342E20); /* call 0x00342E20 */

loc_0032452F: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(esi + 0x180))) >> 32) & 1);
    eax = eax + MEM32(esi + 0x180);
    MEM32(esp + 0x10) = eax;
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(MEM32(esi + 0x184)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    eax = MEM32(esp + 0x10);
    MEM32(esp + 0x14) = edx;

loc_00324547: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003245C9; /* jne: not equal / not zero */

loc_0032454E: ;
    ecx = MEM32(esi + 0x18C);
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    edx = MEM32(esi + 0x188);
    if (CMP_L(_fas, _fbs)) goto loc_003247BF; /* jl: less (signed <) */

loc_00324564: ;
    if (CMP_G(_fas, _fbs)) goto loc_0032456E; /* jg: greater (signed >) */

loc_00324566: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003247BF; /* jbe: below or equal (unsigned <=) */

loc_0032456E: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0032458E; /* je: equal / zero */

loc_00324575: ;
    eax = MEM32(ebx);
    MEM32(esi + 0x178) = eax;
    eax = MEM32(ebx + 4);
    MEM32(esi + 0x17C) = eax;
    MEM32(esi + 0x180) = edx;
    goto loc_003245B1;

loc_0032458E: ;
    ecx = MEM32(ebx);
    eax = MEM32(esi + 0x128);
    MEM32(esi + 0x178) = ecx;
    edx = MEM32(ebx + 4);
    ecx = MEM32(esi + 0x12C);
    MEM32(esi + 0x17C) = edx;
    MEM32(esi + 0x180) = eax;

loc_003245B1: ;
    eax = MEM32(esi + 0x190);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x184) = ecx;
    MEM32(esi + 0x190) = eax;
    goto loc_003247BF;

loc_003245C9: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003247BF; /* jne: not equal / not zero */

loc_003245D3: ;
    ebp = MEM32(edi);
    edx = MEM32(edi + 4);
    ecx = ebp;
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    eax = edx;
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(MEM32(esp + 0x14)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_G(_fas & _fbs, 0)) goto loc_003245FE; /* jg: greater (signed >) */

loc_003245E6: ;
    if (TEST_S(_fas, _fbs)) goto loc_003245EC; /* jl: less (signed <) */

loc_003245E8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_AE(_fa & _fb, 0)) goto loc_003245FE; /* jae: above or equal (unsigned >=) */

loc_003245EC: ;
    eax = MEM32(esp + 0x10);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ebp));
    eax = eax - ebp;
    ebp = MEM32(esp + 0x14);
    MEM32(esp + 0x20) = eax;
    { uint64_t _t = (uint64_t)(ebp) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ebp = (uint32_t)_t; }  /* sbb */
    goto loc_00324604;

loc_003245FE: ;
    MEM32(esp + 0x20) = ecx;
    ebp = eax;

loc_00324604: ;
    edx = MEM32(edi + 0xC);
    eax = MEM32(edi + 8);
    ecx = MEM32(esi + 0x14C);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x148);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0032461Fu); RECOMP_ABI_CALL(0x00342DE0u, sub_00342DE0); /* call 0x00342DE0 */

loc_0032461F: ;
    ecx = MEM32(esi + 0x154);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x150);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00324634u); RECOMP_ABI_CALL(0x00342E20u, sub_00342E20); /* call 0x00342E20 */

loc_00324634: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00324674; /* jl: less (signed <) */

loc_00324638: ;
    if (CMP_G(_fas, _fbs)) goto loc_00324640; /* jg: greater (signed >) */

loc_0032463A: ;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x20), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00324674; /* jbe: below or equal (unsigned <=) */

loc_00324640: ;
    edx = MEM32(ebx);
    MEM32(esi + 0x178) = edx;
    eax = MEM32(ebx + 4);
    MEM32(esi + 0x17C) = eax;
    ecx = MEM32(edi);
    MEM32(esi + 0x180) = ecx;
    edx = MEM32(edi + 4);
    MEM32(esi + 0x184) = edx;
    edx = esi;
    PUSH32(esp, 0x00324669u); RECOMP_ABI_CALL(0x00323DE0u, sub_00323DE0); /* call 0x00323DE0 */

loc_00324669: ;
    MEM32(esi + 0x1A0) = MEM32(esi + 0x1A0) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x1A0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003247BF;

loc_00324674: ;
    eax = MEM32(edi);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esp + 0x10)));
    eax = eax - MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00324680u); RECOMP_ABI_CALL(0x00324320u, sub_00324320); /* call 0x00324320 */

loc_00324680: ;
    ecx = MEM32(edi + 0xC);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x138);
    ebp = edx;
    edx = MEM32(edi + 8);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esi + 0x13C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003246A5u); RECOMP_ABI_CALL(0x00342DE0u, sub_00342DE0); /* call 0x00342DE0 */

loc_003246A5: ;
    ecx = MEM32(esi + 0x144);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x140);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003246BAu); RECOMP_ABI_CALL(0x00342E20u, sub_00342E20); /* call 0x00342E20 */

loc_003246BA: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x18) = eax;
    eax = edx;
    edx = MEM32(esp + 0x20);
    MEM32(esp + 0x1C) = eax;
    if (CMP_G(_fas & _fbs, 0)) goto loc_003246E3; /* jg: greater (signed >) */

loc_003246CC: ;
    if (TEST_S(_fas, _fbs)) goto loc_003246D2; /* jl: less (signed <) */

loc_003246CE: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_AE(_fa & _fb, 0)) goto loc_003246E3; /* jae: above or equal (unsigned >=) */

loc_003246D2: ;
    ecx = edx;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    MEM32(esp + 0x20) = ecx;
    ecx = ebp;
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    goto loc_003246E9;

loc_003246E3: ;
    MEM32(esp + 0x20) = edx;
    ecx = ebp;

loc_003246E9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_003247BF; /* jl: less (signed <) */

loc_003246F1: ;
    if (CMP_G(_fas, _fbs)) goto loc_00324705; /* jg: greater (signed >) */

loc_003246F3: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x18) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003247BF; /* jbe: below or equal (unsigned <=) */

loc_00324701: ;
    eax = MEM32(esp + 0x1C);

loc_00324705: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00324743; /* jl: less (signed <) */

loc_00324709: ;
    if (CMP_G(_fas, _fbs)) goto loc_00324711; /* jg: greater (signed >) */

loc_0032470B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x18) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00324743; /* jbe: below or equal (unsigned <=) */

loc_00324711: ;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0032471Cu); RECOMP_ABI_CALL(0x00342DE0u, sub_00342DE0); /* call 0x00342DE0 */

loc_0032471C: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032472Du); RECOMP_ABI_CALL(0x00342E20u, sub_00342E20); /* call 0x00342E20 */

loc_0032472D: ;
    ecx = MEM32(esi + 0x194);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(1));
    eax = eax - 1;
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(0) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    MEM32(esi + 0x194) = ecx;
    goto loc_00324773;

loc_00324743: ;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0032474Eu); RECOMP_ABI_CALL(0x00342DE0u, sub_00342DE0); /* call 0x00342DE0 */

loc_0032474E: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032475Fu); RECOMP_ABI_CALL(0x00342E20u, sub_00342E20); /* call 0x00342E20 */

loc_0032475F: ;
    ecx = MEM32(esi + 0x198);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    MEM32(esi + 0x198) = ecx;

loc_00324773: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00324784u); RECOMP_ABI_CALL(0x00342DE0u, sub_00342DE0); /* call 0x00342DE0 */

loc_00324784: ;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032478Fu); RECOMP_ABI_CALL(0x00342E20u, sub_00342E20); /* call 0x00342E20 */

loc_0032478F: ;
    ecx = MEM32(ebx);
    ebp = MEM32(esp + 0x10);
    MEM32(esi + 0x178) = ecx;
    ecx = MEM32(ebx + 4);
    MEM32(esi + 0x17C) = ecx;
    ecx = eax;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebp)) >> 32) & 1);
    ecx = ecx + ebp;
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(MEM32(esp + 0x14)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    MEM32(esi + 0x184) = edx;
    edx = eax;
    MEM32(esi + 0x180) = ecx;
    PUSH32(esp, 0x003247BFu); RECOMP_ABI_CALL(0x00324350u, sub_00324350); /* call 0x00324350 */

loc_003247BF: ;
    eax = MEM32(esi + 0x178);
    ecx = MEM32(esi + 0x17C);
    edx = eax;
    _cf = 0; /* logical op clears CF */
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003247DA; /* jne: not equal / not zero */

loc_003247D4: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    goto loc_00324811;

loc_003247DA: ;
    edx = MEM32(ebx);
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    eax = MEM32(ebx + 4);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(ecx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003247F2u); RECOMP_ABI_CALL(0x00342DE0u, sub_00342DE0); /* call 0x00342DE0 */

loc_003247F2: ;
    ecx = MEM32(ebx + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00324801u); RECOMP_ABI_CALL(0x00342E20u, sub_00342E20); /* call 0x00342E20 */

loc_00324801: ;
    ebp = MEM32(esi + 0x180);
    ecx = MEM32(esi + 0x184);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebp)) >> 32) & 1);
    eax = eax + ebp;
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(ecx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */

loc_00324811: ;
    ecx = MEM32(esp + 0x38);
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = edx;
    edx = MEM32(edi + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(edi + 0xC);
    edx = MEM32(ecx + 4);
    MEM32(ecx + 0xC) = eax;
    ebp = MEM32(esi + 0x12C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = esi + 0x128;
    if (CMP_G(_fas, _fbs)) goto loc_00324859; /* jg: greater (signed >) */

loc_00324839: ;
    if (CMP_L(_fas, _fbs)) goto loc_00324841; /* jl: less (signed <) */

loc_0032483B: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00324859; /* jae: above or equal (unsigned >=) */

loc_00324841: ;
    ebp = MEM32(eax);
    edx = ecx;
    MEM32(edx) = ebp;
    ebp = MEM32(eax + 4);
    MEM32(edx + 4) = ebp;
    ebp = MEM32(eax + 8);
    MEM32(edx + 8) = ebp;
    eax = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = eax;

loc_00324859: ;
    eax = edi;
    ebp = MEM32(eax);
    edx = esi + 0x108;
    MEM32(edx) = ebp;
    ebp = MEM32(eax + 4);
    MEM32(edx + 4) = ebp;
    ebp = MEM32(eax + 8);
    MEM32(edx + 8) = ebp;
    eax = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = eax;
    eax = MEM32(ebx);
    edx = esi + 0x118;
    MEM32(edx) = eax;
    eax = MEM32(ebx + 4);
    MEM32(edx + 4) = eax;
    eax = MEM32(ebx + 8);
    MEM32(edx + 8) = eax;
    eax = MEM32(ebx + 0xC);
    MEM32(edx + 0xC) = eax;
    edx = ecx;
    eax = MEM32(edx);
    MEM32(esi + 0x128) = eax;
    eax = MEM32(edx + 4);
    MEM32(esi + 0x12C) = eax;
    eax = MEM32(edx + 8);
    MEM32(esi + 0x130) = eax;
    edx = MEM32(edx + 0xC);
    eax = MEM32(esi + 8);
    MEM32(esi + 0x134) = edx;
    edi = MEM32(edi);
    _cf = (int)((uint32_t)(edi) < (uint32_t)(MEM32(ecx)));
    edi = edi - MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003248FA; /* jne: not equal / not zero */

loc_003248C3: ;
    eax = MEM32(esi + 0x1AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_003248CF; /* jg: greater (signed >) */

loc_003248CD: ;
    eax = edi;

loc_003248CF: ;
    MEM32(esi + 0x1AC) = eax;
    eax = MEM32(esi + 0x1B0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_003248E1; /* jl: less (signed <) */

loc_003248DF: ;
    eax = edi;

loc_003248E1: ;
    MEM32(esi + 0x1B0) = eax;
    MEM32(0x6E630C) = esi;
    PUSH32(esp, 0x003248F2u); RECOMP_ABI_CALL(0x00323FF0u, sub_00323FF0); /* call 0x00323FF0 */

loc_003248F2: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_003248FA: ;
    eax = MEM32(esi + 0x1B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00324906; /* jg: greater (signed >) */

loc_00324904: ;
    eax = edi;

loc_00324906: ;
    MEM32(esi + 0x1B4) = eax;
    eax = MEM32(esi + 0x1B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00324918; /* jl: less (signed <) */

loc_00324916: ;
    eax = edi;

loc_00324918: ;
    MEM32(esi + 0x1B8) = eax;
    MEM32(0x6E630C) = esi;
    PUSH32(esp, 0x00324929u); RECOMP_ABI_CALL(0x00323FF0u, sub_00323FF0); /* call 0x00323FF0 */

loc_00324929: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_00324931: ;
    eax = MEM32(esp + 0x28);
    edx = MEM32(eax);
    ecx = MEM32(esp + 0x30);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    POP32(esp, esi);
    MEM32(ecx + 0xC) = eax;
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00324752
 * Original: 0x00324752 - 0x00324955 (515 bytes, 174 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00324752(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00324752: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032475Fu); RECOMP_ABI_CALL(0x00342E20u, sub_00342E20); /* call 0x00342E20 */

loc_0032475F: ;
    ecx = MEM32(esi + 0x198);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    MEM32(esi + 0x198) = ecx;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00324784u); RECOMP_ABI_CALL(0x00342DE0u, sub_00342DE0); /* call 0x00342DE0 */

loc_00324784: ;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032478Fu); RECOMP_ABI_CALL(0x00342E20u, sub_00342E20); /* call 0x00342E20 */

loc_0032478F: ;
    ecx = MEM32(ebx);
    ebp = MEM32(esp + 0x10);
    MEM32(esi + 0x178) = ecx;
    ecx = MEM32(ebx + 4);
    MEM32(esi + 0x17C) = ecx;
    ecx = eax;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebp)) >> 32) & 1);
    ecx = ecx + ebp;
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(MEM32(esp + 0x14)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    MEM32(esi + 0x184) = edx;
    edx = eax;
    MEM32(esi + 0x180) = ecx;
    PUSH32(esp, 0x003247BFu); RECOMP_ABI_CALL(0x00324350u, sub_00324350); /* call 0x00324350 */

loc_003247BF: ;
    eax = MEM32(esi + 0x178);
    ecx = MEM32(esi + 0x17C);
    edx = eax;
    _cf = 0; /* logical op clears CF */
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003247DA; /* jne: not equal / not zero */

loc_003247D4: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    goto loc_00324811;

loc_003247DA: ;
    edx = MEM32(ebx);
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    eax = MEM32(ebx + 4);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(ecx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003247F2u); RECOMP_ABI_CALL(0x00342DE0u, sub_00342DE0); /* call 0x00342DE0 */

loc_003247F2: ;
    ecx = MEM32(ebx + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00324801u); RECOMP_ABI_CALL(0x00342E20u, sub_00342E20); /* call 0x00342E20 */

loc_00324801: ;
    ebp = MEM32(esi + 0x180);
    ecx = MEM32(esi + 0x184);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebp)) >> 32) & 1);
    eax = eax + ebp;
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(ecx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */

loc_00324811: ;
    ecx = MEM32(esp + 0x38);
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = edx;
    edx = MEM32(edi + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(edi + 0xC);
    edx = MEM32(ecx + 4);
    MEM32(ecx + 0xC) = eax;
    ebp = MEM32(esi + 0x12C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = esi + 0x128;
    if (CMP_G(_fas, _fbs)) goto loc_00324859; /* jg: greater (signed >) */

loc_00324839: ;
    if (CMP_L(_fas, _fbs)) goto loc_00324841; /* jl: less (signed <) */

loc_0032483B: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00324859; /* jae: above or equal (unsigned >=) */

loc_00324841: ;
    ebp = MEM32(eax);
    edx = ecx;
    MEM32(edx) = ebp;
    ebp = MEM32(eax + 4);
    MEM32(edx + 4) = ebp;
    ebp = MEM32(eax + 8);
    MEM32(edx + 8) = ebp;
    eax = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = eax;

loc_00324859: ;
    eax = edi;
    ebp = MEM32(eax);
    edx = esi + 0x108;
    MEM32(edx) = ebp;
    ebp = MEM32(eax + 4);
    MEM32(edx + 4) = ebp;
    ebp = MEM32(eax + 8);
    MEM32(edx + 8) = ebp;
    eax = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = eax;
    eax = MEM32(ebx);
    edx = esi + 0x118;
    MEM32(edx) = eax;
    eax = MEM32(ebx + 4);
    MEM32(edx + 4) = eax;
    eax = MEM32(ebx + 8);
    MEM32(edx + 8) = eax;
    eax = MEM32(ebx + 0xC);
    MEM32(edx + 0xC) = eax;
    edx = ecx;
    eax = MEM32(edx);
    MEM32(esi + 0x128) = eax;
    eax = MEM32(edx + 4);
    MEM32(esi + 0x12C) = eax;
    eax = MEM32(edx + 8);
    MEM32(esi + 0x130) = eax;
    edx = MEM32(edx + 0xC);
    eax = MEM32(esi + 8);
    MEM32(esi + 0x134) = edx;
    edi = MEM32(edi);
    _cf = (int)((uint32_t)(edi) < (uint32_t)(MEM32(ecx)));
    edi = edi - MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003248FA; /* jne: not equal / not zero */

loc_003248C3: ;
    eax = MEM32(esi + 0x1AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_003248CF; /* jg: greater (signed >) */

loc_003248CD: ;
    eax = edi;

loc_003248CF: ;
    MEM32(esi + 0x1AC) = eax;
    eax = MEM32(esi + 0x1B0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_003248E1; /* jl: less (signed <) */

loc_003248DF: ;
    eax = edi;

loc_003248E1: ;
    MEM32(esi + 0x1B0) = eax;
    MEM32(0x6E630C) = esi;
    PUSH32(esp, 0x003248F2u); RECOMP_ABI_CALL(0x00323FF0u, sub_00323FF0); /* call 0x00323FF0 */

loc_003248F2: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_003248FA: ;
    eax = MEM32(esi + 0x1B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00324906; /* jg: greater (signed >) */

loc_00324904: ;
    eax = edi;

loc_00324906: ;
    MEM32(esi + 0x1B4) = eax;
    eax = MEM32(esi + 0x1B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00324918; /* jl: less (signed <) */

loc_00324916: ;
    eax = edi;

loc_00324918: ;
    MEM32(esi + 0x1B8) = eax;
    MEM32(0x6E630C) = esi;
    PUSH32(esp, 0x00324929u); RECOMP_ABI_CALL(0x00323FF0u, sub_00323FF0); /* call 0x00323FF0 */

loc_00324929: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00324960
 * Original: 0x00324960 - 0x00324970 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00324960(void)
{

loc_00324960: ;
    PUSH32(esp, 0x5D34B0);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x0032496Cu); RECOMP_ABI_CALL(0x00320B00u, sub_00320B00); /* call 0x00320B00 */

loc_0032496C: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00324970
 * Original: 0x00324970 - 0x00324975 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00324970(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00324970: ;
    g_seh_ebp = ebp; sub_00320B40(); return; /* tail jmp 0x00320B40 */

}

/**
 * sub_00324980
 * Original: 0x00324980 - 0x00324998 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00324980(void)
{

loc_00324980: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x90) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003249A0
 * Original: 0x003249A0 - 0x003249B2 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003249A0(void)
{

loc_003249A0: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    MEM32(eax) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x90) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003249C0
 * Original: 0x003249C0 - 0x003249E1 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003249C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003249C0: ;
    eax = ZX8(MEM8(ecx));
    edx = ZX8(MEM8(ecx + 1));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax << 8;
    eax = eax | edx;
    edx = ZX8(MEM8(ecx + 1));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ZX8(MEM8(ecx + 1));
    eax = eax << 8;
    eax = eax | edx;
    eax = eax << 8;
    eax = eax | ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003249F0
 * Original: 0x003249F0 - 0x00324A33 (67 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003249F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003249F0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00324A01u); RECOMP_ABI_CALL(0x00320B60u, sub_00320B60); /* call 0x00320B60 */

loc_00324A01: ;
    esi = eax;
    esp = esp + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00324A0D; /* jne: not equal / not zero */

loc_00324A0A: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00324A0D: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00324A18u); RECOMP_ABI_CALL(0x00321460u, sub_00321460); /* call 0x00321460 */

loc_00324A18: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00324A23; /* jne: not equal / not zero */

loc_00324A1F: ;
    MEM32(esp + 4) = eax;

loc_00324A23: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00324A29u); RECOMP_ABI_CALL(0x00320BC0u, sub_00320BC0); /* call 0x00320BC0 */

loc_00324A29: ;
    eax = MEM32(esp + 8);
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00324A40
 * Original: 0x00324A40 - 0x00324A50 (16 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00324A40(void)
{

loc_00324A40: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x225;
    esi = eax;
    edi = edx;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00324A50
 * Original: 0x00324A50 - 0x00324A74 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00324A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00324A50: ;
    eax = MEM32(esi + 0x2E94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00324A67; /* je: equal / zero */

loc_00324A5A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00324A60u); RECOMP_ABI_CALL(0x0031C100u, sub_0031C100); /* call 0x0031C100 */

loc_00324A60: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00324A6A; /* jle: less or equal (signed <=) */

loc_00324A67: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00324A6A: ;
    eax = MEM32(esi + 0x2E94);
    eax = eax + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00324A80
 * Original: 0x00324A80 - 0x00324AB2 (50 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00324A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00324A80: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00324AA8; /* jg: greater (signed >) */

loc_00324A88: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00324A94u); RECOMP_ABI_CALL(0x00320C00u, sub_00320C00); /* call 0x00320C00 */

loc_00324A94: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00324AA3; /* je: equal / zero */

loc_00324A9B: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00324AAD; /* jne: not equal / not zero */

loc_00324AA3: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00324A88; /* jle: less or equal (signed <=) */

loc_00324AA8: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00324AAD: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00324AC0
 * Original: 0x00324AC0 - 0x00324ADB (27 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00324AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00324AC0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(esp + 0x10); PUSH32(esp, 0x00324ACAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00324ACA: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00324AD6; /* jne: not equal / not zero */

loc_00324AD1: ;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00324AD6: ;
    eax = MEM32(esp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00324AE0
 * Original: 0x00324AE0 - 0x00324AFC (28 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00324AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00324AE0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(esp + 0x14); PUSH32(esp, 0x00324AEBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00324AEB: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00324AF7; /* jne: not equal / not zero */

loc_00324AF2: ;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00324AF7: ;
    eax = MEM32(esp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
