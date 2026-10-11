/**
 * X-Men Legends - Recompiled code chunk 74
 * Functions: 250 (0x002F9B41 - 0x003042D0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_002F9B41
 * Original: 0x002F9B41 - 0x002F9B80 (63 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F9B41(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F9B41: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edx = MEM32(ebp + 0xC);
    edx = edx - 0x1000D;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx + 0x1CC);
    if ((edx == 0)) goto loc_002F9B71; /* je: equal / zero */

loc_002F9B58: ;
    edx = edx - 9;
    if ((edx == 0)) goto loc_002F9B6C; /* je: equal / zero */

loc_002F9B5D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x002F9B67u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002F9B67: ;
    esp = esp + 0xC;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002F9B6C: ;
    eax = MEM32(eax + 0x78);
    goto loc_002F9B74;

loc_002F9B71: ;
    eax = MEM32(eax + 0x74);

loc_002F9B74: ;
    ecx = MEM32(ebp + 0x10);
    ecx = MEM32(ecx);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002F9B80
 * Original: 0x002F9B80 - 0x002F9C8B (267 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F9B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F9B80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0x9C;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002F9B8Eu); RECOMP_ABI_CALL(0x002B88E0u, sub_002B88E0); /* call 0x002B88E0 */

loc_002F9B8E: ;
    esi = MEM32(esp + 0x14);
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    POP32(esp, ecx);
    MEM32(esi + 0x1CC) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_002F9BB7; /* jne: not equal / not zero */

loc_002F9B9F: ;
    PUSH32(esp, 0x410FA8);
    PUSH32(esp, 0x410F94);
    PUSH32(esp, 0x002F9BAEu); RECOMP_ABI_CALL(0x002CED88u, sub_002CED88); /* call 0x002CED88 */

loc_002F9BAE: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    goto loc_002F9C87;

loc_002F9BB7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002F9BC0u); RECOMP_ABI_CALL(0x00344D30u, sub_00344D30); /* call 0x00344D30 */

loc_002F9BC0: ;
    MEM32(edi + 0x5C) = MEM32(edi + 0x5C) & 0;
    MEM32(edi + 0x74) = MEM32(edi + 0x74) | 0xFFFFFFFFu;
    eax = 0x2F86D4;
    PUSH32(esp, 2);
    MEM32(esi + 0x1A0) = eax;
    MEM32(esi + 0x1A8) = eax;
    MEM32(esi + 0x1B0) = eax;
    eax = 0x2F976F;
    PUSH32(esp, 0x410DC4);
    PUSH32(esp, esi);
    MEM32(esi + 0x18C) = 0x2F8622;
    MEM32(esi + 0x190) = 0x2F9CD2;
    MEM32(esi + 0x194) = 0x2F8908;
    MEM32(esi + 0x198) = 0x2F9DF0;
    MEM32(esi + 0x19C) = 0x2F98F0;
    MEM32(esi + 0x1A4) = eax;
    MEM32(esi + 0x1AC) = eax;
    MEM32(esi + 0x1B4) = eax;
    MEM32(esi + 0x1B8) = 0x2F996E;
    MEM32(esi + 0x1C0) = 0x2F997F;
    PUSH32(esp, 0x002F9C49u); RECOMP_ABI_CALL(0x002CF1A8u, sub_002CF1A8); /* call 0x002CF1A8 */

loc_002F9C49: ;
    eax = esi + 0x220;
    ecx = MEM32(eax);
    MEM32(edi + 0x7C) = ecx;
    MEM32(eax) = 0x2F9B41;
    eax = esi + 0x21C;
    ecx = MEM32(eax);
    MEM32(edi + 0x80) = ecx;
    MEM32(eax) = 0x2F9A35;
    MEM32(edi + 0x78) = MEM32(edi + 0x78) | 0xFFFFFFFFu;
    MEM32(edi + 0x70) = MEM32(edi + 0x70) & 0;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002F9C7Cu); RECOMP_ABI_CALL(0x00300D59u, sub_00300D59); /* call 0x00300D59 */

loc_002F9C7C: ;
    esp = esp + 0x1C;
    PUSH32(esp, 0x002F9C84u); RECOMP_ABI_CALL(0x002F826Du, sub_002F826D); /* call 0x002F826D */

loc_002F9C84: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002F9C87: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002F9C8B
 * Original: 0x002F9C8B - 0x002F9CD2 (71 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F9C8B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F9C8B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = MEM32(edi + 0x1CC);
    PUSH32(esp, 0x38);
    eax = esi + 0x30;
    PUSH32(esp, 0x3DC0B8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002F9CA7u); RECOMP_ABI_CALL(0x002AF360u, sub_002AF360); /* call 0x002AF360 */

loc_002F9CA7: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F9CC9; /* je: equal / zero */

loc_002F9CAE: ;
    PUSH32(esp, MEM32(esi + 0x48));
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 0x410E10);
    PUSH32(esp, 0x410FCC);
    PUSH32(esp, 0x002F9CC2u); RECOMP_ABI_CALL(0x002CED88u, sub_002CED88); /* call 0x002CED88 */

loc_002F9CC2: ;
    esp = esp + 0x10;
    eax = 0; /* xor self */
    goto loc_002F9CCF;

loc_002F9CC9: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x6C) = MEM32(esi + 0x6C) | eax;

loc_002F9CCF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F9CD2
 * Original: 0x002F9CD2 - 0x002F9CFF (45 bytes, 16 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F9CD2(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002F9CD2: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x1CC);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x1D8);
    edx = ecx + 0x30;
    MEM32(edx) = esi;
    eax = MEM32(eax + 0x1E4);
    PUSH32(esp, edx);
    MEM32(ecx + 0x34) = eax;
    PUSH32(esp, 0x002F9CF7u); RECOMP_ABI_CALL(0x002AF1B0u, sub_002AF1B0); /* call 0x002AF1B0 */

loc_002F9CF7: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    POP32(esp, ecx);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F9DA6
 * Original: 0x002F9DA6 - 0x002F9DF0 (74 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F9DA6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F9DA6: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = MEM32(edi + 0x1CC);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x3DC0B8);
    PUSH32(esp, MEM32(esi + 0x68));
    eax = esi + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002F9DC5u); RECOMP_ABI_CALL(0x002B0DC0u, sub_002B0DC0); /* call 0x002B0DC0 */

loc_002F9DC5: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F9DE7; /* je: equal / zero */

loc_002F9DCC: ;
    PUSH32(esp, MEM32(esi + 0x48));
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 0x410E10);
    PUSH32(esp, 0x410FE8);
    PUSH32(esp, 0x002F9DE0u); RECOMP_ABI_CALL(0x002CED88u, sub_002CED88); /* call 0x002CED88 */

loc_002F9DE0: ;
    esp = esp + 0x10;
    eax = 0; /* xor self */
    goto loc_002F9DED;

loc_002F9DE7: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x6C) = MEM32(esi + 0x6C) | eax;

loc_002F9DED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F9DF0
 * Original: 0x002F9DF0 - 0x002F9E1C (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F9DF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002F9DF0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x1CC);
    edx = MEM32(ecx + 0x1D8);
    MEM32(eax + 0x3C) = edx;
    ecx = MEM32(ecx + 0x1DC);
    MEM32(eax + 0x40) = ecx;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002F9E15u); RECOMP_ABI_CALL(0x002B0890u, sub_002B0890); /* call 0x002B0890 */

loc_002F9E15: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    POP32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_002F9E1C
 * Original: 0x002F9E1C - 0x002F9E98 (124 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F9E1C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F9E1C: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = MEM32(edi + 0x1CC);
    MEM32(esi + 0x30) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(esi + 0x34) = eax;

loc_002F9E37: ;
    eax = esi + 0x30;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002F9E42u); RECOMP_ABI_CALL(0x002AF920u, sub_002AF920); /* call 0x002AF920 */

loc_002F9E42: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_002F9E7D; /* jne: not equal / not zero */

loc_002F9E48: ;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F9E70; /* jne: not equal / not zero */

loc_002F9E4D: ;
    ebx = edi + 0x1DC;
    eax = MEM32(ebx);
    PUSH32(esp, edi);
    MEM32(edi + 0x1E4) = eax;
    PUSH32(esp, 0x002F9E61u); RECOMP_ABI_CALL(0x002CB4D3u, sub_002CB4D3); /* call 0x002CB4D3 */

loc_002F9E61: ;
    eax = MEM32(edi + 0x1D8);
    MEM32(esi + 0x3C) = eax;
    eax = MEM32(ebx);
    POP32(esp, ecx);
    MEM32(esi + 0x40) = eax;

loc_002F9E70: ;
    _fa = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x34), 0 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002F9E37; /* ja: above (unsigned >) */

loc_002F9E76: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002F9E79: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002F9E7D: ;
    PUSH32(esp, MEM32(esi + 0x48));
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 0x410F7C);
    PUSH32(esp, 0x410FF8);
    PUSH32(esp, 0x002F9E91u); RECOMP_ABI_CALL(0x002CED88u, sub_002CED88); /* call 0x002CED88 */

loc_002F9E91: ;
    esp = esp + 0x10;
    eax = 0; /* xor self */
    goto loc_002F9E79;

}

/**
 * sub_002F9E98
 * Original: 0x002F9E98 - 0x002F9F16 (126 bytes, 46 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F9E98(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F9E98: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = MEM32(edi + 0x1CC);
    MEM32(esi + 0x34) = MEM32(esi + 0x34) & 0;

loc_002F9EA9: ;
    eax = esi + 0x30;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002F9EB4u); RECOMP_ABI_CALL(0x002AF920u, sub_002AF920); /* call 0x002AF920 */

loc_002F9EB4: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_S(_fas, _fbs)) goto loc_002F9EF9; /* jl: less (signed <) */

loc_002F9EBC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002F9EF9; /* jg: greater (signed >) */

loc_002F9EC1: ;
    ecx = MEM32(esi + 0x40);
    eax = MEM32(edi + 0x1DC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F9EEF; /* je: equal / zero */

loc_002F9ECE: ;
    eax = eax - ecx;
    PUSH32(esp, edi);
    MEM32(edi + 0x1E4) = eax;
    PUSH32(esp, 0x002F9EDCu); RECOMP_ABI_CALL(0x002CB4D3u, sub_002CB4D3); /* call 0x002CB4D3 */

loc_002F9EDC: ;
    eax = MEM32(edi + 0x1D8);
    MEM32(esi + 0x3C) = eax;
    eax = MEM32(edi + 0x1DC);
    POP32(esp, ecx);
    MEM32(esi + 0x40) = eax;

loc_002F9EEF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F9EA9; /* jne: not equal / not zero */

loc_002F9EF4: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_002F9F12;

loc_002F9EF9: ;
    PUSH32(esp, MEM32(esi + 0x48));
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 0x410EC0);
    PUSH32(esp, 0x411004);
    PUSH32(esp, 0x002F9F0Du); RECOMP_ABI_CALL(0x002CED88u, sub_002CED88); /* call 0x002CED88 */

loc_002F9F0D: ;
    esp = esp + 0x10;
    eax = 0; /* xor self */

loc_002F9F12: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002F9F16
 * Original: 0x002F9F16 - 0x002F9F54 (62 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F9F16(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F9F16: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = MEM32(edi + 0x1CC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F9F51; /* je: equal / zero */

loc_002F9F26: ;
    _fa = (uint32_t)(MEM8(esi + 0x6C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x6C), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F9F43; /* je: equal / zero */

loc_002F9F2C: ;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), 0 (32-bit) */
    eax = esi + 0x30;
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) goto loc_002F9F3D; /* jne: not equal / not zero */

loc_002F9F36: ;
    PUSH32(esp, 0x002F9F3Bu); RECOMP_ABI_CALL(0x002AF200u, sub_002AF200); /* call 0x002AF200 */

loc_002F9F3B: ;
    goto loc_002F9F42;

loc_002F9F3D: ;
    PUSH32(esp, 0x002F9F42u); RECOMP_ABI_CALL(0x002AFBA0u, sub_002AFBA0); /* call 0x002AFBA0 */

loc_002F9F42: ;
    POP32(esp, ecx);

loc_002F9F43: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002F9F49u); RECOMP_ABI_CALL(0x002B88F0u, sub_002B88F0); /* call 0x002B88F0 */

loc_002F9F49: ;
    MEM32(edi + 0x1CC) = MEM32(edi + 0x1CC) & 0;
    POP32(esp, ecx);

loc_002F9F51: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F9F54
 * Original: 0x002F9F54 - 0x002F9FC3 (111 bytes, 43 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F9F54(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F9F54: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10015) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x10015 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = MEM32(edi + 0x1CC);
    if (CMP_EQ(_fa, _fb)) goto loc_002F9F7A; /* je: equal / zero */

loc_002F9F6B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(esi + 0x74); PUSH32(esp, 0x002F9F75u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002F9F75: ;
    esp = esp + 0xC;
    goto loc_002F9FBF;

loc_002F9F7A: ;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax);
    MEM32(esi + 0x68) = eax;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F9FBC; /* je: equal / zero */

loc_002F9F88: ;
    _fa = (uint32_t)(MEM8(esi + 0x6C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x6C), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F9FBC; /* je: equal / zero */

loc_002F9F8E: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = esi + 0x30;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F9F9Au); RECOMP_ABI_CALL(0x002B0910u, sub_002B0910); /* call 0x002B0910 */

loc_002F9F9A: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F9FBC; /* je: equal / zero */

loc_002F9FA1: ;
    PUSH32(esp, MEM32(esi + 0x48));
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 0x410EC0);
    PUSH32(esp, 0x411014);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F9FB5u); RECOMP_ABI_CALL(0x002CED88u, sub_002CED88); /* call 0x002CED88 */

loc_002F9FB5: ;
    esp = esp + 0x10;
    eax = 0; /* xor self */
    goto loc_002F9FBF;

loc_002F9FBC: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002F9FBF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002F9FC3
 * Original: 0x002F9FC3 - 0x002F9FF6 (51 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F9FC3(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F9FC3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10015) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x10015 (32-bit) */
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx + 0x1CC);
    if (CMP_EQ(_fa, _fb)) goto loc_002F9FE7; /* je: equal / zero */

loc_002F9FD8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x002F9FE2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002F9FE2: ;
    esp = esp + 0xC;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002F9FE7: ;
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(eax + 0x68);
    ecx = MEM32(ecx);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002F9FF6
 * Original: 0x002F9FF6 - 0x002FA0E7 (241 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F9FF6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F9FF6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x78);
    PUSH32(esp, 0x002FA000u); RECOMP_ABI_CALL(0x002B88E0u, sub_002B88E0); /* call 0x002B88E0 */

loc_002FA000: ;
    esi = MEM32(esp + 0x14);
    edi = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    POP32(esp, ecx);
    MEM32(esi + 0x1CC) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_002FA02B; /* jne: not equal / not zero */

loc_002FA013: ;
    PUSH32(esp, 0x411044);
    PUSH32(esp, 0x411038);
    PUSH32(esp, 0x002FA022u); RECOMP_ABI_CALL(0x002CED88u, sub_002CED88); /* call 0x002CED88 */

loc_002FA022: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    goto loc_002FA0E3;

loc_002FA02B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x411024);
    PUSH32(esp, esi);
    MEM32(edi + 0x50) = ebx;
    MEM32(edi + 0x54) = ebx;
    MEM32(edi + 0x58) = ebx;
    MEM32(edi + 0x5C) = ebx;
    PUSH32(esp, 0x002FA044u); RECOMP_ABI_CALL(0x002CF1A8u, sub_002CF1A8); /* call 0x002CF1A8 */

loc_002FA044: ;
    eax = esi + 0x220;
    ecx = MEM32(eax);
    MEM32(edi + 0x70) = ecx;
    MEM32(eax) = 0x2F9FC3;
    eax = esi + 0x21C;
    ecx = MEM32(eax);
    MEM32(edi + 0x74) = ecx;
    MEM32(eax) = 0x2F9F54;
    MEM32(edi + 0x68) = MEM32(edi + 0x68) | 0xFFFFFFFFu;
    MEM32(edi + 0x6C) = ebx;
    eax = 0x2F9CFF;
    MEM32(esi + 0x1A0) = eax;
    MEM32(esi + 0x1A8) = eax;
    MEM32(esi + 0x1B0) = eax;
    eax = 0x2F9E1C;
    PUSH32(esp, esi);
    MEM32(esi + 0x18C) = 0x2F9C8B;
    MEM32(esi + 0x190) = 0x2F9CD2;
    MEM32(esi + 0x194) = 0x2F9DA6;
    MEM32(esi + 0x198) = 0x2F9DF0;
    MEM32(esi + 0x19C) = 0x2F9E98;
    MEM32(esi + 0x1A4) = eax;
    MEM32(esi + 0x1AC) = eax;
    MEM32(esi + 0x1B4) = eax;
    MEM32(esi + 0x1C0) = 0x2F9F16;
    PUSH32(esp, 0x002FA0DDu); RECOMP_ABI_CALL(0x00300D59u, sub_00300D59); /* call 0x00300D59 */

loc_002FA0DD: ;
    eax = 0; /* xor self */
    esp = esp + 0x10;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002FA0E3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002FA0E7
 * Original: 0x002FA0E7 - 0x002FA12A (67 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FA0E7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FA0E7: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x1CC);
    MEM32(esi + 0x3C) = MEM32(esi + 0x3C) & 0;
    MEM32(esi + 0x38) = MEM32(esi + 0x38) & 0;
    MEM32(esi + 0x40) = MEM32(esi + 0x40) & 0;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(MEM16(eax + 0x4A)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x4A), 2 (16-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002FA10Eu); RECOMP_ABI_CALL(0x002CEE4Au, sub_002CEE4A); /* call 0x002CEE4A */

loc_002FA10E: ;
    MEM32(esi + 0x34) = eax;
    eax = MEM32(esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_002FA125; /* je: equal / zero */

loc_002FA119: ;
    ecx = MEM32(esi + 0xC);
    MEM32(eax) = ecx;
    eax = MEM32(esi + 0x4C);
    MEM32(eax + 4) = MEM32(eax + 4) & 0;

loc_002FA125: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002FA12A
 * Original: 0x002FA12A - 0x002FA148 (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FA12A(void)
{

loc_002FA12A: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, MEM32(eax + 0x164));
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, 0x4119B8);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x002FA144u); RECOMP_ABI_CALL(0x002CED88u, sub_002CED88); /* call 0x002CED88 */

loc_002FA144: ;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_002FA148
 * Original: 0x002FA148 - 0x002FA178 (48 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FA148(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FA148: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), edx (32-bit) */
    ecx = 0x411A6C;
    if (CMP_B(_fa, _fb)) goto loc_002FA158; /* jb: below (unsigned <) */

loc_002FA153: ;
    ecx = 0x411A54;

loc_002FA158: ;
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(eax + 0x164));
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, 0x411A24);
    PUSH32(esp, MEM32(esp + 0x1C));
    PUSH32(esp, 0x002FA174u); RECOMP_ABI_CALL(0x002CF351u, sub_002CF351); /* call 0x002CF351 */

loc_002FA174: ;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_002FA178
 * Original: 0x002FA178 - 0x002FA196 (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FA178(void)
{

loc_002FA178: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, MEM32(eax + 0x164));
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, 0x411A7C);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x002FA192u); RECOMP_ABI_CALL(0x002CF351u, sub_002CF351); /* call 0x002CF351 */

loc_002FA192: ;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_002FA196
 * Original: 0x002FA196 - 0x002FA631 (1179 bytes, 412 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FA196(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FA196: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x24;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx + 0x1E0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x1CC);
    eax = MEM32(edi + 0xC);
    MEM32(ebp + -16) = eax;
    eax = MEM32(edi + 0x34);
    MEM32(ebp + -32) = eax;
    eax = MEM32(edi + 0x38);
    MEM32(ebp + -8) = eax;
    eax = MEM32(edi + 0x3C);
    MEM32(ebp + -4) = eax;
    eax = MEM32(edi + 0x40);
    MEM32(ebp + -36) = eax;
    eax = MEM32(ecx + 0x1E4);
    eax = eax + edx;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    MEM32(ebp + -28) = eax;
    eax = MEM32(edi + 0x50);
    MEM32(ebp + -20) = edx;
    MEM32(ebp + -24) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_002FA506; /* jle: less or equal (signed <=) */

loc_002FA1EA: ;
    esi = MEM32(ebp + -24);
    eax = MEM32(ebp + -32);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), ebx (32-bit) */
    MEM32(ebp + -12) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_002FA266; /* jne: not equal / not zero */

loc_002FA1FA: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0xB (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FA256; /* jge: greater or equal (signed >=) */

loc_002FA200: ;
    ecx = MEM32(ebp + -20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -28) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002FA21B; /* jb: below (unsigned <) */

loc_002FA208: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FA537; /* je: equal / zero */

loc_002FA212: ;
    MEM32(ebp + -4) = 0xB;
    goto loc_002FA256;

loc_002FA21B: ;
    ecx = ZX8(MEM8(ecx));
    edx = ZX8(MEM8(ecx + eax));
    ecx = MEM32(ebp + -4);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 8;
    edx = edx << LO8(ecx);
    ecx = MEM32(ebp + -20);
    MEM32(ebp + -8) = MEM32(ebp + -8) | edx;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0xB (32-bit) */
    MEM32(ebp + -20) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_002FA256; /* jge: greater or equal (signed >=) */

loc_002FA23B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -28) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002FA212; /* jae: above or equal (unsigned >=) */

loc_002FA240: ;
    ecx = ZX8(MEM8(ecx));
    edx = ZX8(MEM8(ecx + eax));
    ecx = MEM32(ebp + -4);
    edx = edx << LO8(ecx);
    MEM32(ebp + -8) = MEM32(ebp + -8) | edx;
    MEM32(ebp + -20) = MEM32(ebp + -20) + 1;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 8;

loc_002FA256: ;
    _fa = (uint32_t)(MEM16(ebp + -8)) & 0xFFFFu; _fb = (uint32_t)(0x7FF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ebp + -8), 0x7FF (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FA266; /* je: equal / zero */

loc_002FA25E: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = MEM32(ebp + -8) >> 1;
    goto loc_002FA1FA;

loc_002FA266: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FA29D; /* jge: greater or equal (signed >=) */

loc_002FA26C: ;
    ecx = MEM32(ebp + -20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -28) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002FA287; /* jb: below (unsigned <) */

loc_002FA274: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FA537; /* je: equal / zero */

loc_002FA27E: ;
    MEM32(ebp + -4) = 8;
    goto loc_002FA29D;

loc_002FA287: ;
    ecx = ZX8(MEM8(ecx));
    edx = ZX8(MEM8(ecx + eax));
    ecx = MEM32(ebp + -4);
    edx = edx << LO8(ecx);
    MEM32(ebp + -8) = MEM32(ebp + -8) | edx;
    MEM32(ebp + -20) = MEM32(ebp + -20) + 1;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 8;

loc_002FA29D: ;
    _fa = (uint32_t)(MEM8(ebp + -8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -8), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FA2B0; /* jne: not equal / not zero */

loc_002FA2A3: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 8;
    MEM32(ebp + -8) = MEM32(ebp + -8) >> 8;
    goto loc_002FA266;

loc_002FA2AD: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) >> 1;

loc_002FA2B0: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(ebp + -8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FA2AD; /* je: equal / zero */

loc_002FA2B9: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) >> 1;
    MEM32(ebp + -36) = MEM32(ebp + -36) & 0;

loc_002FA2C0: ;
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FA320; /* jge: greater or equal (signed >=) */

loc_002FA2C8: ;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -28) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002FA2DF; /* jb: below (unsigned <) */

loc_002FA2D0: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FA590; /* je: equal / zero */

loc_002FA2DA: ;
    MEM32(ebp + -4) = ecx;
    goto loc_002FA320;

loc_002FA2DF: ;
    ecx = ZX8(MEM8(eax));
    edx = MEM32(ebp + -32);
    edx = ZX8(MEM8(ecx + edx));
    ecx = MEM32(ebp + -4);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 8;
    edx = edx << LO8(ecx);
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    MEM32(ebp + -8) = MEM32(ebp + -8) | edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ecx (32-bit) */
    MEM32(ebp + -20) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_002FA320; /* jge: greater or equal (signed >=) */

loc_002FA301: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -28) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002FA2DA; /* jae: above or equal (unsigned >=) */

loc_002FA306: ;
    ecx = ZX8(MEM8(eax));
    edx = MEM32(ebp + -32);
    edx = ZX8(MEM8(ecx + edx));
    ecx = MEM32(ebp + -4);
    edx = edx << LO8(ecx);
    MEM32(ebp + -8) = MEM32(ebp + -8) | edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 8;
    MEM32(ebp + -20) = eax;

loc_002FA320: ;
    eax = MEM32(ebp + -8);
    eax = eax & 0xFFF;
    eax = eax * 8 + 0x412788;
    ecx = ZX8(MEM8(eax + 1));
    MEM32(ebp + -4) = MEM32(ebp + -4) - ecx;
    MEM32(ebp + -8) = MEM32(ebp + -8) >> LO8(ecx);
    ecx = ZX8(MEM8(eax));
    ecx = ecx - 7;
    if ((ecx == 0)) goto loc_002FA35A; /* je: equal / zero */

loc_002FA341: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002FA34D; /* je: equal / zero */

loc_002FA345: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002FA440; /* jne: not equal / not zero */

loc_002FA34D: ;
    eax = MEM32(eax + 4);
    ebx = ebx + eax;
    MEM32(ebp + -12) = MEM32(ebp + -12) + eax;
    goto loc_002FA2C0;

loc_002FA35A: ;
    ecx = MEM32(eax + 4);
    ecx = ecx + MEM32(ebp + -12);
    MEM32(esi) = ecx;
    ebx = ebx + MEM32(eax + 4);
    esi = esi + 4;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + -16) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FA474; /* jge: greater or equal (signed >=) */

loc_002FA375: ;
    PUSH32(esp, 0xD);
    POP32(esp, ecx);
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FA3D5; /* jge: greater or equal (signed >=) */

loc_002FA37D: ;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -28) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002FA394; /* jb: below (unsigned <) */

loc_002FA385: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FA590; /* je: equal / zero */

loc_002FA38F: ;
    MEM32(ebp + -4) = ecx;
    goto loc_002FA3D5;

loc_002FA394: ;
    ecx = ZX8(MEM8(eax));
    edx = MEM32(ebp + -32);
    edx = ZX8(MEM8(ecx + edx));
    ecx = MEM32(ebp + -4);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 8;
    edx = edx << LO8(ecx);
    PUSH32(esp, 0xD);
    POP32(esp, ecx);
    MEM32(ebp + -8) = MEM32(ebp + -8) | edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ecx (32-bit) */
    MEM32(ebp + -20) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_002FA3D5; /* jge: greater or equal (signed >=) */

loc_002FA3B6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -28) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002FA38F; /* jae: above or equal (unsigned >=) */

loc_002FA3BB: ;
    ecx = ZX8(MEM8(eax));
    edx = MEM32(ebp + -32);
    edx = ZX8(MEM8(ecx + edx));
    ecx = MEM32(ebp + -4);
    edx = edx << LO8(ecx);
    MEM32(ebp + -8) = MEM32(ebp + -8) | edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 8;
    MEM32(ebp + -20) = eax;

loc_002FA3D5: ;
    eax = MEM32(ebp + -8);
    eax = eax & 0x1FFF;
    eax = eax * 8 + 0x41A788;
    ecx = ZX8(MEM8(eax + 1));
    MEM32(ebp + -4) = MEM32(ebp + -4) - ecx;
    MEM32(ebp + -8) = MEM32(ebp + -8) >> LO8(ecx);
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 8 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FA40C; /* je: equal / zero */

loc_002FA3F5: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 9 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002FA451; /* jbe: below or equal (unsigned <=) */

loc_002FA3FA: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xB (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002FA443; /* ja: above (unsigned >) */

loc_002FA3FF: ;
    eax = MEM32(eax + 4);
    ebx = ebx + eax;
    MEM32(ebp + -12) = MEM32(ebp + -12) + eax;
    goto loc_002FA375;

loc_002FA40C: ;
    ecx = MEM32(eax + 4);
    ecx = ecx + MEM32(ebp + -12);
    MEM32(esi) = ecx;
    ebx = ebx + MEM32(eax + 4);
    esi = esi + 4;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + -16) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FA474; /* jge: greater or equal (signed >=) */

loc_002FA423: ;
    _fa = (uint32_t)(MEM32(esi + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + -4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FA2C0; /* jne: not equal / not zero */

loc_002FA42D: ;
    eax = esi + -8;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FA2C0; /* jne: not equal / not zero */

loc_002FA439: ;
    esi = eax;
    goto loc_002FA2C0;

loc_002FA440: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_002FA446;

loc_002FA443: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xC (8-bit) */

loc_002FA446: ;
    if (_flags /* jne: not equal / not zero */) goto loc_002FA451;

loc_002FA448: ;
    MEM32(ebp + -36) = 1;
    goto loc_002FA461;

loc_002FA451: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x411588);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FA45Fu); RECOMP_ABI_CALL(0x002FA12Au, sub_002FA12A); /* call 0x002FA12A */

loc_002FA45F: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_002FA461: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FA471; /* je: equal / zero */

loc_002FA468: ;
    MEM32(esi) = eax;
    esi = esi + 4;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;

loc_002FA471: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + -16) (32-bit) */

loc_002FA474: ;
    if (CMP_EQ(_fa, _fb)) goto loc_002FA4D5; /* je: equal / zero */

loc_002FA476: ;
    edx = MEM32(ebp + -16);
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x411588);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FA487u); RECOMP_ABI_CALL(0x002FA148u, sub_002FA148); /* call 0x002FA148 */

loc_002FA487: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = MEM32(ebp + -16);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002FA49E; /* jle: less or equal (signed <=) */

loc_002FA490: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -24) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002FA49E; /* jbe: below or equal (unsigned <=) */

loc_002FA495: ;
    esi = esi - 4;
    ebx = ebx - MEM32(esi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002FA490; /* jg: greater (signed >) */

loc_002FA49E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FA4C3; /* jge: greater or equal (signed >=) */

loc_002FA4A2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_002FA4A8; /* jge: greater or equal (signed >=) */

loc_002FA4A6: ;
    ebx = 0; /* xor self */

loc_002FA4A8: ;
    eax = esi;
    eax = eax - MEM32(ebp + -24);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    eax = MEM32(ebp + -12);
    if (TEST_Z(_fa, _fb)) goto loc_002FA4BB; /* je: equal / zero */

loc_002FA4B4: ;
    MEM32(esi) = eax;
    esi = esi + 4;
    eax = 0; /* xor self */

loc_002FA4BB: ;
    eax = eax - ebx;
    eax = eax + ecx;
    MEM32(esi) = eax;
    goto loc_002FA4D2;

loc_002FA4C3: ;
    if (CMP_LE(_fas, _fbs)) goto loc_002FA4D5; /* jle: less or equal (signed <=) */

loc_002FA4C5: ;
    eax = MEM32(ebp + -12);
    eax = eax + ecx;
    MEM32(esi) = eax;
    esi = esi + 4;
    MEM32(esi) = MEM32(esi) & 0;

loc_002FA4D2: ;
    esi = esi + 4;

loc_002FA4D5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, MEM32(ebp + 0xC));
    { uint32_t _icall_target = MEM32(edi + 0x44); PUSH32(esp, 0x002FA4E2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002FA4E2: ;
    eax = MEM32(edi + 8);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + eax;
    esp = esp + 0x10;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - eax;
    if ((MEM32(ebp + 0x10) == 0)) goto loc_002FA4F9; /* je: equal / zero */

loc_002FA4F0: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x164) = MEM32(eax + 0x164) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x164)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002FA4F9: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002FA1EA; /* jg: greater (signed >) */

loc_002FA503: ;
    ecx = MEM32(ebp + 8);

loc_002FA506: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002FA509: ;
    edx = MEM32(ebp + -4);
    MEM32(edi + 0x3C) = edx;
    edx = MEM32(ebp + -8);
    MEM32(edi + 0x38) = edx;
    edx = MEM32(ebp + -36);
    MEM32(edi + 0x40) = edx;
    esi = MEM32(ecx + 0x1E0);
    edx = MEM32(ebp + -20);
    esi = esi - edx;
    MEM32(ecx + 0x1E4) = MEM32(ecx + 0x1E4) + esi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 0x1E0) = edx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_002FA537: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FA616; /* je: equal / zero */

loc_002FA541: ;
    edx = MEM32(ebp + -16);
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x411588);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FA553u); RECOMP_ABI_CALL(0x002FA148u, sub_002FA148); /* call 0x002FA148 */

loc_002FA553: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_GE(_fas & _fbs, 0)) goto loc_002FA56A; /* jge: greater or equal (signed >=) */

loc_002FA55C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -24) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002FA56A; /* jbe: below or equal (unsigned <=) */

loc_002FA561: ;
    esi = esi - 4;
    ebx = ebx - MEM32(esi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002FA55C; /* jg: greater (signed >) */

loc_002FA56A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FA588; /* jge: greater or equal (signed >=) */

loc_002FA56E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_002FA574; /* jge: greater or equal (signed >=) */

loc_002FA572: ;
    ebx = 0; /* xor self */

loc_002FA574: ;
    ecx = esi;
    ecx = ecx - MEM32(ebp + -24);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FA584; /* je: equal / zero */

loc_002FA57E: ;
    MEM32(esi) = MEM32(esi) & 0;
    esi = esi + 4;

loc_002FA584: ;
    eax = eax - ebx;
    goto loc_002FA600;

loc_002FA588: ;
    if (CMP_LE(_fas, _fbs)) goto loc_002FA616; /* jle: less or equal (signed <=) */

loc_002FA58E: ;
    goto loc_002FA60B;

loc_002FA590: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x411588);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FA59Eu); RECOMP_ABI_CALL(0x002FA178u, sub_002FA178); /* call 0x002FA178 */

loc_002FA59E: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_002FA5B2; /* je: equal / zero */

loc_002FA5A6: ;
    eax = MEM32(ebp + -12);
    MEM32(esi) = eax;
    esi = esi + 4;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;

loc_002FA5B2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + -16) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FA616; /* je: equal / zero */

loc_002FA5B7: ;
    edx = MEM32(ebp + -16);
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x411588);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FA5C8u); RECOMP_ABI_CALL(0x002FA148u, sub_002FA148); /* call 0x002FA148 */

loc_002FA5C8: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = MEM32(ebp + -16);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002FA5DF; /* jle: less or equal (signed <=) */

loc_002FA5D1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -24) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002FA5DF; /* jbe: below or equal (unsigned <=) */

loc_002FA5D6: ;
    esi = esi - 4;
    ebx = ebx - MEM32(esi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002FA5D1; /* jg: greater (signed >) */

loc_002FA5DF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FA604; /* jge: greater or equal (signed >=) */

loc_002FA5E3: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_002FA5E9; /* jge: greater or equal (signed >=) */

loc_002FA5E7: ;
    ebx = 0; /* xor self */

loc_002FA5E9: ;
    eax = esi;
    eax = eax - MEM32(ebp + -24);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    eax = MEM32(ebp + -12);
    if (TEST_Z(_fa, _fb)) goto loc_002FA5FC; /* je: equal / zero */

loc_002FA5F5: ;
    MEM32(esi) = eax;
    esi = esi + 4;
    eax = 0; /* xor self */

loc_002FA5FC: ;
    eax = eax - ebx;
    eax = eax + ecx;

loc_002FA600: ;
    MEM32(esi) = eax;
    goto loc_002FA613;

loc_002FA604: ;
    if (CMP_LE(_fas, _fbs)) goto loc_002FA616; /* jle: less or equal (signed <=) */

loc_002FA606: ;
    eax = MEM32(ebp + -12);
    eax = eax + ecx;

loc_002FA60B: ;
    MEM32(esi) = eax;
    esi = esi + 4;
    MEM32(esi) = MEM32(esi) & 0;

loc_002FA613: ;
    esi = esi + 4;

loc_002FA616: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, MEM32(ebp + 0xC));
    { uint32_t _icall_target = MEM32(edi + 0x44); PUSH32(esp, 0x002FA623u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002FA623: ;
    ecx = MEM32(ebp + 8);
    esp = esp + 0x10;
    eax = eax | 0xFFFFFFFFu;
    goto loc_002FA509;

}

/**
 * sub_002FA631
 * Original: 0x002FA631 - 0x002FB1AD (2940 bytes, 1013 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FA631(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FA631: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x30;
    edx = MEM32(ebp + 8);
    ecx = MEM32(edx + 0x1CC);
    eax = MEM32(ecx + 0xC);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ecx + 0x34);
    MEM32(ebp + -24) = eax;
    eax = MEM32(ecx + 0x38);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ecx + 0x3C);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ecx + 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x1E0);
    MEM32(ebp + -48) = eax;
    eax = MEM32(edx + 0x1E4);
    eax = eax + esi;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(ebp + -44) = ecx;
    MEM32(ebp + -12) = esi;
    MEM32(ebp + -20) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_002FB05E; /* jle: less or equal (signed <=) */

loc_002FA682: ;
    eax = MEM32(ebp + -44);
    esi = MEM32(eax + 0x50);
    edx = MEM32(ebp + -4);
    ebx = 0; /* xor self */
    edi = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), ebx (32-bit) */
    MEM32(ebp + -32) = ebx;
    MEM32(ebp + -28) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_002FA764; /* jne: not equal / not zero */

loc_002FA69E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xB (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FA750; /* jge: greater or equal (signed >=) */

loc_002FA6A7: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -20) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002FA709; /* jb: below (unsigned <) */

loc_002FA6AF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002FA731; /* jne: not equal / not zero */

loc_002FA6B3: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FB18C; /* je: equal / zero */

loc_002FA6BD: ;
    ebx = MEM32(ebp + -16);
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x411598);
    edx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FA6D1u); RECOMP_ABI_CALL(0x002FA148u, sub_002FA148); /* call 0x002FA148 */

loc_002FA6D1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_GE(_fas & _fbs, 0)) goto loc_002FA6E5; /* jge: greater or equal (signed >=) */

loc_002FA6D7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -28) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002FA6E5; /* jbe: below or equal (unsigned <=) */

loc_002FA6DC: ;
    esi = esi - 4;
    edi = edi - MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002FA6D7; /* jg: greater (signed >) */

loc_002FA6E5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FB08F; /* jge: greater or equal (signed >=) */

loc_002FA6ED: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_002FA6F3; /* jge: greater or equal (signed >=) */

loc_002FA6F1: ;
    edi = 0; /* xor self */

loc_002FA6F3: ;
    eax = esi;
    eax = eax - MEM32(ebp + -28);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FA702; /* je: equal / zero */

loc_002FA6FC: ;
    MEM32(esi) = MEM32(esi) & 0;
    esi = esi + 4;

loc_002FA702: ;
    ebx = ebx - edi;
    goto loc_002FB179;

loc_002FA709: ;
    eax = ZX8(MEM8(eax));
    ecx = MEM32(ebp + -24);
    eax = ZX8(MEM8(eax + ecx));
    ecx = edx;
    eax = eax << LO8(ecx);
    edx = edx + 8;
    MEM32(ebp + -4) = edx;
    MEM32(ebp + -8) = MEM32(ebp + -8) | eax;
    eax = MEM32(ebp + -12);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xB (32-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_002FA750; /* jge: greater or equal (signed >=) */

loc_002FA72C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -20) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002FA736; /* jb: below (unsigned <) */

loc_002FA731: ;
    PUSH32(esp, 0xB);
    POP32(esp, edx);
    goto loc_002FA74D;

loc_002FA736: ;
    eax = ZX8(MEM8(eax));
    ecx = MEM32(ebp + -24);
    eax = ZX8(MEM8(eax + ecx));
    ecx = edx;
    eax = eax << LO8(ecx);
    MEM32(ebp + -8) = MEM32(ebp + -8) | eax;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 8;

loc_002FA74D: ;
    MEM32(ebp + -4) = edx;

loc_002FA750: ;
    _fa = (uint32_t)(MEM16(ebp + -8)) & 0xFFFFu; _fb = (uint32_t)(0x7FF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ebp + -8), 0x7FF (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FA764; /* je: equal / zero */

loc_002FA758: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = MEM32(ebp + -8) >> 1;
    MEM32(ebp + -4) = edx;
    goto loc_002FA69E;

loc_002FA764: ;
    eax = MEM32(ebp + -12);

loc_002FA767: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FA799; /* jge: greater or equal (signed >=) */

loc_002FA76C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -20) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002FA77E; /* jb: below (unsigned <) */

loc_002FA771: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FA6B3; /* je: equal / zero */

loc_002FA779: ;
    PUSH32(esp, 8);
    POP32(esp, edx);
    goto loc_002FA799;

loc_002FA77E: ;
    eax = ZX8(MEM8(eax));
    ecx = MEM32(ebp + -24);
    eax = ZX8(MEM8(eax + ecx));
    ecx = edx;
    eax = eax << LO8(ecx);
    MEM32(ebp + -8) = MEM32(ebp + -8) | eax;
    eax = MEM32(ebp + -12);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -12) = eax;
    edx = edx + 8;

loc_002FA799: ;
    _fa = (uint32_t)(MEM8(ebp + -8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -8), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FA7AE; /* jne: not equal / not zero */

loc_002FA79F: ;
    edx = edx - 8;
    MEM32(ebp + -8) = MEM32(ebp + -8) >> 8;
    MEM32(ebp + -4) = edx;
    goto loc_002FA767;

loc_002FA7AB: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) >> 1;

loc_002FA7AE: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(ebp + -8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FA7AB; /* je: equal / zero */

loc_002FA7B5: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) >> 1;
    MEM32(ebp + -48) = MEM32(ebp + -48) & 0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    MEM32(ebp + -4) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_002FA7ED; /* jge: greater or equal (signed >=) */

loc_002FA7C4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -20) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002FA7D6; /* jb: below (unsigned <) */

loc_002FA7C9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FA6B3; /* je: equal / zero */

loc_002FA7D1: ;
    edx = 0; /* xor self */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_002FA7ED;

loc_002FA7D6: ;
    eax = ZX8(MEM8(eax));
    ecx = MEM32(ebp + -24);
    eax = ZX8(MEM8(eax + ecx));
    ecx = edx;
    eax = eax << LO8(ecx);
    MEM32(ebp + -8) = MEM32(ebp + -8) | eax;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 8;

loc_002FA7ED: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -8) = MEM32(ebp + -8) >> 1;
    eax = eax & 1;
    MEM32(ebp + -36) = eax;
    eax = MEM32(ebp + -44);
    ecx = MEM32(eax + 0x4C);
    eax = MEM32(ecx);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx + 4;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 0 (32-bit) */
    MEM32(ebp + -4) = edx;
    MEM32(ebp + -40) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_002FA9EE; /* je: equal / zero */

loc_002FA815: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xC (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FA86E; /* jge: greater or equal (signed >=) */

loc_002FA81A: ;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002FA82F; /* jb: below (unsigned <) */

loc_002FA822: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FB09A; /* je: equal / zero */

loc_002FA82A: ;
    PUSH32(esp, 0xC);
    POP32(esp, edx);
    goto loc_002FA86E;

loc_002FA82F: ;
    eax = MEM32(ebp + -12);
    eax = ZX8(MEM8(eax));
    ecx = MEM32(ebp + -24);
    eax = ZX8(MEM8(eax + ecx));
    ecx = edx;
    eax = eax << LO8(ecx);
    edx = edx + 8;
    MEM32(ebp + -8) = MEM32(ebp + -8) | eax;
    eax = MEM32(ebp + -12);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xC (32-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_002FA86E; /* jge: greater or equal (signed >=) */

loc_002FA852: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -20) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002FA82A; /* jae: above or equal (unsigned >=) */

loc_002FA857: ;
    eax = ZX8(MEM8(eax));
    ecx = MEM32(ebp + -24);
    eax = ZX8(MEM8(eax + ecx));
    ecx = edx;
    eax = eax << LO8(ecx);
    MEM32(ebp + -8) = MEM32(ebp + -8) | eax;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 8;

loc_002FA86E: ;
    eax = MEM32(ebp + -8);
    eax = eax & 0xFFF;
    eax = eax * 8 + 0x412788;
    ecx = ZX8(MEM8(eax + 1));
    MEM32(ebp + -8) = MEM32(ebp + -8) >> LO8(ecx);
    edx = edx - ecx;
    ecx = ZX8(MEM8(eax));
    ecx = ecx - 7;
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -4) = edx;
    if ((ecx == 0)) goto loc_002FA8AC; /* je: equal / zero */

loc_002FA894: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002FA8A0; /* je: equal / zero */

loc_002FA898: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002FA984; /* jne: not equal / not zero */

loc_002FA8A0: ;
    eax = MEM32(eax + 4);
    edi = edi + eax;
    ebx = ebx + eax;
    goto loc_002FA815;

loc_002FA8AC: ;
    ecx = MEM32(eax + 4);
    ecx = ecx + ebx;
    MEM32(esi) = ecx;
    edi = edi + MEM32(eax + 4);
    esi = esi + 4;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -16) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FA9B3; /* jge: greater or equal (signed >=) */

loc_002FA8C4: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xD (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FA91A; /* jge: greater or equal (signed >=) */

loc_002FA8C9: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -20) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002FA8DE; /* jb: below (unsigned <) */

loc_002FA8D1: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FB09A; /* je: equal / zero */

loc_002FA8D9: ;
    PUSH32(esp, 0xD);
    POP32(esp, edx);
    goto loc_002FA91A;

loc_002FA8DE: ;
    eax = ZX8(MEM8(eax));
    ecx = MEM32(ebp + -24);
    eax = ZX8(MEM8(eax + ecx));
    ecx = edx;
    eax = eax << LO8(ecx);
    edx = edx + 8;
    MEM32(ebp + -8) = MEM32(ebp + -8) | eax;
    eax = MEM32(ebp + -12);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xD (32-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_002FA91A; /* jge: greater or equal (signed >=) */

loc_002FA8FE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -20) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002FA8D9; /* jae: above or equal (unsigned >=) */

loc_002FA903: ;
    eax = ZX8(MEM8(eax));
    ecx = MEM32(ebp + -24);
    eax = ZX8(MEM8(eax + ecx));
    ecx = edx;
    eax = eax << LO8(ecx);
    MEM32(ebp + -8) = MEM32(ebp + -8) | eax;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 8;

loc_002FA91A: ;
    eax = MEM32(ebp + -8);
    eax = eax & 0x1FFF;
    eax = eax * 8 + 0x41A788;
    ecx = ZX8(MEM8(eax + 1));
    MEM32(ebp + -8) = MEM32(ebp + -8) >> LO8(ecx);
    edx = edx - ecx;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 8 (8-bit) */
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -4) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002FA955; /* je: equal / zero */

loc_002FA93F: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 9 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002FA995; /* jbe: below or equal (unsigned <=) */

loc_002FA944: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xB (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002FA987; /* ja: above (unsigned >) */

loc_002FA949: ;
    eax = MEM32(eax + 4);
    edi = edi + eax;
    ebx = ebx + eax;
    goto loc_002FA8C4;

loc_002FA955: ;
    ecx = MEM32(eax + 4);
    ecx = ecx + ebx;
    MEM32(esi) = ecx;
    edi = edi + MEM32(eax + 4);
    esi = esi + 4;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -16) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FA9B3; /* jge: greater or equal (signed >=) */

loc_002FA969: ;
    _fa = (uint32_t)(MEM32(esi + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + -4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FA815; /* jne: not equal / not zero */

loc_002FA972: ;
    eax = esi + -8;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FA815; /* jne: not equal / not zero */

loc_002FA97D: ;
    esi = eax;
    goto loc_002FA815;

loc_002FA984: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_002FA98A;

loc_002FA987: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xC (8-bit) */

loc_002FA98A: ;
    if (_flags /* jne: not equal / not zero */) goto loc_002FA995;

loc_002FA98C: ;
    MEM32(ebp + -48) = 1;
    goto loc_002FA9A5;

loc_002FA995: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x411598);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FA9A3u); RECOMP_ABI_CALL(0x002FA12Au, sub_002FA12A); /* call 0x002FA12A */

loc_002FA9A3: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_002FA9A5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FA9B0; /* je: equal / zero */

loc_002FA9A9: ;
    MEM32(esi) = ebx;
    esi = esi + 4;
    ebx = 0; /* xor self */

loc_002FA9B0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -16) (32-bit) */

loc_002FA9B3: ;
    if (CMP_EQ(_fa, _fb)) goto loc_002FB019; /* je: equal / zero */

loc_002FA9B9: ;
    edx = MEM32(ebp + -16);
    eax = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x411598);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FA9CAu); RECOMP_ABI_CALL(0x002FA148u, sub_002FA148); /* call 0x002FA148 */

loc_002FA9CA: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_LE(_fas, _fbs)) goto loc_002FAFE1; /* jle: less or equal (signed <=) */

loc_002FA9D7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -28) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002FAFE1; /* jbe: below or equal (unsigned <=) */

loc_002FA9E0: ;
    esi = esi - 4;
    edi = edi - MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002FA9D7; /* jg: greater (signed >) */

loc_002FA9E9: ;
    goto loc_002FAFE1;

loc_002FA9EE: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002FAFB4; /* jle: less or equal (signed <=) */

loc_002FA9F8: ;
    MEM32(ebp + -36) = MEM32(ebp + -36) & 0;

loc_002FA9FC: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 7 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FAA37; /* jge: greater or equal (signed >=) */

loc_002FAA02: ;
    edx = MEM32(ebp + -12);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + -20) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002FAA1D; /* jb: below (unsigned <) */

loc_002FAA0A: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FB112; /* je: equal / zero */

loc_002FAA14: ;
    MEM32(ebp + -4) = 7;
    goto loc_002FAA37;

loc_002FAA1D: ;
    ecx = ZX8(MEM8(edx));
    ebx = MEM32(ebp + -24);
    ebx = ZX8(MEM8(ecx + ebx));
    ecx = MEM32(ebp + -4);
    ebx = ebx << LO8(ecx);
    MEM32(ebp + -8) = MEM32(ebp + -8) | ebx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 8;
    MEM32(ebp + -12) = edx;

loc_002FAA37: ;
    edx = MEM32(ebp + -8);
    edx = edx & 0x7F;
    edx = edx * 8 + 0x412388;
    ecx = ZX8(MEM8(edx + 1));
    MEM32(ebp + -4) = MEM32(ebp + -4) - ecx;
    MEM32(ebp + -8) = MEM32(ebp + -8) >> LO8(ecx);
    ecx = ZX8(MEM8(edx));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002FAE39; /* je: equal / zero */

loc_002FAA58: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002FAB36; /* je: equal / zero */

loc_002FAA5F: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002FAAFB; /* je: equal / zero */

loc_002FAA66: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002FAAB8; /* je: equal / zero */

loc_002FAA69: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002FAEBF; /* jne: not equal / not zero */

loc_002FAA70: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -28) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FAA91; /* je: equal / zero */

loc_002FAA75: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002FAA91; /* jg: greater (signed >) */

loc_002FAA79: ;
    ecx = MEM32(ebp + -40);

loc_002FAA7C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -16) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FAA94; /* jge: greater or equal (signed >=) */

loc_002FAA81: ;
    ebx = MEM32(ecx + 4);
    ebx = ebx + MEM32(ecx);
    ecx = ecx + 8;
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002FAA7C; /* jle: less or equal (signed <=) */

loc_002FAA8F: ;
    goto loc_002FAA94;

loc_002FAA91: ;
    ecx = MEM32(ebp + -40);

loc_002FAA94: ;
    MEM32(ebp + -36) = MEM32(ebp + -36) + 4;
    ebx = eax;
    ebx = ebx - MEM32(edx + 4);
    ecx = ecx - 4;
    ebx = ebx - edi;
    ebx = ebx + MEM32(ebp + -32);
    edi = eax;
    MEM32(esi) = ebx;
    edi = edi - MEM32(edx + 4);
    esi = esi + 4;
    ebx = 0; /* xor self */
    eax = eax - MEM32(ecx);
    goto loc_002FAE72;

loc_002FAAB8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -28) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FAAD9; /* je: equal / zero */

loc_002FAABD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002FAAD9; /* jg: greater (signed >) */

loc_002FAAC1: ;
    ecx = MEM32(ebp + -40);

loc_002FAAC4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -16) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FAADC; /* jge: greater or equal (signed >=) */

loc_002FAAC9: ;
    ebx = MEM32(ecx + 4);
    ebx = ebx + MEM32(ecx);
    ecx = ecx + 8;
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002FAAC4; /* jle: less or equal (signed <=) */

loc_002FAAD7: ;
    goto loc_002FAADC;

loc_002FAAD9: ;
    ecx = MEM32(ebp + -40);

loc_002FAADC: ;
    ebx = MEM32(edx + 4);
    MEM32(ebp + -36) = MEM32(ebp + -36) + 4;
    ebx = ebx - edi;
    ebx = ebx + eax;
    ebx = ebx + MEM32(ebp + -32);
    MEM32(esi) = ebx;
    edi = MEM32(edx + 4);
    esi = esi + 4;
    edi = edi + eax;
    ebx = 0; /* xor self */
    goto loc_002FAE6D;

loc_002FAAFB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -28) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FAB1C; /* je: equal / zero */

loc_002FAB00: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002FAB1C; /* jg: greater (signed >) */

loc_002FAB04: ;
    ecx = MEM32(ebp + -40);

loc_002FAB07: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -16) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FAB1F; /* jge: greater or equal (signed >=) */

loc_002FAB0C: ;
    edx = MEM32(ecx + 4);
    edx = edx + MEM32(ecx);
    ecx = ecx + 8;
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002FAB07; /* jle: less or equal (signed <=) */

loc_002FAB1A: ;
    goto loc_002FAB1F;

loc_002FAB1C: ;
    ecx = MEM32(ebp + -40);

loc_002FAB1F: ;
    MEM32(ebp + -36) = MEM32(ebp + -36) + 4;
    edx = eax;
    edx = edx - edi;
    edx = edx + MEM32(ebp + -32);
    MEM32(esi) = edx;
    esi = esi + 4;
    ebx = 0; /* xor self */
    goto loc_002FAE6B;

loc_002FAB36: ;
    _fa = (uint32_t)(MEM8(ebp + -36)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -36), 4 (8-bit) */
    ebx = MEM32(ebp + -32);
    if (TEST_Z(_fa, _fb)) goto loc_002FACA3; /* je: equal / zero */

loc_002FAB43: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0xD (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FABA5; /* jge: greater or equal (signed >=) */

loc_002FAB49: ;
    ecx = MEM32(ebp + -12);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -20) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002FAB64; /* jb: below (unsigned <) */

loc_002FAB51: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FB112; /* je: equal / zero */

loc_002FAB5B: ;
    MEM32(ebp + -4) = 0xD;
    goto loc_002FABA5;

loc_002FAB64: ;
    ecx = ZX8(MEM8(ecx));
    edx = MEM32(ebp + -24);
    edx = ZX8(MEM8(ecx + edx));
    ecx = MEM32(ebp + -4);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 8;
    edx = edx << LO8(ecx);
    ecx = MEM32(ebp + -12);
    MEM32(ebp + -8) = MEM32(ebp + -8) | edx;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0xD (32-bit) */
    MEM32(ebp + -12) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_002FABA5; /* jge: greater or equal (signed >=) */

loc_002FAB87: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -20) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002FAB5B; /* jae: above or equal (unsigned >=) */

loc_002FAB8C: ;
    ecx = ZX8(MEM8(ecx));
    edx = MEM32(ebp + -24);
    edx = ZX8(MEM8(ecx + edx));
    ecx = MEM32(ebp + -4);
    edx = edx << LO8(ecx);
    MEM32(ebp + -8) = MEM32(ebp + -8) | edx;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 8;

loc_002FABA5: ;
    ecx = MEM32(ebp + -8);
    ecx = ecx & 0x1FFF;
    ecx = ecx * 8 + 0x41A788;
    MEM32(ebp + -32) = ecx;
    ecx = ZX8(MEM8(ecx + 1));
    MEM32(ebp + -4) = MEM32(ebp + -4) - ecx;
    MEM32(ebp + -8) = MEM32(ebp + -8) >> LO8(ecx);
    ecx = MEM32(ebp + -32);
    SET_LO8(edx, MEM8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 8 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FABEA; /* je: equal / zero */

loc_002FABCC: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 9 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002FAECE; /* jbe: below or equal (unsigned <=) */

loc_002FABD5: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xB (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002FAECE; /* ja: above (unsigned >) */

loc_002FABDE: ;
    ecx = MEM32(ecx + 4);
    edi = edi + ecx;
    ebx = ebx + ecx;
    goto loc_002FAB43;

loc_002FABEA: ;
    edx = MEM32(ecx + 4);
    MEM32(ebp + -36) = MEM32(ebp + -36) + 4;
    edx = edx + ebx;
    MEM32(esi) = edx;
    edi = edi + MEM32(ecx + 4);
    esi = esi + 4;
    ebx = 0; /* xor self */

loc_002FABFD: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0xC (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FAC5F; /* jge: greater or equal (signed >=) */

loc_002FAC03: ;
    ecx = MEM32(ebp + -12);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -20) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002FAC1E; /* jb: below (unsigned <) */

loc_002FAC0B: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FB112; /* je: equal / zero */

loc_002FAC15: ;
    MEM32(ebp + -4) = 0xC;
    goto loc_002FAC5F;

loc_002FAC1E: ;
    ecx = ZX8(MEM8(ecx));
    edx = MEM32(ebp + -24);
    edx = ZX8(MEM8(ecx + edx));
    ecx = MEM32(ebp + -4);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 8;
    edx = edx << LO8(ecx);
    ecx = MEM32(ebp + -12);
    MEM32(ebp + -8) = MEM32(ebp + -8) | edx;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0xC (32-bit) */
    MEM32(ebp + -12) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_002FAC5F; /* jge: greater or equal (signed >=) */

loc_002FAC41: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -20) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002FAC15; /* jae: above or equal (unsigned >=) */

loc_002FAC46: ;
    ecx = ZX8(MEM8(ecx));
    edx = MEM32(ebp + -24);
    edx = ZX8(MEM8(ecx + edx));
    ecx = MEM32(ebp + -4);
    edx = edx << LO8(ecx);
    MEM32(ebp + -8) = MEM32(ebp + -8) | edx;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 8;

loc_002FAC5F: ;
    ecx = MEM32(ebp + -8);
    ecx = ecx & 0xFFF;
    ecx = ecx * 8 + 0x412788;
    MEM32(ebp + -32) = ecx;
    ecx = ZX8(MEM8(ecx + 1));
    MEM32(ebp + -4) = MEM32(ebp + -4) - ecx;
    MEM32(ebp + -8) = MEM32(ebp + -8) >> LO8(ecx);
    ecx = MEM32(ebp + -32);
    edx = ZX8(MEM8(ecx));
    edx = edx - 7;
    if ((edx == 0)) goto loc_002FADFF; /* je: equal / zero */

loc_002FAC8B: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002FAC97; /* je: equal / zero */

loc_002FAC8F: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002FAECE; /* jne: not equal / not zero */

loc_002FAC97: ;
    ecx = MEM32(ecx + 4);
    edi = edi + ecx;
    ebx = ebx + ecx;
    goto loc_002FABFD;

loc_002FACA3: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0xC (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FAD05; /* jge: greater or equal (signed >=) */

loc_002FACA9: ;
    ecx = MEM32(ebp + -12);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -20) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002FACC4; /* jb: below (unsigned <) */

loc_002FACB1: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FB112; /* je: equal / zero */

loc_002FACBB: ;
    MEM32(ebp + -4) = 0xC;
    goto loc_002FAD05;

loc_002FACC4: ;
    ecx = ZX8(MEM8(ecx));
    edx = MEM32(ebp + -24);
    edx = ZX8(MEM8(ecx + edx));
    ecx = MEM32(ebp + -4);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 8;
    edx = edx << LO8(ecx);
    ecx = MEM32(ebp + -12);
    MEM32(ebp + -8) = MEM32(ebp + -8) | edx;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0xC (32-bit) */
    MEM32(ebp + -12) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_002FAD05; /* jge: greater or equal (signed >=) */

loc_002FACE7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -20) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002FACBB; /* jae: above or equal (unsigned >=) */

loc_002FACEC: ;
    ecx = ZX8(MEM8(ecx));
    edx = MEM32(ebp + -24);
    edx = ZX8(MEM8(ecx + edx));
    ecx = MEM32(ebp + -4);
    edx = edx << LO8(ecx);
    MEM32(ebp + -8) = MEM32(ebp + -8) | edx;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 8;

loc_002FAD05: ;
    ecx = MEM32(ebp + -8);
    ecx = ecx & 0xFFF;
    ecx = ecx * 8 + 0x412788;
    MEM32(ebp + -32) = ecx;
    ecx = ZX8(MEM8(ecx + 1));
    MEM32(ebp + -4) = MEM32(ebp + -4) - ecx;
    MEM32(ebp + -8) = MEM32(ebp + -8) >> LO8(ecx);
    ecx = MEM32(ebp + -32);
    edx = ZX8(MEM8(ecx));
    edx = edx - 7;
    if ((edx == 0)) goto loc_002FAD45; /* je: equal / zero */

loc_002FAD2D: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002FAD39; /* je: equal / zero */

loc_002FAD31: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002FAECE; /* jne: not equal / not zero */

loc_002FAD39: ;
    ecx = MEM32(ecx + 4);
    edi = edi + ecx;
    ebx = ebx + ecx;
    goto loc_002FACA3;

loc_002FAD45: ;
    edx = MEM32(ecx + 4);
    MEM32(ebp + -36) = MEM32(ebp + -36) + 4;
    edx = edx + ebx;
    MEM32(esi) = edx;
    edi = edi + MEM32(ecx + 4);
    esi = esi + 4;
    ebx = 0; /* xor self */

loc_002FAD58: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0xD (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FADBA; /* jge: greater or equal (signed >=) */

loc_002FAD5E: ;
    ecx = MEM32(ebp + -12);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -20) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002FAD79; /* jb: below (unsigned <) */

loc_002FAD66: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FB112; /* je: equal / zero */

loc_002FAD70: ;
    MEM32(ebp + -4) = 0xD;
    goto loc_002FADBA;

loc_002FAD79: ;
    ecx = ZX8(MEM8(ecx));
    edx = MEM32(ebp + -24);
    edx = ZX8(MEM8(ecx + edx));
    ecx = MEM32(ebp + -4);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 8;
    edx = edx << LO8(ecx);
    ecx = MEM32(ebp + -12);
    MEM32(ebp + -8) = MEM32(ebp + -8) | edx;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0xD (32-bit) */
    MEM32(ebp + -12) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_002FADBA; /* jge: greater or equal (signed >=) */

loc_002FAD9C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -20) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002FAD70; /* jae: above or equal (unsigned >=) */

loc_002FADA1: ;
    ecx = ZX8(MEM8(ecx));
    edx = MEM32(ebp + -24);
    edx = ZX8(MEM8(ecx + edx));
    ecx = MEM32(ebp + -4);
    edx = edx << LO8(ecx);
    MEM32(ebp + -8) = MEM32(ebp + -8) | edx;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 8;

loc_002FADBA: ;
    ecx = MEM32(ebp + -8);
    ecx = ecx & 0x1FFF;
    ecx = ecx * 8 + 0x41A788;
    MEM32(ebp + -32) = ecx;
    ecx = ZX8(MEM8(ecx + 1));
    MEM32(ebp + -4) = MEM32(ebp + -4) - ecx;
    MEM32(ebp + -8) = MEM32(ebp + -8) >> LO8(ecx);
    ecx = MEM32(ebp + -32);
    SET_LO8(edx, MEM8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 8 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FADFF; /* je: equal / zero */

loc_002FADE1: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 9 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002FAECE; /* jbe: below or equal (unsigned <=) */

loc_002FADEA: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xB (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002FAECE; /* ja: above (unsigned >) */

loc_002FADF3: ;
    ecx = MEM32(ecx + 4);
    edi = edi + ecx;
    ebx = ebx + ecx;
    goto loc_002FAD58;

loc_002FADFF: ;
    edx = MEM32(ecx + 4);
    MEM32(ebp + -36) = MEM32(ebp + -36) + 4;
    edx = edx + ebx;
    MEM32(esi) = edx;
    edi = edi + MEM32(ecx + 4);
    esi = esi + 4;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -28) (32-bit) */
    MEM32(ebp + -32) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_002FAE78; /* je: equal / zero */

loc_002FAE1A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002FAE78; /* jg: greater (signed >) */

loc_002FAE1E: ;
    ecx = MEM32(ebp + -40);

loc_002FAE21: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -16) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FAE78; /* jge: greater or equal (signed >=) */

loc_002FAE26: ;
    edx = MEM32(ecx + 4);
    edx = edx + MEM32(ecx);
    ecx = ecx + 8;
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -40) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_002FAE21; /* jle: less or equal (signed <=) */

loc_002FAE37: ;
    goto loc_002FAE78;

loc_002FAE39: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -28) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FAE5A; /* je: equal / zero */

loc_002FAE3E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002FAE5A; /* jg: greater (signed >) */

loc_002FAE42: ;
    ecx = MEM32(ebp + -40);

loc_002FAE45: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -16) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FAE5D; /* jge: greater or equal (signed >=) */

loc_002FAE4A: ;
    edx = MEM32(ecx + 4);
    edx = edx + MEM32(ecx);
    ecx = ecx + 8;
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002FAE45; /* jle: less or equal (signed <=) */

loc_002FAE58: ;
    goto loc_002FAE5D;

loc_002FAE5A: ;
    ecx = MEM32(ebp + -40);

loc_002FAE5D: ;
    eax = eax + MEM32(ecx);
    ebx = MEM32(ebp + -32);
    edx = eax;
    edx = edx - edi;
    ecx = ecx + 4;
    ebx = ebx + edx;

loc_002FAE6B: ;
    edi = eax;

loc_002FAE6D: ;
    eax = eax + MEM32(ecx);
    ecx = ecx + 4;

loc_002FAE72: ;
    MEM32(ebp + -32) = ebx;
    MEM32(ebp + -40) = ecx;

loc_002FAE78: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -16) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002FA9FC; /* jl: less (signed <) */

loc_002FAE81: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FAFB4; /* je: equal / zero */

loc_002FAE89: ;
    eax = ebx + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -16) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FAFA2; /* jge: greater or equal (signed >=) */

loc_002FAE95: ;
    ecx = 0; /* xor self */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FAF92; /* jge: greater or equal (signed >=) */

loc_002FAEA1: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -20) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002FAF78; /* jb: below (unsigned <) */

loc_002FAEAD: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FB112; /* je: equal / zero */

loc_002FAEB7: ;
    MEM32(ebp + -4) = ecx;
    goto loc_002FAF92;

loc_002FAEBF: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002FAF4E; /* je: equal / zero */

loc_002FAEC6: ;
    ecx = ecx - 6;
    if ((ecx == 0)) goto loc_002FAEE3; /* je: equal / zero */

loc_002FAECB: ;
    ebx = MEM32(ebp + -32);

loc_002FAECE: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x411598);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FAEDCu); RECOMP_ABI_CALL(0x002FA12Au, sub_002FA12A); /* call 0x002FA12A */

loc_002FAEDC: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_002FAFA9;

loc_002FAEE3: ;
    eax = MEM32(ebp + -16);
    ecx = MEM32(ebp + -4);
    eax = eax - edi;
    PUSH32(esp, 4);
    POP32(esp, edx);
    MEM32(esi) = eax;
    esi = esi + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FAF24; /* jge: greater or equal (signed >=) */

loc_002FAEF6: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -20) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002FAF0B; /* jb: below (unsigned <) */

loc_002FAEFE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FB10F; /* je: equal / zero */

loc_002FAF06: ;
    MEM32(ebp + -4) = edx;
    goto loc_002FAF24;

loc_002FAF0B: ;
    edx = ZX8(MEM8(eax));
    ebx = MEM32(ebp + -24);
    edx = ZX8(MEM8(edx + ebx));
    edx = edx << LO8(ecx);
    MEM32(ebp + -8) = MEM32(ebp + -8) | edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 8;
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -4) = ecx;

loc_002FAF24: ;
    _fa = (uint32_t)(MEM8(ebp + -8)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -8), 0xF (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FAF3A; /* je: equal / zero */

loc_002FAF2A: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x411598);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FAF38u); RECOMP_ABI_CALL(0x002FA12Au, sub_002FA12A); /* call 0x002FA12A */

loc_002FAF38: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_002FAF3A: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 4;
    MEM32(ebp + -8) = MEM32(ebp + -8) >> 4;
    MEM32(ebp + -48) = 1;

loc_002FAF49: ;
    ebx = MEM32(ebp + -32);
    goto loc_002FAFA9;

loc_002FAF4E: ;
    eax = MEM32(ebp + -16);
    eax = eax - edi;
    MEM32(esi) = eax;
    eax = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(eax + 0x164));
    esi = esi + 4;
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, 0x4119E4);
    PUSH32(esp, 0x411598);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FAF73u); RECOMP_ABI_CALL(0x002CED88u, sub_002CED88); /* call 0x002CED88 */

loc_002FAF73: ;
    esp = esp + 0x14;
    goto loc_002FAF49;

loc_002FAF78: ;
    ecx = ZX8(MEM8(eax));
    edx = MEM32(ebp + -24);
    edx = ZX8(MEM8(ecx + edx));
    ecx = MEM32(ebp + -4);
    edx = edx << LO8(ecx);
    MEM32(ebp + -8) = MEM32(ebp + -8) | edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 8;
    MEM32(ebp + -12) = eax;

loc_002FAF92: ;
    _fa = (uint32_t)(MEM8(ebp + -8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FAECE; /* je: equal / zero */

loc_002FAF9C: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = MEM32(ebp + -8) >> 1;

loc_002FAFA2: ;
    MEM32(esi) = ebx;
    esi = esi + 4;
    ebx = 0; /* xor self */

loc_002FAFA9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FAFB4; /* je: equal / zero */

loc_002FAFAD: ;
    MEM32(esi) = ebx;
    esi = esi + 4;
    ebx = 0; /* xor self */

loc_002FAFB4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -16) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FB019; /* je: equal / zero */

loc_002FAFB9: ;
    edx = MEM32(ebp + -16);
    eax = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x411598);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FAFCAu); RECOMP_ABI_CALL(0x002FA148u, sub_002FA148); /* call 0x002FA148 */

loc_002FAFCA: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_LE(_fas, _fbs)) goto loc_002FAFE1; /* jle: less or equal (signed <=) */

loc_002FAFD3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -28) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002FAFE1; /* jbe: below or equal (unsigned <=) */

loc_002FAFD8: ;
    esi = esi - 4;
    edi = edi - MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002FAFD3; /* jg: greater (signed >) */

loc_002FAFE1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FB009; /* jge: greater or equal (signed >=) */

loc_002FAFE5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_002FAFEB; /* jge: greater or equal (signed >=) */

loc_002FAFE9: ;
    edi = 0; /* xor self */

loc_002FAFEB: ;
    ecx = esi;
    ecx = ecx - MEM32(ebp + -28);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FAFFC; /* je: equal / zero */

loc_002FAFF5: ;
    MEM32(esi) = ebx;
    esi = esi + 4;
    ebx = 0; /* xor self */

loc_002FAFFC: ;
    ebx = ebx - edi;
    ebx = ebx + eax;
    MEM32(esi) = ebx;
    esi = esi + 4;
    ebx = 0; /* xor self */
    goto loc_002FB019;

loc_002FB009: ;
    if (CMP_LE(_fas, _fbs)) goto loc_002FB019; /* jle: less or equal (signed <=) */

loc_002FB00B: ;
    ebx = ebx + eax;
    MEM32(esi) = ebx;
    ebx = 0; /* xor self */
    esi = esi + 4;
    MEM32(esi) = ebx;
    esi = esi + 4;

loc_002FB019: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -16));
    edi = MEM32(ebp + -44);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, MEM32(ebp + 0xC));
    { uint32_t _icall_target = MEM32(edi + 0x44); PUSH32(esp, 0x002FB029u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002FB029: ;
    MEM32(esi) = ebx;
    eax = MEM32(edi + 0x50);
    ecx = MEM32(edi + 0x4C);
    MEM32(edi + 0x50) = ecx;
    MEM32(edi + 0x4C) = eax;
    edi = MEM32(edi + 8);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + edi;
    esp = esp + 0x10;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - edi;
    if ((MEM32(ebp + 0x10) == 0)) goto loc_002FB04E; /* je: equal / zero */

loc_002FB045: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x164) = MEM32(eax + 0x164) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x164)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002FB04E: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002FA682; /* jg: greater (signed >) */

loc_002FB058: ;
    ecx = MEM32(ebp + -44);
    edx = MEM32(ebp + 8);

loc_002FB05E: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002FB061: ;
    esi = MEM32(ebp + -4);
    MEM32(ecx + 0x3C) = esi;
    esi = MEM32(ebp + -8);
    MEM32(ecx + 0x38) = esi;
    esi = MEM32(ebp + -48);
    MEM32(ecx + 0x40) = esi;
    esi = MEM32(edx + 0x1E0);
    ecx = MEM32(ebp + -12);
    esi = esi - ecx;
    MEM32(edx + 0x1E4) = MEM32(edx + 0x1E4) + esi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx + 0x1E0) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_002FB08F: ;
    if (CMP_LE(_fas, _fbs)) goto loc_002FB18C; /* jle: less or equal (signed <=) */

loc_002FB095: ;
    goto loc_002FB181;

loc_002FB09A: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x411598);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FB0A8u); RECOMP_ABI_CALL(0x002FA178u, sub_002FA178); /* call 0x002FA178 */

loc_002FB0A8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_002FB0B5; /* je: equal / zero */

loc_002FB0AE: ;
    MEM32(esi) = ebx;
    esi = esi + 4;
    ebx = 0; /* xor self */

loc_002FB0B5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -16) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FB18C; /* je: equal / zero */

loc_002FB0BE: ;
    edx = MEM32(ebp + -16);
    eax = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x411598);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FB0CFu); RECOMP_ABI_CALL(0x002FA148u, sub_002FA148); /* call 0x002FA148 */

loc_002FB0CF: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_002FB0DD;

loc_002FB0D3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -28) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002FB0E2; /* jbe: below or equal (unsigned <=) */

loc_002FB0D8: ;
    esi = esi - 4;
    edi = edi - MEM32(esi);

loc_002FB0DD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -16) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002FB0D3; /* jg: greater (signed >) */

loc_002FB0E2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -16) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FB104; /* jge: greater or equal (signed >=) */

loc_002FB0E7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_002FB0ED; /* jge: greater or equal (signed >=) */

loc_002FB0EB: ;
    edi = 0; /* xor self */

loc_002FB0ED: ;
    eax = esi;
    eax = eax - MEM32(ebp + -28);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FB0FD; /* je: equal / zero */

loc_002FB0F6: ;
    MEM32(esi) = ebx;
    esi = esi + 4;
    ebx = 0; /* xor self */

loc_002FB0FD: ;
    ebx = ebx - edi;
    ebx = ebx + MEM32(ebp + -16);
    goto loc_002FB179;

loc_002FB104: ;
    if (CMP_LE(_fas, _fbs)) goto loc_002FB18C; /* jle: less or equal (signed <=) */

loc_002FB10A: ;
    eax = MEM32(ebp + -16);
    goto loc_002FB17F;

loc_002FB10F: ;
    ebx = MEM32(ebp + -32);

loc_002FB112: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x411598);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FB120u); RECOMP_ABI_CALL(0x002FA178u, sub_002FA178); /* call 0x002FA178 */

loc_002FB120: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_002FB12D; /* je: equal / zero */

loc_002FB126: ;
    MEM32(esi) = ebx;
    esi = esi + 4;
    ebx = 0; /* xor self */

loc_002FB12D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -16) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FB18C; /* je: equal / zero */

loc_002FB132: ;
    edx = MEM32(ebp + -16);
    eax = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x411598);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FB143u); RECOMP_ABI_CALL(0x002FA148u, sub_002FA148); /* call 0x002FA148 */

loc_002FB143: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_LE(_fas, _fbs)) goto loc_002FB15A; /* jle: less or equal (signed <=) */

loc_002FB14C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -28) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002FB15A; /* jbe: below or equal (unsigned <=) */

loc_002FB151: ;
    esi = esi - 4;
    edi = edi - MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002FB14C; /* jg: greater (signed >) */

loc_002FB15A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FB17D; /* jge: greater or equal (signed >=) */

loc_002FB15E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_002FB164; /* jge: greater or equal (signed >=) */

loc_002FB162: ;
    edi = 0; /* xor self */

loc_002FB164: ;
    ecx = esi;
    ecx = ecx - MEM32(ebp + -28);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FB175; /* je: equal / zero */

loc_002FB16E: ;
    MEM32(esi) = ebx;
    esi = esi + 4;
    ebx = 0; /* xor self */

loc_002FB175: ;
    ebx = ebx - edi;
    ebx = ebx + eax;

loc_002FB179: ;
    MEM32(esi) = ebx;
    goto loc_002FB189;

loc_002FB17D: ;
    if (CMP_LE(_fas, _fbs)) goto loc_002FB18C; /* jle: less or equal (signed <=) */

loc_002FB17F: ;
    ebx = ebx + eax;

loc_002FB181: ;
    MEM32(esi) = ebx;
    esi = esi + 4;
    MEM32(esi) = MEM32(esi) & 0;

loc_002FB189: ;
    esi = esi + 4;

loc_002FB18C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -16));
    eax = MEM32(ebp + -44);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, MEM32(ebp + 0xC));
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x002FB19Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002FB19C: ;
    ecx = MEM32(ebp + -44);
    edx = MEM32(ebp + 8);
    esp = esp + 0x10;
    eax = eax | 0xFFFFFFFFu;
    goto loc_002FB061;

}

/**
 * sub_002FB1AD
 * Original: 0x002FB1AD - 0x002FB395 (488 bytes, 205 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FB1AD(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FB1AD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    ecx = ecx - eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FB1C9; /* je: equal / zero */

loc_002FB1C0: ;
    ecx = MEM32(ebp + 0x10);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    MEM32(ecx) = edi;

loc_002FB1C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002FB392; /* jae: above or equal (unsigned >=) */

loc_002FB1D2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);

loc_002FB1D4: ;
    esi = MEM32(eax);
    ecx = esi + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0x14) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002FB1E3; /* ja: above (unsigned >) */

loc_002FB1DE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0x14) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002FB1EA; /* jbe: below or equal (unsigned <=) */

loc_002FB1E3: ;
    esi = MEM32(ebp + 0x14);
    esi = esi - edi;
    MEM32(eax) = esi;

loc_002FB1EA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FB2AE; /* je: equal / zero */

loc_002FB1F2: ;
    PUSH32(esp, 8);
    edx = edi;
    POP32(esp, ecx);
    eax = edi;
    edx = edx & 7;
    eax = eax >> 3;
    eax = eax + MEM32(ebp + 8);
    ebx = ecx;
    ebx = ebx - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002FB29B; /* jbe: below or equal (unsigned <=) */

loc_002FB20E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FB220; /* je: equal / zero */

loc_002FB212: ;
    ecx = ecx - edx;
    SET_LO8(ebx, LO8(ebx) | 0xFF);
    SET_LO8(ebx, LO8(ebx) << LO8(ecx));
    esi = esi + edx + -8;
    MEM8(eax) = MEM8(eax) & LO8(ebx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002FB220: ;
    edx = esi;
    edx = edx >> 3;
    if ((edx == 0)) goto loc_002FB288; /* je: equal / zero */

loc_002FB227: ;
    ecx = edx;
    ecx = ecx & 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002FB254; /* jbe: below or equal (unsigned <=) */

loc_002FB231: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FB23C; /* je: equal / zero */

loc_002FB235: ;
    MEM8(eax) = MEM8(eax) & 0;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002FB231; /* jne: not equal / not zero */

loc_002FB23C: ;
    ecx = edx;
    ecx = ecx >> 2;
    ebx = ecx;
    ebx = (uint32_t)(-(int32_t)ebx);
    edx = edx + ebx * 4;

loc_002FB248: ;
    ebx = 0; /* xor self */
    MEM32(eax) = ebx;
    eax = eax + 4;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002FB248; /* jne: not equal / not zero */

loc_002FB252: ;
    goto loc_002FB256;

loc_002FB254: ;
    ebx = 0; /* xor self */

loc_002FB256: ;
    ecx = edx;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002FB27F; /* je: equal / zero */

loc_002FB25B: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002FB27C; /* je: equal / zero */

loc_002FB25E: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002FB279; /* je: equal / zero */

loc_002FB261: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002FB276; /* je: equal / zero */

loc_002FB264: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002FB273; /* je: equal / zero */

loc_002FB267: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002FB270; /* je: equal / zero */

loc_002FB26A: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002FB283; /* jne: not equal / not zero */

loc_002FB26D: ;
    MEM8(eax + 6) = LO8(ebx);

loc_002FB270: ;
    MEM8(eax + 5) = LO8(ebx);

loc_002FB273: ;
    MEM8(eax + 4) = LO8(ebx);

loc_002FB276: ;
    MEM8(eax + 3) = LO8(ebx);

loc_002FB279: ;
    MEM8(eax + 2) = LO8(ebx);

loc_002FB27C: ;
    MEM8(eax + 1) = LO8(ebx);

loc_002FB27F: ;
    MEM8(eax) = LO8(ebx);
    eax = eax + edx;

loc_002FB283: ;
    esi = esi & 7;
    goto loc_002FB28A;

loc_002FB288: ;
    ebx = 0; /* xor self */

loc_002FB28A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FB2A9; /* je: equal / zero */

loc_002FB28E: ;
    edx = 0xFF;
    ecx = esi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((LO8(ecx)) & 31u));
    MEM8(eax) = MEM8(eax) & LO8(edx);
    goto loc_002FB2A9;

loc_002FB29B: ;
    SET_LO8(ebx, MEM8(esi + 0x4115A8));
    SET_LO8(ecx, LO8(edx));
    SET_LO8(ebx, LO8(ebx) >> LO8(ecx));
    SET_LO8(ebx, ~LO8(ebx));
    MEM8(eax) = MEM8(eax) & LO8(ebx);

loc_002FB2A9: ;
    eax = MEM32(ebp + 0xC);
    edi = edi + MEM32(eax);

loc_002FB2AE: ;
    esi = MEM32(eax + 4);
    ecx = esi + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0x14) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002FB2BE; /* ja: above (unsigned >) */

loc_002FB2B9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0x14) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002FB2C6; /* jbe: below or equal (unsigned <=) */

loc_002FB2BE: ;
    esi = MEM32(ebp + 0x14);
    esi = esi - edi;
    MEM32(eax + 4) = esi;

loc_002FB2C6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FB381; /* je: equal / zero */

loc_002FB2CE: ;
    ecx = edi;
    PUSH32(esp, 8);
    eax = edi;
    ecx = ecx & 7;
    eax = eax >> 3;
    eax = eax + MEM32(ebp + 8);
    POP32(esp, edx);
    edx = edx - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002FB371; /* jbe: below or equal (unsigned <=) */

loc_002FB2E8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FB2FA; /* je: equal / zero */

loc_002FB2EC: ;
    edx = 0xFF;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((LO8(ecx)) & 31u));
    esi = esi + ecx + -8;
    MEM8(eax) = MEM8(eax) | LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002FB2FA: ;
    edx = esi;
    edx = edx >> 3;
    if ((edx == 0)) goto loc_002FB362; /* je: equal / zero */

loc_002FB301: ;
    ecx = edx;
    ecx = ecx & 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002FB32B; /* jbe: below or equal (unsigned <=) */

loc_002FB30B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FB316; /* je: equal / zero */

loc_002FB30F: ;
    MEM8(eax) = MEM8(eax) | 0xFF;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002FB30B; /* jne: not equal / not zero */

loc_002FB316: ;
    ecx = edx;
    ecx = ecx >> 2;
    ebx = ecx;
    ebx = (uint32_t)(-(int32_t)ebx);
    edx = edx + ebx * 4;

loc_002FB322: ;
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu;
    eax = eax + 4;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002FB322; /* jne: not equal / not zero */

loc_002FB32B: ;
    ecx = edx;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002FB35A; /* je: equal / zero */

loc_002FB330: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002FB356; /* je: equal / zero */

loc_002FB333: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002FB352; /* je: equal / zero */

loc_002FB336: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002FB34E; /* je: equal / zero */

loc_002FB339: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002FB34A; /* je: equal / zero */

loc_002FB33C: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002FB346; /* je: equal / zero */

loc_002FB33F: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002FB35F; /* jne: not equal / not zero */

loc_002FB342: ;
    MEM8(eax + 6) = MEM8(eax + 6) | 0xFF;

loc_002FB346: ;
    MEM8(eax + 5) = MEM8(eax + 5) | 0xFF;

loc_002FB34A: ;
    MEM8(eax + 4) = MEM8(eax + 4) | 0xFF;

loc_002FB34E: ;
    MEM8(eax + 3) = MEM8(eax + 3) | 0xFF;

loc_002FB352: ;
    MEM8(eax + 2) = MEM8(eax + 2) | 0xFF;

loc_002FB356: ;
    MEM8(eax + 1) = MEM8(eax + 1) | 0xFF;

loc_002FB35A: ;
    MEM8(eax) = MEM8(eax) | 0xFF;
    eax = eax + edx;

loc_002FB35F: ;
    esi = esi & 7;

loc_002FB362: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FB37B; /* je: equal / zero */

loc_002FB366: ;
    edx = 0xFF00;
    ecx = esi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((LO8(ecx)) & 31u));
    goto loc_002FB379;

loc_002FB371: ;
    SET_LO8(edx, MEM8(esi + 0x4115A8));
    SET_LO8(edx, LO8(edx) >> LO8(ecx));

loc_002FB379: ;
    MEM8(eax) = MEM8(eax) | LO8(edx);

loc_002FB37B: ;
    eax = MEM32(ebp + 0xC);
    edi = edi + MEM32(eax + 4);

loc_002FB381: ;
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x10) (32-bit) */
    MEM32(ebp + 0xC) = eax;
    if (CMP_B(_fa, _fb)) goto loc_002FB1D4; /* jb: below (unsigned <) */

loc_002FB390: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_002FB392: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002FB395
 * Original: 0x002FB395 - 0x002FB4AB (278 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FB395(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FB395: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM16(esi + 0x40)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x40), 1 (16-bit) */
    ebx = MEM32(esi + 0x1CC);
    if (CMP_EQ(_fa, _fb)) goto loc_002FB3BF; /* je: equal / zero */

loc_002FB3AA: ;
    PUSH32(esp, 0x411B0C);
    PUSH32(esp, MEM32(esi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FB3B6u); RECOMP_ABI_CALL(0x002CED88u, sub_002CED88); /* call 0x002CED88 */

loc_002FB3B6: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    goto loc_002FB4A7;

loc_002FB3BF: ;
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xD), 4 (8-bit) */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_002FB3D1; /* je: equal / zero */

loc_002FB3C7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FB3CCu); RECOMP_ABI_CALL(0x002CF539u, sub_002CF539); /* call 0x002CF539 */

loc_002FB3CC: ;
    edi = MEM32(esi + 0x30);
    goto loc_002FB3D9;

loc_002FB3D1: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FB3D6u); RECOMP_ABI_CALL(0x002C33ECu, sub_002C33EC); /* call 0x002C33EC */

loc_002FB3D6: ;
    edi = MEM32(esi + 0x24);

loc_002FB3D9: ;
    _fa = (uint32_t)(MEM8(ebx + 0x1C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x1C), 1 (8-bit) */
    POP32(esp, ecx);
    MEM32(ebx + 8) = eax;
    MEM32(ebx + 0xC) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_002FB3F4; /* jne: not equal / not zero */

loc_002FB3E6: ;
    _fa = (uint32_t)(MEM16(esi + 0x44)) & 0xFFFFu; _fb = (uint32_t)(4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x44), 4 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FB3F4; /* je: equal / zero */

loc_002FB3ED: ;
    ecx = 0; /* xor self */
    MEM32(ebp + 8) = ecx;
    goto loc_002FB3FD;

loc_002FB3F4: ;
    MEM32(ebp + 8) = 1;
    ecx = 0; /* xor self */

loc_002FB3FD: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FB478; /* jne: not equal / not zero */

loc_002FB401: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    ebx = MEM32(esi + 0x1CC);
    if (CMP_EQ(_fa, _fb)) goto loc_002FB415; /* je: equal / zero */

loc_002FB40C: ;
    edi = edi + 0x1F;
    edi = edi >> 5;
    edi = edi << 6;

loc_002FB415: ;
    eax = edi * 8 + 0xC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FB422u); RECOMP_ABI_CALL(0x002B88E0u, sub_002B88E0); /* call 0x002B88E0 */

loc_002FB422: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    MEM32(ebx + 0x48) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_002FB442; /* jne: not equal / not zero */

loc_002FB42A: ;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x411AE4);

loc_002FB431: ;
    PUSH32(esp, 0x411AD4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FB43Bu); RECOMP_ABI_CALL(0x002CED88u, sub_002CED88); /* call 0x002CED88 */

loc_002FB43B: ;
    esp = esp + 0xC;
    eax = 0; /* xor self */
    goto loc_002FB4A6;

loc_002FB442: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    MEM32(ebx + 0x50) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002FB455; /* je: equal / zero */

loc_002FB44B: ;
    edi = edi >> 1;
    eax = eax + edi * 4;
    MEM32(ebx + 0x4C) = eax;
    goto loc_002FB459;

loc_002FB455: ;
    MEM32(ebx + 0x4C) = MEM32(ebx + 0x4C) & 0;

loc_002FB459: ;
    _fa = (uint32_t)(MEM8(ebx + 0x1C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x1C), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FB4A3; /* je: equal / zero */

loc_002FB45F: ;
    eax = 0x2FA631;
    MEM32(esi + 0x1A0) = eax;
    MEM32(esi + 0x1A8) = eax;
    MEM32(esi + 0x1B0) = eax;
    goto loc_002FB4A3;

loc_002FB478: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FB49A; /* je: equal / zero */

loc_002FB47D: ;
    edi = MEM32(esi + 0x1CC);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FB489u); RECOMP_ABI_CALL(0x002B88E0u, sub_002B88E0); /* call 0x002B88E0 */

loc_002FB489: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    MEM32(edi + 0x40) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_002FB4A3; /* jne: not equal / not zero */

loc_002FB491: ;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x411AA8);
    goto loc_002FB431;

loc_002FB49A: ;
    eax = MEM32(esi + 0x1CC);
    MEM32(eax + 0x40) = ecx;

loc_002FB4A3: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002FB4A6: ;
    POP32(esp, edi);

loc_002FB4A7: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002FB4AB
 * Original: 0x002FB4AB - 0x002FB54B (160 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FB4AB(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FB4AB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x1CC);
    eax = MEM32(edi + 0x38);
    ebx = MEM32(edi + 0x34);
    goto loc_002FB4F8;

loc_002FB4BE: ;
    ecx = ecx - eax;
    eax = MEM32(ebp + 8);
    eax = eax >> LO8(ecx);
    MEM32(ebp + 0xC) = ecx;
    ebx = ebx | eax;
    eax = MEM32(esi + 0x1E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1DC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x1DC) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002FB4DF; /* jl: less (signed <) */

loc_002FB4D8: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FB4DEu); RECOMP_ABI_CALL(0x002CB4D3u, sub_002CB4D3); /* call 0x002CB4D3 */

loc_002FB4DE: ;
    POP32(esp, ecx);

loc_002FB4DF: ;
    eax = MEM32(esi + 0x1E0);
    MEM8(eax) = LO8(ebx);
    MEM32(esi + 0x1E0) = MEM32(esi + 0x1E0) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x1E0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x1E4) = MEM32(esi + 0x1E4) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x1E4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 8);
    ebx = 0; /* xor self */
    POP32(esp, eax);

loc_002FB4F8: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002FB4BE; /* ja: above (unsigned >) */

loc_002FB4FF: ;
    edx = MEM32(ecx * 4 + 0x4115B4);
    edx = edx & MEM32(ebp + 8);
    eax = eax - ecx;
    ecx = eax;
    edx = edx << LO8(ecx);
    ebx = ebx | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002FB541; /* jne: not equal / not zero */

loc_002FB515: ;
    eax = MEM32(esi + 0x1E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1DC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x1DC) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002FB52A; /* jl: less (signed <) */

loc_002FB523: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FB529u); RECOMP_ABI_CALL(0x002CB4D3u, sub_002CB4D3); /* call 0x002CB4D3 */

loc_002FB529: ;
    POP32(esp, ecx);

loc_002FB52A: ;
    eax = esi + 0x1E0;
    ecx = MEM32(eax);
    MEM8(ecx) = LO8(ebx);
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x1E4) = MEM32(esi + 0x1E4) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x1E4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 8);
    ebx = 0; /* xor self */
    POP32(esp, eax);

loc_002FB541: ;
    MEM32(edi + 0x34) = ebx;
    MEM32(edi + 0x38) = eax;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002FB54B
 * Original: 0x002FB54B - 0x002FB771 (550 bytes, 178 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FB54B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FB54B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC;
    ecx = MEM32(esi + 0x1CC);
    eax = MEM32(ecx + 0x38);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x34);
    PUSH32(esp, edi);
    MEM32(ebp + -12) = ecx;
    goto loc_002FB609;

loc_002FB567: ;
    ecx = MEM32(ebp + 0xC);
    edx = ZX16(MEM16(ecx + 0x26C));
    edi = ZX16(MEM16(ecx + 0x26A));
    MEM32(ebp + -4) = edx;
    goto loc_002FB5B6;

loc_002FB57D: ;
    edi = edi - eax;
    eax = MEM32(ebp + -4);
    ecx = edi;
    eax = eax >> LO8(ecx);
    ebx = ebx | eax;
    eax = MEM32(esi + 0x1E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1DC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x1DC) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002FB59D; /* jl: less (signed <) */

loc_002FB596: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FB59Cu); RECOMP_ABI_CALL(0x002CB4D3u, sub_002CB4D3); /* call 0x002CB4D3 */

loc_002FB59C: ;
    POP32(esp, ecx);

loc_002FB59D: ;
    eax = MEM32(esi + 0x1E0);
    MEM8(eax) = LO8(ebx);
    MEM32(esi + 0x1E0) = MEM32(esi + 0x1E0) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x1E0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x1E4) = MEM32(esi + 0x1E4) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x1E4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 8);
    ebx = 0; /* xor self */
    POP32(esp, eax);

loc_002FB5B6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002FB57D; /* ja: above (unsigned >) */

loc_002FB5BA: ;
    edx = MEM32(edi * 4 + 0x4115B4);
    edx = edx & MEM32(ebp + -4);
    eax = eax - edi;
    ecx = eax;
    edx = edx << LO8(ecx);
    ebx = ebx | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002FB5FC; /* jne: not equal / not zero */

loc_002FB5D0: ;
    eax = MEM32(esi + 0x1E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1DC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x1DC) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002FB5E5; /* jl: less (signed <) */

loc_002FB5DE: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FB5E4u); RECOMP_ABI_CALL(0x002CB4D3u, sub_002CB4D3); /* call 0x002CB4D3 */

loc_002FB5E4: ;
    POP32(esp, ecx);

loc_002FB5E5: ;
    eax = esi + 0x1E0;
    ecx = MEM32(eax);
    MEM8(ecx) = LO8(ebx);
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x1E4) = MEM32(esi + 0x1E4) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x1E4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 8);
    ebx = 0; /* xor self */
    POP32(esp, eax);

loc_002FB5FC: ;
    ecx = MEM32(ebp + 0xC);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0x26E);
    MEM32(ebp + 8) = MEM32(ebp + 8) - ecx;

loc_002FB609: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xA40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FB567; /* jge: greater or equal (signed >=) */

loc_002FB616: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x40 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002FB6CD; /* jl: less (signed <) */

loc_002FB620: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((6) & 31u));
    ecx = ecx + 0x3F;
    ecx = ecx + ecx * 2;
    edx = edx + ecx * 2;
    ecx = ZX16(MEM16(edx + 2));
    edi = ZX16(MEM16(edx));
    MEM32(ebp + -8) = edx;
    MEM32(ebp + -4) = ecx;
    goto loc_002FB67D;

loc_002FB641: ;
    edi = edi - eax;
    eax = MEM32(ebp + -4);
    ecx = edi;
    eax = eax >> LO8(ecx);
    ebx = ebx | eax;
    eax = MEM32(esi + 0x1E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1DC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x1DC) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002FB664; /* jl: less (signed <) */

loc_002FB65A: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FB660u); RECOMP_ABI_CALL(0x002CB4D3u, sub_002CB4D3); /* call 0x002CB4D3 */

loc_002FB660: ;
    edx = MEM32(ebp + -8);
    POP32(esp, ecx);

loc_002FB664: ;
    eax = MEM32(esi + 0x1E0);
    MEM8(eax) = LO8(ebx);
    MEM32(esi + 0x1E0) = MEM32(esi + 0x1E0) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x1E0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x1E4) = MEM32(esi + 0x1E4) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x1E4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 8);
    ebx = 0; /* xor self */
    POP32(esp, eax);

loc_002FB67D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002FB641; /* ja: above (unsigned >) */

loc_002FB681: ;
    eax = eax - edi;
    edi = MEM32(edi * 4 + 0x4115B4);
    edi = edi & MEM32(ebp + -4);
    ecx = eax;
    edi = edi << LO8(ecx);
    ebx = ebx | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002FB6C6; /* jne: not equal / not zero */

loc_002FB697: ;
    eax = MEM32(esi + 0x1E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1DC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x1DC) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002FB6AF; /* jl: less (signed <) */

loc_002FB6A5: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FB6ABu); RECOMP_ABI_CALL(0x002CB4D3u, sub_002CB4D3); /* call 0x002CB4D3 */

loc_002FB6AB: ;
    edx = MEM32(ebp + -8);
    POP32(esp, ecx);

loc_002FB6AF: ;
    eax = esi + 0x1E0;
    ecx = MEM32(eax);
    MEM8(ecx) = LO8(ebx);
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x1E4) = MEM32(esi + 0x1E4) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x1E4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 8);
    ebx = 0; /* xor self */
    POP32(esp, eax);

loc_002FB6C6: ;
    ecx = (uint32_t)(int32_t)SMEM16(edx + 4);
    MEM32(ebp + 8) = MEM32(ebp + 8) - ecx;

loc_002FB6CD: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    ecx = ecx + ecx * 2;
    ecx = edx + ecx * 2;
    edx = ZX16(MEM16(ecx + 2));
    edi = ZX16(MEM16(ecx));
    MEM32(ebp + -4) = edx;
    goto loc_002FB71E;

loc_002FB6E5: ;
    edi = edi - eax;
    eax = MEM32(ebp + -4);
    ecx = edi;
    eax = eax >> LO8(ecx);
    ebx = ebx | eax;
    eax = MEM32(esi + 0x1E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1DC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x1DC) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002FB705; /* jl: less (signed <) */

loc_002FB6FE: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FB704u); RECOMP_ABI_CALL(0x002CB4D3u, sub_002CB4D3); /* call 0x002CB4D3 */

loc_002FB704: ;
    POP32(esp, ecx);

loc_002FB705: ;
    eax = MEM32(esi + 0x1E0);
    MEM8(eax) = LO8(ebx);
    MEM32(esi + 0x1E0) = MEM32(esi + 0x1E0) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x1E0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x1E4) = MEM32(esi + 0x1E4) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x1E4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 8);
    ebx = 0; /* xor self */
    POP32(esp, eax);

loc_002FB71E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002FB6E5; /* ja: above (unsigned >) */

loc_002FB722: ;
    edx = MEM32(edi * 4 + 0x4115B4);
    edx = edx & MEM32(ebp + -4);
    eax = eax - edi;
    ecx = eax;
    edx = edx << LO8(ecx);
    ebx = ebx | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002FB764; /* jne: not equal / not zero */

loc_002FB738: ;
    eax = MEM32(esi + 0x1E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1DC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x1DC) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002FB74D; /* jl: less (signed <) */

loc_002FB746: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FB74Cu); RECOMP_ABI_CALL(0x002CB4D3u, sub_002CB4D3); /* call 0x002CB4D3 */

loc_002FB74C: ;
    POP32(esp, ecx);

loc_002FB74D: ;
    eax = esi + 0x1E0;
    ecx = MEM32(eax);
    MEM8(ecx) = LO8(ebx);
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x1E4) = MEM32(esi + 0x1E4) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x1E4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 8);
    ebx = 0; /* xor self */
    POP32(esp, eax);

loc_002FB764: ;
    ecx = MEM32(ebp + -12);
    POP32(esp, edi);
    MEM32(ecx + 0x34) = ebx;
    MEM32(ecx + 0x38) = eax;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002FB771
 * Original: 0x002FB771 - 0x002FB8D8 (359 bytes, 123 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FB771(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FB771: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x1CC);
    _fa = (uint32_t)(MEM8(edi + 0x1C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x1C), 4 (8-bit) */
    eax = MEM32(edi + 0x38);
    ebx = MEM32(edi + 0x34);
    if (TEST_Z(_fa, _fb)) goto loc_002FB822; /* je: equal / zero */

loc_002FB78E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FB822; /* je: equal / zero */

loc_002FB797: ;
    ecx = eax + 4;
    if (CMP_L(_fas, _fbs)) goto loc_002FB79F; /* jl: less (signed <) */

loc_002FB79C: ;
    ecx = eax + -4;

loc_002FB79F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_002FB7E7; /* jbe: below or equal (unsigned <=) */

loc_002FB7A6: ;
    ecx = MEM32(ebp + -4);
    ecx = ecx - eax;
    eax = 0; /* xor self */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((LO8(ecx)) & 31u));
    MEM32(ebp + -4) = ecx;
    ebx = ebx | eax;
    eax = MEM32(esi + 0x1E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1DC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x1DC) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002FB7C9; /* jl: less (signed <) */

loc_002FB7C2: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FB7C8u); RECOMP_ABI_CALL(0x002CB4D3u, sub_002CB4D3); /* call 0x002CB4D3 */

loc_002FB7C8: ;
    POP32(esp, ecx);

loc_002FB7C9: ;
    eax = MEM32(esi + 0x1E0);
    MEM8(eax) = LO8(ebx);
    MEM32(esi + 0x1E0) = MEM32(esi + 0x1E0) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x1E0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x1E4) = MEM32(esi + 0x1E4) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x1E4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 8);
    POP32(esp, eax);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002FB7A6; /* ja: above (unsigned >) */

loc_002FB7E7: ;
    eax = eax - MEM32(ebp + -4);
    edx = 0; /* xor self */
    ecx = eax;
    edx = edx << LO8(ecx);
    ebx = ebx | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002FB822; /* jne: not equal / not zero */

loc_002FB7F6: ;
    eax = MEM32(esi + 0x1E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1DC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x1DC) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002FB80B; /* jl: less (signed <) */

loc_002FB804: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FB80Au); RECOMP_ABI_CALL(0x002CB4D3u, sub_002CB4D3); /* call 0x002CB4D3 */

loc_002FB80A: ;
    POP32(esp, ecx);

loc_002FB80B: ;
    eax = esi + 0x1E0;
    ecx = MEM32(eax);
    MEM8(ecx) = LO8(ebx);
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x1E4) = MEM32(esi + 0x1E4) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x1E4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 8);
    ebx = 0; /* xor self */
    POP32(esp, eax);

loc_002FB822: ;
    ecx = 0; /* xor self */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(edi + 0x1C)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x1C), LO8(ecx) (8-bit) */
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -4) = 0xC;
    if (TEST_Z(_fa, _fb)) goto loc_002FB885; /* je: equal / zero */

loc_002FB834: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(edi + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x3C), ecx (32-bit) */
    MEM32(ebp + -4) = 0xD;
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx = ecx | 2;
    MEM32(ebp + -8) = ecx;
    goto loc_002FB885;

loc_002FB84B: ;
    ecx = ecx - eax;
    eax = MEM32(ebp + -8);
    eax = eax >> LO8(ecx);
    MEM32(ebp + -4) = ecx;
    ebx = ebx | eax;
    eax = MEM32(esi + 0x1E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1DC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x1DC) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002FB86C; /* jl: less (signed <) */

loc_002FB865: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FB86Bu); RECOMP_ABI_CALL(0x002CB4D3u, sub_002CB4D3); /* call 0x002CB4D3 */

loc_002FB86B: ;
    POP32(esp, ecx);

loc_002FB86C: ;
    eax = MEM32(esi + 0x1E0);
    MEM8(eax) = LO8(ebx);
    MEM32(esi + 0x1E0) = MEM32(esi + 0x1E0) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x1E0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x1E4) = MEM32(esi + 0x1E4) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x1E4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 8);
    ebx = 0; /* xor self */
    POP32(esp, eax);

loc_002FB885: ;
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002FB84B; /* ja: above (unsigned >) */

loc_002FB88C: ;
    edx = MEM32(ecx * 4 + 0x4115B4);
    edx = edx & MEM32(ebp + -8);
    eax = eax - ecx;
    ecx = eax;
    edx = edx << LO8(ecx);
    ebx = ebx | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002FB8CE; /* jne: not equal / not zero */

loc_002FB8A2: ;
    eax = MEM32(esi + 0x1E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1DC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x1DC) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002FB8B7; /* jl: less (signed <) */

loc_002FB8B0: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FB8B6u); RECOMP_ABI_CALL(0x002CB4D3u, sub_002CB4D3); /* call 0x002CB4D3 */

loc_002FB8B6: ;
    POP32(esp, ecx);

loc_002FB8B7: ;
    eax = esi + 0x1E0;
    ecx = MEM32(eax);
    MEM8(ecx) = LO8(ebx);
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x1E4) = MEM32(esi + 0x1E4) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x1E4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 8);
    ebx = 0; /* xor self */
    POP32(esp, eax);

loc_002FB8CE: ;
    MEM32(edi + 0x34) = ebx;
    MEM32(edi + 0x38) = eax;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002FB8D8
 * Original: 0x002FB8D8 - 0x002FB948 (112 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FB8D8(void)
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

loc_002FB8D8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = MEM32(edi + 0x1CC);
    eax = MEM32(esi + 0x40);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x38) = 8;
    MEM32(esi + 0x34) = ebx;
    MEM32(esi + 0x3C) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_002FB908; /* je: equal / zero */

loc_002FB8FB: ;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002FB905u); RECOMP_ABI_CALL(0x002B8910u, sub_002B8910); /* call 0x002B8910 */

loc_002FB905: ;
    esp = esp + 0xC;

loc_002FB908: ;
    _fa = (uint32_t)(MEM8(esi + 0x1C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x1C), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FB93B; /* je: equal / zero */

loc_002FB90E: ;
    _fa = (uint32_t)(MEM16(edi + 0x70)) & 0xFFFFu; _fb = (uint32_t)(3) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x70), 3 (16-bit) */
    fp_push(MEMF(edi + 0x6C)); /* fld float */
    if (CMP_NE(_fa, _fb)) goto loc_002FB91E; /* jne: not equal / not zero */

loc_002FB918: ;
    fp_top() = fp_top() * MEMF(0x411B44); /* fmul dword ptr [0x411b44] */

loc_002FB91E: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3D5D54)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3d5d54] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002FB92F; /* jne: not equal / not zero */

loc_002FB92B: ;
    PUSH32(esp, 4);
    goto loc_002FB931;

loc_002FB92F: ;
    PUSH32(esp, 2);

loc_002FB931: ;
    POP32(esp, eax);
    MEM32(esi + 0x48) = eax;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x44) = eax;
    goto loc_002FB941;

loc_002FB93B: ;
    MEM32(esi + 0x48) = ebx;
    MEM32(esi + 0x44) = ebx;

loc_002FB941: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
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
 * sub_002FB948
 * Original: 0x002FB948 - 0x002FB9F7 (175 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FB948(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FB948: ;
    PUSH32(esp, ebx);
    ecx = ecx - edx;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = edx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((3) & 31u));
    eax = eax + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, 8);
    POP32(esp, ebx);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002FB992; /* jle: less or equal (signed <=) */

loc_002FB95C: ;
    edx = edx & 7;
    ecx = edx;
    if ((edx == 0)) goto loc_002FB992; /* je: equal / zero */

loc_002FB963: ;
    edx = ZX8(MEM8(eax));
    edx = edx << LO8(ecx);
    PUSH32(esp, edi);
    edi = ebx;
    edi = edi - ecx;
    edx = edx & 0xFF;
    edx = ZX8(MEM8(edx + 0x4115D8));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002FB980; /* jle: less or equal (signed <=) */

loc_002FB97E: ;
    edx = edi;

loc_002FB980: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    POP32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_002FB987; /* jle: less or equal (signed <=) */

loc_002FB985: ;
    edx = esi;

loc_002FB987: ;
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002FB9E4; /* jl: less (signed <) */

loc_002FB98D: ;
    esi = esi - edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_002FB994;

loc_002FB992: ;
    edx = 0; /* xor self */

loc_002FB994: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x40 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002FB9CA; /* jb: below (unsigned <) */

loc_002FB999: ;
    goto loc_002FB9A5;

loc_002FB99B: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FB9E9; /* jne: not equal / not zero */

loc_002FB9A0: ;
    edx = edx + ebx;
    esi = esi - ebx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002FB9A5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 3 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002FB99B; /* jne: not equal / not zero */

loc_002FB9A9: ;
    PUSH32(esp, 0x20);
    POP32(esp, ecx);
    goto loc_002FB9BA;

loc_002FB9AE: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FB9CA; /* jne: not equal / not zero */

loc_002FB9B3: ;
    edx = edx + ecx;
    esi = esi - ecx;
    eax = eax + 4;

loc_002FB9BA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002FB9AE; /* jae: above or equal (unsigned >=) */

loc_002FB9BE: ;
    goto loc_002FB9CA;

loc_002FB9C0: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FB9E9; /* jne: not equal / not zero */

loc_002FB9C5: ;
    edx = edx + ebx;
    esi = esi - ebx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002FB9CA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FB9C0; /* jge: greater or equal (signed >=) */

loc_002FB9CE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002FB9E4; /* jle: less or equal (signed <=) */

loc_002FB9D2: ;
    eax = ZX8(MEM8(eax));
    eax = ZX8(MEM8(eax + 0x4115D8));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002FB9E2; /* jle: less or equal (signed <=) */

loc_002FB9E0: ;
    eax = esi;

loc_002FB9E2: ;
    edx = edx + eax;

loc_002FB9E4: ;
    eax = edx;

loc_002FB9E6: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002FB9E9: ;
    eax = ZX8(MEM8(eax));
    eax = ZX8(MEM8(eax + 0x4115D8));
    eax = eax + edx;
    goto loc_002FB9E6;

}

/**
 * sub_002FB9F7
 * Original: 0x002FB9F7 - 0x002FBAA6 (175 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FB9F7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FB9F7: ;
    PUSH32(esp, ebx);
    ecx = ecx - edx;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = edx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((3) & 31u));
    eax = eax + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, 8);
    POP32(esp, ebx);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002FBA41; /* jle: less or equal (signed <=) */

loc_002FBA0B: ;
    edx = edx & 7;
    ecx = edx;
    if ((edx == 0)) goto loc_002FBA41; /* je: equal / zero */

loc_002FBA12: ;
    edx = ZX8(MEM8(eax));
    edx = edx << LO8(ecx);
    PUSH32(esp, edi);
    edi = ebx;
    edi = edi - ecx;
    edx = edx & 0xFF;
    edx = ZX8(MEM8(edx + 0x4116D8));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002FBA2F; /* jle: less or equal (signed <=) */

loc_002FBA2D: ;
    edx = edi;

loc_002FBA2F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    POP32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_002FBA36; /* jle: less or equal (signed <=) */

loc_002FBA34: ;
    edx = esi;

loc_002FBA36: ;
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002FBA93; /* jl: less (signed <) */

loc_002FBA3C: ;
    esi = esi - edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_002FBA43;

loc_002FBA41: ;
    edx = 0; /* xor self */

loc_002FBA43: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x40 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002FBA79; /* jb: below (unsigned <) */

loc_002FBA48: ;
    goto loc_002FBA54;

loc_002FBA4A: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FBA98; /* jne: not equal / not zero */

loc_002FBA4F: ;
    edx = edx + ebx;
    esi = esi - ebx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002FBA54: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 3 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002FBA4A; /* jne: not equal / not zero */

loc_002FBA58: ;
    PUSH32(esp, 0x20);
    POP32(esp, ecx);
    goto loc_002FBA69;

loc_002FBA5D: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FBA79; /* jne: not equal / not zero */

loc_002FBA62: ;
    edx = edx + ecx;
    esi = esi - ecx;
    eax = eax + 4;

loc_002FBA69: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002FBA5D; /* jae: above or equal (unsigned >=) */

loc_002FBA6D: ;
    goto loc_002FBA79;

loc_002FBA6F: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FBA98; /* jne: not equal / not zero */

loc_002FBA74: ;
    edx = edx + ebx;
    esi = esi - ebx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002FBA79: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FBA6F; /* jge: greater or equal (signed >=) */

loc_002FBA7D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002FBA93; /* jle: less or equal (signed <=) */

loc_002FBA81: ;
    eax = ZX8(MEM8(eax));
    eax = ZX8(MEM8(eax + 0x4116D8));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002FBA91; /* jle: less or equal (signed <=) */

loc_002FBA8F: ;
    eax = esi;

loc_002FBA91: ;
    edx = edx + eax;

loc_002FBA93: ;
    eax = edx;

loc_002FBA95: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002FBA98: ;
    eax = ZX8(MEM8(eax));
    eax = ZX8(MEM8(eax + 0x4116D8));
    eax = eax + edx;
    goto loc_002FBA95;

}

/**
 * sub_002FBAA6
 * Original: 0x002FBAA6 - 0x002FBBAF (265 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FBAA6(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FBAA6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x1CC);
    edx = 0; /* xor self */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FBAC3u); RECOMP_ABI_CALL(0x002FB948u, sub_002FB948); /* call 0x002FB948 */

loc_002FBAC3: ;
    ebx = 0x411068;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FBAD2u); RECOMP_ABI_CALL(0x002FB54Bu, sub_002FB54B); /* call 0x002FB54B */

loc_002FBAD2: ;
    eax = MEM32(ebp + -4);
    goto loc_002FBB1D;

loc_002FBAD7: ;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + -8);
    eax = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FBAE5u); RECOMP_ABI_CALL(0x002FB9F7u, sub_002FB9F7); /* call 0x002FB9F7 */

loc_002FBAE5: ;
    PUSH32(esp, 0x4112F8);
    PUSH32(esp, eax);
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FBAF3u); RECOMP_ABI_CALL(0x002FB54Bu, sub_002FB54B); /* call 0x002FB54B */

loc_002FBAF3: ;
    edx = MEM32(ebp + -8);
    edx = edx + MEM32(ebp + -4);
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(ebp + -8) = edx;
    if (CMP_AE(_fa, _fb)) goto loc_002FBB27; /* jae: above or equal (unsigned >=) */

loc_002FBB05: ;
    eax = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FBB0Du); RECOMP_ABI_CALL(0x002FB948u, sub_002FB948); /* call 0x002FB948 */

loc_002FBB0D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FBB17u); RECOMP_ABI_CALL(0x002FB54Bu, sub_002FB54B); /* call 0x002FB54B */

loc_002FBB17: ;
    eax = MEM32(ebp + -8);
    eax = eax + MEM32(ebp + -4);

loc_002FBB1D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(ebp + -8) = eax;
    if (CMP_B(_fa, _fb)) goto loc_002FBAD7; /* jb: below (unsigned <) */

loc_002FBB27: ;
    _fa = (uint32_t)(MEM8(edi + 4)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 4), 0xC (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FBBA7; /* je: equal / zero */

loc_002FBB2D: ;
    PUSH32(esp, 8);
    POP32(esp, ebx);
    _fa = (uint32_t)(MEM32(edi + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x38), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FBB66; /* je: equal / zero */

loc_002FBB35: ;
    eax = MEM32(esi + 0x1E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1DC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x1DC) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002FBB4A; /* jl: less (signed <) */

loc_002FBB43: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FBB49u); RECOMP_ABI_CALL(0x002CB4D3u, sub_002CB4D3); /* call 0x002CB4D3 */

loc_002FBB49: ;
    POP32(esp, ecx);

loc_002FBB4A: ;
    SET_LO8(edx, MEM8(edi + 0x34));
    eax = esi + 0x1E0;
    ecx = MEM32(eax);
    MEM8(ecx) = LO8(edx);
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x1E4) = MEM32(esi + 0x1E4) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x1E4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0x34) = MEM32(edi + 0x34) & 0;
    MEM32(edi + 0x38) = ebx;

loc_002FBB66: ;
    _fa = (uint32_t)(MEM8(edi + 4)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 4), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FBBA7; /* je: equal / zero */

loc_002FBB6B: ;
    _fa = (uint32_t)(MEM8(esi + 0x1E0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x1E0), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FBBA7; /* je: equal / zero */

loc_002FBB74: ;
    eax = MEM32(esi + 0x1E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1DC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x1DC) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002FBB89; /* jl: less (signed <) */

loc_002FBB82: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FBB88u); RECOMP_ABI_CALL(0x002CB4D3u, sub_002CB4D3); /* call 0x002CB4D3 */

loc_002FBB88: ;
    POP32(esp, ecx);

loc_002FBB89: ;
    eax = MEM32(esi + 0x1E0);
    SET_LO8(ecx, MEM8(edi + 0x34));
    MEM8(eax) = LO8(ecx);
    MEM32(esi + 0x1E0) = MEM32(esi + 0x1E0) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x1E0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x1E4) = MEM32(esi + 0x1E4) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x1E4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0x34) = MEM32(edi + 0x34) & 0;
    MEM32(edi + 0x38) = ebx;

loc_002FBBA7: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002FBBAF
 * Original: 0x002FBBAF - 0x002FBDA7 (504 bytes, 191 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FBBAF(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FBBAF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x10;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0x80 (8-bit) */
    PUSH32(esp, edi);
    MEM32(ebp + -8) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_002FBBCD; /* je: equal / zero */

loc_002FBBC8: ;
    MEM32(ebp + -12) = ebx;
    goto loc_002FBBD9;

loc_002FBBCD: ;
    ecx = esi;
    edx = 0; /* xor self */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FBBD6u); RECOMP_ABI_CALL(0x002FB948u, sub_002FB948); /* call 0x002FB948 */

loc_002FBBD6: ;
    MEM32(ebp + -12) = eax;

loc_002FBBD9: ;
    edi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), 0x80 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002FBBEE; /* jne: not equal / not zero */

loc_002FBBE1: ;
    ecx = esi;
    edx = 0; /* xor self */
    eax = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FBBECu); RECOMP_ABI_CALL(0x002FB948u, sub_002FB948); /* call 0x002FB948 */

loc_002FBBEC: ;
    ebx = eax;

loc_002FBBEE: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002FBC1F; /* jae: above or equal (unsigned >=) */

loc_002FBBF2: ;
    SET_LO8(eax, LO8(ebx));
    SET_LO8(eax, LO8(eax) & 7);
    SET_LO8(ecx, 7);
    SET_LO8(ecx, LO8(ecx) - LO8(eax));
    eax = ebx;
    eax = eax >> 3;
    SET_LO8(eax, MEM8(eax + edi));
    SET_LO8(eax, LO8(eax) >> LO8(ecx));
    edx = ebx;
    ecx = esi;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    eax = edi;
    if (TEST_Z(_fa, _fb)) goto loc_002FBC15; /* je: equal / zero */

loc_002FBC0E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FBC13u); RECOMP_ABI_CALL(0x002FB9F7u, sub_002FB9F7); /* call 0x002FB9F7 */

loc_002FBC13: ;
    goto loc_002FBC1A;

loc_002FBC15: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FBC1Au); RECOMP_ABI_CALL(0x002FB948u, sub_002FB948); /* call 0x002FB948 */

loc_002FBC1A: ;
    edi = eax + ebx;
    goto loc_002FBC21;

loc_002FBC1F: ;
    edi = esi;

loc_002FBC21: ;
    edx = MEM32(ebp + -12);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002FBD11; /* jb: below (unsigned <) */

loc_002FBC2C: ;
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFDu (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002FBC60; /* jl: less (signed <) */

loc_002FBC33: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002FBC60; /* jg: greater (signed >) */

loc_002FBC38: ;
    esi = MEM32(ebp + 8);
    eax = ebx + ebx * 2;
    eax = eax << 1;
    ecx = ZX16(MEM16(eax + 0x4117FA));
    eax = ZX16(MEM16(eax + 0x4117FC));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FBC55u); RECOMP_ABI_CALL(0x002FB4ABu, sub_002FB4AB); /* call 0x002FB4AB */

loc_002FBC55: ;
    ebx = MEM32(ebp + -12);
    MEM32(ebp + -8) = ebx;
    goto loc_002FBD22;

loc_002FBC60: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002FBC96; /* jae: above or equal (unsigned >=) */

loc_002FBC64: ;
    SET_LO8(eax, LO8(edx));
    SET_LO8(eax, LO8(eax) & 7);
    SET_LO8(ecx, 7);
    SET_LO8(ecx, LO8(ecx) - LO8(eax));
    eax = MEM32(ebp + 0xC);
    edi = edx;
    edi = edi >> 3;
    SET_LO8(ebx, MEM8(edi + eax));
    SET_LO8(ebx, LO8(ebx) >> LO8(ecx));
    ecx = esi;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FBC87; /* je: equal / zero */

loc_002FBC80: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FBC85u); RECOMP_ABI_CALL(0x002FB9F7u, sub_002FB9F7); /* call 0x002FB9F7 */

loc_002FBC85: ;
    goto loc_002FBC8C;

loc_002FBC87: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FBC8Cu); RECOMP_ABI_CALL(0x002FB948u, sub_002FB948); /* call 0x002FB948 */

loc_002FBC8C: ;
    ecx = MEM32(ebp + -12);
    eax = eax + ecx;
    MEM32(ebp + -16) = eax;
    goto loc_002FBC99;

loc_002FBC96: ;
    MEM32(ebp + -16) = esi;

loc_002FBC99: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FBCA5u); RECOMP_ABI_CALL(0x002FB4ABu, sub_002FB4AB); /* call 0x002FB4AB */

loc_002FBCA5: ;
    ebx = MEM32(ebp + -12);
    eax = MEM32(ebp + -8);
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = ebx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FBCE5; /* je: equal / zero */

loc_002FBCB4: ;
    edi = MEM32(ebp + 0xC);
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) & 7);
    SET_LO8(ecx, 7);
    SET_LO8(ecx, LO8(ecx) - LO8(edx));
    edx = eax;
    edx = edx >> 3;
    SET_LO8(edx, MEM8(edx + edi));
    SET_LO8(edx, LO8(edx) >> LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FBCE5; /* je: equal / zero */

loc_002FBCCF: ;
    ecx = ebx;
    ecx = ecx - eax;
    PUSH32(esp, 0x4112F8);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FBCDEu); RECOMP_ABI_CALL(0x002FB54Bu, sub_002FB54B); /* call 0x002FB54B */

loc_002FBCDE: ;
    PUSH32(esp, 0x411068);
    goto loc_002FBCF9;

loc_002FBCE5: ;
    ecx = ebx;
    ecx = ecx - eax;
    PUSH32(esp, 0x411068);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FBCF4u); RECOMP_ABI_CALL(0x002FB54Bu, sub_002FB54B); /* call 0x002FB54B */

loc_002FBCF4: ;
    PUSH32(esp, 0x4112F8);

loc_002FBCF9: ;
    eax = MEM32(ebp + -16);
    eax = eax - ebx;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FBD04u); RECOMP_ABI_CALL(0x002FB54Bu, sub_002FB54B); /* call 0x002FB54B */

loc_002FBD04: ;
    eax = MEM32(ebp + -16);
    esp = esp + 0x10;
    MEM32(ebp + -8) = eax;
    ebx = eax;
    goto loc_002FBD24;

loc_002FBD11: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FBD1Du); RECOMP_ABI_CALL(0x002FB4ABu, sub_002FB4AB); /* call 0x002FB4AB */

loc_002FBD1D: ;
    MEM32(ebp + -8) = edi;
    ebx = edi;

loc_002FBD22: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_002FBD24: ;
    edi = MEM32(ebp + 0x14);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002FBD9F; /* jae: above or equal (unsigned >=) */

loc_002FBD2B: ;
    esi = MEM32(ebp + 0xC);
    SET_LO8(eax, LO8(ebx));
    SET_LO8(eax, LO8(eax) & 7);
    SET_LO8(ecx, 7);
    SET_LO8(ecx, LO8(ecx) - LO8(eax));
    eax = ebx;
    eax = eax >> 3;
    SET_LO8(eax, MEM8(eax + esi));
    SET_LO8(eax, LO8(eax) >> LO8(ecx));
    edx = ebx;
    ecx = edi;
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(ebp + -1) = LO8(eax);
    eax = esi;
    if ((LO8(eax) == 0)) goto loc_002FBD54; /* je: equal / zero */

loc_002FBD4D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FBD52u); RECOMP_ABI_CALL(0x002FB9F7u, sub_002FB9F7); /* call 0x002FB9F7 */

loc_002FBD52: ;
    goto loc_002FBD59;

loc_002FBD54: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FBD59u); RECOMP_ABI_CALL(0x002FB948u, sub_002FB948); /* call 0x002FB948 */

loc_002FBD59: ;
    eax = eax + ebx;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 0x10);
    edx = ebx;
    ecx = edi;
    if (CMP_NE(_fa, _fb)) goto loc_002FBD72; /* jne: not equal / not zero */

loc_002FBD6B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FBD70u); RECOMP_ABI_CALL(0x002FB9F7u, sub_002FB9F7); /* call 0x002FB9F7 */

loc_002FBD70: ;
    goto loc_002FBD77;

loc_002FBD72: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FBD77u); RECOMP_ABI_CALL(0x002FB948u, sub_002FB948); /* call 0x002FB948 */

loc_002FBD77: ;
    ebx = ebx + eax;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    eax = MEM32(ebp + 0x10);
    edx = ebx;
    ecx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_002FBD8D; /* je: equal / zero */

loc_002FBD86: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FBD8Bu); RECOMP_ABI_CALL(0x002FB9F7u, sub_002FB9F7); /* call 0x002FB9F7 */

loc_002FBD8B: ;
    goto loc_002FBD92;

loc_002FBD8D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FBD92u); RECOMP_ABI_CALL(0x002FB948u, sub_002FB948); /* call 0x002FB948 */

loc_002FBD92: ;
    edi = MEM32(ebp + 0x10);
    esi = MEM32(ebp + 0x14);
    ebx = ebx + eax;
    goto loc_002FBBEE;

loc_002FBD9F: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002FBDA7
 * Original: 0x002FBDA7 - 0x002FBE60 (185 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FBDA7(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FBDA7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x1CC);
    if (CMP_LE(_fas, _fbs)) goto loc_002FBE54; /* jle: less or equal (signed <=) */

loc_002FBDC0: ;
    ebx = MEM32(ebp + 0xC);

loc_002FBDC3: ;
    _fa = (uint32_t)(MEM8(edi + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 4), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002FBDCE; /* jne: not equal / not zero */

loc_002FBDC9: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FBDCEu); RECOMP_ABI_CALL(0x002FB771u, sub_002FB771); /* call 0x002FB771 */

loc_002FBDCE: ;
    _fa = (uint32_t)(MEM8(edi + 0x1C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x1C), 1 (8-bit) */
    PUSH32(esp, MEM32(edi + 0xC));
    if (TEST_Z(_fa, _fb)) goto loc_002FBE2C; /* je: equal / zero */

loc_002FBDD7: ;
    _fa = (uint32_t)(MEM32(edi + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x3C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FBDF4; /* jne: not equal / not zero */

loc_002FBDDD: ;
    PUSH32(esp, ebx);
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FBDE5u); RECOMP_ABI_CALL(0x002FBAA6u, sub_002FBAA6); /* call 0x002FBAA6 */

loc_002FBDE5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_002FBE5C; /* je: equal / zero */

loc_002FBDEB: ;
    MEM32(edi + 0x3C) = 1;
    goto loc_002FBE08;

loc_002FBDF4: ;
    PUSH32(esp, MEM32(edi + 0x40));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FBDFEu); RECOMP_ABI_CALL(0x002FBBAFu, sub_002FBBAF); /* call 0x002FBBAF */

loc_002FBDFE: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FBE5C; /* je: equal / zero */

loc_002FBE05: ;
    MEM32(edi + 0x44) = MEM32(edi + 0x44) - 1;
    _fa = (uint32_t)(MEM32(edi + 0x44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_002FBE08: ;
    _fa = (uint32_t)(MEM32(edi + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x44), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FBE1B; /* jne: not equal / not zero */

loc_002FBE0E: ;
    eax = MEM32(edi + 0x48);
    MEM32(edi + 0x3C) = MEM32(edi + 0x3C) & 0;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi + 0x44) = eax;
    goto loc_002FBE3A;

loc_002FBE1B: ;
    PUSH32(esp, MEM32(edi + 8));
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(edi + 0x40));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FBE27u); RECOMP_ABI_CALL(0x002B8940u, sub_002B8940); /* call 0x002B8940 */

loc_002FBE27: ;
    esp = esp + 0xC;
    goto loc_002FBE3A;

loc_002FBE2C: ;
    PUSH32(esp, ebx);
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FBE34u); RECOMP_ABI_CALL(0x002FBAA6u, sub_002FBAA6); /* call 0x002FBAA6 */

loc_002FBE34: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_002FBE5C; /* je: equal / zero */

loc_002FBE3A: ;
    eax = MEM32(edi + 8);
    ebx = ebx + eax;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - eax;
    if ((MEM32(ebp + 0x10) == 0)) goto loc_002FBE4A; /* je: equal / zero */

loc_002FBE44: ;
    MEM32(esi + 0x164) = MEM32(esi + 0x164) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x164)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002FBE4A: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002FBDC3; /* jg: greater (signed >) */

loc_002FBE54: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002FBE57: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002FBE5C: ;
    eax = 0; /* xor self */
    goto loc_002FBE57;

}

/**
 * sub_002FBE60
 * Original: 0x002FBE60 - 0x002FBEAD (77 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FBE60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FBE60: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x1CC);
    _fa = (uint32_t)(MEM32(edi + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x38), 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FBEA7; /* je: equal / zero */

loc_002FBE72: ;
    eax = MEM32(esi + 0x1E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1DC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x1DC) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002FBE87; /* jl: less (signed <) */

loc_002FBE80: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002FBE86u); RECOMP_ABI_CALL(0x002CB4D3u, sub_002CB4D3); /* call 0x002CB4D3 */

loc_002FBE86: ;
    POP32(esp, ecx);

loc_002FBE87: ;
    SET_LO8(edx, MEM8(edi + 0x34));
    eax = esi + 0x1E0;
    ecx = MEM32(eax);
    MEM8(ecx) = LO8(edx);
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x1E4) = MEM32(esi + 0x1E4) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x1E4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0x34) = MEM32(edi + 0x34) & 0;
    MEM32(edi + 0x38) = 8;

loc_002FBEA7: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002FBEAD
 * Original: 0x002FBEAD - 0x002FBF2A (125 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FBEAD(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002FBEAD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x1CC);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(edi + 4)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 4), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002FBF26; /* jne: not equal / not zero */

loc_002FBEC2: ;
    _fa = (uint32_t)(MEM8(edi + 0x1C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x1C), LO8(ebx) (8-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, 0xC);
    POP32(esp, ebp);
    if (TEST_Z(_fa, _fb)) goto loc_002FBED9; /* je: equal / zero */

loc_002FBECB: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(edi + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x3C), ebx (32-bit) */
    PUSH32(esp, 0xD);
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebp);
    ebx = ebx | 2;

loc_002FBED9: ;
    MEM32(esp + 0x14) = 6;

loc_002FBEE1: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002FBEE8u); RECOMP_ABI_CALL(0x002FB4ABu, sub_002FB4AB); /* call 0x002FB4AB */

loc_002FBEE8: ;
    MEM32(esp + 0x1C) = MEM32(esp + 0x1C) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if ((_fa != 0)) goto loc_002FBEE1; /* jne: not equal / not zero */

loc_002FBEF0: ;
    eax = MEM32(esi + 0x1E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1DC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x1DC) (32-bit) */
    POP32(esp, ebp);
    if (CMP_L(_fas, _fbs)) goto loc_002FBF06; /* jl: less (signed <) */

loc_002FBEFF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002FBF05u); RECOMP_ABI_CALL(0x002CB4D3u, sub_002CB4D3); /* call 0x002CB4D3 */

loc_002FBF05: ;
    POP32(esp, ecx);

loc_002FBF06: ;
    SET_LO8(edx, MEM8(edi + 0x34));
    eax = esi + 0x1E0;
    ecx = MEM32(eax);
    MEM8(ecx) = LO8(edx);
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x1E4) = MEM32(esi + 0x1E4) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x1E4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0x34) = MEM32(edi + 0x34) & 0;
    MEM32(edi + 0x38) = 8;

loc_002FBF26: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002FBF2A
 * Original: 0x002FBF2A - 0x002FBF7A (80 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FBF2A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FBF2A: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x1CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FBF78; /* je: equal / zero */

loc_002FBF39: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FBF43; /* jne: not equal / not zero */

loc_002FBF3E: ;
    eax = MEM32(eax + 0x48);
    goto loc_002FBF46;

loc_002FBF43: ;
    eax = MEM32(eax + 0x40);

loc_002FBF46: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FBF51; /* je: equal / zero */

loc_002FBF4A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002FBF50u); RECOMP_ABI_CALL(0x002B88F0u, sub_002B88F0); /* call 0x002B88F0 */

loc_002FBF50: ;
    POP32(esp, ecx);

loc_002FBF51: ;
    eax = MEM32(esi + 0x1CC);
    eax = MEM32(eax + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FBF65; /* je: equal / zero */

loc_002FBF5E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002FBF64u); RECOMP_ABI_CALL(0x002B88F0u, sub_002B88F0); /* call 0x002B88F0 */

loc_002FBF64: ;
    POP32(esp, ecx);

loc_002FBF65: ;
    PUSH32(esp, MEM32(esi + 0x1CC));
    PUSH32(esp, 0x002FBF70u); RECOMP_ABI_CALL(0x002B88F0u, sub_002B88F0); /* call 0x002B88F0 */

loc_002FBF70: ;
    MEM32(esi + 0x1CC) = MEM32(esi + 0x1CC) & 0;
    POP32(esp, ecx);

loc_002FBF78: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002FBF7A
 * Original: 0x002FBF7A - 0x002FC089 (271 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FBF7A(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FBF7A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x1CC);
    ecx = 0x885C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002FBFF5; /* ja: above (unsigned >) */

loc_002FBF94: ;
    if (CMP_EQ(_fa, _fb)) goto loc_002FBFEB; /* je: equal / zero */

loc_002FBF96: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x124) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x124 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002FC00F; /* jb: below (unsigned <) */

loc_002FBF9E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x125) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x125 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002FBFE1; /* jbe: below or equal (unsigned <=) */

loc_002FBFA6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x146) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x146 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FBFD7; /* je: equal / zero */

loc_002FBFAE: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x147) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x147 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FBFCB; /* je: equal / zero */

loc_002FBFB6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x148) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x148 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FC00F; /* jne: not equal / not zero */

loc_002FBFBE: ;
    ecx = MEM32(ebp + 0x10);
    ecx = MEM32(ecx);
    MEM32(eax + 0x14) = ecx;
    goto loc_002FC052;

loc_002FBFCB: ;
    ecx = MEM32(ebp + 0x10);
    SET_LO16(ecx, MEM16(ecx));
    MEM16(eax + 0x10) = LO16(ecx);
    goto loc_002FC052;

loc_002FBFD7: ;
    ecx = MEM32(ebp + 0x10);
    ecx = MEM32(ecx);
    MEM32(eax + 0x18) = ecx;
    goto loc_002FC052;

loc_002FBFE1: ;
    ecx = MEM32(ebp + 0x10);
    ecx = MEM32(ecx);
    MEM32(eax + 0x1C) = ecx;
    goto loc_002FC052;

loc_002FBFEB: ;
    ecx = MEM32(ebp + 0x10);
    ecx = MEM32(ecx);
    MEM32(eax + 0x20) = ecx;
    goto loc_002FC052;

loc_002FBFF5: ;
    ecx = ebx;
    ecx = ecx - 0x885D;
    if ((ecx == 0)) goto loc_002FC042; /* je: equal / zero */

loc_002FBFFF: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002FC038; /* je: equal / zero */

loc_002FC002: ;
    ecx = ecx - 0x77A2;
    if ((ecx == 0)) goto loc_002FC02E; /* je: equal / zero */

loc_002FC00A: ;
    ecx = ecx - 4;
    if ((ecx == 0)) goto loc_002FC01C; /* je: equal / zero */

loc_002FC00F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x002FC017u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002FC017: ;
    esp = esp + 0xC;
    goto loc_002FC085;

loc_002FC01C: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FC029; /* jne: not equal / not zero */

loc_002FC021: ;
    ecx = MEM32(ebp + 0x10);
    ecx = MEM32(ecx);
    MEM32(eax + 0x44) = ecx;

loc_002FC029: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_002FC085;

loc_002FC02E: ;
    ecx = MEM32(ebp + 0x10);
    ecx = MEM32(ecx);
    MEM32(eax + 4) = ecx;
    goto loc_002FC029;

loc_002FC038: ;
    ecx = MEM32(ebp + 0x10);
    ecx = MEM32(ecx);
    MEM32(eax + 0x28) = ecx;
    goto loc_002FC052;

loc_002FC042: ;
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, MEM32(ecx));
    eax = eax + 0x24;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FC050u); RECOMP_ABI_CALL(0x002C86EFu, sub_002C86EF); /* call 0x002C86EF */

loc_002FC050: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_002FC052: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FC05Au); RECOMP_ABI_CALL(0x002CF2EFu, sub_002CF2EF); /* call 0x002CF2EF */

loc_002FC05A: ;
    eax = ZX16(MEM16(eax + 0xC));
    eax = eax >> 5;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edi = esi + eax * 4 + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FC06Cu); RECOMP_ABI_CALL(0x002CF2EFu, sub_002CF2EF); /* call 0x002CF2EF */

loc_002FC06C: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax + 0xC));
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = eax;
    esp = esp + 0x10;
    ecx = ecx & 0x1F;
    edx = edx << LO8(ecx);
    MEM32(edi) = MEM32(edi) | edx;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | 8;
    POP32(esp, edi);

loc_002FC085: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002FC089
 * Original: 0x002FC089 - 0x002FC139 (176 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FC089(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FC089: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x1CC);
    ecx = 0x885C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002FC0EE; /* ja: above (unsigned >) */

loc_002FC0A2: ;
    if (CMP_EQ(_fa, _fb)) goto loc_002FC0E9; /* je: equal / zero */

loc_002FC0A4: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x124) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x124 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002FC108; /* jb: below (unsigned <) */

loc_002FC0AC: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x125) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x125 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002FC0E4; /* jbe: below or equal (unsigned <=) */

loc_002FC0B4: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x146) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x146 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FC0DF; /* je: equal / zero */

loc_002FC0BC: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x147) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x147 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FC0D1; /* je: equal / zero */

loc_002FC0C4: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x148) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x148 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FC108; /* jne: not equal / not zero */

loc_002FC0CC: ;
    eax = MEM32(eax + 0x14);
    goto loc_002FC12C;

loc_002FC0D1: ;
    ecx = MEM32(ebp + 0x10);
    ecx = MEM32(ecx);
    SET_LO16(eax, MEM16(eax + 0x10));
    MEM16(ecx) = LO16(eax);
    goto loc_002FC133;

loc_002FC0DF: ;
    eax = MEM32(eax + 0x18);
    goto loc_002FC12C;

loc_002FC0E4: ;
    eax = MEM32(eax + 0x1C);
    goto loc_002FC12C;

loc_002FC0E9: ;
    eax = MEM32(eax + 0x20);
    goto loc_002FC12C;

loc_002FC0EE: ;
    ecx = edx;
    ecx = ecx - 0x885D;
    if ((ecx == 0)) goto loc_002FC129; /* je: equal / zero */

loc_002FC0F8: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002FC124; /* je: equal / zero */

loc_002FC0FB: ;
    ecx = ecx - 0x77A2;
    if ((ecx == 0)) goto loc_002FC11F; /* je: equal / zero */

loc_002FC103: ;
    ecx = ecx - 4;
    if ((ecx == 0)) goto loc_002FC115; /* je: equal / zero */

loc_002FC108: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x002FC110u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002FC110: ;
    esp = esp + 0xC;
    goto loc_002FC136;

loc_002FC115: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FC133; /* jne: not equal / not zero */

loc_002FC11A: ;
    eax = MEM32(eax + 0x44);
    goto loc_002FC12C;

loc_002FC11F: ;
    eax = MEM32(eax + 4);
    goto loc_002FC12C;

loc_002FC124: ;
    eax = MEM32(eax + 0x28);
    goto loc_002FC12C;

loc_002FC129: ;
    eax = MEM32(eax + 0x24);

loc_002FC12C: ;
    ecx = MEM32(ebp + 0x10);
    ecx = MEM32(ecx);
    MEM32(ecx) = eax;

loc_002FC133: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002FC136: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002FC139
 * Original: 0x002FC139 - 0x002FC2B3 (378 bytes, 129 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FC139(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002FC139: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(MEM8(ebx + 0x20)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x20), 0x20 (8-bit) */
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x1CC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    if (TEST_Z(_fa, _fb)) goto loc_002FC1EB; /* je: equal / zero */

loc_002FC154: ;
    _fa = (uint32_t)(MEM16(ebx + 0x44)) & 0xFFFFu; _fb = (uint32_t)(4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 0x44), 4 (16-bit) */
    PUSH32(esp, ebp);
    ebp = 0x3CB044;
    MEM32(esp + 0x14) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_002FC17B; /* jne: not equal / not zero */

loc_002FC165: ;
    PUSH32(esp, 0x411C8C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002FC170u); RECOMP_ABI_CALL(0x00344289u, sub_00344289); /* call 0x00344289 */

loc_002FC170: ;
    _fa = (uint32_t)(MEM8(esi + 0x1C)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x1C), 2 (8-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_002FC1D7; /* je: equal / zero */

loc_002FC178: ;
    PUSH32(esp, ebp);
    goto loc_002FC1C9;

loc_002FC17B: ;
    PUSH32(esp, 0x411C78);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002FC186u); RECOMP_ABI_CALL(0x00344289u, sub_00344289); /* call 0x00344289 */

loc_002FC186: ;
    _fa = (uint32_t)(MEM8(esi + 0x1C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x1C), 1 (8-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_002FC1A4; /* je: equal / zero */

loc_002FC18E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x411C68);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002FC19Au); RECOMP_ABI_CALL(0x00344289u, sub_00344289); /* call 0x00344289 */

loc_002FC19A: ;
    esp = esp + 0xC;
    eax = 0x411C64;
    goto loc_002FC1A8;

loc_002FC1A4: ;
    eax = MEM32(esp + 0x14);

loc_002FC1A8: ;
    _fa = (uint32_t)(MEM8(esi + 0x1C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x1C), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FC1C2; /* je: equal / zero */

loc_002FC1AE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x411C54);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002FC1BAu); RECOMP_ABI_CALL(0x00344289u, sub_00344289); /* call 0x00344289 */

loc_002FC1BA: ;
    esp = esp + 0xC;
    eax = 0x411C64;

loc_002FC1C2: ;
    _fa = (uint32_t)(MEM8(esi + 0x1C)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x1C), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FC1D7; /* je: equal / zero */

loc_002FC1C8: ;
    PUSH32(esp, eax);

loc_002FC1C9: ;
    PUSH32(esp, 0x411C40);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002FC1D4u); RECOMP_ABI_CALL(0x00344289u, sub_00344289); /* call 0x00344289 */

loc_002FC1D4: ;
    esp = esp + 0xC;

loc_002FC1D7: ;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x411C30);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002FC1E7u); RECOMP_ABI_CALL(0x00344289u, sub_00344289); /* call 0x00344289 */

loc_002FC1E7: ;
    esp = esp + 0x10;
    POP32(esp, ebp);

loc_002FC1EB: ;
    _fa = (uint32_t)(MEM8(ebx + 0x20)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x20), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FC23C; /* je: equal / zero */

loc_002FC1F1: ;
    PUSH32(esp, 0x411C24);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002FC1FCu); RECOMP_ABI_CALL(0x00344289u, sub_00344289); /* call 0x00344289 */

loc_002FC1FC: ;
    eax = ZX16(MEM16(esi + 0x10));
    eax = eax - 0;
    POP32(esp, ecx);
    POP32(esp, ecx);
    if ((eax == 0)) goto loc_002FC21B; /* je: equal / zero */

loc_002FC207: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002FC214; /* je: equal / zero */

loc_002FC20A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002FC228; /* jne: not equal / not zero */

loc_002FC20D: ;
    PUSH32(esp, 0x411C10);
    goto loc_002FC220;

loc_002FC214: ;
    PUSH32(esp, 0x411BF8);
    goto loc_002FC220;

loc_002FC21B: ;
    PUSH32(esp, 0x411BF0);

loc_002FC220: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002FC226u); RECOMP_ABI_CALL(0x00344289u, sub_00344289); /* call 0x00344289 */

loc_002FC226: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_002FC228: ;
    eax = ZX16(MEM16(esi + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x411BE0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002FC239u); RECOMP_ABI_CALL(0x00344289u, sub_00344289); /* call 0x00344289 */

loc_002FC239: ;
    esp = esp + 0x10;

loc_002FC23C: ;
    _fa = (uint32_t)(MEM8(ebx + 0x1F)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x1F), 0x80 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FC253; /* je: equal / zero */

loc_002FC242: ;
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, 0x411BC8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002FC250u); RECOMP_ABI_CALL(0x00344289u, sub_00344289); /* call 0x00344289 */

loc_002FC250: ;
    esp = esp + 0xC;

loc_002FC253: ;
    _fa = (uint32_t)(MEM8(ebx + 0x20)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x20), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FC26A; /* je: equal / zero */

loc_002FC259: ;
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, 0x411BA4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002FC267u); RECOMP_ABI_CALL(0x00344289u, sub_00344289); /* call 0x00344289 */

loc_002FC267: ;
    esp = esp + 0xC;

loc_002FC26A: ;
    _fa = (uint32_t)(MEM8(ebx + 0x20)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x20), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FC281; /* je: equal / zero */

loc_002FC270: ;
    PUSH32(esp, MEM32(esi + 0x20));
    PUSH32(esp, 0x411B80);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002FC27Eu); RECOMP_ABI_CALL(0x00344289u, sub_00344289); /* call 0x00344289 */

loc_002FC27E: ;
    esp = esp + 0xC;

loc_002FC281: ;
    _fa = (uint32_t)(MEM8(ebx + 0x20)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x20), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FC298; /* je: equal / zero */

loc_002FC287: ;
    PUSH32(esp, MEM32(esi + 0x24));
    PUSH32(esp, 0x411B68);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002FC295u); RECOMP_ABI_CALL(0x00344289u, sub_00344289); /* call 0x00344289 */

loc_002FC295: ;
    esp = esp + 0xC;

loc_002FC298: ;
    _fa = (uint32_t)(MEM8(ebx + 0x20)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x20), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FC2AF; /* je: equal / zero */

loc_002FC29E: ;
    PUSH32(esp, MEM32(esi + 0x28));
    PUSH32(esp, 0x411B48);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002FC2ACu); RECOMP_ABI_CALL(0x00344289u, sub_00344289); /* call 0x00344289 */

loc_002FC2AC: ;
    esp = esp + 0xC;

loc_002FC2AF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002FC2B3
 * Original: 0x002FC2B3 - 0x002FC3D9 (294 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FC2B3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FC2B3: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_002FC2C0; /* jne: not equal / not zero */

loc_002FC2BC: ;
    PUSH32(esp, 0x54);
    goto loc_002FC2C2;

loc_002FC2C0: ;
    PUSH32(esp, 0x4C);

loc_002FC2C2: ;
    PUSH32(esp, 0x002FC2C7u); RECOMP_ABI_CALL(0x002B88E0u, sub_002B88E0); /* call 0x002B88E0 */

loc_002FC2C7: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    POP32(esp, ecx);
    MEM32(esi + 0x1CC) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002FC2EF; /* jne: not equal / not zero */

loc_002FC2D4: ;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x411CB4);
    PUSH32(esp, 0x411CA0);
    PUSH32(esp, 0x002FC2E5u); RECOMP_ABI_CALL(0x002CED88u, sub_002CED88); /* call 0x002CED88 */

loc_002FC2E5: ;
    esp = esp + 0xC;
    eax = 0; /* xor self */
    goto loc_002FC3D6;

loc_002FC2EF: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x411818);
    PUSH32(esp, esi);
    MEM32(edi) = eax;
    PUSH32(esp, 0x002FC301u); RECOMP_ABI_CALL(0x002CF1A8u, sub_002CF1A8); /* call 0x002CF1A8 */

loc_002FC301: ;
    eax = esi + 0x220;
    ecx = MEM32(eax);
    MEM32(edi + 0x2C) = ecx;
    MEM32(eax) = 0x2FC089;
    eax = esi + 0x21C;
    ecx = MEM32(eax);
    MEM32(edi + 0x30) = ecx;
    MEM32(eax) = 0x2FBF7A;
    MEM32(esi + 0x224) = 0x2FC139;
    esp = esp + 0xC;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    MEM32(edi + 0x1C) = ebx;
    MEM32(edi + 0x20) = ebx;
    MEM32(edi + 0x24) = ebx;
    eax = MEM32(esi + 0x1CC);
    if (CMP_NE(_fa, _fb)) goto loc_002FC35F; /* jne: not equal / not zero */

loc_002FC343: ;
    MEM8(esi + 0xD) = MEM8(esi + 0xD) | 1;
    PUSH32(esp, 0x2FB1AD);
    PUSH32(esp, 0x10004);
    PUSH32(esp, esi);
    MEM32(eax + 0x48) = ebx;
    PUSH32(esp, 0x002FC35Au); RECOMP_ABI_CALL(0x002C9DE5u, sub_002C9DE5); /* call 0x002C9DE5 */

loc_002FC35A: ;
    esp = esp + 0xC;
    goto loc_002FC362;

loc_002FC35F: ;
    MEM32(eax + 0x40) = ebx;

loc_002FC362: ;
    eax = 0x2FA196;
    MEM32(esi + 0x1A0) = eax;
    MEM32(esi + 0x1A8) = eax;
    MEM32(esi + 0x1B0) = eax;
    eax = 0x2FBDA7;
    MEM32(esi + 0x1A4) = eax;
    MEM32(esi + 0x1AC) = eax;
    MEM32(esi + 0x1B4) = eax;
    ecx = 0x2FB395;
    eax = 0; /* xor self */
    MEM32(esi + 0x18C) = ecx;
    MEM32(esi + 0x190) = 0x2FA0E7;
    MEM32(esi + 0x194) = ecx;
    MEM32(esi + 0x198) = 0x2FB8D8;
    MEM32(esi + 0x19C) = 0x2FBE60;
    MEM32(esi + 0x1B8) = 0x2FBEAD;
    MEM32(esi + 0x1C0) = 0x2FBF2A;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002FC3D6: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002FC3D9
 * Original: 0x002FC3D9 - 0x002FC40A (49 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FC3D9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FC3D9: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x002FC3E3u); RECOMP_ABI_CALL(0x002FC2B3u, sub_002FC2B3); /* call 0x002FC2B3 */

loc_002FC3E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FC406; /* je: equal / zero */

loc_002FC3E7: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x4118E0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002FC3F4u); RECOMP_ABI_CALL(0x002CF1A8u, sub_002CF1A8); /* call 0x002CF1A8 */

loc_002FC3F4: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x10000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002FC401u); RECOMP_ABI_CALL(0x002C9DE5u, sub_002C9DE5); /* call 0x002C9DE5 */

loc_002FC401: ;
    esp = esp + 0x18;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002FC406: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002FC40A
 * Original: 0x002FC40A - 0x002FCBF4 (2026 bytes, 711 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FC40A(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FC40A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x30;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx + 0x1E0);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x1CC);
    eax = MEM32(ebx + 0xC);
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebx + 0x34);
    MEM32(ebp + -36) = eax;
    eax = MEM32(ebx + 0x38);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebx + 0x3C);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebx + 0x40);
    MEM32(ebp + -48) = eax;
    eax = MEM32(ecx + 0x1E4);
    eax = eax + edx;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -44) = ebx;
    MEM32(ebp + -16) = edx;
    MEM32(ebp + -32) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_002FCAB2; /* jle: less or equal (signed <=) */

loc_002FC45B: ;
    ecx = MEM32(ebx + 0x4C);
    eax = MEM32(ecx);
    esi = MEM32(ebx + 0x50);
    edi = 0; /* xor self */
    ecx = ecx + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -20) (32-bit) */
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -40) = esi;
    MEM32(ebp + -28) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_002FC9FB; /* jge: greater or equal (signed >=) */

loc_002FC47A: ;
    MEM32(ebp + -24) = MEM32(ebp + -24) & edi;

loc_002FC47D: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 7 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FC4B8; /* jge: greater or equal (signed >=) */

loc_002FC483: ;
    edx = MEM32(ebp + -16);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + -32) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002FC49E; /* jb: below (unsigned <) */

loc_002FC48B: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FCAE6; /* je: equal / zero */

loc_002FC495: ;
    MEM32(ebp + -8) = 7;
    goto loc_002FC4B8;

loc_002FC49E: ;
    ecx = ZX8(MEM8(edx));
    ebx = MEM32(ebp + -36);
    ebx = ZX8(MEM8(ecx + ebx));
    ecx = MEM32(ebp + -8);
    ebx = ebx << LO8(ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) | ebx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = MEM32(ebp + -8) + 8;
    MEM32(ebp + -16) = edx;

loc_002FC4B8: ;
    edx = MEM32(ebp + -4);
    edx = edx & 0x7F;
    edx = edx * 8 + 0x412388;
    ecx = ZX8(MEM8(edx + 1));
    MEM32(ebp + -8) = MEM32(ebp + -8) - ecx;
    MEM32(ebp + -4) = MEM32(ebp + -4) >> LO8(ecx);
    ecx = ZX8(MEM8(edx));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002FC882; /* je: equal / zero */

loc_002FC4D9: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002FC5BD; /* je: equal / zero */

loc_002FC4E0: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002FC580; /* je: equal / zero */

loc_002FC4E7: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002FC53B; /* je: equal / zero */

loc_002FC4EA: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002FC8CD; /* jne: not equal / not zero */

loc_002FC4F1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -40) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FC512; /* je: equal / zero */

loc_002FC4F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002FC512; /* jg: greater (signed >) */

loc_002FC4FA: ;
    ecx = MEM32(ebp + -28);

loc_002FC4FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -20) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FC515; /* jge: greater or equal (signed >=) */

loc_002FC502: ;
    ebx = MEM32(ecx + 4);
    ebx = ebx + MEM32(ecx);
    ecx = ecx + 8;
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002FC4FD; /* jle: less or equal (signed <=) */

loc_002FC510: ;
    goto loc_002FC515;

loc_002FC512: ;
    ecx = MEM32(ebp + -28);

loc_002FC515: ;
    MEM32(ebp + -24) = MEM32(ebp + -24) + 4;
    ebx = eax;
    ebx = ebx - MEM32(edx + 4);
    ecx = ecx - 4;
    ebx = ebx - edi;
    ebx = ebx + MEM32(ebp + -12);
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    MEM32(esi) = ebx;
    edi = eax;
    edi = edi - MEM32(edx + 4);
    esi = esi + 4;
    eax = eax - MEM32(ecx);
    goto loc_002FC8B9;

loc_002FC53B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -40) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FC55C; /* je: equal / zero */

loc_002FC540: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002FC55C; /* jg: greater (signed >) */

loc_002FC544: ;
    ecx = MEM32(ebp + -28);

loc_002FC547: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -20) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FC55F; /* jge: greater or equal (signed >=) */

loc_002FC54C: ;
    ebx = MEM32(ecx + 4);
    ebx = ebx + MEM32(ecx);
    ecx = ecx + 8;
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002FC547; /* jle: less or equal (signed <=) */

loc_002FC55A: ;
    goto loc_002FC55F;

loc_002FC55C: ;
    ecx = MEM32(ebp + -28);

loc_002FC55F: ;
    ebx = MEM32(edx + 4);
    MEM32(ebp + -24) = MEM32(ebp + -24) + 4;
    ebx = ebx - edi;
    ebx = ebx + eax;
    ebx = ebx + MEM32(ebp + -12);
    MEM32(esi) = ebx;
    edi = MEM32(edx + 4);
    esi = esi + 4;
    edi = edi + eax;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    goto loc_002FC8B4;

loc_002FC580: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -40) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FC5A1; /* je: equal / zero */

loc_002FC585: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002FC5A1; /* jg: greater (signed >) */

loc_002FC589: ;
    ecx = MEM32(ebp + -28);

loc_002FC58C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -20) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FC5A4; /* jge: greater or equal (signed >=) */

loc_002FC591: ;
    edx = MEM32(ecx + 4);
    edx = edx + MEM32(ecx);
    ecx = ecx + 8;
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002FC58C; /* jle: less or equal (signed <=) */

loc_002FC59F: ;
    goto loc_002FC5A4;

loc_002FC5A1: ;
    ecx = MEM32(ebp + -28);

loc_002FC5A4: ;
    MEM32(ebp + -24) = MEM32(ebp + -24) + 4;
    edx = eax;
    edx = edx - edi;
    edx = edx + MEM32(ebp + -12);
    MEM32(esi) = edx;
    esi = esi + 4;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    goto loc_002FC8B2;

loc_002FC5BD: ;
    _fa = (uint32_t)(MEM8(ebp + -24)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -24), 4 (8-bit) */
    ecx = MEM32(ebp + -8);
    if (TEST_Z(_fa, _fb)) goto loc_002FC70B; /* je: equal / zero */

loc_002FC5CA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xD (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FC619; /* jge: greater or equal (signed >=) */

loc_002FC5CF: ;
    edx = MEM32(ebp + -16);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + -32) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002FC5E4; /* jb: below (unsigned <) */

loc_002FC5D7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FCAE3; /* je: equal / zero */

loc_002FC5DF: ;
    PUSH32(esp, 0xD);
    POP32(esp, ecx);
    goto loc_002FC619;

loc_002FC5E4: ;
    edx = ZX8(MEM8(edx));
    ebx = MEM32(ebp + -36);
    edx = ZX8(MEM8(edx + ebx));
    edx = edx << LO8(ecx);
    ecx = ecx + 8;
    MEM32(ebp + -4) = MEM32(ebp + -4) | edx;
    edx = MEM32(ebp + -16);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xD (32-bit) */
    MEM32(ebp + -16) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_002FC619; /* jge: greater or equal (signed >=) */

loc_002FC602: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + -32) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002FC5DF; /* jae: above or equal (unsigned >=) */

loc_002FC607: ;
    edx = ZX8(MEM8(edx));
    edx = ZX8(MEM8(edx + ebx));
    edx = edx << LO8(ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) | edx;
    MEM32(ebp + -16) = MEM32(ebp + -16) + 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 8;

loc_002FC619: ;
    edx = MEM32(ebp + -4);
    edx = edx & 0x1FFF;
    edx = edx * 8 + 0x41A788;
    ebx = ZX8(MEM8(edx + 1));
    ecx = ecx - ebx;
    MEM32(ebp + -8) = ecx;
    ecx = ebx;
    MEM32(ebp + -4) = MEM32(ebp + -4) >> LO8(ecx);
    SET_LO8(ecx, MEM8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 8 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FC660; /* je: equal / zero */

loc_002FC63E: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 9 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002FC96E; /* jbe: below or equal (unsigned <=) */

loc_002FC647: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xB (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002FC96E; /* ja: above (unsigned >) */

loc_002FC650: ;
    edx = MEM32(edx + 4);
    ecx = MEM32(ebp + -8);
    edi = edi + edx;
    MEM32(ebp + -12) = MEM32(ebp + -12) + edx;
    goto loc_002FC5CA;

loc_002FC660: ;
    ecx = MEM32(edx + 4);
    ecx = ecx + MEM32(ebp + -12);
    MEM32(ebp + -24) = MEM32(ebp + -24) + 4;
    MEM32(esi) = ecx;
    edi = edi + MEM32(edx + 4);
    esi = esi + 4;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;

loc_002FC676: ;
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FC6C8; /* jge: greater or equal (signed >=) */

loc_002FC67E: ;
    edx = MEM32(ebp + -16);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + -32) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002FC693; /* jb: below (unsigned <) */

loc_002FC686: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FCAE3; /* je: equal / zero */

loc_002FC68E: ;
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    goto loc_002FC6C8;

loc_002FC693: ;
    edx = ZX8(MEM8(edx));
    ebx = MEM32(ebp + -36);
    edx = ZX8(MEM8(edx + ebx));
    edx = edx << LO8(ecx);
    ecx = ecx + 8;
    MEM32(ebp + -4) = MEM32(ebp + -4) | edx;
    edx = MEM32(ebp + -16);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC (32-bit) */
    MEM32(ebp + -16) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_002FC6C8; /* jge: greater or equal (signed >=) */

loc_002FC6B1: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + -32) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002FC68E; /* jae: above or equal (unsigned >=) */

loc_002FC6B6: ;
    edx = ZX8(MEM8(edx));
    edx = ZX8(MEM8(edx + ebx));
    edx = edx << LO8(ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) | edx;
    MEM32(ebp + -16) = MEM32(ebp + -16) + 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 8;

loc_002FC6C8: ;
    edx = MEM32(ebp + -4);
    edx = edx & 0xFFF;
    edx = edx * 8 + 0x412788;
    ebx = ZX8(MEM8(edx + 1));
    ecx = ecx - ebx;
    MEM32(ebp + -8) = ecx;
    ecx = ebx;
    MEM32(ebp + -4) = MEM32(ebp + -4) >> LO8(ecx);
    ecx = ZX8(MEM8(edx));
    ecx = ecx - 7;
    if ((ecx == 0)) goto loc_002FC848; /* je: equal / zero */

loc_002FC6F2: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002FC6FE; /* je: equal / zero */

loc_002FC6F6: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002FC96E; /* jne: not equal / not zero */

loc_002FC6FE: ;
    edx = MEM32(edx + 4);
    edi = edi + edx;
    MEM32(ebp + -12) = MEM32(ebp + -12) + edx;
    goto loc_002FC676;

loc_002FC70B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FC75A; /* jge: greater or equal (signed >=) */

loc_002FC710: ;
    edx = MEM32(ebp + -16);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + -32) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002FC725; /* jb: below (unsigned <) */

loc_002FC718: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FCAE3; /* je: equal / zero */

loc_002FC720: ;
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    goto loc_002FC75A;

loc_002FC725: ;
    edx = ZX8(MEM8(edx));
    ebx = MEM32(ebp + -36);
    edx = ZX8(MEM8(edx + ebx));
    edx = edx << LO8(ecx);
    ecx = ecx + 8;
    MEM32(ebp + -4) = MEM32(ebp + -4) | edx;
    edx = MEM32(ebp + -16);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC (32-bit) */
    MEM32(ebp + -16) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_002FC75A; /* jge: greater or equal (signed >=) */

loc_002FC743: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + -32) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002FC720; /* jae: above or equal (unsigned >=) */

loc_002FC748: ;
    edx = ZX8(MEM8(edx));
    edx = ZX8(MEM8(edx + ebx));
    edx = edx << LO8(ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) | edx;
    MEM32(ebp + -16) = MEM32(ebp + -16) + 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 8;

loc_002FC75A: ;
    edx = MEM32(ebp + -4);
    edx = edx & 0xFFF;
    edx = edx * 8 + 0x412788;
    ebx = ZX8(MEM8(edx + 1));
    ecx = ecx - ebx;
    MEM32(ebp + -8) = ecx;
    ecx = ebx;
    MEM32(ebp + -4) = MEM32(ebp + -4) >> LO8(ecx);
    ecx = ZX8(MEM8(edx));
    ecx = ecx - 7;
    if ((ecx == 0)) goto loc_002FC79C; /* je: equal / zero */

loc_002FC780: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002FC78C; /* je: equal / zero */

loc_002FC784: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002FC96E; /* jne: not equal / not zero */

loc_002FC78C: ;
    edx = MEM32(edx + 4);
    ecx = MEM32(ebp + -8);
    edi = edi + edx;
    MEM32(ebp + -12) = MEM32(ebp + -12) + edx;
    goto loc_002FC70B;

loc_002FC79C: ;
    ecx = MEM32(edx + 4);
    ecx = ecx + MEM32(ebp + -12);
    MEM32(ebp + -24) = MEM32(ebp + -24) + 4;
    MEM32(esi) = ecx;
    edi = edi + MEM32(edx + 4);
    esi = esi + 4;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;

loc_002FC7B2: ;
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xD (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FC804; /* jge: greater or equal (signed >=) */

loc_002FC7BA: ;
    edx = MEM32(ebp + -16);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + -32) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002FC7CF; /* jb: below (unsigned <) */

loc_002FC7C2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FCAE3; /* je: equal / zero */

loc_002FC7CA: ;
    PUSH32(esp, 0xD);
    POP32(esp, ecx);
    goto loc_002FC804;

loc_002FC7CF: ;
    edx = ZX8(MEM8(edx));
    ebx = MEM32(ebp + -36);
    edx = ZX8(MEM8(edx + ebx));
    edx = edx << LO8(ecx);
    ecx = ecx + 8;
    MEM32(ebp + -4) = MEM32(ebp + -4) | edx;
    edx = MEM32(ebp + -16);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xD (32-bit) */
    MEM32(ebp + -16) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_002FC804; /* jge: greater or equal (signed >=) */

loc_002FC7ED: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + -32) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002FC7CA; /* jae: above or equal (unsigned >=) */

loc_002FC7F2: ;
    edx = ZX8(MEM8(edx));
    edx = ZX8(MEM8(edx + ebx));
    edx = edx << LO8(ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) | edx;
    MEM32(ebp + -16) = MEM32(ebp + -16) + 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 8;

loc_002FC804: ;
    edx = MEM32(ebp + -4);
    edx = edx & 0x1FFF;
    edx = edx * 8 + 0x41A788;
    ebx = ZX8(MEM8(edx + 1));
    ecx = ecx - ebx;
    MEM32(ebp + -8) = ecx;
    ecx = ebx;
    MEM32(ebp + -4) = MEM32(ebp + -4) >> LO8(ecx);
    SET_LO8(ecx, MEM8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 8 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FC848; /* je: equal / zero */

loc_002FC829: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 9 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002FC96E; /* jbe: below or equal (unsigned <=) */

loc_002FC832: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xB (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002FC96E; /* ja: above (unsigned >) */

loc_002FC83B: ;
    edx = MEM32(edx + 4);
    edi = edi + edx;
    MEM32(ebp + -12) = MEM32(ebp + -12) + edx;
    goto loc_002FC7B2;

loc_002FC848: ;
    ecx = MEM32(edx + 4);
    ecx = ecx + MEM32(ebp + -12);
    MEM32(ebp + -24) = MEM32(ebp + -24) + 4;
    MEM32(esi) = ecx;
    edi = edi + MEM32(edx + 4);
    esi = esi + 4;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -40) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FC8BC; /* je: equal / zero */

loc_002FC863: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002FC8BC; /* jg: greater (signed >) */

loc_002FC867: ;
    ecx = MEM32(ebp + -28);

loc_002FC86A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -20) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FC8BC; /* jge: greater or equal (signed >=) */

loc_002FC86F: ;
    edx = MEM32(ecx + 4);
    edx = edx + MEM32(ecx);
    ecx = ecx + 8;
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -28) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_002FC86A; /* jle: less or equal (signed <=) */

loc_002FC880: ;
    goto loc_002FC8BC;

loc_002FC882: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -40) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FC8A3; /* je: equal / zero */

loc_002FC887: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002FC8A3; /* jg: greater (signed >) */

loc_002FC88B: ;
    ecx = MEM32(ebp + -28);

loc_002FC88E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -20) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FC8A6; /* jge: greater or equal (signed >=) */

loc_002FC893: ;
    edx = MEM32(ecx + 4);
    edx = edx + MEM32(ecx);
    ecx = ecx + 8;
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002FC88E; /* jle: less or equal (signed <=) */

loc_002FC8A1: ;
    goto loc_002FC8A6;

loc_002FC8A3: ;
    ecx = MEM32(ebp + -28);

loc_002FC8A6: ;
    eax = eax + MEM32(ecx);
    ecx = ecx + 4;
    edx = eax;
    edx = edx - edi;
    MEM32(ebp + -12) = MEM32(ebp + -12) + edx;

loc_002FC8B2: ;
    edi = eax;

loc_002FC8B4: ;
    eax = eax + MEM32(ecx);
    ecx = ecx + 4;

loc_002FC8B9: ;
    MEM32(ebp + -28) = ecx;

loc_002FC8BC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -20) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FC980; /* jge: greater or equal (signed >=) */

loc_002FC8C5: ;
    ebx = MEM32(ebp + -44);
    goto loc_002FC47D;

loc_002FC8CD: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002FC944; /* je: equal / zero */

loc_002FC8D0: ;
    ecx = ecx - 6;
    if ((ecx != 0)) goto loc_002FC96E; /* jne: not equal / not zero */

loc_002FC8D9: ;
    eax = MEM32(ebp + -20);
    eax = eax - edi;
    PUSH32(esp, 4);
    POP32(esp, ebx);
    MEM32(esi) = eax;
    esi = esi + ebx;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FC91B; /* jge: greater or equal (signed >=) */

loc_002FC8EA: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -32) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002FC901; /* jb: below (unsigned <) */

loc_002FC8F2: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FCAE3; /* je: equal / zero */

loc_002FC8FC: ;
    MEM32(ebp + -8) = ebx;
    goto loc_002FC91B;

loc_002FC901: ;
    ecx = ZX8(MEM8(eax));
    edx = MEM32(ebp + -36);
    edx = ZX8(MEM8(ecx + edx));
    ecx = MEM32(ebp + -8);
    edx = edx << LO8(ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) | edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = MEM32(ebp + -8) + 8;
    MEM32(ebp + -16) = eax;

loc_002FC91B: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 0xF (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FC931; /* je: equal / zero */

loc_002FC921: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x411908);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FC92Fu); RECOMP_ABI_CALL(0x002FA12Au, sub_002FA12A); /* call 0x002FA12A */

loc_002FC92F: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_002FC931: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) - ebx;
    MEM32(ebp + -4) = MEM32(ebp + -4) >> 4;
    MEM32(ebp + -48) = 1;
    goto loc_002FC9DE;

loc_002FC944: ;
    eax = MEM32(ebp + -20);
    eax = eax - edi;
    MEM32(esi) = eax;
    eax = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(eax + 0x164));
    esi = esi + 4;
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, 0x4119E4);
    PUSH32(esp, 0x411908);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FC969u); RECOMP_ABI_CALL(0x002CED88u, sub_002CED88); /* call 0x002CED88 */

loc_002FC969: ;
    esp = esp + 0x14;
    goto loc_002FC9DE;

loc_002FC96E: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x411908);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FC97Cu); RECOMP_ABI_CALL(0x002FA12Au, sub_002FA12A); /* call 0x002FA12A */

loc_002FC97C: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_002FC9DE;

loc_002FC980: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FC9F5; /* je: equal / zero */

loc_002FC987: ;
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -20) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FC9D2; /* jge: greater or equal (signed >=) */

loc_002FC98E: ;
    ecx = MEM32(ebp + -8);
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FC9C6; /* jge: greater or equal (signed >=) */

loc_002FC998: ;
    edx = MEM32(ebp + -16);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + -32) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002FC9AD; /* jb: below (unsigned <) */

loc_002FC9A0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FCAE3; /* je: equal / zero */

loc_002FC9A8: ;
    MEM32(ebp + -8) = eax;
    goto loc_002FC9C6;

loc_002FC9AD: ;
    eax = ZX8(MEM8(edx));
    ebx = MEM32(ebp + -36);
    eax = ZX8(MEM8(eax + ebx));
    eax = eax << LO8(ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) | eax;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 8;
    MEM32(ebp + -16) = edx;
    MEM32(ebp + -8) = ecx;

loc_002FC9C6: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FC96E; /* je: equal / zero */

loc_002FC9CC: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -4) = MEM32(ebp + -4) >> 1;

loc_002FC9D2: ;
    eax = MEM32(ebp + -12);
    MEM32(esi) = eax;
    esi = esi + 4;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;

loc_002FC9DE: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    ebx = MEM32(ebp + -44);
    if (CMP_EQ(_fa, _fb)) goto loc_002FC9F8; /* je: equal / zero */

loc_002FC9E7: ;
    eax = MEM32(ebp + -12);
    MEM32(esi) = eax;
    esi = esi + 4;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    goto loc_002FC9F8;

loc_002FC9F5: ;
    ebx = MEM32(ebp + -44);

loc_002FC9F8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -20) (32-bit) */

loc_002FC9FB: ;
    if (CMP_EQ(_fa, _fb)) goto loc_002FCA66; /* je: equal / zero */

loc_002FC9FD: ;
    edx = MEM32(ebp + -20);
    eax = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x411908);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FCA0Eu); RECOMP_ABI_CALL(0x002FA148u, sub_002FA148); /* call 0x002FA148 */

loc_002FCA0E: ;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_LE(_fas, _fbs)) goto loc_002FCA25; /* jle: less or equal (signed <=) */

loc_002FCA17: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -40) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002FCA25; /* jbe: below or equal (unsigned <=) */

loc_002FCA1C: ;
    esi = esi - 4;
    edi = edi - MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002FCA17; /* jg: greater (signed >) */

loc_002FCA25: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FCA50; /* jge: greater or equal (signed >=) */

loc_002FCA29: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_002FCA2F; /* jge: greater or equal (signed >=) */

loc_002FCA2D: ;
    edi = 0; /* xor self */

loc_002FCA2F: ;
    ecx = esi;
    ecx = ecx - MEM32(ebp + -40);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FCA45; /* je: equal / zero */

loc_002FCA39: ;
    ecx = MEM32(ebp + -12);
    MEM32(esi) = ecx;
    esi = esi + 4;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;

loc_002FCA45: ;
    ecx = MEM32(ebp + -12);
    ecx = ecx - edi;
    ecx = ecx + eax;
    MEM32(esi) = ecx;
    goto loc_002FCA5F;

loc_002FCA50: ;
    if (CMP_LE(_fas, _fbs)) goto loc_002FCA66; /* jle: less or equal (signed <=) */

loc_002FCA52: ;
    ecx = MEM32(ebp + -12);
    ecx = ecx + eax;
    MEM32(esi) = ecx;
    esi = esi + 4;
    MEM32(esi) = MEM32(esi) & 0;

loc_002FCA5F: ;
    esi = esi + 4;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;

loc_002FCA66: ;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FCB6C; /* jne: not equal / not zero */

loc_002FCA70: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -40));
    PUSH32(esp, MEM32(ebp + 0xC));
    { uint32_t _icall_target = MEM32(ebx + 0x44); PUSH32(esp, 0x002FCA7Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002FCA7D: ;
    eax = MEM32(ebp + -12);
    MEM32(esi) = eax;
    eax = MEM32(ebx + 0x50);
    ecx = MEM32(ebx + 0x4C);
    MEM32(ebx + 0x4C) = eax;
    eax = MEM32(ebx + 8);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + eax;
    esp = esp + 0x10;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - eax;
    MEM32(ebx + 0x50) = ecx;
    if ((MEM32(ebp + 0x10) == 0)) goto loc_002FCAA5; /* je: equal / zero */

loc_002FCA9C: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x164) = MEM32(eax + 0x164) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x164)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002FCAA5: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002FC45B; /* jg: greater (signed >) */

loc_002FCAAF: ;
    ecx = MEM32(ebp + 8);

loc_002FCAB2: ;
    eax = MEM32(ebp + -8);
    MEM32(ebx + 0x3C) = eax;
    eax = MEM32(ebp + -4);
    MEM32(ebx + 0x38) = eax;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002FCAC1: ;
    edx = MEM32(ebp + -48);
    MEM32(ebx + 0x40) = edx;
    esi = MEM32(ecx + 0x1E0);
    edx = MEM32(ebp + -16);
    esi = esi - edx;
    MEM32(ecx + 0x1E4) = MEM32(ecx + 0x1E4) + esi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 0x1E0) = edx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_002FCAE3: ;
    ebx = MEM32(ebp + -44);

loc_002FCAE6: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x411908);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FCAF4u); RECOMP_ABI_CALL(0x002FA178u, sub_002FA178); /* call 0x002FA178 */

loc_002FCAF4: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_002FCB08; /* je: equal / zero */

loc_002FCAFC: ;
    eax = MEM32(ebp + -12);
    MEM32(esi) = eax;
    esi = esi + 4;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;

loc_002FCB08: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -20) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FCB6C; /* je: equal / zero */

loc_002FCB0D: ;
    edx = MEM32(ebp + -20);
    eax = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x411908);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FCB1Eu); RECOMP_ABI_CALL(0x002FA148u, sub_002FA148); /* call 0x002FA148 */

loc_002FCB1E: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = MEM32(ebp + -20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002FCB35; /* jle: less or equal (signed <=) */

loc_002FCB27: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -40) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002FCB35; /* jbe: below or equal (unsigned <=) */

loc_002FCB2C: ;
    esi = esi - 4;
    edi = edi - MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002FCB27; /* jg: greater (signed >) */

loc_002FCB35: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FCB5A; /* jge: greater or equal (signed >=) */

loc_002FCB39: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_002FCB3F; /* jge: greater or equal (signed >=) */

loc_002FCB3D: ;
    edi = 0; /* xor self */

loc_002FCB3F: ;
    eax = esi;
    eax = eax - MEM32(ebp + -40);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    eax = MEM32(ebp + -12);
    if (TEST_Z(_fa, _fb)) goto loc_002FCB52; /* je: equal / zero */

loc_002FCB4B: ;
    MEM32(esi) = eax;
    esi = esi + 4;
    eax = 0; /* xor self */

loc_002FCB52: ;
    eax = eax - edi;
    eax = eax + ecx;
    MEM32(esi) = eax;
    goto loc_002FCB69;

loc_002FCB5A: ;
    if (CMP_LE(_fas, _fbs)) goto loc_002FCB6C; /* jle: less or equal (signed <=) */

loc_002FCB5C: ;
    eax = MEM32(ebp + -12);
    eax = eax + ecx;
    MEM32(esi) = eax;
    esi = esi + 4;
    MEM32(esi) = MEM32(esi) & 0;

loc_002FCB69: ;
    esi = esi + 4;

loc_002FCB6C: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, 0xD);
    POP32(esp, edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FCBC7; /* jge: greater or equal (signed >=) */

loc_002FCB76: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -32) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002FCB87; /* jb: below (unsigned <) */

loc_002FCB7E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FCBC7; /* je: equal / zero */

loc_002FCB82: ;
    MEM32(ebp + -8) = edx;
    goto loc_002FCBC7;

loc_002FCB87: ;
    edi = ZX8(MEM8(eax));
    edx = MEM32(ebp + -36);
    edi = ZX8(MEM8(edi + edx));
    MEM32(ebp + -8) = MEM32(ebp + -8) + 8;
    edi = edi << LO8(ecx);
    PUSH32(esp, 0xD);
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) | edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), ecx (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_002FCBC7; /* jge: greater or equal (signed >=) */

loc_002FCBA6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -32) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002FCBB0; /* jb: below (unsigned <) */

loc_002FCBAB: ;
    MEM32(ebp + -8) = ecx;
    goto loc_002FCBC7;

loc_002FCBB0: ;
    ecx = ZX8(MEM8(eax));
    edx = ZX8(MEM8(ecx + edx));
    ecx = MEM32(ebp + -8);
    edx = edx << LO8(ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) | edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = MEM32(ebp + -8) + 8;
    MEM32(ebp + -16) = eax;

loc_002FCBC7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -40));
    PUSH32(esp, MEM32(ebp + 0xC));
    { uint32_t _icall_target = MEM32(ebx + 0x44); PUSH32(esp, 0x002FCBD4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002FCBD4: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + 8);
    eax = eax + 0xFFFFFFF3u;
    MEM32(ebx + 0x3C) = eax;
    eax = MEM32(ebp + -4);
    eax = eax >> 0xD;
    esp = esp + 0x10;
    MEM32(ebx + 0x38) = eax;
    eax = eax | 0xFFFFFFFFu;
    goto loc_002FCAC1;

}

/**
 * sub_002FCBF4
 * Original: 0x002FCBF4 - 0x002FCC4D (89 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FCBF4(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FCBF4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = MEM32(edi + 0x1CC);
    goto loc_002FCC3C;

loc_002FCC04: ;
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, MEM32(esi + 0x40));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FCC13u); RECOMP_ABI_CALL(0x002FBBAFu, sub_002FBBAF); /* call 0x002FBBAF */

loc_002FCC13: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FCC49; /* je: equal / zero */

loc_002FCC1A: ;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(esi + 0x40));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FCC28u); RECOMP_ABI_CALL(0x002B8940u, sub_002B8940); /* call 0x002B8940 */

loc_002FCC28: ;
    eax = MEM32(esi + 8);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + eax;
    esp = esp + 0xC;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - eax;
    if ((MEM32(ebp + 0x10) == 0)) goto loc_002FCC3C; /* je: equal / zero */

loc_002FCC36: ;
    MEM32(edi + 0x164) = MEM32(edi + 0x164) + 1;
    _fa = (uint32_t)(MEM32(edi + 0x164)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002FCC3C: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002FCC04; /* jg: greater (signed >) */

loc_002FCC42: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002FCC45: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002FCC49: ;
    eax = 0; /* xor self */
    goto loc_002FCC45;

}

/**
 * sub_002FCC4D
 * Original: 0x002FCC4D - 0x002FCCAF (98 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FCC4D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FCC4D: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x1CC);
    PUSH32(esp, 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x002FCC62u); RECOMP_ABI_CALL(0x002FB4ABu, sub_002FB4AB); /* call 0x002FB4AB */

loc_002FCC62: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x002FCC6Bu); RECOMP_ABI_CALL(0x002FB4ABu, sub_002FB4AB); /* call 0x002FB4AB */

loc_002FCC6B: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(MEM32(edi + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x38), 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FCCA9; /* je: equal / zero */

loc_002FCC74: ;
    eax = MEM32(esi + 0x1E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1DC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x1DC) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002FCC89; /* jl: less (signed <) */

loc_002FCC82: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002FCC88u); RECOMP_ABI_CALL(0x002CB4D3u, sub_002CB4D3); /* call 0x002CB4D3 */

loc_002FCC88: ;
    POP32(esp, ecx);

loc_002FCC89: ;
    SET_LO8(edx, MEM8(edi + 0x34));
    eax = esi + 0x1E0;
    ecx = MEM32(eax);
    MEM8(ecx) = LO8(edx);
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x1E4) = MEM32(esi + 0x1E4) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x1E4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0x34) = MEM32(edi + 0x34) & 0;
    MEM32(edi + 0x38) = 8;

loc_002FCCA9: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002FCCAF
 * Original: 0x002FCCAF - 0x002FCD18 (105 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FCCAF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FCCAF: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x002FCCB9u); RECOMP_ABI_CALL(0x002FC2B3u, sub_002FC2B3); /* call 0x002FC2B3 */

loc_002FCCB9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FCD14; /* je: equal / zero */

loc_002FCCBD: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x4118F4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002FCCCAu); RECOMP_ABI_CALL(0x002CF1A8u, sub_002CF1A8); /* call 0x002CF1A8 */

loc_002FCCCA: ;
    eax = 0x2FC40A;
    PUSH32(esp, 1);
    MEM32(esi + 0x1A0) = eax;
    MEM32(esi + 0x1A8) = eax;
    MEM32(esi + 0x1B0) = eax;
    eax = 0x2FCBF4;
    PUSH32(esp, 0x10000);
    PUSH32(esp, esi);
    MEM32(esi + 0x1A4) = eax;
    MEM32(esi + 0x1AC) = eax;
    MEM32(esi + 0x1B4) = eax;
    MEM32(esi + 0x19C) = 0x2FCC4D;
    PUSH32(esp, 0x002FCD0Fu); RECOMP_ABI_CALL(0x002C9DE5u, sub_002C9DE5); /* call 0x002C9DE5 */

loc_002FCD0F: ;
    esp = esp + 0x18;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002FCD14: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002FCD18
 * Original: 0x002FCD18 - 0x002FD0D8 (960 bytes, 337 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FCD18(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FCD18: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x2C;
    eax = MEM32(ebp + 8);
    edx = MEM32(eax + 0x1E0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x1CC);
    ecx = MEM32(esi + 0xC);
    MEM32(ebp + -20) = ecx;
    ecx = MEM32(esi + 0x34);
    MEM32(ebp + -32) = ecx;
    ecx = MEM32(esi + 4);
    MEM32(ebp + -40) = ecx;
    ecx = MEM32(esi + 0x38);
    MEM32(ebp + -8) = ecx;
    ecx = MEM32(esi + 0x3C);
    MEM32(ebp + -4) = ecx;
    ecx = MEM32(esi + 0x40);
    MEM32(ebp + -36) = ecx;
    ecx = MEM32(eax + 0x1E4);
    ecx = ecx + edx;
    MEM32(ebp + -28) = ecx;
    ecx = MEM32(esi + 0x50);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = edx;
    MEM32(ebp + -24) = ecx;
    goto loc_002FCFFF;

loc_002FCD6D: ;
    edi = MEM32(ebp + -24);
    ebx = 0; /* xor self */
    MEM32(ebp + -12) = ebx;
    goto loc_002FCD7A;

loc_002FCD77: ;
    eax = MEM32(ebp + 8);

loc_002FCD7A: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0xC (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FCDDC; /* jge: greater or equal (signed >=) */

loc_002FCD80: ;
    ecx = MEM32(ebp + -16);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -28) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002FCD9B; /* jb: below (unsigned <) */

loc_002FCD88: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FD03C; /* je: equal / zero */

loc_002FCD92: ;
    MEM32(ebp + -4) = 0xC;
    goto loc_002FCDDC;

loc_002FCD9B: ;
    ecx = ZX8(MEM8(ecx));
    edx = MEM32(ebp + -32);
    edx = ZX8(MEM8(ecx + edx));
    ecx = MEM32(ebp + -4);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 8;
    edx = edx << LO8(ecx);
    ecx = MEM32(ebp + -16);
    MEM32(ebp + -8) = MEM32(ebp + -8) | edx;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0xC (32-bit) */
    MEM32(ebp + -16) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_002FCDDC; /* jge: greater or equal (signed >=) */

loc_002FCDBE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -28) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002FCD92; /* jae: above or equal (unsigned >=) */

loc_002FCDC3: ;
    ecx = ZX8(MEM8(ecx));
    edx = MEM32(ebp + -32);
    edx = ZX8(MEM8(ecx + edx));
    ecx = MEM32(ebp + -4);
    edx = edx << LO8(ecx);
    MEM32(ebp + -8) = MEM32(ebp + -8) | edx;
    MEM32(ebp + -16) = MEM32(ebp + -16) + 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 8;

loc_002FCDDC: ;
    ecx = MEM32(ebp + -8);
    ecx = ecx & 0xFFF;
    ecx = ecx * 8 + 0x412788;
    MEM32(ebp + -44) = ecx;
    ecx = ZX8(MEM8(ecx + 1));
    MEM32(ebp + -4) = MEM32(ebp + -4) - ecx;
    MEM32(ebp + -8) = MEM32(ebp + -8) >> LO8(ecx);
    ecx = MEM32(ebp + -44);
    edx = ZX8(MEM8(ecx));
    edx = edx - 7;
    if ((edx == 0)) goto loc_002FCE1D; /* je: equal / zero */

loc_002FCE04: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002FCE10; /* je: equal / zero */

loc_002FCE08: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002FCF03; /* jne: not equal / not zero */

loc_002FCE10: ;
    ecx = MEM32(ecx + 4);
    ebx = ebx + ecx;
    MEM32(ebp + -12) = MEM32(ebp + -12) + ecx;
    goto loc_002FCD7A;

loc_002FCE1D: ;
    edx = MEM32(ecx + 4);
    edx = edx + MEM32(ebp + -12);
    MEM32(edi) = edx;
    ebx = ebx + MEM32(ecx + 4);
    edi = edi + 4;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + -20) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FCF35; /* jge: greater or equal (signed >=) */

loc_002FCE38: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0xD (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FCE98; /* jge: greater or equal (signed >=) */

loc_002FCE3E: ;
    ecx = MEM32(ebp + -16);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -28) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002FCE59; /* jb: below (unsigned <) */

loc_002FCE46: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FD03C; /* je: equal / zero */

loc_002FCE50: ;
    MEM32(ebp + -4) = 0xD;
    goto loc_002FCE98;

loc_002FCE59: ;
    ecx = ZX8(MEM8(ecx));
    eax = MEM32(ebp + -32);
    edx = ZX8(MEM8(ecx + eax));
    ecx = MEM32(ebp + -4);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 8;
    edx = edx << LO8(ecx);
    MEM32(ebp + -8) = MEM32(ebp + -8) | edx;
    edx = MEM32(ebp + -16);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0xD (32-bit) */
    MEM32(ebp + -16) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_002FCE98; /* jge: greater or equal (signed >=) */

loc_002FCE7C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + -28) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002FCE50; /* jae: above or equal (unsigned >=) */

loc_002FCE81: ;
    ecx = ZX8(MEM8(edx));
    eax = ZX8(MEM8(ecx + eax));
    ecx = MEM32(ebp + -4);
    eax = eax << LO8(ecx);
    MEM32(ebp + -8) = MEM32(ebp + -8) | eax;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 8;
    MEM32(ebp + -16) = edx;

loc_002FCE98: ;
    edx = MEM32(ebp + -8);
    edx = edx & 0x1FFF;
    edx = edx * 8 + 0x41A788;
    ecx = ZX8(MEM8(edx + 1));
    SET_LO8(eax, MEM8(edx));
    MEM32(ebp + -4) = MEM32(ebp + -4) - ecx;
    MEM32(ebp + -8) = MEM32(ebp + -8) >> LO8(ecx);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 8 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FCED0; /* je: equal / zero */

loc_002FCEB8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 9 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002FCF15; /* jbe: below or equal (unsigned <=) */

loc_002FCEBC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002FCF08; /* ja: above (unsigned >) */

loc_002FCEC0: ;
    edx = MEM32(edx + 4);
    eax = MEM32(ebp + 8);
    ebx = ebx + edx;
    MEM32(ebp + -12) = MEM32(ebp + -12) + edx;
    goto loc_002FCE38;

loc_002FCED0: ;
    eax = MEM32(edx + 4);
    eax = eax + MEM32(ebp + -12);
    MEM32(edi) = eax;
    ebx = ebx + MEM32(edx + 4);
    edi = edi + 4;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + -20) (32-bit) */
    MEM32(ebp + -12) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_002FCF35; /* jge: greater or equal (signed >=) */

loc_002FCEE8: ;
    _fa = (uint32_t)(MEM32(edi + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + -4), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FCD77; /* jne: not equal / not zero */

loc_002FCEF1: ;
    eax = edi + -8;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FCD77; /* jne: not equal / not zero */

loc_002FCEFC: ;
    edi = eax;
    goto loc_002FCD77;

loc_002FCF03: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002FCF18; /* jne: not equal / not zero */

loc_002FCF06: ;
    goto loc_002FCF0C;

loc_002FCF08: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xC (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FCF15; /* jne: not equal / not zero */

loc_002FCF0C: ;
    MEM32(ebp + -36) = 1;
    goto loc_002FCF25;

loc_002FCF15: ;
    eax = MEM32(ebp + 8);

loc_002FCF18: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x411914);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FCF23u); RECOMP_ABI_CALL(0x002FA12Au, sub_002FA12A); /* call 0x002FA12A */

loc_002FCF23: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_002FCF25: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FCF35; /* je: equal / zero */

loc_002FCF2C: ;
    MEM32(edi) = eax;
    edi = edi + 4;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;

loc_002FCF35: ;
    edx = MEM32(ebp + -20);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FCF99; /* je: equal / zero */

loc_002FCF3C: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x411914);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FCF4Au); RECOMP_ABI_CALL(0x002FA148u, sub_002FA148); /* call 0x002FA148 */

loc_002FCF4A: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = MEM32(ebp + -20);
    goto loc_002FCF5B;

loc_002FCF51: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -24) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002FCF5F; /* jbe: below or equal (unsigned <=) */

loc_002FCF56: ;
    edi = edi - 4;
    ebx = ebx - MEM32(edi);

loc_002FCF5B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002FCF51; /* jg: greater (signed >) */

loc_002FCF5F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FCF84; /* jge: greater or equal (signed >=) */

loc_002FCF63: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_002FCF69; /* jge: greater or equal (signed >=) */

loc_002FCF67: ;
    ebx = 0; /* xor self */

loc_002FCF69: ;
    eax = edi;
    eax = eax - MEM32(ebp + -24);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    eax = MEM32(ebp + -12);
    if (TEST_Z(_fa, _fb)) goto loc_002FCF7C; /* je: equal / zero */

loc_002FCF75: ;
    MEM32(edi) = eax;
    edi = edi + 4;
    eax = 0; /* xor self */

loc_002FCF7C: ;
    eax = eax - ebx;
    eax = eax + ecx;
    MEM32(edi) = eax;
    goto loc_002FCF96;

loc_002FCF84: ;
    if (CMP_LE(_fas, _fbs)) goto loc_002FCF99; /* jle: less or equal (signed <=) */

loc_002FCF86: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + -20);
    eax = eax + ecx;
    MEM32(edi) = eax;
    edi = edi + 4;
    MEM32(edi) = MEM32(edi) & 0;

loc_002FCF96: ;
    edi = edi + 4;

loc_002FCF99: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, MEM32(ebp + 0xC));
    { uint32_t _icall_target = MEM32(esi + 0x44); PUSH32(esp, 0x002FCFA6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002FCFA6: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(MEM8(ebp + -40)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -40), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FCFC2; /* je: equal / zero */

loc_002FCFAF: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(ebp + -4);
    eax = eax & 0xFFFFFFF8u;
    ecx = ecx - eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) - ecx;
    MEM32(ebp + -8) = MEM32(ebp + -8) >> LO8(ecx);
    goto loc_002FCFE8;

loc_002FCFC2: ;
    _fa = (uint32_t)(MEM8(ebp + -40)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -40), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FCFE8; /* je: equal / zero */

loc_002FCFC8: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(ebp + -4);
    eax = eax & 0xFFFFFFF0u;
    ecx = ecx - eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) - ecx;
    MEM32(ebp + -8) = MEM32(ebp + -8) >> LO8(ecx);
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FCFE8; /* jne: not equal / not zero */

loc_002FCFDF: ;
    _fa = (uint32_t)(MEM8(ebp + -16)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -16), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FCFE8; /* je: equal / zero */

loc_002FCFE5: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) + 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002FCFE8: ;
    eax = MEM32(esi + 8);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + eax;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - eax;
    if ((MEM32(ebp + 0x10) == 0)) goto loc_002FCFFC; /* je: equal / zero */

loc_002FCFF3: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x164) = MEM32(eax + 0x164) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x164)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002FCFFC: ;
    eax = MEM32(ebp + 8);

loc_002FCFFF: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002FCD6D; /* jg: greater (signed >) */

loc_002FD009: ;
    ecx = 0; /* xor self */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002FD00C: ;
    edx = MEM32(ebp + -4);
    MEM32(esi + 0x3C) = edx;
    edx = MEM32(ebp + -8);
    MEM32(esi + 0x38) = edx;
    edx = MEM32(ebp + -36);
    MEM32(esi + 0x40) = edx;
    esi = MEM32(eax + 0x1E0);
    edx = MEM32(ebp + -16);
    esi = esi - edx;
    MEM32(eax + 0x1E4) = MEM32(eax + 0x1E4) + esi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + 0x1E0) = edx;
    eax = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_002FD03C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x411914);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FD047u); RECOMP_ABI_CALL(0x002FA178u, sub_002FA178); /* call 0x002FA178 */

loc_002FD047: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_002FD059; /* je: equal / zero */

loc_002FD050: ;
    MEM32(edi) = eax;
    edi = edi + 4;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;

loc_002FD059: ;
    edx = MEM32(ebp + -20);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FD0BD; /* je: equal / zero */

loc_002FD060: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x411914);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FD06Eu); RECOMP_ABI_CALL(0x002FA148u, sub_002FA148); /* call 0x002FA148 */

loc_002FD06E: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = MEM32(ebp + -20);
    goto loc_002FD07F;

loc_002FD075: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -24) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002FD083; /* jbe: below or equal (unsigned <=) */

loc_002FD07A: ;
    edi = edi - 4;
    ebx = ebx - MEM32(edi);

loc_002FD07F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002FD075; /* jg: greater (signed >) */

loc_002FD083: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FD0A8; /* jge: greater or equal (signed >=) */

loc_002FD087: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_002FD08D; /* jge: greater or equal (signed >=) */

loc_002FD08B: ;
    ebx = 0; /* xor self */

loc_002FD08D: ;
    eax = edi;
    eax = eax - MEM32(ebp + -24);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    eax = MEM32(ebp + -12);
    if (TEST_Z(_fa, _fb)) goto loc_002FD0A0; /* je: equal / zero */

loc_002FD099: ;
    MEM32(edi) = eax;
    edi = edi + 4;
    eax = 0; /* xor self */

loc_002FD0A0: ;
    eax = eax - ebx;
    eax = eax + ecx;
    MEM32(edi) = eax;
    goto loc_002FD0BA;

loc_002FD0A8: ;
    if (CMP_LE(_fas, _fbs)) goto loc_002FD0BD; /* jle: less or equal (signed <=) */

loc_002FD0AA: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + -20);
    eax = eax + ecx;
    MEM32(edi) = eax;
    edi = edi + 4;
    MEM32(edi) = MEM32(edi) & 0;

loc_002FD0BA: ;
    edi = edi + 4;

loc_002FD0BD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, MEM32(ebp + 0xC));
    { uint32_t _icall_target = MEM32(esi + 0x44); PUSH32(esp, 0x002FD0CAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002FD0CA: ;
    eax = MEM32(ebp + 8);
    esp = esp + 0x10;
    ecx = ecx | 0xFFFFFFFFu;
    goto loc_002FD00C;

}

/**
 * sub_002FD0D8
 * Original: 0x002FD0D8 - 0x002FD113 (59 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FD0D8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FD0D8: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x002FD0E2u); RECOMP_ABI_CALL(0x002FC2B3u, sub_002FC2B3); /* call 0x002FC2B3 */

loc_002FD0E2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FD10F; /* je: equal / zero */

loc_002FD0E6: ;
    PUSH32(esp, 7);
    eax = 0x2FCD18;
    PUSH32(esp, 0x10000);
    PUSH32(esp, esi);
    MEM32(esi + 0x1A0) = eax;
    MEM32(esi + 0x1A8) = eax;
    MEM32(esi + 0x1B0) = eax;
    PUSH32(esp, 0x002FD10Au); RECOMP_ABI_CALL(0x002C9DE5u, sub_002C9DE5); /* call 0x002C9DE5 */

loc_002FD10A: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002FD10F: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002FD113
 * Original: 0x002FD113 - 0x002FD14E (59 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FD113(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FD113: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x002FD11Du); RECOMP_ABI_CALL(0x002FC2B3u, sub_002FC2B3); /* call 0x002FC2B3 */

loc_002FD11D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FD14A; /* je: equal / zero */

loc_002FD121: ;
    PUSH32(esp, 0xB);
    eax = 0x2FCD18;
    PUSH32(esp, 0x10000);
    PUSH32(esp, esi);
    MEM32(esi + 0x1A0) = eax;
    MEM32(esi + 0x1A8) = eax;
    MEM32(esi + 0x1B0) = eax;
    PUSH32(esp, 0x002FD145u); RECOMP_ABI_CALL(0x002C9DE5u, sub_002C9DE5); /* call 0x002C9DE5 */

loc_002FD145: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002FD14A: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002FD14E
 * Original: 0x002FD14E - 0x002FD191 (67 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FD14E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_002FD14E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC8;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi);
    ecx = ebp + -200;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x002FD168u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002FD168: ;
    eax = ebp + -200;
    PUSH32(esp, eax);
    PUSH32(esp, 0x411D68);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FD179u); RECOMP_ABI_CALL(0x002CED88u, sub_002CED88); /* call 0x002CED88 */

loc_002FD179: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FD17Fu); RECOMP_ABI_CALL(0x002CC4F0u, sub_002CC4F0); /* call 0x002CC4F0 */

loc_002FD17F: ;
    esp = esp + 0x14;
    PUSH32(esp, 1);
    esi = esi + 0x234;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    if (!recomp_guest_longjmp(MEM32(esp), MEM32(esp + 4))) { PUSH32(esp, 0x002FD190u); sub_003450D0(); } /* longjmp 0x003450D0 */

loc_002FD190: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_002FD191
 * Original: 0x002FD191 - 0x002FD1C0 (47 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FD191(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_002FD191: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC8;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    edx = ebp + -200;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0xC); PUSH32(esp, 0x002FD1AAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002FD1AA: ;
    eax = ebp + -200;
    PUSH32(esp, eax);
    PUSH32(esp, 0x411D68);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FD1BBu); RECOMP_ABI_CALL(0x002CF351u, sub_002CF351); /* call 0x002CF351 */

loc_002FD1BB: ;
    esp = esp + 0x10;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002FD1C0
 * Original: 0x002FD1C0 - 0x002FD218 (88 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FD1C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FD1C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = esi + 0x1B0;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FD1D4u); RECOMP_ABI_CALL(0x002CE3AAu, sub_002CE3AA); /* call 0x002CE3AA */

loc_002FD1D4: ;
    MEM32(esi) = eax;
    MEM32(esi + 0x1B8) = 0x2FD191;
    esi = esi + 0x234;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    MEM32(edi) = 0x2FD14E;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    { int _sjv = setjmp(*recomp_setjmp_slot(MEM32(esp))); if (_sjv) { ebp = g_seh_ebp; eax = (uint32_t)_sjv; } else { PUSH32(esp, 0x002FD1F4u); sub_00344B18(); } } /* setjmp 0x00344B18 */

loc_002FD1F4: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FD1FF; /* je: equal / zero */

loc_002FD1FB: ;
    eax = 0; /* xor self */
    goto loc_002FD214;

loc_002FD1FF: ;
    PUSH32(esp, 0x168);
    PUSH32(esp, 0x3E);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FD20Eu); RECOMP_ABI_CALL(0x002CE3F6u, sub_002CE3F6); /* call 0x002CE3F6 */

loc_002FD20E: ;
    eax = 0; /* xor self */
    esp = esp + 0xC;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002FD214: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002FD218
 * Original: 0x002FD218 - 0x002FD270 (88 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FD218(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FD218: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = esi + 0x1B0;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FD22Cu); RECOMP_ABI_CALL(0x002CE3AAu, sub_002CE3AA); /* call 0x002CE3AA */

loc_002FD22C: ;
    MEM32(esi) = eax;
    MEM32(esi + 0x1B8) = 0x2FD191;
    esi = esi + 0x234;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    MEM32(edi) = 0x2FD14E;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    { int _sjv = setjmp(*recomp_setjmp_slot(MEM32(esp))); if (_sjv) { ebp = g_seh_ebp; eax = (uint32_t)_sjv; } else { PUSH32(esp, 0x002FD24Cu); sub_00344B18(); } } /* setjmp 0x00344B18 */

loc_002FD24C: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FD257; /* je: equal / zero */

loc_002FD253: ;
    eax = 0; /* xor self */
    goto loc_002FD26C;

loc_002FD257: ;
    PUSH32(esp, 0x1B0);
    PUSH32(esp, 0x3E);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FD266u); RECOMP_ABI_CALL(0x002CDB34u, sub_002CDB34); /* call 0x002CDB34 */

loc_002FD266: ;
    eax = 0; /* xor self */
    esp = esp + 0xC;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002FD26C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002FD270
 * Original: 0x002FD270 - 0x002FD29B (43 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FD270(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FD270: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = eax + 0x234;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    { int _sjv = setjmp(*recomp_setjmp_slot(MEM32(esp))); if (_sjv) { ebp = g_seh_ebp; eax = (uint32_t)_sjv; } else { PUSH32(esp, 0x002FD283u); sub_00344B18(); } } /* setjmp 0x00344B18 */

loc_002FD283: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_002FD28D; /* je: equal / zero */

loc_002FD289: ;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002FD28D: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FD295u); RECOMP_ABI_CALL(0x002CEC59u, sub_002CEC59); /* call 0x002CEC59 */

loc_002FD295: ;
    eax = 0; /* xor self */
    POP32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002FD29B
 * Original: 0x002FD29B - 0x002FD2CA (47 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FD29B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FD29B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = eax + 0x234;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    { int _sjv = setjmp(*recomp_setjmp_slot(MEM32(esp))); if (_sjv) { ebp = g_seh_ebp; eax = (uint32_t)_sjv; } else { PUSH32(esp, 0x002FD2AEu); sub_00344B18(); } } /* setjmp 0x00344B18 */

loc_002FD2AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_002FD2B8; /* je: equal / zero */

loc_002FD2B4: ;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002FD2B8: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FD2C3u); RECOMP_ABI_CALL(0x002CE988u, sub_002CE988); /* call 0x002CE988 */

loc_002FD2C3: ;
    POP32(esp, ecx);
    eax = 0; /* xor self */
    POP32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002FD2CA
 * Original: 0x002FD2CA - 0x002FD2FD (51 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FD2CA(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FD2CA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = eax + 0x234;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    { int _sjv = setjmp(*recomp_setjmp_slot(MEM32(esp))); if (_sjv) { ebp = g_seh_ebp; eax = (uint32_t)_sjv; } else { PUSH32(esp, 0x002FD2DDu); sub_00344B18(); } } /* setjmp 0x00344B18 */

loc_002FD2DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_002FD2E7; /* je: equal / zero */

loc_002FD2E3: ;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002FD2E7: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FD2F5u); RECOMP_ABI_CALL(0x002CE8FFu, sub_002CE8FF); /* call 0x002CE8FF */

loc_002FD2F5: ;
    eax = 0; /* xor self */
    esp = esp + 0xC;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002FD2FD
 * Original: 0x002FD2FD - 0x002FD32C (47 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FD2FD(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FD2FD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = eax + 0x234;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    { int _sjv = setjmp(*recomp_setjmp_slot(MEM32(esp))); if (_sjv) { ebp = g_seh_ebp; eax = (uint32_t)_sjv; } else { PUSH32(esp, 0x002FD310u); sub_00344B18(); } } /* setjmp 0x00344B18 */

loc_002FD310: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_002FD31A; /* je: equal / zero */

loc_002FD316: ;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002FD31A: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FD325u); RECOMP_ABI_CALL(0x002CE4AFu, sub_002CE4AF); /* call 0x002CE4AF */

loc_002FD325: ;
    POP32(esp, ecx);
    eax = 0; /* xor self */
    POP32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002FD32C
 * Original: 0x002FD32C - 0x002FD35B (47 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FD32C(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FD32C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = eax + 0x234;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    { int _sjv = setjmp(*recomp_setjmp_slot(MEM32(esp))); if (_sjv) { ebp = g_seh_ebp; eax = (uint32_t)_sjv; } else { PUSH32(esp, 0x002FD33Fu); sub_00344B18(); } } /* setjmp 0x00344B18 */

loc_002FD33F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_002FD349; /* je: equal / zero */

loc_002FD345: ;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002FD349: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FD354u); RECOMP_ABI_CALL(0x002CE62Eu, sub_002CE62E); /* call 0x002CE62E */

loc_002FD354: ;
    POP32(esp, ecx);
    eax = 0; /* xor self */
    POP32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002FD35B
 * Original: 0x002FD35B - 0x002FD38C (49 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FD35B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FD35B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = eax + 0x234;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    { int _sjv = setjmp(*recomp_setjmp_slot(MEM32(esp))); if (_sjv) { ebp = g_seh_ebp; eax = (uint32_t)_sjv; } else { PUSH32(esp, 0x002FD36Eu); sub_00344B18(); } } /* setjmp 0x00344B18 */

loc_002FD36E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_002FD379; /* je: equal / zero */

loc_002FD374: ;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002FD379: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FD387u); RECOMP_ABI_CALL(0x002CE69Au, sub_002CE69A); /* call 0x002CE69A */

loc_002FD387: ;
    esp = esp + 0xC;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002FD38C
 * Original: 0x002FD38C - 0x002FD3BD (49 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FD38C(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FD38C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = eax + 0x234;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    { int _sjv = setjmp(*recomp_setjmp_slot(MEM32(esp))); if (_sjv) { ebp = g_seh_ebp; eax = (uint32_t)_sjv; } else { PUSH32(esp, 0x002FD39Fu); sub_00344B18(); } } /* setjmp 0x00344B18 */

loc_002FD39F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_002FD3AA; /* je: equal / zero */

loc_002FD3A5: ;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002FD3AA: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FD3B8u); RECOMP_ABI_CALL(0x002CE745u, sub_002CE745); /* call 0x002CE745 */

loc_002FD3B8: ;
    esp = esp + 0xC;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002FD3BD
 * Original: 0x002FD3BD - 0x002FD3E8 (43 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FD3BD(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FD3BD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = eax + 0x234;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    { int _sjv = setjmp(*recomp_setjmp_slot(MEM32(esp))); if (_sjv) { ebp = g_seh_ebp; eax = (uint32_t)_sjv; } else { PUSH32(esp, 0x002FD3D0u); sub_00344B18(); } } /* setjmp 0x00344B18 */

loc_002FD3D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_002FD3DA; /* je: equal / zero */

loc_002FD3D6: ;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002FD3DA: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FD3E2u); RECOMP_ABI_CALL(0x002CE4F9u, sub_002CE4F9); /* call 0x002CE4F9 */

loc_002FD3E2: ;
    eax = 0; /* xor self */
    POP32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002FD3E8
 * Original: 0x002FD3E8 - 0x002FD413 (43 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FD3E8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FD3E8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = eax + 0x234;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    { int _sjv = setjmp(*recomp_setjmp_slot(MEM32(esp))); if (_sjv) { ebp = g_seh_ebp; eax = (uint32_t)_sjv; } else { PUSH32(esp, 0x002FD3FBu); sub_00344B18(); } } /* setjmp 0x00344B18 */

loc_002FD3FB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_002FD405; /* je: equal / zero */

loc_002FD401: ;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002FD405: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FD40Du); RECOMP_ABI_CALL(0x002CE5E3u, sub_002CE5E3); /* call 0x002CE5E3 */

loc_002FD40D: ;
    eax = 0; /* xor self */
    POP32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002FD413
 * Original: 0x002FD413 - 0x002FD440 (45 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FD413(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FD413: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = eax + 0x234;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    { int _sjv = setjmp(*recomp_setjmp_slot(MEM32(esp))); if (_sjv) { ebp = g_seh_ebp; eax = (uint32_t)_sjv; } else { PUSH32(esp, 0x002FD426u); sub_00344B18(); } } /* setjmp 0x00344B18 */

loc_002FD426: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_002FD431; /* je: equal / zero */

loc_002FD42C: ;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002FD431: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FD43Cu); RECOMP_ABI_CALL(0x002CDF19u, sub_002CDF19); /* call 0x002CDF19 */

loc_002FD43C: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002FD440
 * Original: 0x002FD440 - 0x002FD46B (43 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FD440(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FD440: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = eax + 0x234;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    { int _sjv = setjmp(*recomp_setjmp_slot(MEM32(esp))); if (_sjv) { ebp = g_seh_ebp; eax = (uint32_t)_sjv; } else { PUSH32(esp, 0x002FD453u); sub_00344B18(); } } /* setjmp 0x00344B18 */

loc_002FD453: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_002FD45D; /* je: equal / zero */

loc_002FD459: ;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002FD45D: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FD465u); RECOMP_ABI_CALL(0x002CE1C1u, sub_002CE1C1); /* call 0x002CE1C1 */

loc_002FD465: ;
    eax = 0; /* xor self */
    POP32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002FD46B
 * Original: 0x002FD46B - 0x002FD49C (49 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FD46B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FD46B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = eax + 0x234;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    { int _sjv = setjmp(*recomp_setjmp_slot(MEM32(esp))); if (_sjv) { ebp = g_seh_ebp; eax = (uint32_t)_sjv; } else { PUSH32(esp, 0x002FD47Eu); sub_00344B18(); } } /* setjmp 0x00344B18 */

loc_002FD47E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_002FD489; /* je: equal / zero */

loc_002FD484: ;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002FD489: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FD497u); RECOMP_ABI_CALL(0x002CDFC9u, sub_002CDFC9); /* call 0x002CDFC9 */

loc_002FD497: ;
    esp = esp + 0xC;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002FD49C
 * Original: 0x002FD49C - 0x002FD4CD (49 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FD49C(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FD49C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = eax + 0x234;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    { int _sjv = setjmp(*recomp_setjmp_slot(MEM32(esp))); if (_sjv) { ebp = g_seh_ebp; eax = (uint32_t)_sjv; } else { PUSH32(esp, 0x002FD4AFu); sub_00344B18(); } } /* setjmp 0x00344B18 */

loc_002FD4AF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_002FD4BA; /* je: equal / zero */

loc_002FD4B5: ;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002FD4BA: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FD4C8u); RECOMP_ABI_CALL(0x002CE04Du, sub_002CE04D); /* call 0x002CE04D */

loc_002FD4C8: ;
    esp = esp + 0xC;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002FD4CD
 * Original: 0x002FD4CD - 0x002FD4F9 (44 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FD4CD(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FD4CD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = eax + 0x234;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    { int _sjv = setjmp(*recomp_setjmp_slot(MEM32(esp))); if (_sjv) { ebp = g_seh_ebp; eax = (uint32_t)_sjv; } else { PUSH32(esp, 0x002FD4E0u); sub_00344B18(); } } /* setjmp 0x00344B18 */

loc_002FD4E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_002FD4EB; /* je: equal / zero */

loc_002FD4E6: ;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002FD4EB: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FD4F3u); RECOMP_ABI_CALL(0x002CDE72u, sub_002CDE72); /* call 0x002CDE72 */

loc_002FD4F3: ;
    POP32(esp, ecx);
    eax = ZX8(LO8(eax));
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002FD4F9
 * Original: 0x002FD4F9 - 0x002FD524 (43 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FD4F9(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FD4F9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = eax + 0x234;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    { int _sjv = setjmp(*recomp_setjmp_slot(MEM32(esp))); if (_sjv) { ebp = g_seh_ebp; eax = (uint32_t)_sjv; } else { PUSH32(esp, 0x002FD50Cu); sub_00344B18(); } } /* setjmp 0x00344B18 */

loc_002FD50C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_002FD516; /* je: equal / zero */

loc_002FD512: ;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002FD516: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FD51Eu); RECOMP_ABI_CALL(0x002CC4F0u, sub_002CC4F0); /* call 0x002CC4F0 */

loc_002FD51E: ;
    eax = 0; /* xor self */
    POP32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002FD524
 * Original: 0x002FD524 - 0x002FD54F (43 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FD524(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FD524: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = eax + 0x234;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    { int _sjv = setjmp(*recomp_setjmp_slot(MEM32(esp))); if (_sjv) { ebp = g_seh_ebp; eax = (uint32_t)_sjv; } else { PUSH32(esp, 0x002FD537u); sub_00344B18(); } } /* setjmp 0x00344B18 */

loc_002FD537: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_002FD541; /* je: equal / zero */

loc_002FD53D: ;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002FD541: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FD549u); RECOMP_ABI_CALL(0x002CC523u, sub_002CC523); /* call 0x002CC523 */

loc_002FD549: ;
    eax = 0; /* xor self */
    POP32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002FD54F
 * Original: 0x002FD54F - 0x002FD584 (53 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FD54F(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FD54F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = eax + 0x234;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    { int _sjv = setjmp(*recomp_setjmp_slot(MEM32(esp))); if (_sjv) { ebp = g_seh_ebp; eax = (uint32_t)_sjv; } else { PUSH32(esp, 0x002FD562u); sub_00344B18(); } } /* setjmp 0x00344B18 */

loc_002FD562: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_002FD56C; /* je: equal / zero */

loc_002FD568: ;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002FD56C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = MEM32(eax + 4);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x002FD57Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002FD57F: ;
    esp = esp + 0x10;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002FD584
 * Original: 0x002FD584 - 0x002FD5A7 (35 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FD584(void)
{

loc_002FD584: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x2A4);
    edx = MEM32(ecx + 0x1D8);
    MEM32(eax + 0x274) = edx;
    ecx = MEM32(ecx + 0x1DC);
    MEM32(eax + 0x278) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002FD5A7
 * Original: 0x002FD5A7 - 0x002FD5E3 (60 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FD5A7(void)
{

loc_002FD5A7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = MEM32(edi + 0x2A4);
    ebx = esi + 0x1DC;
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    MEM32(esi + 0x1E4) = eax;
    PUSH32(esp, 0x002FD5C8u); RECOMP_ABI_CALL(0x002CB4D3u, sub_002CB4D3); /* call 0x002CB4D3 */

loc_002FD5C8: ;
    eax = MEM32(esi + 0x1D8);
    MEM32(edi + 0x274) = eax;
    eax = MEM32(ebx);
    POP32(esp, ecx);
    MEM32(edi + 0x278) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002FD5E3
 * Original: 0x002FD5E3 - 0x002FD60C (41 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FD5E3(void)
{

loc_002FD5E3: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x2A4);
    edx = MEM32(ecx + 0x274);
    MEM32(eax + 0x1E0) = edx;
    edx = MEM32(eax + 0x1DC);
    edx = edx - MEM32(ecx + 0x278);
    MEM32(eax + 0x1E4) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_002FD60C
 * Original: 0x002FD60C - 0x002FD629 (29 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FD60C(void)
{

loc_002FD60C: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x2F4);
    MEM32(eax + 0x274) = ecx;
    ecx = MEM32(eax + 0x2F8);
    MEM32(eax + 0x278) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002FD629
 * Original: 0x002FD629 - 0x002FD695 (108 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FD629(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FD629: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x2F8);
    PUSH32(esp, edi);
    eax = eax + 0x3E8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x2F4));
    PUSH32(esp, 0x002FD646u); RECOMP_ABI_CALL(0x002B8900u, sub_002B8900); /* call 0x002B8900 */

loc_002FD646: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_002FD666; /* jne: not equal / not zero */

loc_002FD64E: ;
    eax = MEM32(esi);
    MEM32(eax + 0x14) = 0x36;
    eax = MEM32(esi);
    MEM32(eax + 0x18) = 0x64;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x002FD665u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002FD665: ;
    POP32(esp, ecx);

loc_002FD666: ;
    eax = MEM32(esi + 0x2F8);
    ecx = eax + edi;
    MEM32(esi + 0x2F4) = edi;
    eax = eax + 0x3E8;
    MEM32(esi + 0x2F8) = eax;
    POP32(esp, edi);
    MEM32(esi + 0x274) = ecx;
    MEM32(esi + 0x278) = 0x3E8;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002FD695
 * Original: 0x002FD695 - 0x002FD6A6 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FD695(void)
{

loc_002FD695: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x278);
    MEM32(eax + 0x2F8) = MEM32(eax + 0x2F8) - ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002FD6A6
 * Original: 0x002FD6A6 - 0x002FD719 (115 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FD6A6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FD6A6: ;
    eax = MEM32(esi + 0x2F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FD6B7; /* je: equal / zero */

loc_002FD6B0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002FD6B6u); RECOMP_ABI_CALL(0x002B88F0u, sub_002B88F0); /* call 0x002B88F0 */

loc_002FD6B6: ;
    POP32(esp, ecx);

loc_002FD6B7: ;
    eax = 0x3E8;
    PUSH32(esp, edi);
    edi = esi + 0x2F8;
    PUSH32(esp, eax);
    MEM32(edi) = eax;
    PUSH32(esp, 0x002FD6CBu); RECOMP_ABI_CALL(0x002B88E0u, sub_002B88E0); /* call 0x002B88E0 */

loc_002FD6CB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    MEM32(esi + 0x2F4) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_002FD6ED; /* jne: not equal / not zero */

loc_002FD6D6: ;
    MEM32(edi) = MEM32(edi) & eax;
    PUSH32(esp, 0x411D88);
    PUSH32(esp, 0x411D70);
    PUSH32(esp, 0x002FD6E7u); RECOMP_ABI_CALL(0x002CED88u, sub_002CED88); /* call 0x002CED88 */

loc_002FD6E7: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_002FD6ED: ;
    eax = esi + 0x274;
    MEM32(esi + 0x18) = eax;
    eax = 0; /* xor self */
    MEM32(esi + 0x27C) = 0x2FD60C;
    MEM32(esi + 0x280) = 0x2FD629;
    MEM32(esi + 0x284) = 0x2FD695;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002FD719
 * Original: 0x002FD719 - 0x002FD73C (35 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FD719(void)
{

loc_002FD719: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x2A4);
    edx = MEM32(ecx + 0x1D8);
    MEM32(eax + 0x288) = edx;
    ecx = MEM32(ecx + 0x1E4);
    MEM32(eax + 0x28C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002FD73C
 * Original: 0x002FD73C - 0x002FD76C (48 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FD73C(void)
{

loc_002FD73C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    MEM32(eax + 0x14) = 0x78;
    eax = MEM32(esi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x002FD752u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002FD752: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi + 0x288) = 0x411D28;
    MEM32(esi + 0x28C) = 2;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002FD76C
 * Original: 0x002FD76C - 0x002FD799 (45 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FD76C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FD76C: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002FD798; /* jle: less or equal (signed <=) */

loc_002FD774: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x28C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002FD78A; /* jle: less or equal (signed <=) */

loc_002FD782: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002FD788u); RECOMP_ABI_CALL(0x002FD73Cu, sub_002FD73C); /* call 0x002FD73C */

loc_002FD788: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002FD78A: ;
    MEM32(ecx + 0x288) = MEM32(ecx + 0x288) + edx;
    eax = eax - edx;
    MEM32(ecx + 0x28C) = eax;

loc_002FD798: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002FD799
 * Original: 0x002FD799 - 0x002FD7DF (70 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FD799(void)
{

loc_002FD799: ;
    MEM32(eax + 0x28C) = MEM32(eax + 0x28C) & 0;
    ecx = eax + 0x288;
    MEM32(ecx) = MEM32(ecx) & 0;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x290) = 0x2FD719;
    MEM32(eax + 0x294) = 0x2FD73C;
    MEM32(eax + 0x298) = 0x2FD76C;
    MEM32(eax + 0x29C) = 0x2CD9B7;
    MEM32(eax + 0x2A0) = 0x2CEF0E;
    esp += 4; return; /* ret */

}

/**
 * sub_002FD7DF
 * Original: 0x002FD7DF - 0x002FD7FC (29 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FD7DF(void)
{

loc_002FD7DF: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x2F4);
    MEM32(eax + 0x288) = ecx;
    ecx = MEM32(eax + 0x2F8);
    MEM32(eax + 0x28C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002FD7FC
 * Original: 0x002FD7FC - 0x002FD86F (115 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FD7FC(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FD7FC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x1CC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), eax (32-bit) */
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -4) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_002FD85A; /* jle: less or equal (signed <=) */

loc_002FD817: ;
    esi = ecx;
    esi = esi + 0xC;
    ebx = edi + 0x2B4;

loc_002FD822: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + -4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    MEM32(ebp + -8) = MEM32(ebp + -8) + ecx;
    eax = eax << 3;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x10);
    eax = eax << 3;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FD840u); RECOMP_ABI_CALL(0x002FD54Fu, sub_002FD54F); /* call 0x002FD54F */

loc_002FD840: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FD86B; /* je: equal / zero */

loc_002FD847: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx) = eax;
    eax = MEM32(ebp + -4);
    ebx = ebx + 4;
    esi = esi + 0x54;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002FD822; /* jl: less (signed <) */

loc_002FD85A: ;
    eax = MEM32(ebp + -8);
    MEM32(edi + 0x2E0) = eax;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002FD866: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_002FD86B: ;
    eax = 0; /* xor self */
    goto loc_002FD866;

}

/**
 * sub_002FD86F
 * Original: 0x002FD86F - 0x002FD911 (162 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FD86F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FD86F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM8(edi + 0x1F)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x1F), 0x80 (8-bit) */
    esi = MEM32(edi + 0x1CC);
    if (TEST_Z(_fa, _fb)) goto loc_002FD8B7; /* je: equal / zero */

loc_002FD881: ;
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0x002FD889u); RECOMP_ABI_CALL(0x002FD799u, sub_002FD799); /* call 0x002FD799 */

loc_002FD889: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    MEM32(esi + 0x290) = 0x2FD7DF;
    PUSH32(esp, 0x002FD89Bu); RECOMP_ABI_CALL(0x002FD413u, sub_002FD413); /* call 0x002FD413 */

loc_002FD89B: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FD8B7; /* je: equal / zero */

loc_002FD8A3: ;
    PUSH32(esp, 0x411DB0);
    PUSH32(esp, 0x411DA0);
    PUSH32(esp, 0x002FD8B2u); RECOMP_ABI_CALL(0x002CED88u, sub_002CED88); /* call 0x002CED88 */

loc_002FD8B2: ;
    POP32(esp, ecx);
    eax = 0; /* xor self */
    goto loc_002FD90D;

loc_002FD8B7: ;
    SET_LO16(eax, MEM16(edi + 0x46));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(6) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 6 (16-bit) */
    MEM16(esi + 0x2A8) = LO16(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_002FD8DC; /* je: equal / zero */

loc_002FD8C8: ;
    MEM16(esi + 0x2AA) = 1;
    MEM16(esi + 0x2AC) = 1;
    goto loc_002FD8F8;

loc_002FD8DC: ;
    SET_LO16(eax, MEM16(edi + 0xE4));
    MEM16(esi + 0x2AA) = LO16(eax);
    SET_LO16(eax, MEM16(edi + 0xE6));
    MEM16(esi + 0x2AC) = LO16(eax);

loc_002FD8F8: ;
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0x002FD900u); RECOMP_ABI_CALL(0x002FD799u, sub_002FD799); /* call 0x002FD799 */

loc_002FD900: ;
    eax = 0; /* xor self */
    MEM32(edi + 0x210) = 0x2CEF0E;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002FD90D: ;
    POP32(esp, ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002FD911
 * Original: 0x002FD911 - 0x002FD979 (104 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FD911(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FD911: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = MEM32(edi + 0x1CC);
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(ebp + 8) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_002FD95A; /* je: equal / zero */

loc_002FD92B: ;
    ebx = MEM32(ebp + 0xC);

loc_002FD92E: ;
    PUSH32(esp, 1);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(ebp + -4) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FD93Du); RECOMP_ABI_CALL(0x002FD46Bu, sub_002FD46B); /* call 0x002FD46B */

loc_002FD93D: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FD96D; /* jne: not equal / not zero */

loc_002FD945: ;
    MEM32(edi + 0x164) = MEM32(edi + 0x164) + 1;
    _fa = (uint32_t)(MEM32(edi + 0x164)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + MEM32(esi + 0x2B0);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002FD92E; /* jg: greater (signed >) */

loc_002FD95A: ;
    eax = MEM32(esi + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x60) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002FD971; /* jb: below (unsigned <) */

loc_002FD962: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FD968u); RECOMP_ABI_CALL(0x002FD4CDu, sub_002FD4CD); /* call 0x002FD4CD */

loc_002FD968: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_002FD971; /* jne: not equal / not zero */

loc_002FD96D: ;
    eax = 0; /* xor self */
    goto loc_002FD974;

loc_002FD971: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002FD974: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002FD979
 * Original: 0x002FD979 - 0x002FDADA (353 bytes, 120 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FD979(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FD979: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x1CC);
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    MEM32(ebp + -20) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_002FDABB; /* je: equal / zero */

loc_002FD999: ;
    eax = MEM32(esi + 0xC4);
    eax = MEM32(eax + 0x7C);
    MEM32(ebp + -24) = eax;
    eax = MEM32(esi + 0x2E0);
    MEM32(ebp + -28) = eax;

loc_002FD9AE: ;
    _fa = (uint32_t)(MEM32(esi + 0x2DC)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2DC), 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002FD9E0; /* jl: less (signed <) */

loc_002FD9B7: ;
    edi = MEM32(esi + 0x114);
    edi = edi << 3;
    PUSH32(esp, edi);
    eax = esi + 0x2B4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FD9CEu); RECOMP_ABI_CALL(0x002FD49Cu, sub_002FD49C); /* call 0x002FD49C */

loc_002FD9CE: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FDACE; /* jne: not equal / not zero */

loc_002FD9D9: ;
    MEM32(esi + 0x2DC) = MEM32(esi + 0x2DC) & 0;

loc_002FD9E0: ;
    eax = MEM32(esi + 0xC4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), ecx (32-bit) */
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -16) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_002FDA99; /* jle: less or equal (signed <=) */

loc_002FD9F7: ;
    eax = eax + 0xC;
    ecx = esi + 0x2B4;
    MEM32(ebp + -40) = eax;
    MEM32(ebp + -12) = ecx;

loc_002FDA06: ;
    ecx = MEM32(eax);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    edx = MEM32(eax + -4);
    MEM32(ebp + -36) = ecx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002FDA80; /* jle: less or equal (signed <=) */

loc_002FDA16: ;
    eax = MEM32(esi + 0x2DC);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -36));
    eax = eax + MEM32(ebp + -4);
    ecx = MEM32(ebp + -12);
    ecx = MEM32(ecx);
    ecx = MEM32(ecx + eax * 4);
    edi = MEM32(ebp + -8);
    eax = MEM32(ebp + 0xC);
    eax = eax + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    edi = MEM32(ebp + -24);
    if (CMP_NE(_fa, _fb)) goto loc_002FDA4C; /* jne: not equal / not zero */

loc_002FDA3B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_002FDA6C; /* jbe: below or equal (unsigned <=) */

loc_002FDA3F: ;
    SET_LO8(ebx, MEM8(ecx));
    MEM8(eax) = LO8(ebx);
    eax = eax + MEM32(ebp + -28);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002FDA3F; /* jne: not equal / not zero */

loc_002FDA4A: ;
    goto loc_002FDA6C;

loc_002FDA4C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_002FDA6C; /* jbe: below or equal (unsigned <=) */

loc_002FDA50: ;
    MEM32(ebp + -32) = edi;

loc_002FDA53: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002FDA64; /* jle: less or equal (signed <=) */

loc_002FDA59: ;
    SET_LO8(ebx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edi + eax) = LO8(ebx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002FDA59; /* jl: less (signed <) */

loc_002FDA64: ;
    eax = eax + MEM32(ebp + -28);
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002FDA53; /* jne: not equal / not zero */

loc_002FDA6C: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + edx;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -36) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002FDA16; /* jl: less (signed <) */

loc_002FDA7A: ;
    eax = MEM32(ebp + -40);
    ebx = MEM32(ebp + 8);

loc_002FDA80: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) + 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(ebp + -16);
    MEM32(ebp + -12) = MEM32(ebp + -12) + 4;
    eax = eax + 0x54;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x24) (32-bit) */
    MEM32(ebp + -40) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_002FDA06; /* jl: less (signed <) */

loc_002FDA99: ;
    MEM32(esi + 0x2DC) = MEM32(esi + 0x2DC) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x2DC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 0x164) = MEM32(ebx + 0x164) + 1;
    _fa = (uint32_t)(MEM32(ebx + 0x164)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x2B0);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + eax;
    MEM32(ebp + -20) = MEM32(ebp + -20) - 1;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002FD9AE; /* jg: greater (signed >) */

loc_002FDABB: ;
    eax = MEM32(esi + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x60) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002FDAD2; /* jb: below (unsigned <) */

loc_002FDAC3: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FDAC9u); RECOMP_ABI_CALL(0x002FD4CDu, sub_002FD4CD); /* call 0x002FD4CD */

loc_002FDAC9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_002FDAD2; /* jne: not equal / not zero */

loc_002FDACE: ;
    eax = 0; /* xor self */
    goto loc_002FDAD5;

loc_002FDAD2: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002FDAD5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002FDADA
 * Original: 0x002FDADA - 0x002FDAF9 (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FDADA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FDADA: ;
    edx = MEM32(ecx + eax * 4 + 0x58);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FDAE9; /* je: equal / zero */

loc_002FDAE2: ;
    MEM8(edx + 0x111) = MEM8(edx + 0x111) & 0;

loc_002FDAE9: ;
    eax = MEM32(ecx + eax * 4 + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FDAF8; /* je: equal / zero */

loc_002FDAF1: ;
    MEM8(eax + 0x111) = MEM8(eax + 0x111) & 0;

loc_002FDAF8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002FDAF9
 * Original: 0x002FDAF9 - 0x002FDB94 (155 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FDAF9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002FDAF9: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x1CC);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0x2FC));
    PUSH32(esp, esi);
    PUSH32(esp, 0x002FDB0Eu); RECOMP_ABI_CALL(0x002FD2CAu, sub_002FD2CA); /* call 0x002FD2CA */

loc_002FDB0E: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_002FDB19; /* jne: not equal / not zero */

loc_002FDB15: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002FDB19: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002FDB21u); RECOMP_ABI_CALL(0x002FD2FDu, sub_002FD2FD); /* call 0x002FD2FD */

loc_002FDB21: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_002FDB15; /* je: equal / zero */

loc_002FDB27: ;
    _fa = (uint32_t)(MEM8(esi + 0x304)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x304), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_002FDB56; /* je: equal / zero */

loc_002FDB30: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_002FDB3E; /* je: equal / zero */

loc_002FDB37: ;
    _cf = 0; /* logical op clears CF */
    MEM8(eax + 0x80) = MEM8(eax + 0x80) & 0;

loc_002FDB3E: ;
    _fa = (uint32_t)(MEM16(esi + 0x2A8)) & 0xFFFFu; _fb = (uint32_t)(6) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x2A8), 6 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002FDB56; /* jne: not equal / not zero */

loc_002FDB48: ;
    eax = MEM32(esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_002FDB56; /* je: equal / zero */

loc_002FDB4F: ;
    _cf = 0; /* logical op clears CF */
    MEM8(eax + 0x80) = MEM8(eax + 0x80) & 0;

loc_002FDB56: ;
    _fa = (uint32_t)(MEM8(esi + 0x304)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x304), 2 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_002FDB7A; /* je: equal / zero */

loc_002FDB5F: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    ecx = esi;
    PUSH32(esp, 0x002FDB68u); RECOMP_ABI_CALL(0x002FDADAu, sub_002FDADA); /* call 0x002FDADA */

loc_002FDB68: ;
    _fa = (uint32_t)(MEM16(esi + 0x2A8)) & 0xFFFFu; _fb = (uint32_t)(6) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x2A8), 6 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002FDB7A; /* jne: not equal / not zero */

loc_002FDB72: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x002FDB7Au); RECOMP_ABI_CALL(0x002FDADAu, sub_002FDADA); /* call 0x002FDADA */

loc_002FDB7A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002FDB80u); RECOMP_ABI_CALL(0x002FD6A6u, sub_002FD6A6); /* call 0x002FD6A6 */

loc_002FDB80: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_002FDB15; /* je: equal / zero */

loc_002FDB85: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002FDB8Bu); RECOMP_ABI_CALL(0x002FD3E8u, sub_002FD3E8); /* call 0x002FD3E8 */

loc_002FDB8B: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    POP32(esp, ecx);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002FDB94
 * Original: 0x002FDB94 - 0x002FDD3B (423 bytes, 131 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FDB94(void)
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

loc_002FDB94: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = MEM32(edi + 0x1CC);
    MEM32(esi + 0x28) = MEM32(esi + 0x28) & 0;
    ebx = 0; /* xor self */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    MEM32(esi + 0x24) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FDBB6u); RECOMP_ABI_CALL(0x002FD270u, sub_002FD270); /* call 0x002FD270 */

loc_002FDBB6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_002FDCFB; /* je: equal / zero */

loc_002FDBBF: ;
    SET_LO16(eax, MEM16(edi + 0x46));
    MEM16(esi + 0x2A8) = LO16(eax);
    eax = ZX16(LO16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002FDC5C; /* jl: less (signed <) */

loc_002FDBD6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002FDC44; /* jle: less or equal (signed <=) */

loc_002FDBDB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FDC5C; /* jne: not equal / not zero */

loc_002FDBE0: ;
    SET_LO16(eax, MEM16(edi + 0xE4));
    MEM16(esi + 0x2AA) = LO16(eax);
    SET_LO16(eax, MEM16(edi + 0xE6));
    MEM16(esi + 0x2AC) = LO16(eax);
    _fa = (uint32_t)(MEM8(edi + 0x1D)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x1D), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002FDC6A; /* jne: not equal / not zero */

loc_002FDC02: ;
    SET_LO8(ecx, MEM8(edi + 0x40));
    fp_push(0.0); /* fldz */
    eax = ebx;
    MEMF(ebp + -24) = (float)fp_top(); fp_pop(); /* fstp */
    eax = eax << LO8(ecx);
    ecx = eax + -1;
    MEM32(ebp + 8) = ecx;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    MEM32(ebp + 8) = eax;
    eax = ebp + -24;
    MEMF(ebp + -20) = (float)fp_top(); /* fst */
    PUSH32(esp, eax);
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    PUSH32(esp, 0x214);
    PUSH32(esp, edi);
    MEMF(ebp + -16) = (float)fp_top(); /* fst */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FDC3Fu); RECOMP_ABI_CALL(0x002C9DE5u, sub_002C9DE5); /* call 0x002C9DE5 */

loc_002FDC3F: ;
    esp = esp + 0xC;
    goto loc_002FDC6A;

loc_002FDC44: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x411E70);

loc_002FDC4A: ;
    PUSH32(esp, 0x411D3C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FDC54u); RECOMP_ABI_CALL(0x002CED88u, sub_002CED88); /* call 0x002CED88 */

loc_002FDC54: ;
    esp = esp + 0xC;
    goto loc_002FDCFB;

loc_002FDC5C: ;
    MEM16(esi + 0x2AA) = LO16(ebx);
    MEM16(esi + 0x2AC) = LO16(ebx);

loc_002FDC6A: ;
    SET_LO16(eax, MEM16(edi + 0x40));
    PUSH32(esp, 8);
    POP32(esp, ebx);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ebx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FDC81; /* je: equal / zero */

loc_002FDC76: ;
    eax = ZX16(LO16(eax));
    PUSH32(esp, eax);
    PUSH32(esp, 0x411E48);
    goto loc_002FDC4A;

loc_002FDC81: ;
    MEM32(esi + 0x38) = ebx;
    _fa = (uint32_t)(MEM8(edi + 0xD)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0xD), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FDCC4; /* je: equal / zero */

loc_002FDC8A: ;
    ecx = ZX16(MEM16(esi + 0x2AC));
    eax = MEM32(edi + 0x34);
    ecx = ecx << 3;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FDCA7; /* je: equal / zero */

loc_002FDC9F: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x411E20);
    goto loc_002FDC4A;

loc_002FDCA7: ;
    ecx = ZX16(MEM16(esi + 0x2AA));
    eax = MEM32(edi + 0x30);
    ecx = ecx << 3;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FDCE9; /* je: equal / zero */

loc_002FDCBC: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x411DF8);
    goto loc_002FDC4A;

loc_002FDCC4: ;
    eax = MEM32(edi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x28) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002FDCE9; /* jae: above or equal (unsigned >=) */

loc_002FDCCC: ;
    ecx = ZX16(MEM16(esi + 0x2AC));
    ecx = ecx << 3;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FDCE9; /* je: equal / zero */

loc_002FDCDE: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x411DC8);
    goto loc_002FDC4A;

loc_002FDCE9: ;
    _fa = (uint32_t)(MEM8(esi + 0x304)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x304), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FDD08; /* je: equal / zero */

loc_002FDCF2: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FDCF7u); RECOMP_ABI_CALL(0x002FDAF9u, sub_002FDAF9); /* call 0x002FDAF9 */

loc_002FDCF7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002FDCFF; /* jne: not equal / not zero */

loc_002FDCFB: ;
    eax = 0; /* xor self */
    goto loc_002FDD36;

loc_002FDCFF: ;
    MEM8(edi + 0x1F) = MEM8(edi + 0x1F) | 0x80;
    MEM32(edi + 0xC) = MEM32(edi + 0xC) | ebx;
    goto loc_002FDD0C;

loc_002FDD08: ;
    MEM8(edi + 0x1F) = MEM8(edi + 0x1F) & 0x7F;

loc_002FDD0C: ;
    eax = esi + 0x274;
    MEM32(esi + 0x18) = eax;
    eax = 0; /* xor self */
    MEM32(esi + 0x27C) = 0x2FD584;
    MEM32(esi + 0x280) = 0x2FD5A7;
    MEM32(esi + 0x284) = 0x2FD5E3;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002FDD36: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002FDD3B
 * Original: 0x002FDD3B - 0x002FDDAC (113 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FDD3B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FDD3B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = MEM32(edi + 0x1CC);
    ecx = MEM32(esi + 0x2B0);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    ebx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_002FDD6A; /* je: equal / zero */

loc_002FDD5C: ;
    PUSH32(esp, 0x411EA4);
    PUSH32(esp, MEM32(edi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FDD68u); RECOMP_ABI_CALL(0x002CF351u, sub_002CF351); /* call 0x002CF351 */

loc_002FDD68: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_002FDD6A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002FDDA0; /* jle: less or equal (signed <=) */

loc_002FDD6E: ;
    edi = MEM32(ebp + 0xC);

loc_002FDD71: ;
    PUSH32(esp, 1);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 0x10) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FDD81u); RECOMP_ABI_CALL(0x002FD35Bu, sub_002FD35B); /* call 0x002FD35B */

loc_002FDD81: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FDDA8; /* jne: not equal / not zero */

loc_002FDD89: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002FDD96; /* jle: less or equal (signed <=) */

loc_002FDD8D: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x164) = MEM32(eax + 0x164) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x164)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002FDD96: ;
    edi = edi + MEM32(esi + 0x2B0);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_002FDD71; /* jg: greater (signed >) */

loc_002FDDA0: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002FDDA3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002FDDA8: ;
    eax = 0; /* xor self */
    goto loc_002FDDA3;

}

/**
 * sub_002FDDAC
 * Original: 0x002FDDAC - 0x002FDF2D (385 bytes, 134 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FDDAC(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FDDAC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ebx = MEM32(edi + 0x1CC);
    eax = MEM32(ebx + 0x2E0);
    ecx = MEM32(ebx + 0x2B0);
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + 0x10);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    MEM32(ebp + 0x10) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_002FDDE8; /* je: equal / zero */

loc_002FDDDA: ;
    PUSH32(esp, 0x411EA4);
    PUSH32(esp, MEM32(edi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FDDE6u); RECOMP_ABI_CALL(0x002CF351u, sub_002CF351); /* call 0x002CF351 */

loc_002FDDE6: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_002FDDE8: ;
    eax = MEM32(ebx + 0x44);
    esi = MEM32(eax + 0x7C);
    MEM32(ebp + -36) = esi;
    eax = 0; /* xor self */
    goto loc_002FDF18;

loc_002FDDF8: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebx + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x3C), eax (32-bit) */
    edx = MEM32(ebx + 0x44);
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -24) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_002FDECB; /* jle: less or equal (signed <=) */

loc_002FDE0D: ;
    eax = ebx + 0x2B4;
    edx = edx + 0xC;
    MEM32(ebp + -20) = eax;

loc_002FDE19: ;
    ecx = MEM32(edx + -4);
    eax = MEM32(edx);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    MEM32(ebp + -4) = ecx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi);
    MEM32(ebp + -16) = eax;
    eax = MEM32(edx + 0x10);
    eax = eax << 3;
    eax = eax - ecx;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    MEM32(ebp + -40) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_002FDEB5; /* jle: less or equal (signed <=) */

loc_002FDE3C: ;
    ecx = MEM32(ebp + -12);
    eax = MEM32(ebp + 0xC);
    edi = MEM32(ebp + -20);
    edi = MEM32(edi);
    eax = eax + ecx;
    ecx = MEM32(ebx + 0x2DC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + -16));
    ecx = ecx + MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 1 (32-bit) */
    edi = MEM32(edi + ecx * 4);
    if (CMP_NE(_fa, _fb)) goto loc_002FDE70; /* jne: not equal / not zero */

loc_002FDE5F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_002FDE92; /* jbe: below or equal (unsigned <=) */

loc_002FDE63: ;
    SET_LO8(ecx, MEM8(eax));
    eax = eax + MEM32(ebp + -28);
    MEM8(edi) = LO8(ecx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002FDE63; /* jne: not equal / not zero */

loc_002FDE6E: ;
    goto loc_002FDE92;

loc_002FDE70: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_002FDE92; /* jbe: below or equal (unsigned <=) */

loc_002FDE74: ;
    MEM32(ebp + -32) = esi;

loc_002FDE77: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002FDE8A; /* jle: less or equal (signed <=) */

loc_002FDE7E: ;
    SET_LO8(ecx, MEM8(esi + eax));
    MEM8(edi) = LO8(ecx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -4) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002FDE7E; /* jl: less (signed <) */

loc_002FDE8A: ;
    eax = eax + MEM32(ebp + -28);
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002FDE77; /* jne: not equal / not zero */

loc_002FDE92: ;
    ecx = MEM32(ebp + -40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002FDE9E; /* jle: less or equal (signed <=) */

loc_002FDE99: ;
    esi = edi + -1;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */

loc_002FDE9E: ;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -12) = MEM32(ebp + -12) + eax;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -16) (32-bit) */
    esi = MEM32(ebp + -36);
    if (CMP_L(_fas, _fbs)) goto loc_002FDE3C; /* jl: less (signed <) */

loc_002FDEB2: ;
    edi = MEM32(ebp + 8);

loc_002FDEB5: ;
    MEM32(ebp + -24) = MEM32(ebp + -24) + 1;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -24);
    MEM32(ebp + -20) = MEM32(ebp + -20) + 4;
    edx = edx + 0x54;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x3C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x3C) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002FDE19; /* jl: less (signed <) */

loc_002FDECB: ;
    MEM32(ebx + 0x2DC) = MEM32(ebx + 0x2DC) + 1;
    _fa = (uint32_t)(MEM32(ebx + 0x2DC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebx + 0x2DC)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x2DC), 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002FDF02; /* jl: less (signed <) */

loc_002FDEDA: ;
    edi = MEM32(ebx + 0xDC);
    edi = edi << 3;
    PUSH32(esp, edi);
    eax = ebx + 0x2B4;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FDEF1u); RECOMP_ABI_CALL(0x002FD38Cu, sub_002FD38C); /* call 0x002FD38C */

loc_002FDEF1: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FDF29; /* jne: not equal / not zero */

loc_002FDEF8: ;
    MEM32(ebx + 0x2DC) = MEM32(ebx + 0x2DC) & 0;
    edi = MEM32(ebp + 8);

loc_002FDF02: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002FDF0F; /* jle: less or equal (signed <=) */

loc_002FDF09: ;
    MEM32(edi + 0x164) = MEM32(edi + 0x164) + 1;
    _fa = (uint32_t)(MEM32(edi + 0x164)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002FDF0F: ;
    ecx = MEM32(ebx + 0x2B0);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + ecx;

loc_002FDF18: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002FDDF8; /* jg: greater (signed >) */

loc_002FDF21: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002FDF24: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_002FDF29: ;
    eax = 0; /* xor self */
    goto loc_002FDF24;

}

/**
 * sub_002FDF2D
 * Original: 0x002FDF2D - 0x002FDFEC (191 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FDF2D(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FDF2D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x10;
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x1CC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(esi + 0x2DC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2DC), ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002FDFDA; /* jle: less or equal (signed <=) */

loc_002FDF4B: ;
    _fa = (uint32_t)(MEM32(esi + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x3C), ecx (32-bit) */
    eax = MEM32(esi + 0x44);
    PUSH32(esp, edi);
    MEM32(ebp + -8) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_002FDFB7; /* jle: less or equal (signed <=) */

loc_002FDF57: ;
    eax = eax + 0x1C;
    ecx = esi + 0x2B4;
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -4) = ecx;
    PUSH32(esp, ebx);

loc_002FDF67: ;
    ecx = MEM32(eax + -16);
    edi = MEM32(esi + 0x2DC);
    ebx = MEM32(eax);
    edi = (uint32_t)((int32_t)edi * (int32_t)ecx);
    ecx = ecx << 3;
    ebx = ebx << 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    MEM32(ebp + -16) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_002FDFA1; /* jge: greater or equal (signed >=) */

loc_002FDF82: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    eax = eax + edi * 4;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(eax + -4));
    PUSH32(esp, MEM32(eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FDF95u); RECOMP_ABI_CALL(0x002B8940u, sub_002B8940); /* call 0x002B8940 */

loc_002FDF95: ;
    esp = esp + 0xC;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -16) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002FDF82; /* jl: less (signed <) */

loc_002FDF9E: ;
    eax = MEM32(ebp + -12);

loc_002FDFA1: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(ebp + -8);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 4;
    eax = eax + 0x54;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x3C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x3C) (32-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_002FDF67; /* jl: less (signed <) */

loc_002FDFB6: ;
    POP32(esp, ebx);

loc_002FDFB7: ;
    edi = MEM32(esi + 0xDC);
    edi = edi << 3;
    PUSH32(esp, edi);
    eax = esi + 0x2B4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FDFCEu); RECOMP_ABI_CALL(0x002FD38Cu, sub_002FD38C); /* call 0x002FD38C */

loc_002FDFCE: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_002FDFDA; /* je: equal / zero */

loc_002FDFD6: ;
    eax = 0; /* xor self */
    goto loc_002FDFE9;

loc_002FDFDA: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(eax + 0x1CC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FDFE8u); RECOMP_ABI_CALL(0x002FD3BDu, sub_002FD3BD); /* call 0x002FD3BD */

loc_002FDFE8: ;
    POP32(esp, ecx);

loc_002FDFE9: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002FDFEC
 * Original: 0x002FDFEC - 0x002FE02A (62 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FDFEC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FDFEC: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = MEM32(edi + 0x1CC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FE027; /* je: equal / zero */

loc_002FDFFC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002FE002u); RECOMP_ABI_CALL(0x002FD524u, sub_002FD524); /* call 0x002FD524 */

loc_002FE002: ;
    esi = MEM32(esi + 0x2F4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_002FE014; /* je: equal / zero */

loc_002FE00D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002FE013u); RECOMP_ABI_CALL(0x002B88F0u, sub_002B88F0); /* call 0x002B88F0 */

loc_002FE013: ;
    POP32(esp, ecx);

loc_002FE014: ;
    PUSH32(esp, MEM32(edi + 0x1CC));
    PUSH32(esp, 0x002FE01Fu); RECOMP_ABI_CALL(0x002B88F0u, sub_002B88F0); /* call 0x002B88F0 */

loc_002FE01F: ;
    MEM32(edi + 0x1CC) = MEM32(edi + 0x1CC) & 0;
    POP32(esp, ecx);

loc_002FE027: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002FE02A
 * Original: 0x002FE02A - 0x002FE102 (216 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FE02A(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FE02A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax = eax - 0x15B;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x1CC);
    if ((eax == 0)) goto loc_002FE0C8; /* je: equal / zero */

loc_002FE046: ;
    eax = eax - 0xFEA6;
    if ((eax == 0)) goto loc_002FE0BB; /* je: equal / zero */

loc_002FE04D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002FE07B; /* je: equal / zero */

loc_002FE050: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002FE068; /* je: equal / zero */

loc_002FE053: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edi + 0x2E8); PUSH32(esp, 0x002FE060u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002FE060: ;
    esp = esp + 0xC;
    goto loc_002FE0FE;

loc_002FE068: ;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax);
    MEM32(edi + 0x304) = eax;

loc_002FE073: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_002FE0FE;

loc_002FE07B: ;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax);
    MEM32(edi + 0x300) = eax;
    MEM8(esi + 0xD) = MEM8(esi + 0xD) & 0xBF;
    _fa = (uint32_t)(MEM16(esi + 0x72)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x72), 1 (16-bit) */
    eax = MEM32(esi + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_002FE0AC; /* jne: not equal / not zero */

loc_002FE094: ;
    _fa = (uint32_t)(MEM16(esi + 0x46)) & 0xFFFFu; _fb = (uint32_t)(6) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x46), 6 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FE0AC; /* jne: not equal / not zero */

loc_002FE09B: ;
    _fa = (uint32_t)(MEM32(edi + 0x300)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x300), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FE0AC; /* jne: not equal / not zero */

loc_002FE0A4: ;
    eax = eax | 0x4000;
    MEM32(esi + 0xC) = eax;

loc_002FE0AC: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FE0B2u); RECOMP_ABI_CALL(0x002CF5FFu, sub_002CF5FF); /* call 0x002CF5FF */

loc_002FE0B2: ;
    POP32(esp, ecx);
    MEM32(esi + 0x188) = eax;
    goto loc_002FE073;

loc_002FE0BB: ;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax);
    MEM32(edi + 0x2FC) = eax;
    goto loc_002FE073;

loc_002FE0C8: ;
    eax = MEM32(ebp + 0x10);
    eax = eax + 4;
    PUSH32(esp, ebx);
    ebx = MEM32(eax + -4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002FE0DA; /* jne: not equal / not zero */

loc_002FE0D6: ;
    eax = 0; /* xor self */
    goto loc_002FE0FD;

loc_002FE0DA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(eax));
    eax = edi + 0x2F4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FE0E9u); RECOMP_ABI_CALL(0x002C86B1u, sub_002C86B1); /* call 0x002C86B1 */

loc_002FE0E9: ;
    MEM32(edi + 0x2F8) = ebx;
    MEM8(esi + 0x1F) = MEM8(esi + 0x1F) | 0x80;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | 8;
    eax = 0; /* xor self */
    esp = esp + 0xC;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002FE0FD: ;
    POP32(esp, ebx);

loc_002FE0FE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002FE102
 * Original: 0x002FE102 - 0x002FE17D (123 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FE102(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FE102: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(ebp + 0xC);
    ecx = ecx - 0x15B;
    edx = MEM32(ebp + 8);
    eax = MEM32(edx + 0x1CC);
    if ((ecx == 0)) goto loc_002FE15A; /* je: equal / zero */

loc_002FE119: ;
    ecx = ecx - 0xFEA6;
    if ((ecx == 0)) goto loc_002FE14F; /* je: equal / zero */

loc_002FE121: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002FE144; /* je: equal / zero */

loc_002FE124: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002FE139; /* je: equal / zero */

loc_002FE127: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x2E4); PUSH32(esp, 0x002FE134u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002FE134: ;
    esp = esp + 0xC;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002FE139: ;
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(eax + 0x304);
    goto loc_002FE174;

loc_002FE144: ;
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(eax + 0x300);
    goto loc_002FE174;

loc_002FE14F: ;
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(eax + 0x2FC);
    goto loc_002FE174;

loc_002FE15A: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(eax + 0x2F8));
    ecx = ecx + 4;
    MEM16(edx) = LO16(esi);
    eax = MEM32(eax + 0x2F4);
    POP32(esp, esi);

loc_002FE174: ;
    ecx = MEM32(ecx);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002FE17D
 * Original: 0x002FE17D - 0x002FE1A5 (40 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FE17D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FE17D: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM8(eax + 0x1F)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1F), 0x80 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FE1A4; /* je: equal / zero */

loc_002FE187: ;
    eax = MEM32(eax + 0x1CC);
    PUSH32(esp, MEM32(eax + 0x2F8));
    PUSH32(esp, 0x411EC4);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x002FE1A1u); RECOMP_ABI_CALL(0x00344289u, sub_00344289); /* call 0x00344289 */

loc_002FE1A1: ;
    esp = esp + 0xC;

loc_002FE1A4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002FE1A5
 * Original: 0x002FE1A5 - 0x002FE1DE (57 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FE1A5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FE1A5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esi + 0x1CC);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x2EC); PUSH32(esp, 0x002FE1BBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002FE1BB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x28) (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_AE(_fa, _fb)) goto loc_002FE1DC; /* jae: above or equal (unsigned >=) */

loc_002FE1C2: ;
    ecx = ZX16(MEM16(esi + 0xE6));
    esi = ecx;
    esi = esi << 3;
    eax = esi + eax + -1;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = eax << 3;

loc_002FE1DC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002FE1DE
 * Original: 0x002FE1DE - 0x002FE248 (106 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FE1DE(void)
{

loc_002FE1DE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x1CC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x2F0); PUSH32(esp, 0x002FE1FCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002FE1FC: ;
    eax = ZX16(MEM16(esi + 0xE4));
    ecx = eax;
    eax = MEM32(ebx);
    ecx = ecx << 3;
    eax = eax + ecx + -1;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    edx = 0; /* xor self */
    esp = esp + 0xC;
    ecx = eax;
    eax = ZX16(MEM16(esi + 0xE4));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    ecx = ecx << 3;
    MEM32(ebx) = ecx;
    ecx = ZX16(MEM16(esi + 0xE6));
    eax = MEM32(edi);
    esi = ecx;
    esi = esi << 3;
    eax = esi + eax + -1;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = eax << 3;
    MEM32(edi) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002FE248
 * Original: 0x002FE248 - 0x002FE462 (538 bytes, 164 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FE248(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FE248: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = MEM32(edi + 0x1CC);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FE25Cu); RECOMP_ABI_CALL(0x002FD4F9u, sub_002FD4F9); /* call 0x002FD4F9 */

loc_002FE25C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_002FE270; /* je: equal / zero */

loc_002FE261: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FE269u); RECOMP_ABI_CALL(0x002FD413u, sub_002FD413); /* call 0x002FD413 */

loc_002FE269: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_002FE277; /* je: equal / zero */

loc_002FE270: ;
    eax = 0; /* xor self */
    goto loc_002FE45E;

loc_002FE277: ;
    eax = MEM32(edi + 0x24);
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 0x28);
    ebx = ebx - MEM32(edi + 0x164);
    _fa = (uint32_t)(MEM8(edi + 0xD)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0xD), 4 (8-bit) */
    MEM32(ebp + 8) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_002FE29E; /* je: equal / zero */

loc_002FE28D: ;
    eax = MEM32(edi + 0x34);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002FE296; /* jbe: below or equal (unsigned <=) */

loc_002FE294: ;
    ebx = eax;

loc_002FE296: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FE29Cu); RECOMP_ABI_CALL(0x002CF539u, sub_002CF539); /* call 0x002CF539 */

loc_002FE29C: ;
    goto loc_002FE2AD;

loc_002FE29E: ;
    eax = MEM32(edi + 0x50);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002FE2A7; /* jbe: below or equal (unsigned <=) */

loc_002FE2A5: ;
    ebx = eax;

loc_002FE2A7: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FE2ADu); RECOMP_ABI_CALL(0x002C33ECu, sub_002C33EC); /* call 0x002C33EC */

loc_002FE2AD: ;
    MEM32(esi + 0x2B0) = eax;
    SET_LO16(eax, MEM16(edi + 0x72));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 2 (16-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_002FE2EB; /* jne: not equal / not zero */

loc_002FE2BE: ;
    _fa = (uint32_t)(MEM16(ebp + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0xC), 0 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002FE2EB; /* jbe: below or equal (unsigned <=) */

loc_002FE2C5: ;
    ecx = ZX16(MEM16(esi + 0x2AA));
    eax = MEM32(ebp + 8);
    eax = ecx + eax + -1;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ecx = ZX16(MEM16(esi + 0x2AC));
    edx = 0; /* xor self */
    MEM32(ebp + 8) = eax;
    eax = ecx + ebx + -1;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ebx = eax;

loc_002FE2EB: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FE44A; /* jne: not equal / not zero */

loc_002FE2F7: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FE44A; /* jne: not equal / not zero */

loc_002FE300: ;
    SET_LO16(ecx, MEM16(edi + 0x72));
    ebx = 0; /* xor self */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FE312; /* jne: not equal / not zero */

loc_002FE30C: ;
    eax = ZX16(MEM16(edi + 0x4E));
    goto loc_002FE314;

loc_002FE312: ;
    eax = ebx;

loc_002FE314: ;
    edx = MEM32(esi + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FE325; /* je: equal / zero */

loc_002FE31B: ;
    PUSH32(esp, 0x411F40);
    goto loc_002FE44F;

loc_002FE325: ;
    eax = ZX16(MEM16(edi + 0x40));
    _fa = (uint32_t)(MEM32(esi + 0xC0)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC0), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FE33B; /* je: equal / zero */

loc_002FE331: ;
    PUSH32(esp, 0x411F20);
    goto loc_002FE44F;

loc_002FE33B: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(ebx) (16-bit) */
    eax = MEM32(esi + 0xC4);
    if (CMP_NE(_fa, _fb)) goto loc_002FE38B; /* jne: not equal / not zero */

loc_002FE346: ;
    ecx = ZX16(MEM16(esi + 0x2AA));
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FE443; /* jne: not equal / not zero */

loc_002FE356: ;
    ecx = ZX16(MEM16(esi + 0x2AC));
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FE443; /* jne: not equal / not zero */

loc_002FE366: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    ecx = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_002FE39D; /* jle: less or equal (signed <=) */

loc_002FE36C: ;
    eax = eax + 0x60;

loc_002FE36F: ;
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + -4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FE443; /* jne: not equal / not zero */

loc_002FE378: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FE443; /* jne: not equal / not zero */

loc_002FE380: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 0x54;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x24) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002FE36F; /* jl: less (signed <) */

loc_002FE389: ;
    goto loc_002FE39D;

loc_002FE38B: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FE443; /* jne: not equal / not zero */

loc_002FE394: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FE443; /* jne: not equal / not zero */

loc_002FE39D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM16(edi + 0x72)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x72), LO16(ebx) (16-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002FE417; /* jne: not equal / not zero */

loc_002FE3A8: ;
    _fa = (uint32_t)(MEM16(esi + 0x2A8)) & 0xFFFFu; _fb = (uint32_t)(6) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x2A8), 6 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FE417; /* jne: not equal / not zero */

loc_002FE3B2: ;
    _fa = (uint32_t)(MEM32(esi + 0x300)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x300), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FE417; /* jne: not equal / not zero */

loc_002FE3BA: ;
    MEM32(esi + 0x28) = 3;
    MEM32(esi + 0x2C) = 2;

loc_002FE3C8: ;
    MEM8(esi + 0x41) = MEM8(esi + 0x41) & 0;
    eax = 0x2FD911;

loc_002FE3D1: ;
    PUSH32(esp, esi);
    MEM32(edi + 0x1A0) = eax;
    MEM32(edi + 0x1A8) = eax;
    MEM32(edi + 0x1B0) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FE3E9u); RECOMP_ABI_CALL(0x002FD440u, sub_002FD440); /* call 0x002FD440 */

loc_002FE3E9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_002FE45B; /* je: equal / zero */

loc_002FE3EE: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FE413; /* je: equal / zero */

loc_002FE3F4: ;
    PUSH32(esp, MEM32(esi + 0x24));
    ecx = MEM32(esi + 0xC4);
    eax = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FE404u); RECOMP_ABI_CALL(0x002FD7FCu, sub_002FD7FC); /* call 0x002FD7FC */

loc_002FE404: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_002FE45B; /* je: equal / zero */

loc_002FE409: ;
    MEM32(esi + 0x2DC) = 8;

loc_002FE413: ;
    eax = ebx;
    goto loc_002FE45D;

loc_002FE417: ;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = eax;
    _fa = (uint32_t)(MEM16(edi + 0x72)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x72), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FE3C8; /* jne: not equal / not zero */

loc_002FE423: ;
    _fa = (uint32_t)(MEM16(esi + 0x2AA)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x2AA), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FE435; /* jne: not equal / not zero */

loc_002FE42C: ;
    _fa = (uint32_t)(MEM16(esi + 0x2AC)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x2AC), LO16(ebx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FE3C8; /* je: equal / zero */

loc_002FE435: ;
    MEM32(ebp + 8) = ebx;
    MEM8(esi + 0x41) = 1;
    eax = 0x2FD979;
    goto loc_002FE3D1;

loc_002FE443: ;
    PUSH32(esp, 0x411F00);
    goto loc_002FE44F;

loc_002FE44A: ;
    PUSH32(esp, 0x411EE0);

loc_002FE44F: ;
    PUSH32(esp, 0x411D2C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FE459u); RECOMP_ABI_CALL(0x002CED88u, sub_002CED88); /* call 0x002CED88 */

loc_002FE459: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_002FE45B: ;
    eax = 0; /* xor self */

loc_002FE45D: ;
    POP32(esp, ebx);

loc_002FE45E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002FE462
 * Original: 0x002FE462 - 0x002FE6A6 (580 bytes, 181 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FE462(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FE462: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(edi + 0xD)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0xD), 4 (8-bit) */
    esi = MEM32(edi + 0x1CC);
    if (TEST_Z(_fa, _fb)) goto loc_002FE488; /* je: equal / zero */

loc_002FE477: ;
    eax = MEM32(edi + 0x30);
    ebx = MEM32(edi + 0x34);
    PUSH32(esp, edi);
    MEM32(ebp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FE486u); RECOMP_ABI_CALL(0x002CF539u, sub_002CF539); /* call 0x002CF539 */

loc_002FE486: ;
    goto loc_002FE4A6;

loc_002FE488: ;
    eax = MEM32(edi + 0x24);
    ebx = MEM32(edi + 0x28);
    ebx = ebx - MEM32(edi + 0x164);
    MEM32(ebp + 8) = eax;
    eax = MEM32(edi + 0x50);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002FE4A0; /* jbe: below or equal (unsigned <=) */

loc_002FE49E: ;
    ebx = eax;

loc_002FE4A0: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FE4A6u); RECOMP_ABI_CALL(0x002C33ECu, sub_002C33EC); /* call 0x002C33EC */

loc_002FE4A6: ;
    MEM32(esi + 0x2B0) = eax;
    _fa = (uint32_t)(MEM16(edi + 0x72)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x72), 2 (16-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_002FE4E1; /* jne: not equal / not zero */

loc_002FE4B4: ;
    _fa = (uint32_t)(MEM16(ebp + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0xC), 0 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002FE4E1; /* jbe: below or equal (unsigned <=) */

loc_002FE4BB: ;
    ecx = ZX16(MEM16(esi + 0x2AA));
    eax = MEM32(ebp + 8);
    eax = ecx + eax + -1;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ecx = ZX16(MEM16(esi + 0x2AC));
    edx = 0; /* xor self */
    MEM32(ebp + 8) = eax;
    eax = ecx + ebx + -1;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ebx = eax;

loc_002FE4E1: ;
    eax = MEM32(ebp + 8);
    ecx = 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002FE68E; /* ja: above (unsigned >) */

loc_002FE4F1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002FE68E; /* ja: above (unsigned >) */

loc_002FE4F9: ;
    MEM32(esi + 0x20) = ebx;
    ebx = 0; /* xor self */
    MEM32(esi + 0x1C) = eax;
    eax = 0; /* xor self */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(edi + 0x72)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x72), LO16(ebx) (16-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002FE58C; /* jne: not equal / not zero */

loc_002FE50D: ;
    _fa = (uint32_t)(MEM16(esi + 0x2A8)) & 0xFFFFu; _fb = (uint32_t)(6) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x2A8), 6 (16-bit) */
    ecx = ZX16(MEM16(edi + 0x4E));
    MEM32(esi + 0x24) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_002FE577; /* jne: not equal / not zero */

loc_002FE51E: ;
    _fa = (uint32_t)(MEM32(esi + 0x300)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x300), ebx (32-bit) */
    PUSH32(esp, 3);
    POP32(esp, eax);
    if (CMP_NE(_fa, _fb)) goto loc_002FE532; /* jne: not equal / not zero */

loc_002FE529: ;
    MEM32(esi + 0x28) = 2;
    goto loc_002FE54A;

loc_002FE532: ;
    _fa = (uint32_t)(MEM16(esi + 0x2AA)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x2AA), LO16(ebx) (16-bit) */
    MEM32(esi + 0x28) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002FE547; /* jne: not equal / not zero */

loc_002FE53E: ;
    _fa = (uint32_t)(MEM16(esi + 0x2AC)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x2AC), LO16(ebx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FE54A; /* je: equal / zero */

loc_002FE547: ;
    MEM32(ebp + 8) = ebx;

loc_002FE54A: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FE551u); RECOMP_ABI_CALL(0x002FD29Bu, sub_002FD29B); /* call 0x002FD29B */

loc_002FE551: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_002FE69F; /* je: equal / zero */

loc_002FE55B: ;
    eax = ZX16(MEM16(esi + 0x2AA));
    ecx = MEM32(esi + 0x44);
    MEM32(ecx + 8) = eax;
    eax = ZX16(MEM16(esi + 0x2AC));
    ecx = MEM32(esi + 0x44);
    MEM32(ecx + 0xC) = eax;
    goto loc_002FE5CF;

loc_002FE577: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(esi + 0x28) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FE581u); RECOMP_ABI_CALL(0x002FD29Bu, sub_002FD29B); /* call 0x002FD29B */

loc_002FE581: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_002FE5CF; /* jne: not equal / not zero */

loc_002FE587: ;
    goto loc_002FE69F;

loc_002FE58C: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FE599u); RECOMP_ABI_CALL(0x002FD29Bu, sub_002FD29B); /* call 0x002FD29B */

loc_002FE599: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_002FE69F; /* je: equal / zero */

loc_002FE5A3: ;
    eax = ZX16(MEM16(ebp + 0xC));
    ecx = MEM32(esi + 0x44);
    MEM32(ecx) = eax;
    _fa = (uint32_t)(MEM16(esi + 0x2A8)) & 0xFFFFu; _fb = (uint32_t)(6) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x2A8), 6 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FE5CF; /* jne: not equal / not zero */

loc_002FE5B6: ;
    _fa = (uint32_t)(MEM16(ebp + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0xC), 0 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002FE5CF; /* jbe: below or equal (unsigned <=) */

loc_002FE5BD: ;
    eax = MEM32(esi + 0x44);
    MEM32(eax + 0x10) = ebx;
    eax = MEM32(esi + 0x44);
    MEM32(eax + 0x14) = ebx;
    eax = MEM32(esi + 0x44);
    MEM32(eax + 0x18) = ebx;

loc_002FE5CF: ;
    MEM8(esi + 0xC4) = MEM8(esi + 0xC4) & 0;
    MEM8(esi + 0xCC) = MEM8(esi + 0xCC) & 0;
    _fa = (uint32_t)(MEM8(esi + 0x304)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x304), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002FE61A; /* jne: not equal / not zero */

loc_002FE5E5: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0x2FC));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FE5F3u); RECOMP_ABI_CALL(0x002FD2CAu, sub_002FD2CA); /* call 0x002FD2CA */

loc_002FE5F3: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FE69F; /* je: equal / zero */

loc_002FE5FE: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FE60C; /* je: equal / zero */

loc_002FE605: ;
    MEM8(eax + 0x80) = MEM8(eax + 0x80) & 0;

loc_002FE60C: ;
    eax = MEM32(esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FE61A; /* je: equal / zero */

loc_002FE613: ;
    MEM8(eax + 0x80) = MEM8(eax + 0x80) & 0;

loc_002FE61A: ;
    SET_LO8(eax, MEM8(esi + 0x304));
    SET_LO8(eax, LO8(eax) >> 1);
    SET_LO8(eax, ~LO8(eax));
    SET_LO8(eax, LO8(eax) & LO8(ebx));
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    MEM8(esi + 0xB2) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_002FE63F; /* je: equal / zero */

loc_002FE632: ;
    MEM8(esi + 0xB0) = LO8(ebx);
    eax = 0x2FDDAC;
    goto loc_002FE64B;

loc_002FE63F: ;
    MEM8(esi + 0xB0) = MEM8(esi + 0xB0) & 0;
    eax = 0x2FDD3B;

loc_002FE64B: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    MEM32(edi + 0x1A4) = eax;
    MEM32(edi + 0x1AC) = eax;
    MEM32(edi + 0x1B4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FE665u); RECOMP_ABI_CALL(0x002FD32Cu, sub_002FD32C); /* call 0x002FD32C */

loc_002FE665: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_002FE69F; /* je: equal / zero */

loc_002FE66B: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FE683; /* je: equal / zero */

loc_002FE671: ;
    PUSH32(esp, MEM32(esi + 0x3C));
    ecx = MEM32(esi + 0x44);
    eax = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FE67Eu); RECOMP_ABI_CALL(0x002FD7FCu, sub_002FD7FC); /* call 0x002FD7FC */

loc_002FE67E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_002FE69F; /* je: equal / zero */

loc_002FE683: ;
    MEM32(esi + 0x2DC) = MEM32(esi + 0x2DC) & 0;
    eax = ebx;
    goto loc_002FE6A1;

loc_002FE68E: ;
    PUSH32(esp, 0x411F60);
    PUSH32(esp, 0x411D4C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FE69Du); RECOMP_ABI_CALL(0x002CED88u, sub_002CED88); /* call 0x002CED88 */

loc_002FE69D: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_002FE69F: ;
    eax = 0; /* xor self */

loc_002FE6A1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002FE6A6
 * Original: 0x002FE6A6 - 0x002FE802 (348 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FE6A6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FE6A6: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x308);
    PUSH32(esp, 0x002FE6B2u); RECOMP_ABI_CALL(0x002B88E0u, sub_002B88E0); /* call 0x002B88E0 */

loc_002FE6B2: ;
    esi = MEM32(esp + 0x10);
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    POP32(esp, ecx);
    MEM32(esi + 0x1CC) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_002FE6D9; /* jne: not equal / not zero */

loc_002FE6C3: ;
    PUSH32(esp, 0x411F90);
    PUSH32(esp, 0x411F80);
    PUSH32(esp, 0x002FE6D2u); RECOMP_ABI_CALL(0x002CED88u, sub_002CED88); /* call 0x002CED88 */

loc_002FE6D2: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_002FE7F8;

loc_002FE6D9: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x411CD8);
    PUSH32(esp, esi);
    MEM32(edi + 0x2A4) = esi;
    PUSH32(esp, 0x002FE6ECu); RECOMP_ABI_CALL(0x002CF1A8u, sub_002CF1A8); /* call 0x002CF1A8 */

loc_002FE6EC: ;
    eax = esi + 0x220;
    ecx = MEM32(eax);
    MEM32(edi + 0x2E4) = ecx;
    MEM32(eax) = 0x2FE102;
    eax = esi + 0x21C;
    ecx = MEM32(eax);
    MEM32(edi + 0x2E8) = ecx;
    MEM32(eax) = 0x2FE02A;
    MEM32(esi + 0x224) = 0x2FE17D;
    MEM32(edi + 0x2F4) = MEM32(edi + 0x2F4) & 0;
    MEM32(edi + 0x2F8) = MEM32(edi + 0x2F8) & 0;
    MEM32(edi + 0x300) = MEM32(edi + 0x300) & 0;
    MEM32(edi + 0x2FC) = 0x4B;
    MEM32(edi + 0x304) = 3;
    eax = 0x2FD911;
    MEM32(esi + 0x1A0) = eax;
    MEM32(esi + 0x1A8) = eax;
    MEM32(esi + 0x1B0) = eax;
    eax = 0x2FDD3B;
    MEM32(esi + 0x1A4) = eax;
    MEM32(esi + 0x1AC) = eax;
    MEM32(esi + 0x1B4) = eax;
    eax = esi + 0x1C4;
    ecx = MEM32(eax);
    MEM32(esi + 0x18C) = 0x2FD86F;
    MEM32(esi + 0x190) = 0x2FE248;
    MEM32(esi + 0x194) = 0x2FDB94;
    MEM32(esi + 0x198) = 0x2FE462;
    MEM32(esi + 0x19C) = 0x2FDF2D;
    MEM32(esi + 0x1C0) = 0x2FDFEC;
    MEM32(edi + 0x2EC) = ecx;
    MEM32(eax) = 0x2FE1A5;
    eax = esi + 0x1C8;
    ecx = MEM32(eax);
    MEM32(edi + 0x2F0) = ecx;
    MEM8(esi + 0xD) = MEM8(esi + 0xD) | 1;
    esp = esp + 0xC;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 0 (32-bit) */
    MEM32(eax) = 0x2FE1DE;
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_002FE7EE; /* jne: not equal / not zero */

loc_002FE7E7: ;
    PUSH32(esp, 0x002FE7ECu); RECOMP_ABI_CALL(0x002FD218u, sub_002FD218); /* call 0x002FD218 */

loc_002FE7EC: ;
    goto loc_002FE7F3;

loc_002FE7EE: ;
    PUSH32(esp, 0x002FE7F3u); RECOMP_ABI_CALL(0x002FD1C0u, sub_002FD1C0); /* call 0x002FD1C0 */

loc_002FE7F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_002FE7FC; /* jne: not equal / not zero */

loc_002FE7F8: ;
    eax = 0; /* xor self */
    goto loc_002FE7FF;

loc_002FE7FC: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002FE7FF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002FE802
 * Original: 0x002FE802 - 0x002FE963 (353 bytes, 133 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FE802(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FE802: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002FE828; /* jle: less or equal (signed <=) */

loc_002FE815: ;
    esi = ecx;
    ecx = ecx >> 2;
    eax = eax | 0xFFFFFFFFu;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_002FE828: ;
    edi = MEM32(ebp + 8);
    eax = MEM32(edi + 0x1E4);
    ebx = MEM32(edi + 0x1D0);
    esi = MEM32(edi + 0x1E0);
    MEM32(ebp + 0xC) = eax;
    MEM32(ebp + -12) = ebx;
    MEM32(ebp + 8) = edx;
    goto loc_002FE929;

loc_002FE84B: ;
    eax = ZX8(MEM8(esi));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FE909; /* je: equal / zero */

loc_002FE85A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FE8C7; /* je: equal / zero */

loc_002FE85F: ;
    ecx = MEM32(edi + 0x24);
    MEM32(ebp + -8) = ecx;
    ecx = MEM32(ebp + 8);
    ebx = 0; /* xor self */

loc_002FE86A: ;
    edx = eax;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((6) & 31u));
    edx = edx & 3;
    eax = eax & 0x3F;
    if (((int32_t)eax <= 0)) goto loc_002FE8AF; /* jle: less or equal (signed <=) */

loc_002FE877: ;
    MEM32(ebp + -4) = eax;

loc_002FE87A: ;
    eax = ebx;
    eax = eax & 3;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax - 0;
    if ((eax == 0)) goto loc_002FE8A3; /* je: equal / zero */

loc_002FE885: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002FE89C; /* je: equal / zero */

loc_002FE888: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002FE893; /* je: equal / zero */

loc_002FE88B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002FE8AA; /* jne: not equal / not zero */

loc_002FE88E: ;
    MEM8(ecx) = MEM8(ecx) | LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_002FE8AA;

loc_002FE893: ;
    SET_LO8(eax, LO8(edx));
    SET_LO8(eax, LO8(eax) << 2);

loc_002FE898: ;
    MEM8(ecx) = MEM8(ecx) | LO8(eax);
    goto loc_002FE8AA;

loc_002FE89C: ;
    SET_LO8(eax, LO8(edx));
    SET_LO8(eax, LO8(eax) << 4);
    goto loc_002FE898;

loc_002FE8A3: ;
    SET_LO8(eax, LO8(edx));
    SET_LO8(eax, LO8(eax) << 6);
    MEM8(ecx) = LO8(eax);

loc_002FE8AA: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002FE87A; /* jne: not equal / not zero */

loc_002FE8AF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + -8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FE920; /* jge: greater or equal (signed >=) */

loc_002FE8B4: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FE94A; /* je: equal / zero */

loc_002FE8BE: ;
    eax = ZX8(MEM8(esi));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_002FE86A;

loc_002FE8C7: ;
    ebx = ZX8(MEM8(esi + 2));
    eax = ZX8(MEM8(esi + 3));
    ebx = ebx << 8;
    ebx = ebx + eax;
    eax = ebx + 4;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002FE94A; /* jl: less (signed <) */

loc_002FE8DC: ;
    ecx = ZX8(MEM8(esi + 1));
    edx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    eax = esi + 4;
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi));
    eax = eax << 8;
    edx = edx + eax;
    ecx = ecx + edx;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FE8F8u); RECOMP_ABI_CALL(0x002B8940u, sub_002B8940); /* call 0x002B8940 */

loc_002FE8F8: ;
    esp = esp + 0xC;
    PUSH32(esp, 0xFFFFFFFCu);
    POP32(esp, eax);
    eax = eax - ebx;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + eax;
    esi = esi + ebx + 4;
    goto loc_002FE920;

loc_002FE909: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002FE94A; /* jl: less (signed <) */

loc_002FE90E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FE918u); RECOMP_ABI_CALL(0x002B8940u, sub_002B8940); /* call 0x002B8940 */

loc_002FE918: ;
    esp = esp + 0xC;
    esi = esi + ebx;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - ebx;

loc_002FE920: ;
    ebx = MEM32(ebp + -12);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - ebx;
    MEM32(ebp + 8) = MEM32(ebp + 8) + ebx;

loc_002FE929: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002FE84B; /* jg: greater (signed >) */

loc_002FE933: ;
    eax = MEM32(ebp + 0xC);
    MEM32(edi + 0x1E4) = eax;
    eax = 0; /* xor self */
    MEM32(edi + 0x1E0) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002FE945: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_002FE94A: ;
    PUSH32(esp, MEM32(edi + 0x164));
    PUSH32(esp, 0x411FB0);
    PUSH32(esp, MEM32(edi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FE95Cu); RECOMP_ABI_CALL(0x002CED88u, sub_002CED88); /* call 0x002CED88 */

loc_002FE95C: ;
    esp = esp + 0xC;
    eax = 0; /* xor self */
    goto loc_002FE945;

}

/**
 * sub_002FE963
 * Original: 0x002FE963 - 0x002FE982 (31 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FE963(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FE963: ;
    eax = MEM32(esp + 4);
    ecx = 0x2FE802;
    MEM32(eax + 0x1A0) = ecx;
    MEM32(eax + 0x1A8) = ecx;
    MEM32(eax + 0x1B0) = ecx;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_002FE982
 * Original: 0x002FE982 - 0x002FEB9C (538 bytes, 197 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FE982(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FE982: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    ecx = MEM32(ebx + 0x1E0);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x1E4);
    eax = 0; /* xor self */
    edx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    MEM32(ebp + -4) = esi;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002FEB56; /* jle: less or equal (signed <=) */

loc_002FE9AC: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FEB56; /* jge: greater or equal (signed >=) */

loc_002FE9B5: ;
    esi = ZX8(MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -12) = ecx;
    ecx = esi;
    ecx = ecx & 0xC0;
    ecx = ecx - 0;
    if ((ecx == 0)) goto loc_002FEADA; /* je: equal / zero */

loc_002FE9D0: ;
    ecx = ecx - 0x40;
    if ((ecx == 0)) goto loc_002FEA42; /* je: equal / zero */

loc_002FE9D5: ;
    ecx = ecx - 0x40;
    if ((ecx == 0)) goto loc_002FE9F9; /* je: equal / zero */

loc_002FE9DA: ;
    ecx = ecx - 0x40;
    if ((ecx != 0)) goto loc_002FEB49; /* jne: not equal / not zero */

loc_002FE9E3: ;
    esi = esi & 0xF;
    eax = esi;
    goto loc_002FEAC4;

loc_002FE9ED: ;
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) << 4);
    MEM8(edi) = LO8(ecx);
    goto loc_002FEB49;

loc_002FE9F9: ;
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((3) & 31u));
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FEA2D; /* je: equal / zero */

loc_002FEA06: ;
    ecx = MEM32(ecx * 4 + 0x411FF0);
    ecx = ecx + eax;
    ecx = ecx & 0xF;
    eax = ecx;
    ecx = edx;
    SET_LO8(ecx, LO8(ecx) & 1);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FEA26; /* je: equal / zero */

loc_002FEA1E: ;
    MEM8(edi) = MEM8(edi) | LO8(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = edi;
    goto loc_002FEA2D;

loc_002FEA26: ;
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) << 4);
    MEM8(edi) = LO8(ecx);

loc_002FEA2D: ;
    esi = esi & 7;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FEB49; /* je: equal / zero */

loc_002FEA39: ;
    ecx = MEM32(esi * 4 + 0x411FF0);
    goto loc_002FEABD;

loc_002FEA42: ;
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((4) & 31u));
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FEA76; /* je: equal / zero */

loc_002FEA4F: ;
    ecx = MEM32(ecx * 4 + 0x411FE0);
    ecx = ecx + eax;
    ecx = ecx & 0xF;
    eax = ecx;
    ecx = edx;
    SET_LO8(ecx, LO8(ecx) & 1);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FEA6F; /* je: equal / zero */

loc_002FEA67: ;
    MEM8(edi) = MEM8(edi) | LO8(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = edi;
    goto loc_002FEA76;

loc_002FEA6F: ;
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) << 4);
    MEM8(edi) = LO8(ecx);

loc_002FEA76: ;
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FEAAA; /* je: equal / zero */

loc_002FEA83: ;
    ecx = MEM32(ecx * 4 + 0x411FE0);
    ecx = ecx + eax;
    ecx = ecx & 0xF;
    eax = ecx;
    ecx = edx;
    SET_LO8(ecx, LO8(ecx) & 1);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FEAA3; /* je: equal / zero */

loc_002FEA9B: ;
    MEM8(edi) = MEM8(edi) | LO8(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = edi;
    goto loc_002FEAAA;

loc_002FEAA3: ;
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) << 4);
    MEM8(edi) = LO8(ecx);

loc_002FEAAA: ;
    esi = esi & 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FEB49; /* je: equal / zero */

loc_002FEAB6: ;
    ecx = MEM32(esi * 4 + 0x411FE0);

loc_002FEABD: ;
    ecx = ecx + eax;
    ecx = ecx & 0xF;
    eax = ecx;

loc_002FEAC4: ;
    ecx = edx;
    SET_LO8(ecx, LO8(ecx) & 1);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FE9ED; /* je: equal / zero */

loc_002FEAD2: ;
    MEM8(edi) = MEM8(edi) | LO8(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = edi;
    goto loc_002FEB49;

loc_002FEADA: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FEAEC; /* je: equal / zero */

loc_002FEADF: ;
    MEM8(edi) = MEM8(edi) | LO8(eax);
    eax = ZX8(MEM8(edi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = edi;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_002FEAF3;

loc_002FEAEC: ;
    ecx = eax;
    ecx = ecx << 4;
    eax = eax | ecx;

loc_002FEAF3: ;
    edx = edx + esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -20) = edx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002FEB3A; /* jle: less or equal (signed <=) */

loc_002FEAFF: ;
    SET_LO8(ebx, LO8(eax));
    SET_HI8(ebx, LO8(ebx));
    ecx = esi + -1;
    ecx = ecx >> 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -16) = ecx;
    edx = ecx;
    ecx = ecx >> 2;
    eax = ebx;
    eax = eax << 0x10;
    SET_LO16(eax, LO16(ebx));
    ebx = MEM32(ebp + 8);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    edi = MEM32(ebp + 0xC);
    eax = edx;
    edx = MEM32(ebp + -20);
    edi = edi + eax;
    eax = (uint32_t)(-(int32_t)eax);
    esi = esi + eax * 2;
    eax = MEM32(ebp + -8);
    MEM32(ebp + 0xC) = edi;

loc_002FEB3A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FEB46; /* jne: not equal / not zero */

loc_002FEB3F: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(edi) = MEM8(edi) & 0xF0;
    MEM32(ebp + 0xC) = edi;

loc_002FEB46: ;
    eax = eax & 0xF;

loc_002FEB49: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    ecx = MEM32(ebp + -12);
    if (CMP_G(_fas, _fbs)) goto loc_002FE9AC; /* jg: greater (signed >) */

loc_002FEB56: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 0x10) (32-bit) */
    eax = MEM32(ebp + -4);
    MEM32(ebx + 0x1E0) = ecx;
    MEM32(ebx + 0x1E4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002FEB94; /* je: equal / zero */

loc_002FEB6A: ;
    eax = 0x412050;
    if (CMP_L(_fas, _fbs)) goto loc_002FEB76; /* jl: less (signed <) */

loc_002FEB71: ;
    eax = 0x412044;

loc_002FEB76: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(ebx + 0x164));
    PUSH32(esp, eax);
    PUSH32(esp, 0x412010);
    PUSH32(esp, MEM32(ebx));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FEB8Du); RECOMP_ABI_CALL(0x002CED88u, sub_002CED88); /* call 0x002CED88 */

loc_002FEB8D: ;
    esp = esp + 0x18;
    eax = 0; /* xor self */
    goto loc_002FEB97;

loc_002FEB94: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002FEB97: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002FEB9C
 * Original: 0x002FEB9C - 0x002FEBDA (62 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FEB9C(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FEB9C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    if (CMP_LE(_fas, _fbs)) goto loc_002FEBCF; /* jle: less or equal (signed <=) */

loc_002FEBAA: ;
    esi = MEM32(ebp + 8);

loc_002FEBAD: ;
    PUSH32(esp, MEM32(esi + 0x24));
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FEBB7u); RECOMP_ABI_CALL(0x002FE982u, sub_002FE982); /* call 0x002FE982 */

loc_002FEBB7: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FEBD6; /* je: equal / zero */

loc_002FEBBE: ;
    eax = MEM32(esi + 0x1D0);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - eax;
    edi = edi + eax;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002FEBAD; /* jg: greater (signed >) */

loc_002FEBCF: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002FEBD2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002FEBD6: ;
    eax = 0; /* xor self */
    goto loc_002FEBD2;

}

/**
 * sub_002FEBDA
 * Original: 0x002FEBDA - 0x002FEBF3 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FEBDA(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FEBDA: ;
    eax = MEM32(esp + 4);
    ecx = 0x2FEB9C;
    MEM32(eax + 0x1A0) = ecx;
    MEM32(eax + 0x1A8) = ecx;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_002FEBF3
 * Original: 0x002FEBF3 - 0x002FEC17 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FEBF3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FEBF3: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xD), 4 (8-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_002FEC06; /* je: equal / zero */

loc_002FEBFF: ;
    PUSH32(esp, 0x002FEC04u); RECOMP_ABI_CALL(0x002CF539u, sub_002CF539); /* call 0x002CF539 */

loc_002FEC04: ;
    goto loc_002FEC0B;

loc_002FEC06: ;
    PUSH32(esp, 0x002FEC0Bu); RECOMP_ABI_CALL(0x002C33ECu, sub_002C33EC); /* call 0x002C33EC */

loc_002FEC0B: ;
    MEM32(esi + 0x1CC) = eax;
    POP32(esp, ecx);
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002FEC17
 * Original: 0x002FEC17 - 0x002FEDD7 (448 bytes, 153 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FEC17(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FEC17: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ecx = MEM32(esi + 0x1DC);
    ecx = ecx + MEM32(esi + 0x1D8);
    eax = MEM32(esi + 0x1E0);
    MEM32(ebp + -12) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ecx (32-bit) */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + 8) = ecx;
    if (CMP_G(_fas, _fbs)) goto loc_002FEC67; /* jg: greater (signed >) */

loc_002FEC48: ;
    ecx = eax;
    ecx = ecx - MEM32(esi + 0x1E0);
    MEM32(esi + 0x1E0) = eax;
    MEM32(esi + 0x1E4) = MEM32(esi + 0x1E4) + ecx;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002FEC5F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_002FEC64: ;
    edx = MEM32(ebp + -8);

loc_002FEC67: ;
    ebx = ZX8(MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = 1;
    goto loc_002FEC85;

loc_002FEC77: ;
    edi = ZX8(MEM8(edx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FEC8D; /* jne: not equal / not zero */

loc_002FEC7E: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002FEC85: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ecx (32-bit) */
    MEM32(ebp + -8) = edx;
    if (CMP_G(_fas, _fbs)) goto loc_002FEC77; /* jg: greater (signed >) */

loc_002FEC8D: ;
    ecx = eax + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -12) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002FED08; /* jb: below (unsigned <) */

loc_002FEC95: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FECC4; /* je: equal / zero */

loc_002FEC9B: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FECC4; /* je: equal / zero */

loc_002FECA1: ;
    eax = eax - MEM32(esi + 0x1E0);
    PUSH32(esp, esi);
    MEM32(esi + 0x1E4) = MEM32(esi + 0x1E4) + eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FECB3u); RECOMP_ABI_CALL(0x002CB4D3u, sub_002CB4D3); /* call 0x002CB4D3 */

loc_002FECB3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_002FEDCF; /* je: equal / zero */

loc_002FECBC: ;
    eax = MEM32(esi + 0x1E0);
    goto loc_002FED08;

loc_002FECC4: ;
    eax = eax - MEM32(ebp + 8);
    PUSH32(esp, esi);
    edi = eax;
    eax = MEM32(ebp + 8);
    eax = eax - MEM32(esi + 0x1E0);
    MEM32(esi + 0x1E4) = MEM32(esi + 0x1E4) + eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FECDEu); RECOMP_ABI_CALL(0x002CB4D3u, sub_002CB4D3); /* call 0x002CB4D3 */

loc_002FECDE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_002FEDCF; /* je: equal / zero */

loc_002FECE7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    eax = MEM32(esi + 0x1E0);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002FECFF; /* jle: less or equal (signed <=) */

loc_002FECF1: ;
    ecx = MEM32(ebp + 8);
    SET_LO8(ecx, MEM8(ecx));
    MEM8(eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002FECF1; /* jne: not equal / not zero */

loc_002FECFF: ;
    ecx = MEM32(esi + 0x1E0);
    MEM32(ebp + 8) = ecx;

loc_002FED08: ;
    ecx = MEM32(ebp + -4);
    ecx = ecx - 0;
    if ((ecx == 0)) goto loc_002FEDA5; /* je: equal / zero */

loc_002FED14: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002FED7F; /* je: equal / zero */

loc_002FED17: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002FED5A; /* je: equal / zero */

loc_002FED1A: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002FED6F; /* jne: not equal / not zero */

loc_002FED1D: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FED4E; /* jne: not equal / not zero */

loc_002FED23: ;
    _fa = (uint32_t)(MEM8(eax + -2)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + -2), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FED4E; /* jne: not equal / not zero */

loc_002FED29: ;
    edx = MEM32(ebp + 8);
    SET_LO8(ecx, MEM8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x7E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x7E (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002FED4E; /* jae: above or equal (unsigned >=) */

loc_002FED33: ;
    SET_LO8(ecx, LO8(ecx) + 2);
    MEM8(edx) = LO8(ecx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x7F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x7F (8-bit) */
    SET_LO8(ecx, MEM8(eax + -1));
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(eax + -2) = LO8(ecx);
    MEM32(ebp + -4) = edx;
    goto loc_002FEC8D;

loc_002FED4E: ;
    MEM32(ebp + -4) = 2;
    goto loc_002FEC8D;

loc_002FED5A: ;
    ecx = 0; /* xor self */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002FED8C; /* jg: greater (signed >) */

loc_002FED62: ;
    MEM8(eax) = MEM8(eax) & 0;
    MEM32(ebp + 8) = eax;
    MEM32(ebp + -4) = ecx;

loc_002FED6B: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002FED6C: ;
    MEM8(eax) = LO8(ebx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002FED6F: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002FEC64; /* jg: greater (signed >) */

loc_002FED7A: ;
    goto loc_002FEC48;

loc_002FED7F: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002FEDB6; /* jle: less or equal (signed <=) */

loc_002FED85: ;
    MEM32(ebp + -4) = 3;

loc_002FED8C: ;
    edi = 0x80;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002FEDC6; /* jle: less or equal (signed <=) */

loc_002FED96: ;
    MEM8(eax) = 0x81;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(ebx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - edi;
    goto loc_002FEC8D;

loc_002FEDA5: ;
    ecx = 0; /* xor self */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002FED62; /* jle: less or equal (signed <=) */

loc_002FEDAD: ;
    MEM32(ebp + -4) = 2;
    goto loc_002FED8C;

loc_002FEDB6: ;
    ecx = MEM32(ebp + 8);
    MEM8(ecx) = MEM8(ecx) + 1;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0x7F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0x7F (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FED6C; /* jne: not equal / not zero */

loc_002FEDC0: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    goto loc_002FED6C;

loc_002FEDC6: ;
    SET_LO8(ecx, 1);
    SET_LO8(ecx, LO8(ecx) - MEM8(ebp + 0xC));
    MEM8(eax) = LO8(ecx);
    goto loc_002FED6B;

loc_002FEDCF: ;
    eax = eax | 0xFFFFFFFFu;
    goto loc_002FEC5F;

}

/**
 * sub_002FEDD7
 * Original: 0x002FEDD7 - 0x002FEE2B (84 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FEDD7(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FEDD7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM16(ebx + 0x46)) & 0xFFFFu; _fb = (uint32_t)(6) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 0x46), 6 (16-bit) */
    eax = MEM32(ebx + 0x1CC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002FEDF3; /* jne: not equal / not zero */

loc_002FEDF0: ;
    MEM32(ebp + 8) = eax;

loc_002FEDF3: ;
    edi = MEM32(ebp + 0x10);
    goto loc_002FEE1A;

loc_002FEDF8: ;
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FEE01; /* jge: greater or equal (signed >=) */

loc_002FEDFF: ;
    esi = edi;

loc_002FEE01: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FEE0Eu); RECOMP_ABI_CALL(0x002FEC17u, sub_002FEC17); /* call 0x002FEC17 */

loc_002FEE0E: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_002FEE26; /* jl: less (signed <) */

loc_002FEE15: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + esi;
    edi = edi - esi;

loc_002FEE1A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_002FEDF8; /* jg: greater (signed >) */

loc_002FEE1E: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002FEE21: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002FEE26: ;
    eax = eax | 0xFFFFFFFFu;
    goto loc_002FEE21;

}

/**
 * sub_002FEE2B
 * Original: 0x002FEE2B - 0x002FEF48 (285 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FEE2B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FEE2B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = MEM32(edi + 0x1E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ebx = MEM32(edi + 0x1E0);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002FEF16; /* jle: less or equal (signed <=) */

loc_002FEE49: ;
    PUSH32(esp, esi);

loc_002FEE4A: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002FEF15; /* jle: less or equal (signed <=) */

loc_002FEE55: ;
    esi = (uint32_t)(int32_t)SMEM8(ebx);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x80 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_002FEE6B; /* jl: less (signed <) */

loc_002FEE65: ;
    esi = esi - 0x100;

loc_002FEE6B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_002FEED1; /* jge: greater or equal (signed >=) */

loc_002FEE6F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF80u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFF80u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FEF0A; /* je: equal / zero */

loc_002FEE78: ;
    edx = 0; /* xor self */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FEE96; /* jge: greater or equal (signed >=) */

loc_002FEE81: ;
    edx = edx - ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0x412090);
    PUSH32(esp, MEM32(edi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FEE90u); RECOMP_ABI_CALL(0x002CF351u, sub_002CF351); /* call 0x002CF351 */

loc_002FEE90: ;
    edx = MEM32(ebp + 0x10);
    esp = esp + 0xC;

loc_002FEE96: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - edx;
    eax = (uint32_t)(int32_t)SMEM8(ebx);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    MEM32(ebp + -8) = ebx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002FEF0A; /* jle: less or equal (signed <=) */

loc_002FEEA7: ;
    edi = MEM32(ebp + 0xC);
    SET_LO8(ebx, LO8(eax));
    SET_HI8(ebx, LO8(ebx));
    ecx = edx;
    esi = ecx;
    ecx = ecx >> 2;
    eax = ebx;
    eax = eax << 0x10;
    SET_LO16(eax, LO16(ebx));
    ebx = MEM32(ebp + -8);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx & 3;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + edx;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    edi = MEM32(ebp + 8);
    goto loc_002FEF0A;

loc_002FEED1: ;
    eax = esi + 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FEEF1; /* jge: greater or equal (signed >=) */

loc_002FEED8: ;
    esi = esi - ecx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, 0x412090);
    PUSH32(esp, MEM32(edi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FEEE8u); RECOMP_ABI_CALL(0x002CF351u, sub_002CF351); /* call 0x002CF351 */

loc_002FEEE8: ;
    eax = MEM32(ebp + 0x10);
    esp = esp + 0xC;
    esi = eax + -1;

loc_002FEEF1: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FEEFCu); RECOMP_ABI_CALL(0x002B8940u, sub_002B8940); /* call 0x002B8940 */

loc_002FEEFC: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + esi;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - esi;
    esp = esp + 0xC;
    ebx = ebx + esi;
    MEM32(ebp + -4) = MEM32(ebp + -4) - esi;

loc_002FEF0A: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_002FEE4A; /* jg: greater (signed >) */

loc_002FEF15: ;
    POP32(esp, esi);

loc_002FEF16: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    MEM32(edi + 0x1E0) = ebx;
    MEM32(edi + 0x1E4) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_002FEF41; /* jle: less or equal (signed <=) */

loc_002FEF28: ;
    PUSH32(esp, MEM32(edi + 0x164));
    PUSH32(esp, 0x41205C);
    PUSH32(esp, MEM32(edi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FEF3Au); RECOMP_ABI_CALL(0x002CED88u, sub_002CED88); /* call 0x002CED88 */

loc_002FEF3A: ;
    esp = esp + 0xC;
    eax = 0; /* xor self */
    goto loc_002FEF44;

loc_002FEF41: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002FEF44: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002FEF48
 * Original: 0x002FEF48 - 0x002FEF8C (68 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FEF48(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FEF48: ;
    eax = MEM32(esp + 4);
    ecx = 0x2FEE2B;
    MEM32(eax + 0x1A0) = ecx;
    MEM32(eax + 0x1A8) = ecx;
    MEM32(eax + 0x1B0) = ecx;
    ecx = 0x2FEDD7;
    MEM32(eax + 0x198) = 0x2FEBF3;
    MEM32(eax + 0x1A4) = 0x2FEC17;
    MEM32(eax + 0x1AC) = ecx;
    MEM32(eax + 0x1B4) = ecx;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_002FEF8C
 * Original: 0x002FEF8C - 0x002FEFF9 (109 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FEF8C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FEF8C: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x1CC);
    _fa = (uint32_t)(MEM32(esi + 0x60)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x60), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FEFF4; /* jne: not equal / not zero */

loc_002FEF9D: ;
    PUSH32(esp, 0x9FF8);
    PUSH32(esp, 0x002FEFA7u); RECOMP_ABI_CALL(0x002B88E0u, sub_002B88E0); /* call 0x002B88E0 */

loc_002FEFA7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    MEM32(esi + 0x60) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_002FEFC4; /* jne: not equal / not zero */

loc_002FEFAF: ;
    PUSH32(esp, 0x4120DC);
    PUSH32(esp, 0x4120CC);
    PUSH32(esp, 0x002FEFBEu); RECOMP_ABI_CALL(0x002CED88u, sub_002CED88); /* call 0x002CED88 */

loc_002FEFBE: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002FEFC4: ;
    ecx = 0xFF;

loc_002FEFC9: ;
    edx = MEM32(esi + 0x60);
    eax = ecx;
    eax = eax << 3;
    MEM8(edx + eax + 6) = LO8(ecx);
    edx = MEM32(esi + 0x60);
    MEM8(edx + eax + 7) = LO8(ecx);
    edx = MEM32(esi + 0x60);
    MEM16(edx + eax + 4) = 1;
    edx = MEM32(esi + 0x60);
    MEM32(eax + edx) = MEM32(eax + edx) & 0;
    eax = ecx;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002FEFC9; /* jne: not equal / not zero */

loc_002FEFF4: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002FEFF9
 * Original: 0x002FEFF9 - 0x002FF323 (810 bytes, 279 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FEFF9(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FEFF9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x20;
    eax = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x1CC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x44);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(ebp + -4) = eax;
    MEM32(ebp + 0x10) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_002FF086; /* je: equal / zero */

loc_002FF01E: ;
    eax = MEM32(esi + 0x50);
    ecx = ZX16(MEM16(eax + 4));
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002FF05D; /* jle: less or equal (signed <=) */

loc_002FF02B: ;
    edi = edi + edx;
    MEM32(esi + 0x44) = edi;

loc_002FF030: ;
    eax = MEM32(eax);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002FF03B; /* jle: less or equal (signed <=) */

loc_002FF037: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002FF030; /* jne: not equal / not zero */

loc_002FF03B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FF055; /* je: equal / zero */

loc_002FF03F: ;
    ecx = MEM32(ebp + 0xC);
    edx = edx + ecx;

loc_002FF044: ;
    SET_LO8(ecx, MEM8(eax + 6));
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(edx) = LO8(ecx);
    eax = MEM32(eax);
    if ((_fa == 0)) goto loc_002FF055; /* je: equal / zero */

loc_002FF051: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002FF044; /* jne: not equal / not zero */

loc_002FF055: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002FF058: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_002FF05D: ;
    edi = MEM32(ebp + 0xC);
    edi = edi + ecx;
    edx = edx - ecx;
    MEM32(ebp + -4) = edi;
    MEM32(ebp + 0x10) = edx;
    MEM32(ebp + 0xC) = edi;

loc_002FF06D: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ZX8(MEM8(eax + 6));
    edi = MEM32(ebp + 0xC);
    eax = MEM32(eax);
    MEM8(edi) = LO8(edx);
    if ((_fa == 0)) goto loc_002FF082; /* je: equal / zero */

loc_002FF07E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002FF06D; /* jne: not equal / not zero */

loc_002FF082: ;
    MEM32(esi + 0x44) = MEM32(esi + 0x44) & 0;

loc_002FF086: ;
    eax = MEM32(ebx + 0x1E0);
    ebx = MEM32(esi + 0x3C);
    edi = MEM32(esi + 0x58);
    MEM32(ebp + 0xC) = eax;
    eax = ZX16(MEM16(esi + 0x30));
    MEM32(ebp + -8) = eax;
    eax = MEM32(esi + 0x38);
    MEM32(ebp + -12) = eax;
    eax = MEM32(esi + 0x40);
    MEM32(ebp + -20) = eax;
    eax = MEM32(esi + 0x54);
    MEM32(ebp + -16) = eax;
    eax = MEM32(esi + 0x5C);
    MEM32(ebp + -24) = eax;
    goto loc_002FF25B;

loc_002FF0B9: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002FF267; /* jl: less (signed <) */

loc_002FF0C5: ;
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -12);
    edx = ZX8(MEM8(edx));
    ecx = ecx << 8;
    ecx = ecx | edx;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + -8) (32-bit) */
    MEM32(ebp + -12) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_002FF0F5; /* jge: greater or equal (signed >=) */

loc_002FF0E1: ;
    edx = MEM32(ebp + 0xC);
    edx = ZX8(MEM8(edx));
    ecx = ecx << 8;
    ecx = ecx | edx;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -12) = ecx;
    ebx = ebx + 8;

loc_002FF0F5: ;
    ebx = ebx - MEM32(ebp + -8);
    edx = MEM32(ebp + -12);
    eax = eax - MEM32(ebp + -8);
    ecx = ebx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((LO8(ecx)) & 31u));
    MEM32(ebp + -28) = ebx;
    MEM32(esi + 0x48) = eax;
    edx = edx & MEM32(ebp + -20);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x101) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0x101 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FF2C8; /* je: equal / zero */

loc_002FF116: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0x100 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FF1AF; /* jne: not equal / not zero */

loc_002FF121: ;
    eax = MEM32(esi + 0x60);
    edx = MEM32(esi + 0x48);
    PUSH32(esp, 9);
    POP32(esp, ecx);
    edi = eax + 0x810;
    eax = eax + 0xFF0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -20) = 0x1FF;
    MEM32(ebp + -24) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_002FF267; /* jl: less (signed <) */

loc_002FF14A: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -12);
    ecx = ZX8(MEM8(ecx));
    eax = eax << 8;
    eax = eax | ecx;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 9 (32-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_002FF17A; /* jge: greater or equal (signed >=) */

loc_002FF166: ;
    ecx = MEM32(ebp + 0xC);
    ecx = ZX8(MEM8(ecx));
    eax = eax << 8;
    eax = eax | ecx;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -12) = eax;
    ebx = ebx + 8;

loc_002FF17A: ;
    eax = MEM32(ebp + -12);
    ebx = ebx + 0xFFFFFFF7u;
    ecx = ebx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((LO8(ecx)) & 31u));
    edx = edx + 0xFFFFFFF7u;
    MEM32(esi + 0x48) = edx;
    eax = eax & 0x1FF;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x101) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x101 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FF2C8; /* je: equal / zero */

loc_002FF199: ;
    ecx = MEM32(ebp + -4);
    MEM8(ecx) = LO8(eax);
    ecx = MEM32(esi + 0x60);
    eax = ZX16(LO16(eax));
    eax = ecx + eax * 8;
    MEM32(ebp + -16) = eax;
    goto loc_002FF255;

loc_002FF1AF: ;
    ecx = MEM32(esi + 0x60);
    eax = ZX16(LO16(edx));
    eax = ecx + eax * 8;
    ecx = MEM32(ebp + -16);
    MEM32(edi) = ecx;
    SET_LO8(ecx, MEM8(ecx + 7));
    MEM8(edi + 7) = LO8(ecx);
    ecx = MEM32(ebp + -16);
    SET_LO16(ecx, MEM16(ecx + 4));
    SET_LO16(ecx, LO16(ecx) + 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM16(edi + 4) = LO16(ecx);
    if (CMP_AE(_fa, _fb)) goto loc_002FF1DA; /* jae: above or equal (unsigned >=) */

loc_002FF1D4: ;
    ecx = ZX8(MEM8(eax + 7));
    goto loc_002FF1DE;

loc_002FF1DA: ;
    ecx = ZX8(MEM8(edi + 7));

loc_002FF1DE: ;
    MEM8(edi + 6) = LO8(ecx);
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -24) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002FF210; /* jbe: below or equal (unsigned <=) */

loc_002FF1E9: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002FF1F7; /* jle: less or equal (signed <=) */

loc_002FF1F4: ;
    MEM32(ebp + -8) = ecx;

loc_002FF1F7: ;
    ecx = MEM32(ebp + -8);
    ebx = 0; /* xor self */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx << LO8(ecx);
    ecx = MEM32(esi + 0x60);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx + ebx * 8 + -8;
    MEM32(ebp + -20) = ebx;
    ebx = MEM32(ebp + -28);
    MEM32(ebp + -24) = ecx;

loc_002FF210: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0x100 (16-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_B(_fa, _fb)) goto loc_002FF250; /* jb: below (unsigned <) */

loc_002FF21A: ;
    ecx = ZX16(MEM16(eax + 4));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0x10) (32-bit) */
    MEM32(ebp + -32) = ecx;
    if (CMP_G(_fas, _fbs)) goto loc_002FF27E; /* jg: greater (signed >) */

loc_002FF226: ;
    edx = MEM32(ebp + -4);
    edx = edx + ecx;
    MEM32(ebp + -28) = edx;

loc_002FF22E: ;
    ecx = ZX8(MEM8(eax + 6));
    eax = MEM32(eax);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM8(edx) = LO8(ecx);
    if (TEST_Z(_fa, _fb)) goto loc_002FF242; /* je: equal / zero */

loc_002FF23B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + -4) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002FF22E; /* ja: above (unsigned >) */

loc_002FF240: ;
    goto loc_002FF2B0;

loc_002FF242: ;
    eax = MEM32(ebp + -28);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -32);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - eax;
    goto loc_002FF25B;

loc_002FF250: ;
    eax = MEM32(ebp + -4);
    MEM8(eax) = LO8(edx);

loc_002FF255: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_002FF25B: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002FF0B9; /* jg: greater (signed >) */

loc_002FF265: ;
    goto loc_002FF2C8;

loc_002FF267: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(eax + 0x16C));
    PUSH32(esp, 0x412174);
    PUSH32(esp, MEM32(eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FF27Cu); RECOMP_ABI_CALL(0x002CF351u, sub_002CF351); /* call 0x002CF351 */

loc_002FF27C: ;
    goto loc_002FF2C5;

loc_002FF27E: ;
    MEM32(esi + 0x50) = eax;

loc_002FF281: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FF2C8; /* je: equal / zero */

loc_002FF287: ;
    ecx = ZX16(MEM16(eax + 4));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002FF281; /* jg: greater (signed >) */

loc_002FF290: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + -4);
    MEM32(esi + 0x44) = ecx;
    ecx = ecx + edx;

loc_002FF29B: ;
    SET_LO8(edx, MEM8(eax + 6));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(ecx) = LO8(edx);
    eax = MEM32(eax);
    if ((_fa == 0)) goto loc_002FF2AC; /* je: equal / zero */

loc_002FF2A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002FF29B; /* jne: not equal / not zero */

loc_002FF2AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FF2C8; /* je: equal / zero */

loc_002FF2B0: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(eax + 0x164));
    PUSH32(esp, 0x4120F8);
    PUSH32(esp, MEM32(eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FF2C5u); RECOMP_ABI_CALL(0x002CED88u, sub_002CED88); /* call 0x002CED88 */

loc_002FF2C5: ;
    esp = esp + 0xC;

loc_002FF2C8: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x1E0) = ecx;
    SET_LO16(ecx, MEM16(ebp + -8));
    MEM16(esi + 0x30) = LO16(ecx);
    ecx = MEM32(ebp + -12);
    MEM32(esi + 0x38) = ecx;
    ecx = MEM32(ebp + -20);
    MEM32(esi + 0x40) = ecx;
    ecx = MEM32(ebp + -16);
    MEM32(esi + 0x54) = ecx;
    ecx = MEM32(ebp + -24);
    MEM32(esi + 0x3C) = ebx;
    MEM32(esi + 0x58) = edi;
    MEM32(esi + 0x5C) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_002FF055; /* jle: less or equal (signed <=) */

loc_002FF304: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(eax + 0x164));
    PUSH32(esp, 0x412138);
    PUSH32(esp, MEM32(eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FF319u); RECOMP_ABI_CALL(0x002CED88u, sub_002CED88); /* call 0x002CED88 */

loc_002FF319: ;
    esp = esp + 0x10;
    eax = 0; /* xor self */
    goto loc_002FF058;

}

/**
 * sub_002FF323
 * Original: 0x002FF323 - 0x002FF603 (736 bytes, 249 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FF323(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FF323: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x1C;
    eax = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x1CC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x44);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(ebp + -12) = eax;
    MEM32(ebp + 0x10) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_002FF397; /* je: equal / zero */

loc_002FF348: ;
    eax = MEM32(esi + 0x50);
    ecx = ZX16(MEM16(eax + 4));
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002FF37B; /* jle: less or equal (signed <=) */

loc_002FF355: ;
    edi = edi + edx;
    MEM32(esi + 0x44) = edi;

loc_002FF35A: ;
    eax = MEM32(eax);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002FF35A; /* jg: greater (signed >) */

loc_002FF361: ;
    ecx = MEM32(ebp + 0xC);
    edx = edx + ecx;

loc_002FF366: ;
    SET_LO8(ecx, MEM8(eax + 6));
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(edx) = LO8(ecx);
    eax = MEM32(eax);
    if ((_fa != 0)) goto loc_002FF366; /* jne: not equal / not zero */

loc_002FF373: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002FF376: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_002FF37B: ;
    edi = MEM32(ebp + 0xC);
    edi = edi + ecx;
    edx = edx - ecx;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + 0x10) = edx;

loc_002FF388: ;
    SET_LO8(edx, MEM8(eax + 6));
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(edi) = LO8(edx);
    eax = MEM32(eax);
    if ((_fa != 0)) goto loc_002FF388; /* jne: not equal / not zero */

loc_002FF393: ;
    MEM32(esi + 0x44) = MEM32(esi + 0x44) & 0;

loc_002FF397: ;
    eax = MEM32(ebx + 0x1E0);
    ebx = MEM32(esi + 0x40);
    edi = MEM32(esi + 0x58);
    MEM32(ebp + -8) = eax;
    eax = ZX16(MEM16(esi + 0x30));
    MEM32(ebp + -16) = eax;
    eax = MEM32(esi + 0x38);
    MEM32(ebp + -4) = eax;
    eax = MEM32(esi + 0x3C);
    MEM32(ebp + 0xC) = eax;
    eax = MEM32(esi + 0x54);
    MEM32(ebp + -24) = eax;
    eax = MEM32(esi + 0x5C);
    MEM32(ebp + -20) = ebx;
    MEM32(ebp + -28) = eax;
    goto loc_002FF557;

loc_002FF3CD: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -16) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002FF563; /* jl: less (signed <) */

loc_002FF3D9: ;
    ecx = MEM32(ebp + -8);
    edx = ZX8(MEM8(ecx));
    ecx = MEM32(ebp + 0xC);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 8;
    edx = edx << LO8(ecx);
    ecx = MEM32(ebp + 0xC);
    MEM32(ebp + -4) = MEM32(ebp + -4) | edx;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -16) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FF40B; /* jge: greater or equal (signed >=) */

loc_002FF3F6: ;
    ecx = MEM32(ebp + -8);
    edx = ZX8(MEM8(ecx));
    ecx = MEM32(ebp + 0xC);
    edx = edx << LO8(ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) | edx;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 8;

loc_002FF40B: ;
    edx = ZX16(MEM16(ebp + -4));
    ecx = ZX16(LO16(ebx));
    edx = edx & ecx;
    ecx = MEM32(ebp + -16);
    MEM32(ebp + -4) = (uint32_t)(((int32_t)(int32_t)(MEM32(ebp + -4))) >> ((LO8(ecx)) & 31u));
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - ecx;
    eax = eax - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x101) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x101 (32-bit) */
    MEM32(esi + 0x48) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002FF5A5; /* je: equal / zero */

loc_002FF42E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x100 (32-bit) */
    eax = MEM32(esi + 0x60);
    if (CMP_NE(_fa, _fb)) goto loc_002FF4C8; /* jne: not equal / not zero */

loc_002FF43D: ;
    edx = MEM32(esi + 0x48);
    PUSH32(esp, 9);
    POP32(esp, ecx);
    edi = eax + 0x810;
    eax = eax + 0xFF8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    ebx = 0x1FF;
    MEM32(ebp + -16) = ecx;
    MEM32(ebp + -20) = ebx;
    MEM32(ebp + -28) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_002FF563; /* jl: less (signed <) */

loc_002FF464: ;
    eax = MEM32(ebp + -8);
    eax = ZX8(MEM8(eax));
    ecx = MEM32(ebp + 0xC);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 8;
    eax = eax << LO8(ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) | eax;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 9 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FF494; /* jge: greater or equal (signed >=) */

loc_002FF47F: ;
    eax = MEM32(ebp + -8);
    eax = ZX8(MEM8(eax));
    ecx = MEM32(ebp + 0xC);
    eax = eax << LO8(ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) | eax;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 8;

loc_002FF494: ;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -4) = (uint32_t)(((int32_t)(int32_t)(MEM32(ebp + -4))) >> ((9) & 31u));
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 9;
    eax = eax & 0x1FF;
    edx = edx + 0xFFFFFFF7u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x101) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x101 (32-bit) */
    MEM32(esi + 0x48) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002FF5A8; /* je: equal / zero */

loc_002FF4B5: ;
    ecx = MEM32(ebp + -12);
    MEM8(ecx) = LO8(eax);
    ecx = MEM32(esi + 0x60);
    eax = ecx + eax * 8;
    MEM32(ebp + -24) = eax;
    goto loc_002FF551;

loc_002FF4C8: ;
    ecx = MEM32(ebp + -24);
    MEM32(edi) = ecx;
    SET_LO8(ebx, MEM8(ecx + 7));
    MEM8(edi + 7) = LO8(ebx);
    SET_LO16(ecx, MEM16(ecx + 4));
    eax = eax + edx * 8;
    SET_LO16(ecx, LO16(ecx) + 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM16(edi + 4) = LO16(ecx);
    if (CMP_AE(_fa, _fb)) goto loc_002FF4EA; /* jae: above or equal (unsigned >=) */

loc_002FF4E4: ;
    ecx = ZX8(MEM8(eax + 7));
    goto loc_002FF4EE;

loc_002FF4EA: ;
    ecx = ZX8(MEM8(edi + 7));

loc_002FF4EE: ;
    MEM8(edi + 6) = LO8(ecx);
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -28) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002FF51E; /* jbe: below or equal (unsigned <=) */

loc_002FF4F9: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) + 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002FF507; /* jle: less or equal (signed <=) */

loc_002FF504: ;
    MEM32(ebp + -16) = ecx;

loc_002FF507: ;
    ecx = MEM32(ebp + -16);
    ebx = 0; /* xor self */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx << LO8(ecx);
    ecx = MEM32(esi + 0x60);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx + ebx * 8;
    MEM32(ebp + -20) = ebx;
    MEM32(ebp + -28) = ecx;
    goto loc_002FF521;

loc_002FF51E: ;
    ebx = MEM32(ebp + -20);

loc_002FF521: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x100 (32-bit) */
    MEM32(ebp + -24) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_002FF54C; /* jl: less (signed <) */

loc_002FF52C: ;
    ecx = ZX16(MEM16(eax + 4));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002FF57D; /* jg: greater (signed >) */

loc_002FF535: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) + ecx;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - ecx;
    ecx = MEM32(ebp + -12);

loc_002FF53E: ;
    SET_LO8(edx, MEM8(eax + 6));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(ecx) = LO8(edx);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002FF53E; /* jne: not equal / not zero */

loc_002FF54A: ;
    goto loc_002FF557;

loc_002FF54C: ;
    eax = MEM32(ebp + -12);
    MEM8(eax) = LO8(edx);

loc_002FF551: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_002FF557: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002FF3CD; /* jg: greater (signed >) */

loc_002FF561: ;
    goto loc_002FF5A8;

loc_002FF563: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(eax + 0x16C));
    PUSH32(esp, 0x412174);
    PUSH32(esp, MEM32(eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FF578u); RECOMP_ABI_CALL(0x002CF351u, sub_002CF351); /* call 0x002CF351 */

loc_002FF578: ;
    esp = esp + 0xC;
    goto loc_002FF5A8;

loc_002FF57D: ;
    MEM32(esi + 0x50) = eax;

loc_002FF580: ;
    eax = MEM32(eax);
    ecx = ZX16(MEM16(eax + 4));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002FF580; /* jg: greater (signed >) */

loc_002FF58B: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + -12);
    MEM32(esi + 0x44) = ecx;
    ecx = ecx + edx;

loc_002FF596: ;
    SET_LO8(edx, MEM8(eax + 6));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(ecx) = LO8(edx);
    eax = MEM32(eax);
    if ((_fa != 0)) goto loc_002FF596; /* jne: not equal / not zero */

loc_002FF5A3: ;
    goto loc_002FF5A8;

loc_002FF5A5: ;
    ebx = MEM32(ebp + -20);

loc_002FF5A8: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x1E0) = ecx;
    SET_LO16(ecx, MEM16(ebp + -16));
    MEM16(esi + 0x30) = LO16(ecx);
    ecx = MEM32(ebp + -4);
    MEM32(esi + 0x38) = ecx;
    ecx = MEM32(ebp + 0xC);
    MEM32(esi + 0x3C) = ecx;
    ecx = MEM32(ebp + -24);
    MEM32(esi + 0x54) = ecx;
    ecx = MEM32(ebp + -28);
    MEM32(esi + 0x40) = ebx;
    MEM32(esi + 0x58) = edi;
    MEM32(esi + 0x5C) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_002FF373; /* jle: less or equal (signed <=) */

loc_002FF5E4: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(eax + 0x164));
    PUSH32(esp, 0x4121A8);
    PUSH32(esp, MEM32(eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FF5F9u); RECOMP_ABI_CALL(0x002CED88u, sub_002CED88); /* call 0x002CED88 */

loc_002FF5F9: ;
    esp = esp + 0x10;
    eax = 0; /* xor self */
    goto loc_002FF376;

}

/**
 * sub_002FF603
 * Original: 0x002FF603 - 0x002FF63B (56 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FF603(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FF603: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x1CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FF639; /* je: equal / zero */

loc_002FF612: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FF626; /* jne: not equal / not zero */

loc_002FF618: ;
    eax = MEM32(eax + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FF626; /* je: equal / zero */

loc_002FF61F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002FF625u); RECOMP_ABI_CALL(0x002B88F0u, sub_002B88F0); /* call 0x002B88F0 */

loc_002FF625: ;
    POP32(esp, ecx);

loc_002FF626: ;
    PUSH32(esp, MEM32(esi + 0x1CC));
    PUSH32(esp, 0x002FF631u); RECOMP_ABI_CALL(0x002B88F0u, sub_002B88F0); /* call 0x002B88F0 */

loc_002FF631: ;
    MEM32(esi + 0x1CC) = MEM32(esi + 0x1CC) & 0;
    POP32(esp, ecx);

loc_002FF639: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002FF63B
 * Original: 0x002FF63B - 0x002FF650 (21 bytes, 8 insns)
 * Category: game_physics
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002FF63B(void)
{

loc_002FF63B: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x4121F0);
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, 0x002FF64Bu); RECOMP_ABI_CALL(0x002CED88u, sub_002CED88); /* call 0x002CED88 */

loc_002FF64B: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_002FF650
 * Original: 0x002FF650 - 0x002FF711 (193 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FF650(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002FF650: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi + 0x1D8);
    esi = MEM32(edi + 0x1CC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FF6AE; /* jne: not equal / not zero */

loc_002FF669: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 1), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FF6AE; /* je: equal / zero */

loc_002FF66F: ;
    _fa = (uint32_t)(MEM32(esi + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x4C), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FF6A6; /* jne: not equal / not zero */

loc_002FF674: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x412238);
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 0x002FF681u); RECOMP_ABI_CALL(0x002CF351u, sub_002CF351); /* call 0x002CF351 */

loc_002FF681: ;
    ebp = 0x2FF323;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(edi + 0x1A0) = ebp;
    MEM32(edi + 0x1A8) = ebp;
    MEM32(edi + 0x1B0) = ebp;
    { uint32_t _icall_target = MEM32(edi + 0x18C); PUSH32(esp, 0x002FF69Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002FF69F: ;
    esp = esp + 0xC;
    MEM32(esi + 0x4C) = ebp;
    POP32(esp, ebp);

loc_002FF6A6: ;
    MEM16(esi + 0x32) = 0x1FF;
    goto loc_002FF6BB;

loc_002FF6AE: ;
    MEM16(esi + 0x32) = 0x1FE;
    MEM32(esi + 0x4C) = 0x2FEFF9;

loc_002FF6BB: ;
    MEM16(esi + 0x30) = 9;
    MEM32(esi + 0x3C) = ebx;
    MEM32(esi + 0x38) = ebx;
    MEM32(esi + 0x44) = ebx;
    MEM32(esi + 0x40) = 0x1FF;
    eax = MEM32(edi + 0x1E4);
    eax = eax << 3;
    MEM32(esi + 0x48) = eax;
    eax = MEM32(esi + 0x60);
    PUSH32(esp, 0x97E8);
    eax = eax + 0x810;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(esi + 0x58) = eax;
    PUSH32(esp, 0x002FF6F4u); RECOMP_ABI_CALL(0x002B8910u, sub_002B8910); /* call 0x002B8910 */

loc_002FF6F4: ;
    eax = MEM32(esi + 0x60);
    ecx = eax + -8;
    MEM32(esi + 0x54) = ecx;
    ecx = MEM32(esi + 0x40);
    esp = esp + 0xC;
    eax = eax + ecx * 8 + -8;
    MEM32(esi + 0x5C) = eax;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002FF711
 * Original: 0x002FF711 - 0x002FF7A2 (145 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FF711(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FF711: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FF751; /* jne: not equal / not zero */

loc_002FF71C: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x002FF723u); RECOMP_ABI_CALL(0x002B88E0u, sub_002B88E0); /* call 0x002B88E0 */

loc_002FF723: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    MEM32(esi + 0x1CC) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_002FF743; /* jne: not equal / not zero */

loc_002FF72E: ;
    PUSH32(esp, 0x412268);
    PUSH32(esp, 0x41225C);
    PUSH32(esp, 0x002FF73Du); RECOMP_ABI_CALL(0x002CED88u, sub_002CED88); /* call 0x002CED88 */

loc_002FF73D: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002FF743: ;
    MEM32(eax + 0x60) = MEM32(eax + 0x60) & 0;
    eax = MEM32(esi + 0x1CC);
    MEM32(eax + 0x4C) = MEM32(eax + 0x4C) & 0;

loc_002FF751: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 0 (32-bit) */
    eax = 0x2FEFF9;
    MEM32(esi + 0x194) = 0x2FF63B;
    MEM32(esi + 0x18C) = 0x2FEF8C;
    MEM32(esi + 0x190) = 0x2FF650;
    MEM32(esi + 0x1A0) = eax;
    MEM32(esi + 0x1A8) = eax;
    MEM32(esi + 0x1B0) = eax;
    MEM32(esi + 0x1C0) = 0x2FF603;
    if (CMP_NE(_fa, _fb)) goto loc_002FF79D; /* jne: not equal / not zero */

loc_002FF796: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002FF79Cu); RECOMP_ABI_CALL(0x00300D59u, sub_00300D59); /* call 0x00300D59 */

loc_002FF79C: ;
    POP32(esp, ecx);

loc_002FF79D: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002FF7A2
 * Original: 0x002FF7A2 - 0x002FF81E (124 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FF7A2(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FF7A2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002FF811; /* jle: less or equal (signed <=) */

loc_002FF7AF: ;
    esi = MEM32(ebp + 8);

loc_002FF7B2: ;
    ecx = MEM32(esi + 0x1E4);
    eax = MEM32(esi + 0x1DC);
    edx = ecx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    edi = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_002FF7CB; /* jle: less or equal (signed <=) */

loc_002FF7C7: ;
    eax = eax - ecx;
    edi = eax;

loc_002FF7CB: ;
    eax = MEM32(esi + 0x1E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FF7E3; /* je: equal / zero */

loc_002FF7D6: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FF7E0u); RECOMP_ABI_CALL(0x002B8940u, sub_002B8940); /* call 0x002B8940 */

loc_002FF7E0: ;
    esp = esp + 0xC;

loc_002FF7E3: ;
    MEM32(esi + 0x1E4) = MEM32(esi + 0x1E4) + edi;
    eax = MEM32(esi + 0x1E4);
    MEM32(esi + 0x1E0) = MEM32(esi + 0x1E0) + edi;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + edi;
    ebx = ebx - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1DC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x1DC) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002FF80D; /* jl: less (signed <) */

loc_002FF802: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FF808u); RECOMP_ABI_CALL(0x002CB4D3u, sub_002CB4D3); /* call 0x002CB4D3 */

loc_002FF808: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_002FF819; /* je: equal / zero */

loc_002FF80D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_002FF7B2; /* jg: greater (signed >) */

loc_002FF811: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002FF814: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002FF819: ;
    eax = eax | 0xFFFFFFFFu;
    goto loc_002FF814;

}

/**
 * sub_002FF81E
 * Original: 0x002FF81E - 0x002FF875 (87 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FF81E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FF81E: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(edi + 0x1E4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x1E4), ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002FF849; /* jge: greater or equal (signed >=) */

loc_002FF830: ;
    PUSH32(esp, MEM32(edi + 0x164));
    PUSH32(esp, 0x412288);
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 0x002FF842u); RECOMP_ABI_CALL(0x002CED88u, sub_002CED88); /* call 0x002CED88 */

loc_002FF842: ;
    esp = esp + 0xC;
    eax = 0; /* xor self */
    goto loc_002FF872;

loc_002FF849: ;
    PUSH32(esp, esi);
    esi = edi + 0x1E0;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x14) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FF866; /* je: equal / zero */

loc_002FF858: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x1C));
    PUSH32(esp, 0x002FF863u); RECOMP_ABI_CALL(0x002B8940u, sub_002B8940); /* call 0x002B8940 */

loc_002FF863: ;
    esp = esp + 0xC;

loc_002FF866: ;
    MEM32(esi) = MEM32(esi) + ebx;
    MEM32(edi + 0x1E4) = MEM32(edi + 0x1E4) - ebx;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);

loc_002FF872: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002FF875
 * Original: 0x002FF875 - 0x002FF894 (31 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FF875(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FF875: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x1D0);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 8));
    MEM32(eax + 0x1E0) = MEM32(eax + 0x1E0) + ecx;
    MEM32(eax + 0x1E4) = MEM32(eax + 0x1E4) - ecx;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_002FF894
 * Original: 0x002FF894 - 0x002FF8D4 (64 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FF894(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FF894: ;
    eax = MEM32(esp + 4);
    ecx = 0x2FF81E;
    MEM32(eax + 0x1A0) = ecx;
    MEM32(eax + 0x1A8) = ecx;
    MEM32(eax + 0x1B0) = ecx;
    ecx = 0x2FF7A2;
    MEM32(eax + 0x1A4) = ecx;
    MEM32(eax + 0x1AC) = ecx;
    MEM32(eax + 0x1B4) = ecx;
    MEM32(eax + 0x1BC) = 0x2FF875;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_002FF8D4
 * Original: 0x002FF8D4 - 0x002FFDB2 (1246 bytes, 378 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FF8D4(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FF8D4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x130;
    eax = MEM32(ebp + 8);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x120);
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 0x50);
    esi = esi + 0x80;
    PUSH32(esp, edi);
    MEM32(ebp + -20) = esi;
    eax = ebp + -304;
    MEM32(ebp + -28) = 8;
    ebx = 0; /* xor self */

loc_002FF90A: ;
    _fa = (uint32_t)(MEM16(edx + 0x10)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + 0x10), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FF96D; /* jne: not equal / not zero */

loc_002FF910: ;
    _fa = (uint32_t)(MEM16(edx + 0x20)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + 0x20), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FF96D; /* jne: not equal / not zero */

loc_002FF916: ;
    _fa = (uint32_t)(MEM16(edx + 0x30)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + 0x30), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FF96D; /* jne: not equal / not zero */

loc_002FF91C: ;
    _fa = (uint32_t)(MEM16(edx + 0x40)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + 0x40), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FF96D; /* jne: not equal / not zero */

loc_002FF922: ;
    _fa = (uint32_t)(MEM16(edx + 0x50)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + 0x50), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FF96D; /* jne: not equal / not zero */

loc_002FF928: ;
    _fa = (uint32_t)(MEM16(edx + 0x60)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + 0x60), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FF96D; /* jne: not equal / not zero */

loc_002FF92E: ;
    _fa = (uint32_t)(MEM16(edx + 0x70)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + 0x70), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FF96D; /* jne: not equal / not zero */

loc_002FF934: ;
    edi = (uint32_t)(int32_t)SMEM16(edx);
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ecx));
    edi = edi << 2;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = edi;
    MEM32(eax + 0x20) = edi;
    MEM32(eax + 0x40) = edi;
    MEM32(eax + 0x60) = edi;
    MEM32(eax + 0x80) = edi;
    MEM32(eax + 0xA0) = edi;
    MEM32(eax + 0xC0) = edi;
    MEM32(eax + 0xE0) = edi;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 4;
    eax = eax + 4;
    goto loc_002FFB49;

loc_002FF96D: ;
    esi = (uint32_t)(int32_t)SMEM16(edx + 0x20);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ecx + 0x40));
    edi = (uint32_t)(int32_t)SMEM16(edx + 0x60);
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ecx + 0xC0));
    ebx = edi + esi;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x3B21);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x187E);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x1151);
    MEM32(ebp + 0xC) = ebx;
    esi = esi + MEM32(ebp + 0xC);
    ebx = ebx - edi;
    edi = (uint32_t)(int32_t)SMEM16(edx);
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ecx));
    MEM32(ebp + -8) = esi;
    esi = (uint32_t)(int32_t)SMEM16(edx + 0x40);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ecx + 0x80));
    MEM32(ebp + 0x10) = esi;
    esi = esi + edi;
    edi = edi - MEM32(ebp + 0x10);
    esi = esi << 0xD;
    edi = edi << 0xD;
    MEM32(ebp + 8) = edi;
    edi = MEM32(ebp + -8);
    edi = edi + esi;
    esi = esi - MEM32(ebp + -8);
    MEM32(ebp + -36) = edi;
    MEM32(ebp + -44) = esi;
    esi = MEM32(ebp + 8);
    edi = esi + ebx;
    MEM32(ebp + -48) = edi;
    edi = (uint32_t)(int32_t)SMEM16(edx + 0x50);
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ecx + 0xA0));
    MEM32(ebp + 8) = edi;
    edi = (uint32_t)(int32_t)SMEM16(edx + 0x30);
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ecx + 0x60));
    esi = esi - ebx;
    ebx = (uint32_t)(int32_t)SMEM16(edx + 0x10);
    MEM32(ebp + -4) = edi;
    edi = MEM32(ecx + 0x20);
    edi = (uint32_t)((int32_t)edi * (int32_t)ebx);
    ebx = MEM32(ebp + 8);
    MEM32(ebp + -40) = esi;
    esi = (uint32_t)(int32_t)SMEM16(edx + 0x70);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ecx + 0xE0));
    MEM32(ebp + -8) = edi;
    edi = edi + esi;
    MEM32(ebp + 0xC) = edi;
    edi = MEM32(ebp + -4);
    ebx = ebx + edi;
    edi = edi + esi;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x98E);
    MEM32(ebp + -12) = ebx;
    ebx = MEM32(ebp + -8);
    MEM32(ebp + 0x10) = edi;
    edi = MEM32(ebp + 8);
    ebx = ebx + edi;
    edi = MEM32(ebp + 0x10);
    MEM32(ebp + -24) = ebx;
    ebx = ebx + edi;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x3EC5);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x25A1);
    MEM32(ebp + -32) = ebx;
    ebx = MEM32(ebp + 0xC);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xFFFFE333u);
    MEM32(ebp + 0xC) = ebx;
    ebx = MEM32(ebp + -12);
    esi = esi + MEM32(ebp + 0xC);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xFFFFADFDu);
    MEM32(ebp + -12) = ebx;
    ebx = MEM32(ebp + -32);
    ebx = ebx - edi;
    edi = MEM32(ebp + -24);
    edi = (uint32_t)((int32_t)edi * (int32_t)0xC7C);
    MEM32(ebp + 0x10) = ebx;
    esi = esi + MEM32(ebp + 0x10);
    ebx = MEM32(ebp + -32);
    MEM32(ebp + -16) = esi;
    esi = MEM32(ebp + 8);
    ebx = ebx - edi;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x41B3);
    edi = ebx;
    esi = esi + edi;
    esi = esi + MEM32(ebp + -12);
    ecx = ecx + 4;
    MEM32(ebp + 8) = esi;
    esi = MEM32(ebp + -4);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6254);
    esi = esi + MEM32(ebp + 0x10);
    esi = esi + MEM32(ebp + -12);
    ebx = esi;
    esi = MEM32(ebp + -8);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x300B);
    esi = esi + edi;
    esi = esi + MEM32(ebp + 0xC);
    MEM32(ebp + -4) = ebx;
    edi = esi;
    esi = MEM32(ebp + -36);
    MEM32(ebp + -8) = edi;
    edi = esi + edi + 0x400;
    esi = esi - MEM32(ebp + -8);
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((0xB) & 31u));
    MEM32(eax) = edi;
    edi = 0x400;
    esi = esi + edi;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((0xB) & 31u));
    MEM32(eax + 0xE0) = esi;
    esi = MEM32(ebp + -48);
    ebx = esi + ebx + 0x400;
    esi = esi - MEM32(ebp + -4);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((0xB) & 31u));
    esi = esi + edi;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((0xB) & 31u));
    MEM32(eax + 0xC0) = esi;
    esi = MEM32(ebp + -40);
    MEM32(eax + 0x20) = ebx;
    ebx = MEM32(ebp + 8);
    ebx = esi + ebx + 0x400;
    esi = esi - MEM32(ebp + 8);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((0xB) & 31u));
    esi = esi + edi;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((0xB) & 31u));
    MEM32(eax + 0xA0) = esi;
    esi = MEM32(ebp + -44);
    MEM32(eax + 0x40) = ebx;
    ebx = MEM32(ebp + -16);
    ebx = esi + ebx + 0x400;
    esi = esi - MEM32(ebp + -16);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((0xB) & 31u));
    esi = esi + edi;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((0xB) & 31u));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0x60) = ebx;
    MEM32(eax + 0x80) = esi;
    esi = MEM32(ebp + -20);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 4;
    ebx = 0; /* xor self */

loc_002FFB49: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) - 1;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002FF90A; /* jne: not equal / not zero */

loc_002FFB52: ;
    edi = ebp + -304;
    MEM32(ebp + -20) = ebx;
    eax = 0x3FF;

loc_002FFB60: ;
    edx = MEM32(ebp + -20);
    ecx = MEM32(ebp + 0x14);
    ecx = MEM32(ecx + edx * 4);
    edx = MEM32(edi + 4);
    ecx = ecx + MEM32(ebp + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    MEM32(ebp + -28) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_002FFBBD; /* jne: not equal / not zero */

loc_002FFB76: ;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FFBBD; /* jne: not equal / not zero */

loc_002FFB7B: ;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xC), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FFBBD; /* jne: not equal / not zero */

loc_002FFB80: ;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FFBBD; /* jne: not equal / not zero */

loc_002FFB85: ;
    _fa = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x14), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FFBBD; /* jne: not equal / not zero */

loc_002FFB8A: ;
    _fa = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x18), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FFBBD; /* jne: not equal / not zero */

loc_002FFB8F: ;
    _fa = (uint32_t)(MEM32(edi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x1C), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FFBBD; /* jne: not equal / not zero */

loc_002FFB94: ;
    edx = MEM32(edi);
    edx = edx + 0x10;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    edx = edx & eax;
    SET_LO8(edx, MEM8(edx + esi));
    MEM8(ecx) = LO8(edx);
    MEM8(ecx + 1) = LO8(edx);
    MEM8(ecx + 2) = LO8(edx);
    MEM8(ecx + 3) = LO8(edx);
    MEM8(ecx + 5) = LO8(edx);
    MEM8(ecx + 6) = LO8(edx);
    MEM8(ecx + 7) = LO8(edx);
    edi = edi + 0x20;
    goto loc_002FFD9D;

loc_002FFBBD: ;
    ebx = MEM32(edi + 8);
    edx = MEM32(edi + 0x18);
    MEM32(ebp + 0x10) = edx;
    edx = edx + ebx;
    MEM32(ebp + -12) = ebx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1151);
    ebx = MEM32(ebp + 0x10);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x3B21);
    MEM32(ebp + 0xC) = edx;
    edx = edx - ebx;
    MEM32(ebp + -4) = edx;
    edx = MEM32(ebp + -12);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x187E);
    edx = edx + MEM32(ebp + 0xC);
    ebx = MEM32(edi + 0x10);
    MEM32(ebp + -8) = edx;
    edx = MEM32(edi);
    ebx = ebx + edx;
    edx = edx - MEM32(edi + 0x10);
    ebx = ebx << 0xD;
    MEM32(ebp + -16) = ebx;
    edx = edx << 0xD;
    MEM32(ebp + 8) = edx;
    edx = ebx;
    ebx = MEM32(ebp + -8);
    ebx = ebx + edx;
    edx = edx - MEM32(ebp + -8);
    MEM32(ebp + -36) = ebx;
    ebx = MEM32(ebp + -4);
    MEM32(ebp + -44) = edx;
    edx = MEM32(ebp + 8);
    edx = edx + ebx;
    MEM32(ebp + -48) = edx;
    edx = MEM32(ebp + 8);
    edx = edx - ebx;
    ebx = MEM32(edi + 0x14);
    MEM32(ebp + 8) = ebx;
    ebx = MEM32(edi + 0xC);
    MEM32(ebp + -4) = ebx;
    ebx = MEM32(ebp + -28);
    MEM32(ebp + -40) = edx;
    edx = MEM32(edi + 0x1C);
    MEM32(ebp + -16) = edx;
    edx = edx + ebx;
    ebx = MEM32(ebp + 8);
    MEM32(ebp + 0xC) = edx;
    edx = MEM32(ebp + -4);
    ebx = ebx + edx;
    MEM32(ebp + -12) = ebx;
    ebx = MEM32(ebp + -16);
    ebx = ebx + edx;
    edx = MEM32(ebp + 8);
    MEM32(ebp + 0x10) = ebx;
    ebx = MEM32(ebp + -28);
    ebx = ebx + edx;
    edx = MEM32(ebp + 0x10);
    MEM32(ebp + -24) = ebx;
    ebx = ebx + edx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x3EC5);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x25A1);
    MEM32(ebp + -32) = ebx;
    ebx = MEM32(ebp + 0xC);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xFFFFE333u);
    MEM32(ebp + 0xC) = ebx;
    ebx = MEM32(ebp + -12);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xFFFFADFDu);
    MEM32(ebp + -12) = ebx;
    ebx = MEM32(ebp + -32);
    ebx = ebx - edx;
    edx = MEM32(ebp + -32);
    MEM32(ebp + 0x10) = ebx;
    ebx = MEM32(ebp + -24);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xC7C);
    edx = edx - ebx;
    MEM32(ebp + -24) = edx;
    edx = MEM32(ebp + -16);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x98E);
    edx = edx + MEM32(ebp + 0xC);
    edx = edx + MEM32(ebp + 0x10);
    MEM32(ebp + -16) = edx;
    edx = MEM32(ebp + 8);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x41B3);
    edx = edx + MEM32(ebp + -24);
    ebx = MEM32(ebp + -36);
    edx = edx + MEM32(ebp + -12);
    edi = edi + 0x20;
    MEM32(ebp + 8) = edx;
    edx = MEM32(ebp + -4);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6254);
    edx = edx + MEM32(ebp + 0x10);
    edx = edx + MEM32(ebp + -12);
    MEM32(ebp + -4) = edx;
    edx = MEM32(ebp + -28);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x300B);
    edx = edx + MEM32(ebp + -24);
    edx = edx + MEM32(ebp + 0xC);
    MEM32(ebp + -8) = edx;
    edx = ebx + edx + 0x20000;
    ebx = ebx - MEM32(ebp + -8);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0x12) & 31u));
    edx = edx & eax;
    SET_LO8(edx, MEM8(edx + esi));
    ebx = ebx + 0x20000;
    MEM8(ecx) = LO8(edx);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((0x12) & 31u));
    ebx = ebx & eax;
    SET_LO8(edx, MEM8(ebx + esi));
    ebx = MEM32(ebp + -4);
    MEM8(ecx + 7) = LO8(edx);
    edx = MEM32(ebp + -48);
    ebx = edx + ebx + 0x20000;
    edx = edx - MEM32(ebp + -4);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((0x12) & 31u));
    edx = edx + 0x20000;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0x12) & 31u));
    ebx = ebx & eax;
    SET_LO8(ebx, MEM8(ebx + esi));
    edx = edx & eax;
    MEM8(ecx + 1) = LO8(ebx);
    SET_LO8(edx, MEM8(edx + esi));
    ebx = MEM32(ebp + 8);
    MEM8(ecx + 6) = LO8(edx);
    edx = MEM32(ebp + -40);
    ebx = edx + ebx + 0x20000;
    edx = edx - MEM32(ebp + 8);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((0x12) & 31u));
    edx = edx + 0x20000;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0x12) & 31u));
    ebx = ebx & eax;
    SET_LO8(ebx, MEM8(ebx + esi));
    edx = edx & eax;
    MEM8(ecx + 2) = LO8(ebx);
    SET_LO8(edx, MEM8(edx + esi));
    ebx = MEM32(ebp + -16);
    MEM8(ecx + 5) = LO8(edx);
    edx = MEM32(ebp + -44);
    ebx = edx + ebx + 0x20000;
    edx = edx - MEM32(ebp + -16);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((0x12) & 31u));
    edx = edx + 0x20000;
    ebx = ebx & eax;
    SET_LO8(ebx, MEM8(ebx + esi));
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0x12) & 31u));
    edx = edx & eax;
    MEM8(ecx + 3) = LO8(ebx);
    SET_LO8(edx, MEM8(edx + esi));
    ebx = 0; /* xor self */

loc_002FFD9D: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) + 1;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 8 (32-bit) */
    MEM8(ecx + 4) = LO8(edx);
    if (CMP_L(_fas, _fbs)) goto loc_002FFB60; /* jl: less (signed <) */

loc_002FFDAD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002FFDB2
 * Original: 0x002FFDB2 - 0x00300173 (961 bytes, 312 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FFDB2(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FFDB2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x124;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x120);
    eax = MEM32(ebp + 0xC);
    edx = MEM32(eax + 0x50);
    edi = edi + 0x80;
    MEM32(ebp + -8) = edi;
    eax = ebp + -292;
    MEM32(ebp + -12) = 8;
    ebx = 0; /* xor self */

loc_002FFDE8: ;
    _fa = (uint32_t)(MEM16(esi + 0x10)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x10), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FFE48; /* jne: not equal / not zero */

loc_002FFDEE: ;
    _fa = (uint32_t)(MEM16(esi + 0x20)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x20), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FFE48; /* jne: not equal / not zero */

loc_002FFDF4: ;
    _fa = (uint32_t)(MEM16(esi + 0x30)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x30), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FFE48; /* jne: not equal / not zero */

loc_002FFDFA: ;
    _fa = (uint32_t)(MEM16(esi + 0x40)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x40), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FFE48; /* jne: not equal / not zero */

loc_002FFE00: ;
    _fa = (uint32_t)(MEM16(esi + 0x50)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x50), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FFE48; /* jne: not equal / not zero */

loc_002FFE06: ;
    _fa = (uint32_t)(MEM16(esi + 0x60)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x60), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FFE48; /* jne: not equal / not zero */

loc_002FFE0C: ;
    _fa = (uint32_t)(MEM16(esi + 0x70)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x70), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FFE48; /* jne: not equal / not zero */

loc_002FFE12: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(edx));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x60) = ecx;
    MEM32(eax + 0x80) = ecx;
    MEM32(eax + 0xA0) = ecx;
    MEM32(eax + 0xC0) = ecx;
    MEM32(eax + 0xE0) = ecx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 4;
    eax = eax + 4;
    goto loc_002FFFA3;

loc_002FFE48: ;
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x40);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0x80));
    edi = (uint32_t)(int32_t)SMEM16(esi);
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(edx));
    MEM32(ebp + 0xC) = ebx;
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x60);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0xC0));
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x20);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(edx + 0x40));
    MEM32(ebp + -16) = ebx;
    ebx = MEM32(ebp + 0xC);
    ebx = ebx + edi;
    MEM32(ebp + -4) = ebx;
    ebx = MEM32(ebp + -16);
    ebx = ebx + ecx;
    ecx = ecx - MEM32(ebp + -16);
    edi = edi - MEM32(ebp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x16A);
    MEM32(ebp + 8) = ebx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((8) & 31u));
    ecx = ecx - ebx;
    ebx = MEM32(ebp + -4);
    MEM32(ebp + 0x10) = ecx;
    ecx = MEM32(ebp + 8);
    ecx = ecx + ebx;
    ebx = ebx - MEM32(ebp + 8);
    MEM32(ebp + -36) = ecx;
    ecx = MEM32(ebp + 0x10);
    MEM32(ebp + -16) = ebx;
    ebx = ecx + edi;
    edi = edi - ecx;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x10);
    MEM32(ebp + 0xC) = edi;
    edi = MEM32(edx + 0x20);
    edi = (uint32_t)((int32_t)edi * (int32_t)ecx);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x30);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(edx + 0x60));
    MEM32(ebp + -32) = ebx;
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x70);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(edx + 0xE0));
    MEM32(ebp + 0x10) = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x50);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(edx + 0xA0));
    MEM32(ebp + 8) = ebx;
    ebx = MEM32(ebp + 0x10);
    ebx = ebx + ecx;
    ecx = ecx - MEM32(ebp + 0x10);
    MEM32(ebp + -24) = ebx;
    ebx = MEM32(ebp + 8);
    MEM32(ebp + 0x10) = ecx;
    ecx = ebx + edi;
    edi = edi - ebx;
    ebx = edi;
    edi = MEM32(ebp + -24);
    edi = edi + ecx;
    ecx = ecx - MEM32(ebp + -24);
    MEM32(ebp + -4) = ebx;
    MEM32(ebp + 8) = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x16A);
    edi = MEM32(ebp + 0x10);
    ebx = ebx + edi;
    edi = (uint32_t)((int32_t)edi * (int32_t)0xFFFFFD63u);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x1D9);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((8) & 31u));
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((8) & 31u));
    edi = edi - MEM32(ebp + 8);
    MEM32(ebp + -20) = ebx;
    edi = edi + ebx;
    ebx = MEM32(ebp + -4);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x115);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((8) & 31u));
    ebx = ebx - MEM32(ebp + -20);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((8) & 31u));
    ecx = ecx - edi;
    ebx = ebx + ecx;
    MEM32(ebp + 0x10) = ecx;
    ecx = MEM32(ebp + 8);
    MEM32(ebp + -4) = ebx;
    ebx = MEM32(ebp + -36);
    ecx = ecx + ebx;
    MEM32(eax) = ecx;
    ebx = ebx - MEM32(ebp + 8);
    edx = edx + 4;
    MEM32(eax + 0xE0) = ebx;
    ebx = MEM32(ebp + -32);
    ecx = edi + ebx;
    ebx = ebx - edi;
    MEM32(eax + 0xC0) = ebx;
    ebx = MEM32(ebp + 0xC);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(ebp + 0x10);
    edi = ecx + ebx;
    ebx = ebx - ecx;
    ecx = MEM32(ebp + -16);
    MEM32(eax + 0x40) = edi;
    edi = MEM32(ebp + -4);
    MEM32(eax + 0xA0) = ebx;
    ebx = edi + ecx;
    ecx = ecx - edi;
    edi = MEM32(ebp + -8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0x80) = ebx;
    MEM32(eax + 0x60) = ecx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 4;
    ebx = 0; /* xor self */

loc_002FFFA3: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) - 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002FFDE8; /* jne: not equal / not zero */

loc_002FFFAC: ;
    esi = ebp + -292;
    MEM32(ebp + -28) = ebx;
    eax = 0x3FF;

loc_002FFFBA: ;
    edx = MEM32(ebp + -28);
    ecx = MEM32(ebp + 0x14);
    ecx = MEM32(ecx + edx * 4);
    edx = MEM32(esi + 4);
    ecx = ecx + MEM32(ebp + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    MEM32(ebp + -8) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00300014; /* jne: not equal / not zero */

loc_002FFFD0: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00300014; /* jne: not equal / not zero */

loc_002FFFD5: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00300014; /* jne: not equal / not zero */

loc_002FFFDA: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00300014; /* jne: not equal / not zero */

loc_002FFFDF: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00300014; /* jne: not equal / not zero */

loc_002FFFE4: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00300014; /* jne: not equal / not zero */

loc_002FFFE9: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00300014; /* jne: not equal / not zero */

loc_002FFFEE: ;
    edx = MEM32(esi);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    edx = edx & eax;
    SET_LO8(edx, MEM8(edx + edi));
    MEM8(ecx) = LO8(edx);
    MEM8(ecx + 1) = LO8(edx);
    MEM8(ecx + 2) = LO8(edx);
    MEM8(ecx + 4) = LO8(edx);
    MEM8(ecx + 5) = LO8(edx);
    MEM8(ecx + 6) = LO8(edx);
    MEM8(ecx + 7) = LO8(edx);
    esi = esi + 0x20;
    goto loc_0030015E;

loc_00300014: ;
    edx = MEM32(esi);
    ebx = MEM32(esi + 0x10);
    ebx = ebx + edx;
    edx = edx - MEM32(esi + 0x10);
    MEM32(ebp + -4) = ebx;
    MEM32(ebp + 0xC) = edx;
    edx = MEM32(esi + 8);
    ebx = MEM32(esi + 0x18);
    ebx = ebx + edx;
    edx = edx - MEM32(esi + 0x18);
    MEM32(ebp + 8) = ebx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x16A);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((8) & 31u));
    edx = edx - ebx;
    MEM32(ebp + 0x10) = edx;
    edx = MEM32(ebp + -4);
    ebx = ebx + edx;
    edx = edx - MEM32(ebp + 8);
    MEM32(ebp + -36) = ebx;
    ebx = MEM32(ebp + 0x10);
    MEM32(ebp + -16) = edx;
    edx = MEM32(ebp + 0xC);
    ebx = ebx + edx;
    edx = edx - MEM32(ebp + 0x10);
    MEM32(ebp + -32) = ebx;
    ebx = MEM32(esi + 0xC);
    MEM32(ebp + 0xC) = edx;
    edx = MEM32(esi + 0x14);
    ebx = ebx + edx;
    edx = edx - MEM32(esi + 0xC);
    MEM32(ebp + -24) = ebx;
    ebx = MEM32(esi + 0x1C);
    MEM32(ebp + 0x10) = edx;
    edx = MEM32(ebp + -8);
    ebx = ebx + edx;
    edx = edx - MEM32(esi + 0x1C);
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -4) = edx;
    edx = ebx;
    ebx = MEM32(ebp + -24);
    edx = edx + ebx;
    ebx = MEM32(ebp + -4);
    MEM32(ebp + 8) = edx;
    edx = MEM32(ebp + 0x10);
    ebx = ebx + edx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0xFFFFFD63u);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((8) & 31u));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x1D9);
    edx = edx - MEM32(ebp + 8);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((8) & 31u));
    edx = edx + ebx;
    MEM32(ebp + -12) = edx;
    edx = MEM32(ebp + -8);
    edx = edx - MEM32(ebp + -24);
    MEM32(ebp + -20) = ebx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x16A);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((8) & 31u));
    edx = edx - MEM32(ebp + -12);
    MEM32(ebp + 0x10) = edx;
    edx = MEM32(ebp + -4);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x115);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((8) & 31u));
    edx = edx - ebx;
    edx = edx + MEM32(ebp + 0x10);
    ebx = MEM32(ebp + 8);
    MEM32(ebp + -4) = edx;
    edx = MEM32(ebp + -36);
    ebx = ebx + edx;
    edx = edx - MEM32(ebp + 8);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((5) & 31u));
    ebx = ebx & eax;
    SET_LO8(ebx, MEM8(ebx + edi));
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    MEM8(ecx) = LO8(ebx);
    ebx = MEM32(ebp + -12);
    edx = edx & eax;
    SET_LO8(edx, MEM8(edx + edi));
    MEM8(ecx + 7) = LO8(edx);
    edx = MEM32(ebp + -32);
    ebx = ebx + edx;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((5) & 31u));
    edx = edx - MEM32(ebp + -12);
    ebx = ebx & eax;
    SET_LO8(ebx, MEM8(ebx + edi));
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    MEM8(ecx + 1) = LO8(ebx);
    ebx = MEM32(ebp + 0x10);
    edx = edx & eax;
    SET_LO8(edx, MEM8(edx + edi));
    MEM8(ecx + 6) = LO8(edx);
    edx = MEM32(ebp + 0xC);
    ebx = ebx + edx;
    edx = edx - MEM32(ebp + 0x10);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((5) & 31u));
    ebx = ebx & eax;
    SET_LO8(ebx, MEM8(ebx + edi));
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    MEM8(ecx + 2) = LO8(ebx);
    ebx = MEM32(ebp + -4);
    edx = edx & eax;
    SET_LO8(edx, MEM8(edx + edi));
    MEM8(ecx + 5) = LO8(edx);
    edx = MEM32(ebp + -16);
    ebx = ebx + edx;
    edx = edx - MEM32(ebp + -4);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((5) & 31u));
    ebx = ebx & eax;
    SET_LO8(ebx, MEM8(ebx + edi));
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    edx = edx & eax;
    MEM8(ecx + 4) = LO8(ebx);
    SET_LO8(edx, MEM8(edx + edi));
    esi = esi + 0x20;
    ebx = 0; /* xor self */

loc_0030015E: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) + 1;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 8 (32-bit) */
    MEM8(ecx + 3) = LO8(edx);
    if (CMP_L(_fas, _fbs)) goto loc_002FFFBA; /* jl: less (signed <) */

loc_0030016E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0030002F
 * Original: 0x0030002F - 0x00300173 (324 bytes, 113 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030002F(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030002F: ;
    MEM32(ebp + 8) = ebx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x16A);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((8) & 31u));
    edx = edx - ebx;
    MEM32(ebp + 0x10) = edx;
    edx = MEM32(ebp + -4);
    ebx = ebx + edx;
    edx = edx - MEM32(ebp + 8);
    MEM32(ebp + -36) = ebx;
    ebx = MEM32(ebp + 0x10);
    MEM32(ebp + -16) = edx;
    edx = MEM32(ebp + 0xC);
    ebx = ebx + edx;
    edx = edx - MEM32(ebp + 0x10);
    MEM32(ebp + -32) = ebx;
    ebx = MEM32(esi + 0xC);
    MEM32(ebp + 0xC) = edx;
    edx = MEM32(esi + 0x14);
    ebx = ebx + edx;
    edx = edx - MEM32(esi + 0xC);
    MEM32(ebp + -24) = ebx;
    ebx = MEM32(esi + 0x1C);
    MEM32(ebp + 0x10) = edx;
    edx = MEM32(ebp + -8);
    ebx = ebx + edx;
    edx = edx - MEM32(esi + 0x1C);
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -4) = edx;
    edx = ebx;
    ebx = MEM32(ebp + -24);
    edx = edx + ebx;
    ebx = MEM32(ebp + -4);
    MEM32(ebp + 8) = edx;
    edx = MEM32(ebp + 0x10);
    ebx = ebx + edx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0xFFFFFD63u);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((8) & 31u));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x1D9);
    edx = edx - MEM32(ebp + 8);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((8) & 31u));
    edx = edx + ebx;
    MEM32(ebp + -12) = edx;
    edx = MEM32(ebp + -8);
    edx = edx - MEM32(ebp + -24);
    MEM32(ebp + -20) = ebx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x16A);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((8) & 31u));
    edx = edx - MEM32(ebp + -12);
    MEM32(ebp + 0x10) = edx;
    edx = MEM32(ebp + -4);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x115);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((8) & 31u));
    edx = edx - ebx;
    edx = edx + MEM32(ebp + 0x10);
    ebx = MEM32(ebp + 8);
    MEM32(ebp + -4) = edx;
    edx = MEM32(ebp + -36);
    ebx = ebx + edx;
    edx = edx - MEM32(ebp + 8);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((5) & 31u));
    ebx = ebx & eax;
    SET_LO8(ebx, MEM8(ebx + edi));
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    MEM8(ecx) = LO8(ebx);
    ebx = MEM32(ebp + -12);
    edx = edx & eax;
    SET_LO8(edx, MEM8(edx + edi));
    MEM8(ecx + 7) = LO8(edx);
    edx = MEM32(ebp + -32);
    ebx = ebx + edx;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((5) & 31u));
    edx = edx - MEM32(ebp + -12);
    ebx = ebx & eax;
    SET_LO8(ebx, MEM8(ebx + edi));
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    MEM8(ecx + 1) = LO8(ebx);
    ebx = MEM32(ebp + 0x10);
    edx = edx & eax;
    SET_LO8(edx, MEM8(edx + edi));
    MEM8(ecx + 6) = LO8(edx);
    edx = MEM32(ebp + 0xC);
    ebx = ebx + edx;
    edx = edx - MEM32(ebp + 0x10);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((5) & 31u));
    ebx = ebx & eax;
    SET_LO8(ebx, MEM8(ebx + edi));
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    MEM8(ecx + 2) = LO8(ebx);
    ebx = MEM32(ebp + -4);
    edx = edx & eax;
    SET_LO8(edx, MEM8(edx + edi));
    MEM8(ecx + 5) = LO8(edx);
    edx = MEM32(ebp + -16);
    ebx = ebx + edx;
    edx = edx - MEM32(ebp + -4);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((5) & 31u));
    ebx = ebx & eax;
    SET_LO8(ebx, MEM8(ebx + edi));
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    edx = edx & eax;
    MEM8(ecx + 4) = LO8(ebx);
    SET_LO8(edx, MEM8(edx + edi));
    esi = esi + 0x20;
    ebx = 0; /* xor self */
    MEM32(ebp + -28) = MEM32(ebp + -28) + 1;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 8 (32-bit) */
    MEM8(ecx + 3) = LO8(edx);
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_002FFFBA(); return; } /* jl: less (signed <) */

loc_0030016E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00300038
 * Original: 0x00300038 - 0x00300173 (315 bytes, 111 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00300038(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00300038: ;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((8) & 31u));
    edx = edx - ebx;
    MEM32(ebp + 0x10) = edx;
    edx = MEM32(ebp + -4);
    ebx = ebx + edx;
    edx = edx - MEM32(ebp + 8);
    MEM32(ebp + -36) = ebx;
    ebx = MEM32(ebp + 0x10);
    MEM32(ebp + -16) = edx;
    edx = MEM32(ebp + 0xC);
    ebx = ebx + edx;
    edx = edx - MEM32(ebp + 0x10);
    MEM32(ebp + -32) = ebx;
    ebx = MEM32(esi + 0xC);
    MEM32(ebp + 0xC) = edx;
    edx = MEM32(esi + 0x14);
    ebx = ebx + edx;
    edx = edx - MEM32(esi + 0xC);
    MEM32(ebp + -24) = ebx;
    ebx = MEM32(esi + 0x1C);
    MEM32(ebp + 0x10) = edx;
    edx = MEM32(ebp + -8);
    ebx = ebx + edx;
    edx = edx - MEM32(esi + 0x1C);
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -4) = edx;
    edx = ebx;
    ebx = MEM32(ebp + -24);
    edx = edx + ebx;
    ebx = MEM32(ebp + -4);
    MEM32(ebp + 8) = edx;
    edx = MEM32(ebp + 0x10);
    ebx = ebx + edx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0xFFFFFD63u);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((8) & 31u));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x1D9);
    edx = edx - MEM32(ebp + 8);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((8) & 31u));
    edx = edx + ebx;
    MEM32(ebp + -12) = edx;
    edx = MEM32(ebp + -8);
    edx = edx - MEM32(ebp + -24);
    MEM32(ebp + -20) = ebx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x16A);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((8) & 31u));
    edx = edx - MEM32(ebp + -12);
    MEM32(ebp + 0x10) = edx;
    edx = MEM32(ebp + -4);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x115);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((8) & 31u));
    edx = edx - ebx;
    edx = edx + MEM32(ebp + 0x10);
    ebx = MEM32(ebp + 8);
    MEM32(ebp + -4) = edx;
    edx = MEM32(ebp + -36);
    ebx = ebx + edx;
    edx = edx - MEM32(ebp + 8);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((5) & 31u));
    ebx = ebx & eax;
    SET_LO8(ebx, MEM8(ebx + edi));
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    MEM8(ecx) = LO8(ebx);
    ebx = MEM32(ebp + -12);
    edx = edx & eax;
    SET_LO8(edx, MEM8(edx + edi));
    MEM8(ecx + 7) = LO8(edx);
    edx = MEM32(ebp + -32);
    ebx = ebx + edx;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((5) & 31u));
    edx = edx - MEM32(ebp + -12);
    ebx = ebx & eax;
    SET_LO8(ebx, MEM8(ebx + edi));
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    MEM8(ecx + 1) = LO8(ebx);
    ebx = MEM32(ebp + 0x10);
    edx = edx & eax;
    SET_LO8(edx, MEM8(edx + edi));
    MEM8(ecx + 6) = LO8(edx);
    edx = MEM32(ebp + 0xC);
    ebx = ebx + edx;
    edx = edx - MEM32(ebp + 0x10);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((5) & 31u));
    ebx = ebx & eax;
    SET_LO8(ebx, MEM8(ebx + edi));
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    MEM8(ecx + 2) = LO8(ebx);
    ebx = MEM32(ebp + -4);
    edx = edx & eax;
    SET_LO8(edx, MEM8(edx + edi));
    MEM8(ecx + 5) = LO8(edx);
    edx = MEM32(ebp + -16);
    ebx = ebx + edx;
    edx = edx - MEM32(ebp + -4);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((5) & 31u));
    ebx = ebx & eax;
    SET_LO8(ebx, MEM8(ebx + edi));
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    edx = edx & eax;
    MEM8(ecx + 4) = LO8(ebx);
    SET_LO8(edx, MEM8(edx + edi));
    esi = esi + 0x20;
    ebx = 0; /* xor self */
    MEM32(ebp + -28) = MEM32(ebp + -28) + 1;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 8 (32-bit) */
    MEM8(ecx + 3) = LO8(edx);
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_002FFFBA(); return; } /* jl: less (signed <) */

loc_0030016E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00300173
 * Original: 0x00300173 - 0x0030046B (760 bytes, 223 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00300173(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00300173: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x1C;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = eax + 8;
    MEM32(ebp + -28) = 8;
    PUSH32(esp, edi);

loc_00300189: ;
    ecx = MEM32(eax + 0x14);
    edx = MEM32(eax + -8);
    esi = edx + ecx;
    edx = edx - ecx;
    ecx = MEM32(eax + 0x10);
    MEM32(ebp + -16) = esi;
    esi = MEM32(eax + -4);
    edi = esi + ecx;
    esi = esi - ecx;
    ecx = MEM32(eax + 0xC);
    MEM32(ebp + -20) = edi;
    edi = MEM32(eax);
    ebx = ecx + edi;
    MEM32(ebp + -12) = ebx;
    ebx = MEM32(eax + 8);
    edi = edi - ecx;
    ecx = MEM32(eax + 4);
    ebx = ebx + ecx;
    ecx = ecx - MEM32(eax + 8);
    MEM32(ebp + -4) = ebx;
    MEM32(ebp + -8) = ecx;
    ecx = MEM32(ebp + -16);
    ebx = ebx + ecx;
    ecx = ecx - MEM32(ebp + -4);
    MEM32(ebp + -16) = ebx;
    ebx = MEM32(ebp + -12);
    MEM32(ebp + -24) = ecx;
    ecx = MEM32(ebp + -20);
    ebx = ebx + ecx;
    ecx = ecx - MEM32(ebp + -12);
    MEM32(ebp + -4) = ebx;
    MEM32(ebp + -12) = ecx;
    ecx = MEM32(ebp + -16);
    ebx = ebx + ecx;
    ecx = ecx - MEM32(ebp + -4);
    ebx = ebx << 2;
    MEM32(eax + -8) = ebx;
    ebx = MEM32(ebp + -24);
    ecx = ecx << 2;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(ebp + -12);
    ecx = ecx + ebx;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x187E);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1151);
    ebx = ebx + ecx + 0x400;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((0xB) & 31u));
    MEM32(eax) = ebx;
    ebx = MEM32(ebp + -12);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x3B21);
    ecx = ecx - ebx;
    ecx = ecx + 0x400;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0xB) & 31u));
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(ebp + -8);
    ecx = ecx + esi;
    ebx = edi + edx;
    MEM32(ebp + -4) = ebx;
    ebx = ebx + ecx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3EC5);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x25A1);
    MEM32(ebp + -12) = ebx;
    ebx = MEM32(ebp + -8);
    ebx = ebx + edx;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xFFFFE333u);
    MEM32(ebp + -24) = ebx;
    ebx = edi + esi;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xFFFFADFDu);
    MEM32(ebp + -20) = ebx;
    ebx = MEM32(ebp + -12);
    ebx = ebx - ecx;
    ecx = MEM32(ebp + -12);
    MEM32(ebp + -16) = ebx;
    ebx = MEM32(ebp + -4);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xC7C);
    ecx = ecx - ebx;
    ebx = MEM32(ebp + -24);
    MEM32(ebp + -4) = ecx;
    ecx = MEM32(ebp + -8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x98E);
    ecx = ecx + MEM32(ebp + -16);
    ecx = ecx + ebx + 0x400;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x41B3);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6254);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x300B);
    edi = edi + MEM32(ebp + -4);
    esi = esi + MEM32(ebp + -16);
    edx = edx + MEM32(ebp + -4);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0xB) & 31u));
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(ebp + -20);
    edi = edi + ecx + 0x400;
    ecx = esi + ecx + 0x400;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0xB) & 31u));
    MEM32(eax + 4) = ecx;
    ecx = edx + ebx + 0x400;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((0xB) & 31u));
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0xB) & 31u));
    MEM32(eax + 0xC) = edi;
    MEM32(eax + -4) = ecx;
    eax = eax + 0x20;
    MEM32(ebp + -28) = MEM32(ebp + -28) - 1;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00300189; /* jne: not equal / not zero */

loc_003002E9: ;
    eax = MEM32(ebp + 8);
    eax = eax + 0x40;
    MEM32(ebp + 8) = 8;

loc_003002F6: ;
    ecx = MEM32(eax + 0xA0);
    edx = MEM32(eax + -64);
    esi = edx + ecx;
    edx = edx - ecx;
    ecx = MEM32(eax + 0x80);
    MEM32(ebp + -16) = esi;
    esi = MEM32(eax + -32);
    edi = esi + ecx;
    esi = esi - ecx;
    ecx = MEM32(eax + 0x60);
    MEM32(ebp + -20) = edi;
    edi = MEM32(eax);
    ebx = ecx + edi;
    MEM32(ebp + -12) = ebx;
    ebx = MEM32(eax + 0x40);
    edi = edi - ecx;
    ecx = MEM32(eax + 0x20);
    ebx = ebx + ecx;
    ecx = ecx - MEM32(eax + 0x40);
    MEM32(ebp + -4) = ebx;
    MEM32(ebp + -8) = ecx;
    ecx = MEM32(ebp + -16);
    ebx = ebx + ecx;
    ecx = ecx - MEM32(ebp + -4);
    MEM32(ebp + -16) = ebx;
    ebx = MEM32(ebp + -12);
    MEM32(ebp + -24) = ecx;
    ecx = MEM32(ebp + -20);
    ebx = ebx + ecx;
    ecx = ecx - MEM32(ebp + -12);
    MEM32(ebp + -4) = ebx;
    MEM32(ebp + -12) = ecx;
    ecx = MEM32(ebp + -16);
    ebx = ebx + ecx + 2;
    ecx = ecx - MEM32(ebp + -4);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((2) & 31u));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + -64) = ebx;
    ebx = MEM32(ebp + -24);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    MEM32(eax + 0x40) = ecx;
    ecx = MEM32(ebp + -12);
    ecx = ecx + ebx;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x187E);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1151);
    ebx = ebx + ecx + 0x4000;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((0xF) & 31u));
    MEM32(eax) = ebx;
    ebx = MEM32(ebp + -12);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x3B21);
    ecx = ecx - ebx;
    ecx = ecx + 0x4000;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0xF) & 31u));
    MEM32(eax + 0x80) = ecx;
    ecx = MEM32(ebp + -8);
    ecx = ecx + esi;
    ebx = edi + edx;
    MEM32(ebp + -4) = ebx;
    ebx = ebx + ecx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3EC5);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x25A1);
    MEM32(ebp + -12) = ebx;
    ebx = MEM32(ebp + -8);
    ebx = ebx + edx;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xFFFFE333u);
    MEM32(ebp + -24) = ebx;
    ebx = edi + esi;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xFFFFADFDu);
    MEM32(ebp + -20) = ebx;
    ebx = MEM32(ebp + -12);
    ebx = ebx - ecx;
    ecx = MEM32(ebp + -12);
    MEM32(ebp + -16) = ebx;
    ebx = MEM32(ebp + -4);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xC7C);
    ecx = ecx - ebx;
    MEM32(ebp + -4) = ecx;
    ecx = MEM32(ebp + -8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x98E);
    ecx = ecx + MEM32(ebp + -16);
    ebx = MEM32(ebp + -24);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x41B3);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6254);
    edi = edi + MEM32(ebp + -4);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x300B);
    esi = esi + MEM32(ebp + -16);
    edx = edx + MEM32(ebp + -4);
    ecx = ecx + ebx + 0x4000;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0xF) & 31u));
    MEM32(eax + 0xA0) = ecx;
    ecx = MEM32(ebp + -20);
    edi = edi + ecx + 0x4000;
    ecx = esi + ecx + 0x4000;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0xF) & 31u));
    MEM32(eax + 0x20) = ecx;
    ecx = edx + ebx + 0x4000;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((0xF) & 31u));
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0xF) & 31u));
    MEM32(eax + 0x60) = edi;
    MEM32(eax + -32) = ecx;
    eax = eax + 4;
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003002F6; /* jne: not equal / not zero */

loc_00300466: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0030046B
 * Original: 0x0030046B - 0x00300649 (478 bytes, 163 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0030046B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030046B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = eax + 8;
    MEM32(ebp + -24) = 8;
    PUSH32(esp, edi);

loc_00300481: ;
    ecx = MEM32(eax + 0x14);
    esi = MEM32(eax + -8);
    edi = MEM32(eax + 0x10);
    edx = esi + ecx;
    esi = esi - ecx;
    ecx = MEM32(eax + -4);
    ebx = ecx + edi;
    ecx = ecx - edi;
    edi = MEM32(eax + 0xC);
    MEM32(ebp + -20) = ecx;
    ecx = MEM32(eax);
    edi = edi + ecx;
    ecx = ecx - MEM32(eax + 0xC);
    MEM32(ebp + -4) = edi;
    edi = MEM32(eax + 8);
    MEM32(ebp + -8) = ecx;
    ecx = MEM32(eax + 4);
    edi = edi + ecx;
    ecx = ecx - MEM32(eax + 8);
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = ecx;
    ecx = edi + edx;
    edx = edx - edi;
    edi = MEM32(ebp + -4);
    edi = edi + ebx;
    MEM32(ebp + -12) = edi;
    edi = edi + ecx;
    ecx = ecx - MEM32(ebp + -12);
    MEM32(eax + -8) = edi;
    MEM32(eax + 8) = ecx;
    ecx = edx;
    ecx = ecx - MEM32(ebp + -4);
    ecx = ecx + ebx;
    ebx = MEM32(ebp + -20);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xB5);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((8) & 31u));
    edi = ecx + edx;
    edx = edx - ecx;
    ecx = MEM32(ebp + -16);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ebp + -8);
    edx = edx + ecx;
    MEM32(eax) = edi;
    ecx = edx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x8B);
    edi = ebx + esi;
    ecx = ecx - edi;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x14E);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x62);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((8) & 31u));
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((8) & 31u));
    edx = edx + ecx;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((8) & 31u));
    edi = edi + ecx;
    ecx = MEM32(ebp + -8);
    ecx = ecx + ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xB5);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((8) & 31u));
    MEM32(ebp + -20) = edx;
    edx = ecx + esi;
    esi = esi - ecx;
    ecx = MEM32(ebp + -20);
    ebx = esi + ecx;
    esi = esi - ecx;
    ecx = edx + edi;
    edx = edx - edi;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 4) = esi;
    MEM32(eax + -4) = ecx;
    MEM32(eax + 0x14) = edx;
    eax = eax + 0x20;
    MEM32(ebp + -24) = MEM32(ebp + -24) - 1;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00300481; /* jne: not equal / not zero */

loc_00300556: ;
    eax = MEM32(ebp + 8);
    eax = eax + 0x40;
    MEM32(ebp + 8) = 8;

loc_00300563: ;
    ecx = MEM32(eax + 0xA0);
    esi = MEM32(eax + -64);
    edi = MEM32(eax + 0x80);
    edx = esi + ecx;
    esi = esi - ecx;
    ecx = MEM32(eax + -32);
    ebx = ecx + edi;
    ecx = ecx - edi;
    edi = MEM32(eax + 0x60);
    MEM32(ebp + -20) = ecx;
    ecx = MEM32(eax);
    edi = edi + ecx;
    ecx = ecx - MEM32(eax + 0x60);
    MEM32(ebp + -4) = edi;
    edi = MEM32(eax + 0x40);
    MEM32(ebp + -8) = ecx;
    ecx = MEM32(eax + 0x20);
    edi = edi + ecx;
    ecx = ecx - MEM32(eax + 0x40);
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = ecx;
    ecx = edi + edx;
    edx = edx - edi;
    edi = MEM32(ebp + -4);
    edi = edi + ebx;
    MEM32(ebp + -12) = edi;
    edi = edi + ecx;
    ecx = ecx - MEM32(ebp + -12);
    MEM32(eax + -64) = edi;
    MEM32(eax + 0x40) = ecx;
    ecx = edx;
    ecx = ecx - MEM32(ebp + -4);
    ecx = ecx + ebx;
    ebx = MEM32(ebp + -20);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xB5);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((8) & 31u));
    edi = ecx + edx;
    edx = edx - ecx;
    ecx = MEM32(ebp + -16);
    MEM32(eax + 0x80) = edx;
    edx = MEM32(ebp + -8);
    edx = edx + ecx;
    MEM32(eax) = edi;
    ecx = edx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x8B);
    edi = ebx + esi;
    ecx = ecx - edi;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x14E);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x62);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((8) & 31u));
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((8) & 31u));
    edx = edx + ecx;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((8) & 31u));
    edi = edi + ecx;
    ecx = MEM32(ebp + -8);
    ecx = ecx + ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xB5);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((8) & 31u));
    MEM32(ebp + -20) = edx;
    edx = ecx + esi;
    esi = esi - ecx;
    ecx = MEM32(ebp + -20);
    ebx = esi + ecx;
    esi = esi - ecx;
    ecx = edx + edi;
    edx = edx - edi;
    MEM32(eax + 0x60) = ebx;
    MEM32(eax + 0x20) = esi;
    MEM32(eax + -32) = ecx;
    MEM32(eax + 0xA0) = edx;
    eax = eax + 4;
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00300563; /* jne: not equal / not zero */

loc_00300644: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00300649
 * Original: 0x00300649 - 0x003006BA (113 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00300649(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00300649: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x1CC);
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003006B5; /* je: equal / zero */

loc_00300657: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00300664; /* je: equal / zero */

loc_0030065C: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x412320);
    goto loc_0030067D;

loc_00300664: ;
    SET_LO16(ecx, MEM16(eax + 0x40));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(8) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 8 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030068B; /* je: equal / zero */

loc_0030066E: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x10 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030068B; /* je: equal / zero */

loc_00300674: ;
    ecx = ZX16(LO16(ecx));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x4122D8);

loc_0030067D: ;
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, 0x00300684u); RECOMP_ABI_CALL(0x002CED88u, sub_002CED88); /* call 0x002CED88 */

loc_00300684: ;
    esp = esp + 0xC;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0030068B: ;
    _fa = (uint32_t)(MEM16(eax + 0x72)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x72), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00300698; /* jne: not equal / not zero */

loc_00300692: ;
    ecx = ZX16(MEM16(eax + 0x4E));
    goto loc_0030069B;

loc_00300698: ;
    ecx = 0; /* xor self */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0030069B: ;
    MEM32(esi + 4) = ecx;
    _fa = (uint32_t)(MEM8(eax + 0xD)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xD), 4 (8-bit) */
    PUSH32(esp, eax);
    if (TEST_Z(_fa, _fb)) goto loc_003006AC; /* je: equal / zero */

loc_003006A5: ;
    PUSH32(esp, 0x003006AAu); RECOMP_ABI_CALL(0x002CF539u, sub_002CF539); /* call 0x002CF539 */

loc_003006AA: ;
    goto loc_003006B1;

loc_003006AC: ;
    PUSH32(esp, 0x003006B1u); RECOMP_ABI_CALL(0x002C33ECu, sub_002C33EC); /* call 0x002C33EC */

loc_003006B1: ;
    POP32(esp, ecx);
    MEM32(esi + 8) = eax;

loc_003006B5: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003006BA
 * Original: 0x003006BA - 0x003007B4 (250 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003006BA(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003006BA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x1CC);
    edx = MEM32(eax + 4);
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    eax = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_003007B1; /* jle: less or equal (signed <=) */

loc_003006DA: ;
    PUSH32(esp, ebx);
    edi = edi - edx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00300718; /* jne: not equal / not zero */

loc_003006E3: ;
    edx = (uint32_t)(int32_t)SMEM8(ecx);
    ebx = (uint32_t)(int32_t)SMEM8(ecx + 1);
    eax = ecx + 2;
    ecx = (uint32_t)(int32_t)SMEM8(eax);

loc_003006F0: ;
    esi = (uint32_t)(int32_t)SMEM8(eax + 1);
    eax = eax + 3;
    edx = edx + esi;
    esi = (uint32_t)(int32_t)SMEM8(eax + -1);
    ebx = ebx + esi;
    esi = (uint32_t)(int32_t)SMEM8(eax);
    edi = edi - 3;
    ecx = ecx + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM8(eax + -2) = LO8(edx);
    MEM8(eax + -1) = LO8(ebx);
    MEM8(eax) = LO8(ecx);
    if (CMP_G(_fas & _fbs, 0)) goto loc_003006F0; /* jg: greater (signed >) */

loc_00300713: ;
    goto loc_003007AF;

loc_00300718: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030076C; /* jne: not equal / not zero */

loc_0030071D: ;
    edx = (uint32_t)(int32_t)SMEM8(ecx);
    ebx = (uint32_t)(int32_t)SMEM8(ecx + 1);
    esi = ecx + 2;
    eax = (uint32_t)(int32_t)SMEM8(esi);
    MEM32(ebp + 8) = eax;
    eax = (uint32_t)(int32_t)SMEM8(ecx + 3);
    MEM32(ebp + 0xC) = eax;
    eax = esi;

loc_00300736: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 2);
    eax = eax + 4;
    edx = edx + ecx;
    ecx = (uint32_t)(int32_t)SMEM8(eax + -1);
    ebx = ebx + ecx;
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    MEM32(ebp + 8) = MEM32(ebp + 8) + ecx;
    SET_LO8(ecx, MEM8(ebp + 8));
    MEM8(eax) = LO8(ecx);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + ecx;
    SET_LO8(ecx, MEM8(ebp + 0xC));
    edi = edi - 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM8(eax + -2) = LO8(edx);
    MEM8(eax + -1) = LO8(ebx);
    MEM8(eax + 1) = LO8(ecx);
    if (CMP_G(_fas & _fbs, 0)) goto loc_00300736; /* jg: greater (signed >) */

loc_0030076A: ;
    goto loc_003007AF;

loc_0030076C: ;
    ecx = edx;
    ecx = ecx - 0;
    if ((ecx == 0)) goto loc_003007A9; /* je: equal / zero */

loc_00300773: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003007A3; /* je: equal / zero */

loc_00300776: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0030079D; /* je: equal / zero */

loc_00300779: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00300797; /* je: equal / zero */

loc_0030077C: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00300791; /* je: equal / zero */

loc_0030077F: ;
    ecx = edx + -4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00300791; /* jle: less or equal (signed <=) */

loc_00300786: ;
    esi = ecx;

loc_00300788: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(eax + edx) = MEM8(eax + edx) + LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00300788; /* jne: not equal / not zero */

loc_00300791: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(eax + edx) = MEM8(eax + edx) + LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00300797: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(eax + edx) = MEM8(eax + edx) + LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0030079D: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(eax + edx) = MEM8(eax + edx) + LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003007A3: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(eax + edx) = MEM8(eax + edx) + LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003007A9: ;
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_0030076C; /* jg: greater (signed >) */

loc_003007AF: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_003007B1: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0030083A
 * Original: 0x0030083A - 0x003008BD (131 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0030083A(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030083A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x1CC);
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    eax = MEM32(ebp + 0x10);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003008BA; /* jle: less or equal (signed <=) */

loc_00300859: ;
    eax = eax - esi;
    MEM32(ebp + 8) = eax;
    PUSH32(esp, edi);

loc_0030085F: ;
    edx = esi;
    edx = edx - 0;
    if ((edx == 0)) goto loc_003008B0; /* je: equal / zero */

loc_00300866: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003008A7; /* je: equal / zero */

loc_00300869: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0030089E; /* je: equal / zero */

loc_0030086C: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00300895; /* je: equal / zero */

loc_0030086F: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0030088C; /* je: equal / zero */

loc_00300872: ;
    edx = esi + -4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0030088C; /* jle: less or equal (signed <=) */

loc_00300879: ;
    edi = edx;

loc_0030087B: ;
    SET_LO16(eax, MEM16(ecx));
    edx = ecx + esi * 2;
    MEM16(edx) = MEM16(edx) + LO16(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0030087B; /* jne: not equal / not zero */

loc_00300889: ;
    eax = MEM32(ebp + 8);

loc_0030088C: ;
    SET_LO16(edx, MEM16(ecx));
    MEM16(ecx + esi * 2) = MEM16(ecx + esi * 2) + LO16(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00300895: ;
    SET_LO16(edx, MEM16(ecx));
    MEM16(ecx + esi * 2) = MEM16(ecx + esi * 2) + LO16(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0030089E: ;
    SET_LO16(edx, MEM16(ecx));
    MEM16(ecx + esi * 2) = MEM16(ecx + esi * 2) + LO16(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003008A7: ;
    SET_LO16(edx, MEM16(ecx));
    MEM16(ecx + esi * 2) = MEM16(ecx + esi * 2) + LO16(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003008B0: ;
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_G(_fas & _fbs, 0)) goto loc_0030085F; /* jg: greater (signed >) */

loc_003008B9: ;
    POP32(esp, edi);

loc_003008BA: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003008BD
 * Original: 0x003008BD - 0x003008F7 (58 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003008BD(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003008BD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x14));
    edi = MEM32(ebp + 8);
    PUSH32(esp, MEM32(ebp + 0x10));
    esi = MEM32(edi + 0x1CC);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(esi + 0x10); PUSH32(esp, 0x003008D8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003008D8: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003008F1; /* je: equal / zero */

loc_003008DF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(esi + 0xC); PUSH32(esp, 0x003008E9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003008E9: ;
    eax = 0; /* xor self */
    esp = esp + 0xC;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003008F3;

loc_003008F1: ;
    eax = 0; /* xor self */

loc_003008F3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003008F7
 * Original: 0x003008F7 - 0x00300942 (75 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003008F7(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003008F7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x14));
    esi = MEM32(eax + 0x1CC);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x18); PUSH32(esp, 0x00300913u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00300913: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030093C; /* je: equal / zero */

loc_0030091A: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    goto loc_00300932;

loc_00300920: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(esi + 0xC); PUSH32(esp, 0x0030092Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030092A: ;
    esp = esp + 0xC;
    ebx = ebx - edi;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + edi;

loc_00300932: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_00300920; /* jg: greater (signed >) */

loc_00300936: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    goto loc_0030093E;

loc_0030093C: ;
    eax = 0; /* xor self */

loc_0030093E: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00300942
 * Original: 0x00300942 - 0x00300A65 (291 bytes, 117 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00300942(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00300942: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x1CC);
    ecx = MEM32(eax + 4);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00300A62; /* jle: less or equal (signed <=) */

loc_0030095D: ;
    eax = MEM32(ebp + 0xC);
    esi = esi - ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_003009B4; /* jne: not equal / not zero */

loc_00300968: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 1);
    edx = (uint32_t)(int32_t)SMEM8(eax);
    MEM32(ebp + 0xC) = ecx;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 2);
    MEM32(ebp + 8) = ecx;
    eax = eax + 4;

loc_0030097C: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + -1);
    SET_LO8(ebx, LO8(ecx));
    SET_LO8(ebx, LO8(ebx) - LO8(edx));
    edx = ecx;
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    MEM8(eax + -1) = LO8(ebx);
    SET_LO8(ebx, LO8(ecx));
    SET_LO8(ebx, LO8(ebx) - MEM8(ebp + 0xC));
    MEM32(ebp + 0xC) = ecx;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 1);
    MEM8(eax) = LO8(ebx);
    SET_LO8(ebx, LO8(ecx));
    SET_LO8(ebx, LO8(ebx) - MEM8(ebp + 8));
    esi = esi - 3;
    MEM8(eax + 1) = LO8(ebx);
    eax = eax + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(ebp + 8) = ecx;
    if (CMP_G(_fas & _fbs, 0)) goto loc_0030097C; /* jg: greater (signed >) */

loc_003009AF: ;
    goto loc_00300A61;

loc_003009B4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00300A18; /* jne: not equal / not zero */

loc_003009B9: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 1);
    edx = (uint32_t)(int32_t)SMEM8(eax);
    MEM32(ebp + 0xC) = ecx;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 2);
    MEM32(ebp + 8) = ecx;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 3);
    MEM32(ebp + 0x10) = ecx;
    eax = eax + 5;

loc_003009D4: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + -1);
    SET_LO8(ebx, LO8(ecx));
    SET_LO8(ebx, LO8(ebx) - LO8(edx));
    MEM8(eax + -1) = LO8(ebx);
    edx = ecx;
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    SET_LO8(ebx, LO8(ecx));
    SET_LO8(ebx, LO8(ebx) - MEM8(ebp + 0xC));
    MEM32(ebp + 0xC) = ecx;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 1);
    MEM8(eax) = LO8(ebx);
    SET_LO8(ebx, LO8(ecx));
    SET_LO8(ebx, LO8(ebx) - MEM8(ebp + 8));
    MEM32(ebp + 8) = ecx;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 2);
    MEM8(eax + 1) = LO8(ebx);
    SET_LO8(ebx, LO8(ecx));
    SET_LO8(ebx, LO8(ebx) - MEM8(ebp + 0x10));
    esi = esi - 4;
    MEM8(eax + 2) = LO8(ebx);
    eax = eax + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(ebp + 0x10) = ecx;
    if (CMP_G(_fas & _fbs, 0)) goto loc_003009D4; /* jg: greater (signed >) */

loc_00300A16: ;
    goto loc_00300A61;

loc_00300A18: ;
    eax = eax + esi + -1;
    PUSH32(esp, edi);

loc_00300A1D: ;
    edx = ecx;
    edx = edx - 0;
    if ((edx == 0)) goto loc_00300A5A; /* je: equal / zero */

loc_00300A24: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00300A54; /* je: equal / zero */

loc_00300A27: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00300A4E; /* je: equal / zero */

loc_00300A2A: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00300A48; /* je: equal / zero */

loc_00300A2D: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00300A42; /* je: equal / zero */

loc_00300A30: ;
    edx = ecx + -4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00300A42; /* jle: less or equal (signed <=) */

loc_00300A37: ;
    edi = edx;

loc_00300A39: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(eax + ecx) = MEM8(eax + ecx) - LO8(edx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00300A39; /* jne: not equal / not zero */

loc_00300A42: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(eax + ecx) = MEM8(eax + ecx) - LO8(edx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00300A48: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(eax + ecx) = MEM8(eax + ecx) - LO8(edx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00300A4E: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(eax + ecx) = MEM8(eax + ecx) - LO8(edx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00300A54: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(eax + ecx) = MEM8(eax + ecx) - LO8(edx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00300A5A: ;
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_00300A1D; /* jg: greater (signed >) */

loc_00300A60: ;
    POP32(esp, edi);

loc_00300A61: ;
    POP32(esp, ebx);

loc_00300A62: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00300A65
 * Original: 0x00300A65 - 0x00300AEC (135 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00300A65(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00300A65: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x1CC);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    eax = MEM32(ebp + 0x10);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00300AE9; /* jle: less or equal (signed <=) */

loc_00300A81: ;
    ecx = MEM32(ebp + 0xC);
    eax = eax - esi;
    MEM32(ebp + 8) = eax;
    ecx = ecx + eax * 2 + -2;
    PUSH32(esp, edi);

loc_00300A8E: ;
    edx = esi;
    edx = edx - 0;
    if ((edx == 0)) goto loc_00300ADF; /* je: equal / zero */

loc_00300A95: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00300AD6; /* je: equal / zero */

loc_00300A98: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00300ACD; /* je: equal / zero */

loc_00300A9B: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00300AC4; /* je: equal / zero */

loc_00300A9E: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00300ABB; /* je: equal / zero */

loc_00300AA1: ;
    edx = esi + -4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00300ABB; /* jle: less or equal (signed <=) */

loc_00300AA8: ;
    edi = edx;

loc_00300AAA: ;
    SET_LO16(eax, MEM16(ecx));
    edx = ecx + esi * 2;
    MEM16(edx) = MEM16(edx) - LO16(eax);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00300AAA; /* jne: not equal / not zero */

loc_00300AB8: ;
    eax = MEM32(ebp + 8);

loc_00300ABB: ;
    SET_LO16(edx, MEM16(ecx));
    MEM16(ecx + esi * 2) = MEM16(ecx + esi * 2) - LO16(edx);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00300AC4: ;
    SET_LO16(edx, MEM16(ecx));
    MEM16(ecx + esi * 2) = MEM16(ecx + esi * 2) - LO16(edx);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00300ACD: ;
    SET_LO16(edx, MEM16(ecx));
    MEM16(ecx + esi * 2) = MEM16(ecx + esi * 2) - LO16(edx);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00300AD6: ;
    SET_LO16(edx, MEM16(ecx));
    MEM16(ecx + esi * 2) = MEM16(ecx + esi * 2) - LO16(edx);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00300ADF: ;
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_G(_fas & _fbs, 0)) goto loc_00300A8E; /* jg: greater (signed >) */

loc_00300AE8: ;
    POP32(esp, edi);

loc_00300AE9: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00300AEC
 * Original: 0x00300AEC - 0x00300B18 (44 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00300AEC(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_00300AEC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    edi = MEM32(ebp + 8);
    PUSH32(esp, MEM32(ebp + 0xC));
    esi = MEM32(edi + 0x1CC);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(esi + 0xC); PUSH32(esp, 0x00300B04u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00300B04: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(esi + 0x10); PUSH32(esp, 0x00300B11u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00300B11: ;
    esp = esp + 0x1C;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00300B18
 * Original: 0x00300B18 - 0x00300B67 (79 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00300B18(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00300B18: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x1CC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    MEM32(ebp + -4) = eax;
    MEM32(ebp + 8) = ecx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00300B52; /* jle: less or equal (signed <=) */

loc_00300B3B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(esi + 0xC); PUSH32(esp, 0x00300B43u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00300B43: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) - edi;
    MEM32(ebp + 8) = MEM32(ebp + 8) + edi;
    esp = esp + 0xC;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00300B3B; /* jg: greater (signed >) */

loc_00300B52: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(esi + 0x18); PUSH32(esp, 0x00300B5Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00300B5F: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00300B67
 * Original: 0x00300B67 - 0x00300BA0 (57 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00300B67(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00300B67: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x13D (32-bit) */
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x1CC);
    if (CMP_EQ(_fa, _fb)) goto loc_00300B8B; /* je: equal / zero */

loc_00300B7C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x20); PUSH32(esp, 0x00300B86u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00300B86: ;
    esp = esp + 0xC;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00300B8B: ;
    edx = MEM32(ebp + 0x10);
    edx = ZX16(MEM16(edx));
    MEM32(ecx) = edx;
    MEM8(eax + 0x1F) = MEM8(eax + 0x1F) | 0x80;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) | 8;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00300BA0
 * Original: 0x00300BA0 - 0x00300BD4 (52 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00300BA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00300BA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x13D (32-bit) */
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx + 0x1CC);
    if (CMP_EQ(_fa, _fb)) goto loc_00300BC4; /* je: equal / zero */

loc_00300BB5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00300BBFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00300BBF: ;
    esp = esp + 0xC;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00300BC4: ;
    ecx = MEM32(ebp + 0x10);
    SET_LO16(eax, MEM16(eax));
    ecx = MEM32(ecx);
    MEM16(ecx) = LO16(eax);
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00300BD4
 * Original: 0x00300BD4 - 0x00300C3C (104 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00300BD4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00300BD4: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM8(edi + 0x1F)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x1F), 0x80 (8-bit) */
    esi = MEM32(edi + 0x1CC);
    if (TEST_Z(_fa, _fb)) goto loc_00300C26; /* je: equal / zero */

loc_00300BEB: ;
    PUSH32(esp, 0x412374);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00300BF6u); RECOMP_ABI_CALL(0x00344289u, sub_00344289); /* call 0x00344289 */

loc_00300BF6: ;
    eax = MEM32(esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if ((_fa == 0)) goto loc_00300C07; /* je: equal / zero */

loc_00300BFD: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00300C14; /* jne: not equal / not zero */

loc_00300C00: ;
    PUSH32(esp, 0x412358);
    goto loc_00300C0C;

loc_00300C07: ;
    PUSH32(esp, 0x412350);

loc_00300C0C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00300C12u); RECOMP_ABI_CALL(0x00344289u, sub_00344289); /* call 0x00344289 */

loc_00300C12: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00300C14: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x412344);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00300C23u); RECOMP_ABI_CALL(0x00344289u, sub_00344289); /* call 0x00344289 */

loc_00300C23: ;
    esp = esp + 0x10;

loc_00300C26: ;
    esi = MEM32(esi + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00300C38; /* je: equal / zero */

loc_00300C2D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = esi; PUSH32(esp, 0x00300C35u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00300C35: ;
    esp = esp + 0xC;

loc_00300C38: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00300C3C
 * Original: 0x00300C3C - 0x00300CDC (160 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00300C3C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00300C3C: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x1CC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edi + 0x28); PUSH32(esp, 0x00300C4Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00300C4C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_00300CD7; /* je: equal / zero */

loc_00300C55: ;
    eax = esi;
    PUSH32(esp, 0x00300C5Cu); RECOMP_ABI_CALL(0x00300649u, sub_00300649); /* call 0x00300649 */

loc_00300C5C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00300CD7; /* je: equal / zero */

loc_00300C60: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00300CD2; /* jne: not equal / not zero */

loc_00300C65: ;
    eax = ZX16(MEM16(esi + 0x40));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    edx = 0x30083A;
    if (CMP_EQ(_fa, _fb)) goto loc_00300C7D; /* je: equal / zero */

loc_00300C73: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00300C84; /* jne: not equal / not zero */

loc_00300C78: ;
    MEM32(edi + 0xC) = edx;
    goto loc_00300C84;

loc_00300C7D: ;
    MEM32(edi + 0xC) = 0x3006BA;

loc_00300C84: ;
    eax = esi + 0x1A0;
    ecx = MEM32(eax);
    MEM32(edi + 0x10) = ecx;
    MEM32(eax) = 0x3008BD;
    eax = esi + 0x1A8;
    ecx = MEM32(eax);
    MEM32(edi + 0x14) = ecx;
    ecx = 0x3008F7;
    MEM32(eax) = ecx;
    eax = esi + 0x1B0;
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    MEM32(edi + 0x18) = ebx;
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC), 0x80 (8-bit) */
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_00300CD2; /* je: equal / zero */

loc_00300CBC: ;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xC), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00300CD2; /* jne: not equal / not zero */

loc_00300CC1: ;
    MEM32(edi + 0xC) = 0x3007B4;
    MEM32(esi + 0x210) = 0x2CEF0E;

loc_00300CD2: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00300CD9;

loc_00300CD7: ;
    eax = 0; /* xor self */

loc_00300CD9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00300CDC
 * Original: 0x00300CDC - 0x00300D59 (125 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00300CDC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00300CDC: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = MEM32(edi + 0x1CC);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(esi + 0x2C); PUSH32(esp, 0x00300CECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00300CEC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_00300D54; /* je: equal / zero */

loc_00300CF1: ;
    eax = edi;
    PUSH32(esp, 0x00300CF8u); RECOMP_ABI_CALL(0x00300649u, sub_00300649); /* call 0x00300649 */

loc_00300CF8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00300D54; /* je: equal / zero */

loc_00300CFC: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00300D4F; /* jne: not equal / not zero */

loc_00300D01: ;
    eax = ZX16(MEM16(edi + 0x40));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00300D18; /* je: equal / zero */

loc_00300D0A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00300D1F; /* jne: not equal / not zero */

loc_00300D0F: ;
    MEM32(esi + 0xC) = 0x300A65;
    goto loc_00300D1F;

loc_00300D18: ;
    MEM32(esi + 0xC) = 0x300942;

loc_00300D1F: ;
    eax = edi + 0x1A4;
    ecx = MEM32(eax);
    MEM32(esi + 0x10) = ecx;
    MEM32(eax) = 0x300AEC;
    eax = edi + 0x1AC;
    ecx = MEM32(eax);
    MEM32(esi + 0x14) = ecx;
    ecx = 0x300B18;
    MEM32(eax) = ecx;
    eax = edi + 0x1B4;
    edx = MEM32(eax);
    MEM32(esi + 0x18) = edx;
    MEM32(eax) = ecx;

loc_00300D4F: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00300D56;

loc_00300D54: ;
    eax = 0; /* xor self */

loc_00300D56: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00300D59
 * Original: 0x00300D59 - 0x00300DDA (129 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00300D59(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00300D59: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = MEM32(edi + 0x1CC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x4122B8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00300D72u); RECOMP_ABI_CALL(0x002CF1A8u, sub_002CF1A8); /* call 0x002CF1A8 */

loc_00300D72: ;
    eax = edi + 0x220;
    ecx = MEM32(eax);
    MEM32(esi + 0x1C) = ecx;
    MEM32(eax) = 0x300BA0;
    eax = edi + 0x21C;
    ecx = MEM32(eax);
    MEM32(esi + 0x20) = ecx;
    MEM32(eax) = 0x300B67;
    eax = edi + 0x224;
    ecx = MEM32(eax);
    MEM32(esi + 0x24) = ecx;
    MEM32(eax) = 0x300BD4;
    eax = edi + 0x18C;
    ecx = MEM32(eax);
    MEM32(esi + 0x28) = ecx;
    MEM32(eax) = 0x300C3C;
    eax = edi + 0x194;
    ecx = MEM32(eax);
    esp = esp + 0xC;
    MEM32(esi + 0x2C) = ecx;
    MEM32(eax) = 0x300CDC;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    eax = 0; /* xor self */
    POP32(esp, edi);
    MEM32(esi) = 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00300DE0
 * Original: 0x00300DE0 - 0x00300E2C (76 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00300DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00300DE0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00300DFA; /* je: equal / zero */

loc_00300DE9: ;
    esi = 1;
    PUSH32(esp, 0x00300DF3u); RECOMP_ABI_CALL(0x003453C4u, sub_003453C4); /* call 0x003453C4 */

loc_00300DF3: ;
    MEM32(eax) = esi;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00300DFA: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7FFFFFF);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00300E0Du); RECOMP_ABI_CALL(0x0019F348u, sub_0019F348); /* call 0x0019F348 */

loc_00300E0D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_00300E28; /* jne: not equal / not zero */

loc_00300E17: ;
    esi = 0x1C;
    PUSH32(esp, 0x00300E21u); RECOMP_ABI_CALL(0x003453C4u, sub_003453C4); /* call 0x003453C4 */

loc_00300E21: ;
    MEM32(eax) = esi;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00300E28: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00300E30
 * Original: 0x00300E30 - 0x00300E56 (38 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00300E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00300E30: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00300E44; /* je: equal / zero */

loc_00300E38: ;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00300E40u); RECOMP_ABI_CALL(0x0019DD85u, sub_0019DD85); /* call 0x0019DD85 */

loc_00300E40: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00300E53; /* jne: not equal / not zero */

loc_00300E44: ;
    PUSH32(esp, 0x00300E49u); RECOMP_ABI_CALL(0x003453C4u, sub_003453C4); /* call 0x003453C4 */

loc_00300E49: ;
    MEM32(eax) = 0x16;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_00300E53: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00300E60
 * Original: 0x00300E60 - 0x00300EA0 (64 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00300E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00300E60: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    if (TEST_NZ(_fa, _fb)) goto loc_00300E7A; /* jne: not equal / not zero */

loc_00300E69: ;
    esi = 0x16;
    PUSH32(esp, 0x00300E73u); RECOMP_ABI_CALL(0x003453C4u, sub_003453C4); /* call 0x003453C4 */

loc_00300E73: ;
    MEM32(eax) = esi;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00300E7A: ;
    eax = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00300E84u); RECOMP_ABI_CALL(0x0019F557u, sub_0019F557); /* call 0x0019F557 */

loc_00300E84: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x102) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x102 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00300E9C; /* jne: not equal / not zero */

loc_00300E8B: ;
    esi = 0xB;
    PUSH32(esp, 0x00300E95u); RECOMP_ABI_CALL(0x003453C4u, sub_003453C4); /* call 0x003453C4 */

loc_00300E95: ;
    MEM32(eax) = esi;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00300E9C: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00300EA0
 * Original: 0x00300EA0 - 0x00300EDB (59 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00300EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00300EA0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    if (TEST_NZ(_fa, _fb)) goto loc_00300EBA; /* jne: not equal / not zero */

loc_00300EA9: ;
    esi = 0x16;
    PUSH32(esp, 0x00300EB3u); RECOMP_ABI_CALL(0x003453C4u, sub_003453C4); /* call 0x003453C4 */

loc_00300EB3: ;
    MEM32(eax) = esi;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00300EBA: ;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00300EC2u); RECOMP_ABI_CALL(0x00301320u, sub_00301320); /* call 0x00301320 */

loc_00300EC2: ;
    esi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00300ED7; /* je: equal / zero */

loc_00300ECB: ;
    PUSH32(esp, 0x00300ED0u); RECOMP_ABI_CALL(0x003453C4u, sub_003453C4); /* call 0x003453C4 */

loc_00300ED0: ;
    MEM32(eax) = esi;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00300ED7: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00300EE0
 * Original: 0x00300EE0 - 0x00300F0A (42 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00300EE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00300EE0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00300EF8; /* je: equal / zero */

loc_00300EE8: ;
    eax = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00300EF4u); RECOMP_ABI_CALL(0x0019F3A3u, sub_0019F3A3); /* call 0x0019F3A3 */

loc_00300EF4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00300F07; /* jne: not equal / not zero */

loc_00300EF8: ;
    PUSH32(esp, 0x00300EFDu); RECOMP_ABI_CALL(0x003453C4u, sub_003453C4); /* call 0x003453C4 */

loc_00300EFD: ;
    MEM32(eax) = 0x16;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_00300F07: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00300F10
 * Original: 0x00300F10 - 0x00300F51 (65 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00300F10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00300F10: ;
    eax = MEM32(0x5BEB8C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00300F1Du); RECOMP_ABI_CALL(0x00301870u, sub_00301870); /* call 0x00301870 */

loc_00300F1D: ;
    edi = MEM32(esp + 0x10);
    esi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00300F30; /* je: equal / zero */

loc_00300F2A: ;
    _fa = (uint32_t)(MEM8(esi + 0x30)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x30), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00300F3F; /* je: equal / zero */

loc_00300F30: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00300F36u); RECOMP_ABI_CALL(0x00301480u, sub_00301480); /* call 0x00301480 */

loc_00300F36: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00300F3Cu); RECOMP_ABI_CALL(0x00345449u, sub_00345449); /* call 0x00345449 */

loc_00300F3C: ;
    esp = esp + 8;

loc_00300F3F: ;
    MEM32(esi + 0x10) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(esp + 4) = 1;
    g_seh_ebp = ebp; sub_00301570(); return; /* tail jmp 0x00301570 */

}

/**
 * sub_00300F60
 * Original: 0x00300F60 - 0x00300F6A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00300F60(void)
{

loc_00300F60: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00300F67u); RECOMP_ABI_CALL(0x0019F583u, sub_0019F583); /* call 0x0019F583 */

loc_00300F67: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00300F70
 * Original: 0x00300F70 - 0x00300FA8 (56 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00300F70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00300F70: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    PUSH32(esp, edi);
    edi = eax + 0x20;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00300F7Eu); RECOMP_ABI_CALL(0x00301CC0u, sub_00301CC0); /* call 0x00301CC0 */

loc_00300F7E: ;
    esp = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00300F87u); RECOMP_ABI_CALL(0x0019EFECu, sub_0019EFEC); /* call 0x0019EFEC */

loc_00300F87: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00300F8Fu); RECOMP_ABI_CALL(0x0019F557u, sub_0019F557); /* call 0x0019F557 */

loc_00300F8F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x102) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x102 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00300F9C; /* jne: not equal / not zero */

loc_00300F96: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00300F9Cu); RECOMP_ABI_CALL(0x0019F012u, sub_0019F012); /* call 0x0019F012 */

loc_00300F9C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00300FA2u); RECOMP_ABI_CALL(0x00301C20u, sub_00301C20); /* call 0x00301C20 */

loc_00300FA2: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00300FB0
 * Original: 0x00300FB0 - 0x0030102F (127 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00300FB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00300FB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00300FB7u); RECOMP_ABI_CALL(0x003011D0u, sub_003011D0); /* call 0x003011D0 */

loc_00300FB7: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00301027; /* je: equal / zero */

loc_00300FBD: ;
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00300FCA; /* je: equal / zero */

loc_00300FC5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00301027; /* jne: not equal / not zero */

loc_00300FCA: ;
    PUSH32(esp, edi);
    edi = esi + 0x20;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00300FD4u); RECOMP_ABI_CALL(0x00301CC0u, sub_00301CC0); /* call 0x00301CC0 */

loc_00300FD4: ;
    eax = MEM32(esp + 0x18);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00300FE4; /* je: equal / zero */

loc_00300FDF: ;
    ecx = MEM32(esi + 0x24);
    MEM32(eax) = ecx;

loc_00300FE4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM32(esi + 0x24) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_00301018; /* jne: not equal / not zero */

loc_00300FEB: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00301018; /* jne: not equal / not zero */

loc_00300FF2: ;
    edx = MEM32(esi + 0x2C);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00300FFCu); RECOMP_ABI_CALL(0x0019F557u, sub_0019F557); /* call 0x0019F557 */

loc_00300FFC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00301018; /* jne: not equal / not zero */

loc_00301000: ;
    eax = MEM32(esi + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00301009u); RECOMP_ABI_CALL(0x0019F32Au, sub_0019F32A); /* call 0x0019F32A */

loc_00301009: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030100Fu); RECOMP_ABI_CALL(0x00301C20u, sub_00301C20); /* call 0x00301C20 */

loc_0030100F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00301015u); RECOMP_ABI_CALL(0x00301570u, sub_00301570); /* call 0x00301570 */

loc_00301015: ;
    esp = esp + 8;

loc_00301018: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030101Eu); RECOMP_ABI_CALL(0x00301C20u, sub_00301C20); /* call 0x00301C20 */

loc_0030101E: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00301027: ;
    POP32(esp, esi);
    eax = 0x16;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00301030
 * Original: 0x00301030 - 0x003010AF (127 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00301030: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00301037u); RECOMP_ABI_CALL(0x003011D0u, sub_003011D0); /* call 0x003011D0 */

loc_00301037: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003010A7; /* je: equal / zero */

loc_0030103D: ;
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030104A; /* je: equal / zero */

loc_00301046: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003010A7; /* jne: not equal / not zero */

loc_0030104A: ;
    PUSH32(esp, edi);
    edi = esi + 0x20;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00301054u); RECOMP_ABI_CALL(0x00301CC0u, sub_00301CC0); /* call 0x00301CC0 */

loc_00301054: ;
    eax = MEM32(esp + 0x18);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00301064; /* je: equal / zero */

loc_0030105F: ;
    ecx = MEM32(esi + 0x28);
    MEM32(eax) = ecx;

loc_00301064: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0x28) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_00301098; /* jne: not equal / not zero */

loc_0030106E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00301098; /* jne: not equal / not zero */

loc_00301072: ;
    edx = MEM32(esi + 0x2C);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0030107Cu); RECOMP_ABI_CALL(0x0019F557u, sub_0019F557); /* call 0x0019F557 */

loc_0030107C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00301098; /* jne: not equal / not zero */

loc_00301080: ;
    eax = MEM32(esi + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00301089u); RECOMP_ABI_CALL(0x0019F32Au, sub_0019F32A); /* call 0x0019F32A */

loc_00301089: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030108Fu); RECOMP_ABI_CALL(0x00301C20u, sub_00301C20); /* call 0x00301C20 */

loc_0030108F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00301095u); RECOMP_ABI_CALL(0x00301570u, sub_00301570); /* call 0x00301570 */

loc_00301095: ;
    esp = esp + 8;

loc_00301098: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030109Eu); RECOMP_ABI_CALL(0x00301C20u, sub_00301C20); /* call 0x00301C20 */

loc_0030109E: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003010A7: ;
    POP32(esp, esi);
    eax = 0x16;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003010B0
 * Original: 0x003010B0 - 0x003010D7 (39 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003010B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003010B0: ;
    PUSH32(esp, 0x003010B5u); RECOMP_ABI_CALL(0x003011D0u, sub_003011D0); /* call 0x003011D0 */

loc_003010B5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003010D6; /* je: equal / zero */

loc_003010B9: ;
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003010D6; /* jne: not equal / not zero */

loc_003010C0: ;
    eax = MEM32(eax + 0x2C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003010CBu); RECOMP_ABI_CALL(0x0019F557u, sub_0019F557); /* call 0x0019F557 */

loc_003010CB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003010D6; /* jne: not equal / not zero */

loc_003010CF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003010D5u); RECOMP_ABI_CALL(0x00301570u, sub_00301570); /* call 0x00301570 */

loc_003010D5: ;
    POP32(esp, ecx);

loc_003010D6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003010E0
 * Original: 0x003010E0 - 0x00301179 (153 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003010E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003010E0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003010F0; /* jne: not equal / not zero */

loc_003010E9: ;
    eax = 3;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_003010F0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    PUSH32(esp, 0x003010F9u); RECOMP_ABI_CALL(0x003011D0u, sub_003011D0); /* call 0x003011D0 */

loc_003010F9: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00301108; /* jne: not equal / not zero */

loc_003010FF: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xC;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00301108: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00301110u); RECOMP_ABI_CALL(0x00301180u, sub_00301180); /* call 0x00301180 */

loc_00301110: ;
    esi = esi + 0x20;
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, 0x0030111Bu); RECOMP_ABI_CALL(0x00301CC0u, sub_00301CC0); /* call 0x00301CC0 */

loc_0030111B: ;
    eax = MEM32(edi + 0x28);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00301157; /* jne: not equal / not zero */

loc_00301125: ;
    eax = MEM32(edi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00301157; /* jne: not equal / not zero */

loc_0030112C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00301140; /* je: equal / zero */

loc_00301130: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00301136u); RECOMP_ABI_CALL(0x00301C20u, sub_00301C20); /* call 0x00301C20 */

loc_00301136: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0030113Du); RECOMP_ABI_CALL(0x00301570u, sub_00301570); /* call 0x00301570 */

loc_0030113D: ;
    esp = esp + 8;

loc_00301140: ;
    eax = edi;
    PUSH32(esp, 0x00301147u); RECOMP_ABI_CALL(0x00300F70u, sub_00300F70); /* call 0x00300F70 */

loc_00301147: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030114Du); RECOMP_ABI_CALL(0x00301C20u, sub_00301C20); /* call 0x00301C20 */

loc_0030114D: ;
    esp = esp + 4;
    POP32(esp, ebx);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00301157: ;
    eax = MEM32(edi + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00301160u); RECOMP_ABI_CALL(0x0019F30Au, sub_0019F30A); /* call 0x0019F30A */

loc_00301160: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00301169; /* jne: not equal / not zero */

loc_00301164: ;
    ebp = 3;

loc_00301169: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030116Fu); RECOMP_ABI_CALL(0x00301C20u, sub_00301C20); /* call 0x00301C20 */

loc_0030116F: ;
    esp = esp + 4;
    POP32(esp, ebx);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00301180
 * Original: 0x00301180 - 0x0030119F (31 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00301180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00301180: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030119C; /* jne: not equal / not zero */

loc_0030118C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00301196; /* je: equal / zero */

loc_00301190: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030119C; /* jne: not equal / not zero */

loc_00301196: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0030119C: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_003011A0
 * Original: 0x003011A0 - 0x003011C7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003011A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003011A0: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, 1);
    PUSH32(esp, 0x003011A9u); RECOMP_ABI_CALL(0x00343AD8u, sub_00343AD8); /* call 0x00343AD8 */

loc_003011A9: ;
    ecx = 0; /* xor self */
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003011C6; /* je: equal / zero */

loc_003011B2: ;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = 1;
    MEM32(eax + 0x20) = 0xFFFFFFFFu;

loc_003011C6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003011D0
 * Original: 0x003011D0 - 0x00301264 (148 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003011D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003011D0: ;
    eax = MEM32(0x5BEB8C);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003011DCu); RECOMP_ABI_CALL(0x00301870u, sub_00301870); /* call 0x00301870 */

loc_003011DC: ;
    esi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00301260; /* jne: not equal / not zero */

loc_003011E5: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, 1);
    PUSH32(esp, 0x003011EEu); RECOMP_ABI_CALL(0x00343AD8u, sub_00343AD8); /* call 0x00343AD8 */

loc_003011EE: ;
    esi = eax;
    esp = esp + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00301250; /* je: equal / zero */

loc_003011F7: ;
    eax = MEM32(esi + 0x30);
    eax = eax | 1;
    MEM32(esi + 0x1C) = 0;
    MEM32(esi + 0x24) = 0;
    MEM32(esi + 0x28) = 1;
    MEM32(esi + 0x20) = 0xFFFFFFFFu;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x1C) = 1;
    PUSH32(esp, 0x00301228u); RECOMP_ABI_CALL(0x0019F29Cu, sub_0019F29C); /* call 0x0019F29C */

loc_00301228: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, 0xFFFFFFFFu);
    MEM32(esi) = eax;
    PUSH32(esp, 0x0030123Fu); RECOMP_ABI_CALL(0x0019DDA3u, sub_0019DDA3); /* call 0x0019DDA3 */

loc_0030123F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00301250; /* jne: not equal / not zero */

loc_00301243: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00301249u); RECOMP_ABI_CALL(0x00343748u, sub_00343748); /* call 0x00343748 */

loc_00301249: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00301250: ;
    edx = MEM32(0x5BEB8C);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0030125Du); RECOMP_ABI_CALL(0x00301880u, sub_00301880); /* call 0x00301880 */

loc_0030125D: ;
    esp = esp + 8;

loc_00301260: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00301270
 * Original: 0x00301270 - 0x00301313 (163 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00301270: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 1;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x00301283u); RECOMP_ABI_CALL(0x003011D0u, sub_003011D0); /* call 0x003011D0 */

loc_00301283: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003012A2; /* je: equal / zero */

loc_00301289: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003012AA; /* jne: not equal / not zero */

loc_00301290: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003012AA; /* je: equal / zero */

loc_0030129B: ;
    edi = 2;
    goto loc_003012AA;

loc_003012A2: ;
    MEM32(esp + 0xC) = 0;

loc_003012AA: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003012BCu); RECOMP_ABI_CALL(0x0019F569u, sub_0019F569); /* call 0x0019F569 */

loc_003012BC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00301300; /* je: equal / zero */

loc_003012C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x102) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x102 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003012D3; /* jne: not equal / not zero */

loc_003012C8: ;
    POP32(esp, edi);
    eax = 0x274C;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_003012D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00301300; /* je: equal / zero */

loc_003012DA: ;
    eax = eax - 0;
    if ((eax == 0)) goto loc_0030130B; /* je: equal / zero */

loc_003012DF: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00301300; /* jne: not equal / not zero */

loc_003012E2: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003012ECu); RECOMP_ABI_CALL(0x0019F32Au, sub_0019F32A); /* call 0x0019F32A */

loc_003012EC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00301300; /* je: equal / zero */

loc_003012F0: ;
    _fa = (uint32_t)(MEM8(esi + 0x30)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x30), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00301300; /* jne: not equal / not zero */

loc_003012F6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x003012FDu); RECOMP_ABI_CALL(0x00301570u, sub_00301570); /* call 0x00301570 */

loc_003012FD: ;
    esp = esp + 4;

loc_00301300: ;
    POP32(esp, edi);
    eax = 0x16;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0030130B: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00301320
 * Original: 0x00301320 - 0x0030132F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301320(void)
{

loc_00301320: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x0030132Bu); RECOMP_ABI_CALL(0x00301270u, sub_00301270); /* call 0x00301270 */

loc_0030132B: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

}

/**
 * sub_00301330
 * Original: 0x00301330 - 0x0030137C (76 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00301330: ;
    eax = MEM32(0x5BEB88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030137B; /* je: equal / zero */

loc_00301339: ;
    eax = MEM32(0x5BEB8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00301355; /* je: equal / zero */

loc_00301342: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00301348u); RECOMP_ABI_CALL(0x003017C0u, sub_003017C0); /* call 0x003017C0 */

loc_00301348: ;
    esp = esp + 4;
    MEM32(0x5BEB8C) = 0;

loc_00301355: ;
    eax = MEM32(0x5BEB90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00301371; /* je: equal / zero */

loc_0030135E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00301364u); RECOMP_ABI_CALL(0x003017C0u, sub_003017C0); /* call 0x003017C0 */

loc_00301364: ;
    esp = esp + 4;
    MEM32(0x5BEB90) = 0;

loc_00301371: ;
    MEM32(0x5BEB88) = 0;

loc_0030137B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00301380
 * Original: 0x00301380 - 0x003013B6 (54 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00301380: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0030138F; /* jbe: below or equal (unsigned <=) */

loc_0030138A: ;
    edx = 3;

loc_0030138F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_003013B0; /* jbe: below or equal (unsigned <=) */

loc_00301393: ;
    ecx = 0x14;
    ecx = ecx - eax;
    PUSH32(esp, edi);
    goto loc_003013A0;

    /* nop */

loc_003013A0: ;
    edi = MEM32(esi);
    edi = edi + ecx;
    edi = MEM32(edi + eax);
    MEM32(eax) = edi;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003013A0; /* jne: not equal / not zero */

loc_003013AF: ;
    POP32(esp, edi);

loc_003013B0: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_003013C0
 * Original: 0x003013C0 - 0x00301450 (144 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003013C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003013C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, 0x003013CEu); RECOMP_ABI_CALL(0x00343AD8u, sub_00343AD8); /* call 0x00343AD8 */

loc_003013CE: ;
    esi = eax;
    esp = esp + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003013E2; /* jne: not equal / not zero */

loc_003013D7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xC;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003013E2: ;
    edi = MEM32(esp + 0x20);
    ebp = MEM32(esp + 0x1C);
    ebx = edi + 8;
    PUSH32(esp, ebx);
    MEM32(esi) = 0xFFFFFFFFu;
    MEM32(esi + 4) = ebp;
    MEM32(esi + 8) = edi;
    PUSH32(esp, 0x003013FFu); RECOMP_ABI_CALL(0x00301CC0u, sub_00301CC0); /* call 0x00301CC0 */

loc_003013FF: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00301423; /* je: equal / zero */

loc_0030140A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00301410u); RECOMP_ABI_CALL(0x00301D90u, sub_00301D90); /* call 0x00301D90 */

loc_00301410: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00301416u); RECOMP_ABI_CALL(0x00343748u, sub_00343748); /* call 0x00343748 */

loc_00301416: ;
    eax = MEM32(esp + 0x18);
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00301423: ;
    eax = MEM32(edi + 0xC);
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, ebx);
    MEM32(edi + 0xC) = esi;
    PUSH32(esp, 0x00301432u); RECOMP_ABI_CALL(0x00301C20u, sub_00301C20); /* call 0x00301C20 */

loc_00301432: ;
    esp = esp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00301442; /* je: equal / zero */

loc_00301439: ;
    ecx = MEM32(ebp + 0x34);
    MEM32(esi + 0xC) = ecx;
    MEM32(ebp + 0x34) = esi;

loc_00301442: ;
    edx = MEM32(esp + 0x18);
    POP32(esp, edi);
    MEM32(edx) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00301450
 * Original: 0x00301450 - 0x00301478 (40 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00301450: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00301476; /* je: equal / zero */

loc_00301459: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00301476; /* jne: not equal / not zero */

loc_00301460: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00301476; /* jne: not equal / not zero */

loc_00301467: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030146Du); RECOMP_ABI_CALL(0x00301D90u, sub_00301D90); /* call 0x00301D90 */

loc_0030146D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00301473u); RECOMP_ABI_CALL(0x00343748u, sub_00343748); /* call 0x00343748 */

loc_00301473: ;
    esp = esp + 8;

loc_00301476: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00301480
 * Original: 0x00301480 - 0x0030156C (236 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00301480(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00301480: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x42A788);
    PUSH32(esp, 0x3432FC);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -24) = esp;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030155B; /* je: equal / zero */

loc_003014B1: ;
    ebx = eax + 0x34;
    MEM32(ebp + -32) = ebx;

loc_003014B7: ;
    esi = MEM32(ebx);
    MEM32(ebp + -28) = esi;
    /* nop */

loc_003014C0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030155B; /* je: equal / zero */

loc_003014C8: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003014CEu); RECOMP_ABI_CALL(0x00301CC0u, sub_00301CC0); /* call 0x00301CC0 */

loc_003014CE: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003014C0; /* jne: not equal / not zero */

loc_003014D5: ;
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030151C; /* je: equal / zero */

loc_003014DC: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003014E2u); RECOMP_ABI_CALL(0x00301870u, sub_00301870); /* call 0x00301870 */

loc_003014E2: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030151C; /* je: equal / zero */

loc_003014E9: ;
    edi = MEM32(edi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030151C; /* je: equal / zero */

loc_003014F0: ;
    MEM32(ebp + -4) = 0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x003014FAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003014FA: ;
    esp = esp + 4;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    goto loc_0030151C;

    eax = 1;
    esp += 4; return; /* ret */

loc_0030151C: ;
    MEM32(esi + 4) = 0;
    eax = MEM32(esi + 0xC);
    MEM32(ebx) = eax;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030152Eu); RECOMP_ABI_CALL(0x00301C20u, sub_00301C20); /* call 0x00301C20 */

loc_0030152E: ;
    esp = esp + 4;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003014B7; /* jne: not equal / not zero */

loc_0030153C: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003014B7; /* jne: not equal / not zero */

loc_00301547: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030154Du); RECOMP_ABI_CALL(0x00301D90u, sub_00301D90); /* call 0x00301D90 */

loc_0030154D: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00301553u); RECOMP_ABI_CALL(0x00343748u, sub_00343748); /* call 0x00343748 */

loc_00301553: ;
    esp = esp + 8;
    goto loc_003014B7;

loc_0030155B: ;
    ecx = MEM32(ebp + -16);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00301506
 * Original: 0x00301506 - 0x0030156C (102 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301506(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00301506: ;
    eax = 1;
    esp += 4; return; /* ret */

    esp = esp + 4;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_003014B7(); return; } /* jne: not equal / not zero */

loc_0030153C: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_003014B7(); return; } /* jne: not equal / not zero */

loc_00301547: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030154Du); RECOMP_ABI_CALL(0x00301D90u, sub_00301D90); /* call 0x00301D90 */

loc_0030154D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00301553u); RECOMP_ABI_CALL(0x00343748u, sub_00343748); /* call 0x00343748 */

loc_00301553: ;
    esp = esp + 8;
    g_seh_ebp = ebp; sub_003014B7(); return; /* tail jmp 0x003014B7 */

    ecx = MEM32(ebp + -16);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0030150C
 * Original: 0x0030150C - 0x0030156C (96 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030150C(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030150C: ;
    esp = MEM32(ebp + -24);
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    ebx = MEM32(ebp + -32);
    esi = MEM32(ebp + -28);
    MEM32(esi + 4) = 0;
    eax = MEM32(esi + 0xC);
    MEM32(ebx) = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030152Eu); RECOMP_ABI_CALL(0x00301C20u, sub_00301C20); /* call 0x00301C20 */

loc_0030152E: ;
    esp = esp + 4;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_003014B7(); return; } /* jne: not equal / not zero */

loc_0030153C: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_003014B7(); return; } /* jne: not equal / not zero */

loc_00301547: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030154Du); RECOMP_ABI_CALL(0x00301D90u, sub_00301D90); /* call 0x00301D90 */

loc_0030154D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00301553u); RECOMP_ABI_CALL(0x00343748u, sub_00343748); /* call 0x00343748 */

loc_00301553: ;
    esp = esp + 8;
    g_seh_ebp = ebp; sub_003014B7(); return; /* tail jmp 0x003014B7 */

    ecx = MEM32(ebp + -16);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00301570
 * Original: 0x00301570 - 0x003015A9 (57 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00301570: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    esp = esp - 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00301589; /* je: equal / zero */

loc_0030157D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00301589; /* je: equal / zero */

loc_00301582: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00301589u); RECOMP_ABI_CALL(0x003428BAu, sub_003428BA); /* call 0x003428BA */

loc_00301589: ;
    MEM32(esp) = eax;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xEBADDEEDu);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, 0x003015A5u); RECOMP_ABI_CALL(0x0019F038u, sub_0019F038); /* call 0x0019F038 */

loc_003015A5: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_003015B0
 * Original: 0x003015B0 - 0x00301616 (102 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003015B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003015B0: ;
    eax = MEM32(0x5BEB88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003015BF; /* je: equal / zero */

loc_003015B9: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_003015BF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5BEB8C);
    MEM32(0x5BEB88) = 1;
    PUSH32(esp, 0x003015D5u); RECOMP_ABI_CALL(0x00301740u, sub_00301740); /* call 0x00301740 */

loc_003015D5: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003015EE; /* jne: not equal / not zero */

loc_003015DC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5BEB90);
    PUSH32(esp, 0x003015E7u); RECOMP_ABI_CALL(0x00301740u, sub_00301740); /* call 0x00301740 */

loc_003015E7: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003015F3; /* je: equal / zero */

loc_003015EE: ;
    PUSH32(esp, 0x003015F3u); RECOMP_ABI_CALL(0x00301330u, sub_00301330); /* call 0x00301330 */

loc_003015F3: ;
    PUSH32(esp, esi);
    esi = MEM32(0x3C6CC0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5E1560);
    { uint32_t _icall_target = esi; PUSH32(esp, 0x00301601u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00301601: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5E1540);
    { uint32_t _icall_target = esi; PUSH32(esp, 0x00301608u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00301608: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5E1520);
    { uint32_t _icall_target = esi; PUSH32(esp, 0x0030160Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030160F: ;
    eax = MEM32(0x5BEB88);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00301620
 * Original: 0x00301620 - 0x003016F3 (211 bytes, 72 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00301620(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00301620: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x42A798);
    PUSH32(esp, 0x3432FC);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -24) = esp;
    MEM32(ebp + -48) = 0;
    eax = MEM32(ebp + 8);
    esi = MEM32(eax);
    MEM32(ebp + -28) = esi;
    edi = MEM32(eax + 4);
    ebx = MEM32(eax + 8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00301661u); RECOMP_ABI_CALL(0x00343748u, sub_00343748); /* call 0x00343748 */

loc_00301661: ;
    PUSH32(esp, esi);
    eax = MEM32(0x5BEB8C);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030166Du); RECOMP_ABI_CALL(0x00301880u, sub_00301880); /* call 0x00301880 */

loc_0030166D: ;
    esp = esp + 0xC;
    MEM32(ebp + -4) = 0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x0030167Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030167A: ;
    esp = esp + 4;
    MEM32(esi + 0x10) = eax;
    edi = eax;
    MEM32(ebp + -36) = edi;
    goto loc_003016BF;

    esi = MEM32(ebp + -20);
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    MEM32(ebp + -32) = edx;
    eax = ebp + -48;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00301699u); RECOMP_ABI_CALL(0x00301380u, sub_00301380); /* call 0x00301380 */

loc_00301699: ;
    esp += 4; return; /* ret */

    eax = MEM32(ebp + -48);
    eax = eax - 0;
    if ((eax == 0)) goto loc_003016B9; /* je: equal / zero */

loc_003016AE: ;
    esi = MEM32(ebp + -28);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003016BC; /* jne: not equal / not zero */

loc_003016B4: ;
    edi = MEM32(esi + 0x10);
    goto loc_003016BF;

loc_003016B9: ;
    esi = MEM32(ebp + -28);

loc_003016BC: ;
    edi = edi | 0xFFFFFFFFu;

loc_003016BF: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    eax = esi + 0x20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003016CFu); RECOMP_ABI_CALL(0x00301D90u, sub_00301D90); /* call 0x00301D90 */

loc_003016CF: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003016D5u); RECOMP_ABI_CALL(0x00301480u, sub_00301480); /* call 0x00301480 */

loc_003016D5: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003016DBu); RECOMP_ABI_CALL(0x00345449u, sub_00345449); /* call 0x00345449 */

loc_003016DB: ;
    esp = esp + 0xC;
    eax = edi;
    ecx = MEM32(ebp + -16);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00301687
 * Original: 0x00301687 - 0x003016F3 (108 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301687(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00301687: ;
    esi = MEM32(ebp + -20);
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    MEM32(ebp + -32) = edx;
    eax = ebp + -48;
    PUSH32(esp, 0x00301699u); RECOMP_ABI_CALL(0x00301380u, sub_00301380); /* call 0x00301380 */

loc_00301699: ;
    esp += 4; return; /* ret */

    eax = MEM32(ebp + -48);
    eax = eax - 0;
    if ((eax == 0)) goto loc_003016B9; /* je: equal / zero */

loc_003016AE: ;
    esi = MEM32(ebp + -28);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003016BC; /* jne: not equal / not zero */

loc_003016B4: ;
    edi = MEM32(esi + 0x10);
    goto loc_003016BF;

loc_003016B9: ;
    esi = MEM32(ebp + -28);

loc_003016BC: ;
    edi = edi | 0xFFFFFFFFu;

loc_003016BF: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    eax = esi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003016CFu); RECOMP_ABI_CALL(0x00301D90u, sub_00301D90); /* call 0x00301D90 */

loc_003016CF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003016D5u); RECOMP_ABI_CALL(0x00301480u, sub_00301480); /* call 0x00301480 */

loc_003016D5: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003016DBu); RECOMP_ABI_CALL(0x00345449u, sub_00345449); /* call 0x00345449 */

loc_003016DB: ;
    esp = esp + 0xC;
    eax = edi;
    ecx = MEM32(ebp + -16);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0030169A
 * Original: 0x0030169A - 0x003016F3 (89 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030169A(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030169A: ;
    esp = MEM32(ebp + -24);
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xEBADDEEDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 0xEBADDEEDu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003016B9; /* jne: not equal / not zero */

loc_003016A6: ;
    eax = MEM32(ebp + -48);
    eax = eax - 0;
    if ((eax == 0)) goto loc_003016B9; /* je: equal / zero */

loc_003016AE: ;
    esi = MEM32(ebp + -28);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003016BC; /* jne: not equal / not zero */

loc_003016B4: ;
    edi = MEM32(esi + 0x10);
    goto loc_003016BF;

loc_003016B9: ;
    esi = MEM32(ebp + -28);

loc_003016BC: ;
    edi = edi | 0xFFFFFFFFu;

loc_003016BF: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    eax = esi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003016CFu); RECOMP_ABI_CALL(0x00301D90u, sub_00301D90); /* call 0x00301D90 */

loc_003016CF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003016D5u); RECOMP_ABI_CALL(0x00301480u, sub_00301480); /* call 0x00301480 */

loc_003016D5: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003016DBu); RECOMP_ABI_CALL(0x00345449u, sub_00345449); /* call 0x00345449 */

loc_003016DB: ;
    esp = esp + 0xC;
    eax = edi;
    ecx = MEM32(ebp + -16);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00301700
 * Original: 0x00301700 - 0x00301737 (55 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00301700: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00301735; /* je: equal / zero */

loc_00301709: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030170Fu); RECOMP_ABI_CALL(0x00301480u, sub_00301480); /* call 0x00301480 */

loc_0030170F: ;
    eax = MEM32(esi + 0x2C);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030171F; /* je: equal / zero */

loc_00301719: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030171Fu); RECOMP_ABI_CALL(0x0019DD85u, sub_0019DD85); /* call 0x0019DD85 */

loc_0030171F: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030172C; /* je: equal / zero */

loc_00301726: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030172Cu); RECOMP_ABI_CALL(0x0019DD85u, sub_0019DD85); /* call 0x0019DD85 */

loc_0030172C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00301732u); RECOMP_ABI_CALL(0x00343748u, sub_00343748); /* call 0x00343748 */

loc_00301732: ;
    esp = esp + 4;

loc_00301735: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00301740
 * Original: 0x00301740 - 0x003017B3 (115 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00301740: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 1);
    edi = 0; /* xor self */
    PUSH32(esp, 0x0030174Du); RECOMP_ABI_CALL(0x00343AD8u, sub_00343AD8); /* call 0x00343AD8 */

loc_0030174D: ;
    esi = eax;
    esp = esp + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00301764; /* jne: not equal / not zero */

loc_00301756: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEM32(ecx) = esi;
    eax = 0xC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00301764: ;
    PUSH32(esp, 0x00301769u); RECOMP_ABI_CALL(0x0034D4C8u, sub_0034D4C8); /* call 0x0034D4C8 */

loc_00301769: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esi) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0030178B; /* jne: not equal / not zero */

loc_00301770: ;
    PUSH32(esp, esi);
    edi = 0xB;
    PUSH32(esp, 0x0030177Bu); RECOMP_ABI_CALL(0x00343748u, sub_00343748); /* call 0x00343748 */

loc_0030177B: ;
    edx = MEM32(esp + 0x10);
    esp = esp + 4;
    eax = 0; /* xor self */
    MEM32(edx) = eax;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0030178B: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003017A8; /* je: equal / zero */

loc_00301793: ;
    MEM32(esi + 4) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 8) = 0xFFFFFFFFu;
    MEM32(eax) = esi;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003017A8: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    MEM32(ecx) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003017C0
 * Original: 0x003017C0 - 0x00301862 (162 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003017C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003017C0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030185D; /* je: equal / zero */

loc_003017D0: ;
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xC), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030182C; /* je: equal / zero */

loc_003017D5: ;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 4), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030182C; /* je: equal / zero */

loc_003017DA: ;
    eax = ebx + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003017E3u); RECOMP_ABI_CALL(0x00301CC0u, sub_00301CC0); /* call 0x00301CC0 */

loc_003017E3: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030182C; /* jne: not equal / not zero */

loc_003017EA: ;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030181F; /* je: equal / zero */

loc_003017F2: ;
    PUSH32(esp, edi);

loc_003017F3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003017F9u); RECOMP_ABI_CALL(0x00301CC0u, sub_00301CC0); /* call 0x00301CC0 */

loc_003017F9: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030181A; /* jne: not equal / not zero */

loc_00301800: ;
    edi = MEM32(esi + 0x10);
    PUSH32(esp, esi);
    MEM32(esi + 8) = ebp;
    MEM32(esi + 0x10) = ebp;
    PUSH32(esp, 0x0030180Fu); RECOMP_ABI_CALL(0x00301C20u, sub_00301C20); /* call 0x00301C20 */

loc_0030180F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00301815u); RECOMP_ABI_CALL(0x00301450u, sub_00301450); /* call 0x00301450 */

loc_00301815: ;
    esp = esp + 8;
    esi = edi;

loc_0030181A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003017F3; /* jne: not equal / not zero */

loc_0030181E: ;
    POP32(esp, edi);

loc_0030181F: ;
    eax = ebx + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00301828u); RECOMP_ABI_CALL(0x00301C20u, sub_00301C20); /* call 0x00301C20 */

loc_00301828: ;
    esp = esp + 4;
    POP32(esp, esi);

loc_0030182C: ;
    eax = MEM32(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00301834u); RECOMP_ABI_CALL(0x0034D55Du, sub_0034D55D); /* call 0x0034D55D */

loc_00301834: ;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 4), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00301845; /* je: equal / zero */

loc_00301839: ;
    ecx = ebx + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00301842u); RECOMP_ABI_CALL(0x00301D90u, sub_00301D90); /* call 0x00301D90 */

loc_00301842: ;
    esp = esp + 4;

loc_00301845: ;
    edx = 0; /* xor self */
    eax = ebx;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    PUSH32(esp, ebx);
    MEM32(eax + 0xC) = edx;
    PUSH32(esp, 0x0030185Au); RECOMP_ABI_CALL(0x00343748u, sub_00343748); /* call 0x00343748 */

loc_0030185A: ;
    esp = esp + 4;

loc_0030185D: ;
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00301870
 * Original: 0x00301870 - 0x0030187D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301870(void)
{

loc_00301870: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0030187Cu); RECOMP_ABI_CALL(0x0034D51Cu, sub_0034D51C); /* call 0x0034D51C */

loc_0030187C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00301880
 * Original: 0x00301880 - 0x00301910 (144 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00301880: ;
    eax = MEM32(0x5BEB8C);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003018A4; /* je: equal / zero */

loc_00301893: ;
    PUSH32(esp, 0x00301898u); RECOMP_ABI_CALL(0x003011D0u, sub_003011D0); /* call 0x003011D0 */

loc_00301898: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003018B2; /* jne: not equal / not zero */

loc_0030189C: ;
    POP32(esp, esi);
    eax = 2;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003018A4: ;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003018ACu); RECOMP_ABI_CALL(0x0034D51Cu, sub_0034D51C); /* call 0x0034D51C */

loc_003018AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003018B2; /* jne: not equal / not zero */

loc_003018B0: ;
    eax = ebx;

loc_003018B2: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030190A; /* je: equal / zero */

loc_003018B9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003018F8; /* je: equal / zero */

loc_003018BD: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003018F8; /* je: equal / zero */

loc_003018C4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003018F8; /* je: equal / zero */

loc_003018C8: ;
    ecx = MEM32(eax + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_003018E3; /* je: equal / zero */

loc_003018D3: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003018F8; /* je: equal / zero */

loc_003018D8: ;
    ecx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_003018D3; /* jne: not equal / not zero */

loc_003018E3: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003018EFu); RECOMP_ABI_CALL(0x003013C0u, sub_003013C0); /* call 0x003013C0 */

loc_003018EF: ;
    edi = eax;
    esp = esp + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030190A; /* jne: not equal / not zero */

loc_003018F8: ;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00301901u); RECOMP_ABI_CALL(0x0034D539u, sub_0034D539); /* call 0x0034D539 */

loc_00301901: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030190A; /* jne: not equal / not zero */

loc_00301905: ;
    edi = 0xB;

loc_0030190A: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00301910
 * Original: 0x00301910 - 0x0030198D (125 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00301910: ;
    PUSH32(esp, 0x00301915u); RECOMP_ABI_CALL(0x003011D0u, sub_003011D0); /* call 0x003011D0 */

loc_00301915: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030191F; /* jne: not equal / not zero */

loc_00301919: ;
    eax = 2;
    esp += 4; return; /* ret */

loc_0030191F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030192Cu); RECOMP_ABI_CALL(0x00301180u, sub_00301180); /* call 0x00301180 */

loc_0030192C: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030193D; /* je: equal / zero */

loc_00301933: ;
    esi = 0x24;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0030193D: ;
    _fa = (uint32_t)(MEM32(edi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x1C), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030194D; /* jne: not equal / not zero */

loc_00301943: ;
    esi = 0x16;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0030194D: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00301956u); RECOMP_ABI_CALL(0x00301320u, sub_00301320); /* call 0x00301320 */

loc_00301956: ;
    esi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00301983; /* jne: not equal / not zero */

loc_0030195F: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00301975; /* je: equal / zero */

loc_00301967: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00301971u); RECOMP_ABI_CALL(0x0019F0B3u, sub_0019F0B3); /* call 0x0019F0B3 */

loc_00301971: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00301983; /* je: equal / zero */

loc_00301975: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030197Bu); RECOMP_ABI_CALL(0x00301700u, sub_00301700); /* call 0x00301700 */

loc_0030197B: ;
    esp = esp + 4;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00301983: ;
    esi = 3;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00301990
 * Original: 0x00301990 - 0x003019B6 (38 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00301990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00301990: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003019A6; /* je: equal / zero */

loc_00301998: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003019A6; /* je: equal / zero */

loc_0030199E: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC4C0FFEEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xC4C0FFEEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003019AC; /* je: equal / zero */

loc_003019A6: ;
    eax = 0x16;
    esp += 4; return; /* ret */

loc_003019AC: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 8) = ecx;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_003019C0
 * Original: 0x003019C0 - 0x003019C6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003019C0(void)
{

loc_003019C0: ;
    eax = 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_003019D0
 * Original: 0x003019D0 - 0x00301A16 (70 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003019D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003019D0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003019E0; /* jne: not equal / not zero */

loc_003019D9: ;
    eax = 0x16;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_003019E0: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x003019E7u); RECOMP_ABI_CALL(0x003437F3u, sub_003437F3); /* call 0x003437F3 */

loc_003019E7: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003019F5; /* jne: not equal / not zero */

loc_003019EE: ;
    eax = 0xC;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_003019F5: ;
    MEM32(eax + 8) = 0;
    MEM32(eax + 0xC) = 0;
    MEM32(eax + 0x10) = 0;
    MEM32(eax) = 0xC4C0FFEEu;
    MEM32(edi) = eax;
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00301A20
 * Original: 0x00301A20 - 0x00301A59 (57 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00301A20: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00301A37; /* je: equal / zero */

loc_00301A29: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00301A37; /* je: equal / zero */

loc_00301A2F: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC4C0FFEEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xC4C0FFEEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00301A3E; /* je: equal / zero */

loc_00301A37: ;
    eax = 0x16;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00301A3E: ;
    MEM32(eax) = 0;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00301A4Cu); RECOMP_ABI_CALL(0x00343748u, sub_00343748); /* call 0x00343748 */

loc_00301A4C: ;
    esp = esp + 4;
    MEM32(esi) = 0;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00301A60
 * Original: 0x00301A60 - 0x00301B41 (225 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301A60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00301A60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0xB;
    edi = 0; /* xor self */
    PUSH32(esp, 0x00301A6Fu); RECOMP_ABI_CALL(0x003011A0u, sub_003011A0); /* call 0x003011A0 */

loc_00301A6F: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00301B05; /* je: equal / zero */

loc_00301A79: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00301A83u); RECOMP_ABI_CALL(0x0019F2A9u, sub_0019F2A9); /* call 0x0019F2A9 */

loc_00301A83: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0x2C) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00301B05; /* je: equal / zero */

loc_00301A8A: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x00301A91u); RECOMP_ABI_CALL(0x003437F3u, sub_003437F3); /* call 0x003437F3 */

loc_00301A91: ;
    edi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00301B05; /* je: equal / zero */

loc_00301A9A: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    MEM32(edi + 4) = eax;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(edi) = esi;
    MEM32(edi + 8) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00301AC3; /* je: equal / zero */

loc_00301AB2: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00301AC3; /* je: equal / zero */

loc_00301AB8: ;
    edx = MEM32(eax + 0xC);
    ecx = MEM32(eax + 8);
    MEM32(esi + 0x1C) = edx;
    goto loc_00301AC5;

loc_00301AC3: ;
    ecx = 0; /* xor self */

loc_00301AC5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x301620);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    MEM32(esi + 8) = 0;
    MEM32(esi + 0x34) = 0;
    PUSH32(esp, 0x00301AE4u); RECOMP_ABI_CALL(0x003454C7u, sub_003454C7); /* call 0x003454C7 */

loc_00301AE4: ;
    ebx = eax;
    esp = esp + 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM32(esi + 4) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_00301AF6; /* je: equal / zero */

loc_00301AF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00301AF6u); RECOMP_ABI_CALL(0x0019F012u, sub_0019F012); /* call 0x0019F012 */

loc_00301AF6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 0xB;
    ebx = eax;
    if ((eax == 0)) goto loc_00301B35; /* je: equal / zero */

loc_00301B05: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00301B0Bu); RECOMP_ABI_CALL(0x00301700u, sub_00301700); /* call 0x00301700 */

loc_00301B0B: ;
    esp = esp + 4;
    esi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00301B29; /* je: equal / zero */

loc_00301B14: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00301B1Au); RECOMP_ABI_CALL(0x00343748u, sub_00343748); /* call 0x00343748 */

loc_00301B1A: ;
    ecx = MEM32(esp + 0x14);
    esp = esp + 4;
    POP32(esp, edi);
    MEM32(ecx) = esi;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00301B29: ;
    edx = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(edx) = esi;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00301B35: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(eax) = esi;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00301B50
 * Original: 0x00301B50 - 0x00301C11 (193 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301B50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00301B50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00301B64; /* jne: not equal / not zero */

loc_00301B5C: ;
    POP32(esp, ebp);
    eax = 0x16;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00301B64: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x20);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00301B6Eu); RECOMP_ABI_CALL(0x00343AD8u, sub_00343AD8); /* call 0x00343AD8 */

loc_00301B6E: ;
    esi = eax;
    esp = esp + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00301B85; /* jne: not equal / not zero */

loc_00301B77: ;
    MEM32(ebp) = esi;
    POP32(esp, esi);
    ebx = 0xC;
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00301B85: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    MEM32(esi) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00301BA6; /* je: equal / zero */

loc_00301B94: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00301BA6; /* je: equal / zero */

loc_00301B9A: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00301BA6; /* jne: not equal / not zero */

loc_00301B9F: ;
    ebx = 0x28;
    goto loc_00301BD6;

loc_00301BA6: ;
    ecx = MEM32(0x5BEB94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00301BEB; /* jne: not equal / not zero */

loc_00301BB0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00301BC0; /* je: equal / zero */

loc_00301BB4: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00301BC0; /* je: equal / zero */

loc_00301BBA: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00301BEB; /* je: equal / zero */

loc_00301BC0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00301BCBu); RECOMP_ABI_CALL(0x0019F3C9u, sub_0019F3C9); /* call 0x0019F3C9 */

loc_00301BCB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_00301BE1; /* jne: not equal / not zero */

loc_00301BD1: ;
    ebx = 0xB;

loc_00301BD6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00301BDCu); RECOMP_ABI_CALL(0x00343748u, sub_00343748); /* call 0x00343748 */

loc_00301BDC: ;
    esp = esp + 4;
    esi = 0; /* xor self */

loc_00301BE1: ;
    POP32(esp, edi);
    MEM32(ebp) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00301BEB: ;
    edi = esi + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x3C6CC0); PUSH32(esp, 0x00301BF5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00301BF5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x5BEB94); PUSH32(esp, 0x00301BFCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00301BFC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00301BD1; /* je: equal / zero */

loc_00301C00: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x00301C07u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00301C07: ;
    POP32(esp, edi);
    MEM32(ebp) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00301C20
 * Original: 0x00301C20 - 0x00301C70 (80 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00301C20: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00301C69; /* je: equal / zero */

loc_00301C2B: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00301C69; /* je: equal / zero */

loc_00301C31: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00301C60; /* je: equal / zero */

loc_00301C36: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00301C4A; /* jne: not equal / not zero */

loc_00301C3C: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x00301C46u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00301C46: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00301C4A: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00301C50u); RECOMP_ABI_CALL(0x0019F421u, sub_0019F421); /* call 0x0019F421 */

loc_00301C50: ;
    esi = eax;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    esi = esi & 0xFFFFFFEAu;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x16)) >> 32) & 1);
    esi = esi + 0x16;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00301C60: ;
    esi = 0x16;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00301C69: ;
    eax = 0x16;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00301C70
 * Original: 0x00301C70 - 0x00301CB8 (72 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00301C70: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5E1560);
    esi = 0; /* xor self */
    { uint32_t _icall_target = MEM32(0x3C6C5C); PUSH32(esp, 0x00301C7Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00301C7E: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00301CA0; /* jne: not equal / not zero */

loc_00301C85: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00301C8Cu); RECOMP_ABI_CALL(0x00301B50u, sub_00301B50); /* call 0x00301B50 */

loc_00301C8C: ;
    esp = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5E1560);
    esi = eax;
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x00301C9Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00301C9C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00301CA0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00301CA9; /* jne: not equal / not zero */

loc_00301CA4: ;
    esi = 0x16;

loc_00301CA9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5E1560);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x00301CB4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00301CB4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00301CC0
 * Original: 0x00301CC0 - 0x00301D17 (87 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00301CC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00301D0F; /* je: equal / zero */

loc_00301CCC: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00301D0F; /* je: equal / zero */

loc_00301CD2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00301CDE; /* jne: not equal / not zero */

loc_00301CD7: ;
    PUSH32(esp, 0x00301CDCu); RECOMP_ABI_CALL(0x00301C70u, sub_00301C70); /* call 0x00301C70 */

loc_00301CDC: ;
    esi = eax;

loc_00301CDE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    edi = MEM32(edi);
    if (TEST_NZ(_fa, _fb)) goto loc_00301D0A; /* jne: not equal / not zero */

loc_00301CE4: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00301CF9; /* jne: not equal / not zero */

loc_00301CEA: ;
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6C5C); PUSH32(esp, 0x00301CF4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00301CF4: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00301CF9: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00301D01u); RECOMP_ABI_CALL(0x0019F557u, sub_0019F557); /* call 0x0019F557 */

loc_00301D01: ;
    esi = eax;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    esi = esi & 0x16;

loc_00301D0A: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00301D0F: ;
    POP32(esp, edi);
    eax = 0x16;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00301D20
 * Original: 0x00301D20 - 0x00301D8F (111 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00301D20: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00301D87; /* je: equal / zero */

loc_00301D2C: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00301D87; /* je: equal / zero */

loc_00301D32: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00301D3E; /* jne: not equal / not zero */

loc_00301D37: ;
    PUSH32(esp, 0x00301D3Cu); RECOMP_ABI_CALL(0x00301C70u, sub_00301C70); /* call 0x00301C70 */

loc_00301D3C: ;
    esi = eax;

loc_00301D3E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edi = MEM32(edi);
    if (TEST_NZ(_fa, _fb)) goto loc_00301D82; /* jne: not equal / not zero */

loc_00301D44: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00301D63; /* jne: not equal / not zero */

loc_00301D4A: ;
    edi = edi + 4;
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5BEB94); PUSH32(esp, 0x00301D54u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00301D54: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00301D82; /* je: equal / zero */

loc_00301D59: ;
    esi = 0x10;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00301D63: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00301D6Bu); RECOMP_ABI_CALL(0x0019F557u, sub_0019F557); /* call 0x0019F557 */

loc_00301D6B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00301D82; /* je: equal / zero */

loc_00301D6F: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x102) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x102 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 0xFFFFFFFAu;
    ecx = ecx + 0x16;
    esi = ecx;

loc_00301D82: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00301D87: ;
    POP32(esp, edi);
    eax = 0x16;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00301D90
 * Original: 0x00301D90 - 0x00301E54 (196 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00301D90: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00301E4C; /* je: equal / zero */

loc_00301DA0: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00301E4C; /* je: equal / zero */

loc_00301DAA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00301E0F; /* je: equal / zero */

loc_00301DB0: ;
    MEM32(esp + 0x10) = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00301DBEu); RECOMP_ABI_CALL(0x00301D20u, sub_00301D20); /* call 0x00301D20 */

loc_00301DBE: ;
    esi = eax;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00301E46; /* jne: not equal / not zero */

loc_00301DC7: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM32(edi) = eax;
    PUSH32(esp, 0x00301DD3u); RECOMP_ABI_CALL(0x00301C20u, sub_00301C20); /* call 0x00301C20 */

loc_00301DD3: ;
    ebx = MEM32(esp + 0x14);
    eax = MEM32(ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00301DF2; /* je: equal / zero */

loc_00301DE0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00301DE6u); RECOMP_ABI_CALL(0x0019DD85u, sub_0019DD85); /* call 0x0019DD85 */

loc_00301DE6: ;
    esi = eax;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    esi = esi & 0xFFFFFFEAu;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x16)) >> 32) & 1);
    esi = esi + 0x16;

loc_00301DF2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00301E07; /* jne: not equal / not zero */

loc_00301DF6: ;
    PUSH32(esp, ebx);
    MEM32(ebx) = esi;
    PUSH32(esp, 0x00301DFEu); RECOMP_ABI_CALL(0x00343748u, sub_00343748); /* call 0x00343748 */

loc_00301DFE: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00301E07: ;
    MEM32(edi) = ebx;
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00301E0F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5E1560);
    { uint32_t _icall_target = MEM32(0x3C6C5C); PUSH32(esp, 0x00301E1Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00301E1A: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00301E36; /* jne: not equal / not zero */

loc_00301E1F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5E1560);
    MEM32(edi) = 0;
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x00301E30u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00301E30: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00301E36: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5E1560);
    esi = 0x10;
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x00301E46u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00301E46: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00301E4C: ;
    POP32(esp, edi);
    eax = 0x16;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00301E60
 * Original: 0x00301E60 - 0x00301E6C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301E60(void)
{

loc_00301E60: ;
    PUSH32(esp, 0x302010);
    PUSH32(esp, 0x00301E6Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00301E6A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00301E70
 * Original: 0x00301E70 - 0x00301EDA (106 bytes, 36 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00301E70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */

loc_00301E70: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BEBA8);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00301E80u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00301E80: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x4762E0);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00301E90u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00301E90: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00301E98u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00301E98: ;
    ebp = eax;
    PUSH32(esp, 0x00301E9Fu); RECOMP_ABI_CALL(0x00222F00u, sub_00222F00); /* call 0x00222F00 */

loc_00301E9F: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = 1;
    PUSH32(esp, 0x00301EB1u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00301EB1: ;
    ebp = eax;
    PUSH32(esp, 0x00301EB8u); RECOMP_ABI_CALL(0x00222F00u, sub_00222F00); /* call 0x00222F00 */

loc_00301EB8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4762D0);
    PUSH32(esp, 0x4762C0);
    PUSH32(esp, 0x4762B0);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    PUSH32(esp, 0x00301ED6u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00301ED6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00301EE0
 * Original: 0x00301EE0 - 0x00301F07 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301EE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00301EE0: ;
    eax = MEM32(0x5BEBA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00301EF4; /* je: equal / zero */

loc_00301EE9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00301F06; /* jne: not equal / not zero */

loc_00301EF4: ;
    PUSH32(esp, 0x302010);
    PUSH32(esp, 0x00301EFEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00301EFE: ;
    eax = MEM32(0x5BEBA8);
    esp = esp + 4;

loc_00301F06: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00301F10
 * Original: 0x00301F10 - 0x00301F16 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301F10(void)
{

loc_00301F10: ;
    eax = MEM32(0x5BEBA8);
    esp += 4; return; /* ret */

}

/**
 * sub_00301F20
 * Original: 0x00301F20 - 0x00301FB5 (149 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00301F20: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354FF3);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = 1;
    if (TEST_Z(_fa, _fb)) goto loc_00301F61; /* je: equal / zero */

loc_00301F4C: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00301F61; /* jne: not equal / not zero */

loc_00301F5C: ;
    PUSH32(esp, 0x00301F61u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00301F61: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00301F82; /* je: equal / zero */

loc_00301F6D: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00301F82; /* jne: not equal / not zero */

loc_00301F7D: ;
    PUSH32(esp, 0x00301F82u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00301F82: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    if (TEST_Z(_fa, _fb)) goto loc_00301FA5; /* je: equal / zero */

loc_00301F91: ;
    ecx = MEM32(esi + -4);
    eax = esi + -8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_00301FA5; /* jne: not equal / not zero */

loc_00301F9D: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00301FA5u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_00301FA5: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00301FC0
 * Original: 0x00301FC0 - 0x00302002 (66 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301FC0(void)
{

loc_00301FC0: ;
    esp = esp - 0x24;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x00301FCDu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00301FCD: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x42A83C;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x00301FFBu); RECOMP_ABI_CALL(0x00301F20u, sub_00301F20); /* call 0x00301F20 */

loc_00301FFB: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_00302010
 * Original: 0x00302010 - 0x00302057 (71 bytes, 18 insns)
 * Category: game_physics
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00302010: ;
    SET_LO8(eax, MEM8(0x5BEBAC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00302020; /* jne: not equal / not zero */

loc_00302019: ;
    MEM8(0x5BEBAC) = 1;

loc_00302020: ;
    PUSH32(esp, 0x476340);
    PUSH32(esp, 0);
    PUSH32(esp, 0x301E70);
    PUSH32(esp, 0x301FC0);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x42A898);
    PUSH32(esp, 0x301EE0);
    PUSH32(esp, 0x1A4510);
    PUSH32(esp, 0x2371D0);
    PUSH32(esp, 0x5BEBA8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00302053u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00302053: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00302060
 * Original: 0x00302060 - 0x00302066 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302060(void)
{

loc_00302060: ;
    eax = MEM32(0x5BEC38);
    esp += 4; return; /* ret */

}

/**
 * sub_00302070
 * Original: 0x00302070 - 0x00302098 (40 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00302070: ;
    eax = MEM32(0x5BEC24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00302097; /* jne: not equal / not zero */

loc_00302079: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x476358);
    PUSH32(esp, 0x476350);
    PUSH32(esp, 0x42A8D8);
    PUSH32(esp, 0x0030208Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_0030208F: ;
    esp = esp + 0x10;
    MEM32(0x5BEC24) = eax;

loc_00302097: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003020A0
 * Original: 0x003020A0 - 0x003020C8 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003020A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003020A0: ;
    eax = MEM32(0x5BEC28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003020C7; /* jne: not equal / not zero */

loc_003020A9: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x476370);
    PUSH32(esp, 0x476360);
    PUSH32(esp, 0x42A92C);
    PUSH32(esp, 0x003020BFu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_003020BF: ;
    esp = esp + 0x10;
    MEM32(0x5BEC28) = eax;

loc_003020C7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003020D0
 * Original: 0x003020D0 - 0x003020F8 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003020D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003020D0: ;
    eax = MEM32(0x5BEC2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003020F7; /* jne: not equal / not zero */

loc_003020D9: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x476390);
    PUSH32(esp, 0x476380);
    PUSH32(esp, 0x42A990);
    PUSH32(esp, 0x003020EFu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_003020EF: ;
    esp = esp + 0x10;
    MEM32(0x5BEC2C) = eax;

loc_003020F7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00302100
 * Original: 0x00302100 - 0x00302105 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302100(void)
{

loc_00302100: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00302110
 * Original: 0x00302110 - 0x00302115 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302110(void)
{

loc_00302110: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00302120
 * Original: 0x00302120 - 0x003021CE (174 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00302120: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00302131; /* jne: not equal / not zero */

loc_0030212C: ;
    eax = MEM32(0x476348);

loc_00302131: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    MEM32(esi) = eax;
    eax = MEM32(ecx + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00302146; /* jne: not equal / not zero */

loc_00302141: ;
    eax = MEM32(0x47634C);

loc_00302146: ;
    edi = MEM32(esp + 0x14);
    MEM32(edi) = eax;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00302164; /* jne: not equal / not zero */

loc_00302153: ;
    eax = MEM32(ecx + 0x20);
    edx = MEM32(esp + 0x18);
    MEM32(esi) = eax;
    MEM32(edx) = 1;
    goto loc_0030218A;

loc_00302164: ;
    edx = MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0030216D; /* jle: less or equal (signed <=) */

loc_0030216B: ;
    MEM32(esi) = edx;

loc_0030216D: ;
    eax = MEM32(ecx + 0x20);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esi)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esi))); }
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    MEM32(ebx) = eax;
    eax = MEM32(ecx + 0x20);
    esi = MEM32(esi);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00302189; /* je: equal / zero */

loc_00302186: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx) = eax;

loc_00302189: ;
    POP32(esp, ebx);

loc_0030218A: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003021A5; /* jne: not equal / not zero */

loc_00302191: ;
    eax = MEM32(ecx + 0x24);
    ecx = MEM32(esp + 0x1C);
    MEM32(edi) = eax;
    POP32(esp, edi);
    MEM32(ecx) = 1;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003021A5: ;
    edx = MEM32(ecx + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003021AE; /* jle: less or equal (signed <=) */

loc_003021AC: ;
    MEM32(edi) = edx;

loc_003021AE: ;
    eax = MEM32(ecx + 0x24);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(edi)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(edi))); }
    esi = MEM32(esp + 0x1C);
    MEM32(esi) = eax;
    eax = MEM32(ecx + 0x24);
    edi = MEM32(edi);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003021C9; /* je: equal / zero */

loc_003021C6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = eax;

loc_003021C9: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003021D0
 * Original: 0x003021D0 - 0x003021D5 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003021D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003021D0: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x68)); return; /* indirect tail jmp */

}

/**
 * sub_003021E0
 * Original: 0x003021E0 - 0x00302286 (166 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003021E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003021E0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x54);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x24);
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + 0x28);
    PUSH32(esp, esi);
    eax = eax + MEM32(ecx + 0x48);
    esi = MEM32(ecx + 0x1C);
    eax = eax + edx;
    edx = MEM32(ecx + 8);
    eax = eax + ebp;
    eax = eax + ebx;
    PUSH32(esp, edi);
    eax = eax + MEM32(ecx + 0x20);
    eax = eax + esi;
    esi = MEM32(esp + 0x18);
    ebx = MEM32(esi + 8);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    edi = MEM32(esi + 0x34);
    ecx = MEM32(ecx + 0x34);
    MEM32(esp + 0x18) = edx;
    ebp = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x1C));
    ebp = (uint32_t)((int32_t)ebp * (int32_t)MEM32(esp + 0x24));
    edx = ebx;
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0x20));
    edx = edx + eax;
    eax = MEM32(esp + 0x28);
    edx = edx + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00302281; /* jle: less or equal (signed <=) */

loc_00302245: ;
    MEM32(esp + 0x24) = eax;
    /* nop */

loc_00302250: ;
    edi = MEM32(esp + 0x14);
    ecx = ebp;
    eax = ecx;
    ecx = ecx >> 2;
    esi = edx;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = eax;
    eax = MEM32(esp + 0x24);
    ecx = ecx & 3;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    esi = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    esi = esi + ecx;
    edx = edx + ebx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x24) = eax;
    if ((_fa != 0)) goto loc_00302250; /* jne: not equal / not zero */

loc_00302281: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00302290
 * Original: 0x00302290 - 0x003022C5 (53 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00302290: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003022AE; /* je: equal / zero */

loc_00302299: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_003022AE; /* jne: not equal / not zero */

loc_003022A9: ;
    PUSH32(esp, 0x003022AEu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_003022AE: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003022BAu); RECOMP_ABI_CALL(0x002979E0u, sub_002979E0); /* call 0x002979E0 */

loc_003022BA: ;
    MEM32(esi) = eax;
    esp = esp + 4;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003022D0
 * Original: 0x003022D0 - 0x00302305 (53 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003022D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003022D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003022EE; /* je: equal / zero */

loc_003022D9: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_003022EE; /* jne: not equal / not zero */

loc_003022E9: ;
    PUSH32(esp, 0x003022EEu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_003022EE: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003022FAu); RECOMP_ABI_CALL(0x002878E0u, sub_002878E0); /* call 0x002878E0 */

loc_003022FA: ;
    MEM32(esi) = eax;
    esp = esp + 4;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00302310
 * Original: 0x00302310 - 0x00302337 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00302310: ;
    eax = MEM32(0x5BEC30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00302324; /* je: equal / zero */

loc_00302319: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00302336; /* jne: not equal / not zero */

loc_00302324: ;
    PUSH32(esp, 0x303090);
    PUSH32(esp, 0x0030232Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0030232E: ;
    eax = MEM32(0x5BEC30);
    esp = esp + 4;

loc_00302336: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00302340
 * Original: 0x00302340 - 0x00302367 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00302340: ;
    eax = MEM32(0x5BEC20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00302354; /* je: equal / zero */

loc_00302349: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00302366; /* jne: not equal / not zero */

loc_00302354: ;
    PUSH32(esp, 0x302F80);
    PUSH32(esp, 0x0030235Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0030235E: ;
    eax = MEM32(0x5BEC20);
    esp = esp + 4;

loc_00302366: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00302370
 * Original: 0x00302370 - 0x00302397 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00302370: ;
    eax = MEM32(0x5BEC1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00302384; /* je: equal / zero */

loc_00302379: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00302396; /* jne: not equal / not zero */

loc_00302384: ;
    PUSH32(esp, 0x3031A0);
    PUSH32(esp, 0x0030238Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0030238E: ;
    eax = MEM32(0x5BEC1C);
    esp = esp + 4;

loc_00302396: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003023A0
 * Original: 0x003023A0 - 0x003023C7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003023A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003023A0: ;
    eax = MEM32(0x5BEC38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003023B4; /* je: equal / zero */

loc_003023A9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003023C6; /* jne: not equal / not zero */

loc_003023B4: ;
    PUSH32(esp, 0x302C40);
    PUSH32(esp, 0x003023BEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_003023BE: ;
    eax = MEM32(0x5BEC38);
    esp = esp + 4;

loc_003023C6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003023D0
 * Original: 0x003023D0 - 0x003023F7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003023D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003023D0: ;
    eax = MEM32(0x5BEC34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003023E4; /* je: equal / zero */

loc_003023D9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003023F6; /* jne: not equal / not zero */

loc_003023E4: ;
    PUSH32(esp, 0x303000);
    PUSH32(esp, 0x003023EEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_003023EE: ;
    eax = MEM32(0x5BEC34);
    esp = esp + 4;

loc_003023F6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00302400
 * Original: 0x00302400 - 0x0030241E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302400(void)
{

loc_00302400: ;
    PUSH32(esp, 0x304010);
    PUSH32(esp, 0x0030240Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0030240A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BEC18);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030241Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0030241D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00302420
 * Original: 0x00302420 - 0x003024F3 (211 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00302420(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00302420: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BEC18);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00302430u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00302430: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x4763D0);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00302440u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00302440: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00302448u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00302448: ;
    ebp = eax;
    PUSH32(esp, 0x0030244Fu); RECOMP_ABI_CALL(0x002476C0u, sub_002476C0); /* call 0x002476C0 */

loc_0030244F: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x26) = 0;
    PUSH32(esp, 0x00302461u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00302461: ;
    ebp = eax;
    eax = MEM32(0x5BEC1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00302486; /* jne: not equal / not zero */

loc_0030246C: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00302478u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00302478: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030247Eu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0030247E: ;
    esp = esp + 8;
    MEM32(0x5BEC1C) = eax;

loc_00302486: ;
    edx = edi + 2;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    PUSH32(esp, 0x00302494u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00302494: ;
    ebp = eax;
    eax = MEM32(0x5BEC34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003024B8; /* jne: not equal / not zero */

loc_0030249F: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003024AAu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_003024AA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003024B0u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_003024B0: ;
    esp = esp + 8;
    MEM32(0x5BEC34) = eax;

loc_003024B8: ;
    ecx = edi + 3;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x26) = 0;
    PUSH32(esp, 0x003024CAu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_003024CA: ;
    ebp = eax;
    PUSH32(esp, 0x003024D1u); RECOMP_ABI_CALL(0x00223E00u, sub_00223E00); /* call 0x00223E00 */

loc_003024D1: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4763C0);
    PUSH32(esp, 0x4763B0);
    PUSH32(esp, 0x4763A0);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x26) = 0;
    PUSH32(esp, 0x003024EFu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_003024EF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00302500
 * Original: 0x00302500 - 0x00302799 (665 bytes, 219 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302500(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00302500: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BEC30);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00302512u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00302512: ;
    PUSH32(esp, 0x16);
    PUSH32(esp, 0x4764E8);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00302522u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00302522: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0030252Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0030252A: ;
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x00302534u); RECOMP_ABI_CALL(0x00217FA0u, sub_00217FA0); /* call 0x00217FA0 */

loc_00302534: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0030253Fu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0030253F: ;
    ecx = esp + 0x10;
    ebp = eax;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x00302551u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00302551: ;
    edx = edi + 3;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x34) = 0x3020D0;
    PUSH32(esp, 0x00302563u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00302563: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    PUSH32(esp, 0x0030256Cu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0030256C: ;
    eax = edi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00302577u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00302577: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    PUSH32(esp, 0x00302580u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00302580: ;
    ecx = edi + 5;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0030258Bu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0030258B: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    PUSH32(esp, 0x00302594u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00302594: ;
    edx = edi + 6;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0030259Fu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0030259F: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    PUSH32(esp, 0x003025A8u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_003025A8: ;
    eax = edi + 7;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003025B3u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_003025B3: ;
    ecx = esp + 0x10;
    ebp = eax;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x003025C5u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_003025C5: ;
    edx = edi + 8;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x34) = 0x302070;
    PUSH32(esp, 0x003025D7u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_003025D7: ;
    ebp = eax;
    eax = MEM32(0x5BEC20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003025FB; /* jne: not equal / not zero */

loc_003025E2: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003025EDu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_003025ED: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003025F3u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_003025F3: ;
    esp = esp + 8;
    MEM32(0x5BEC20) = eax;

loc_003025FB: ;
    ecx = edi + 9;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    PUSH32(esp, 0x00302609u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00302609: ;
    ebp = eax;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = ebp;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x0030261Bu); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_0030261B: ;
    eax = edi + 0xA;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(ebp + 0x34) = 0x1AA350;
    PUSH32(esp, 0x0030262Du); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0030262D: ;
    ecx = esp + 0x10;
    ebp = eax;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x0030263Fu); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_0030263F: ;
    edx = edi + 0xB;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x34) = 0x1AA350;
    PUSH32(esp, 0x00302651u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00302651: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    PUSH32(esp, 0x0030265Au); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0030265A: ;
    eax = edi + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00302665u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00302665: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    PUSH32(esp, 0x0030266Eu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0030266E: ;
    ecx = edi + 0xD;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00302679u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00302679: ;
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x00302681u); RECOMP_ABI_CALL(0x00217FA0u, sub_00217FA0); /* call 0x00217FA0 */

loc_00302681: ;
    edx = edi + 0xE;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0030268Cu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0030268C: ;
    ebp = eax;
    eax = MEM32(0x5BEC38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003026B0; /* jne: not equal / not zero */

loc_00302697: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003026A2u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_003026A2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003026A8u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_003026A8: ;
    esp = esp + 8;
    MEM32(0x5BEC38) = eax;

loc_003026B0: ;
    ecx = edi + 0xF;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x003026C1u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_003026C1: ;
    ebp = eax;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = ebp;
    MEM32(esp + 0x14) = 1;
    PUSH32(esp, 0x003026D7u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_003026D7: ;
    eax = edi + 0x10;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(ebp + 0x34) = 0x3020A0;
    PUSH32(esp, 0x003026E9u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_003026E9: ;
    ebp = eax;
    PUSH32(esp, 0x003026F0u); RECOMP_ABI_CALL(0x00249830u, sub_00249830); /* call 0x00249830 */

loc_003026F0: ;
    ecx = edi + 0x11;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00302701u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00302701: ;
    ebp = eax;
    PUSH32(esp, 0x00302708u); RECOMP_ABI_CALL(0x001AB0E0u, sub_001AB0E0); /* call 0x001AB0E0 */

loc_00302708: ;
    edx = edi + 0x12;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00302719u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00302719: ;
    ebp = eax;
    PUSH32(esp, 0x00302720u); RECOMP_ABI_CALL(0x002928C0u, sub_002928C0); /* call 0x002928C0 */

loc_00302720: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 0x13;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00302731u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00302731: ;
    ecx = esp + 0x10;
    ebp = eax;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM32(esp + 0x14) = 7;
    PUSH32(esp, 0x00302747u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00302747: ;
    edx = edi + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    MEM32(ebp + 0x34) = 0x1AA380;
    PUSH32(esp, 0x0030275Cu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0030275C: ;
    ecx = MEM32(0x5BC554);
    edx = edi + 0x15;
    MEM32(eax + 0x38) = ecx;
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(eax + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00302773u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00302773: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    PUSH32(esp, 0x0030277Cu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0030277C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x476490);
    PUSH32(esp, 0x476438);
    PUSH32(esp, 0x4763E0);
    ecx = esi;
    PUSH32(esp, 0x00302793u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00302793: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003027A0
 * Original: 0x003027A0 - 0x003027D1 (49 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003027A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003027A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003027CF; /* je: equal / zero */

loc_003027AA: ;
    /* nop */

loc_003027B0: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003027CF; /* je: equal / zero */

loc_003027B7: ;
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x003027C4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003027C4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003027CF; /* je: equal / zero */

loc_003027C8: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003027B0; /* jne: not equal / not zero */

loc_003027CF: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003027E0
 * Original: 0x003027E0 - 0x003029F8 (536 bytes, 176 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003027E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003027E0: ;
    esp = esp - 0x38;
    eax = MEM32(ecx + 0x10);
    MEM32(esp) = ecx;
    ecx = MEM32(eax + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x28) = edi;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_003029F3; /* jle: less or equal (signed <=) */

loc_003027FB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    edi = edi;

loc_00302800: ;
    eax = MEM32(eax + 0x10);
    ebx = MEM32(eax + edi * 4);
    ecx = MEM32(ebx + 0x4C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x0030280Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030280F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003029D9; /* je: equal / zero */

loc_00302817: ;
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00302831u); RECOMP_ABI_CALL(0x00302120u, sub_00302120); /* call 0x00302120 */

loc_00302831: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003029D9; /* je: equal / zero */

loc_0030283C: ;
    eax = MEM32(ebx + 0x20);
    esi = MEM32(esp + 0x2C);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    ecx = MEM32(esp + 0x38);
    MEM32(esp + 0x20) = 0;
    ebp = eax;
    eax = MEM32(ebx + 0x24);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x44) = ebp;
    MEM32(esp + 0x1C) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_003029D9; /* jle: less or equal (signed <=) */

loc_0030286A: ;
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x30) = ecx;
    goto loc_00302880;

    /* nop */
    /* nop */

loc_00302880: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x14) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_003029A7; /* jle: less or equal (signed <=) */

loc_00302890: ;
    ecx = MEM32(esp + 0x24);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x28) = esi;
    /* nop */

loc_003028A0: ;
    edx = MEM32(ebx + 0x5C);
    eax = MEM32(edx + 0x10);
    ecx = MEM32(esp + 0x18);
    esi = MEM32(ecx + eax);
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030297F; /* je: equal / zero */

loc_003028B7: ;
    edi = MEM32(ebx + 0x58);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x003028C3u); RECOMP_ABI_CALL(0x00298FD0u, sub_00298FD0); /* call 0x00298FD0 */

loc_003028C3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003028E9; /* jne: not equal / not zero */

loc_003028C7: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(edx + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x90); PUSH32(esp, 0x003028D6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003028D6: ;
    ecx = MEM32(ebx + 0x58);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, ecx);
    goto loc_0030296D;

loc_003028E9: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x003028F2u); RECOMP_ABI_CALL(0x00298FD0u, sub_00298FD0); /* call 0x00298FD0 */

loc_003028F2: ;
    edi = eax;
    SET_LO8(eax, MEM8(0x5BB478));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030293A; /* je: equal / zero */

loc_003028FD: ;
    eax = MEM32(edi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030293A; /* jne: not equal / not zero */

loc_00302904: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x00302912u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00302912: ;
    ebp = eax;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00302921u); RECOMP_ABI_CALL(0x0020A1A0u, sub_0020A1A0); /* call 0x0020A1A0 */

loc_00302921: ;
    PUSH32(esp, ebp);
    edi = eax;
    PUSH32(esp, 0x00302929u); RECOMP_ABI_CALL(0x001F52B0u, sub_001F52B0); /* call 0x001F52B0 */

loc_00302929: ;
    esp = esp + 4;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00302936u); RECOMP_ABI_CALL(0x0029D060u, sub_0029D060); /* call 0x0029D060 */

loc_00302936: ;
    ebp = MEM32(esp + 0x44);

loc_0030293A: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x58);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00302954u); RECOMP_ABI_CALL(0x003021E0u, sub_003021E0); /* call 0x003021E0 */

loc_00302954: ;
    edx = MEM32(esp + 0x28);
    ecx = MEM32(edx + 0xC);
    eax = MEM32(ecx);
    esp = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x90); PUSH32(esp, 0x00302966u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00302966: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);

loc_0030296D: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1E8); PUSH32(esp, 0x0030297Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030297F: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x28);
    edx = edx + ebp;
    ecx = ecx + 4;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x28) = eax;
    if ((_fa != 0)) goto loc_003028A0; /* jne: not equal / not zero */

loc_003029A3: ;
    esi = MEM32(esp + 0x2C);

loc_003029A7: ;
    ecx = MEM32(esp + 0x24);
    edi = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    eax = esi * 4;
    ecx = ecx + eax;
    eax = MEM32(esp + 0x30);
    edi = edi + edx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x30) = eax;
    if ((_fa != 0)) goto loc_00302880; /* jne: not equal / not zero */

loc_003029D5: ;
    edi = MEM32(esp + 0x34);

loc_003029D9: ;
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + 8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    MEM32(esp + 0x34) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00302800; /* jl: less (signed <) */

loc_003029F0: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_003029F3: ;
    POP32(esp, edi);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_00302A00
 * Original: 0x00302A00 - 0x00302A29 (41 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00302A00: ;
    edx = MEM32(ecx + 8);
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_GE(_fas, _fbs)) goto loc_00302A22; /* jge: greater or equal (signed >=) */

loc_00302A0C: ;
    ecx = MEM32(ecx + 0x10);
    esi = MEM32(esp + 8);
    ecx = ecx + eax * 4;

loc_00302A16: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302A25; /* je: equal / zero */

loc_00302A1A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00302A16; /* jl: less (signed <) */

loc_00302A22: ;
    eax = eax | 0xFFFFFFFFu;

loc_00302A25: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00302A30
 * Original: 0x00302A30 - 0x00302A57 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00302A30: ;
    eax = MEM32(0x5BEC18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00302A44; /* je: equal / zero */

loc_00302A39: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00302A56; /* jne: not equal / not zero */

loc_00302A44: ;
    PUSH32(esp, 0x304010);
    PUSH32(esp, 0x00302A4Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00302A4E: ;
    eax = MEM32(0x5BEC18);
    esp = esp + 4;

loc_00302A56: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00302A60
 * Original: 0x00302A60 - 0x00302A66 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302A60(void)
{

loc_00302A60: ;
    eax = MEM32(0x5BEC18);
    esp += 4; return; /* ret */

}

/**
 * sub_00302A70
 * Original: 0x00302A70 - 0x00302B00 (144 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00302A70: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00302A8F; /* je: equal / zero */

loc_00302A7A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00302A8F; /* jne: not equal / not zero */

loc_00302A8A: ;
    PUSH32(esp, 0x00302A8Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00302A8F: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00302AAB; /* je: equal / zero */

loc_00302A96: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00302AAB; /* jne: not equal / not zero */

loc_00302AA6: ;
    PUSH32(esp, 0x00302AABu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00302AAB: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00302AC7; /* je: equal / zero */

loc_00302AB2: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00302AC7; /* jne: not equal / not zero */

loc_00302AC2: ;
    PUSH32(esp, 0x00302AC7u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00302AC7: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00302AE3; /* je: equal / zero */

loc_00302ACE: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00302AE3; /* jne: not equal / not zero */

loc_00302ADE: ;
    PUSH32(esp, 0x00302AE3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00302AE3: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00302AFE; /* je: equal / zero */

loc_00302AEA: ;
    ecx = MEM32(esi + -4);
    eax = esi + -8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_00302AFE; /* jne: not equal / not zero */

loc_00302AF6: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00302AFEu); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_00302AFE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00302B00
 * Original: 0x00302B00 - 0x00302B10 (16 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302B00(void)
{

loc_00302B00: ;
    eax = MEM32(0x5BEC30);
    esp += 4; return; /* ret */

}

/**
 * sub_00302B10
 * Original: 0x00302B10 - 0x00302C0E (254 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00302B10: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x64);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00302B2F; /* je: equal / zero */

loc_00302B1A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00302B2F; /* jne: not equal / not zero */

loc_00302B2A: ;
    PUSH32(esp, 0x00302B2Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00302B2F: ;
    ecx = MEM32(esi + 0x5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00302B4B; /* je: equal / zero */

loc_00302B36: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00302B4B; /* jne: not equal / not zero */

loc_00302B46: ;
    PUSH32(esp, 0x00302B4Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00302B4B: ;
    ecx = MEM32(esi + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00302B67; /* je: equal / zero */

loc_00302B52: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00302B67; /* jne: not equal / not zero */

loc_00302B62: ;
    PUSH32(esp, 0x00302B67u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00302B67: ;
    ecx = MEM32(esi + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00302B83; /* je: equal / zero */

loc_00302B6E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00302B83; /* jne: not equal / not zero */

loc_00302B7E: ;
    PUSH32(esp, 0x00302B83u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00302B83: ;
    ecx = MEM32(esi + 0x4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00302B9F; /* je: equal / zero */

loc_00302B8A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00302B9F; /* jne: not equal / not zero */

loc_00302B9A: ;
    PUSH32(esp, 0x00302B9Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00302B9F: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00302BBA; /* je: equal / zero */

loc_00302BA6: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_00302BBA; /* jne: not equal / not zero */

loc_00302BB2: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00302BBAu); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_00302BBA: ;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00302BD6; /* je: equal / zero */

loc_00302BC1: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00302BD6; /* jne: not equal / not zero */

loc_00302BD1: ;
    PUSH32(esp, 0x00302BD6u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00302BD6: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00302BF1; /* je: equal / zero */

loc_00302BDD: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_00302BF1; /* jne: not equal / not zero */

loc_00302BE9: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00302BF1u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_00302BF1: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00302C0C; /* je: equal / zero */

loc_00302BF8: ;
    ecx = MEM32(esi + -4);
    eax = esi + -8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_00302C0C; /* jne: not equal / not zero */

loc_00302C04: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00302C0Cu); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_00302C0C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00302C10
 * Original: 0x00302C10 - 0x00302C3C (44 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302C10(void)
{

loc_00302C10: ;
    esp = esp - 0xC;
    ecx = esp;
    PUSH32(esp, 0x00302C1Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00302C1B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp + 8) = 0;
    MEM32(esp) = 0x42AAC8;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00302C40
 * Original: 0x00302C40 - 0x00302C81 (65 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00302C40: ;
    SET_LO8(eax, MEM8(0x5BEC3E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00302C50; /* jne: not equal / not zero */

loc_00302C49: ;
    MEM8(0x5BEC3E) = 1;

loc_00302C50: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x302C10);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x42AC0C);
    PUSH32(esp, 0x3023A0);
    PUSH32(esp, 0x1A4460);
    PUSH32(esp, 0x226510);
    PUSH32(esp, 0x5BEC38);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00302C7Du); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00302C7D: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00302C90
 * Original: 0x00302C90 - 0x00302DB2 (290 bytes, 115 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302C90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00302C90: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x14));
    esp = esp - 0x14;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(eax + 8);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 4) = edi;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0xC) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00302D8B; /* jle: less or equal (signed <=) */

loc_00302CB2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);

loc_00302CB5: ;
    ecx = MEM32(edi + 0x10);
    edx = MEM32(ecx + 0x10);
    esi = MEM32(edx + eax * 4);
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x14) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00302CD8; /* je: equal / zero */

loc_00302CC8: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x00302CD0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00302CD0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00302D88; /* je: equal / zero */

loc_00302CD8: ;
    eax = MEM32(edi + 0x14);
    ecx = MEM32(esi + 0x48);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x1C) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00302D50; /* je: equal / zero */

loc_00302CE8: ;
    ecx = MEM32(eax + 8);
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00302D50; /* jle: less or equal (signed <=) */

loc_00302CF1: ;
    edx = MEM32(eax + 0x10);
    edi = MEM32(edx + ebp * 4);
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x00302CFEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00302CFE: ;
    esi = MEM32(esp + 0x1C);
    eax = MEM32(eax + 0x1C);

loc_00302D05: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00302D29; /* jne: not equal / not zero */

loc_00302D0D: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00302D25; /* je: equal / zero */

loc_00302D11: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00302D29; /* jne: not equal / not zero */

loc_00302D1B: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00302D05; /* jne: not equal / not zero */

loc_00302D25: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_00302D2E;

loc_00302D29: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */

loc_00302D2E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00302D43; /* je: equal / zero */

loc_00302D32: ;
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax + 0x14);
    ecx = MEM32(eax + 8);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00302CF1; /* jl: less (signed <) */

loc_00302D41: ;
    goto loc_00302D48;

loc_00302D43: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = edi;

loc_00302D48: ;
    edi = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x14);

loc_00302D50: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00302D58u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00302D58: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00302D90; /* je: equal / zero */

loc_00302D5C: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00302D73; /* jne: not equal / not zero */

loc_00302D6C: ;
    ecx = ebx;
    PUSH32(esp, 0x00302D73u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00302D73: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x20);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x18) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00302CB5; /* jl: less (signed <) */

loc_00302D88: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00302D8B: ;
    POP32(esp, edi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00302D90: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00302D88; /* je: equal / zero */

loc_00302D94: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00302D88; /* jne: not equal / not zero */

loc_00302DA4: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    ecx = ebx;
    POP32(esp, ebx);
    POP32(esp, edi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

}

/**
 * sub_00302DC0
 * Original: 0x00302DC0 - 0x00302E5F (159 bytes, 68 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00302DC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    ebx = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00302DDE; /* je: equal / zero */

loc_00302DCD: ;
    eax = MEM32(0x5BEC30);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00302DDAu); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00302DDA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00302DE0; /* jne: not equal / not zero */

loc_00302DDE: ;
    esi = 0; /* xor self */

loc_00302DE0: ;
    eax = MEM32(ebx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00302E03; /* je: equal / zero */

loc_00302DE7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00302E03; /* je: equal / zero */

loc_00302DEB: ;
    ecx = MEM32(eax + 8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00302E03; /* jle: less or equal (signed <=) */

loc_00302DF4: ;
    eax = MEM32(eax + 0x10);

loc_00302DF7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302E0B; /* je: equal / zero */

loc_00302DFB: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00302DF7; /* jl: less (signed <) */

loc_00302E03: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00302E0B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302E03; /* je: equal / zero */

loc_00302E10: ;
    ecx = MEM32(esi + 0x4C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x00302E1Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00302E1B: ;
    ecx = MEM32(esi + 0x4C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x00302E24u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00302E24: ;
    ecx = MEM32(ebx + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00302E2Du); RECOMP_ABI_CALL(0x00117E70u, sub_00117E70); /* call 0x00117E70 */

loc_00302E2D: ;
    ecx = MEM32(ebx + 0x10);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00302E57; /* jne: not equal / not zero */

loc_00302E37: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00302E50; /* je: equal / zero */

loc_00302E3B: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00302E50; /* jne: not equal / not zero */

loc_00302E4B: ;
    PUSH32(esp, 0x00302E50u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00302E50: ;
    MEM32(ebx + 0x10) = 0;

loc_00302E57: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00302E60
 * Original: 0x00302E60 - 0x00302EAA (74 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302E60(void)
{

loc_00302E60: ;
    esp = esp - 0x1C;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x00302E6Du); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00302E6D: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x42AB38;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x00302EA3u); RECOMP_ABI_CALL(0x00302A70u, sub_00302A70); /* call 0x00302A70 */

loc_00302EA3: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_00302EB0
 * Original: 0x00302EB0 - 0x00302F0A (90 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302EB0(void)
{

loc_00302EB0: ;
    esp = esp - 0x6C;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x00302EBDu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00302EBD: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x58) = eax;
    MEM32(esp + 0x5C) = eax;
    MEM32(esp + 0x60) = eax;
    MEM32(esp + 0x68) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x42ABB0;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x00302F03u); RECOMP_ABI_CALL(0x00302B10u, sub_00302B10); /* call 0x00302B10 */

loc_00302F03: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x6C;
    esp += 4; return; /* ret */

}

/**
 * sub_00302F10
 * Original: 0x00302F10 - 0x00302F1C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302F10(void)
{

loc_00302F10: ;
    PUSH32(esp, 0x302C40);
    PUSH32(esp, 0x00302F1Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00302F1A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00302F20
 * Original: 0x00302F20 - 0x00302F26 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302F20(void)
{

loc_00302F20: ;
    eax = MEM32(0x5BEC20);
    esp += 4; return; /* ret */

}

/**
 * sub_00302F30
 * Original: 0x00302F30 - 0x00302F36 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302F30(void)
{

loc_00302F30: ;
    eax = MEM32(0x5BEC34);
    esp += 4; return; /* ret */

}

/**
 * sub_00302F40
 * Original: 0x00302F40 - 0x00302F46 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302F40(void)
{

loc_00302F40: ;
    eax = MEM32(0x5BEC1C);
    esp += 4; return; /* ret */

}

/**
 * sub_00302F50
 * Original: 0x00302F50 - 0x00302F74 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302F50(void)
{

loc_00302F50: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x00302F5Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00302F5B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x42AC20;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00302F80
 * Original: 0x00302F80 - 0x00302FC4 (68 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00302F80: ;
    SET_LO8(eax, MEM8(0x5BEC3E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00302F90; /* jne: not equal / not zero */

loc_00302F89: ;
    MEM8(0x5BEC3E) = 1;

loc_00302F90: ;
    PUSH32(esp, 0x476540);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x302F50);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x42AD3C);
    PUSH32(esp, 0x302340);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BEC20);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00302FC0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00302FC0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00302FD0
 * Original: 0x00302FD0 - 0x00302FF4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302FD0(void)
{

loc_00302FD0: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x00302FDBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00302FDB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x42AC80;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00303000
 * Original: 0x00303000 - 0x00303044 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00303000: ;
    SET_LO8(eax, MEM8(0x5BEC3E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00303010; /* jne: not equal / not zero */

loc_00303009: ;
    MEM8(0x5BEC3E) = 1;

loc_00303010: ;
    PUSH32(esp, 0x476548);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x302FD0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x42AD54);
    PUSH32(esp, 0x3023D0);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BEC34);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00303040u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00303040: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00303050
 * Original: 0x00303050 - 0x00303074 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303050(void)
{

loc_00303050: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x0030305Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0030305B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x42ACE0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00303080
 * Original: 0x00303080 - 0x0030308C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303080(void)
{

loc_00303080: ;
    PUSH32(esp, 0x302F80);
    PUSH32(esp, 0x0030308Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0030308A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00303090
 * Original: 0x00303090 - 0x003030D7 (71 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00303090: ;
    SET_LO8(eax, MEM8(0x5BEC3E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003030A0; /* jne: not equal / not zero */

loc_00303099: ;
    MEM8(0x5BEC3E) = 1;

loc_003030A0: ;
    PUSH32(esp, 0x476550);
    PUSH32(esp, 0);
    PUSH32(esp, 0x302500);
    PUSH32(esp, 0x302EB0);
    PUSH32(esp, 0x6C);
    PUSH32(esp, 0x42AD68);
    PUSH32(esp, 0x302310);
    PUSH32(esp, 0x1A4510);
    PUSH32(esp, 0x2371D0);
    PUSH32(esp, 0x5BEC30);
    PUSH32(esp, 0);
    PUSH32(esp, 0x003030D3u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_003030D3: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_003030E0
 * Original: 0x003030E0 - 0x003030EC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003030E0(void)
{

loc_003030E0: ;
    PUSH32(esp, 0x303000);
    PUSH32(esp, 0x003030EAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_003030EA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003030F0
 * Original: 0x003030F0 - 0x003030FC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003030F0(void)
{

loc_003030F0: ;
    PUSH32(esp, 0x303090);
    PUSH32(esp, 0x003030FAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_003030FA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00303100
 * Original: 0x00303100 - 0x00303147 (71 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00303100: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0030311F; /* je: equal / zero */

loc_0030310A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0030311F; /* jne: not equal / not zero */

loc_0030311A: ;
    PUSH32(esp, 0x0030311Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0030311F: ;
    eax = MEM32(esp + 0xC);
    edi = MEM32(eax);
    PUSH32(esp, 0x303000);
    PUSH32(esp, 0x0030312Fu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0030312F: ;
    ecx = MEM32(0x5BEC34);
    esp = esp + 4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030313Eu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0030313E: ;
    MEM32(esi) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00303150
 * Original: 0x00303150 - 0x00303197 (71 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00303150: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0030316F; /* je: equal / zero */

loc_0030315A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0030316F; /* jne: not equal / not zero */

loc_0030316A: ;
    PUSH32(esp, 0x0030316Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0030316F: ;
    eax = MEM32(esp + 0xC);
    edi = MEM32(eax);
    PUSH32(esp, 0x302F80);
    PUSH32(esp, 0x0030317Fu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0030317F: ;
    ecx = MEM32(0x5BEC20);
    esp = esp + 4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030318Eu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0030318E: ;
    MEM32(esi) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003031A0
 * Original: 0x003031A0 - 0x003031E4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003031A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003031A0: ;
    SET_LO8(eax, MEM8(0x5BEC3E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003031B0; /* jne: not equal / not zero */

loc_003031A9: ;
    MEM8(0x5BEC3E) = 1;

loc_003031B0: ;
    PUSH32(esp, 0x47656C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x303050);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x42AD74);
    PUSH32(esp, 0x302370);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BEC1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x003031E0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_003031E0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_003031F0
 * Original: 0x003031F0 - 0x0030320E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003031F0(void)
{

loc_003031F0: ;
    PUSH32(esp, 0x303090);
    PUSH32(esp, 0x003031FAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_003031FA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BEC30);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030320Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0030320D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00303210
 * Original: 0x00303210 - 0x00303FB9 (3497 bytes, 1135 insns)
 * Category: game_camera
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00303210(void)
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

loc_00303210: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x1CC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esi + 0x20);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0030330D; /* je: equal / zero */

loc_00303234: ;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030330D; /* je: equal / zero */

loc_0030323D: ;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    PUSH32(esp, esi);
    MEM32(esp + 0x2C) = edi;
    MEM32(esp + 0x24) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303261u); RECOMP_ABI_CALL(0x00302120u, sub_00302120); /* call 0x00302120 */

loc_00303261: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030330D; /* je: equal / zero */

loc_0030326C: ;
    eax = MEM32(esp + 0x3C);
    ebx = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x44) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303280u); RECOMP_ABI_CALL(0x0013D380u, sub_0013D380); /* call 0x0013D380 */

loc_00303280: ;
    PUSH32(esp, ebx);
    MEM32(esp + 0x38) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030328Au); RECOMP_ABI_CALL(0x0013D380u, sub_0013D380); /* call 0x0013D380 */

loc_0030328A: ;
    MEM32(esp + 0x44) = eax;
    eax = MEM32(esi + 0x34);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003032AC; /* je: equal / zero */

loc_00303298: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003032AC; /* je: equal / zero */

loc_0030329D: ;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003032A7u); RECOMP_ABI_CALL(0x001C2500u, sub_001C2500); /* call 0x001C2500 */

loc_003032A7: ;
    goto loc_00303518;

loc_003032AC: ;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003036BE; /* je: equal / zero */

loc_003032B7: ;
    eax = MEM32(eax + 0x14);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003032C0u); RECOMP_ABI_CALL(0x0013D3F0u, sub_0013D3F0); /* call 0x0013D3F0 */

loc_003032C0: ;
    esi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    MEM32(esp + 0x24) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_003032D0; /* je: equal / zero */

loc_003032CD: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003032D0: ;
    ebx = 0; /* xor self */
    edx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    MEM32(esp + 0xC) = ebx;
    MEM32(esp + 0x20) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00303318; /* jne: not equal / not zero */

loc_003032E0: ;
    ecx = esp + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003032E9u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_003032E9: ;
    ecx = esp + 0xC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003032F2u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_003032F2: ;
    ecx = esp + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003032FBu); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_003032FB: ;
    ecx = esp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303304u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_00303304: ;
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030330Du); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_0030330D: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00303318: ;
    MEM32(esp + 0x1C) = edi;
    /* nop */

loc_00303320: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030332C; /* je: equal / zero */

loc_00303327: ;
    ecx = MEM32(eax + 8);
    goto loc_0030332E;

loc_0030332C: ;
    ecx = 0; /* xor self */

loc_0030332E: ;
    edi = MEM32(esp + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0030344E; /* jge: greater or equal (signed >=) */

loc_0030333A: ;
    ecx = MEM32(eax + 0x10);
    edx = edi;
    esi = MEM32(ecx + edx * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00303357; /* je: equal / zero */

loc_00303346: ;
    eax = MEM32(0x5BDB40);
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303353u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00303353: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00303359; /* jne: not equal / not zero */

loc_00303357: ;
    esi = 0; /* xor self */

loc_00303359: ;
    PUSH32(esp, esi);
    ecx = esp + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303363u); RECOMP_ABI_CALL(0x001C2500u, sub_001C2500); /* call 0x001C2500 */

loc_00303363: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00303438; /* je: equal / zero */

loc_0030336F: ;
    ecx = eax;
    eax = MEM32(ecx + 0x20);
    ecx = MEM32(eax + 8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00303438; /* jle: less or equal (signed <=) */

loc_00303381: ;
    edx = MEM32(eax + 0x10);
    esi = MEM32(edx + edi * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030339C; /* je: equal / zero */

loc_0030338B: ;
    eax = MEM32(0x5BE52C);
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303398u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00303398: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003033A0; /* jne: not equal / not zero */

loc_0030339C: ;
    esi = 0; /* xor self */
    goto loc_003033A3;

loc_003033A0: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003033A3: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003033BE; /* je: equal / zero */

loc_003033A7: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_003033BE; /* jne: not equal / not zero */

loc_003033B7: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003033BEu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_003033BE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ebx = esi;
    if (TEST_Z(_fa, _fb)) goto loc_00303425; /* je: equal / zero */

loc_003033C4: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003033E7; /* jne: not equal / not zero */

loc_003033CC: ;
    ecx = MEM32(esp + 0x14);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003033D5u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_003033D5: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esp + 0x1C;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003033E7u); RECOMP_ABI_CALL(0x00303150u, sub_00303150); /* call 0x00303150 */

loc_003033E7: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003033F1u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_003033F1: ;
    esi = MEM32(esi + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00303425; /* je: equal / zero */

loc_003033F8: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030341B; /* jne: not equal / not zero */

loc_00303400: ;
    ecx = MEM32(esp + 0x14);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303409u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00303409: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030341Bu); RECOMP_ABI_CALL(0x00302290u, sub_00302290); /* call 0x00302290 */

loc_0030341B: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303425u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00303425: ;
    eax = MEM32(esp + 0x20);
    eax = MEM32(eax + 0x20);
    ecx = MEM32(eax + 8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00303381; /* jl: less (signed <) */

loc_00303438: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    esi = MEM32(esp + 0x24);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = eax;
    goto loc_00303320;

loc_0030344E: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edi = 0x7FFFFF;
    if (TEST_NZ(_fa, _fb)) goto loc_003034CC; /* jne: not equal / not zero */

loc_0030345B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00303473; /* je: equal / zero */

loc_0030345F: ;
    ecx = MEM32(edx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    MEM32(edx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00303473; /* jne: not equal / not zero */

loc_0030346C: ;
    ecx = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303473u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00303473: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030348B; /* je: equal / zero */

loc_00303477: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0030348B; /* jne: not equal / not zero */

loc_00303484: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030348Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0030348B: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0030349F; /* jne: not equal / not zero */

loc_00303498: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030349Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0030349F: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030330D; /* je: equal / zero */

loc_003034AB: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0030330D; /* jne: not equal / not zero */

loc_003034BC: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003034C1u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_003034C1: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_003034CC: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003034E4; /* je: equal / zero */

loc_003034D0: ;
    ecx = MEM32(edx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    MEM32(edx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_003034E4; /* jne: not equal / not zero */

loc_003034DD: ;
    ecx = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003034E4u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_003034E4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003034FC; /* je: equal / zero */

loc_003034E8: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_003034FC; /* jne: not equal / not zero */

loc_003034F5: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003034FCu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_003034FC: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00303510; /* jne: not equal / not zero */

loc_00303509: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303510u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00303510: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030352E; /* jne: not equal / not zero */

loc_00303518: ;
    ecx = MEM32(esp + 0x14);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303521u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00303521: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303527u); RECOMP_ABI_CALL(0x002979E0u, sub_002979E0); /* call 0x002979E0 */

loc_00303527: ;
    esp = esp + 4;
    MEM32(esp + 0x10) = eax;

loc_0030352E: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(ecx + 8);
    ebx = 0; /* xor self */
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x24) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_00303E1F; /* jle: less or equal (signed <=) */

loc_00303545: ;
    ecx = MEM32(esp + 0x14);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030354Eu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0030354E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0030356B; /* je: equal / zero */

loc_00303554: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0030356B; /* jne: not equal / not zero */

loc_00303564: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030356Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0030356B: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303571u); RECOMP_ABI_CALL(0x001E1C50u, sub_001E1C50); /* call 0x001E1C50 */

loc_00303571: ;
    esi = eax;
    eax = MEM32(esp + 0x34);
    edx = MEM32(esi);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x00303582u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00303582: ;
    eax = MEM32(esp + 0x3C);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x0030358Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030358E: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x60);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x0030359Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030359C: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x65);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x003035A5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003035A5: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x003035ACu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003035AC: ;
    ecx = MEM32(esi + 0x30);
    edi = MEM32(esi + 0x34);
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
    ecx = MEM32(esp + 0x14);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003035CBu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_003035CB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003035E8; /* je: equal / zero */

loc_003035D1: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_003035E8; /* jne: not equal / not zero */

loc_003035E1: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003035E8u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_003035E8: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003035EEu); RECOMP_ABI_CALL(0x002A0740u, sub_002A0740); /* call 0x002A0740 */

loc_003035EE: ;
    edi = MEM32(ebp + 8);
    ebx = eax;
    eax = MEM32(ebx);
    MEM32(ebx + 0x2C) = 0;
    MEM32(ebx + 0x28) = 4;
    ecx = MEM32(edi + 0x38);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x0030360Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030360F: ;
    eax = MEM32(edi + 0x3C);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0030361Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030361A: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303624u); RECOMP_ABI_CALL(0x0029D060u, sub_0029D060); /* call 0x0029D060 */

loc_00303624: ;
    SET_LO8(eax, MEM8(0x5BB478));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00303DED; /* je: equal / zero */

loc_00303631: ;
    edi = MEM32(esp + 0x14);
    eax = MEM32(edi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00303673; /* jne: not equal / not zero */

loc_0030363C: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303643u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00303643: ;
    ecx = MEM32(edi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x2C) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00303663; /* je: equal / zero */

loc_0030364E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00303663; /* jne: not equal / not zero */

loc_0030365E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303663u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00303663: ;
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030366Du); RECOMP_ABI_CALL(0x0022DF20u, sub_0022DF20); /* call 0x0022DF20 */

loc_0030366D: ;
    esp = esp + 4;
    MEM32(edi + 0x18) = eax;

loc_00303673: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(ebp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0xE0;
    PUSH32(esp, 0x42ADC8);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030368Eu); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_0030368E: ;
    eax = MEM32(0x5BC528);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edi = esp;
    if (TEST_NZ(_fa, _fb)) goto loc_00303D73; /* jne: not equal / not zero */

loc_003036A0: ;
    PUSH32(esp, 0x10);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003036A7u); RECOMP_ABI_CALL(0x001F4E60u, sub_001F4E60); /* call 0x001F4E60 */

loc_003036A7: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00303D6C; /* je: equal / zero */

loc_003036B2: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003036B9u); RECOMP_ABI_CALL(0x00202CC0u, sub_00202CC0); /* call 0x00202CC0 */

loc_003036B9: ;
    goto loc_00303D6E;

loc_003036BE: ;
    edi = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    ecx = edi;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x24) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003036D7u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_003036D7: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003036E9u); RECOMP_ABI_CALL(0x003022D0u, sub_003022D0); /* call 0x003022D0 */

loc_003036E9: ;
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, 0x42ADBC);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003036F9u); RECOMP_ABI_CALL(0x002127B0u, sub_002127B0); /* call 0x002127B0 */

loc_003036F9: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303700u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00303700: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303706u); RECOMP_ABI_CALL(0x00297730u, sub_00297730); /* call 0x00297730 */

loc_00303706: ;
    edi = eax;
    edx = MEM32(edi);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    MEM32(esp + 0x30) = edi;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00303718u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00303718: ;
    ecx = MEM32(ebx + 0x20);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303721u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00303721: ;
    ecx = MEM32(esp + 0x14);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030372Au); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0030372A: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303730u); RECOMP_ABI_CALL(0x002956F0u, sub_002956F0); /* call 0x002956F0 */

loc_00303730: ;
    edi = eax;
    eax = MEM32(edi);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    MEM32(esp + 0x6C) = edi;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00303742u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00303742: ;
    ecx = MEM32(ebx + 0x20);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030374Bu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0030374B: ;
    ecx = MEM32(esi + 0x20);
    esi = MEM32(esi + 0x24);
    MEM32(esp + 0xC) = ecx;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    MEM32(esp + 0x40) = esi;
    fp_top() = fp_top() / (double)SMEM32(esp + 0x40); /* fidiv dword ptr [esp + 0x40] */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    fp_push(MEMF(0x3C6E40)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030377C; /* je: equal / zero */

loc_00303778: ;
    fp_top() = fp_top() / MEMF(esp + 0x1C); /* fdiv dword ptr [esp + 0x1c] */

loc_0030377C: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    fp_push(MEMF(0x3C6E40)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00303797; /* jnp: not parity */

loc_00303793: ;
    fp_top() = fp_top() / MEMF(esp + 0x1C); /* fdiv dword ptr [esp + 0x1c] */

loc_00303797: ;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    edi = MEM32(esp + 0x20);
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    fp_top() = -fp_top(); /* fchs */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    MEMF(esp + 0x54) = (float)fp_top(); /* fst */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3C7084)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    eax = esi;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x6C) = 0x10003;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    fp_top() = g_fp_stack[(g_fp_top + 2) & 7] / fp_top(); /* fdivr st(2) */
    ecx = ecx - edx;
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(esp + 0x30);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi);
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    fp_top() = fp_st1() / fp_top(); /* fdivr st(1) */
    edi = MEM32(esp + 0x28);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(esp + 0x14);
    fp_top() = fp_top() / (double)SMEM32(esp + 0xC); /* fidiv dword ptr [esp + 0xc] */
    esi = esi - edx;
    edx = MEM32(esp + 0x3C);
    MEM32(esp + 0xC) = esi;
    edx = (uint32_t)((int32_t)edx * (int32_t)edi);
    MEMF(esp + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    MEM32(esp + 0xC) = edx;
    fp_top() = fp_top() / (double)SMEM32(esp + 0xC); /* fidiv dword ptr [esp + 0xc] */
    MEMF(esp + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030382Au); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0030382A: ;
    MEM32(esp + 0xC) = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030383Cu); RECOMP_ABI_CALL(0x00303150u, sub_00303150); /* call 0x00303150 */

loc_0030383C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00303B26; /* jle: less or equal (signed <=) */

loc_00303844: ;
    MEM32(esp + 0xC) = edi;
    goto loc_00303850;

    /* nop */

loc_00303850: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00303B03; /* jle: less or equal (signed <=) */

loc_0030385C: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    ecx = eax;
    fp_top() = fp_top() - MEMF(esp + 0x40); /* fsub dword ptr [esp + 0x40] */
    MEM32(esp + 0x50) = ecx;
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    edi = edi;

loc_00303870: ;
    ecx = MEM32(esp + 0x14);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303879u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00303879: ;
    ecx = MEM32(esp + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    esi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00303898; /* je: equal / zero */

loc_00303883: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00303898; /* jne: not equal / not zero */

loc_00303893: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303898u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00303898: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030389Eu); RECOMP_ABI_CALL(0x002878E0u, sub_002878E0); /* call 0x002878E0 */

loc_0030389E: ;
    esi = MEM32(esp + 0x18);
    esp = esp + 4;
    ecx = esi;
    MEM32(esp + 0x38) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003038B0u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_003038B0: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003038B6u); RECOMP_ABI_CALL(0x00288560u, sub_00288560); /* call 0x00288560 */

loc_003038B6: ;
    esp = esp + 4;
    ecx = esi;
    MEM32(esp + 0x28) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003038C4u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_003038C4: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003038CAu); RECOMP_ABI_CALL(0x002A0680u, sub_002A0680); /* call 0x002A0680 */

loc_003038CA: ;
    esp = esp + 4;
    ecx = esi;
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003038D6u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_003038D6: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003038DCu); RECOMP_ABI_CALL(0x001DECD0u, sub_001DECD0); /* call 0x001DECD0 */

loc_003038DC: ;
    esp = esp + 4;
    edi = 0; /* xor self */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    esi = eax;
    edx = MEM32(esi);
    PUSH32(esp, 2);
    PUSH32(esp, 4);
    eax = esp + 0x78;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x003038F4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003038F4: ;
    MEM32(esp + 0x48) = edi;
    goto loc_00303900;

    /* nop */

loc_00303900: ;
    fp_push((double)SMEM32(esp + 0x48)); /* fild */
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esi);
    eax = esp + 0x8C;
    MEMF(esp + 0x44) = (float)fp_top(); /* fst */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    fp_top() = fp_top() * MEMF(esp + 0x50); /* fmul dword ptr [esp + 0x50] */
    MEM32(esp + 0x94) = ecx;
    PUSH32(esp, edi);
    ecx = esi;
    fp_top() = fp_top() + MEMF(esp + 0x24); /* fadd dword ptr [esp + 0x24] */
    MEM32(esp + 0x9C) = 0;
    MEMF(esp + 0x78) = (float)fp_top(); /* fst */
    MEMF(esp + 0x94) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00303941u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00303941: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x46D194);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0030394Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030394E: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x74); /* fmul dword ptr [esp + 0x74] */
    eax = MEM32(esi);
    ecx = esp + 0x7C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    MEMF(esp + 0x4C) = (float)fp_top(); /* fst */
    PUSH32(esp, 0);
    MEMF(esp + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esi;
    MEM32(esp + 0x8C) = 0;
    { uint32_t _icall_target = MEM32(eax + 0xC0); PUSH32(esp, 0x0030397Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030397E: ;
    eax = MEM32(esp + 0x64);
    edx = MEM32(esp + 0x70);
    ecx = esp + 0x58;
    MEM32(esp + 0x5C) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = edi + 1;
    MEM32(esp + 0x5C) = edx;
    edx = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x68) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x003039A6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003039A6: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x46D194);
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x003039B6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003039B6: ;
    eax = MEM32(esp + 0x44);
    ecx = MEM32(esp + 0x78);
    edx = MEM32(esi);
    MEM32(esp + 0x84) = eax;
    eax = esp + 0x84;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = edi + 1;
    PUSH32(esp, eax);
    MEM32(esp + 0x90) = ecx;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC0); PUSH32(esp, 0x003039E4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003039E4: ;
    edx = MEM32(esp + 0x48);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    MEM32(esp + 0x48) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_00303900; /* jle: less or equal (signed <=) */

loc_003039F9: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(ebx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00303A18; /* je: equal / zero */

loc_00303A03: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00303A18; /* jne: not equal / not zero */

loc_00303A13: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303A18u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00303A18: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    MEM32(ebx + 0xC) = esi;
    edx = MEM32(ebx);
    PUSH32(esp, 4);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00303A2Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00303A2B: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x98); PUSH32(esp, 0x00303A39u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00303A39: ;
    ecx = MEM32(esp + 0x14);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303A42u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00303A42: ;
    ecx = MEM32(esp + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00303A61; /* je: equal / zero */

loc_00303A4C: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00303A61; /* jne: not equal / not zero */

loc_00303A5C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303A61u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00303A61: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303A67u); RECOMP_ABI_CALL(0x002A0DB0u, sub_002A0DB0); /* call 0x002A0DB0 */

loc_00303A67: ;
    ecx = MEM32(esp + 0x1C);
    edi = eax;
    esp = esp + 4;
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303A7Au); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00303A7A: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x3C);
    ecx = MEM32(edi + 0x20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303A87u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00303A87: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303A93u); RECOMP_ABI_CALL(0x00259CC0u, sub_00259CC0); /* call 0x00259CC0 */

loc_00303A93: ;
    edx = MEM32(esp + 0x28);
    ecx = MEM32(edx + 0x20);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303AA0u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00303AA0: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303AAAu); RECOMP_ABI_CALL(0x00259CC0u, sub_00259CC0); /* call 0x00259CC0 */

loc_00303AAA: ;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    ecx = MEM32(esi + 4);
    fp_top() = fp_top() + MEMF(esp + 0x1C); /* fadd dword ptr [esp + 0x1c] */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = 0x7FFFFF;
    eax = ecx;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00303ACF; /* jne: not equal / not zero */

loc_00303AC8: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303ACFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00303ACF: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00303AE3; /* jne: not equal / not zero */

loc_00303ADC: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303AE3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00303AE3: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00303AF9; /* jne: not equal / not zero */

loc_00303AF4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303AF9u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00303AF9: ;
    MEM32(esp + 0x50) = MEM32(esp + 0x50) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x50)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00303870; /* jne: not equal / not zero */

loc_00303B03: ;
    eax = MEM32(esp + 0x54);
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x40); /* fsub dword ptr [esp + 0x40] */
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esp + 0xC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0xC) = eax;
    if ((_fa != 0)) goto loc_00303850; /* jne: not equal / not zero */

loc_00303B26: ;
    ecx = esp + 0x98;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303B32u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_00303B32: ;
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    ecx = esp + 0x9C;
    MEM32(esp + 0x5C) = 0;
    MEM32(esp + 0x60) = 0;
    MEM32(esp + 0x64) = 0xBF99999Au;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303B5Bu); RECOMP_ABI_CALL(0x0023E410u, sub_0023E410); /* call 0x0023E410 */

loc_00303B5B: ;
    edx = esp + 0x98;
    PUSH32(esp, edx);
    eax = esp + 0x58;
    PUSH32(esp, eax);
    ecx = esp + 0xA0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303B74u); RECOMP_ABI_CALL(0x00242F50u, sub_00242F50); /* call 0x00242F50 */

loc_00303B74: ;
    ebx = MEM32(esp + 0x14);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303B7Fu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00303B7F: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303B85u); RECOMP_ABI_CALL(0x00287860u, sub_00287860); /* call 0x00287860 */

loc_00303B85: ;
    esp = esp + 4;
    edi = eax;
    PUSH32(esp, 0x42ADAC);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303B96u); RECOMP_ABI_CALL(0x002127B0u, sub_002127B0); /* call 0x002127B0 */

loc_00303B96: ;
    ecx = ebx;
    MEM32(edi + 0x30) = 0;
    MEM32(edi + 0x34) = 0x3F99999A;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303BABu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00303BAB: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303BB1u); RECOMP_ABI_CALL(0x002881E0u, sub_002881E0); /* call 0x002881E0 */

loc_00303BB1: ;
    esp = esp + 4;
    esi = eax;
    PUSH32(esp, 0x42AD90);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303BC2u); RECOMP_ABI_CALL(0x002127B0u, sub_002127B0); /* call 0x002127B0 */

loc_00303BC2: ;
    edx = MEM32(esi);
    eax = esp + 0x98;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x00303BD4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00303BD4: ;
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303BDCu); RECOMP_ABI_CALL(0x00259CC0u, sub_00259CC0); /* call 0x00259CC0 */

loc_00303BDC: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303BE6u); RECOMP_ABI_CALL(0x00259CC0u, sub_00259CC0); /* call 0x00259CC0 */

loc_00303BE6: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00303BF5; /* jne: not equal / not zero */

loc_00303BF0: ;
    eax = 0x3C806C;

loc_00303BF5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x42AD84);
    edx = esp + 0xE0;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303C0Du); RECOMP_ABI_CALL(0x003433E9u, sub_003433E9); /* call 0x003433E9 */

loc_00303C0D: ;
    esp = esp + 0x10;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303C17u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00303C17: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303C1Du); RECOMP_ABI_CALL(0x0028C8E0u, sub_0028C8E0); /* call 0x0028C8E0 */

loc_00303C1D: ;
    ebx = eax;
    esp = esp + 4;
    eax = esp + 0xD8;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303C31u); RECOMP_ABI_CALL(0x002127B0u, sub_002127B0); /* call 0x002127B0 */

loc_00303C31: ;
    eax = MEM32(esp + 0x10);
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(ebx + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00303C54; /* je: equal / zero */

loc_00303C3F: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00303C54; /* jne: not equal / not zero */

loc_00303C4F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303C54u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00303C54: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ebx + 0x14) = ecx;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303C62u); RECOMP_ABI_CALL(0x00288DA0u, sub_00288DA0); /* call 0x00288DA0 */

loc_00303C62: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00303C69; /* je: equal / zero */

loc_00303C66: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00303C69: ;
    edx = MEM32(ebp + 8);
    ecx = MEM32(edx + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00303C88; /* je: equal / zero */

loc_00303C73: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00303C88; /* jne: not equal / not zero */

loc_00303C83: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303C88u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00303C88: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x54) = ebx;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00303CA5; /* jne: not equal / not zero */

loc_00303C9E: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303CA5u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00303CA5: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00303CBC; /* jne: not equal / not zero */

loc_00303CB5: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303CBCu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00303CBC: ;
    ecx = MEM32(esp + 0x68);
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00303CD5; /* jne: not equal / not zero */

loc_00303CD0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303CD5u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00303CD5: ;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00303CEE; /* jne: not equal / not zero */

loc_00303CE9: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303CEEu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00303CEE: ;
    ecx = MEM32(esp + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00303D0B; /* je: equal / zero */

loc_00303CF6: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00303D0B; /* jne: not equal / not zero */

loc_00303D06: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303D0Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00303D0B: ;
    ecx = MEM32(esp + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00303D28; /* je: equal / zero */

loc_00303D13: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00303D28; /* jne: not equal / not zero */

loc_00303D23: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303D28u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00303D28: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(eax + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x7FFFFF (32-bit) */
    MEM32(eax + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00303D44; /* jne: not equal / not zero */

loc_00303D3D: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303D44u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00303D44: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00303518; /* je: equal / zero */

loc_00303D4C: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00303518; /* jne: not equal / not zero */

loc_00303D60: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303D67u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00303D67: ;
    goto loc_00303518;

loc_00303D6C: ;
    eax = 0; /* xor self */

loc_00303D6E: ;
    MEM32(0x5BC528) = eax;

loc_00303D73: ;
    edx = esp + 0xDC;
    PUSH32(esp, edx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303D82u); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_00303D82: ;
    ecx = esi;
    MEM32(edi) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303D8Bu); RECOMP_ABI_CALL(0x001B9E70u, sub_001B9E70); /* call 0x001B9E70 */

loc_00303D8B: ;
    ecx = MEM32(esp + 0x14);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303D94u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00303D94: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303D9Au); RECOMP_ABI_CALL(0x001E1C50u, sub_001E1C50); /* call 0x001E1C50 */

loc_00303D9A: ;
    esp = esp + 4;
    edi = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x00303DA9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00303DA9: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x00303DB7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00303DB7: ;
    PUSH32(esp, edi);
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(eax + 0x18);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303DC9u); RECOMP_ABI_CALL(0x0021B0A0u, sub_0021B0A0); /* call 0x0021B0A0 */

loc_00303DC9: ;
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303DD3u); RECOMP_ABI_CALL(0x001F52B0u, sub_001F52B0); /* call 0x001F52B0 */

loc_00303DD3: ;
    ecx = MEM32(edi + 4);
    esp = esp + 4;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00303DED; /* jne: not equal / not zero */

loc_00303DE6: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303DEDu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00303DED: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(edx + 0x10);
    edi = MEM32(esp + 0x24);
    ecx = MEM32(eax + edi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x00303E01u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00303E01: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303E0Bu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00303E0B: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(eax + 8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    MEM32(esp + 0x24) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00303545; /* jl: less (signed <) */

loc_00303E1F: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00303E2A; /* je: equal / zero */

loc_00303E27: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00303E2A: ;
    edi = MEM32(ebp + 8);
    ecx = MEM32(edi + 0x5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00303E4C; /* je: equal / zero */

loc_00303E34: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00303E4C; /* jne: not equal / not zero */

loc_00303E43: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303E48u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00303E48: ;
    eax = MEM32(esp + 0x10);

loc_00303E4C: ;
    ecx = MEM32(esp + 0x18);
    MEM32(edi + 0x5C) = eax;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00303E95; /* jne: not equal / not zero */

loc_00303E59: ;
    edx = ecx;
    eax = MEM32(edx + 0x10);
    ecx = MEM32(eax);
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303E6Au); RECOMP_ABI_CALL(0x00298FD0u, sub_00298FD0); /* call 0x00298FD0 */

loc_00303E6A: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00303E73; /* je: equal / zero */

loc_00303E70: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00303E73: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00303E8E; /* je: equal / zero */

loc_00303E77: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00303E8E; /* jne: not equal / not zero */

loc_00303E87: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303E8Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00303E8E: ;
    esi = edi;
    goto loc_00303F10;

loc_00303E95: ;
    ecx = MEM32(esp + 0x14);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303E9Eu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00303E9E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00303EBB; /* je: equal / zero */

loc_00303EA4: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00303EBB; /* jne: not equal / not zero */

loc_00303EB4: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303EBBu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00303EBB: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303EC1u); RECOMP_ABI_CALL(0x001E1C50u, sub_001E1C50); /* call 0x001E1C50 */

loc_00303EC1: ;
    edi = MEM32(ebp + 8);
    esi = eax;
    eax = MEM32(edi + 0x20);
    edx = MEM32(esi);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x00303ED4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00303ED4: ;
    eax = MEM32(edi + 0x24);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00303EDFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00303EDF: ;
    eax = MEM32(edi + 0x60);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x00303EEAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00303EEA: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x65);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00303EF3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00303EF3: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x00303EFAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00303EFA: ;
    ecx = MEM32(esi + 0x30);
    edi = MEM32(esi + 0x34);
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

loc_00303F10: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00303F17; /* je: equal / zero */

loc_00303F14: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00303F17: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00303F36; /* je: equal / zero */

loc_00303F21: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00303F36; /* jne: not equal / not zero */

loc_00303F31: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303F36u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00303F36: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    ecx = MEM32(ebp + 8);
    MEM32(ecx + 0x58) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_00303F57; /* je: equal / zero */

loc_00303F40: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00303F57; /* jne: not equal / not zero */

loc_00303F50: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303F57u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00303F57: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00303F72; /* je: equal / zero */

loc_00303F5B: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00303F72; /* jne: not equal / not zero */

loc_00303F6B: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303F72u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00303F72: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00303F92; /* je: equal / zero */

loc_00303F7A: ;
    edx = MEM32(eax + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x7FFFFF (32-bit) */
    MEM32(eax + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00303F92; /* jne: not equal / not zero */

loc_00303F8B: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303F92u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00303F92: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(eax + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x7FFFFF (32-bit) */
    MEM32(eax + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00303FAE; /* jne: not equal / not zero */

loc_00303FA7: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303FAEu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00303FAE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00303FC0
 * Original: 0x00303FC0 - 0x00303FCC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303FC0(void)
{

loc_00303FC0: ;
    PUSH32(esp, 0x3031A0);
    PUSH32(esp, 0x00303FCAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00303FCA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00303FD0
 * Original: 0x00303FD0 - 0x00304010 (64 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303FD0(void)
{

loc_00303FD0: ;
    PUSH32(esp, 0x304010);
    PUSH32(esp, 0x00303FDAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00303FDA: ;
    PUSH32(esp, 0x303090);
    PUSH32(esp, 0x00303FE4u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00303FE4: ;
    PUSH32(esp, 0x302F80);
    PUSH32(esp, 0x00303FEEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00303FEE: ;
    PUSH32(esp, 0x3031A0);
    PUSH32(esp, 0x00303FF8u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00303FF8: ;
    PUSH32(esp, 0x302C40);
    PUSH32(esp, 0x00304002u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00304002: ;
    PUSH32(esp, 0x303000);
    PUSH32(esp, 0x0030400Cu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0030400C: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00304010
 * Original: 0x00304010 - 0x00304057 (71 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00304010: ;
    SET_LO8(eax, MEM8(0x5BEC3E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00304020; /* jne: not equal / not zero */

loc_00304019: ;
    MEM8(0x5BEC3E) = 1;

loc_00304020: ;
    PUSH32(esp, 0x476574);
    PUSH32(esp, 0);
    PUSH32(esp, 0x302420);
    PUSH32(esp, 0x302E60);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x42ADDC);
    PUSH32(esp, 0x302A30);
    PUSH32(esp, 0x1A4460);
    PUSH32(esp, 0x226510);
    PUSH32(esp, 0x5BEC18);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00304053u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00304053: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00304060
 * Original: 0x00304060 - 0x003040A7 (71 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00304060: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0030407F; /* je: equal / zero */

loc_0030406A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0030407F; /* jne: not equal / not zero */

loc_0030407A: ;
    PUSH32(esp, 0x0030407Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0030407F: ;
    eax = MEM32(esp + 0xC);
    edi = MEM32(eax);
    PUSH32(esp, 0x3031A0);
    PUSH32(esp, 0x0030408Fu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0030408F: ;
    ecx = MEM32(0x5BEC1C);
    esp = esp + 4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030409Eu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0030409E: ;
    MEM32(esi) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003040B0
 * Original: 0x003040B0 - 0x003042AF (511 bytes, 200 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003040B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003040B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 0xC) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_003042A6; /* je: equal / zero */

loc_003040C6: ;
    eax = MEM32(0x5BEC30);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003040D3u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_003040D3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003042A6; /* je: equal / zero */

loc_003040DB: ;
    ebx = MEM32(esi + 0x48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003042A6; /* je: equal / zero */

loc_003040E6: ;
    ecx = MEM32(edi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003040FE; /* je: equal / zero */

loc_003040ED: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003040F5u); RECOMP_ABI_CALL(0x00302A00u, sub_00302A00); /* call 0x00302A00 */

loc_003040F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003042A6; /* jne: not equal / not zero */

loc_003040FE: ;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, ebp);
    if (TEST_Z(_fa, _fb)) goto loc_00304164; /* je: equal / zero */

loc_00304106: ;
    ecx = MEM32(eax + 8);
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00304164; /* jle: less or equal (signed <=) */

loc_0030410F: ;
    /* nop */

loc_00304110: ;
    ecx = MEM32(eax + 0x10);
    edi = MEM32(ecx + ebp * 4);
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0030411Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030411D: ;
    eax = MEM32(eax + 0x1C);
    esi = ebx;

loc_00304122: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00304146; /* jne: not equal / not zero */

loc_0030412A: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00304142; /* je: equal / zero */

loc_0030412E: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00304146; /* jne: not equal / not zero */

loc_00304138: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00304122; /* jne: not equal / not zero */

loc_00304142: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_0030414B;

loc_00304146: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */

loc_0030414B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003041A1; /* je: equal / zero */

loc_0030414F: ;
    eax = MEM32(esp + 0x10);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x14)) >> 32) & 1);
    eax = eax + 0x14;
    eax = MEM32(eax);
    ecx = MEM32(eax + 8);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00304110; /* jl: less (signed <) */

loc_00304160: ;
    edi = MEM32(esp + 0x10);

loc_00304164: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0030416Au); RECOMP_ABI_CALL(0x001F7AB0u, sub_001F7AB0); /* call 0x001F7AB0 */

loc_0030416A: ;
    esi = eax;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0030429C; /* je: equal / zero */

loc_00304177: ;
    ecx = edi;
    PUSH32(esp, 0x0030417Eu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0030417E: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00304186u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00304186: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0030419D; /* je: equal / zero */

loc_0030418C: ;
    eax = MEM32(0x5BEC38);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00304199u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00304199: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003041AC; /* jne: not equal / not zero */

loc_0030419D: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    goto loc_003041AF;

loc_003041A1: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = edi;
    edi = MEM32(esp + 0x10);
    goto loc_003041FA;

loc_003041AC: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003041AF: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_003041C6; /* jne: not equal / not zero */

loc_003041BF: ;
    ecx = esi;
    PUSH32(esp, 0x003041C6u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_003041C6: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x003041CDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003041CD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003041FA; /* je: equal / zero */

loc_003041D1: ;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    ebx = edi + 0x14;
    if (TEST_NZ(_fa, _fb)) goto loc_003041F2; /* jne: not equal / not zero */

loc_003041DB: ;
    ecx = edi;
    PUSH32(esp, 0x003041E2u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_003041E2: ;
    MEM32(esp + 0x10) = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x003041F2u); RECOMP_ABI_CALL(0x00303100u, sub_00303100); /* call 0x00303100 */

loc_003041F2: ;
    ecx = MEM32(ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003041FAu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_003041FA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00304201; /* je: equal / zero */

loc_003041FE: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00304201: ;
    ebp = MEM32(esp + 0x18);
    ecx = MEM32(ebp + 0x4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00304221; /* je: equal / zero */

loc_0030420C: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00304221; /* jne: not equal / not zero */

loc_0030421C: ;
    PUSH32(esp, 0x00304221u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00304221: ;
    MEM32(ebp + 0x4C) = esi;
    eax = MEM32(edi + 0xC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0030422Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030422F: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00304237u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00304237: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00304285; /* je: equal / zero */

loc_0030423B: ;
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    ebx = edi + 0x10;
    if (TEST_NZ(_fa, _fb)) goto loc_0030425C; /* jne: not equal / not zero */

loc_00304245: ;
    ecx = edi;
    PUSH32(esp, 0x0030424Cu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0030424C: ;
    MEM32(esp + 0x18) = eax;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0030425Cu); RECOMP_ABI_CALL(0x00304060u, sub_00304060); /* call 0x00304060 */

loc_0030425C: ;
    ecx = MEM32(ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00304264u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00304264: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0030427B; /* jne: not equal / not zero */

loc_00304274: ;
    ecx = esi;
    PUSH32(esp, 0x0030427Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0030427B: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00304285: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0030429C; /* jne: not equal / not zero */

loc_00304295: ;
    ecx = esi;
    PUSH32(esp, 0x0030429Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0030429C: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_003042A6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003042B0
 * Original: 0x003042B0 - 0x003042BC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003042B0(void)
{

loc_003042B0: ;
    PUSH32(esp, 0x304BB0);
    PUSH32(esp, 0x003042BAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_003042BA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003042C0
 * Original: 0x003042C0 - 0x003042C6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003042C0(void)
{

loc_003042C0: ;
    eax = MEM32(0x5BEC74);
    esp += 4; return; /* ret */

}

/**
 * sub_003042D0
 * Original: 0x003042D0 - 0x0030439A (202 bytes, 69 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003042D0(void)
{

loc_003042D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BEC74);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x003042E0u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_003042E0: ;
    PUSH32(esp, 9);
    PUSH32(esp, 0x4765F8);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x003042F0u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_003042F0: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x003042F8u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_003042F8: ;
    SET_LO8(ebx, 0); /* xor self */
    MEM16(eax + 0x14) = 4;
    MEM8(eax + 0x26) = LO8(ebx);
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0030430Eu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0030430E: ;
    ecx = edi + 2;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(eax + 0x26) = LO8(ebx);
    PUSH32(esp, 0x0030431Cu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0030431C: ;
    edx = edi + 3;
    PUSH32(esp, edx);
    ecx = esi;
    MEM16(eax + 0x14) = 4;
    MEM8(eax + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00304330u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00304330: ;
    MEM8(eax + 0x26) = LO8(ebx);
    eax = edi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0030433Eu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0030433E: ;
    ecx = edi + 5;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM16(eax + 0x14) = 4;
    MEM8(eax + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00304352u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00304352: ;
    edx = edi + 6;
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(eax + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00304360u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00304360: ;
    MEM8(eax + 0x26) = LO8(ebx);
    eax = edi + 7;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0030436Eu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0030436E: ;
    ecx = edi + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(eax + 0x26) = LO8(ebx);
    PUSH32(esp, 0x0030437Cu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0030437C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4765D4);
    PUSH32(esp, 0x4765B0);
    PUSH32(esp, 0x47658C);
    ecx = esi;
    MEM8(eax + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00304396u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00304396: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
