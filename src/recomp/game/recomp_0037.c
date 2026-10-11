/**
 * X-Men Legends - Recompiled code chunk 37
 * Functions: 250 (0x001A48A0 - 0x001A7D60)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001A48A0
 * Original: 0x001A48A0 - 0x001A48F1 (81 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A48A0(void)
{

loc_001A48A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BA8D4);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001A48B0u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001A48B0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x461C4C);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001A48C0u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001A48C0: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001A48C8u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001A48C8: ;
    ebx = eax;
    PUSH32(esp, 0x001A48CFu); RECOMP_ABI_CALL(0x001F33C0u, sub_001F33C0); /* call 0x001F33C0 */

loc_001A48CF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x461C48);
    PUSH32(esp, 0x461C44);
    PUSH32(esp, 0x461C40);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x34) = 1;
    PUSH32(esp, 0x001A48EDu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001A48ED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4900
 * Original: 0x001A4900 - 0x001A496A (106 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4900(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A4900: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x5BA8DC);
    PUSH32(esp, 0x3E226C);
    ecx = edi;
    PUSH32(esp, 0x001A4915u); RECOMP_ABI_CALL(0x001EA4A0u, sub_001EA4A0); /* call 0x001EA4A0 */

loc_001A4915: ;
    ecx = MEM32(edi + 0x28);
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001A4920u); RECOMP_ABI_CALL(0x001E8890u, sub_001E8890); /* call 0x001E8890 */

loc_001A4920: ;
    ebx = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x001A492Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A492B: ;
    esi = eax;
    PUSH32(esp, 0x001A4932u); RECOMP_ABI_CALL(0x002222F0u, sub_002222F0); /* call 0x002222F0 */

loc_001A4932: ;
    MEM32(esi + 0x3C) = eax;
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(esi + 0x38) = eax;
    MEM8(esi + 0x42) = LO8(eax);
    MEM32(esi + 0x1C) = 0x5BA83C;
    PUSH32(esp, 0x001A494Du); RECOMP_ABI_CALL(0x002093F0u, sub_002093F0); /* call 0x002093F0 */

loc_001A494D: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_001A4967; /* jne: not equal / not zero */

loc_001A495E: ;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_001A4967: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4970
 * Original: 0x001A4970 - 0x001A4975 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4970(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A4970: ;
    g_seh_ebp = ebp; sub_001E6AB0(); return; /* tail jmp 0x001E6AB0 */

}

/**
 * sub_001A4980
 * Original: 0x001A4980 - 0x001A49F9 (121 bytes, 42 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4980(void)
{

loc_001A4980: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BA8E0);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001A4990u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001A4990: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x461C8C);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001A49A0u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001A49A0: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001A49A8u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001A49A8: ;
    ebx = eax;
    PUSH32(esp, 0x001A49AFu); RECOMP_ABI_CALL(0x00223E00u, sub_00223E00); /* call 0x00223E00 */

loc_001A49AF: ;
    MEM32(ebx + 0x38) = eax;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebx + 0x34) = 1;
    PUSH32(esp, 0x001A49C1u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001A49C1: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x001A49CAu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_001A49CA: ;
    ecx = edi + 3;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001A49D5u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001A49D5: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x001A49DEu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_001A49DE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x461C78);
    PUSH32(esp, 0x461C64);
    PUSH32(esp, 0x461C50);
    ecx = esi;
    PUSH32(esp, 0x001A49F5u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001A49F5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4A00
 * Original: 0x001A4A00 - 0x001A4A61 (97 bytes, 33 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4A00(void)
{

loc_001A4A00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BA8E8);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001A4A10u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001A4A10: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x461CC4);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001A4A20u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001A4A20: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001A4A28u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001A4A28: ;
    ecx = MEM32(0x5BC554);
    edx = edi + 1;
    MEM32(eax + 0x38) = ecx;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001A4A3Cu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001A4A3C: ;
    ebx = eax;
    PUSH32(esp, 0x001A4A43u); RECOMP_ABI_CALL(0x00223E50u, sub_00223E50); /* call 0x00223E50 */

loc_001A4A43: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x461CB8);
    PUSH32(esp, 0x461CAC);
    PUSH32(esp, 0x461CA0);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x001A4A5Du); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001A4A5D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4A70
 * Original: 0x001A4A70 - 0x001A4AD9 (105 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001A4A70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */

loc_001A4A70: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BA8EC);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001A4A80u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001A4A80: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x461CE8);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001A4A90u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001A4A90: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001A4A98u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001A4A98: ;
    ebp = eax;
    PUSH32(esp, 0x001A4A9Fu); RECOMP_ABI_CALL(0x00223E00u, sub_00223E00); /* call 0x00223E00 */

loc_001A4A9F: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x26) = 0;
    PUSH32(esp, 0x001A4AB1u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001A4AB1: ;
    ecx = MEM32(0x5BC554);
    PUSH32(esp, edi);
    PUSH32(esp, 0x461CE0);
    PUSH32(esp, 0x461CD8);
    MEM32(eax + 0x38) = ecx;
    PUSH32(esp, 0x461CD0);
    ecx = esi;
    MEM8(eax + 0x26) = 0;
    PUSH32(esp, 0x001A4AD5u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001A4AD5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4AE0
 * Original: 0x001A4AE0 - 0x001A4B2D (77 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4AE0(void)
{

loc_001A4AE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BA8F0);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001A4AF0u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001A4AF0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x461CFC);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001A4B00u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001A4B00: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001A4B08u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001A4B08: ;
    ebx = eax;
    PUSH32(esp, 0x001A4B0Fu); RECOMP_ABI_CALL(0x001F33C0u, sub_001F33C0); /* call 0x001F33C0 */

loc_001A4B0F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x461CF8);
    PUSH32(esp, 0x461CF4);
    PUSH32(esp, 0x461CF0);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x001A4B29u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001A4B29: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4B30
 * Original: 0x001A4B30 - 0x001A4B9A (106 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4B30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A4B30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x5BA8F4);
    PUSH32(esp, 0x3E226C);
    ecx = edi;
    PUSH32(esp, 0x001A4B45u); RECOMP_ABI_CALL(0x001EA4A0u, sub_001EA4A0); /* call 0x001EA4A0 */

loc_001A4B45: ;
    ecx = MEM32(edi + 0x28);
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001A4B50u); RECOMP_ABI_CALL(0x001E8890u, sub_001E8890); /* call 0x001E8890 */

loc_001A4B50: ;
    ebx = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x001A4B5Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A4B5B: ;
    esi = eax;
    PUSH32(esp, 0x001A4B62u); RECOMP_ABI_CALL(0x002222F0u, sub_002222F0); /* call 0x002222F0 */

loc_001A4B62: ;
    MEM32(esi + 0x3C) = eax;
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(esi + 0x38) = eax;
    MEM8(esi + 0x42) = LO8(eax);
    MEM32(esi + 0x1C) = 0x5BA7B0;
    PUSH32(esp, 0x001A4B7Du); RECOMP_ABI_CALL(0x002093F0u, sub_002093F0); /* call 0x002093F0 */

loc_001A4B7D: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_001A4B97; /* jne: not equal / not zero */

loc_001A4B8E: ;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_001A4B97: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4BA0
 * Original: 0x001A4BA0 - 0x001A4BA5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4BA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A4BA0: ;
    g_seh_ebp = ebp; sub_001E6930(); return; /* tail jmp 0x001E6930 */

}

/**
 * sub_001A4BB0
 * Original: 0x001A4BB0 - 0x001A4BFB (75 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4BB0(void)
{

loc_001A4BB0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BA8FC);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001A4BBFu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001A4BBF: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x461D18);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001A4BCFu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001A4BCF: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001A4BDAu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001A4BDA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x461D10);
    PUSH32(esp, 0x461D08);
    PUSH32(esp, 0x461D00);
    ecx = esi;
    MEM32(eax + 0x34) = 0x270;
    PUSH32(esp, 0x001A4BF8u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001A4BF8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4C00
 * Original: 0x001A4C00 - 0x001A4C05 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4C00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A4C00: ;
    g_seh_ebp = ebp; sub_001E6A50(); return; /* tail jmp 0x001E6A50 */

}

/**
 * sub_001A4C10
 * Original: 0x001A4C10 - 0x001A4C16 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4C10(void)
{

loc_001A4C10: ;
    eax = MEM32(0x5BA900);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4C20
 * Original: 0x001A4C20 - 0x001A4C59 (57 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4C20(void)
{

loc_001A4C20: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BA900);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001A4C2Fu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001A4C2F: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x461D44);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001A4C3Fu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001A4C3F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x461D38);
    PUSH32(esp, 0x461D2C);
    PUSH32(esp, 0x461D20);
    ecx = esi;
    PUSH32(esp, 0x001A4C56u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001A4C56: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4C60
 * Original: 0x001A4C60 - 0x001A4C83 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A4C60: ;
    eax = MEM32(0x5BA904);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A4C82; /* jne: not equal / not zero */

loc_001A4C69: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A4C74u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001A4C74: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A4C7Au); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001A4C7A: ;
    esp = esp + 8;
    MEM32(0x5BA904) = eax;

loc_001A4C82: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A4C90
 * Original: 0x001A4C90 - 0x001A4C9C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4C90(void)
{

loc_001A4C90: ;
    PUSH32(esp, 0x1A76C0);
    PUSH32(esp, 0x001A4C9Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A4C9A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4CA0
 * Original: 0x001A4CA0 - 0x001A4D09 (105 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4CA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A4CA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x5BA904);
    PUSH32(esp, 0x3E226C);
    ecx = edi;
    PUSH32(esp, 0x001A4CB5u); RECOMP_ABI_CALL(0x001EA4A0u, sub_001EA4A0); /* call 0x001EA4A0 */

loc_001A4CB5: ;
    ecx = MEM32(edi + 0x28);
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001A4CC0u); RECOMP_ABI_CALL(0x001E8890u, sub_001E8890); /* call 0x001E8890 */

loc_001A4CC0: ;
    ebx = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x001A4CCBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A4CCB: ;
    esi = eax;
    PUSH32(esp, 0x001A4CD2u); RECOMP_ABI_CALL(0x002459E0u, sub_002459E0); /* call 0x002459E0 */

loc_001A4CD2: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x38) = 0;
    MEM32(esi + 0x1C) = 0x5BA830;
    PUSH32(esp, 0x001A4CECu); RECOMP_ABI_CALL(0x002093F0u, sub_002093F0); /* call 0x002093F0 */

loc_001A4CEC: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_001A4D06; /* jne: not equal / not zero */

loc_001A4CFD: ;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_001A4D06: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4D10
 * Original: 0x001A4D10 - 0x001A4D33 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4D10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A4D10: ;
    eax = MEM32(0x5BA90C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A4D32; /* jne: not equal / not zero */

loc_001A4D19: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A4D24u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001A4D24: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A4D2Au); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001A4D2A: ;
    esp = esp + 8;
    MEM32(0x5BA90C) = eax;

loc_001A4D32: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A4D40
 * Original: 0x001A4D40 - 0x001A4D4C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4D40(void)
{

loc_001A4D40: ;
    PUSH32(esp, 0x1A9880);
    PUSH32(esp, 0x001A4D4Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A4D4A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4D50
 * Original: 0x001A4D50 - 0x001A4D73 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A4D50: ;
    eax = MEM32(0x5BA910);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A4D72; /* jne: not equal / not zero */

loc_001A4D59: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A4D64u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001A4D64: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A4D6Au); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001A4D6A: ;
    esp = esp + 8;
    MEM32(0x5BA910) = eax;

loc_001A4D72: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A4D80
 * Original: 0x001A4D80 - 0x001A4D8C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4D80(void)
{

loc_001A4D80: ;
    PUSH32(esp, 0x1A8F10);
    PUSH32(esp, 0x001A4D8Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A4D8A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4D90
 * Original: 0x001A4D90 - 0x001A4DB3 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A4D90: ;
    eax = MEM32(0x5BA914);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A4DB2; /* jne: not equal / not zero */

loc_001A4D99: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A4DA4u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001A4DA4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A4DAAu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001A4DAA: ;
    esp = esp + 8;
    MEM32(0x5BA914) = eax;

loc_001A4DB2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A4DC0
 * Original: 0x001A4DC0 - 0x001A4DC6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4DC0(void)
{

loc_001A4DC0: ;
    eax = MEM32(0x5BA914);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4DD0
 * Original: 0x001A4DD0 - 0x001A4DDC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4DD0(void)
{

loc_001A4DD0: ;
    PUSH32(esp, 0x1A77A0);
    PUSH32(esp, 0x001A4DDAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A4DDA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4DE0
 * Original: 0x001A4DE0 - 0x001A4E19 (57 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4DE0(void)
{

loc_001A4DE0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BA914);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001A4DEFu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001A4DEF: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x461D5C);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001A4DFFu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001A4DFF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x461D58);
    PUSH32(esp, 0x461D54);
    PUSH32(esp, 0x461D50);
    ecx = esi;
    PUSH32(esp, 0x001A4E16u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001A4E16: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4E20
 * Original: 0x001A4E20 - 0x001A4E26 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4E20(void)
{

loc_001A4E20: ;
    eax = MEM32(0x5BA920);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4E30
 * Original: 0x001A4E30 - 0x001A4E3C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4E30(void)
{

loc_001A4E30: ;
    PUSH32(esp, 0x1A7800);
    PUSH32(esp, 0x001A4E3Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A4E3A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4E40
 * Original: 0x001A4E40 - 0x001A4E79 (57 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4E40(void)
{

loc_001A4E40: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BA920);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001A4E4Fu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001A4E4F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x461D6C);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001A4E5Fu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001A4E5F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x461D68);
    PUSH32(esp, 0x461D64);
    PUSH32(esp, 0x461D60);
    ecx = esi;
    PUSH32(esp, 0x001A4E76u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001A4E76: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4E80
 * Original: 0x001A4E80 - 0x001A4EB9 (57 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4E80(void)
{

loc_001A4E80: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BA924);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001A4E8Fu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001A4E8F: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x461D94);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001A4E9Fu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001A4E9F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x461D88);
    PUSH32(esp, 0x461D7C);
    PUSH32(esp, 0x461D70);
    ecx = esi;
    PUSH32(esp, 0x001A4EB6u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001A4EB6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4EC0
 * Original: 0x001A4EC0 - 0x001A4EC6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4EC0(void)
{

loc_001A4EC0: ;
    eax = MEM32(0x5BA930);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4ED0
 * Original: 0x001A4ED0 - 0x001A4EDC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4ED0(void)
{

loc_001A4ED0: ;
    PUSH32(esp, 0x1A78E0);
    PUSH32(esp, 0x001A4EDAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A4EDA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4EE0
 * Original: 0x001A4EE0 - 0x001A4F19 (57 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4EE0(void)
{

loc_001A4EE0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BA930);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001A4EEFu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001A4EEF: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x461DAC);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001A4EFFu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001A4EFF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x461DA8);
    PUSH32(esp, 0x461DA4);
    PUSH32(esp, 0x461DA0);
    ecx = esi;
    PUSH32(esp, 0x001A4F16u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001A4F16: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4F20
 * Original: 0x001A4F20 - 0x001A4F59 (57 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4F20(void)
{

loc_001A4F20: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BA934);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001A4F2Fu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001A4F2F: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x461DD4);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001A4F3Fu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001A4F3F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x461DC8);
    PUSH32(esp, 0x461DBC);
    PUSH32(esp, 0x461DB0);
    ecx = esi;
    PUSH32(esp, 0x001A4F56u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001A4F56: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4F60
 * Original: 0x001A4F60 - 0x001A4F65 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4F60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A4F60: ;
    g_seh_ebp = ebp; sub_001E6990(); return; /* tail jmp 0x001E6990 */

}

/**
 * sub_001A4F70
 * Original: 0x001A4F70 - 0x001A4FA9 (57 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4F70(void)
{

loc_001A4F70: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BA938);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001A4F7Fu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001A4F7F: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x461DF8);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001A4F8Fu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001A4F8F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x461DF0);
    PUSH32(esp, 0x461DE8);
    PUSH32(esp, 0x461DE0);
    ecx = esi;
    PUSH32(esp, 0x001A4FA6u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001A4FA6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001A4FB0
 * Original: 0x001A4FB0 - 0x001A4FFD (77 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A4FB0(void)
{

loc_001A4FB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BA93C);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001A4FC0u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001A4FC0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x461E0C);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001A4FD0u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001A4FD0: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001A4FD8u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001A4FD8: ;
    ebx = eax;
    PUSH32(esp, 0x001A4FDFu); RECOMP_ABI_CALL(0x0023B720u, sub_0023B720); /* call 0x0023B720 */

loc_001A4FDF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x461E08);
    PUSH32(esp, 0x461E04);
    PUSH32(esp, 0x461E00);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x001A4FF9u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001A4FF9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A5000
 * Original: 0x001A5000 - 0x001A506E (110 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A5000: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BA940);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001A5010u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001A5010: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x461E28);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001A5020u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001A5020: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001A502Bu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001A502B: ;
    ebx = eax;
    eax = MEM32(0x5BA93C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A5050; /* jne: not equal / not zero */

loc_001A5036: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001A5042u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001A5042: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A5048u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001A5048: ;
    esp = esp + 8;
    MEM32(0x5BA93C) = eax;

loc_001A5050: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x461E20);
    PUSH32(esp, 0x461E18);
    PUSH32(esp, 0x461E10);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x001A506Au); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001A506A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A5070
 * Original: 0x001A5070 - 0x001A50DE (110 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A5070: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BA944);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001A5080u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001A5080: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x461E48);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001A5090u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001A5090: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001A509Bu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001A509B: ;
    ebx = eax;
    eax = MEM32(0x5BA93C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A50C0; /* jne: not equal / not zero */

loc_001A50A6: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001A50B2u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001A50B2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A50B8u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001A50B8: ;
    esp = esp + 8;
    MEM32(0x5BA93C) = eax;

loc_001A50C0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x461E40);
    PUSH32(esp, 0x461E38);
    PUSH32(esp, 0x461E30);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x001A50DAu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001A50DA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A50E0
 * Original: 0x001A50E0 - 0x001A512D (77 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A50E0(void)
{

loc_001A50E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BA948);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001A50F0u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001A50F0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x461E5C);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001A5100u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001A5100: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001A5108u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001A5108: ;
    ebx = eax;
    PUSH32(esp, 0x001A510Fu); RECOMP_ABI_CALL(0x0023B790u, sub_0023B790); /* call 0x0023B790 */

loc_001A510F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x461E58);
    PUSH32(esp, 0x461E54);
    PUSH32(esp, 0x461E50);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x001A5129u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001A5129: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A5130
 * Original: 0x001A5130 - 0x001A519E (110 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A5130: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BA94C);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001A5140u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001A5140: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x461E78);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001A5150u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001A5150: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001A515Bu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001A515B: ;
    ebx = eax;
    eax = MEM32(0x5BA948);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A5180; /* jne: not equal / not zero */

loc_001A5166: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001A5172u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001A5172: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A5178u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001A5178: ;
    esp = esp + 8;
    MEM32(0x5BA948) = eax;

loc_001A5180: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x461E70);
    PUSH32(esp, 0x461E68);
    PUSH32(esp, 0x461E60);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x001A519Au); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001A519A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A51A0
 * Original: 0x001A51A0 - 0x001A51C8 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A51A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A51A0: ;
    eax = MEM32(0x5BA950);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A51C7; /* jne: not equal / not zero */

loc_001A51A9: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x461E90);
    PUSH32(esp, 0x461E80);
    PUSH32(esp, 0x3E259C);
    PUSH32(esp, 0x001A51BFu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_001A51BF: ;
    esp = esp + 0x10;
    MEM32(0x5BA950) = eax;

loc_001A51C7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A51D0
 * Original: 0x001A51D0 - 0x001A51D6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A51D0(void)
{

loc_001A51D0: ;
    eax = MEM32(0x5BC374);
    esp += 4; return; /* ret */

}

/**
 * sub_001A51E0
 * Original: 0x001A51E0 - 0x001A526B (139 bytes, 47 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A51E0(void)
{

loc_001A51E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BA954);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001A51F1u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001A51F1: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x461EDC);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001A5201u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001A5201: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001A5209u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001A5209: ;
    ebx = eax;
    PUSH32(esp, 0x001A5210u); RECOMP_ABI_CALL(0x002230E0u, sub_002230E0); /* call 0x002230E0 */

loc_001A5210: ;
    MEM32(ebx + 0x38) = eax;
    eax = edi + 2;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001A521Eu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001A521E: ;
    ecx = esp + 0xC;
    ebx = eax;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x001A5234u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_001A5234: ;
    edx = edi + 4;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebx + 0x34) = 0x1A51A0;
    PUSH32(esp, 0x001A5246u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001A5246: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x001A524Fu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_001A524F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x461EC8);
    PUSH32(esp, 0x461EB4);
    PUSH32(esp, 0x461EA0);
    ecx = esi;
    PUSH32(esp, 0x001A5266u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001A5266: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A5270
 * Original: 0x001A5270 - 0x001A5293 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A5270: ;
    eax = MEM32(0x5BA958);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A5292; /* jne: not equal / not zero */

loc_001A5279: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A5284u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001A5284: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A528Au); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001A528A: ;
    esp = esp + 8;
    MEM32(0x5BA958) = eax;

loc_001A5292: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A52A0
 * Original: 0x001A52A0 - 0x001A52AC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A52A0(void)
{

loc_001A52A0: ;
    PUSH32(esp, 0x1A9F50);
    PUSH32(esp, 0x001A52AAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A52AA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A52B0
 * Original: 0x001A52B0 - 0x001A52D3 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A52B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A52B0: ;
    eax = MEM32(0x5BA95C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A52D2; /* jne: not equal / not zero */

loc_001A52B9: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A52C4u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001A52C4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A52CAu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001A52CA: ;
    esp = esp + 8;
    MEM32(0x5BA95C) = eax;

loc_001A52D2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A52E0
 * Original: 0x001A52E0 - 0x001A5303 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A52E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A52E0: ;
    eax = MEM32(0x5BA964);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A5302; /* jne: not equal / not zero */

loc_001A52E9: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A52F4u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001A52F4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A52FAu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001A52FA: ;
    esp = esp + 8;
    MEM32(0x5BA964) = eax;

loc_001A5302: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A5310
 * Original: 0x001A5310 - 0x001A531C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5310(void)
{

loc_001A5310: ;
    PUSH32(esp, 0x1A9B00);
    PUSH32(esp, 0x001A531Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A531A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A5320
 * Original: 0x001A5320 - 0x001A538E (110 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A5320: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BA964);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001A5330u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001A5330: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x461EFC);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001A5340u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001A5340: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001A5348u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001A5348: ;
    ebx = eax;
    eax = MEM32(0x5BA95C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A536C; /* jne: not equal / not zero */

loc_001A5353: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A535Eu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001A535E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A5364u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001A5364: ;
    esp = esp + 8;
    MEM32(0x5BA95C) = eax;

loc_001A536C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x461EF8);
    PUSH32(esp, 0x461EF4);
    PUSH32(esp, 0x461EF0);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x34) = 1;
    PUSH32(esp, 0x001A538Au); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001A538A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A5390
 * Original: 0x001A5390 - 0x001A53DD (77 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5390(void)
{

loc_001A5390: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BA968);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001A53A0u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001A53A0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x461F0C);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001A53B0u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001A53B0: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001A53B8u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001A53B8: ;
    ebx = eax;
    PUSH32(esp, 0x001A53BFu); RECOMP_ABI_CALL(0x00222F00u, sub_00222F00); /* call 0x00222F00 */

loc_001A53BF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x461F08);
    PUSH32(esp, 0x461F04);
    PUSH32(esp, 0x461F00);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x001A53D9u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001A53D9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A53E0
 * Original: 0x001A53E0 - 0x001A544E (110 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A53E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A53E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BA96C);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001A53F0u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001A53F0: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x461F28);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001A5400u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001A5400: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001A540Bu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001A540B: ;
    ebx = eax;
    eax = MEM32(0x5BA968);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A5430; /* jne: not equal / not zero */

loc_001A5416: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001A5422u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001A5422: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A5428u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001A5428: ;
    esp = esp + 8;
    MEM32(0x5BA968) = eax;

loc_001A5430: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x461F20);
    PUSH32(esp, 0x461F18);
    PUSH32(esp, 0x461F10);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x001A544Au); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001A544A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A5450
 * Original: 0x001A5450 - 0x001A545C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5450(void)
{

loc_001A5450: ;
    PUSH32(esp, 0x1A7C60);
    PUSH32(esp, 0x001A545Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A545A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A5460
 * Original: 0x001A5460 - 0x001A5523 (195 bytes, 65 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A5460: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BA970);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001A5470u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001A5470: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x461F6C);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001A5480u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001A5480: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001A5488u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001A5488: ;
    ecx = MEM32(0x5BC554);
    edx = edi + 1;
    MEM32(eax + 0x38) = ecx;
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(eax + 0x34) = 1;
    PUSH32(esp, 0x001A54A0u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001A54A0: ;
    ebx = eax;
    PUSH32(esp, 0x001A54A7u); RECOMP_ABI_CALL(0x001F3260u, sub_001F3260); /* call 0x001F3260 */

loc_001A54A7: ;
    MEM32(ebx + 0x38) = eax;
    eax = edi + 2;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebx + 0x26) = 0;
    PUSH32(esp, 0x001A54B9u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001A54B9: ;
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x001A54C2u); RECOMP_ABI_CALL(0x00217FA0u, sub_00217FA0); /* call 0x00217FA0 */

loc_001A54C2: ;
    ecx = edi + 3;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001A54CDu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001A54CD: ;
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x001A54D6u); RECOMP_ABI_CALL(0x00217FA0u, sub_00217FA0); /* call 0x00217FA0 */

loc_001A54D6: ;
    edx = edi + 4;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001A54E1u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001A54E1: ;
    ebx = eax;
    eax = MEM32(0x5BA960);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A5505; /* jne: not equal / not zero */

loc_001A54EC: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A54F7u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001A54F7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A54FDu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001A54FD: ;
    esp = esp + 8;
    MEM32(0x5BA960) = eax;

loc_001A5505: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x461F58);
    PUSH32(esp, 0x461F44);
    PUSH32(esp, 0x461F30);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x001A551Fu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001A551F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A5530
 * Original: 0x001A5530 - 0x001A5536 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5530(void)
{

loc_001A5530: ;
    eax = MEM32(0x5BA974);
    esp += 4; return; /* ret */

}

/**
 * sub_001A5540
 * Original: 0x001A5540 - 0x001A5546 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5540(void)
{

loc_001A5540: ;
    eax = MEM32(0x5BA980);
    esp += 4; return; /* ret */

}

/**
 * sub_001A5550
 * Original: 0x001A5550 - 0x001A555C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5550(void)
{

loc_001A5550: ;
    PUSH32(esp, 0x1A7D10);
    PUSH32(esp, 0x001A555Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A555A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A5560
 * Original: 0x001A5560 - 0x001A5599 (57 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5560(void)
{

loc_001A5560: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BA980);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001A556Fu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001A556F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x461F8C);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001A557Fu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001A557F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x461F88);
    PUSH32(esp, 0x461F84);
    PUSH32(esp, 0x461F80);
    ecx = esi;
    PUSH32(esp, 0x001A5596u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001A5596: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001A55A0
 * Original: 0x001A55A0 - 0x001A565B (187 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A55A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A55A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BA984);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001A55B1u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001A55B1: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x461FB4);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001A55C1u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001A55C1: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001A55C9u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001A55C9: ;
    ebp = eax;
    eax = MEM32(0x5BA900);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A55ED; /* jne: not equal / not zero */

loc_001A55D4: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A55DFu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001A55DF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A55E5u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001A55E5: ;
    esp = esp + 8;
    MEM32(0x5BA900) = eax;

loc_001A55ED: ;
    ecx = edi + 1;
    PUSH32(esp, ecx);
    SET_LO8(ebx, 1);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x001A5600u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001A5600: ;
    ebp = eax;
    PUSH32(esp, 0x001A5607u); RECOMP_ABI_CALL(0x00222F00u, sub_00222F00); /* call 0x00222F00 */

loc_001A5607: ;
    edx = edi + 2;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x001A5618u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001A5618: ;
    ebx = eax;
    eax = MEM32(0x5BA934);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A563C; /* jne: not equal / not zero */

loc_001A5623: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A562Eu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001A562E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A5634u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001A5634: ;
    esp = esp + 8;
    MEM32(0x5BA934) = eax;

loc_001A563C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x461FA8);
    PUSH32(esp, 0x461F9C);
    PUSH32(esp, 0x461F90);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x001A5656u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001A5656: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A5660
 * Original: 0x001A5660 - 0x001A5666 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5660(void)
{

loc_001A5660: ;
    eax = MEM32(0x5BA7E0);
    esp += 4; return; /* ret */

}

/**
 * sub_001A5670
 * Original: 0x001A5670 - 0x001A5676 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5670(void)
{

loc_001A5670: ;
    eax = MEM32(0x5BA80C);
    esp += 4; return; /* ret */

}

/**
 * sub_001A5680
 * Original: 0x001A5680 - 0x001A5686 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5680(void)
{

loc_001A5680: ;
    eax = MEM32(0x5BA804);
    esp += 4; return; /* ret */

}

/**
 * sub_001A5690
 * Original: 0x001A5690 - 0x001A5696 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5690(void)
{

loc_001A5690: ;
    eax = MEM32(0x5BA7B4);
    esp += 4; return; /* ret */

}

/**
 * sub_001A56A0
 * Original: 0x001A56A0 - 0x001A57A8 (264 bytes, 87 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A56A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A56A0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ecx + 0x10;
    esi = 0x68;
    /* nop */

loc_001A56B0: ;
    edi = edx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x10DCD);
    edi = edi & 0xFFFF0000u;
    MEM32(eax + -4) = edi;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = MEM32(eax + -4);
    edi = edx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x10DCD);
    edi = edi >> 0x10;
    ebx = ebx | edi;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x10DCD);
    edi = edi & 0xFFFF0000u;
    MEM32(eax) = edi;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x10DCD);
    edi = edi >> 0x10;
    MEM32(eax + -4) = ebx;
    ebx = MEM32(eax);
    ebx = ebx | edi;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x10DCD);
    edi = edi & 0xFFFF0000u;
    MEM32(eax + 4) = edi;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x10DCD);
    edi = edi >> 0x10;
    MEM32(eax) = ebx;
    ebx = MEM32(eax + 4);
    ebx = ebx | edi;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x10DCD);
    edi = edi & 0xFFFF0000u;
    MEM32(eax + 8) = edi;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x10DCD);
    edi = edi >> 0x10;
    MEM32(eax + 4) = ebx;
    ebx = MEM32(eax + 8);
    ebx = ebx | edi;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x10DCD);
    edi = edi & 0xFFFF0000u;
    MEM32(eax + 0xC) = edi;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x10DCD);
    edi = edi >> 0x10;
    MEM32(eax + 8) = ebx;
    ebx = MEM32(eax + 0xC);
    ebx = ebx | edi;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x10DCD);
    edi = edi & 0xFFFF0000u;
    MEM32(eax + 0x10) = edi;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x10DCD);
    MEM32(eax + 0xC) = ebx;
    ebx = MEM32(eax + 0x10);
    edi = edi >> 0x10;
    ebx = ebx | edi;
    MEM32(eax + 0x10) = ebx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 0x18;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001A56B0; /* jne: not equal / not zero */

loc_001A579B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 8) = 0x270;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A57B0
 * Original: 0x001A57B0 - 0x001A57CD (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A57B0(void)
{

loc_001A57B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x001A57BDu); RECOMP_ABI_CALL(0x0015FDF0u, sub_0015FDF0); /* call 0x0015FDF0 */

loc_001A57BD: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x141E);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x001A57C9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001A57C9: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A57D0
 * Original: 0x001A57D0 - 0x001A58CF (255 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A57D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A57D0: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x270) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 0x270 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001A589C; /* jl: less (signed <) */

loc_001A57DD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx + 0xC;
    edx = edi;
    esi = 0xE3;
    goto loc_001A57F0;

    /* nop */

loc_001A57F0: ;
    ebx = MEM32(edx);
    eax = MEM32(edx + 4);
    eax = eax ^ ebx;
    eax = eax & 0x7FFFFFFF;
    eax = eax ^ ebx;
    ebx = eax;
    ebx = ebx & 1;
    ebp = MEM32(ebx * 4 + 0x3E2724);
    ebx = MEM32(edx + 0x634);
    eax = eax >> 1;
    eax = eax ^ ebp;
    eax = eax ^ ebx;
    MEM32(edx) = eax;
    edx = edx + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001A57F0; /* jne: not equal / not zero */

loc_001A581E: ;
    edx = ecx + 0x398;
    esi = 0x18C;
    /* nop */

loc_001A5830: ;
    ebx = MEM32(edx);
    eax = MEM32(edx + 4);
    eax = eax ^ ebx;
    eax = eax & 0x7FFFFFFF;
    eax = eax ^ ebx;
    ebx = eax;
    ebx = ebx & 1;
    ebp = MEM32(ebx * 4 + 0x3E2724);
    eax = eax >> 1;
    eax = eax ^ ebp;
    eax = eax ^ MEM32(edx + -908);
    MEM32(edx) = eax;
    edx = edx + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001A5830; /* jne: not equal / not zero */

loc_001A585C: ;
    ebx = MEM32(edi);
    eax = MEM32(ecx + 0x9C8);
    edx = MEM32(ecx + 0x9C8);
    eax = eax ^ ebx;
    ebx = MEM32(ecx + 0x63C);
    eax = eax & 0x7FFFFFFF;
    eax = eax ^ edx;
    edx = eax;
    edx = edx & 1;
    edx = MEM32(edx * 4 + 0x3E2724);
    POP32(esp, edi);
    edx = edx ^ ebx;
    POP32(esp, esi);
    eax = eax >> 1;
    edx = edx ^ eax;
    POP32(esp, ebp);
    MEM32(ecx + 0x9C8) = edx;
    MEM32(ecx + 8) = 0;
    POP32(esp, ebx);

loc_001A589C: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(ecx + eax * 4 + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 8) = eax;
    eax = edx;
    eax = eax >> 0xB;
    edx = edx ^ eax;
    ecx = edx;
    ecx = ecx & 0xFF3A58ADu;
    ecx = ecx << 7;
    edx = edx ^ ecx;
    eax = edx;
    eax = eax & 0xFFFFDF8Cu;
    eax = eax << 0xF;
    edx = edx ^ eax;
    eax = edx;
    eax = eax >> 0x12;
    eax = eax ^ edx;
    esp += 4; return; /* ret */

}

/**
 * sub_001A58D0
 * Original: 0x001A58D0 - 0x001A58D6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A58D0(void)
{

loc_001A58D0: ;
    eax = MEM32(0x5BC450);
    esp += 4; return; /* ret */

}

/**
 * sub_001A58E0
 * Original: 0x001A58E0 - 0x001A58E5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A58E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A58E0: ;
    g_seh_ebp = ebp; sub_001E69C0(); return; /* tail jmp 0x001E69C0 */

}

/**
 * sub_001A58F0
 * Original: 0x001A58F0 - 0x001A58F5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A58F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A58F0: ;
    g_seh_ebp = ebp; sub_001E68D0(); return; /* tail jmp 0x001E68D0 */

}

/**
 * sub_001A5900
 * Original: 0x001A5900 - 0x001A594E (78 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001A5900: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001A5930; /* je: equal / zero */

loc_001A5908: ;
    eax = MEM32(esp + 8);
    edx = eax + 0xC;
    PUSH32(esp, edx);
    edx = eax + 8;
    PUSH32(esp, edx);
    edx = eax + 4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A5924u); RECOMP_ABI_CALL(0x003415CFu, sub_003415CF); /* call 0x003415CF */

loc_001A5924: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(4));
    eax = eax - 4;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_001A5930: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001A5945u); RECOMP_ABI_CALL(0x0023BEE0u, sub_0023BEE0); /* call 0x0023BEE0 */

loc_001A5945: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_001A5950
 * Original: 0x001A5950 - 0x001A5973 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5950(void)
{

loc_001A5950: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x001A5972u); RECOMP_ABI_CALL(0x00230B50u, sub_00230B50); /* call 0x00230B50 */

loc_001A5972: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A5980
 * Original: 0x001A5980 - 0x001A59A3 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5980(void)
{

loc_001A5980: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x001A59A2u); RECOMP_ABI_CALL(0x00230BE0u, sub_00230BE0); /* call 0x00230BE0 */

loc_001A59A2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A59B0
 * Original: 0x001A59B0 - 0x001A59D3 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A59B0(void)
{

loc_001A59B0: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x001A59D2u); RECOMP_ABI_CALL(0x002311C0u, sub_002311C0); /* call 0x002311C0 */

loc_001A59D2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A59E0
 * Original: 0x001A59E0 - 0x001A59E5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A59E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A59E0: ;
    g_seh_ebp = ebp; sub_002068B0(); return; /* tail jmp 0x002068B0 */

}

/**
 * sub_001A59F0
 * Original: 0x001A59F0 - 0x001A5A0C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A59F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A59F0: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A5A0B; /* je: equal / zero */

loc_001A59F6: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001A5A0B; /* jne: not equal / not zero */

loc_001A5A06: ;
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_001A5A0B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A5A10
 * Original: 0x001A5A10 - 0x001A5A46 (54 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5A10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A5A10: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001A5A21; /* je: equal / zero */

loc_001A5A1E: ;
    MEM32(eax + -4) = MEM32(eax + -4) + 1;
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001A5A21: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A5A3B; /* je: equal / zero */

loc_001A5A27: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_001A5A3B; /* jne: not equal / not zero */

loc_001A5A33: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A5A3Bu); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_001A5A3B: ;
    eax = MEM32(edi);
    MEM32(esi) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A5A50
 * Original: 0x001A5A50 - 0x001A5A6A (26 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A5A50: ;
    eax = MEM32(ecx + 0x10);
    ecx = MEM32(esp + 8);
    ecx = MEM32(eax + ecx * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001A5A67; /* je: equal / zero */

loc_001A5A64: ;
    MEM32(ecx + -4) = MEM32(ecx + -4) + 1;
    _fa = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001A5A67: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001A5A70
 * Original: 0x001A5A70 - 0x001A5A97 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A5A70: ;
    eax = MEM32(0x5BA8E8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A5A84; /* je: equal / zero */

loc_001A5A79: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A5A96; /* jne: not equal / not zero */

loc_001A5A84: ;
    PUSH32(esp, 0x1A8E20);
    PUSH32(esp, 0x001A5A8Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A5A8E: ;
    eax = MEM32(0x5BA8E8);
    esp = esp + 4;

loc_001A5A96: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A5AA0
 * Original: 0x001A5AA0 - 0x001A5AC7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A5AA0: ;
    eax = MEM32(0x5BA900);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A5AB4; /* je: equal / zero */

loc_001A5AA9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A5AC6; /* jne: not equal / not zero */

loc_001A5AB4: ;
    PUSH32(esp, 0x1A5DF0);
    PUSH32(esp, 0x001A5ABEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A5ABE: ;
    eax = MEM32(0x5BA900);
    esp = esp + 4;

loc_001A5AC6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A5AD0
 * Original: 0x001A5AD0 - 0x001A5B12 (66 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5AD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A5AD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001A5AE6; /* jge: greater or equal (signed >=) */

loc_001A5ADE: ;
    eax = edi + 1;
    MEM32(esi + 8) = eax;
    goto loc_001A5AF3;

loc_001A5AE6: ;
    PUSH32(esp, 0x40);
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001A5AF3u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_001A5AF3: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x10);
    eax = edi;
    eax = eax << 6;
    eax = eax + edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A5B08u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_001A5B08: ;
    esp = esp + 8;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A5B20
 * Original: 0x001A5B20 - 0x001A5B47 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A5B20: ;
    eax = MEM32(0x5BA934);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A5B34; /* je: equal / zero */

loc_001A5B29: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A5B46; /* jne: not equal / not zero */

loc_001A5B34: ;
    PUSH32(esp, 0x1A90B0);
    PUSH32(esp, 0x001A5B3Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A5B3E: ;
    eax = MEM32(0x5BA934);
    esp = esp + 4;

loc_001A5B46: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A5B50
 * Original: 0x001A5B50 - 0x001A5B77 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A5B50: ;
    eax = MEM32(0x5BA93C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A5B64; /* je: equal / zero */

loc_001A5B59: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A5B76; /* jne: not equal / not zero */

loc_001A5B64: ;
    PUSH32(esp, 0x1A9130);
    PUSH32(esp, 0x001A5B6Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A5B6E: ;
    eax = MEM32(0x5BA93C);
    esp = esp + 4;

loc_001A5B76: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A5B80
 * Original: 0x001A5B80 - 0x001A5BA7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A5B80: ;
    eax = MEM32(0x5BA960);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A5B94; /* je: equal / zero */

loc_001A5B89: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A5BA6; /* jne: not equal / not zero */

loc_001A5B94: ;
    PUSH32(esp, 0x1A6090);
    PUSH32(esp, 0x001A5B9Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A5B9E: ;
    eax = MEM32(0x5BA960);
    esp = esp + 4;

loc_001A5BA6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A5BB0
 * Original: 0x001A5BB0 - 0x001A5BD7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A5BB0: ;
    eax = MEM32(0x5BA948);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A5BC4; /* je: equal / zero */

loc_001A5BB9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A5BD6; /* jne: not equal / not zero */

loc_001A5BC4: ;
    PUSH32(esp, 0x1A9180);
    PUSH32(esp, 0x001A5BCEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A5BCE: ;
    eax = MEM32(0x5BA948);
    esp = esp + 4;

loc_001A5BD6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A5BE0
 * Original: 0x001A5BE0 - 0x001A5C07 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A5BE0: ;
    eax = MEM32(0x5BA95C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A5BF4; /* je: equal / zero */

loc_001A5BE9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A5C06; /* jne: not equal / not zero */

loc_001A5BF4: ;
    PUSH32(esp, 0x1A9200);
    PUSH32(esp, 0x001A5BFEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A5BFE: ;
    eax = MEM32(0x5BA95C);
    esp = esp + 4;

loc_001A5C06: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A5C10
 * Original: 0x001A5C10 - 0x001A5C37 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5C10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A5C10: ;
    eax = MEM32(0x5BA968);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A5C24; /* je: equal / zero */

loc_001A5C19: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A5C36; /* jne: not equal / not zero */

loc_001A5C24: ;
    PUSH32(esp, 0x1A7B90);
    PUSH32(esp, 0x001A5C2Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A5C2E: ;
    eax = MEM32(0x5BA968);
    esp = esp + 4;

loc_001A5C36: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A5C40
 * Original: 0x001A5C40 - 0x001A5C64 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5C40(void)
{

loc_001A5C40: ;
    esp = esp - 0x18;
    ecx = esp;
    PUSH32(esp, 0x001A5C4Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A5C4B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E21B8;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_001A5C70
 * Original: 0x001A5C70 - 0x001A5C94 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5C70(void)
{

loc_001A5C70: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x001A5C7Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A5C7B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E2218;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001A5CA0
 * Original: 0x001A5CA0 - 0x001A5CA6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5CA0(void)
{

loc_001A5CA0: ;
    eax = MEM32(0x5BA8C0);
    esp += 4; return; /* ret */

}

/**
 * sub_001A5CB0
 * Original: 0x001A5CB0 - 0x001A5CB6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5CB0(void)
{

loc_001A5CB0: ;
    eax = MEM32(0x5BA8C4);
    esp += 4; return; /* ret */

}

/**
 * sub_001A5CC0
 * Original: 0x001A5CC0 - 0x001A5CC6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5CC0(void)
{

loc_001A5CC0: ;
    eax = MEM32(0x5BA8C8);
    esp += 4; return; /* ret */

}

/**
 * sub_001A5CD0
 * Original: 0x001A5CD0 - 0x001A5CD6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5CD0(void)
{

loc_001A5CD0: ;
    eax = MEM32(0x5BA8CC);
    esp += 4; return; /* ret */

}

/**
 * sub_001A5CE0
 * Original: 0x001A5CE0 - 0x001A5CE6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5CE0(void)
{

loc_001A5CE0: ;
    eax = MEM32(0x5BA8D0);
    esp += 4; return; /* ret */

}

/**
 * sub_001A5CF0
 * Original: 0x001A5CF0 - 0x001A5CF6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5CF0(void)
{

loc_001A5CF0: ;
    eax = MEM32(0x5BA8DC);
    esp += 4; return; /* ret */

}

/**
 * sub_001A5D00
 * Original: 0x001A5D00 - 0x001A5D4F (79 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A5D00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001A5D08u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_001A5D08: ;
    ecx = esi;
    POP32(esp, esi);
    goto loc_001A5D10;

loc_001A5D10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = MEM32(edi + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001A5D44; /* jle: less or equal (signed <=) */

loc_001A5D1E: ;
    edi = edi;

loc_001A5D20: ;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(eax + esi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A5D3F; /* je: equal / zero */

loc_001A5D2A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001A5D3F; /* jne: not equal / not zero */

loc_001A5D3A: ;
    PUSH32(esp, 0x001A5D3Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001A5D3F: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001A5D20; /* jl: less (signed <) */

loc_001A5D44: ;
    MEM32(edi + 8) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A5D50
 * Original: 0x001A5D50 - 0x001A5D56 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5D50(void)
{

loc_001A5D50: ;
    eax = MEM32(0x5BA8E0);
    esp += 4; return; /* ret */

}

/**
 * sub_001A5D60
 * Original: 0x001A5D60 - 0x001A5D66 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5D60(void)
{

loc_001A5D60: ;
    eax = MEM32(0x5BA8E8);
    esp += 4; return; /* ret */

}

/**
 * sub_001A5D70
 * Original: 0x001A5D70 - 0x001A5D94 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5D70(void)
{

loc_001A5D70: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x001A5D7Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A5D7B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E2308;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001A5DA0
 * Original: 0x001A5DA0 - 0x001A5DA6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5DA0(void)
{

loc_001A5DA0: ;
    eax = MEM32(0x5BA8FC);
    esp += 4; return; /* ret */

}

/**
 * sub_001A5DB0
 * Original: 0x001A5DB0 - 0x001A5DB5 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5DB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A5DB0: ;
    g_seh_ebp = ebp; sub_001A57D0(); return; /* tail jmp 0x001A57D0 */

}

/**
 * sub_001A5DC0
 * Original: 0x001A5DC0 - 0x001A5DE4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5DC0(void)
{

loc_001A5DC0: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x001A5DCBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A5DCB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E2370;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001A5DF0
 * Original: 0x001A5DF0 - 0x001A5E34 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A5DF0: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A5E00; /* jne: not equal / not zero */

loc_001A5DF9: ;
    MEM8(0x5BA988) = 1;

loc_001A5E00: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A4C20);
    PUSH32(esp, 0x1A5DC0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3E2AB4);
    PUSH32(esp, 0x1A5AA0);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BA900);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A5E30u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A5E30: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A5E40
 * Original: 0x001A5E40 - 0x001A5E5E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5E40(void)
{

loc_001A5E40: ;
    PUSH32(esp, 0x1A76C0);
    PUSH32(esp, 0x001A5E4Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A5E4A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BA904);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A5E5Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_001A5E5D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A5E60
 * Original: 0x001A5E60 - 0x001A5E66 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5E60(void)
{

loc_001A5E60: ;
    eax = MEM32(0x5BA904);
    esp += 4; return; /* ret */

}

/**
 * sub_001A5E70
 * Original: 0x001A5E70 - 0x001A5E76 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5E70(void)
{

loc_001A5E70: ;
    eax = MEM32(0x5BA908);
    esp += 4; return; /* ret */

}

/**
 * sub_001A5E80
 * Original: 0x001A5E80 - 0x001A5E9E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5E80(void)
{

loc_001A5E80: ;
    PUSH32(esp, 0x1A77A0);
    PUSH32(esp, 0x001A5E8Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A5E8A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BA914);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A5E9Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_001A5E9D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A5EA0
 * Original: 0x001A5EA0 - 0x001A5ECD (45 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5EA0(void)
{

loc_001A5EA0: ;
    esp = esp - 0x48;
    ecx = esp;
    PUSH32(esp, 0x001A5EABu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A5EAB: ;
    ecx = esp + 8;
    MEM32(esp) = 0x3E23E8;
    PUSH32(esp, 0x001A5EBBu); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_001A5EBB: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x48;
    esp += 4; return; /* ret */

}

/**
 * sub_001A5ED0
 * Original: 0x001A5ED0 - 0x001A5EF4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5ED0(void)
{

loc_001A5ED0: ;
    esp = esp - 0xC;
    ecx = esp;
    PUSH32(esp, 0x001A5EDBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A5EDB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E2440;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_001A5F00
 * Original: 0x001A5F00 - 0x001A5F24 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5F00(void)
{

loc_001A5F00: ;
    esp = esp - 0xC;
    ecx = esp;
    PUSH32(esp, 0x001A5F0Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A5F0B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E24C8;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_001A5F30
 * Original: 0x001A5F30 - 0x001A5F4C (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A5F30: ;
    ecx = MEM32(ecx + 8);
    edx = MEM32(ecx + 0xC);
    eax = 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001A5F43; /* jl: less (signed <) */

loc_001A5F3F: ;
    MEM32(ecx + 8) = eax;
    esp += 4; return; /* ret */

loc_001A5F43: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A5F4Bu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_001A5F4B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A5F50
 * Original: 0x001A5F50 - 0x001A5F56 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5F50(void)
{

loc_001A5F50: ;
    eax = MEM32(0x5BA938);
    esp += 4; return; /* ret */

}

/**
 * sub_001A5F60
 * Original: 0x001A5F60 - 0x001A5F66 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5F60(void)
{

loc_001A5F60: ;
    eax = MEM32(0x5BA940);
    esp += 4; return; /* ret */

}

/**
 * sub_001A5F70
 * Original: 0x001A5F70 - 0x001A5F76 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5F70(void)
{

loc_001A5F70: ;
    eax = MEM32(0x5BA944);
    esp += 4; return; /* ret */

}

/**
 * sub_001A5F80
 * Original: 0x001A5F80 - 0x001A5F86 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5F80(void)
{

loc_001A5F80: ;
    eax = MEM32(0x5BA948);
    esp += 4; return; /* ret */

}

/**
 * sub_001A5F90
 * Original: 0x001A5F90 - 0x001A5F96 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5F90(void)
{

loc_001A5F90: ;
    eax = MEM32(0x5BA94C);
    esp += 4; return; /* ret */

}

/**
 * sub_001A5FA0
 * Original: 0x001A5FA0 - 0x001A5FCC (44 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5FA0(void)
{

loc_001A5FA0: ;
    esp = esp - 0x30;
    ecx = esp;
    PUSH32(esp, 0x001A5FABu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A5FAB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E2BD8;
    MEM32(esp + 8) = 0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_001A5FD0
 * Original: 0x001A5FD0 - 0x001A5FEE (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5FD0(void)
{

loc_001A5FD0: ;
    PUSH32(esp, 0x1A9F50);
    PUSH32(esp, 0x001A5FDAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A5FDA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BA958);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A5FEDu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_001A5FED: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A5FF0
 * Original: 0x001A5FF0 - 0x001A5FF6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5FF0(void)
{

loc_001A5FF0: ;
    eax = MEM32(0x5BA958);
    esp += 4; return; /* ret */

}

/**
 * sub_001A6000
 * Original: 0x001A6000 - 0x001A6072 (114 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A6000: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BA958);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001A6010u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_001A6010: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x461FCC);
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0x001A6020u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_001A6020: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x001A6028u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_001A6028: ;
    edi = eax;
    eax = MEM32(0x5BA95C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A604C; /* jne: not equal / not zero */

loc_001A6033: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A603Eu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_001A603E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A6044u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_001A6044: ;
    esp = esp + 8;
    MEM32(0x5BA95C) = eax;

loc_001A604C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x461FC8);
    PUSH32(esp, 0x461FC4);
    PUSH32(esp, 0x461FC0);
    ecx = esi;
    MEM32(edi + 0x38) = eax;
    MEM8(edi + 0x34) = 1;
    MEM8(edi + 0x26) = 0;
    PUSH32(esp, 0x001A606Eu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_001A606E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A6080
 * Original: 0x001A6080 - 0x001A6086 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6080(void)
{

loc_001A6080: ;
    eax = MEM32(0x5BA970);
    esp += 4; return; /* ret */

}

/**
 * sub_001A6090
 * Original: 0x001A6090 - 0x001A60CE (62 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A6090: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A60A0; /* jne: not equal / not zero */

loc_001A6099: ;
    MEM8(0x5BA988) = 1;

loc_001A60A0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, 0x3E2DFC);
    PUSH32(esp, 0x1A5B80);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BA960);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001A60CAu); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A60CA: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A60D0
 * Original: 0x001A60D0 - 0x001A60EE (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A60D0(void)
{

loc_001A60D0: ;
    PUSH32(esp, 0x1A9B00);
    PUSH32(esp, 0x001A60DAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A60DA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BA964);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A60EDu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_001A60ED: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A60F0
 * Original: 0x001A60F0 - 0x001A610C (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A60F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A60F0: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A610B; /* je: equal / zero */

loc_001A60F7: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_001A610B; /* jne: not equal / not zero */

loc_001A6103: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A610Bu); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_001A610B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A6110
 * Original: 0x001A6110 - 0x001A6116 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6110(void)
{

loc_001A6110: ;
    eax = MEM32(0x5BA968);
    esp += 4; return; /* ret */

}

/**
 * sub_001A6120
 * Original: 0x001A6120 - 0x001A6126 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6120(void)
{

loc_001A6120: ;
    eax = MEM32(0x5BA96C);
    esp += 4; return; /* ret */

}

/**
 * sub_001A6130
 * Original: 0x001A6130 - 0x001A614E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6130(void)
{

loc_001A6130: ;
    PUSH32(esp, 0x1A7C60);
    PUSH32(esp, 0x001A613Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A613A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BA970);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A614Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_001A614D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A6150
 * Original: 0x001A6150 - 0x001A61DF (143 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6150(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A6150: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A616F; /* je: equal / zero */

loc_001A615A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001A616F; /* jne: not equal / not zero */

loc_001A616A: ;
    PUSH32(esp, 0x001A616Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001A616F: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A618A; /* je: equal / zero */

loc_001A6176: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_001A618A; /* jne: not equal / not zero */

loc_001A6182: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A618Au); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_001A618A: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A61A5; /* je: equal / zero */

loc_001A6191: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_001A61A5; /* jne: not equal / not zero */

loc_001A619D: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A61A5u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_001A61A5: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A61C1; /* je: equal / zero */

loc_001A61AC: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001A61C1; /* jne: not equal / not zero */

loc_001A61BC: ;
    PUSH32(esp, 0x001A61C1u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001A61C1: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_001A61DE; /* je: equal / zero */

loc_001A61C9: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001A61DE; /* jne: not equal / not zero */

loc_001A61D9: ;
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_001A61DE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A61E0
 * Original: 0x001A61E0 - 0x001A6204 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A61E0(void)
{

loc_001A61E0: ;
    esp = esp - 8;
    ecx = esp;
    PUSH32(esp, 0x001A61EBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A61EB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E2650;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001A6210
 * Original: 0x001A6210 - 0x001A6234 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6210(void)
{

loc_001A6210: ;
    esp = esp - 0xC;
    ecx = esp;
    PUSH32(esp, 0x001A621Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A621B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E26A8;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_001A6240
 * Original: 0x001A6240 - 0x001A6246 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6240(void)
{

loc_001A6240: ;
    eax = MEM32(0x5BA984);
    esp += 4; return; /* ret */

}

/**
 * sub_001A6250
 * Original: 0x001A6250 - 0x001A6262 (18 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6250(void)
{

loc_001A6250: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A625Du); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_001A625D: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A6270
 * Original: 0x001A6270 - 0x001A62A3 (51 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6270(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A6270: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x14);
    ebx = MEM32(edi + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    ebp = ecx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001A629A; /* jle: less or equal (signed <=) */

loc_001A6286: ;
    ecx = MEM32(edi + 0x10);
    edx = MEM32(ecx + esi * 4);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001A6295u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_001A6295: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001A6286; /* jl: less (signed <) */

loc_001A629A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A62B0
 * Original: 0x001A62B0 - 0x001A6314 (100 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A62B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A62B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A62EC; /* jne: not equal / not zero */

loc_001A62BA: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001A62CA; /* jle: less or equal (signed <=) */

loc_001A62C1: ;
    MEM32(esi + 8) = 1;
    goto loc_001A62D5;

loc_001A62CA: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x001A62D5u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_001A62D5: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001A62E3u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_001A62E3: ;
    esp = esp + 8;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001A62EC: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001A62F4u); RECOMP_ABI_CALL(0x001A44A0u, sub_001A44A0); /* call 0x001A44A0 */

loc_001A62F4: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x10);
    edi = eax;
    eax = MEM32(esi + 8);
    eax = eax << 6;
    PUSH32(esp, edx);
    ecx = eax + ecx + -64;
    PUSH32(esp, 0x001A630Du); RECOMP_ABI_CALL(0x00242660u, sub_00242660); /* call 0x00242660 */

loc_001A630D: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A6320
 * Original: 0x001A6320 - 0x001A6385 (101 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A6320: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A635C; /* jne: not equal / not zero */

loc_001A632A: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001A633A; /* jle: less or equal (signed <=) */

loc_001A6331: ;
    MEM32(esi + 8) = 1;
    goto loc_001A6345;

loc_001A633A: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x001A6345u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_001A6345: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001A6353u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_001A6353: ;
    esp = esp + 8;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001A635C: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001A6364u); RECOMP_ABI_CALL(0x001A44A0u, sub_001A44A0); /* call 0x001A44A0 */

loc_001A6364: ;
    edx = MEM32(esi + 8);
    edi = eax;
    eax = MEM32(esi + 0x10);
    edx = edx << 6;
    ecx = edx + eax + -64;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001A637Eu); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_001A637E: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A6390
 * Original: 0x001A6390 - 0x001A63A2 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6390(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A6390: ;
    edx = MEM32(ecx + 8);
    eax = MEM32(ecx + 0x10);
    edx = edx << 6;
    ecx = edx + eax + -64;
    g_seh_ebp = ebp; sub_00242660(); return; /* tail jmp 0x00242660 */

}

/**
 * sub_001A63B0
 * Original: 0x001A63B0 - 0x001A63CB (27 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A63B0(void)
{

loc_001A63B0: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0x10);
    edx = MEM32(esp + 4);
    eax = eax << 6;
    ecx = eax + ecx + -64;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001A63C8u); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_001A63C8: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A63D0
 * Original: 0x001A63D0 - 0x001A6437 (103 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A63D0(void)
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

loc_001A63D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A63D9u); RECOMP_ABI_CALL(0x0022A440u, sub_0022A440); /* call 0x0022A440 */

loc_001A63D9: ;
    esi = eax;
    eax = MEM32(esp + 0x14);
    fp_push(MEMF(eax + 8)); /* fld float */
    esp = esp - 0x14;
    MEMD(esp + 0x10) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    eax = MEM32(esp + 0x2C);
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001A6400u); RECOMP_ABI_CALL(0x002046C0u, sub_002046C0); /* call 0x002046C0 */

loc_001A6400: ;
    eax = MEM32(esi + 8);
    esp = esp + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A640F; /* jne: not equal / not zero */

loc_001A640A: ;
    eax = MEM32(0x46A3C8);

loc_001A640F: ;
    edi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001A641Bu); RECOMP_ABI_CALL(0x001A42F0u, sub_001A42F0); /* call 0x001A42F0 */

loc_001A641B: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_001A6432; /* jne: not equal / not zero */

loc_001A642B: ;
    ecx = esi;
    PUSH32(esp, 0x001A6432u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001A6432: ;
    eax = edi;
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
 * sub_001A6440
 * Original: 0x001A6440 - 0x001A64AE (110 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6440(void)
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

loc_001A6440: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A6449u); RECOMP_ABI_CALL(0x0022A440u, sub_0022A440); /* call 0x0022A440 */

loc_001A6449: ;
    esi = eax;
    eax = MEM32(esp + 0x14);
    fp_push(MEMF(eax + 0xC)); /* fld float */
    esp = esp - 0x1C;
    MEMD(esp + 0x18) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    MEMD(esp + 0x10) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    eax = MEM32(esp + 0x34);
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001A6477u); RECOMP_ABI_CALL(0x002046C0u, sub_002046C0); /* call 0x002046C0 */

loc_001A6477: ;
    eax = MEM32(esi + 8);
    esp = esp + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A6486; /* jne: not equal / not zero */

loc_001A6481: ;
    eax = MEM32(0x46A3C8);

loc_001A6486: ;
    edi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001A6492u); RECOMP_ABI_CALL(0x001A42F0u, sub_001A42F0); /* call 0x001A42F0 */

loc_001A6492: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_001A64A9; /* jne: not equal / not zero */

loc_001A64A2: ;
    ecx = esi;
    PUSH32(esp, 0x001A64A9u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001A64A9: ;
    eax = edi;
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
 * sub_001A64B0
 * Original: 0x001A64B0 - 0x001A6596 (230 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A64B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A64B0: ;
    esp = esp - 8;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3E2F88);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x001A64D0u); RECOMP_ABI_CALL(0x001A63D0u, sub_001A63D0); /* call 0x001A63D0 */

loc_001A64D0: ;
    edx = MEM32(esp + 0x30);
    esi = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x24);
    esp = esp + 0xC;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001A64F5u); RECOMP_ABI_CALL(0x00230DA0u, sub_00230DA0); /* call 0x00230DA0 */

loc_001A64F5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A655B; /* je: equal / zero */

loc_001A64F9: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    ecx = eax + 8;
    PUSH32(esp, ecx);
    edx = eax + 4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0x3E2F74);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A6516u); RECOMP_ABI_CALL(0x003415CFu, sub_003415CF); /* call 0x003415CF */

loc_001A6516: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A6537; /* je: equal / zero */

loc_001A6523: ;
    ecx = MEM32(esi + -4);
    eax = esi + -8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_001A6537; /* jne: not equal / not zero */

loc_001A652F: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A6537u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_001A6537: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A6553; /* je: equal / zero */

loc_001A653F: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_001A6553; /* jne: not equal / not zero */

loc_001A654B: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A6553u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_001A6553: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_001A655B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A6573; /* je: equal / zero */

loc_001A655F: ;
    ecx = MEM32(esi + -4);
    eax = esi + -8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_001A6573; /* jne: not equal / not zero */

loc_001A656B: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A6573u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_001A6573: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A658F; /* je: equal / zero */

loc_001A657B: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_001A658F; /* jne: not equal / not zero */

loc_001A6587: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A658Fu); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_001A658F: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001A65A0
 * Original: 0x001A65A0 - 0x001A667A (218 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A65A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A65A0: ;
    esp = esp - 8;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3E2FAC);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x001A65C0u); RECOMP_ABI_CALL(0x001A6440u, sub_001A6440); /* call 0x001A6440 */

loc_001A65C0: ;
    edx = MEM32(esp + 0x30);
    esi = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x24);
    esp = esp + 0xC;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001A65E5u); RECOMP_ABI_CALL(0x00230DA0u, sub_00230DA0); /* call 0x00230DA0 */

loc_001A65E5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A663F; /* je: equal / zero */

loc_001A65E9: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3E2F94);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001A65FEu); RECOMP_ABI_CALL(0x001A5900u, sub_001A5900); /* call 0x001A5900 */

loc_001A65FE: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    SET_LO8(ebx, LO8(eax));
    if (TEST_Z(_fa, _fb)) goto loc_001A661B; /* je: equal / zero */

loc_001A6607: ;
    ecx = MEM32(esi + -4);
    eax = esi + -8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_001A661B; /* jne: not equal / not zero */

loc_001A6613: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A661Bu); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_001A661B: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A6637; /* je: equal / zero */

loc_001A6623: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_001A6637; /* jne: not equal / not zero */

loc_001A662F: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A6637u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_001A6637: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_001A663F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A6657; /* je: equal / zero */

loc_001A6643: ;
    ecx = MEM32(esi + -4);
    eax = esi + -8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_001A6657; /* jne: not equal / not zero */

loc_001A664F: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A6657u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_001A6657: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A6673; /* je: equal / zero */

loc_001A665F: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_001A6673; /* jne: not equal / not zero */

loc_001A666B: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A6673u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_001A6673: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001A6680
 * Original: 0x001A6680 - 0x001A66C7 (71 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A6680: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001A66A7; /* jge: greater or equal (signed >=) */

loc_001A668E: ;
    edx = MEM32(esi + 0x10);
    eax = edi + 1;
    MEM32(esi + 8) = eax;
    eax = MEM32(esp + 0xC);
    SET_LO16(ecx, MEM16(eax));
    MEM16(edx + edi * 2) = LO16(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001A66A7: ;
    PUSH32(esp, 2);
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001A66B4u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_001A66B4: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esi + 0x10);
    SET_LO16(ecx, MEM16(eax));
    MEM16(edx + edi * 2) = LO16(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A66D0
 * Original: 0x001A66D0 - 0x001A6713 (67 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A66D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A66D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001A66F5; /* jge: greater or equal (signed >=) */

loc_001A66DE: ;
    edx = MEM32(esi + 0x10);
    eax = edi + 1;
    MEM32(esi + 8) = eax;
    eax = MEM32(esp + 0xC);
    SET_LO8(ecx, MEM8(eax));
    MEM8(edi + edx) = LO8(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001A66F5: ;
    PUSH32(esp, 1);
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001A6702u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_001A6702: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esi + 0x10);
    SET_LO8(ecx, MEM8(eax));
    MEM8(edi + edx) = LO8(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001A6720
 * Original: 0x001A6720 - 0x001A6731 (17 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A6720: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001A6730; /* jle: less or equal (signed <=) */

loc_001A6728: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A6730u); RECOMP_ABI_CALL(0x00200AD0u, sub_00200AD0); /* call 0x00200AD0 */

loc_001A6730: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A6740
 * Original: 0x001A6740 - 0x001A6751 (17 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A6740: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001A6750; /* jle: less or equal (signed <=) */

loc_001A6748: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A6750u); RECOMP_ABI_CALL(0x00200AD0u, sub_00200AD0); /* call 0x00200AD0 */

loc_001A6750: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A6760
 * Original: 0x001A6760 - 0x001A6787 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A6760: ;
    eax = MEM32(0x5BA8B0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A6774; /* je: equal / zero */

loc_001A6769: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A6786; /* jne: not equal / not zero */

loc_001A6774: ;
    PUSH32(esp, 0x1A7000);
    PUSH32(esp, 0x001A677Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A677E: ;
    eax = MEM32(0x5BA8B0);
    esp = esp + 4;

loc_001A6786: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A6790
 * Original: 0x001A6790 - 0x001A67B7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A6790: ;
    eax = MEM32(0x5BA8AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A67A4; /* je: equal / zero */

loc_001A6799: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A67B6; /* jne: not equal / not zero */

loc_001A67A4: ;
    PUSH32(esp, 0x1A96E0);
    PUSH32(esp, 0x001A67AEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A67AE: ;
    eax = MEM32(0x5BA8AC);
    esp = esp + 4;

loc_001A67B6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A67C0
 * Original: 0x001A67C0 - 0x001A67E7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A67C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A67C0: ;
    eax = MEM32(0x5BA8A8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A67D4; /* je: equal / zero */

loc_001A67C9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A67E6; /* jne: not equal / not zero */

loc_001A67D4: ;
    PUSH32(esp, 0x1A9E80);
    PUSH32(esp, 0x001A67DEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A67DE: ;
    eax = MEM32(0x5BA8A8);
    esp = esp + 4;

loc_001A67E6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A67F0
 * Original: 0x001A67F0 - 0x001A6817 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A67F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A67F0: ;
    eax = MEM32(0x5BA8BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A6804; /* je: equal / zero */

loc_001A67F9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A6816; /* jne: not equal / not zero */

loc_001A6804: ;
    PUSH32(esp, 0x1A7060);
    PUSH32(esp, 0x001A680Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A680E: ;
    eax = MEM32(0x5BA8BC);
    esp = esp + 4;

loc_001A6816: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A6820
 * Original: 0x001A6820 - 0x001A6847 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A6820: ;
    eax = MEM32(0x5BA8B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A6834; /* je: equal / zero */

loc_001A6829: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A6846; /* jne: not equal / not zero */

loc_001A6834: ;
    PUSH32(esp, 0x1A8D30);
    PUSH32(esp, 0x001A683Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A683E: ;
    eax = MEM32(0x5BA8B8);
    esp = esp + 4;

loc_001A6846: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A6850
 * Original: 0x001A6850 - 0x001A6877 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A6850: ;
    eax = MEM32(0x5BA8B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A6864; /* je: equal / zero */

loc_001A6859: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A6876; /* jne: not equal / not zero */

loc_001A6864: ;
    PUSH32(esp, 0x1A9760);
    PUSH32(esp, 0x001A686Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A686E: ;
    eax = MEM32(0x5BA8B4);
    esp = esp + 4;

loc_001A6876: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A6880
 * Original: 0x001A6880 - 0x001A68A7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A6880: ;
    eax = MEM32(0x5BA8D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A6894; /* je: equal / zero */

loc_001A6889: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A68A6; /* jne: not equal / not zero */

loc_001A6894: ;
    PUSH32(esp, 0x1A72E0);
    PUSH32(esp, 0x001A689Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A689E: ;
    eax = MEM32(0x5BA8D0);
    esp = esp + 4;

loc_001A68A6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A68B0
 * Original: 0x001A68B0 - 0x001A68D7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A68B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A68B0: ;
    eax = MEM32(0x5BA8CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A68C4; /* je: equal / zero */

loc_001A68B9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A68D6; /* jne: not equal / not zero */

loc_001A68C4: ;
    PUSH32(esp, 0x1A7260);
    PUSH32(esp, 0x001A68CEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A68CE: ;
    eax = MEM32(0x5BA8CC);
    esp = esp + 4;

loc_001A68D6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A68E0
 * Original: 0x001A68E0 - 0x001A6907 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A68E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A68E0: ;
    eax = MEM32(0x5BA8C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A68F4; /* je: equal / zero */

loc_001A68E9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A6906; /* jne: not equal / not zero */

loc_001A68F4: ;
    PUSH32(esp, 0x1A71E0);
    PUSH32(esp, 0x001A68FEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A68FE: ;
    eax = MEM32(0x5BA8C8);
    esp = esp + 4;

loc_001A6906: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A6910
 * Original: 0x001A6910 - 0x001A6937 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A6910: ;
    eax = MEM32(0x5BA8C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A6924; /* je: equal / zero */

loc_001A6919: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A6936; /* jne: not equal / not zero */

loc_001A6924: ;
    PUSH32(esp, 0x1A7160);
    PUSH32(esp, 0x001A692Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A692E: ;
    eax = MEM32(0x5BA8C4);
    esp = esp + 4;

loc_001A6936: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A6940
 * Original: 0x001A6940 - 0x001A6967 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A6940: ;
    eax = MEM32(0x5BA8C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A6954; /* je: equal / zero */

loc_001A6949: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A6966; /* jne: not equal / not zero */

loc_001A6954: ;
    PUSH32(esp, 0x1A70E0);
    PUSH32(esp, 0x001A695Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A695E: ;
    eax = MEM32(0x5BA8C0);
    esp = esp + 4;

loc_001A6966: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A6970
 * Original: 0x001A6970 - 0x001A6997 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A6970: ;
    eax = MEM32(0x5BA8D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A6984; /* je: equal / zero */

loc_001A6979: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A6996; /* jne: not equal / not zero */

loc_001A6984: ;
    PUSH32(esp, 0x1A7360);
    PUSH32(esp, 0x001A698Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A698E: ;
    eax = MEM32(0x5BA8D4);
    esp = esp + 4;

loc_001A6996: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A69A0
 * Original: 0x001A69A0 - 0x001A69C7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A69A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A69A0: ;
    eax = MEM32(0x5BA8D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A69B4; /* je: equal / zero */

loc_001A69A9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A69C6; /* jne: not equal / not zero */

loc_001A69B4: ;
    PUSH32(esp, 0x1A8D80);
    PUSH32(esp, 0x001A69BEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A69BE: ;
    eax = MEM32(0x5BA8D8);
    esp = esp + 4;

loc_001A69C6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A69D0
 * Original: 0x001A69D0 - 0x001A69F7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A69D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A69D0: ;
    eax = MEM32(0x5BA8DC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A69E4; /* je: equal / zero */

loc_001A69D9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A69F6; /* jne: not equal / not zero */

loc_001A69E4: ;
    PUSH32(esp, 0x1A73F0);
    PUSH32(esp, 0x001A69EEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A69EE: ;
    eax = MEM32(0x5BA8DC);
    esp = esp + 4;

loc_001A69F6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A6A00
 * Original: 0x001A6A00 - 0x001A6A27 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A6A00: ;
    eax = MEM32(0x5BA8E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A6A14; /* je: equal / zero */

loc_001A6A09: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A6A26; /* jne: not equal / not zero */

loc_001A6A14: ;
    PUSH32(esp, 0x1A9F00);
    PUSH32(esp, 0x001A6A1Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A6A1E: ;
    eax = MEM32(0x5BA8E4);
    esp = esp + 4;

loc_001A6A26: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A6A30
 * Original: 0x001A6A30 - 0x001A6A57 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A6A30: ;
    eax = MEM32(0x5BA8E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A6A44; /* je: equal / zero */

loc_001A6A39: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A6A56; /* jne: not equal / not zero */

loc_001A6A44: ;
    PUSH32(esp, 0x1A7470);
    PUSH32(esp, 0x001A6A4Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A6A4E: ;
    eax = MEM32(0x5BA8E0);
    esp = esp + 4;

loc_001A6A56: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A6A60
 * Original: 0x001A6A60 - 0x001A6A87 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6A60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A6A60: ;
    eax = MEM32(0x5BA8EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A6A74; /* je: equal / zero */

loc_001A6A69: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A6A86; /* jne: not equal / not zero */

loc_001A6A74: ;
    PUSH32(esp, 0x1A7570);
    PUSH32(esp, 0x001A6A7Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A6A7E: ;
    eax = MEM32(0x5BA8EC);
    esp = esp + 4;

loc_001A6A86: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A6A90
 * Original: 0x001A6A90 - 0x001A6AB7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A6A90: ;
    eax = MEM32(0x5BA924);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A6AA4; /* je: equal / zero */

loc_001A6A99: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A6AB6; /* jne: not equal / not zero */

loc_001A6AA4: ;
    PUSH32(esp, 0x1A7880);
    PUSH32(esp, 0x001A6AAEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A6AAE: ;
    eax = MEM32(0x5BA924);
    esp = esp + 4;

loc_001A6AB6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A6AC0
 * Original: 0x001A6AC0 - 0x001A6AE7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A6AC0: ;
    eax = MEM32(0x5BA8F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A6AD4; /* je: equal / zero */

loc_001A6AC9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A6AE6; /* jne: not equal / not zero */

loc_001A6AD4: ;
    PUSH32(esp, 0x1A9800);
    PUSH32(esp, 0x001A6ADEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A6ADE: ;
    eax = MEM32(0x5BA8F0);
    esp = esp + 4;

loc_001A6AE6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A6AF0
 * Original: 0x001A6AF0 - 0x001A6B17 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A6AF0: ;
    eax = MEM32(0x5BA8F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A6B04; /* je: equal / zero */

loc_001A6AF9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A6B16; /* jne: not equal / not zero */

loc_001A6B04: ;
    PUSH32(esp, 0x1A7600);
    PUSH32(esp, 0x001A6B0Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A6B0E: ;
    eax = MEM32(0x5BA8F4);
    esp = esp + 4;

loc_001A6B16: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A6B20
 * Original: 0x001A6B20 - 0x001A6B47 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A6B20: ;
    eax = MEM32(0x5BA8FC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A6B34; /* je: equal / zero */

loc_001A6B29: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A6B46; /* jne: not equal / not zero */

loc_001A6B34: ;
    PUSH32(esp, 0x1A8E80);
    PUSH32(esp, 0x001A6B3Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A6B3E: ;
    eax = MEM32(0x5BA8FC);
    esp = esp + 4;

loc_001A6B46: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A6B50
 * Original: 0x001A6B50 - 0x001A6B77 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A6B50: ;
    eax = MEM32(0x5BA904);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A6B64; /* je: equal / zero */

loc_001A6B59: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A6B76; /* jne: not equal / not zero */

loc_001A6B64: ;
    PUSH32(esp, 0x1A76C0);
    PUSH32(esp, 0x001A6B6Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A6B6E: ;
    eax = MEM32(0x5BA904);
    esp = esp + 4;

loc_001A6B76: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A6B80
 * Original: 0x001A6B80 - 0x001A6BA7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A6B80: ;
    eax = MEM32(0x5BA914);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A6B94; /* je: equal / zero */

loc_001A6B89: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A6BA6; /* jne: not equal / not zero */

loc_001A6B94: ;
    PUSH32(esp, 0x1A77A0);
    PUSH32(esp, 0x001A6B9Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A6B9E: ;
    eax = MEM32(0x5BA914);
    esp = esp + 4;

loc_001A6BA6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A6BB0
 * Original: 0x001A6BB0 - 0x001A6BD7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A6BB0: ;
    eax = MEM32(0x5BA910);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A6BC4; /* je: equal / zero */

loc_001A6BB9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A6BD6; /* jne: not equal / not zero */

loc_001A6BC4: ;
    PUSH32(esp, 0x1A8F10);
    PUSH32(esp, 0x001A6BCEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A6BCE: ;
    eax = MEM32(0x5BA910);
    esp = esp + 4;

loc_001A6BD6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A6BE0
 * Original: 0x001A6BE0 - 0x001A6C07 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A6BE0: ;
    eax = MEM32(0x5BA90C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A6BF4; /* je: equal / zero */

loc_001A6BE9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A6C06; /* jne: not equal / not zero */

loc_001A6BF4: ;
    PUSH32(esp, 0x1A9880);
    PUSH32(esp, 0x001A6BFEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A6BFE: ;
    eax = MEM32(0x5BA90C);
    esp = esp + 4;

loc_001A6C06: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A6C10
 * Original: 0x001A6C10 - 0x001A6C37 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6C10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A6C10: ;
    eax = MEM32(0x5BA908);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A6C24; /* je: equal / zero */

loc_001A6C19: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A6C36; /* jne: not equal / not zero */

loc_001A6C24: ;
    PUSH32(esp, 0x1A7740);
    PUSH32(esp, 0x001A6C2Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A6C2E: ;
    eax = MEM32(0x5BA908);
    esp = esp + 4;

loc_001A6C36: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A6C40
 * Original: 0x001A6C40 - 0x001A6C67 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A6C40: ;
    eax = MEM32(0x5BA920);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A6C54; /* je: equal / zero */

loc_001A6C49: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A6C66; /* jne: not equal / not zero */

loc_001A6C54: ;
    PUSH32(esp, 0x1A7800);
    PUSH32(esp, 0x001A6C5Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A6C5E: ;
    eax = MEM32(0x5BA920);
    esp = esp + 4;

loc_001A6C66: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A6C70
 * Original: 0x001A6C70 - 0x001A6C97 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A6C70: ;
    eax = MEM32(0x5BA91C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A6C84; /* je: equal / zero */

loc_001A6C79: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A6C96; /* jne: not equal / not zero */

loc_001A6C84: ;
    PUSH32(esp, 0x1A8FA0);
    PUSH32(esp, 0x001A6C8Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A6C8E: ;
    eax = MEM32(0x5BA91C);
    esp = esp + 4;

loc_001A6C96: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A6CA0
 * Original: 0x001A6CA0 - 0x001A6CC7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A6CA0: ;
    eax = MEM32(0x5BA918);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A6CB4; /* je: equal / zero */

loc_001A6CA9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A6CC6; /* jne: not equal / not zero */

loc_001A6CB4: ;
    PUSH32(esp, 0x1A9900);
    PUSH32(esp, 0x001A6CBEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A6CBE: ;
    eax = MEM32(0x5BA918);
    esp = esp + 4;

loc_001A6CC6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A6CD0
 * Original: 0x001A6CD0 - 0x001A6CF7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A6CD0: ;
    eax = MEM32(0x5BA930);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A6CE4; /* je: equal / zero */

loc_001A6CD9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A6CF6; /* jne: not equal / not zero */

loc_001A6CE4: ;
    PUSH32(esp, 0x1A78E0);
    PUSH32(esp, 0x001A6CEEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A6CEE: ;
    eax = MEM32(0x5BA930);
    esp = esp + 4;

loc_001A6CF6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A6D00
 * Original: 0x001A6D00 - 0x001A6D27 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A6D00: ;
    eax = MEM32(0x5BA92C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A6D14; /* je: equal / zero */

loc_001A6D09: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A6D26; /* jne: not equal / not zero */

loc_001A6D14: ;
    PUSH32(esp, 0x1A9030);
    PUSH32(esp, 0x001A6D1Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A6D1E: ;
    eax = MEM32(0x5BA92C);
    esp = esp + 4;

loc_001A6D26: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A6D30
 * Original: 0x001A6D30 - 0x001A6D57 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A6D30: ;
    eax = MEM32(0x5BA928);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A6D44; /* je: equal / zero */

loc_001A6D39: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A6D56; /* jne: not equal / not zero */

loc_001A6D44: ;
    PUSH32(esp, 0x1A9980);
    PUSH32(esp, 0x001A6D4Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A6D4E: ;
    eax = MEM32(0x5BA928);
    esp = esp + 4;

loc_001A6D56: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A6D60
 * Original: 0x001A6D60 - 0x001A6D87 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A6D60: ;
    eax = MEM32(0x5BA938);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A6D74; /* je: equal / zero */

loc_001A6D69: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A6D86; /* jne: not equal / not zero */

loc_001A6D74: ;
    PUSH32(esp, 0x1A7990);
    PUSH32(esp, 0x001A6D7Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A6D7E: ;
    eax = MEM32(0x5BA938);
    esp = esp + 4;

loc_001A6D86: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A6D90
 * Original: 0x001A6D90 - 0x001A6DB7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A6D90: ;
    eax = MEM32(0x5BA954);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A6DA4; /* je: equal / zero */

loc_001A6D99: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A6DB6; /* jne: not equal / not zero */

loc_001A6DA4: ;
    PUSH32(esp, 0x1A7AB0);
    PUSH32(esp, 0x001A6DAEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A6DAE: ;
    eax = MEM32(0x5BA954);
    esp = esp + 4;

loc_001A6DB6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A6DC0
 * Original: 0x001A6DC0 - 0x001A6DE7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A6DC0: ;
    eax = MEM32(0x5BA940);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A6DD4; /* je: equal / zero */

loc_001A6DC9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A6DE6; /* jne: not equal / not zero */

loc_001A6DD4: ;
    PUSH32(esp, 0x1A99F0);
    PUSH32(esp, 0x001A6DDEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A6DDE: ;
    eax = MEM32(0x5BA940);
    esp = esp + 4;

loc_001A6DE6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A6DF0
 * Original: 0x001A6DF0 - 0x001A6E17 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A6DF0: ;
    eax = MEM32(0x5BA944);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A6E04; /* je: equal / zero */

loc_001A6DF9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A6E16; /* jne: not equal / not zero */

loc_001A6E04: ;
    PUSH32(esp, 0x1A9A40);
    PUSH32(esp, 0x001A6E0Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A6E0E: ;
    eax = MEM32(0x5BA944);
    esp = esp + 4;

loc_001A6E16: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A6E20
 * Original: 0x001A6E20 - 0x001A6E47 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A6E20: ;
    eax = MEM32(0x5BA94C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A6E34; /* je: equal / zero */

loc_001A6E29: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A6E46; /* jne: not equal / not zero */

loc_001A6E34: ;
    PUSH32(esp, 0x1A9AA0);
    PUSH32(esp, 0x001A6E3Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A6E3E: ;
    eax = MEM32(0x5BA94C);
    esp = esp + 4;

loc_001A6E46: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A6E50
 * Original: 0x001A6E50 - 0x001A6E77 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A6E50: ;
    eax = MEM32(0x5BA970);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A6E64; /* je: equal / zero */

loc_001A6E59: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A6E76; /* jne: not equal / not zero */

loc_001A6E64: ;
    PUSH32(esp, 0x1A7C60);
    PUSH32(esp, 0x001A6E6Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A6E6E: ;
    eax = MEM32(0x5BA970);
    esp = esp + 4;

loc_001A6E76: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A6E80
 * Original: 0x001A6E80 - 0x001A6EA7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6E80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A6E80: ;
    eax = MEM32(0x5BA964);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A6E94; /* je: equal / zero */

loc_001A6E89: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A6EA6; /* jne: not equal / not zero */

loc_001A6E94: ;
    PUSH32(esp, 0x1A9B00);
    PUSH32(esp, 0x001A6E9Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A6E9E: ;
    eax = MEM32(0x5BA964);
    esp = esp + 4;

loc_001A6EA6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A6EB0
 * Original: 0x001A6EB0 - 0x001A6ED7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A6EB0: ;
    eax = MEM32(0x5BA958);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A6EC4; /* je: equal / zero */

loc_001A6EB9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A6ED6; /* jne: not equal / not zero */

loc_001A6EC4: ;
    PUSH32(esp, 0x1A9F50);
    PUSH32(esp, 0x001A6ECEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A6ECE: ;
    eax = MEM32(0x5BA958);
    esp = esp + 4;

loc_001A6ED6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A6EE0
 * Original: 0x001A6EE0 - 0x001A6F07 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6EE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A6EE0: ;
    eax = MEM32(0x5BA96C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A6EF4; /* je: equal / zero */

loc_001A6EE9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A6F06; /* jne: not equal / not zero */

loc_001A6EF4: ;
    PUSH32(esp, 0x1A9290);
    PUSH32(esp, 0x001A6EFEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A6EFE: ;
    eax = MEM32(0x5BA96C);
    esp = esp + 4;

loc_001A6F06: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A6F10
 * Original: 0x001A6F10 - 0x001A6F37 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A6F10: ;
    eax = MEM32(0x5BA974);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A6F24; /* je: equal / zero */

loc_001A6F19: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A6F36; /* jne: not equal / not zero */

loc_001A6F24: ;
    PUSH32(esp, 0x1A7CB0);
    PUSH32(esp, 0x001A6F2Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A6F2E: ;
    eax = MEM32(0x5BA974);
    esp = esp + 4;

loc_001A6F36: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A6F40
 * Original: 0x001A6F40 - 0x001A6F67 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A6F40: ;
    eax = MEM32(0x5BA980);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A6F54; /* je: equal / zero */

loc_001A6F49: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A6F66; /* jne: not equal / not zero */

loc_001A6F54: ;
    PUSH32(esp, 0x1A7D10);
    PUSH32(esp, 0x001A6F5Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A6F5E: ;
    eax = MEM32(0x5BA980);
    esp = esp + 4;

loc_001A6F66: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A6F70
 * Original: 0x001A6F70 - 0x001A6F97 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6F70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A6F70: ;
    eax = MEM32(0x5BA97C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A6F84; /* je: equal / zero */

loc_001A6F79: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A6F96; /* jne: not equal / not zero */

loc_001A6F84: ;
    PUSH32(esp, 0x1A9320);
    PUSH32(esp, 0x001A6F8Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A6F8E: ;
    eax = MEM32(0x5BA97C);
    esp = esp + 4;

loc_001A6F96: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A6FA0
 * Original: 0x001A6FA0 - 0x001A6FC7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A6FA0: ;
    eax = MEM32(0x5BA978);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A6FB4; /* je: equal / zero */

loc_001A6FA9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A6FC6; /* jne: not equal / not zero */

loc_001A6FB4: ;
    PUSH32(esp, 0x1A9B80);
    PUSH32(esp, 0x001A6FBEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A6FBE: ;
    eax = MEM32(0x5BA978);
    esp = esp + 4;

loc_001A6FC6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A6FD0
 * Original: 0x001A6FD0 - 0x001A6FF7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A6FD0: ;
    eax = MEM32(0x5BA984);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A6FE4; /* je: equal / zero */

loc_001A6FD9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A6FF6; /* jne: not equal / not zero */

loc_001A6FE4: ;
    PUSH32(esp, 0x1A9BD0);
    PUSH32(esp, 0x001A6FEEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A6FEE: ;
    eax = MEM32(0x5BA984);
    esp = esp + 4;

loc_001A6FF6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001A7000
 * Original: 0x001A7000 - 0x001A7044 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A7000: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A7010; /* jne: not equal / not zero */

loc_001A7009: ;
    MEM8(0x5BA988) = 1;

loc_001A7010: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A4540);
    PUSH32(esp, 0x1A5C40);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x3E301C);
    PUSH32(esp, 0x1A6760);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BA8B0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A7040u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A7040: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A7050
 * Original: 0x001A7050 - 0x001A7056 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7050(void)
{

loc_001A7050: ;
    eax = MEM32(0x5BA8B8);
    esp += 4; return; /* ret */

}

/**
 * sub_001A7060
 * Original: 0x001A7060 - 0x001A70A4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A7060: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A7070; /* jne: not equal / not zero */

loc_001A7069: ;
    MEM8(0x5BA988) = 1;

loc_001A7070: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A45A0);
    PUSH32(esp, 0x1A5C70);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3E308C);
    PUSH32(esp, 0x1A67F0);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BA8BC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A70A0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A70A0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A70B0
 * Original: 0x001A70B0 - 0x001A70D4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A70B0(void)
{

loc_001A70B0: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x001A70BBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A70BB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E2740;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001A70E0
 * Original: 0x001A70E0 - 0x001A7124 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A70E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A70E0: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A70F0; /* jne: not equal / not zero */

loc_001A70E9: ;
    MEM8(0x5BA988) = 1;

loc_001A70F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A4630);
    PUSH32(esp, 0x1A70B0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3E309C);
    PUSH32(esp, 0x1A6940);
    PUSH32(esp, 0x1A4380);
    PUSH32(esp, 0x21EE90);
    PUSH32(esp, 0x5BA8C0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A7120u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A7120: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A7130
 * Original: 0x001A7130 - 0x001A7154 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7130(void)
{

loc_001A7130: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x001A713Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A713B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E2798;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001A7160
 * Original: 0x001A7160 - 0x001A71A4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A7160: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A7170; /* jne: not equal / not zero */

loc_001A7169: ;
    MEM8(0x5BA988) = 1;

loc_001A7170: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A46B0);
    PUSH32(esp, 0x1A7130);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3E30A8);
    PUSH32(esp, 0x1A6910);
    PUSH32(esp, 0x1A4380);
    PUSH32(esp, 0x21EE90);
    PUSH32(esp, 0x5BA8C4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A71A0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A71A0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A71B0
 * Original: 0x001A71B0 - 0x001A71D4 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A71B0(void)
{

loc_001A71B0: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x001A71BBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A71BB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E27F0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001A71E0
 * Original: 0x001A71E0 - 0x001A7224 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A71E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A71E0: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A71F0; /* jne: not equal / not zero */

loc_001A71E9: ;
    MEM8(0x5BA988) = 1;

loc_001A71F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A4720);
    PUSH32(esp, 0x1A71B0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3E30BC);
    PUSH32(esp, 0x1A68E0);
    PUSH32(esp, 0x1A4380);
    PUSH32(esp, 0x21EE90);
    PUSH32(esp, 0x5BA8C8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A7220u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A7220: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A7230
 * Original: 0x001A7230 - 0x001A7254 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7230(void)
{

loc_001A7230: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x001A723Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A723B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E2848;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001A7260
 * Original: 0x001A7260 - 0x001A72A4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A7260: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A7270; /* jne: not equal / not zero */

loc_001A7269: ;
    MEM8(0x5BA988) = 1;

loc_001A7270: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A47A0);
    PUSH32(esp, 0x1A7230);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3E30CC);
    PUSH32(esp, 0x1A68B0);
    PUSH32(esp, 0x1A4380);
    PUSH32(esp, 0x21EE90);
    PUSH32(esp, 0x5BA8CC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A72A0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A72A0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A72B0
 * Original: 0x001A72B0 - 0x001A72D4 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A72B0(void)
{

loc_001A72B0: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x001A72BBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A72BB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E28A0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001A72E0
 * Original: 0x001A72E0 - 0x001A7324 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A72E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A72E0: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A72F0; /* jne: not equal / not zero */

loc_001A72E9: ;
    MEM8(0x5BA988) = 1;

loc_001A72F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A4820);
    PUSH32(esp, 0x1A72B0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3E30E0);
    PUSH32(esp, 0x1A6880);
    PUSH32(esp, 0x1A4380);
    PUSH32(esp, 0x21EE90);
    PUSH32(esp, 0x5BA8D0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A7320u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A7320: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A7330
 * Original: 0x001A7330 - 0x001A735C (44 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7330(void)
{

loc_001A7330: ;
    esp = esp - 0xC;
    ecx = esp;
    PUSH32(esp, 0x001A733Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A733B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E28F8;
    MEM32(esp + 8) = 0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_001A7360
 * Original: 0x001A7360 - 0x001A73A7 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A7360: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A7370; /* jne: not equal / not zero */

loc_001A7369: ;
    MEM8(0x5BA988) = 1;

loc_001A7370: ;
    PUSH32(esp, 0x461FD0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A48A0);
    PUSH32(esp, 0x1A7330);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x3E30EC);
    PUSH32(esp, 0x1A6970);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BA8D4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A73A3u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A73A3: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A73B0
 * Original: 0x001A73B0 - 0x001A73BD (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A73B0(void)
{

loc_001A73B0: ;
    eax = MEM32(0x5BA8D8);
    MEM32(eax + 0x3C) = 0x1A6B20;
    esp += 4; return; /* ret */

}

/**
 * sub_001A73C0
 * Original: 0x001A73C0 - 0x001A73E4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A73C0(void)
{

loc_001A73C0: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x001A73CBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A73CB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E2950;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001A73F0
 * Original: 0x001A73F0 - 0x001A7434 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A73F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A73F0: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A7400; /* jne: not equal / not zero */

loc_001A73F9: ;
    MEM8(0x5BA988) = 1;

loc_001A7400: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A4900);
    PUSH32(esp, 0x1A73C0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3E30FC);
    PUSH32(esp, 0x1A69D0);
    PUSH32(esp, 0x1A4380);
    PUSH32(esp, 0x21EE90);
    PUSH32(esp, 0x5BA8DC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A7430u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A7430: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A7440
 * Original: 0x001A7440 - 0x001A746C (44 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7440(void)
{

loc_001A7440: ;
    esp = esp - 0x10;
    ecx = esp;
    PUSH32(esp, 0x001A744Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A744B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E29A8;
    MEM32(esp + 8) = 0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001A7470
 * Original: 0x001A7470 - 0x001A74B7 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A7470: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A7480; /* jne: not equal / not zero */

loc_001A7479: ;
    MEM8(0x5BA988) = 1;

loc_001A7480: ;
    PUSH32(esp, 0x461FD8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A4980);
    PUSH32(esp, 0x1A7440);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x3E310C);
    PUSH32(esp, 0x1A6A30);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BA8E0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A74B3u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A74B3: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A74C0
 * Original: 0x001A74C0 - 0x001A7518 (88 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A74C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A74C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A74DF; /* je: equal / zero */

loc_001A74CA: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001A74DF; /* jne: not equal / not zero */

loc_001A74DA: ;
    PUSH32(esp, 0x001A74DFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001A74DF: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A74FB; /* je: equal / zero */

loc_001A74E6: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001A74FB; /* jne: not equal / not zero */

loc_001A74F6: ;
    PUSH32(esp, 0x001A74FBu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001A74FB: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001A7516; /* je: equal / zero */

loc_001A7502: ;
    ecx = MEM32(esi + -4);
    eax = esi + -8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_001A7516; /* jne: not equal / not zero */

loc_001A750E: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001A7516u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_001A7516: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001A7520
 * Original: 0x001A7520 - 0x001A7562 (66 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7520(void)
{

loc_001A7520: ;
    esp = esp - 0x14;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x001A752Du); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A752D: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x3E2A00;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x001A755Bu); RECOMP_ABI_CALL(0x00252C90u, sub_00252C90); /* call 0x00252C90 */

loc_001A755B: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001A7570
 * Original: 0x001A7570 - 0x001A75B7 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A7570: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A7580; /* jne: not equal / not zero */

loc_001A7579: ;
    MEM8(0x5BA988) = 1;

loc_001A7580: ;
    PUSH32(esp, 0x461FE0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A4A70);
    PUSH32(esp, 0x1A7520);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3E3174);
    PUSH32(esp, 0x1A6A60);
    PUSH32(esp, 0x1A4460);
    PUSH32(esp, 0x226510);
    PUSH32(esp, 0x5BA8EC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A75B3u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A75B3: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A75C0
 * Original: 0x001A75C0 - 0x001A75DC (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A75C0(void)
{

loc_001A75C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001A75C8u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_001A75C8: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esi + 0x14);
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 0x20) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001A75E0
 * Original: 0x001A75E0 - 0x001A75F7 (23 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A75E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A75E0: ;
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x1C);
    MEM32(ecx + 0xC) = eax;
    eax = MEM32(ecx + 0x20);
    MEM32(ecx + 0x10) = edx;
    MEM32(ecx + 0x14) = eax;
    g_seh_ebp = ebp; sub_0013D370(); return; /* tail jmp 0x0013D370 */

}

/**
 * sub_001A7600
 * Original: 0x001A7600 - 0x001A7644 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A7600: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A7610; /* jne: not equal / not zero */

loc_001A7609: ;
    MEM8(0x5BA988) = 1;

loc_001A7610: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A4B30);
    PUSH32(esp, 0x1A5D70);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3E31DC);
    PUSH32(esp, 0x1A6AF0);
    PUSH32(esp, 0x1A4380);
    PUSH32(esp, 0x21EE90);
    PUSH32(esp, 0x5BA8F4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A7640u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A7640: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A7650
 * Original: 0x001A7650 - 0x001A767A (42 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7650(void)
{

loc_001A7650: ;
    esp = esp - 0x9CC;
    ecx = esp;
    PUSH32(esp, 0x001A765Eu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A765E: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E2A58;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x9CC;
    esp += 4; return; /* ret */

}

/**
 * sub_001A7680
 * Original: 0x001A7680 - 0x001A768C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7680(void)
{

loc_001A7680: ;
    PUSH32(esp, 0x1A5DF0);
    PUSH32(esp, 0x001A768Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A768A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A7690
 * Original: 0x001A7690 - 0x001A76B4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7690(void)
{

loc_001A7690: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x001A769Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A769B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E2AD0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001A76C0
 * Original: 0x001A76C0 - 0x001A7704 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A76C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A76C0: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A76D0; /* jne: not equal / not zero */

loc_001A76C9: ;
    MEM8(0x5BA988) = 1;

loc_001A76D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A4CA0);
    PUSH32(esp, 0x1A7690);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3E31F8);
    PUSH32(esp, 0x1A6B50);
    PUSH32(esp, 0x1A4380);
    PUSH32(esp, 0x21EE90);
    PUSH32(esp, 0x5BA904);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A7700u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A7700: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A7710
 * Original: 0x001A7710 - 0x001A7734 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7710(void)
{

loc_001A7710: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x001A771Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A771B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E2B28;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001A7740
 * Original: 0x001A7740 - 0x001A7784 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A7740: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A7750; /* jne: not equal / not zero */

loc_001A7749: ;
    MEM8(0x5BA988) = 1;

loc_001A7750: ;
    PUSH32(esp, 0x461FEC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A7710);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3E3208);
    PUSH32(esp, 0x1A6C10);
    PUSH32(esp, 0x1A4490);
    PUSH32(esp, 0x1A7600);
    PUSH32(esp, 0x5BA908);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A7780u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A7780: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A7790
 * Original: 0x001A7790 - 0x001A7796 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7790(void)
{

loc_001A7790: ;
    eax = MEM32(0x5BA910);
    esp += 4; return; /* ret */

}

/**
 * sub_001A77A0
 * Original: 0x001A77A0 - 0x001A77E4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A77A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A77A0: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A77B0; /* jne: not equal / not zero */

loc_001A77A9: ;
    MEM8(0x5BA988) = 1;

loc_001A77B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A4DE0);
    PUSH32(esp, 0x1A5EA0);
    PUSH32(esp, 0x48);
    PUSH32(esp, 0x3E328C);
    PUSH32(esp, 0x1A6B80);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BA914);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A77E0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A77E0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A77F0
 * Original: 0x001A77F0 - 0x001A77F6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A77F0(void)
{

loc_001A77F0: ;
    eax = MEM32(0x5BA91C);
    esp += 4; return; /* ret */

}

/**
 * sub_001A7800
 * Original: 0x001A7800 - 0x001A7844 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A7800: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A7810; /* jne: not equal / not zero */

loc_001A7809: ;
    MEM8(0x5BA988) = 1;

loc_001A7810: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A4E40);
    PUSH32(esp, 0x1A5ED0);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x3E32FC);
    PUSH32(esp, 0x1A6C40);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BA920);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A7840u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A7840: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A7850
 * Original: 0x001A7850 - 0x001A787C (44 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7850(void)
{

loc_001A7850: ;
    esp = esp - 0x24;
    ecx = esp;
    PUSH32(esp, 0x001A785Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A785B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp + 8) = 0;
    MEM32(esp) = 0x3E3188;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_001A7880
 * Original: 0x001A7880 - 0x001A78C4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A7880: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A7890; /* jne: not equal / not zero */

loc_001A7889: ;
    MEM8(0x5BA988) = 1;

loc_001A7890: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A4E80);
    PUSH32(esp, 0x1A7850);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x3E3308);
    PUSH32(esp, 0x1A6A90);
    PUSH32(esp, 0x1A4440);
    PUSH32(esp, 0x1A7360);
    PUSH32(esp, 0x5BA924);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A78C0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A78C0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A78D0
 * Original: 0x001A78D0 - 0x001A78D6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A78D0(void)
{

loc_001A78D0: ;
    eax = MEM32(0x5BA92C);
    esp += 4; return; /* ret */

}

/**
 * sub_001A78E0
 * Original: 0x001A78E0 - 0x001A7924 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A78E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A78E0: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A78F0; /* jne: not equal / not zero */

loc_001A78E9: ;
    MEM8(0x5BA988) = 1;

loc_001A78F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A4EE0);
    PUSH32(esp, 0x1A5F00);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x3E3374);
    PUSH32(esp, 0x1A6CD0);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BA930);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A7920u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A7920: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A7930
 * Original: 0x001A7930 - 0x001A7936 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7930(void)
{

loc_001A7930: ;
    eax = MEM32(0x5BA934);
    esp += 4; return; /* ret */

}

/**
 * sub_001A7940
 * Original: 0x001A7940 - 0x001A798A (74 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7940(void)
{

loc_001A7940: ;
    esp = esp - 0x1C;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x001A794Du); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A794D: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x3E2B80;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x001A7983u); RECOMP_ABI_CALL(0x00252C90u, sub_00252C90); /* call 0x00252C90 */

loc_001A7983: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A7990
 * Original: 0x001A7990 - 0x001A79D4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A7990: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A79A0; /* jne: not equal / not zero */

loc_001A7999: ;
    MEM8(0x5BA988) = 1;

loc_001A79A0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A4F70);
    PUSH32(esp, 0x1A7940);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x3E33DC);
    PUSH32(esp, 0x1A6D60);
    PUSH32(esp, 0x1A4470);
    PUSH32(esp, 0x1A7570);
    PUSH32(esp, 0x5BA938);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A79D0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A79D0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A79E0
 * Original: 0x001A79E0 - 0x001A79E6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A79E0(void)
{

loc_001A79E0: ;
    eax = MEM32(0x5BA93C);
    esp += 4; return; /* ret */

}

/**
 * sub_001A79F0
 * Original: 0x001A79F0 - 0x001A7A1C (44 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A79F0(void)
{

loc_001A79F0: ;
    esp = esp - 0x1C;
    ecx = esp;
    PUSH32(esp, 0x001A79FBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A79FB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E2C30;
    MEM32(esp + 0x18) = 0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A7A20
 * Original: 0x001A7A20 - 0x001A7A4C (44 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7A20(void)
{

loc_001A7A20: ;
    esp = esp - 0x1C;
    ecx = esp;
    PUSH32(esp, 0x001A7A2Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A7A2B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E2C90;
    MEM32(esp + 0x18) = 0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A7A50
 * Original: 0x001A7A50 - 0x001A7A7E (46 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7A50(void)
{

loc_001A7A50: ;
    esp = esp - 0x38;
    ecx = esp;
    PUSH32(esp, 0x001A7A5Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A7A5B: ;
    eax = 0; /* xor self */
    MEM32(esp + 8) = eax;
    MEM32(esp + 0x30) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E2CF0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_001A7A80
 * Original: 0x001A7A80 - 0x001A7AAC (44 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7A80(void)
{

loc_001A7A80: ;
    esp = esp - 0x18;
    ecx = esp;
    PUSH32(esp, 0x001A7A8Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A7A8B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E2D48;
    MEM32(esp + 0x14) = 0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_001A7AB0
 * Original: 0x001A7AB0 - 0x001A7AF7 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7AB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A7AB0: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A7AC0; /* jne: not equal / not zero */

loc_001A7AB9: ;
    MEM8(0x5BA988) = 1;

loc_001A7AC0: ;
    PUSH32(esp, 0x461FF4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A51E0);
    PUSH32(esp, 0x1A5FA0);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x3E3444);
    PUSH32(esp, 0x1A6D90);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BA954);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A7AF3u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A7AF3: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A7B00
 * Original: 0x001A7B00 - 0x001A7B2C (44 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7B00(void)
{

loc_001A7B00: ;
    esp = esp - 0xC;
    ecx = esp;
    PUSH32(esp, 0x001A7B0Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A7B0B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E2DA8;
    MEM32(esp + 8) = 0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_001A7B30
 * Original: 0x001A7B30 - 0x001A7B36 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7B30(void)
{

loc_001A7B30: ;
    eax = MEM32(0x5BA95C);
    esp += 4; return; /* ret */

}

/**
 * sub_001A7B40
 * Original: 0x001A7B40 - 0x001A7B4C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7B40(void)
{

loc_001A7B40: ;
    PUSH32(esp, 0x1A6090);
    PUSH32(esp, 0x001A7B4Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001A7B4A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001A7B50
 * Original: 0x001A7B50 - 0x001A7B56 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7B50(void)
{

loc_001A7B50: ;
    eax = MEM32(0x5BA964);
    esp += 4; return; /* ret */

}

/**
 * sub_001A7B60
 * Original: 0x001A7B60 - 0x001A7B8E (46 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7B60(void)
{

loc_001A7B60: ;
    esp = esp - 0x38;
    ecx = esp;
    PUSH32(esp, 0x001A7B6Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A7B6B: ;
    eax = 0; /* xor self */
    MEM32(esp + 8) = eax;
    MEM32(esp + 0x30) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E2E10;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_001A7B90
 * Original: 0x001A7B90 - 0x001A7BD7 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A7B90: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A7BA0; /* jne: not equal / not zero */

loc_001A7B99: ;
    MEM8(0x5BA988) = 1;

loc_001A7BA0: ;
    PUSH32(esp, 0x461FFC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A5390);
    PUSH32(esp, 0x1A7B60);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x3E3514);
    PUSH32(esp, 0x1A5C10);
    PUSH32(esp, 0x1A44F0);
    PUSH32(esp, 0x1A7AB0);
    PUSH32(esp, 0x5BA968);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A7BD3u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A7BD3: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A7BE0
 * Original: 0x001A7BE0 - 0x001A7C0C (44 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7BE0(void)
{

loc_001A7BE0: ;
    esp = esp - 0x10;
    ecx = esp;
    PUSH32(esp, 0x001A7BEBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A7BEB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E2E68;
    MEM32(esp + 0xC) = 0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001A7C10
 * Original: 0x001A7C10 - 0x001A7C5A (74 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7C10(void)
{

loc_001A7C10: ;
    esp = esp - 0x1C;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x001A7C1Du); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A7C1D: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x3E2EC8;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x001A7C53u); RECOMP_ABI_CALL(0x001A6150u, sub_001A6150); /* call 0x001A6150 */

loc_001A7C53: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A7C60
 * Original: 0x001A7C60 - 0x001A7CA7 (71 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A7C60: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A7C70; /* jne: not equal / not zero */

loc_001A7C69: ;
    MEM8(0x5BA988) = 1;

loc_001A7C70: ;
    PUSH32(esp, 0x462004);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A5460);
    PUSH32(esp, 0x1A7C10);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x3E352C);
    PUSH32(esp, 0x1A6E50);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BA970);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A7CA3u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A7CA3: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A7CB0
 * Original: 0x001A7CB0 - 0x001A7CF1 (65 bytes, 18 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A7CB0: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A7CC0; /* jne: not equal / not zero */

loc_001A7CB9: ;
    MEM8(0x5BA988) = 1;

loc_001A7CC0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A61E0);
    PUSH32(esp, 8);
    PUSH32(esp, 0x3E3538);
    PUSH32(esp, 0x1A6F10);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BA974);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A7CEDu); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A7CED: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A7D00
 * Original: 0x001A7D00 - 0x001A7D06 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7D00(void)
{

loc_001A7D00: ;
    eax = MEM32(0x5BA97C);
    esp += 4; return; /* ret */

}

/**
 * sub_001A7D10
 * Original: 0x001A7D10 - 0x001A7D54 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7D10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001A7D10: ;
    SET_LO8(eax, MEM8(0x5BA988));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001A7D20; /* jne: not equal / not zero */

loc_001A7D19: ;
    MEM8(0x5BA988) = 1;

loc_001A7D20: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A5560);
    PUSH32(esp, 0x1A6210);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x3E35A4);
    PUSH32(esp, 0x1A6F40);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BA980);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001A7D50u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_001A7D50: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001A7D60
 * Original: 0x001A7D60 - 0x001A7DA2 (66 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A7D60(void)
{

loc_001A7D60: ;
    esp = esp - 0x14;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x001A7D6Du); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_001A7D6D: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x3E2F20;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x001A7D9Bu); RECOMP_ABI_CALL(0x00297A30u, sub_00297A30); /* call 0x00297A30 */

loc_001A7D9B: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}
